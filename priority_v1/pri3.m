%% Machine Learning Online Class - Exercise 4 Neural Network Learning


%% Initialization
clear ; close all; clc

%% Setup the parameters
input_layer_size  = 400;  % 20x20 Input Images of Digits
hidden_layer_size = 250;   % 25 hidden units
num_labels = 10;          % 10 labels, from 1 to 10   

%% =========== Part 1: Loading and Visualizing Data =============


% Load Training Data
fprintf('Loading and Visualizing Data ...\n')

% load('data.mat');
filename = 'dataX.bin';
hfile = fopen(filename, 'r');
X = fread(hfile, 'double');
X = reshape(X,[400,5000]);
X = X';
fclose(hfile);
filename = 'dataY.bin';
hfile = fopen(filename, 'r');
y = fread(hfile, 'double');
fclose(hfile);

filename = 'n-250-1.bin';
hfile = fopen(filename, 'r');
Theta1 = fread(hfile, 'double');
Theta1 = reshape(Theta1,[401,250]);
Theta1 = Theta1';
fclose(hfile);
filename = 'n-250-2.bin';
hfile = fopen(filename, 'r');
Theta2 = fread(hfile, 'double');
Theta2 = reshape(Theta2,[251,10]);
Theta2 = Theta2';
fclose(hfile);

m = size(X, 1);



%% ================= Part 6: Implement Classification =================
%  After training the neural network, we would like to use it to predict
%  the labels. You will now implement the "predict" function to use the
%  neural network to predict the labels of the training set. This lets
%  you compute the training set accuracy.


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
mask = logical(ones(1,25));
mask(ind) = 0;

time_order = 0;
time_classification = 0;
for iteration = 1:10

    [pred(1,1),h1,h2] = classification(Theta1, Theta2, X(1,:));
    

    for i = 2:5000
        [pred(i,1),h1,mask,time1,time2] = ordering(Theta1, Theta2, X(i,:),X(i-1,:),h1);
        time_classification = time2 + time_classification;
        time_order = time1 + time_order;
    end
    
end

fprintf('\nTraining Set Accuracy: %f\n', mean(double(pred == y(1:5000))) * 100);

tic
for iteration = 1:10
    [pred(1,1),h1,h2] = classification(Theta1, Theta2, X(1,:));
    for i = 2:5000
        if mod(i,5) == 0
            [pred(i,1),h1,mask] = ordering(Theta1, Theta2, X(i,:),X(i-1,:),h1);
        else
            [pred(i,1),h1,h2] = ordering2(Theta1, Theta2, X(i,:), mask(1:3),h1);
        end
    end
end
toc
fprintf('\nTraining Set Accuracy: %f\n', mean(double(pred == y(1:5000))) * 100);



%% =================== Function: ordering ===================
function [p,h1,mask1,time1,time2] = ordering(Theta1, Theta2, X_in,X_old,h1_old)
    tic
    mask = X_in - X_old == 0;
    mark1 = [1 mask] * abs(Theta1');
    [~,ind] = maxk(mark1,4);
    %ind = sort(ind);
    mask1 = logical(ones(1,size(Theta1, 1)));
    mask1(ind) = 0;
    time1 = toc;
    
    tic
    h1 = h1_old;
    h1(mask1) = sigmoid([1 X_in] * Theta1(mask1,:)');
    h2 = sigmoid([1 h1] * Theta2');
    [~, p] = max(h2, [], 2);
    time2 = toc;

end

%% =================== Function: ordering2 ===================
function [p,h1,h2] = ordering2(Theta1, Theta2, X_in,mask,h1_old)
    h1 = h1_old;
    h1(mask) = sigmoid([1 X_in] * Theta1(mask,:)');
    h2 = sigmoid([1 h1] * Theta2');
    [~, p] = max(h2, [], 2);

end

%% =================== Function: cost ===================
function [J grad] = nnCost(nn_params, ...
                                   input_layer_size, ...
                                   hidden_layer_size, ...
                                   num_labels, ...
                                   X, y, lambda)

    % Reshape nn_params back into the parameters Theta1 and Theta2, the weight matrices
    % for our 2 layer neural network
    Theta1 = reshape(nn_params(1:hidden_layer_size * (input_layer_size + 1)), ...
                     hidden_layer_size, (input_layer_size + 1));   

    Theta2 = reshape(nn_params((1 + (hidden_layer_size * (input_layer_size + 1))):end), ...
                     num_labels, (hidden_layer_size + 1));


    m = size(X, 1); 
    J = 0;
    Theta1_grad = zeros(size(Theta1));
    Theta2_grad = zeros(size(Theta2));
    Delta2 = 0;
    Delta1 = 0;

    y_v = zeros(length(y),num_labels);
    for i = 1: length(y)
        y_v(i,y(i)) = 1;
    end
    % Forward Propagation
    a1 = [ones(m, 1) X];
    z2 = a1*Theta1';
    a2 = sigmoid(z2);
    a2 = [ones(m, 1) a2];
    a3 = sigmoid(a2*Theta2');
    J =  -sum(sum(y_v.*log(a3)+(1-y_v).*log(1-a3)))/m;
    tmp = (lambda/(2*m))*(sum(sum(Theta1(:,2:end).^2))+sum(sum(Theta2(:,2:end).^2)));
    J = J+tmp;
    % Back Propagation
    
    for i = 1:m
        d3 = a3 - y_v;
        d2_tmp = d3*Theta2;
        d2 = d2_tmp(:,2:end).*sigmoidGradient(z2); 
        Delta2 = Delta2 + d3'*a2;
        Delta1 = Delta1 + d2'*a1;
    end

    Theta2_grad = Theta2_grad + 1/m * Delta2;
    Theta1_grad = Theta1_grad + 1/m * Delta1;

    % Unroll gradients
    grad = ([Theta1_grad(:);Theta2_grad(:)]+lambda*[Theta1(:);Theta2(:)])/m;

end

%% ================ Function: Classification ================
function [p,h1,h2] = classification(Theta1, Theta2, X)
%PREDICT Predict the label of an input given a trained neural network
%   p = PREDICT(Theta1, Theta2, X) outputs the predicted label of X given the
%   trained weights of a neural network (Theta1, Theta2)

% Useful values
m = size(X, 1);
num_labels = size(Theta2, 1);
p = zeros(size(X, 1), 1);
h1 = sigmoid([ones(m, 1) X] * Theta1');
h2 = sigmoid([ones(m, 1) h1] * Theta2');
[value, p] = max(h2, [], 2);


end

%% ================ Function: Random weights initialisation ================
function W = randWeights(L_in, L_out)
%RANDINITIALIZEWEIGHTS Randomly initialize the weights of a layer with L_in
%incoming connections and L_out outgoing connections
%   W = RANDINITIALIZEWEIGHTS(L_in, L_out) randomly initializes the weights 
%   of a layer with L_in incoming connections and L_out outgoing 
%   connections. 

W = zeros(L_out, 1 + L_in);
epsilon_init = 0.12;
W = rand(L_out, 1 + L_in) * 2 * epsilon_init - epsilon_init;

end

%% ================ Function: Sigmoid ================
function g = sigmoid(z)
%SIGMOID Compute sigmoid functoon
%   J = SIGMOID(z) computes the sigmoid of z.

g = 1.0 ./ (1.0 + exp(-z));
end

function g = sigmoidGradient(z)
g = zeros(size(z));
g = sigmoid(z).*(1-sigmoid(z));
end
