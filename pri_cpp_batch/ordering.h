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
#include "maxHeap.h"

// Function Declarations
extern void ordering(const double Theta1[(imageSize+1)*layer1],
                     const double X_in[imageSize], const double X_old[imageSize],
                     int k,
                     boolean_T mask1[layer1], double *time);

#endif
// End of code generation (ordering.h)
