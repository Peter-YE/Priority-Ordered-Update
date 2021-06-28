//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// ordering_initialize.cpp
//
// Code generation for function 'ordering_initialize'
//

// Include files
#include "ordering_initialize.h"
#include "CoderTimeAPI.h"
#include "ordering_data.h"
#include "timeKeeper.h"

// Function Definitions
void ordering_initialize()
{
  savedTime_not_empty_init();
  freq_not_empty_init();
  isInitialized_ordering = true;
}

// End of code generation (ordering_initialize.cpp)
