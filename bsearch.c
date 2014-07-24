#include <stdlib.h>

void *bsearch(const void *key,
              const void *base0,
              size_t nmemb,
              size_t size,
              int (*compar)(const void *, const void *))
{
  const char *base = base0;
  size_t lim;
  int cmp;
  const void *p;

  for (lim = nmemb; lim != 0; lim >>= 1) {
    p = base + (lim >> 1) * size;
    cmp = (*compar)(key, p);
    if (cmp == 0)
      /* LINTED interface spec */
      return ((void *)p);
    if (cmp > 0) {  /* key > p: move right */
      /* LINTED we don't touch base */
      base = (char *)p + size;
      lim--;
    }               /* else move left */
  }
  return (NULL);
}

