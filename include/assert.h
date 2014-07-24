#ifndef MINLIBC_ASSERT_H
#define MINLIBC_ASSERT_H

#include <stdio.h>

#define assert(x) ((!(x)) ? pabort("Assertion failed at %s:%d\n", __FILE__, __LINE__) : 0)

#endif
