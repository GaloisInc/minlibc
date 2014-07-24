#include <unistd.h>
#include <stdio.h>
#include <errno.h>

int pipe(int fildes[2] __attribute__((unused)))
{
  printf("pipe\n");
  errno = EMFILE;
  return -1;
}
