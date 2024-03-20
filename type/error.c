#include "error.h"

/**
 * Print error message on the terminal
 */
void pdsterr(const char *msg, const dsterr_t err)
{
    if (msg == NULL || strlen(msg) <= 0)
      fprintf(stderr, "%s\n", err.err_msg);
    else
      fprintf(stderr, "%s: %s\n", msg, err.err_msg);
}


