#include <stdio.h>
#include <errno.h>

size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream)
{
  size_t size_in_chars = size * nmemb, i;

  for(i = 0; i < size_in_chars; i++)
    if(fputc(*(char*)((unsigned long)ptr + i), stream) == EOF)
      return i / size;

  return nmemb;
}
