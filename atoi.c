#include <ctype.h>
#include <stdlib.h>

int atoi(const char *str)
{
    int acc = 0;

    for(; str && isdigit(*str); ++str) {
        acc *= 10;
        acc += *str - 0x30;
    }

    return acc;
}

