#ifndef UTIL_STEP_INT_H
#define UTIL_STEP_INT_H
static inline int util_step_int(int edge, int value) { return value >= edge ? 1 : 0; }
#endif
