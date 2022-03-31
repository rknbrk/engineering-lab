#ifndef UTIL_COPY_SIGN_INT_H
#define UTIL_COPY_SIGN_INT_H
static inline int util_copy_sign_int(int magnitude, int sign_source) {
  return sign_source >= 0 ? (magnitude < 0 ? -magnitude : magnitude)
                          : (magnitude > 0 ? -magnitude : magnitude);
}
#endif
