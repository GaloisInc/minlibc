#ifndef MINLIBC_LANGINFO_H
#define MINLIBC_LANGINFO_H

#define CODESET     4

typedef int nl_item;

char *nl_langinfo(nl_item item);

#endif
