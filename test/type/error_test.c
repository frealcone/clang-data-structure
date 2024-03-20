#include <stdlib.h>

#include "../../type/error.h"

int main(void)
{
    int err_id;
    dsterr_t err;

    scanf("%d", &err_id);

    switch (err_id)
    {
        case 0:
        err = DST_OK;
        break;
        case 1:
        err = DST_NO_MEM;
        break;
        case 2:
        err = DST_OUT_OF_RANGE;
        break;
        default:
        exit(-1);
    }

    pdsterr("The error is", err);

    exit(0);
}
