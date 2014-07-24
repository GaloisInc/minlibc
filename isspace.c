#include <ctype.h>

int isspace(int c)
{
  return ((c == ' ') || (c == '\n') || (c == '\t'));
}
