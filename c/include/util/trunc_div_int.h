#ifndef UTIL_TRUNC_DIV_INT_H
#define UTIL_TRUNC_DIV_INT_H
static inline int util_trunc_div_int(int numerator, int denominator) {
  return denominator == 0 ? 0 : numerator / denominator;
}
#endif
