#ifndef UTIL_NIBBLE_HIGH8_H
#define UTIL_NIBBLE_HIGH8_H
#include <stdint.h>
static inline uint8_t util_nibble_high8(uint8_t value) { return (uint8_t)((value >> 4) & 0x0Fu); }
#endif
