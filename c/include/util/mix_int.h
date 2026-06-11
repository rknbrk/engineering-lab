#ifndef UTIL_MIX_INT_H
#define UTIL_MIX_INT_H
static inline int util_mix_int(int start, int end, int amount, int scale) {
  if (scale == 0) return start; return start + (end - start) * amount / scale;
}
#endif
