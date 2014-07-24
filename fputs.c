#include <stdio.h>
#include <errno.h>

int fputs(const char *s, FILE *stream)
{
  if((stream == stdin) || (stream == stdout) || (stream == stderr)) {
    return puts(s);
  } else {
    errno = EBADF;
    return EOF;
  }
}
