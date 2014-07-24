#include <signal.h>
#include <errno.h>

int sigaction(int signum __attribute__((unused)),
	      const struct sigaction *act __attribute__((unused)),
	      struct sigaction *oldact __attribute__((unused)))
{
  errno = ENOSYS;
  return -1;
}
