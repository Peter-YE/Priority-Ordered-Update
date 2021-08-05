
%% Initialization
clear ; clc; close all;

%% Setup the parameters
input_layer_size  = 400;  % 20x20 Input Images of Digits
hidden_layer_size = 25;   % 25 hidden units
num_labels = 10;          % 10 labels, from 1 to 10 

k = 4*round(hidden_layer_size/5);


%% ===========  Loading Data =============

load('data.mat');
m = size(X, 1);

load('n-25.mat')


%% ================= Classification =================

for iteration = 1: 10
    for i = 1:5000
        [pred(i,1),h1(i,:),h2(i,:)] = classification(Theta1, Theta2, X(i,:));
    end
end


%% FAST algorithm
for h = 1:hidden_layer_size
    a(h) = min(h1(:,h));
    b(h) = max(h1(:,h));
end

M = 4;
N = 1601;

h = 1:hidden_layer_size;
wh = nthprime(h);
%wh = [7 13 23 31 41 47 53 67 71 79 89 97 103 109 113 127 131 139 151 157 167 173 181 191 199];
for n = 1:N
    s(n) = 2*pi*n/N;
    for h = 1:hidden_layer_size
        Z(n,h) = (b(h)+a(h))/2 + ( (b(h)-a(h))/pi ) * asin(sin(wh(h)*s(n)));
    end
end

for n=1:N
    f(n,:) = sigmoid([1 Z(n,:)] * Theta2');
end

Fs = N-1;            % Sampling frequency                    
T = 1/Fs;             % Sampling period       
L = N;             % Length of signal
t = (0:L-1)*T; 

for i = 1:10
    Y(:,i) = fft(f(:,i));
    P2 = abs(Y(:,i).^2)/L;
    P1(:,i) = P2(1:(L-1)/2+1);
    P1(2:end-1,i) = 2*P1(2:end-1,i);
end

freq = Fs*(0:(L-1)/2)/(L-1);
figure;
stem(freq,P1(:,10));
%% FAST
Vh = zeros(hidden_layer_size,10);
for out = 1:10
    Vy = sum(P1(2:end,out));  
    for i = 2:length(P1(:,out))
        for j = 1:hidden_layer_size
            if  mod(i-1,wh(j))==0
                Vh(j,out) = Vh(j,out) + P1(i,out);
            end
        end
    end
    Si(:,out) = Vh(:,out)/Vy;

end

%% EFAST
for out = 1:10
    for w = M*hidde_layer_size+1:2*M*wh(h)
end

for out = 1:10
    [~,Smax(out)] = max(Si(:,out));
end



