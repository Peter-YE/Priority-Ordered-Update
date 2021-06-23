load('data.mat');
X = X';
fileID = fopen('dataX.bin','w');
fwrite(fileID,X,'double');
fclose(fileID);
fileID = fopen('dataY.bin','w');
fwrite(fileID,y,'double');
fclose(fileID);

clear variables;

filename = 'dataX.bin';
hfile = fopen(filename, 'r');
datar = fread(hfile, 'double');
datar = reshape(datar,[400,5000]);
datar = datar';
fclose(hfile);

load('n-250.mat');
Theta1 = Theta1';
Theta2 = Theta2';
fileID = fopen('n-250-1.bin','w');
fwrite(fileID,Theta1,'double');
fclose(fileID);
fileID = fopen('n-250-2.bin','w');
fwrite(fileID,Theta2,'double');
fclose(fileID);

clear variables;

filename = 'n-250-2.bin';
hfile = fopen(filename, 'r');
datar = fread(hfile, 'double');
datar = reshape(datar,[251,10]);
datar = datar';
fclose(hfile);


