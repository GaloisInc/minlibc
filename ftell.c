#include <stdio.h>
#include <errno.h>

long ftell(FILE *stream __attribute__((unused)))
{
  printf("ftell\n");
  errno = EBADF;
  return -1;
}
