#ifndef UTIL_REMAINDER_INT_H
#define UTIL_REMAINDER_INT_H
static inline int util_remainder_int(int value, int divisor) {
  return divisor == 0 ? 0 : value % divisor;
}
#endif
