/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <stdarg.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>

#define isdigit(c) ((c) >= '0' && (c) <= '9')
#define isxdigit(c) (isdigit(c) || \
    (((c) >= 'a') && ((c) <= 'f')) || \
    (((c) >= 'A') && ((c) <= 'F')))
#define islower(c) (((c) >= 'a') && ((c) <= 'z'))
#define toupper(c) (islower(c) ? ((c) - ('a' - 'A')) : (c))

static int skip_atoi(const char **s)
{
  int i=0;

  while (isdigit(**s))
    i = i*10 + *((*s)++) - '0';
  return i;
}

#define ZEROPAD 1               /* pad with zero */
#define SIGN    2               /* unsigned/signed long */
#define PLUS    4               /* show plus */
#define SPACE   8               /* space if plus */
#define LEFT    16              /* left justified */
#define SPECIAL 32              /* 0x */
#define LARGE   64              /* use 'ABCDEF' instead of 'abcdef' */

static char * number(char * buf, char * end, long long num, int base, int size, int precision, int type)
{
  char c,sign,tmp[66];
  const char *digits;
  const char small_digits[] = "0123456789abcdefghijklmnopqrstuvwxyz";
  const char large_digits[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int i;

  digits = (type & LARGE) ? large_digits : small_digits;
  if (type & LEFT)
    type &= ~ZEROPAD;
  if (base < 2 || base > 36)
    return buf;
  c = (type & ZEROPAD) ? '0' : ' ';
  sign = 0;
  if (type & SIGN) {
    if (num < 0) {
      sign = '-';
      num = -num;
      size--;
    } else if (type & PLUS) {
      sign = '+';
      size--;
    } else if (type & SPACE) {
      sign = ' ';
      size--;
    }
  }
  if (type & SPECIAL) {
    if (base == 16)
      size -= 2;
    else if (base == 8)
      size--;
  }
  i = 0;
  if (num == 0)
    tmp[i++]='0';
  else 
  {
    /* XXX KAF: force unsigned mod and div. */
    unsigned long long num2=(unsigned long long)num;
    unsigned int base2=(unsigned int)base;
    while (num2 != 0) { tmp[i++] = digits[num2%base2]; num2 /= base2; }
  }
  if (i > precision)
    precision = i;
  size -= precision;
  if (!(type&(ZEROPAD+LEFT))) {
    while(size-->0) {
      if (buf <= end)
        *buf = ' ';
      ++buf;
    }
  }
  if (sign) {
    if (buf <= end)
      *buf = sign;
    ++buf;
  }
  if (type & SPECIAL) {
    if (base==8) {
      if (buf <= end)
        *buf = '0';
      ++buf;
    } else if (base==16) {
      if (buf <= end)
        *buf = '0';
      ++buf;
      if (buf <= end)
        *buf = digits[33];
      ++buf;
    }
  }
  if (!(type & LEFT)) {
    while (size-- > 0) {
      if (buf <= end)
        *buf = c;
      ++buf;
    }
  }
  while (i < precision--) {
    if (buf <= end)
      *buf = '0';
    ++buf;
  }
  while (i-- > 0) {
    if (buf <= end)
      *buf = tmp[i];
    ++buf;
  }
  while (size-- > 0) {
    if (buf <= end)
      *buf = ' ';
    ++buf;
  }
  return buf;
}


int vsnprintf(char *buf, size_t size, const char *fmt, va_list args)
{
  // Written by Rolf 
  int len;
  unsigned long long num;
  int i, base;
  char *str, *end, c;
  const char *s;
  double fnum;

  int flags;          /* flags to number() */

  int field_width;    /* width of output field */
  int precision;              /* min. # of digits for integers; max
                                 number of chars for from string */
  int qualifier;              /* 'h', 'l', or 'L' for integer fields */
  /* 'z' support added 23/7/1999 S.H.    */
  /* 'z' changed to 'Z' --davidm 1/25/99 */

  str = buf;
  end = buf + size - 1;

  if (end < buf - 1) {
    end = ((void *) -1);
    size = end - buf + 1;
  }

  for (; *fmt ; ++fmt) {
    if (*fmt != '%') {
      if (str <= end)
        *str = *fmt;
      ++str;
      continue;
    }

    /* process flags */
    flags = 0;
repeat:
    ++fmt;          /* this also skips first '%' */
    switch (*fmt) {
      case '-': flags |= LEFT; goto repeat;
      case '+': flags |= PLUS; goto repeat;
      case ' ': flags |= SPACE; goto repeat;
      case '#': flags |= SPECIAL; goto repeat;
      case '0': flags |= ZEROPAD; goto repeat;
    }

    /* get field width */
    field_width = -1;
    if (isdigit(*fmt))
      field_width = skip_atoi(&fmt);
    else if (*fmt == '*') {
      ++fmt;
      /* it's the next argument */
      field_width = va_arg(args, int);
      if (field_width < 0) {
        field_width = -field_width;
        flags |= LEFT;
      }
    }

    /* get the precision */
    precision = -1;
    if (*fmt == '.') {
      ++fmt;
      if (isdigit(*fmt))
        precision = skip_atoi(&fmt);
      else if (*fmt == '*') {
        ++fmt;
        /* it's the next argument */
        precision = va_arg(args, int);
      }
      if (precision < 0)
        precision = 0;
    }

    /* get the conversion qualifier */
    qualifier = -1;
    if (*fmt == 'h' || *fmt == 'l' || *fmt == 'L' || *fmt =='Z' || *fmt =='z') {
      qualifier = *fmt;
      ++fmt;
      if (qualifier == 'l' && *fmt == 'l') {
        qualifier = 'L';
        ++fmt;
      }
    }
    if (*fmt == 'q') {
      qualifier = 'L';
      ++fmt;
    }

    /* default base */
    base = 10;

    switch (*fmt) {
      case 'c':
        if (!(flags & LEFT)) {
          while (--field_width > 0) {
            if (str <= end)
              *str = ' ';
            ++str;
          }
        }
        c = (unsigned char) va_arg(args, int);
        if (str <= end)
          *str = c;
        ++str;
        while (--field_width > 0) {
          if (str <= end)
            *str = ' ';
          ++str;
        }
        continue;

      case 's':
        s = va_arg(args, char *);
        if (!s)
          s = "<NULL>";

        len = strnlen(s, precision);

        if (!(flags & LEFT)) {
          while (len < field_width--) {
            if (str <= end)
              *str = ' ';
            ++str;
          }
        }
        for (i = 0; i < len; ++i) {
          if (str <= end)
            *str = *s;
          ++str; ++s;
        }
        while (len < field_width--) {
          if (str <= end)
            *str = ' ';
          ++str;
        }
        continue;

      case 'p':
        if (field_width == -1) {
          field_width = 2*sizeof(void *);
          flags |= ZEROPAD;
        }
        str = number(str, end,
            (unsigned long) va_arg(args, void *),
            16, field_width, precision, flags);
        continue;

      case 'n':
        /* FIXME:
         * What does C99 say about the overflow case here? */
        if (qualifier == 'l') {
          long * ip = va_arg(args, long *);
          *ip = (str - buf);
        } else if (qualifier == 'Z') {
          size_t * ip = va_arg(args, size_t *);
          *ip = (str - buf);
        } else {
          int * ip = va_arg(args, int *);
          *ip = (str - buf);
        }
        continue;

      case '%':
        if (str <= end)
          *str = '%';
        ++str;
        continue;

      case 'o':
        base = 8;
        break;

      case 'X':
        flags |= LARGE;
      case 'x':
        base = 16;
        break;

      case 'd':
      case 'i':
        flags |= SIGN;
      case 'u':
        break;

      case 'f':
        /* this is a pretty crappy way to do this */
        fnum = va_arg(args, double);
        num = (unsigned long long)fnum;
        str = number(str, end, num, 10, field_width, -1, flags);
        if(str < end) {
          fnum = fnum - num;
          if(precision != 0) {
            *str++ = '.';
            precision = (precision == -1) ? 10 : precision;
            while(precision != 0) {
              fnum *= 10;
              num   = (unsigned long long)fnum;
              *str++ = '0' + num;
              fnum -= num;
              precision--;
            }
          }
        }
        continue;

      default:
        if (str <= end)
          *str = '%';
        ++str;
        if (*fmt) {
          if (str <= end)
            *str = *fmt;
          ++str;
        } else {
          --fmt;
        }
        continue;
    }
    if (qualifier == 'L')
      num = va_arg(args, long long);
    else if (qualifier == 'l') {
      num = va_arg(args, unsigned long);
      if (flags & SIGN)
        num = (signed long) num;
    } else if (qualifier == 'Z') {
      num = va_arg(args, size_t);
    } else if (qualifier == 'h') {
      num = (unsigned short) va_arg(args, int);
      if (flags & SIGN)
        num = (signed short) num;
    } else {
      num = va_arg(args, unsigned int);
      if (flags & SIGN)
        num = (signed int) num;
    }

    str = number(str, end, num, base,
        field_width, precision, flags);
  }
  if (str <= end)
    *str = '\0';
  else if (size > 0)
    /* don't write out a null byte if the buf size is zero */
    *end = '\0';
  /* the trailing null byte doesn't count towards the total
   * ++str;
   */
  return str-buf;
}
