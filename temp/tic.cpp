//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// tic.cpp
//
// Code generation for function 'tic'
//

// Include files
#include "tic.h"
#include "classification_data.h"
#include "timeKeeper.h"
#include "coder_posix_time.h"

// Function Definitions
namespace coder {
void tic()
{
  coderTimespec b_timespec;
  if (!freq_not_empty) {
    freq_not_empty = true;
    coderInitTimeFunctions(&freq);
  }
  coderTimeClockGettimeMonotonic(&b_timespec, freq);
  internal::time::impl::timeKeeper(b_timespec.tv_sec, b_timespec.tv_nsec);
}

} // namespace coder

// End of code generation (tic.cpp)
