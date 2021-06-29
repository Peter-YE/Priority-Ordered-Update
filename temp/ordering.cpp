// Include files
#include "ordering.h"
#include "classification_data.h"
#include "classification_initialize.h"
#include "minOrMax.h"
#include "tic.h"
#include "toc.h"
#include <algorithm>
#include <cmath>

// Function Definitions
void ordering(const double Theta1[(imageSize+1)*layer1], const double Theta2[(layer1+1)*layer2],
              const double X_in[imageSize], const double X_old[imageSize],
              const double h1_old[layer1], int k, double *p, double h1[layer1],
              boolean_T mask1[layer1], double *time1, double *time2)
{
    static double b[(imageSize+1)*layer1];
    static double x[(imageSize+1)*layer1];
    double a[imageSize+1];
    double dv[layer1+1];
    double b_data[layer1];
    double mark1[layer1];
    double b_x[layer2];
    double ex;
    int a_2;
    int b_i;
    int b_k;
    int i;
    int i2;
    int j;
    short tmp_data[layer1];
    if (!isInitialized_classification) {
        classification_initialize();
    }
    //  =================== Function: ordering ===================
    coder::tic();
    for (i = 0; i < layer1; i++) {
        for (a_2 = 0; a_2 < imageSize+1; a_2++) {
            x[a_2 + (imageSize+1) * i] = Theta1[i + layer1 * a_2];
        }
    }

    for (b_k = 0; b_k < (imageSize+1)*layer1; b_k++) {
        b[b_k] = std::abs(x[b_k]);
    }
    a[0] = 1.0;

    for (i = 0; i < imageSize; i++) {
        a[i + 1] = (X_in[i] - X_old[i] == 0.0);
    }

    for (i = 0; i < layer1; i++) {
        ex = 0.0;
        for (a_2 = 0; a_2 < imageSize+1; a_2++) {
            ex += a[a_2] * b[a_2 + (imageSize+1) * i];
        }
        mark1[i] = ex;
    }

    //sort mark
    minHeap heap(k, mark1);
    for (i = k; i < layer1;++i){
        heap.insertion(mark1[i], i);
    }
    //create mask
    // ind = sort(ind);
    for (i = 0; i < layer1; i++) {
        mask1[i] = true;
    }
    int ind[k];
    std::copy(heap.getInd(), heap.getInd() + k, ind);
    for (i = 0; i < k; i++) {
        mask1[heap.getInd()[i]] = false;
    }
    *time1 = coder::toc();
    coder::tic();
    i2 = 0;
    a_2 = 0;
    for (b_i = 0; b_i < layer1; b_i++) {
        h1[b_i] = h1_old[b_i];
        if (mask1[b_i]) {
            i2++;
            tmp_data[a_2] = static_cast<short>(b_i + 1);
            a_2++;
        }
    }
    a[0] = 1.0;
    std::copy(&X_in[0], &X_in[imageSize], &a[1]);
    for (j = 0; j < i2; j++) {
        ex = 0.0;
        for (b_k = 0; b_k < imageSize+1; b_k++) {
            i = b_k * i2 + j;
            ex += a[b_k] * Theta1[(tmp_data[i % i2] + layer1 * (i / i2)) - 1];
        }
        b_data[j] = ex;
    }
    //  ================ Function: Sigmoid ================
    // SIGMOID Compute sigmoid functoon
    //    J = SIGMOID(z) computes the sigmoid of z.
    a_2 = i2 - 1;
    for (i = 0; i <= a_2; i++) {
        b_data[i] = -b_data[i];
    }
    for (b_k = 0; b_k < i2; b_k++) {
        b_data[b_k] = std::exp(b_data[b_k]);
    }
    for (i = 0; i <= a_2; i++) {
        b_data[i] = 1.0 / (b_data[i] + 1.0);
    }
    a_2 = 0;
    //  ================ Function: Sigmoid ================
    // SIGMOID Compute sigmoid functoon
    //    J = SIGMOID(z) computes the sigmoid of z.
    dv[0] = 1.0;
    for (b_i = 0; b_i < layer1; b_i++) {
        if (mask1[b_i]) {
            h1[b_i] = b_data[a_2];
            a_2++;
        }
        dv[b_i + 1] = h1[b_i];
    }
    for (b_k = 0; b_k < layer2; b_k++) {
        ex = 0.0;
        for (i = 0; i < layer1+1; i++) {
            ex += dv[i] * Theta2[b_k + layer2 * i];
        }
        b_x[b_k] = 1.0 / (std::exp(-ex) + 1.0);
    }
    coder::internal::maximum(b_x, &ex, &a_2);
    *p = a_2;
    *time2 = coder::toc();
}

// End of code generation (ordering.cpp)
