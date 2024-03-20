#ifndef __DST_VECTOR_H__
#define __DST_VECTOR_H__

#include <stdlib.h>

#include "../type/error.h"

/**
 * Vector (aka. Sequence List): Array that can automatically change
 * its capacity.
 */
struct vector_st
{
    void **list; // array storing data
    size_t len;  // number of data stored in list
    size_t cap;  // capacity of list
};

typedef struct vector_st VEC;

/**
 * The vector_init() function initializes vector pointed by vec (which 
 * must NOT be equal to NULL) with a default capacity of 10.
 */
dsterr_t vector_init(VEC *vec);

/**
 * The vector_get() function copies value of the idxth data stored in
 * the vector to memory space pointed by ptr.
 */
dsterr_t vector_get(VEC *vec, size_t idx, void **ptr);

/**
 * The vector_find() function returns the index of the first data stored
 * in the vector that's equal to key; function cmpr must return a 32 bit
 * integer less than, equal to, or greater than zero if the first argum-
 * ent is considered to be respectively less than, equal to, or greater
 * than the second. If key does not exist in the vector, the function
 * returns -1.
 */
size_t vector_find(VEC *vec, void *key, i32_t (*cmpr)(void *, void *));

/**
 * If successful, vector_init(), vector_get()
 * functions return DST_OK. If there is an
 * error, they return DST_NO_MEM or DST_OUT_OF_RANGE.
 */

#endif
