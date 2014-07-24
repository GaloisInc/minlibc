#include <unistd.h>
#include <stdio.h>
#include <errno.h>

int dup2(int fildes __attribute__((unused)),
    int fildes2 __attribute__((unused)))
{
  printf("dup2\n");
  errno = ENOSYS;
  return (-1);
}
