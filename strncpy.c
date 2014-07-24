#include <string.h>

char  *strncpy(char *dest, const char *src, size_t count)
{
  char *tmp = dest;
  while (count-- && (*dest++ = *src++) != '\0')
    /* nothing */;
  return tmp;
}

