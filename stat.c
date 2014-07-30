/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <errno.h>
#include <sys/stat.h>

int stat(const char *path __attribute__((unused)),
         struct stat *buf __attribute__((unused)))
{
    errno = EACCES;
    return -1;
}
