#ifndef UTIL_LCM_INT_H
#define UTIL_LCM_INT_H

#include "gcd_int.h"

static inline int util_lcm_int(int left, int right) {
  if (left == 0 || right == 0) return 0;
  const int absolute_left = left < 0 ? -left : left;
  const int absolute_right = right < 0 ? -right : right;
  return (absolute_left / util_gcd_int(left, right)) * absolute_right;
}

#endif
