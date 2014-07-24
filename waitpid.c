#include <sys/wait.h>
#include <stdio.h>
#include <errno.h>

pid_t waitpid(pid_t pid __attribute__((unused)),
              int *stat_loc __attribute__((unused)),
              int options __attribute__((unused)))
{
  printf("waitpid\n");
  errno = ECHILD;
  return -1;
}
