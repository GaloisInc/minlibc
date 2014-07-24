#include <stdio.h>
#include <stdarg.h>

int __fprintf_chk(FILE *, int, const char *, ...);

int __fprintf_chk(FILE * stream, int flag __attribute__ ((unused)),
                  const char * format, ...)
{
  va_list args;
  int res;

  va_start(args, format);
  res = vfprintf(stream, format, args);
  va_end(args);
  return res;
}
