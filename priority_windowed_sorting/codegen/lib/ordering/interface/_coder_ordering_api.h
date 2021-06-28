//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_ordering_api.h
//
// Code generation for function 'ordering'
//

#ifndef _CODER_ORDERING_API_H
#define _CODER_ORDERING_API_H

// Include files
#include "emlrt.h"
#include "tmwtypes.h"
#include <algorithm>
#include <cstring>

// Variable Declarations
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

// Function Declarations
void ordering(real_T Theta1[120300], real_T Theta2[3010], real_T X_in[400],
              real_T X_old[400], real_T h1_old[300], real_T k, real_T *p,
              real_T h1[300], boolean_T mask1[300], real_T *time1,
              real_T *time2);

void ordering_api(const mxArray *const prhs[6], int32_T nlhs,
                  const mxArray *plhs[5]);

void ordering_atexit();

void ordering_initialize();

void ordering_terminate();

void ordering_xil_shutdown();

void ordering_xil_terminate();

#endif
// End of code generation (_coder_ordering_api.h)
