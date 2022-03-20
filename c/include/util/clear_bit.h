#ifndef UTIL_CLEAR_BIT_H
#define UTIL_CLEAR_BIT_H
#include <stdint.h>
static inline uint32_t util_clear_bit(uint32_t value, unsigned int bit) { return value & ~(1u << bit); }
#endif
