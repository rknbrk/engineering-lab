#ifndef UTIL_PARITY_EVEN_H
#define UTIL_PARITY_EVEN_H
static inline int util_parity_even(int value) {
  return (value & 1) == 0;
}
#endif
