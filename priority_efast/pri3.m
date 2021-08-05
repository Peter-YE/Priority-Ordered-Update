
%% Initialization
clear all ; clc

%% Setup the parameters
input_layer_size  = 400;  % 20x20 Input Images of Digits
hidden_layer_size = 25;   % 25 hidden units
num_labels = 10;          % 10 labels, from 1 to 10 

k = 4*round(hidden_layer_size/5);


%% =========== Part 1: Loading and Visualizing Data =============


% Load Training Data
fprintf('Loading and Visualizing Data ...\n')

load('data.mat');
m = size(X, 1);

load('n-25.mat')

%% ================= Part 6: Implement Classification =================


time_classification0 = 0;

for iteration = 1: 10
    for i = 1:5000
        tic
        [pred(i,1),h1(i,:),h2(i,:)] = classification(Theta1, Theta2, X(i,:));
        
        time_classification0 = toc + time_classification0;
    end
end


fprintf('\nTraining Set Accuracy: %f\n', mean(double(pred == y(1:5000))) * 100);

%% FAST algorithm
for h = 1:25
    a(h) = min(h1(:,h));
    b(h) = max(h1(:,h));
end

M = 4;
N = 1601;
%wh = (N-1)/(2*M);
wh = (1:h)*2*M;
for n = 1:N
    s(n) = 2*pi*n/N;
    for h = 1:25
        Z(n,h) = (b(h)+a(h))/2 + ( (b(h)-a(h))/pi ) * asin(sin(wh(h)*s(n)+wh(h)*2*pi));
    end
end

for n=1:N
    f(n,:) = sigmoid([1 Z(n,:)] * Theta2');
end

Fs = 1600;            % Sampling frequency                    
T = 1/Fs;             % Sampling period       
L = 1601;             % Length of signal
t = (0:L-1)*T; 

for i = 1:10
    Y(:,i) = fft(f(:,i));
    P2 = abs(Y(:,i).^2)/L;
    P1(:,i) = P2(1:L/2+1);
    P1(2:end-1,i) = 2*P1(2:end-1,i);
end
% y = 1;
Vy = sum(P1(2:end,1));


freq = Fs*(0:(L)/2)/(L);
figure;

stem(freq,P1(:,10));





