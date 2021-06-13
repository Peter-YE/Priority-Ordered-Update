function [J grad] = nnCostFunction(nn_params, ...
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
a1 = [ones(m, 1) X];
z2 = a1*Theta1';
a2 = sigmoid(z2);
a2 = [ones(m, 1) a2];
a3 = sigmoid(a2*Theta2');
% for i = 1:m
%     for k = 1: num_labels
J =  -sum(sum(y_v.*log(a3)+(1-y_v).*log(1-a3)))/m;
tmp = (lambda/(2*m))*(sum(sum(Theta1(:,2:end).^2))+sum(sum(Theta2(:,2:end).^2)));
J = J+tmp;
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
