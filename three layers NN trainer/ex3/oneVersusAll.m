%% Machine Learning: One-vs-all


%% Initialization
clear ; close all; clc

%% Setup the parameters you will use for this part of the exercise
input_layer_size  = 400;  % 20x20 Input Images of Digits
num_labels = 10;          % 10 labels, from 1 to 10   
                          % (mapped "0" to label 10)

%% =========== Part 1: Loading and Visualizing Data =============

% Load Training Data
fprintf('Loading and Visualizing Data ...\n')

load('data.mat'); % training data stored in arrays X, y
m = size(X, 1);

% % display data
% rand_indices = randperm(m);
% sel = X(rand_indices(1:100), :);
% displayData(sel);
% 
% fprintf('Program paused. Press enter to continue.\n');
% pause;

%% ============ Part 2: Vectorize Logistic Regression ============

fprintf('\nTraining One-vs-All Logistic Regression...\n')

lambda = 0.1;
[all_theta] = training(X, y, num_labels, lambda);

fprintf('Program paused. Press enter to continue.\n');
pause;



%% ================ Part 3: classification ================

pred = classification(all_theta, X);

fprintf('\nTraining Set Accuracy: %f\n', mean(double(pred == y)) * 100);


%% ================ Function: Cost function ================
function [J, grad] = cost(theta, X, y, lambda)
    m = length(y); % number of training examples
    J = 0;
    grad = zeros(size(theta));
    z = X*theta;
    h = sigmoid(z);
    J = sum(-y.*log(h)-(1-y).*log(1-h))/m+(lambda/(2*m))*theta(2:end)'*theta(2:end);
    grad = (1/m)*X'*(h-y);
    grad(2:end) = grad(2:end)+(lambda/m)*theta(2:end);
    grad = grad(:);

end

%% ================ Function: training ================
function [all_theta] = training(X, y, num_labels, lambda)
    m = size(X, 1);
    n = size(X, 2);

    all_theta = zeros(num_labels, n + 1);
    % Add ones to the X data matrix
    X = [ones(m, 1) X];
    initial_theta = zeros(n + 1, 1);
    options = optimset('GradObj', 'on', 'MaxIter', 50);

    for k = 1:num_labels
        [all_theta(k,:)] = fmincg (@(t)(cost(t, X, (y == k), lambda)), initial_theta, options);
    end

end


function p = classification(all_theta, X)

m = size(X, 1);
num_labels = size(all_theta, 1);

% You need to return the following variables correctly 
p = zeros(size(X, 1), 1);

% Add ones to the X data matrix
X = [ones(m, 1) X];

[value, ind] = max(sigmoid(all_theta*X'),[],1);
p = ind';


end


