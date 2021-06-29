//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// ordering.h
//
// Code generation for function 'ordering'
//

#ifndef ORDERING_H
#define ORDERING_H

// Include files
#include "rtwtypes.h"
#include <cstddef>
#include <cstdlib>
#include "main.h"
#include "minHeap.h"

// Function Declarations
extern void ordering(const double Theta1[(imageSize+1)*layer1], const double Theta2[(layer1+1)*layer2],
                     const double X_in[imageSize], const double X_old[imageSize],
                     const double h1_old[layer1], int k, double *p,
                     double h1[layer1], boolean_T mask1[layer1], double *time1,
                     double *time2);

#endif
// End of code generation (ordering.h)
