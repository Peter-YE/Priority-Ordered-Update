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
    MATFile *pmat;
    const char* name=NULL;
    mxArray *pa;

    /* open mat file and read it's content */
    pmat = matOpen("data.mat", "r");
    if (pmat == NULL)
    {
        printf("Error Opening File: \"%s\"\n", argv[1]);
        return 0;
    }

    /* Read in each array. */
    pa = matGetNextVariable(pmat, &name);

    matClose(pmat);
    return 0;
}
