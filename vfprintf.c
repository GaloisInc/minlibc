#include <stdarg.h>
#include <stdio.h>
#include <errno.h>
#include <runtime_reqs.h>

int vfprintf(FILE *stream, const char *format, va_list ap)
{
  static char buf[4096];

  if((stream == stdin) || (stream == stdout) || (stream == stderr)) {
    int r = vsnprintf(buf, sizeof(buf), format, ap);
    runtime_write(r, buf);
    return r;
  } else {
    return -1;
  }
}
