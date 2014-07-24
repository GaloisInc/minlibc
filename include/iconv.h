#ifndef MINLIBC_ICONV_H
#define MINLIBC_ICONV_H

#include <sys/types.h>

typedef void *iconv_t;

iconv_t iconv_open(const char *, const char *);
size_t  iconv(iconv_t, char **, size_t*, char **, size_t*);
int     iconv_close(iconv_t cd);

#endif
