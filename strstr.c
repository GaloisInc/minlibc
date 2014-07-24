#include <string.h>
#include <stdlib.h>

char *strstr(const char *str1, const char *str2)
{
  size_t len_str2 = strlen(str2);
  char *cur;

  for (cur = (char*)str1; cur != NULL; cur = strchr(cur, *str2)) {
    if (!strncmp(cur, str2, len_str2)) {
      break;
    }
    cur++;
  }

  return cur;
}

