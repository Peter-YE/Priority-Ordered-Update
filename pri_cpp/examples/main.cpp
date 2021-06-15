//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// main.cpp
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

// Include files
#include "main.h"
#include "classification.h"
#include "classification_terminate.h"
#include "ordering.h"
#include "sigmoid.h"

// Function Declarations
static void argInit_10x251_real_T(double result[2510]);

static void argInit_1x250_real_T(double result[250]);

static void argInit_1x400_real_T(double result[400]);

static void argInit_1xd250_real_T(double result_data[], int result_size[2]);

static void argInit_250x401_real_T(double result[100250]);

static double argInit_real_T();

static void main_classification();

static void main_ordering();

static void main_sigmoid();

// Function Definitions
static void argInit_10x251_real_T(double result[2510])
{
  // Loop over the array to initialize each element.
  for (int idx0{0}; idx0 < 10; idx0++) {
    for (int idx1{0}; idx1 < 251; idx1++) {
      // Set the value of the array element.
      // Change this value to the value that the application requires.
      result[idx0 + 10 * idx1] = argInit_real_T();
    }
  }
}

static void argInit_1x250_real_T(double result[250])
{
  // Loop over the array to initialize each element.
  for (int idx1{0}; idx1 < 250; idx1++) {
    // Set the value of the array element.
    // Change this value to the value that the application requires.
    result[idx1] = argInit_real_T();
  }
}

static void argInit_1x400_real_T(double result[400])
{
  // Loop over the array to initialize each element.
  for (int idx1{0}; idx1 < 400; idx1++) {
    // Set the value of the array element.
    // Change this value to the value that the application requires.
    result[idx1] = argInit_real_T();
  }
}

static void argInit_1xd250_real_T(double result_data[], int result_size[2])
{
  // Set the size of the array.
  // Change this size to the value that the application requires.
  result_size[0] = 1;
  result_size[1] = 2;
  // Loop over the array to initialize each element.
  for (int idx1{0}; idx1 < 2; idx1++) {
    // Set the value of the array element.
    // Change this value to the value that the application requires.
    result_data[idx1] = argInit_real_T();
  }
}

static void argInit_250x401_real_T(double result[100250])
{
  // Loop over the array to initialize each element.
  for (int idx0{0}; idx0 < 250; idx0++) {
    for (int idx1{0}; idx1 < 401; idx1++) {
      // Set the value of the array element.
      // Change this value to the value that the application requires.
      result[idx0 + 250 * idx1] = argInit_real_T();
    }
  }
}

static double argInit_real_T()
{
  return 0.0;
}

static void main_classification()
{
  static double dv[100250];
  double dv1[2510];
  double dv2[400];
  double h1[250];
  double h2[10];
  double p;
  // Initialize function 'classification' input arguments.
  // Initialize function input argument 'Theta1'.
  // Initialize function input argument 'Theta2'.
  // Initialize function input argument 'X'.
  // Call the entry-point 'classification'.
  argInit_250x401_real_T(dv);
  argInit_10x251_real_T(dv1);
  argInit_1x400_real_T(dv2);
  classification(dv, dv1, dv2, &p, h1, h2);
}

static void main_ordering()
{
  static double dv[100250];
  double dv1[2510];
  double X_in_tmp[400];
  double dv2[250];
  double h1[250];
  double p;
  double time1;
  double time2;
  boolean_T mask1[250];
  // Initialize function 'ordering' input arguments.
  // Initialize function input argument 'Theta1'.
  // Initialize function input argument 'Theta2'.
  // Initialize function input argument 'X_in'.
  argInit_1x400_real_T(X_in_tmp);
  // Initialize function input argument 'X_old'.
  // Initialize function input argument 'h1_old'.
  // Call the entry-point 'ordering'.
  argInit_250x401_real_T(dv);
  argInit_10x251_real_T(dv1);
  argInit_1x250_real_T(dv2);
  ordering(dv, dv1, X_in_tmp, X_in_tmp, dv2, argInit_real_T(), &p, h1, mask1,
           &time1, &time2);
}

static void main_sigmoid()
{
  double g_data[250];
  double z_data[250];
  int g_size[2];
  int z_size[2];
  // Initialize function 'sigmoid' input arguments.
  // Initialize function input argument 'z'.
  argInit_1xd250_real_T(z_data, z_size);
  // Call the entry-point 'sigmoid'.
  sigmoid(z_data, z_size, g_data, g_size);
}

int main(int, char **)
{
  // The initialize function is being called automatically from your entry-point
  // function. So, a call to initialize is not included here. Invoke the
  // entry-point functions.
  // You can call entry-point functions multiple times.
  main_classification();
  main_ordering();
  main_sigmoid();
  // Terminate the application.
  // You do not need to do this more than one time.
  classification_terminate();
  return 0;
}

// End of code generation (main.cpp)
