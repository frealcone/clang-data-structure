#ifndef __DST_H__
#define __DST_H__

#include "vector/vector.h"

/**
 * Data structure.
 */
struct dst
{
    u8_t type;
    void *value;
};

typedef struct dst_st DST;

static const u8_t DST_TP_VECTOR = (u8_t)0;

#endif
