#include <string.h>
#include <stdlib.h>

char *strchr(const char *s, int c)
{
  const char *cur;
  for (cur = s; *cur; cur++) {
    if (*cur == c) {
      return ((char*)cur);
    }
  }

  return NULL;
}
