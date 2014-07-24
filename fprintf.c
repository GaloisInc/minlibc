#include <stdarg.h>
#include <stdio.h>

int fprintf(FILE *stream, const char *format, ...)
{
  va_list args;
  int res;

  va_start(args, format);
  res = vfprintf(stream, format, args);
  va_end(args);
  return res;
}
