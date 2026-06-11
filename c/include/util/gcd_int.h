#ifndef UTIL_GCD_INT_H
#define UTIL_GCD_INT_H

static inline int util_gcd_int(int left, int right) {
  if (left < 0) left = -left;
  if (right < 0) right = -right;
  while (right != 0) {
    const int remainder = left % right;
    left = right;
    right = remainder;
  }
  return left;
}

#endif
