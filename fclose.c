#include <stdio.h>
#include <errno.h>

int fclose(FILE *fp __attribute__((unused)))
{
  printf("fclose\n");
  errno = EBADF;
  return EOF;
}
