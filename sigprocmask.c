#include <signal.h>
#include <stdio.h>
#include <errno.h>

int sigprocmask(int how __attribute__((unused)),
                const sigset_t *set __attribute__((unused)),
                sigset_t *oldset __attribute__((unused)))
{
  printf("sigprocmask\n");
  errno = EINVAL;
  return -1;
}
