#include <termios.h>
#include <stdio.h>
#include <errno.h>

int tcgetattr(int fd __attribute__((unused)),
              struct termios *termios_p __attribute__((unused)))
{
  printf("tcgetattr\n");
  errno = ENOSYS;
  return -1;
}
