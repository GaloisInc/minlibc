#include <stdio.h>
#include <errno.h>

int fputc(int c, FILE *stream)
{
  if(fprintf(stream, "%c", c) >= 1)
    return (int)c;
  else
    return EOF;
}
