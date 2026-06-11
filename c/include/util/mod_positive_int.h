#ifndef UTIL_MOD_POSITIVE_INT_H
#define UTIL_MOD_POSITIVE_INT_H
static inline int util_mod_positive_int(int value, int modulus) {
  if (modulus <= 0) return 0;
  int result = value % modulus; return result < 0 ? result + modulus : result;
}
#endif
