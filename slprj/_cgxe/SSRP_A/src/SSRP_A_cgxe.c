/* Include files */

#include "SSRP_A_cgxe.h"
#include "m_5xTZ4YsU7u7BGsF2q9qRzE.h"

unsigned int cgxe_SSRP_A_method_dispatcher(SimStruct* S, int_T method, void
  * data)
{
  if (ssGetChecksum0(S) == 2118904117 &&
      ssGetChecksum1(S) == 2489624780 &&
      ssGetChecksum2(S) == 1743234607 &&
      ssGetChecksum3(S) == 1766588454) {
    method_dispatcher_5xTZ4YsU7u7BGsF2q9qRzE(S, method, data);
    return 1;
  }

  return 0;
}
