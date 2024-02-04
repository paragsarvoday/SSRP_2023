#define S_FUNCTION_LEVEL               2
#define S_FUNCTION_NAME                Child_App_cgxe
#include "simstruc.h"
#include "Child_App_cgxe.h"
#define MDL_START

static void mdlStart(SimStruct* S)
{
  unsigned int success;
  success = cgxe_Child_App_method_dispatcher(S, SS_CALL_MDL_START, NULL);
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
  mxArray* mxModules = mxCreateCellMatrix(10, 1);
  mxArray* mxChksum = NULL;
  uint32_T* checksumData = NULL;
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 40734886;
  checksumData[1] = 939169963;
  checksumData[2] = 3003323883;
  checksumData[3] = 639236959;
  mxSetCell(mxModules, 0, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 62194820;
  checksumData[1] = 2891530704;
  checksumData[2] = 3846672764;
  checksumData[3] = 1102401950;
  mxSetCell(mxModules, 1, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 338945919;
  checksumData[1] = 3052111699;
  checksumData[2] = 1006807087;
  checksumData[3] = 1989616699;
  mxSetCell(mxModules, 2, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 418746162;
  checksumData[1] = 578984659;
  checksumData[2] = 3788506656;
  checksumData[3] = 2591448410;
  mxSetCell(mxModules, 3, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 791312494;
  checksumData[1] = 2950351780;
  checksumData[2] = 4270432648;
  checksumData[3] = 2890884271;
  mxSetCell(mxModules, 4, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 2286671419;
  checksumData[1] = 1540402704;
  checksumData[2] = 4115799750;
  checksumData[3] = 2575547986;
  mxSetCell(mxModules, 5, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 2546481271;
  checksumData[1] = 2276398434;
  checksumData[2] = 2412409687;
  checksumData[3] = 549586118;
  mxSetCell(mxModules, 6, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 2930373263;
  checksumData[1] = 2591364827;
  checksumData[2] = 206744535;
  checksumData[3] = 1163775400;
  mxSetCell(mxModules, 7, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 3578111174;
  checksumData[1] = 2339247834;
  checksumData[2] = 1635967935;
  checksumData[3] = 4149254122;
  mxSetCell(mxModules, 8, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 3893658017;
  checksumData[1] = 750445767;
  checksumData[2] = 3422289208;
  checksumData[3] = 1117446477;
  mxSetCell(mxModules, 9, mxChksum);
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
    checksumData[0] = 339888190;
    checksumData[1] = 2673924526;
    checksumData[2] = 337539186;
    checksumData[3] = 4049850952;
    mxSetField(mxChecksum, 0, "model", mxModelChksum);
  }

  {
    mxArray* mxMakefileChksum = mxCreateDoubleMatrix(1, 4, mxREAL);
    double* checksumData = (double*) mxGetData(mxMakefileChksum);
    checksumData[0] = 4253243198;
    checksumData[1] = 301701639;
    checksumData[2] = 2952381864;
    checksumData[3] = 4101441613;
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
    checksumData[0] = 3307098341;
    checksumData[1] = 3194892676;
    checksumData[2] = 1468452293;
    checksumData[3] = 841965437;
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
  success = cgxe_Child_App_method_dispatcher(S, SS_CALL_MDL_GET_SIM_STATE, (void
    *) (plhs));
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
  success = cgxe_Child_App_method_dispatcher(S, SS_CALL_MDL_SET_SIM_STATE, (void
    *) prhs[2]);
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
  if (strcmp(tpChksum, "r9npojpcpE1nIt6wcZfq3F") == 0) {
    extern mxArray *cgxe_r9npojpcpE1nIt6wcZfq3F_BuildInfoUpdate(void);
    plhs[0] = cgxe_r9npojpcpE1nIt6wcZfq3F_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "DH3jGOJ4u96z2aK3hkI3OE") == 0) {
    extern mxArray *cgxe_DH3jGOJ4u96z2aK3hkI3OE_BuildInfoUpdate(void);
    plhs[0] = cgxe_DH3jGOJ4u96z2aK3hkI3OE_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "zBcJJKdPFoobubnOzm2A4C") == 0) {
    extern mxArray *cgxe_zBcJJKdPFoobubnOzm2A4C_BuildInfoUpdate(void);
    plhs[0] = cgxe_zBcJJKdPFoobubnOzm2A4C_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "E5eYYMYEC9250ATstCUIJE") == 0) {
    extern mxArray *cgxe_E5eYYMYEC9250ATstCUIJE_BuildInfoUpdate(void);
    plhs[0] = cgxe_E5eYYMYEC9250ATstCUIJE_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "KfaDhNL7xJVG1u0RUxB9sH") == 0) {
    extern mxArray *cgxe_KfaDhNL7xJVG1u0RUxB9sH_BuildInfoUpdate(void);
    plhs[0] = cgxe_KfaDhNL7xJVG1u0RUxB9sH_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "nyucgZWjM3Ai1CT2jftVoF") == 0) {
    extern mxArray *cgxe_nyucgZWjM3Ai1CT2jftVoF_BuildInfoUpdate(void);
    plhs[0] = cgxe_nyucgZWjM3Ai1CT2jftVoF_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "KDwHGQ2xXp4wmWKPmnDGqC") == 0) {
    extern mxArray *cgxe_KDwHGQ2xXp4wmWKPmnDGqC_BuildInfoUpdate(void);
    plhs[0] = cgxe_KDwHGQ2xXp4wmWKPmnDGqC_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "N6wSUtJycDbE8bKJByzvlC") == 0) {
    extern mxArray *cgxe_N6wSUtJycDbE8bKJByzvlC_BuildInfoUpdate(void);
    plhs[0] = cgxe_N6wSUtJycDbE8bKJByzvlC_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "rv2q6Si9yo15c6LurhHJ") == 0) {
    extern mxArray *cgxe_rv2q6Si9yo15c6LurhHJ_BuildInfoUpdate(void);
    plhs[0] = cgxe_rv2q6Si9yo15c6LurhHJ_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "0IWK4xPALvAwGYJfiJSKHC") == 0) {
    extern mxArray *cgxe_0IWK4xPALvAwGYJfiJSKHC_BuildInfoUpdate(void);
    plhs[0] = cgxe_0IWK4xPALvAwGYJfiJSKHC_BuildInfoUpdate();
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
  if (strcmp(tpChksum, "r9npojpcpE1nIt6wcZfq3F") == 0) {
    extern mxArray *cgxe_r9npojpcpE1nIt6wcZfq3F_fallback_info(void);
    plhs[0] = cgxe_r9npojpcpE1nIt6wcZfq3F_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "DH3jGOJ4u96z2aK3hkI3OE") == 0) {
    extern mxArray *cgxe_DH3jGOJ4u96z2aK3hkI3OE_fallback_info(void);
    plhs[0] = cgxe_DH3jGOJ4u96z2aK3hkI3OE_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "zBcJJKdPFoobubnOzm2A4C") == 0) {
    extern mxArray *cgxe_zBcJJKdPFoobubnOzm2A4C_fallback_info(void);
    plhs[0] = cgxe_zBcJJKdPFoobubnOzm2A4C_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "E5eYYMYEC9250ATstCUIJE") == 0) {
    extern mxArray *cgxe_E5eYYMYEC9250ATstCUIJE_fallback_info(void);
    plhs[0] = cgxe_E5eYYMYEC9250ATstCUIJE_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "KfaDhNL7xJVG1u0RUxB9sH") == 0) {
    extern mxArray *cgxe_KfaDhNL7xJVG1u0RUxB9sH_fallback_info(void);
    plhs[0] = cgxe_KfaDhNL7xJVG1u0RUxB9sH_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "nyucgZWjM3Ai1CT2jftVoF") == 0) {
    extern mxArray *cgxe_nyucgZWjM3Ai1CT2jftVoF_fallback_info(void);
    plhs[0] = cgxe_nyucgZWjM3Ai1CT2jftVoF_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "KDwHGQ2xXp4wmWKPmnDGqC") == 0) {
    extern mxArray *cgxe_KDwHGQ2xXp4wmWKPmnDGqC_fallback_info(void);
    plhs[0] = cgxe_KDwHGQ2xXp4wmWKPmnDGqC_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "N6wSUtJycDbE8bKJByzvlC") == 0) {
    extern mxArray *cgxe_N6wSUtJycDbE8bKJByzvlC_fallback_info(void);
    plhs[0] = cgxe_N6wSUtJycDbE8bKJByzvlC_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "rv2q6Si9yo15c6LurhHJ") == 0) {
    extern mxArray *cgxe_rv2q6Si9yo15c6LurhHJ_fallback_info(void);
    plhs[0] = cgxe_rv2q6Si9yo15c6LurhHJ_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "0IWK4xPALvAwGYJfiJSKHC") == 0) {
    extern mxArray *cgxe_0IWK4xPALvAwGYJfiJSKHC_fallback_info(void);
    plhs[0] = cgxe_0IWK4xPALvAwGYJfiJSKHC_fallback_info();
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
