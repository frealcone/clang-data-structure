#ifndef __DST_TYPE_ERROR_H__
#define __DST_TYPE_ERROR_H__

#include <string.h>
#include <stdio.h>

#include "type.h"

struct error_st
{
    u8_t err_id;   // ID of this type of error
    char *err_msg; // Description of this error
};

typedef struct data_st_error dsterr_t;

static const dsterr_t DST_OK = {(u8_t)0, "Ok"};
static const dsterr_t DST_NO_MEM = {(u8_t)1, "Inadequate memory for the operation"};
static const dsterr_t DST_OUT_OF_RANGE = {(u8_t)2, "Index out of range"};

/**
 * Print error message on the terminal
 */
void pdsterr(const char *msg, const dsterr_t err);

#endif
