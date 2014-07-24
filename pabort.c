#include <stdio.h>
#include <stdarg.h>
#include <runtime_reqs.h>

void pabort(const char *format, ...)
{
  va_list args;

  va_start(args, format);
  printf("ABORT: ");
  vfprintf(stderr, format, args);
  va_end(args);
  runtime_exit();
}
