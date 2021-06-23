/*
 * MAT-file diagnose program
 *
 * See the MATLAB API Guide for compiling information.
 *
 * Calling syntax:
 *
 *   matdgns <matfile>
 *
 * It will diagnose the MAT-file named <matfile>.
 *
 * This program demonstrates the use of the following functions:
 *
 *  matClose
 *  matGetDir
 *  matGetNextVariable
 *  matGetNextVariableInfo
 *  matOpen
 *
 * Copyright 1984-2003 The MathWorks, Inc.
 */
#include <stdio.h>
#include <stdlib.h>
#include "mat.h"

int main(int argc, char **argv)
{
    double *X;
    X = (double*)malloc(sizeof(double)*2000000);
    std::ifstream file ("dataX.bin", std::ios::in | std::ios::binary);

    if (!file)
    {
        std::cout << "fail to open the file" <<std::endl;
        return -1;//或者抛出异常。
    }
    else
    {
        std::cout << "open the file successfully" << std::endl;
    }
    file.open("dataX.bin", std::ios_base::binary | std::ios_base::in);
    //file.read(reinterpret_cast<char*>(X),sizeof(double)* 2000000);
    file.read((char *)X,sizeof X);
    file.close();
    for (int i = 0; i < 1000; i++){
        std::cout << X[10] << std::endl;
    }

}
