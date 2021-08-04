//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_ordering_api.cpp
//
// Code generation for function 'ordering'
//

// Include files
#include "_coder_ordering_api.h"
#include "_coder_ordering_mex.h"

// Variable Definitions
emlrtCTX emlrtRootTLSGlobal{nullptr};

emlrtContext emlrtContextGlobal{
    true,                                                 // bFirstTime
    false,                                                // bInitialized
    131610U,                                              // fVersionInfo
    nullptr,                                              // fErrorFunction
    "ordering",                                           // fFunctionName
    nullptr,                                              // fRTCallStack
    false,                                                // bDebugMode
    {2045744189U, 2170104910U, 2743257031U, 4284093946U}, // fSigWrd
    nullptr                                               // fSigMem
};

// Function Declarations
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Theta2,
                                   const char_T *identifier))[3010];

static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[3010];

static const mxArray *b_emlrt_marshallOut(const boolean_T u[300]);

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *X_in,
                                   const char_T *identifier))[400];

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[400];

static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *h1_old,
                                   const char_T *identifier))[300];

static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[300];

static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *k,
                                 const char_T *identifier);

static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId);

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *Theta1,
                                 const char_T *identifier))[120300];

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId))[120300];

static const mxArray *emlrt_marshallOut(const real_T u[300]);

static const mxArray *emlrt_marshallOut(const real_T u);

static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[120300];

static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[3010];

static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[400];

static real_T (*i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[300];

static real_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId);

// Function Definitions
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Theta2,
                                   const char_T *identifier))[3010]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[3010];
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(Theta2), &thisId);
  emlrtDestroyArray(&Theta2);
  return y;
}

static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[3010]
{
  real_T(*y)[3010];
  y = g_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *b_emlrt_marshallOut(const boolean_T u[300])
{
  static const int32_T iv[2]{0, 0};
  static const int32_T iv1[2]{1, 300};
  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateLogicalArray(2, &iv[0]);
  emlrtMxSetData((mxArray *)m, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m, &iv1[0], 2);
  emlrtAssign(&y, m);
  return y;
}

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *X_in,
                                   const char_T *identifier))[400]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[400];
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = c_emlrt_marshallIn(sp, emlrtAlias(X_in), &thisId);
  emlrtDestroyArray(&X_in);
  return y;
}

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[400]
{
  real_T(*y)[400];
  y = h_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *h1_old,
                                   const char_T *identifier))[300]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[300];
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(h1_old), &thisId);
  emlrtDestroyArray(&h1_old);
  return y;
}

static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[300]
{
  real_T(*y)[300];
  y = i_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *k,
                                 const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  real_T y;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = e_emlrt_marshallIn(sp, emlrtAlias(k), &thisId);
  emlrtDestroyArray(&k);
  return y;
}

static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = j_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *Theta1,
                                 const char_T *identifier))[120300]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[120300];
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = emlrt_marshallIn(sp, emlrtAlias(Theta1), &thisId);
  emlrtDestroyArray(&Theta1);
  return y;
}

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId))[120300]
{
  real_T(*y)[120300];
  y = f_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *emlrt_marshallOut(const real_T u[300])
{
  static const int32_T iv[2]{0, 0};
  static const int32_T iv1[2]{1, 300};
  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateNumericArray(2, (const void *)&iv[0], mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m, &iv1[0], 2);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *emlrt_marshallOut(const real_T u)
{
  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m);
  return y;
}

static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[120300]
{
  static const int32_T dims[2]{300, 401};
  real_T(*ret)[120300];
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                          false, 2U, (void *)&dims[0]);
  ret = (real_T(*)[120300])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[3010]
{
  static const int32_T dims[2]{10, 301};
  real_T(*ret)[3010];
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                          false, 2U, (void *)&dims[0]);
  ret = (real_T(*)[3010])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[400]
{
  static const int32_T dims[2]{1, 400};
  real_T(*ret)[400];
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                          false, 2U, (void *)&dims[0]);
  ret = (real_T(*)[400])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[300]
{
  static const int32_T dims[2]{1, 300};
  real_T(*ret)[300];
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                          false, 2U, (void *)&dims[0]);
  ret = (real_T(*)[300])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims{0};
  real_T ret;
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                          false, 0U, (void *)&dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void ordering_api(const mxArray *const prhs[6], int32_T nlhs,
                  const mxArray *plhs[5])
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  real_T(*Theta1)[120300];
  real_T(*Theta2)[3010];
  real_T(*X_in)[400];
  real_T(*X_old)[400];
  real_T(*h1)[300];
  real_T(*h1_old)[300];
  real_T k;
  real_T p;
  real_T time1;
  real_T time2;
  boolean_T(*mask1)[300];
  st.tls = emlrtRootTLSGlobal;
  h1 = (real_T(*)[300])mxMalloc(sizeof(real_T[300]));
  mask1 = (boolean_T(*)[300])mxMalloc(sizeof(boolean_T[300]));
  // Marshall function inputs
  Theta1 = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "Theta1");
  Theta2 = b_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "Theta2");
  X_in = c_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "X_in");
  X_old = c_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "X_old");
  h1_old = d_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "h1_old");
  k = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "k");
  // Invoke the target function
  ordering(*Theta1, *Theta2, *X_in, *X_old, *h1_old, k, &p, *h1, *mask1, &time1,
           &time2);
  // Marshall function outputs
  plhs[0] = emlrt_marshallOut(p);
  if (nlhs > 1) {
    plhs[1] = emlrt_marshallOut(*h1);
  }
  if (nlhs > 2) {
    plhs[2] = b_emlrt_marshallOut(*mask1);
  }
  if (nlhs > 3) {
    plhs[3] = emlrt_marshallOut(time1);
  }
  if (nlhs > 4) {
    plhs[4] = emlrt_marshallOut(time2);
  }
}

void ordering_atexit()
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  ordering_xil_terminate();
  ordering_xil_shutdown();
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void ordering_initialize()
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, nullptr);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

void ordering_terminate()
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

// End of code generation (_coder_ordering_api.cpp)
