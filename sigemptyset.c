#include <signal.h>
#include <stdio.h>
#include <errno.h>

int sigemptyset(sigset_t *set __attribute__ ((unused)))
{
  printf("sigemptyset\n");
  errno = EINVAL;
  return -1;
}

