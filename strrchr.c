#include <string.h>
#include <stdlib.h>

char  *strrchr(const char *s, int c)
{
  char *retval = NULL;
  const char *cur;
  for(cur = s; *cur; cur++)
    if(*cur == c)
      retval = (char*)cur;
  return retval;
}

