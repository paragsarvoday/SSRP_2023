#define S_FUNCTION_LEVEL               2
#define S_FUNCTION_NAME                Trial_cgxe
#include "simstruc.h"
#include "Trial_cgxe.h"
#define MDL_START

static void mdlStart(SimStruct* S)
{
  unsigned int success;
  success = cgxe_Trial_method_dispatcher(S, SS_CALL_MDL_START, NULL);
  if (!success) {
    /* error */
    mexPrintf("ERROR: Failed to dispatch s-function method!\n");
  }
}

#define MDL_INITIALIZE_CONDITIONS

static void mdlInitializeConditions(SimStruct *S)
{
  mexPrintf("ERROR: Calling model mdlInitializeConditions method directly.\n");
}

#define MDL_UPDATE

static void mdlUpdate(SimStruct *S, int_T tid)
{
  mexPrintf("ERROR: Calling model mdlUpdate method directly.\n");
}

static void mdlOutputs(SimStruct* S, int_T tid)
{
  mexPrintf("ERROR: Calling model mdlOutputs method directly.\n");
}

static void mdlTerminate(SimStruct *S)
{
  mexPrintf("ERROR: Calling model mdlTerminate method directly.\n");
}

static void mdlInitializeSizes(SimStruct *S)
{
}

static void mdlInitializeSampleTimes(SimStruct *S)
{
}

static mxArray* cgxe_get_supported_modules(void)
{
  mxArray* mxModules = mxCreateCellMatrix(4, 1);
  mxArray* mxChksum = NULL;
  uint32_T* checksumData = NULL;
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 62194820;
  checksumData[1] = 2891530704;
  checksumData[2] = 3846672764;
  checksumData[3] = 1102401950;
  mxSetCell(mxModules, 0, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 953909274;
  checksumData[1] = 1713666539;
  checksumData[2] = 1726912588;
  checksumData[3] = 1073867348;
  mxSetCell(mxModules, 1, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 2632349694;
  checksumData[1] = 1915163644;
  checksumData[2] = 1457693247;
  checksumData[3] = 2552803586;
  mxSetCell(mxModules, 2, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 3824088567;
  checksumData[1] = 2699526200;
  checksumData[2] = 3300560997;
  checksumData[3] = 1724937098;
  mxSetCell(mxModules, 3, mxChksum);
  return mxModules;
}

static int cgxe_process_get_checksums(int nlhs, mxArray* plhs[], int nrhs, const
  mxArray* prhs[])
{
  const char* checksumFields[] = { "modules", "model", "makefile", "target",
    "overall" };

  mxArray* mxChecksum = mxCreateStructMatrix(1, 1, 5, checksumFields);
  mxSetField(mxChecksum, 0, "modules", cgxe_get_supported_modules());

  {
    mxArray* mxModelChksum = mxCreateDoubleMatrix(1, 4, mxREAL);
    double* checksumData = (double*) mxGetData(mxModelChksum);
    checksumData[0] = 3070918722;
    checksumData[1] = 3696535753;
    checksumData[2] = 3730548365;
    checksumData[3] = 3178733100;
    mxSetField(mxChecksum, 0, "model", mxModelChksum);
  }

  {
    mxArray* mxMakefileChksum = mxCreateDoubleMatrix(1, 4, mxREAL);
    double* checksumData = (double*) mxGetData(mxMakefileChksum);
    checksumData[0] = 3034106347;
    checksumData[1] = 1976508455;
    checksumData[2] = 3390197016;
    checksumData[3] = 3211054424;
    mxSetField(mxChecksum, 0, "makefile", mxMakefileChksum);
  }

  {
    mxArray* mxTargetChksum = mxCreateDoubleMatrix(1, 4, mxREAL);
    double* checksumData = (double*) mxGetData(mxTargetChksum);
    checksumData[0] = 2911221907;
    checksumData[1] = 2308967934;
    checksumData[2] = 2419390157;
    checksumData[3] = 1906300239;
    mxSetField(mxChecksum, 0, "target", mxTargetChksum);
  }

  {
    mxArray* mxOverallChksum = mxCreateDoubleMatrix(1, 4, mxREAL);
    double* checksumData = (double*) mxGetData(mxOverallChksum);
    checksumData[0] = 1430100081;
    checksumData[1] = 4240600963;
    checksumData[2] = 3273461165;
    checksumData[3] = 3105541086;
    mxSetField(mxChecksum, 0, "overall", mxOverallChksum);
  }

  plhs[0] = mxChecksum;
  return 1;
}

static int cgxe_mex_unlock_call(int nlhs, mxArray * plhs[], int nrhs, const
  mxArray * prhs[])
{
  while (mexIsLocked()) {
    mexUnlock();
  }

  return 1;
}

static SimStruct* cgxe_unpack_simstruct(const mxArray *mxS)
{
  uint32_T *uintPtr = (uint32_T*)malloc(sizeof(SimStruct*));
  int nEl = sizeof(SimStruct*)/sizeof(uint32_T);
  uint32_T *uintDataPtr = (uint32_T *)mxGetData(mxS);
  int el;
  SimStruct *S;
  for (el=0; el < nEl; el++) {
    uintPtr[el] = uintDataPtr[el];
  }

  memcpy(&S,uintPtr,sizeof(SimStruct*));
  free(uintPtr);
  return S;
}

static int cgxe_get_sim_state(int nlhs, mxArray * plhs[], int nrhs, const
  mxArray * prhs[])
{
  unsigned int success;
  SimStruct *S = cgxe_unpack_simstruct(prhs[1]);
  success = cgxe_Trial_method_dispatcher(S, SS_CALL_MDL_GET_SIM_STATE, (void *)
    (plhs));
  if (!success) {
    /* error */
    mexPrintf("ERROR: Failed to dispatch s-function method!\n");
  }

  return 1;
}

static int cgxe_set_sim_state(int nlhs, mxArray * plhs[], int nrhs, const
  mxArray * prhs[])
{
  unsigned int success;
  SimStruct *S = cgxe_unpack_simstruct(prhs[1]);
  success = cgxe_Trial_method_dispatcher(S, SS_CALL_MDL_SET_SIM_STATE, (void *)
    prhs[2]);
  if (!success) {
    /* error */
    mexPrintf("ERROR: Failed to dispatch s-function method!\n");
  }

  return 1;
}

static int cgxe_get_BuildInfoUpdate(int nlhs, mxArray * plhs[], int nrhs, const
  mxArray * prhs[])
{
  char tpChksum[64];
  mxGetString(prhs[1], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(tpChksum, "DH3jGOJ4u96z2aK3hkI3OE") == 0) {
    extern mxArray *cgxe_DH3jGOJ4u96z2aK3hkI3OE_BuildInfoUpdate(void);
    plhs[0] = cgxe_DH3jGOJ4u96z2aK3hkI3OE_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "yXjhySGjxhbOwMeUG2qaED") == 0) {
    extern mxArray *cgxe_yXjhySGjxhbOwMeUG2qaED_BuildInfoUpdate(void);
    plhs[0] = cgxe_yXjhySGjxhbOwMeUG2qaED_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "UOPiPZ4gyGXLET3FdL2udC") == 0) {
    extern mxArray *cgxe_UOPiPZ4gyGXLET3FdL2udC_BuildInfoUpdate(void);
    plhs[0] = cgxe_UOPiPZ4gyGXLET3FdL2udC_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "DYUjf4SydzIrcGQMWETqVE") == 0) {
    extern mxArray *cgxe_DYUjf4SydzIrcGQMWETqVE_BuildInfoUpdate(void);
    plhs[0] = cgxe_DYUjf4SydzIrcGQMWETqVE_BuildInfoUpdate();
    return 1;
  }

  return 0;
}

