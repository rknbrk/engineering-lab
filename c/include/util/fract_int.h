#ifndef UTIL_FRACT_INT_H
#define UTIL_FRACT_INT_H
static inline int util_fract_int(int value, int modulus) {
  if (modulus == 0) return 0;
  int result = value % modulus; return result < 0 ? result + modulus : result;
}
#endif
