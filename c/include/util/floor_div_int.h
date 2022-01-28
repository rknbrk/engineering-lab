#ifndef UTIL_FLOOR_DIV_INT_H
#define UTIL_FLOOR_DIV_INT_H
static inline int util_floor_div_int(int numerator, int denominator) {
  if (denominator == 0) return 0;
  return numerator / denominator;
}
#endif
