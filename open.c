#include <fcntl.h>
#include <stdio.h>
#include <errno.h>

int open(const char *pathname __attribute__((unused)),
         int flags __attribute__((unused)),
         ...)
{
  printf("open\n");
  errno = EACCES;
  return -1;
}
