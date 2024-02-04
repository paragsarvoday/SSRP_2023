/* Include files */

#include "Child_App_cgxe.h"
#include "m_r9npojpcpE1nIt6wcZfq3F.h"
#include "m_DH3jGOJ4u96z2aK3hkI3OE.h"
#include "m_zBcJJKdPFoobubnOzm2A4C.h"
#include "m_E5eYYMYEC9250ATstCUIJE.h"
#include "m_KfaDhNL7xJVG1u0RUxB9sH.h"
#include "m_nyucgZWjM3Ai1CT2jftVoF.h"
#include "m_KDwHGQ2xXp4wmWKPmnDGqC.h"
#include "m_N6wSUtJycDbE8bKJByzvlC.h"
#include "m_rv2q6Si9yo15c6LurhHJ.h"
#include "m_0IWK4xPALvAwGYJfiJSKHC.h"

unsigned int cgxe_Child_App_method_dispatcher(SimStruct* S, int_T method, void
  * data)
{
  if (ssGetChecksum0(S) == 40734886 &&
      ssGetChecksum1(S) == 939169963 &&
      ssGetChecksum2(S) == 3003323883 &&
      ssGetChecksum3(S) == 639236959) {
    method_dispatcher_r9npojpcpE1nIt6wcZfq3F(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 62194820 &&
      ssGetChecksum1(S) == 2891530704 &&
      ssGetChecksum2(S) == 3846672764 &&
      ssGetChecksum3(S) == 1102401950) {
    method_dispatcher_DH3jGOJ4u96z2aK3hkI3OE(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 338945919 &&
      ssGetChecksum1(S) == 3052111699 &&
      ssGetChecksum2(S) == 1006807087 &&
      ssGetChecksum3(S) == 1989616699) {
    method_dispatcher_zBcJJKdPFoobubnOzm2A4C(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 418746162 &&
      ssGetChecksum1(S) == 578984659 &&
      ssGetChecksum2(S) == 3788506656 &&
      ssGetChecksum3(S) == 2591448410) {
    method_dispatcher_E5eYYMYEC9250ATstCUIJE(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 791312494 &&
      ssGetChecksum1(S) == 2950351780 &&
      ssGetChecksum2(S) == 4270432648 &&
      ssGetChecksum3(S) == 2890884271) {
    method_dispatcher_KfaDhNL7xJVG1u0RUxB9sH(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 2286671419 &&
      ssGetChecksum1(S) == 1540402704 &&
      ssGetChecksum2(S) == 4115799750 &&
      ssGetChecksum3(S) == 2575547986) {
    method_dispatcher_nyucgZWjM3Ai1CT2jftVoF(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 2546481271 &&
      ssGetChecksum1(S) == 2276398434 &&
      ssGetChecksum2(S) == 2412409687 &&
      ssGetChecksum3(S) == 549586118) {
    method_dispatcher_KDwHGQ2xXp4wmWKPmnDGqC(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 2930373263 &&
      ssGetChecksum1(S) == 2591364827 &&
      ssGetChecksum2(S) == 206744535 &&
      ssGetChecksum3(S) == 1163775400) {
    method_dispatcher_N6wSUtJycDbE8bKJByzvlC(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 3578111174 &&
      ssGetChecksum1(S) == 2339247834 &&
      ssGetChecksum2(S) == 1635967935 &&
      ssGetChecksum3(S) == 4149254122) {
    method_dispatcher_rv2q6Si9yo15c6LurhHJ(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 3893658017 &&
      ssGetChecksum1(S) == 750445767 &&
      ssGetChecksum2(S) == 3422289208 &&
      ssGetChecksum3(S) == 1117446477) {
    method_dispatcher_0IWK4xPALvAwGYJfiJSKHC(S, method, data);
    return 1;
  }

  return 0;
}
