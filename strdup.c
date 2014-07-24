#include <string.h>

char *strdup(const char *s)
{
  size_t bufsize = strlen(s) + 1;
  char *retval = malloc(bufsize);
  printf("strdup\n");
  if(retval) memcpy(retval, s, bufsize);
  return retval;
}

