close all
clear all
T0_8 = readtable('r-0.8.xlsx');
T0_5 = readtable('r-0.5.xlsx');
T0_2 = readtable('r-0.2.xlsx');
T0_04 = readtable('r-0.04.xlsx');
figure(1)
plot(T0_8.nValue,T0_8.Original);
hold on;
plot(T0_8.nValue,T0_8.total);
hold on;
plot(T0_8.nValue,T0_5.total);
hold on;
plot(T0_8.nValue,T0_2.total);
hold on;
plot(T0_8.nValue,T0_04.total);
title('Total Time')
legend('Original','k/n = 0.8','k/n = 0.5','k/n = 0.2','k/n = 0.04')

figure(2)
plot(T0_8.nValue,T0_8.Original);
hold on;
plot(T0_8.nValue,T0_8.Classification);
hold on;
plot(T0_8.nValue,T0_5.Classification);
hold on;
plot(T0_8.nValue,T0_2.Classification);
hold on;
plot(T0_8.nValue,T0_04.Classification);
title('Classification Time')
legend('Original','k/n = 0.8','k/n = 0.5','k/n = 0.2','k/n = 0.04')

figure(3)
plot(T0_8.nValue,T0_8.Original);
hold on;
plot(T0_8.nValue,T0_8.Ordering);
hold on;
plot(T0_8.nValue,T0_5.Ordering);
hold on;
plot(T0_8.nValue,T0_2.Ordering);
hold on;
plot(T0_8.nValue,T0_04.Ordering);
title('Ordering Time')
legend('Original','k/n = 0.8','k/n = 0.5','k/n = 0.2','k/n = 0.04')

figure(4)
plot(T0_8.nValue,T0_8.Orig_accuracy);
hold on;
plot(T0_8.nValue,T0_8.Accuracy);
hold on;
plot(T0_8.nValue,T0_5.Accuracy);
hold on;
plot(T0_8.nValue,T0_2.Accuracy);
hold on;
plot(T0_8.nValue,T0_04.Accuracy);
title('Accuracy')
legend('Original','k/n = 0.8','k/n = 0.5','k/n = 0.2','k/n = 0.04')
