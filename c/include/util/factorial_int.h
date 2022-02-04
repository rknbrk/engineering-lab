#ifndef UTIL_FACTORIAL_INT_H
#define UTIL_FACTORIAL_INT_H
static inline int util_factorial_int(int value) {
  if (value < 0) return 0;
  int result = 1;
  int index = 2;
  for (; index <= value; ++index) {
    result *= index;
  }
  return result;
}
#endif
