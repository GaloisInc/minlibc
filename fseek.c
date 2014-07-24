#include <stdio.h>
#include <errno.h>

int fseek(FILE *stream __attribute__((unused)),
          long offset  __attribute__((unused)),
          int whence   __attribute__((unused)))
{
  printf("fseek\n");
  errno = EBADF;
  return 0;
}

