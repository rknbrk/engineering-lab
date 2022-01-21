#ifndef UTIL_LERP_INT_H
#define UTIL_LERP_INT_H
static inline int util_lerp_int(int start, int end, int amount, int scale) {
  if (scale == 0) return start;
  return start + (end - start) * amount / scale;
}
#endif
