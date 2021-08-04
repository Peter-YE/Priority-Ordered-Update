//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_classification_api.h
//
// Code generation for function 'classification'
//

#ifndef _CODER_CLASSIFICATION_API_H
#define _CODER_CLASSIFICATION_API_H

// Include files
#include "emlrt.h"
#include "tmwtypes.h"
#include <algorithm>
#include <cstring>

// Variable Declarations
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

// Function Declarations
void classification(real_T Theta1[120300], real_T Theta2[3010], real_T X[400],
                    real_T *p, real_T h1[300], real_T h2[10]);

void classification_api(const mxArray *const prhs[3], int32_T nlhs,
                        const mxArray *plhs[3]);

void classification_atexit();

void classification_initialize();

void classification_terminate();

void classification_xil_shutdown();

void classification_xil_terminate();

void ordering(real_T Theta1[120300], real_T Theta2[3010], real_T X_in[400],
              real_T X_old[400], real_T h1_old[300], real_T k, real_T *p,
              real_T h1[300], boolean_T mask1[300], real_T *time1,
              real_T *time2);

void ordering_api(const mxArray *const prhs[6], int32_T nlhs,
                  const mxArray *plhs[5]);

void sigmoid(real_T z_data[], int32_T z_size[2], real_T g_data[],
             int32_T g_size[2]);

void sigmoid_api(const mxArray *prhs, const mxArray **plhs);

#endif
// End of code generation (_coder_classification_api.h)
