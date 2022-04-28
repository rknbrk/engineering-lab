#ifndef UTIL_GATHER_HIGH8_H
#define UTIL_GATHER_HIGH8_H
#include <stdint.h>
static inline uint8_t util_gather_high8(uint32_t value) { return (uint8_t)((value >> 24) & 0xFFu); }
#endif
