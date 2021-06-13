load('matlab.mat');
Theta1_fast = Theta1;
Theta2_fast = Theta2;
mean1 = sum(sum(abs(Theta1)))/(25*401*20);
mean2 = sum(sum(abs(Theta1)))/(10*26*20);
for i = 1:25   
    for j = 1:401
        if abs(Theta1(i,j))<=mean1
            Theta1_fast(i,j) = 0;
        end
    end
end
for i = 1:10
    for j = 1:26
        if abs(Theta2(i,j))<=mean2
            Theta2_fast(i,j) = 0;
        end
    end
end


tic
for i = 1:2000
    pred = classification(Theta1, Theta2, X);
end
toc
fprintf('\nTraining Set Accuracy: %f\n', mean(double(pred == y)) * 100);
fprintf('-----------------------\n');
tic
for i = 1:2000
    pred = classification(Theta1_fast, Theta2_fast, X);
end
toc
fprintf('\nTraining Set Accuracy: %f\n', mean(double(pred == y)) * 100);

function p = classification(Theta1, Theta2, X)
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

function g = sigmoid(z)
%SIGMOID Compute sigmoid functoon
%   J = SIGMOID(z) computes the sigmoid of z.

g = 1.0 ./ (1.0 + exp(-z));
end

function g = sigmoidGradient(z)
g = zeros(size(z));
g = sigmoid(z).*(1-sigmoid(z));
end
