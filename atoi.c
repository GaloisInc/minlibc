/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
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

