
%% Initialization
clear ; close all; clc

%% Setup the parameters
input_layer_size  = 400;  % 20x20 Input Images of Digits
hidden_layer_size = 200;   % 25 hidden units
num_labels = 10;          % 10 labels, from 1 to 10 

k = 4*round(hidden_layer_size/5);
%k=100;

%% =========== Part 1: Loading and Visualizing Data =============


% Load Training Data
fprintf('Loading and Visualizing Data ...\n')

load('data.mat');
m = size(X, 1);

load('n-200.mat')


%% ================= Part 6: Implement Classification =================


time_classification0 = 0;

for iteration = 1: 10
    for i = 1:5000
        tic
        [pred(i,1),h1,h2] = classification(Theta1, Theta2, X(i,:));
        time_classification0 = toc + time_classification0;
    end
end


fprintf('\nTraining Set Accuracy: %f\n', mean(double(pred == y(1:5000))) * 100);

ind = [1,9];
mask = logical(ones(1,200));
mask(ind) = 0;

time_order = 0;
time_classification = 0;
for iteration = 1:10

    [pred(1,1),h1,h2] = classification(Theta1, Theta2, X(1,:));

    for i = 2:5000
        [pred(i,1),h1,mask,time1,time2] = ordering(Theta1, Theta2, X(i,:),X(i-1,:),h1,k);
        time_classification = time2 + time_classification;
        time_order = time1 + time_order;
    end
    
end

fprintf('\nTraining Set Accuracy: %f\n', mean(double(pred == y(1:5000))) * 100);












