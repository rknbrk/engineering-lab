#ifndef UTIL_NIBBLE_LOW8_H
#define UTIL_NIBBLE_LOW8_H
#include <stdint.h>
static inline uint8_t util_nibble_low8(uint8_t value) { return (uint8_t)(value & 0x0Fu); }
#endif
