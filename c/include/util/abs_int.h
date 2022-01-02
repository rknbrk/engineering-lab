#ifndef UTIL_ABS_INT_H
#define UTIL_ABS_INT_H

static inline int util_abs_int(int value) {
  return value < 0 ? -value : value;
}

#endif
