#ifndef ZZ_GMAP_TESTS_H_IG
#define ZZ_GMAP_TESTS_H_IG

#ifdef GMAP_MODULAR_APPROACH
  #define GMAPTEST_TYPE "MODULAR"
  #include "gmap_common/gmap_modular.h"
#else
  #define GMAPTEST_TYPE "STATIC"
  #include "gmap_common/gmap_static.h"
#endif

#ifndef GENATEST_CHECK_ONLY_C89

#include "munit/munit.h"

extern MunitResult gmaptests_1_create();
extern MunitResult gmaptests_2_modify();
extern MunitResult gmaptests_3_lookup();

#endif /* GENATEST_CHECK_ONLY_C89 */

#endif /* ZZ_GMAP_TESTS_H_IG */
