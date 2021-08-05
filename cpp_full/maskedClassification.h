//
// Created by Peter on 29/06/2021.
//

#ifndef MAIN_CPP_MASKEDCLASSIFICATION_H
#define MAIN_CPP_MASKEDCLASSIFICATION_H
#include "rtwtypes.h"
#include <cstddef>
#include <cstdlib>
#include "main.h"
#include "minHeap.h"
extern void maskedClassification(const double Theta1[(imageSize+1)*layer1], const double Theta2[(layer1+1)*layer2],
                                 const double X_in[imageSize],
                                 const double h1_old[layer1], double *p, double h1[layer1],
                                 const boolean_T mask1[layer1]);
#endif //MAIN_CPP_MASKEDCLASSIFICATION_H
