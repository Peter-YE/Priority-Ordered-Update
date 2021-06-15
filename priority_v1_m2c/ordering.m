%% =================== Function: ordering ===================
function [p,h1,mask1,time1,time2] = ordering(Theta1, Theta2, X_in,X_old,h1_old,k)
    tic
    mask = X_in - X_old == 0;
    mark1 = [1 mask] * abs(Theta1');
    [~,ind] = maxk(mark1,k);
    %ind = sort(ind);
    mask1 = logical(ones(1,size(Theta1, 1)));
    mask1(ind) = 0;
    time1 = toc;
    
    tic
    h1 = h1_old;
    h1(mask1) = sigmoid([1 X_in] * Theta1(mask1,:)');
    h2 = sigmoid([1 h1] * Theta2');
    [~, p] = max(h2, [], 2);
    time2 = toc;

