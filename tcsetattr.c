#include <termios.h>
#include <stdio.h>
#include <errno.h>

int tcsetattr(int fd __attribute__((unused)),
    int optional_actions __attribute__((unused)),
    const struct termios *termios_p __attribute__((unused)))
{
  printf("tcsetattr\n");
  errno = ENOSYS;
  return -1;
}
