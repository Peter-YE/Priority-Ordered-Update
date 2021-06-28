% load('data.mat');
% X = X';
% fileID = fopen('dataX.bin','w');
% fwrite(fileID,X,'double');
% fclose(fileID);
% fileID = fopen('dataY.bin','w');
% fwrite(fileID,y,'double');
% fclose(fileID);
% 
% clear variables;
% 
% filename = 'dataX.bin';
% hfile = fopen(filename, 'r');
% datar = fread(hfile, 'double');
% datar = reshape(datar,[400,5000]);
% datar = datar';
% fclose(hfile);
clear variables;
layer2 = 400;
load(sprintf('n-%d.mat',layer2));
% Theta1 = Theta1';
% Theta2 = Theta2';
fileID = fopen(sprintf('n-%d-1.bin',layer2),'w');
fwrite(fileID,Theta1,'double');
fclose(fileID);
fileID = fopen(sprintf('n-%d-2.bin',layer2),'w');
fwrite(fileID,Theta2,'double');
fclose(fileID);

% clear variables;
% 
% filename = 'n-250-2.bin';
% hfile = fopen(filename, 'r');
% datar = fread(hfile, 'double');
% datar = reshape(datar,[251,10]);
% datar = datar';
% fclose(hfile);


