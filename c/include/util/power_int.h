#ifndef UTIL_POWER_INT_H
#define UTIL_POWER_INT_H

static inline int util_power_int(int base, int exponent) {
  int result = 1;
  int index = 0;
  for (index = 0; index < exponent; ++index) {
    result *= base;
  }
  return result;
}

#endif
