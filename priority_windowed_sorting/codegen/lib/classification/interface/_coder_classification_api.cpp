//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_classification_api.cpp
//
// Code generation for function 'classification'
//

// Include files
#include "_coder_classification_api.h"
#include "_coder_classification_mex.h"

// Variable Definitions
emlrtCTX emlrtRootTLSGlobal{nullptr};

emlrtContext emlrtContextGlobal{
    true,                                                 // bFirstTime
    false,                                                // bInitialized
    131610U,                                              // fVersionInfo
    nullptr,                                              // fErrorFunction
    "classification",                                     // fFunctionName
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

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               real_T **ret_data, int32_T ret_size[2]);

static const mxArray *b_emlrt_marshallOut(const real_T u[10]);

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *X,
                                   const char_T *identifier))[400];

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[400];

static const mxArray *c_emlrt_marshallOut(const boolean_T u[300]);

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

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *z,
                             const char_T *identifier, real_T **y_data,
                             int32_T y_size[2]);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             real_T **y_data, int32_T y_size[2]);

static const mxArray *emlrt_marshallOut(const real_T u[300]);

static const mxArray *emlrt_marshallOut(const real_T u);

static const mxArray *emlrt_marshallOut(const real_T u_data[],
                                        const int32_T u_size[2]);

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
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               real_T **ret_data, int32_T ret_size[2])
{
  static const int32_T dims[2]{1, 300};
  int32_T iv[2];
  const boolean_T bv[2]{false, true};
  emlrtCheckVsBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                            false, 2U, (void *)&dims[0], &bv[0], &iv[0]);
  ret_size[0] = iv[0];
  ret_size[1] = iv[1];
  *ret_data = (real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
}

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

static const mxArray *b_emlrt_marshallOut(const real_T u[10])
{
  static const int32_T iv[2]{0, 0};
  static const int32_T iv1[2]{1, 10};
  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateNumericArray(2, (const void *)&iv[0], mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m, &iv1[0], 2);
  emlrtAssign(&y, m);
  return y;
}

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *X,
                                   const char_T *identifier))[400]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[400];
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = c_emlrt_marshallIn(sp, emlrtAlias(X), &thisId);
  emlrtDestroyArray(&X);
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

static const mxArray *c_emlrt_marshallOut(const boolean_T u[300])
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

static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = j_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
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

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             real_T **y_data, int32_T y_size[2])
{
  b_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *z,
                             const char_T *identifier, real_T **y_data,
                             int32_T y_size[2])
{
  emlrtMsgIdentifier thisId;
  real_T *r;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  emlrt_marshallIn(sp, emlrtAlias(z), &thisId, &r, y_size);
  *y_data = r;
  emlrtDestroyArray(&z);
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

static const mxArray *emlrt_marshallOut(const real_T u_data[],
                                        const int32_T u_size[2])
{
  static const int32_T iv[2]{0, 0};
  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateNumericArray(2, (const void *)&iv[0], mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, (void *)&u_data[0]);
  emlrtSetDimensions((mxArray *)m, &u_size[0], 2);
  emlrtAssign(&y, m);
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

void classification_api(const mxArray *const prhs[3], int32_T nlhs,
                        const mxArray *plhs[3])
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  real_T(*Theta1)[120300];
  real_T(*Theta2)[3010];
  real_T(*X)[400];
  real_T(*h1)[300];
  real_T(*h2)[10];
  real_T p;
  st.tls = emlrtRootTLSGlobal;
  h1 = (real_T(*)[300])mxMalloc(sizeof(real_T[300]));
  h2 = (real_T(*)[10])mxMalloc(sizeof(real_T[10]));
  // Marshall function inputs
  Theta1 = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "Theta1");
  Theta2 = b_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "Theta2");
  X = c_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "X");
  // Invoke the target function
  classification(*Theta1, *Theta2, *X, &p, *h1, *h2);
  // Marshall function outputs
  plhs[0] = emlrt_marshallOut(p);
  if (nlhs > 1) {
    plhs[1] = emlrt_marshallOut(*h1);
  }
  if (nlhs > 2) {
    plhs[2] = b_emlrt_marshallOut(*h2);
  }
}

void classification_atexit()
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
  classification_xil_terminate();
  classification_xil_shutdown();
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void classification_initialize()
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

void classification_terminate()
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
    plhs[2] = c_emlrt_marshallOut(*mask1);
  }
  if (nlhs > 3) {
    plhs[3] = emlrt_marshallOut(time1);
  }
  if (nlhs > 4) {
    plhs[4] = emlrt_marshallOut(time2);
  }
}

void sigmoid_api(const mxArray *prhs, const mxArray **plhs)
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  real_T(*g_data)[300];
  real_T(*z_data)[300];
  int32_T g_size[2];
  int32_T z_size[2];
  st.tls = emlrtRootTLSGlobal;
  g_data = (real_T(*)[300])mxMalloc(sizeof(real_T[300]));
  // Marshall function inputs
  emlrt_marshallIn(&st, emlrtAlias(prhs), "z", (real_T **)&z_data, z_size);
  // Invoke the target function
  sigmoid(*z_data, z_size, *g_data, g_size);
  // Marshall function outputs
  *plhs = emlrt_marshallOut(*g_data, g_size);
}

// End of code generation (_coder_classification_api.cpp)
