#include <stdio.h>
#include <stdarg.h>

int printf(const char *format, ...)
{
  va_list args;
  int res;

  va_start(args, format);
  res = vfprintf(stdout, format, args);
  va_end(args);
  return res;
}

