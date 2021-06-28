//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// sortedInsertion.cpp
//
// Code generation for function 'sortedInsertion'
//

// Include files
#include "sortedInsertion.h"
#include <cmath>

// Function Definitions
namespace coder {
namespace internal {
void sortedInsertion(double x, int ix, double b_data[], int *nb, int blen,
                     int idx_data[])
{
  if (*nb == 0) {
    *nb = 1;
    idx_data[0] = ix;
    b_data[0] = x;
  } else if ((x <= b_data[0]) || std::isnan(x)) {
    if ((*nb > 1) && (!(x <= b_data[*nb - 1])) && (!std::isnan(x))) {
      int ja;
      int jb;
      int jc;
      ja = 1;
      jb = *nb;
      while (ja < jb) {
        jc = ja + ((jb - ja) >> 1);
        if (jc == ja) {
          ja = jb;
        } else if ((x <= b_data[jc - 1]) || std::isnan(x)) {
          ja = jc;
        } else {
          jb = jc;
        }
      }
      if (*nb < blen) {
        (*nb)++;
      }
      jb = ja + 1;
      for (jc = *nb; jc >= jb; jc--) {
        b_data[jc - 1] = b_data[jc - 2];
        idx_data[jc - 1] = idx_data[jc - 2];
      }
      b_data[ja - 1] = x;
      idx_data[ja - 1] = ix;
    } else if (*nb < blen) {
      (*nb)++;
      b_data[*nb - 1] = x;
      idx_data[*nb - 1] = ix;
    }
  } else {
    if (*nb < blen) {
      (*nb)++;
    }
    for (int jc{*nb}; jc >= 2; jc--) {
      idx_data[jc - 1] = idx_data[jc - 2];
      b_data[jc - 1] = b_data[jc - 2];
    }
    b_data[0] = x;
    idx_data[0] = ix;
  }
}

} // namespace internal
} // namespace coder

// End of code generation (sortedInsertion.cpp)
