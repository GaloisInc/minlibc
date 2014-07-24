#include <stdio.h>
#include <errno.h>

int feof(FILE *stream __attribute__((unused)))
{
  printf("feof\n");
  errno = EBADF;
  return -1;
}
