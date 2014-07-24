#include <signal.h>
#include <stdio.h>
#include <errno.h>

int sigaddset(sigset_t *set __attribute__ ((unused)),
              int signum __attribute__ ((unused)))
{
  printf("sigaddset\n");
  errno = EINVAL;
  return -1;
}
