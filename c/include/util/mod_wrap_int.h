#ifndef UTIL_MOD_WRAP_INT_H
#define UTIL_MOD_WRAP_INT_H
static inline int util_mod_wrap_int(int value, int modulus) {
  if (modulus == 0) return 0;
  int result = value % modulus;
  if (result < 0) result += modulus;
  return result;
}
#endif
