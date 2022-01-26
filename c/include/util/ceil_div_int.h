#ifndef UTIL_CEIL_DIV_INT_H
#define UTIL_CEIL_DIV_INT_H
static inline int util_ceil_div_int(int numerator, int denominator) {
  if (denominator == 0) return 0;
  if (numerator % denominator == 0) return numerator / denominator;
  return numerator / denominator + (numerator > 0 ? 1 : -1);
}
#endif
