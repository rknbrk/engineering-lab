#ifndef UTIL_WRAP_ADD_INT_H
#define UTIL_WRAP_ADD_INT_H
static inline int util_wrap_add_int(int left, int right, int modulus) {
  if (modulus <= 0) return left + right;
  int result = (left + right) % modulus;
  if (result < 0) result += modulus; return result;
}
#endif
