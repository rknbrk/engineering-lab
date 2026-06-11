#ifndef UTIL_HASH_COMBINE_H
#define UTIL_HASH_COMBINE_H

#include <stddef.h>
#include <stdint.h>

static inline void util_hash_combine(size_t* seed, size_t value) {
  *seed ^= value + 0x9e3779b97f4a7c15ULL + (*seed << 6) + (*seed >> 2);
}

#endif
