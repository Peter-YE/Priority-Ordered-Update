//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// sigmoid.cpp
//
// Code generation for function 'sigmoid'
//

// Include files
#include "sigmoid.h"
#include "classification_data.h"
#include "classification_initialize.h"
#include <cmath>

// Function Definitions
void sigmoid(const double z_data[], const int z_size[2], double g_data[],
             int g_size[2])
{
  int k;
  int nx;
  if (!isInitialized_classification) {
    classification_initialize();
  }
  //  ================ Function: Sigmoid ================
  // SIGMOID Compute sigmoid functoon
  //    J = SIGMOID(z) computes the sigmoid of z.
  g_size[1] = z_size[1];
  nx = z_size[1];
  for (k = 0; k < nx; k++) {
    g_data[k] = -z_data[k];
  }
  nx = z_size[1];
  for (k = 0; k < nx; k++) {
    g_data[k] = std::exp(g_data[k]);
  }
  g_size[0] = 1;
  nx = z_size[1] - 1;
  for (k = 0; k <= nx; k++) {
    g_data[k] = 1.0 / (g_data[k] + 1.0);
  }
}

// End of code generation (sigmoid.cpp)
