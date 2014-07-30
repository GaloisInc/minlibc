/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#ifndef MINLIBC_LANGINFO_H
#define MINLIBC_LANGINFO_H

#define CODESET     4

typedef int nl_item;

char *nl_langinfo(nl_item item);

#endif
