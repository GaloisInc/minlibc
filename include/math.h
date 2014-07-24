#ifndef MINLIBC_MATH_H
#define MINLIBC_MATH_H

#define DBL_MIN_EXP       __DBL_MIN_EXP__
#define DBL_MANT_DIG      __DBL_MANT_DIG__
#define FLT_MIN_EXP       __FLT_MIN_EXP__
#define FLT_MANT_DIG      __FLT_MANT_DIG__

double modf(double x, double *iptr);
double ldexp(double x, int exp);

#endif