static int cgxe_get_fallback_info(int nlhs, mxArray * plhs[], int nrhs, const
  mxArray * prhs[])
{
  char tpChksum[64];
  mxGetString(prhs[1], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(tpChksum, "DH3jGOJ4u96z2aK3hkI3OE") == 0) {
    extern mxArray *cgxe_DH3jGOJ4u96z2aK3hkI3OE_fallback_info(void);
    plhs[0] = cgxe_DH3jGOJ4u96z2aK3hkI3OE_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "yXjhySGjxhbOwMeUG2qaED") == 0) {
    extern mxArray *cgxe_yXjhySGjxhbOwMeUG2qaED_fallback_info(void);
    plhs[0] = cgxe_yXjhySGjxhbOwMeUG2qaED_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "UOPiPZ4gyGXLET3FdL2udC") == 0) {
    extern mxArray *cgxe_UOPiPZ4gyGXLET3FdL2udC_fallback_info(void);
    plhs[0] = cgxe_UOPiPZ4gyGXLET3FdL2udC_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "DYUjf4SydzIrcGQMWETqVE") == 0) {
    extern mxArray *cgxe_DYUjf4SydzIrcGQMWETqVE_fallback_info(void);
    plhs[0] = cgxe_DYUjf4SydzIrcGQMWETqVE_fallback_info();
    return 1;
  }

  return 0;
}

#define PROCESS_MEX_SFUNCTION_CMD_LINE_CALL

static int ProcessMexSfunctionCmdLineCall(int nlhs, mxArray* plhs[], int nrhs,
  const mxArray* prhs[])
{
  char commandName[64];
  if (nrhs < 1 || !mxIsChar(prhs[0]))
    return 0;
  mxGetString(prhs[0], commandName, sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName, "get_checksums") == 0) {
    return cgxe_process_get_checksums(nlhs, plhs, nrhs, prhs);
  }

  if (strcmp(commandName, "mex_unlock") == 0) {
    return cgxe_mex_unlock_call(nlhs, plhs, nrhs, prhs);
  }

  if (strcmp(commandName, "get_sim_state") == 0) {
    return cgxe_get_sim_state(nlhs, plhs, nrhs, prhs);
  }

  if (strcmp(commandName, "set_sim_state") == 0) {
    return cgxe_set_sim_state(nlhs, plhs, nrhs, prhs);
  }

  if (strcmp(commandName, "get_BuildInfoUpdate") == 0) {
    return cgxe_get_BuildInfoUpdate(nlhs, plhs, nrhs, prhs);
  }

  if (strcmp(commandName, "get_fallback_info") == 0) {
    return cgxe_get_fallback_info(nlhs, plhs, nrhs, prhs);
  }

  return 0;
}

#include "simulink.c"
