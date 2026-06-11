#ifndef UTIL_SCALE_INT_H
#define UTIL_SCALE_INT_H
static inline int util_scale_int(int value, int numerator, int denominator) {
  if (denominator == 0) return 0; return value * numerator / denominator;
}
#endif
