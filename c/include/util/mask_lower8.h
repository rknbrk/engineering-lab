#ifndef UTIL_MASK_LOWER8_H
#define UTIL_MASK_LOWER8_H
#include <stdint.h>
static inline uint16_t util_mask_lower8(uint16_t value) { return (uint16_t)(value & 0x00FFu); }
#endif
