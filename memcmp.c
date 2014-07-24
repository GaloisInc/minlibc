#include <string.h>

int memcmp(const void *s1, const void *s2, size_t n)
{
   unsigned char *str1 = (void*)s1;
   unsigned char *str2 = (void*)s2;
   size_t pos;

   for(pos = 0; pos < n; pos++) {
     if(str1[pos] < str2[pos])
       return 1;
     if(str1[pos] > str2[pos])
       return -1;
   }
   return 0;
}

