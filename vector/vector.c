#include "vector.h"

#define DEFAULT_CAPACITY 10

/**
 * The vector_init() function initializes vector pointed by vec (which 
 * must NOT be equal to NULL) with a default capacity of 10.
 */
dsterr_t vector_init(VEC *vec)
{
    vec->list = malloc(DEFAULT_CAPACITY * sizeof(void*));
    if (vec->list == NULL)
      return DST_NO_MEM;

    vec->len = 0;
    vec->cap = DEFAULT_CAPACITY;

    return DST_OK;
}

/**
 * The vector_get() function copies value of the idxth data stored in
 * the vector to memory space pointed by ptr.
 */
dsterr_t vector_get(VEC *vec, size_t idx, void **ptr)
{
    if (idx < 0 || idx >= vec->len)
      return DST_OUT_OF_RANGE;

    *ptr = vec->list[idx];

    return DST_OK;
}

/**
 * The vector_find() function returns the index of the first data stored
 * in the vector that's equal to key; function cmpr must return a 32 bit
 * integer less than, equal to, or greater than zero if the first argum-
 * ent is considered to be respectively less than, equal to, or greater
 * than the second. If key does not exist in the vector, the function
 * returns -1.
 */
size_t vector_find(VEC *vec, void *key, i32_t (*cmpr)(void *, void *))
{
    size_t r;

    for (r = 0; r < vec->len; r ++)
    {
        if (!cmpr(key, vec->list[r]))
          return r;
    }

    return -1;
}
