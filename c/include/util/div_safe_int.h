#ifndef UTIL_DIV_SAFE_INT_H
#define UTIL_DIV_SAFE_INT_H
static inline int util_div_safe_int(int numerator, int denominator, int fallback) {
  return denominator == 0 ? fallback : numerator / denominator;
}
#endif

