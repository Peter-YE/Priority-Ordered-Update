clear all;
close all;
load('mnist.mat');
testX = im2double(testX);
testY = double(testY');
for i = 1:length(testY)
    if (testY(i) ==0)
        testY(i) = 10;
    end
end
[testY,ind] = sort(testY);
for i = 1:length(ind)
    tempX(i,:) = testX(ind(i),:);
end
testX = tempX;