/* Include files */

#include "Trial_cgxe.h"
#include "m_DH3jGOJ4u96z2aK3hkI3OE.h"
#include "m_yXjhySGjxhbOwMeUG2qaED.h"
#include "m_UOPiPZ4gyGXLET3FdL2udC.h"
#include "m_DYUjf4SydzIrcGQMWETqVE.h"

unsigned int cgxe_Trial_method_dispatcher(SimStruct* S, int_T method, void* data)
{
  if (ssGetChecksum0(S) == 62194820 &&
      ssGetChecksum1(S) == 2891530704 &&
      ssGetChecksum2(S) == 3846672764 &&
      ssGetChecksum3(S) == 1102401950) {
    method_dispatcher_DH3jGOJ4u96z2aK3hkI3OE(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 953909274 &&
      ssGetChecksum1(S) == 1713666539 &&
      ssGetChecksum2(S) == 1726912588 &&
      ssGetChecksum3(S) == 1073867348) {
    method_dispatcher_yXjhySGjxhbOwMeUG2qaED(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 2632349694 &&
      ssGetChecksum1(S) == 1915163644 &&
      ssGetChecksum2(S) == 1457693247 &&
      ssGetChecksum3(S) == 2552803586) {
    method_dispatcher_UOPiPZ4gyGXLET3FdL2udC(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 3824088567 &&
      ssGetChecksum1(S) == 2699526200 &&
      ssGetChecksum2(S) == 3300560997 &&
      ssGetChecksum3(S) == 1724937098) {
    method_dispatcher_DYUjf4SydzIrcGQMWETqVE(S, method, data);
    return 1;
  }

  return 0;
}
