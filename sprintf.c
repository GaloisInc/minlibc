#include <stdarg.h>
#include <stdio.h>
#include <errno.h>

int sprintf(char * buf, const char *fmt, ...)
{
  va_list args;
  int i;

  va_start(args, fmt);
  i = vsnprintf(buf, 0xFFFFFFFFUL, fmt, args);
  va_end(args);
  return i;
}
