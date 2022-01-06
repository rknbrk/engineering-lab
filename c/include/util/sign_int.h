#ifndef UTIL_SIGN_INT_H
#define UTIL_SIGN_INT_H

static inline int util_sign_int(int value) {
  return (value > 0) - (value < 0);
}

#endif
