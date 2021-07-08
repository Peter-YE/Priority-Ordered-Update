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
    double mark1[layer1];
    double ex;
    int a_2;
    int b_k;
    int i;
    int j;
    //  =================== Function: ordering ===================
    coder::tic();
    const int range_from  = 0;
    const int range_to    = layer1;
    std::random_device                  rand_dev;
    std::mt19937                        generator(rand_dev());
    std::uniform_int_distribution<int>  distr(range_from, range_to);
    
    //create mask
    // ind = sort(ind);
    for (i = 0; i < layer1; i++) {
        mask1[i] = true;
    }

    for (i = 0; i < k; i++) {
        mask1[distr(generator)] = false;
    }
    *time = coder::toc();
}

// End of code generation (ordering.cpp)
