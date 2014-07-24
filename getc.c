#include <stdio.h>
#include <errno.h>

int getc(FILE *stream __attribute__((unused)))
{
  printf("getc\n");
  errno = EBADF;
  return -1;
}
