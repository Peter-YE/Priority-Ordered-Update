//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// classification.cpp
//
// Code generation for function 'classification'
//

// Include files
#include "classification.h"
#include "classification_data.h"
#include "minOrMax.h"
#include <algorithm>
#include <cmath>

// Function Definitions
void classification(const double Theta1[(imageSize+1)*layer1], const double Theta2[(layer1+1)*layer2],
                    const double X[imageSize], double *p, double h1[layer1],
                    double h2[layer2])
{
  double dv[imageSize+1];
  double dv1[layer1+1];
  double ex;
  int i;
  int k;
  //  ================ Function: Classification ================
  // PREDICT Predict the label of an input given a trained neural network
  //    p = PREDICT(Theta1, Theta2, X) outputs the predicted label of X given
  //    the trained weights of a neural network (Theta1, Theta2)
  //  Useful values
  //  ================ Function: Sigmoid ================
  // SIGMOID Compute sigmoid functoon
  //    J = SIGMOID(z) computes the sigmoid of z.
  dv[0] = 1.0;
  std::copy(&X[0], &X[imageSize], &dv[1]);
  //  ================ Function: Sigmoid ================
  // SIGMOID Compute sigmoid functoon
  //    J = SIGMOID(z) computes the sigmoid of z.
  dv1[0] = 1.0;
  for (k = 0; k < layer1; k++) {
    ex = 0.0;
    for (i = 0; i < imageSize+1; i++) {
      ex += dv[i] * Theta1[k + layer1 * i];
    }
    ex = 1.0 / (std::exp(-ex) + 1.0);
    h1[k] = ex;
    dv1[k + 1] = ex;
  }
  for (k = 0; k < layer2; k++) {
    ex = 0.0;
    for (i = 0; i < layer1+1; i++) {
      ex += dv1[i] * Theta2[k + layer2 * i];
    }
    h2[k] = 1.0 / (std::exp(-ex) + 1.0);
  }
  coder::internal::maximum(h2, &ex, &k);
  *p = k;
}

// End of code generation (classification.cpp)
