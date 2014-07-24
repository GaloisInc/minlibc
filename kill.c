#include <signal.h>
#include <errno.h>
#include <stdio.h>

int kill(pid_t pid __attribute__((unused)),
    int sig __attribute__((unused)))
{
  printf("kill\n");
  errno = EPERM;
  return -1;
}
