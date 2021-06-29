//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// minOrMax.cpp
//
// Code generation for function 'minOrMax'
//

// Include files
#include "minOrMax.h"
#include <cmath>

// Function Definitions
namespace coder {
namespace internal {
void maximum(const double x[layer2], double *ex, int *idx)
{
  int k;
  if (!std::isnan(x[0])) {
    *idx = 1;
  } else {
    boolean_T exitg1;
    *idx = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 11)) {
      if (!std::isnan(x[k - 1])) {
        *idx = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }
  if (*idx == 0) {
    *ex = x[0];
    *idx = 1;
  } else {
    int i;
    *ex = x[*idx - 1];
    i = *idx + 1;
    for (k = i; k < 11; k++) {
      double d;
      d = x[k - 1];
      if (*ex < d) {
        *ex = d;
        *idx = k;
      }
    }
  }
}

} // namespace internal
} // namespace coder

// End of code generation (minOrMax.cpp)
