clear all;
% load('dataX.mat');
% % load('dataY.mat');
% X = X';
% y = double(y);
% fileID = fopen('dataX.bin','w');
% fwrite(fileID,X,'double');
% fclose(fileID);
% fileID = fopen('dataY.bin','w');
% fwrite(fileID,y,'double');
% fclose(fileID);
load('testdata.mat');
testX = testX';
fileID = fopen('testX.bin','w');
fwrite(fileID,testX,'double');
fclose(fileID);
fileID = fopen('testY.bin','w');
fwrite(fileID,testY,'double');
fclose(fileID);



layer2 = [25,50,75,100,150,200,250,300,350,400];
for i = 1:10
    load(sprintf('n-%d-1.mat',layer2(i)));
    load(sprintf('n-%d-2.mat',layer2(i)));
    % Theta1 = Theta1';
    % Theta2 = Theta2';
    fileID = fopen(sprintf('n-%d-1.bin',layer2(i)),'w');
    fwrite(fileID,Theta1,'double');
    fclose(fileID);
    fileID = fopen(sprintf('n-%d-2.bin',layer2(i)),'w');
    fwrite(fileID,Theta2,'double');
    fclose(fileID);

end




