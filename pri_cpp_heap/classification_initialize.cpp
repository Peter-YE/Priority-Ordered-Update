//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// classification_initialize.cpp
//
// Code generation for function 'classification_initialize'
//

// Include files
#include "classification_initialize.h"
#include "CoderTimeAPI.h"
#include "classification_data.h"
#include "timeKeeper.h"

// Function Definitions
void classification_initialize()
{
  savedTime_not_empty_init();
  freq_not_empty_init();
  isInitialized_classification = true;
}

// End of code generation (classification_initialize.cpp)
