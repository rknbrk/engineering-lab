#ifndef UTIL_PARITY_ODD_H
#define UTIL_PARITY_ODD_H
static inline int util_parity_odd(int value) {
  return (value & 1) != 0;
}
#endif
