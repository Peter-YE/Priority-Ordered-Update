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

// Function Declarations
extern void ordering(const double Theta1[120300], const double Theta2[3010],
                     const double X_in[400], const double X_old[400],
                     const double h1_old[300], double k, double *p,
                     double h1[300], boolean_T mask1[300], double *time1,
                     double *time2);

#endif
// End of code generation (ordering.h)
