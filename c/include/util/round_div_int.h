#ifndef UTIL_ROUND_DIV_INT_H
#define UTIL_ROUND_DIV_INT_H
static inline int util_round_div_int(int numerator, int denominator) {
  if (denominator == 0) return 0;
  if (numerator >= 0) return (numerator + denominator / 2) / denominator;
  return (numerator - denominator / 2) / denominator;
}
#endif
