#ifndef UTIL_IS_DIVISIBLE_INT_H
#define UTIL_IS_DIVISIBLE_INT_H
static inline int util_is_divisible_int(int value, int divisor) {
  return divisor != 0 && value % divisor == 0;
}
#endif
