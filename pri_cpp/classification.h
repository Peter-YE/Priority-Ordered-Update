//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// classification.h
//
// Code generation for function 'classification'
//

#ifndef CLASSIFICATION_H
#define CLASSIFICATION_H

// Include files
#include "rtwtypes.h"
#include <cstddef>
#include <cstdlib>
#include "main.h"

// Function Declarations
extern void classification(const double Theta1[(imageSize+1)*layer1],
                           const double Theta2[(layer1+1)*layer2], const double X[imageSize],
                           double *p, double h1[layer1], double h2[layer2]);

#endif
// End of code generation (classification.h)
