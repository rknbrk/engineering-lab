#ifndef UTIL_TOGGLE_BIT_H
#define UTIL_TOGGLE_BIT_H
#include <stdint.h>
static inline uint32_t util_toggle_bit(uint32_t value, unsigned int bit) { return value ^ (1u << bit); }
#endif
