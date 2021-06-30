//
// main.cpp
//
// Code generation for function 'main'
//


// Include files
#include <vector>
#include <iostream>
#include <fstream>

#include "main.h"
#include "classification.h"
#include "ordering.h"
#include "maskedClassification.h"

// Function Declarations
// Matlab data structures

int main() {
    int numK = ratio*layer1;
    // The initialize function is being called automatically from your entry-point
    // function. So, a call to initialize is not included here. Invoke the
    // entry-point functions.
    // You can call entry-point functions multiple times.
    double *dataX;
    dataX = (double*)malloc(sizeof(double)*imageSize*imageNum);
    std::ifstream file;
    file.open("../data/dataX.bin", std::ios_base::binary | std::ios_base::in);
    file.read(reinterpret_cast<char*>(dataX),sizeof(double)* imageSize*imageNum);
    file.close();

    double *dataY;
    dataY = (double*)malloc(sizeof(double)*imageNum);
    file.open("../data/dataY.bin", std::ios_base::binary | std::ios_base::in);
    file.read(reinterpret_cast<char*>(dataY),sizeof(double)* imageNum);
    file.close();

    double *Theta1;
    Theta1 = (double*)malloc(sizeof(double)*(imageSize+1)*layer1);
    file.open("../data/n-"+std::to_string(layer1)+"-1.bin", std::ios_base::binary | std::ios_base::in);
    file.read(reinterpret_cast<char*>(Theta1),sizeof(double)*(imageSize+1)*layer1);
    file.close();

    double *Theta2;
    Theta2 = (double*)malloc(sizeof(double)*(layer1+1)*layer2);
    file.open("../data/n-"+std::to_string(layer1)+"-2.bin", std::ios_base::binary | std::ios_base::in);
    file.read(reinterpret_cast<char*>(Theta2),sizeof(double)* (layer1+1)*layer2);
    file.close();


//Conventional approach
    double p[imageNum];
    double h1[layer1];
    double h2[layer2];
    double timeOrig =0;
    for (int image = 0; image<imageNum; ++image){
        double tempX[imageSize];
        std::copy(dataX+image*imageSize,dataX+imageSize+image*imageSize,tempX);
        coder::tic();
        classification(Theta1,Theta2, tempX, &p[image], h1, h2);
        timeOrig += coder::toc();
    }
    double accuracy = 0;
    for (int i = 0; i< imageNum;++i){
        if (p[i] == dataY[i]){
            ++accuracy;
        }
    }
    std::cout<<"original accuracy = "<< accuracy*100/imageNum <<"%" <<std::endl;
    std::cout<<"original time= "<< timeOrig <<std::endl;
//Priority ordered
    double time_order = 0;
    double time_classification = 0;
    double tempX[imageSize];
    std::copy(dataX,dataX+imageSize,tempX);
    classification(Theta1,Theta2, tempX, &p[1], h1, h2);
    for (int image = 1; image < imageNum; ++image){
        std::copy(dataX+image*imageSize,dataX+imageSize+image*imageSize,tempX);
        double tempX_old[imageSize];
        std::copy(dataX+(image-1)*imageSize,dataX+imageSize+(image-1)*imageSize,tempX_old);
        double h1_old[layer1];
        std::copy(h1,h1+layer1,h1_old);
        double time1;
        double time2;
        boolean_T mask1[layer1];
        if (image % 10 == 0){
            ordering(Theta1, tempX, tempX_old, numK, mask1,
                     &time1);
            time_order += time1;
        }
        coder::tic();
        maskedClassification(Theta1, Theta2, tempX, h1_old, &p[image], h1, mask1);
        time_classification += coder::toc();
        //time_classification += time2;
    }

    accuracy = 0;
    for (int i = 0; i< imageNum;++i){
        if (p[i] == dataY[i]){
            ++accuracy;
        }
    }
    std::cout<<"ordered accuracy = "<< accuracy*100/imageNum <<"%" <<std::endl;
    std::cout<<"ordering time= "<< time_order <<std::endl;
    std::cout<<"classification time= "<< time_classification <<std::endl;

    //free the memory
    free(dataX);
    free(dataY);
    free(Theta1);
    free(Theta2);

    // Terminate the application.
    // You do not need to do this more than one time.
    return 0;
}

// End of code generation (main.cpp)
