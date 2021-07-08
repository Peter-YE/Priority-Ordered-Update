//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// main.h
//
// Code generation for function 'main'
//

/*************************************************************************/
/* This automatically generated example C++ main file shows how to call  */
/* entry-point functions that MATLAB Coder generated. You must customize */
/* this file for your application. Do not modify this file directly.     */
/* Instead, make a copy of this file, modify it, and integrate it into   */
/* your development environment.                                         */
/*                                                                       */
/* This file initializes entry-point function arguments to a default     */
/* size and value before calling the entry-point functions. It does      */
/* not store or use any values returned from the entry-point functions.  */
/* If necessary, it does pre-allocate memory for returned values.        */
/* You can use this file as a starting point for a main function that    */
/* you can deploy in your application.                                   */
/*                                                                       */
/* After you copy the file, and before you deploy it, you must make the  */
/* following changes:                                                    */
/* * For variable-size function arguments, change the example sizes to   */
/* the sizes that your application requires.                             */
/* * Change the example values of function arguments to the values that  */
/* your application requires.                                            */
/* * If the entry-point functions return values, store these values or   */
/* otherwise use them as required by your application.                   */
/*                                                                       */
/*************************************************************************/

#ifndef MAIN_H
#define MAIN_H

// Include files
#include "rtwtypes.h"
#include <cstddef>
#include <cstdlib>
#include <random>
#include "tic.h"
#include "toc.h"

const int imageSize = 400;
const int imageNum = 5000;
const int layer1 = 400;
const int layer2 = 10;
const double ratio = 0.8;
const int batchSize = 1;
// Function Declarations
//extern int main(int argc, char **argv);

#endif


//extern const int imageSize;
//extern const int imageNum;
//extern const int layer1;
//extern const int layer2;

// End of code generation (main.h)
