#include <unistd.h>
#include <stdio.h>
#include <errno.h>

int dup(int fildes __attribute__((unused)))
{
  printf("dup\n");
  errno = ENOSYS;
  return (-1);
}
