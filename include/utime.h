/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#ifndef MINLIBC_UTIME_H
#define MINLIBC_UTIME_H

struct utimbuf { };

int utime(const char *filename, const struct utimbuf *times);

#endif
