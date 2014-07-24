#ifndef MINLIBC_UTIME_H
#define MINLIBC_UTIME_H

struct utimbuf { };

int utime(const char *filename, const struct utimbuf *times);

#endif
