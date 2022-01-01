#ifndef UTIL_MIN_INT_H
#define UTIL_MIN_INT_H

static inline int util_min_int(int left, int right) {
  return left < right ? left : right;
}

#endif
