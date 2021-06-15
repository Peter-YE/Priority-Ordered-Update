//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// ordering.cpp
//
// Code generation for function 'ordering'
//

// Include files
#include "ordering.h"
#include "classification_data.h"
#include "classification_initialize.h"
#include "minOrMax.h"
#include "sortedInsertion.h"
#include "tic.h"
#include "toc.h"
#include <algorithm>
#include <cmath>
#include <cstring>

// Function Definitions
void ordering(const double Theta1[100250], const double Theta2[2510],
              const double X_in[400], const double X_old[400],
              const double h1_old[250], double k, double *p, double h1[250],
              boolean_T mask1[250], double *time1, double *time2)
{
  static double b[100250];
  static double x[100250];
  double a[401];
  double dv[251];
  double b_data[250];
  double mark1[250];
  double b_x[10];
  double ex;
  int itmp[250];
  int iwork[250];
  int a__2;
  int b_i;
  int b_k;
  int i;
  int i2;
  int j;
  int qEnd;
  unsigned char tmp_data[250];
  if (!isInitialized_classification) {
    classification_initialize();
  }
  //  =================== Function: ordering ===================
  coder::tic();
  for (i = 0; i < 250; i++) {
    for (a__2 = 0; a__2 < 401; a__2++) {
      x[a__2 + 401 * i] = Theta1[i + 250 * a__2];
    }
  }
  for (b_k = 0; b_k < 100250; b_k++) {
    b[b_k] = std::abs(x[b_k]);
  }
  a[0] = 1.0;
  for (i = 0; i < 400; i++) {
    a[i + 1] = (X_in[i] - X_old[i] == 0.0);
  }
  for (i = 0; i < 250; i++) {
    ex = 0.0;
    for (a__2 = 0; a__2 < 401; a__2++) {
      ex += a[a__2] * b[a__2 + 401 * i];
    }
    mark1[i] = ex;
  }
  if (k <= 250.0) {
    b_k = static_cast<int>(k);
  } else {
    b_k = 250;
  }
  if (0 <= b_k - 1) {
    std::memset(&iwork[0], 0, b_k * sizeof(int));
    std::memset(&b_data[0], 0, b_k * sizeof(double));
  }
  if (b_k != 0) {
    if (b_k > 64) {
      for (a__2 = 0; a__2 <= 248; a__2 += 2) {
        ex = mark1[a__2 + 1];
        if ((mark1[a__2] >= ex) || std::isnan(ex)) {
          itmp[a__2] = a__2 + 1;
          itmp[a__2 + 1] = a__2 + 2;
        } else {
          itmp[a__2] = a__2 + 2;
          itmp[a__2 + 1] = a__2 + 1;
        }
      }
      b_i = 2;
      while (b_i < 250) {
        i2 = b_i << 1;
        j = 1;
        for (int pEnd{b_i + 1}; pEnd < 251; pEnd = qEnd + b_i) {
          int b_p;
          int kEnd;
          int q;
          b_p = j;
          q = pEnd - 1;
          qEnd = j + i2;
          if (qEnd > 251) {
            qEnd = 251;
          }
          a__2 = 0;
          kEnd = qEnd - j;
          while (a__2 + 1 <= kEnd) {
            ex = mark1[itmp[q] - 1];
            i = itmp[b_p - 1];
            if ((mark1[i - 1] >= ex) || std::isnan(ex)) {
              iwork[a__2] = i;
              b_p++;
              if (b_p == pEnd) {
                while (q + 1 < qEnd) {
                  a__2++;
                  iwork[a__2] = itmp[q];
                  q++;
                }
              }
            } else {
              iwork[a__2] = itmp[q];
              q++;
              if (q + 1 == qEnd) {
                while (b_p < pEnd) {
                  a__2++;
                  iwork[a__2] = itmp[b_p - 1];
                  b_p++;
                }
              }
            }
            a__2++;
          }
          for (a__2 = 0; a__2 < kEnd; a__2++) {
            itmp[(j + a__2) - 1] = iwork[a__2];
          }
          j = qEnd;
        }
        b_i = i2;
      }
      if (0 <= b_k - 1) {
        std::copy(&itmp[0], &itmp[b_k], &iwork[0]);
      }
    } else {
      for (j = 0; j < b_k; j++) {
        a__2 = j;
        coder::internal::sortedInsertion(mark1[j], j + 1, b_data, &a__2, b_k,
                                         iwork);
      }
      i = b_k + 1;
      for (j = i; j < 251; j++) {
        a__2 = b_k;
        coder::internal::sortedInsertion(mark1[j - 1], j, b_data, &a__2, b_k,
                                         iwork);
      }
    }
  }
  // ind = sort(ind);
  for (i = 0; i < 250; i++) {
    mask1[i] = true;
  }
  for (i = 0; i < b_k; i++) {
    mask1[iwork[i] - 1] = false;
  }
  *time1 = coder::toc();
  coder::tic();
  i2 = 0;
  a__2 = 0;
  for (b_i = 0; b_i < 250; b_i++) {
    h1[b_i] = h1_old[b_i];
    if (mask1[b_i]) {
      i2++;
      tmp_data[a__2] = static_cast<unsigned char>(b_i + 1);
      a__2++;
    }
  }
  a[0] = 1.0;
  std::copy(&X_in[0], &X_in[400], &a[1]);
  for (j = 0; j < i2; j++) {
    ex = 0.0;
    for (b_k = 0; b_k < 401; b_k++) {
      i = b_k * i2 + j;
      ex += a[b_k] * Theta1[(tmp_data[i % i2] + 250 * (i / i2)) - 1];
    }
    b_data[j] = ex;
  }
  //  ================ Function: Sigmoid ================
  // SIGMOID Compute sigmoid functoon
  //    J = SIGMOID(z) computes the sigmoid of z.
  a__2 = i2 - 1;
  for (i = 0; i <= a__2; i++) {
    b_data[i] = -b_data[i];
  }
  for (b_k = 0; b_k < i2; b_k++) {
    b_data[b_k] = std::exp(b_data[b_k]);
  }
  for (i = 0; i <= a__2; i++) {
    b_data[i] = 1.0 / (b_data[i] + 1.0);
  }
  a__2 = 0;
  //  ================ Function: Sigmoid ================
  // SIGMOID Compute sigmoid functoon
  //    J = SIGMOID(z) computes the sigmoid of z.
  dv[0] = 1.0;
  for (b_i = 0; b_i < 250; b_i++) {
    if (mask1[b_i]) {
      h1[b_i] = b_data[a__2];
      a__2++;
    }
    dv[b_i + 1] = h1[b_i];
  }
  for (b_k = 0; b_k < 10; b_k++) {
    ex = 0.0;
    for (i = 0; i < 251; i++) {
      ex += dv[i] * Theta2[b_k + 10 * i];
    }
    b_x[b_k] = 1.0 / (std::exp(-ex) + 1.0);
  }
  coder::internal::maximum(b_x, &ex, &a__2);
  *p = a__2;
  *time2 = coder::toc();
}

// End of code generation (ordering.cpp)
