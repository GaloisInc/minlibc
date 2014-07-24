#include <unistd.h>
#include <stdio.h>
#include <errno.h>

pid_t fork(void)
{
  printf("fork\n");
  errno = EAGAIN;
  return -1;
}
