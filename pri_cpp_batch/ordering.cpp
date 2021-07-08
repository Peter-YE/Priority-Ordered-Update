// Include files
#include "ordering.h"
#include "minOrMax.h"
#include "tic.h"
#include "toc.h"
#include <algorithm>
#include <cmath>

// Function Definitions
extern void ordering(const double Theta1[(imageSize+1)*layer1],
              const double X_in[imageSize], const double X_old[imageSize],
              int k,
              boolean_T mask1[layer1], double *time)
{
    static double b[(imageSize+1)*layer1];
    static double x[(imageSize+1)*layer1];
    double a[imageSize+1];
    double score1[layer1];
    double ex;
    int a_2;
    int b_k;
    int i;
    int j;
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
        score1[i] = ex;
    }

    //sort score
    minHeap heap(k, score1);
    for (i = k; i < layer1;++i){
        heap.insertion(score1[i], i);
    }
    //create mask
    // ind = sort(ind);
    for (i = 0; i < layer1; i++) {
        if (score1[i] > 10){
            mask1[i] = true;
        }
        else{
            mask1[i] = false;
        }

    }

    int ind[k];
    std::copy(heap.getInd(), heap.getInd() + k, ind);
    for (i = 0; i < k; i++) {
        mask1[heap.getInd()[i]] = false;
    }
/*    //thresholding
    for (i = 0; i < layer1; i++) {
        if (score1[i] > 10){
            mask1[i] = true;
        }
        else{
            mask1[i] = false;
        }

    }*/
    *time = coder::toc();
}

// End of code generation (ordering.cpp)