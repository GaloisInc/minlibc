#include <stdlib.h>

char *strcpy(char *dest, const char *src)
{
  char *retval = dest;
  // FIXME: Make higher-speed version?
  while(*src) *dest++ = *src++;
  return retval;
}

