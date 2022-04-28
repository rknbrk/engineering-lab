#ifndef UTIL_SPREAD_LOW8_H
#define UTIL_SPREAD_LOW8_H
#include <stdint.h>
static inline uint32_t util_spread_low8(uint8_t value) { return ((uint32_t)value * 0x01010101u); }
#endif
