#include <utime.h>
#include <stdio.h>
#include <errno.h>

int utime(const char *path __attribute__((unused)),
          const struct utimbuf *times __attribute__((unused)))
{
  printf("utime\n");
  errno = ENOENT;
  return -1;
}

