#ifndef UTIL_RATIO_INT_H
#define UTIL_RATIO_INT_H
static inline int util_ratio_int(int part, int whole, int scale) {
  if (whole == 0) return 0; return part * scale / whole;
}
#endif
