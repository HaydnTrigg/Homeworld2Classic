#if 0
/* ---------- headers */

#include "decomp.h"
#include <swprintf.inl>
#include <math.h>
#include <crtdefs.h>
#include <stdio.h>
#include <sal.h>
#include <concurrencysal.h>
#include <vadefs.h>
#include <stdlib.h>
#include <limits.h>

/* ---------- constants */

/* ---------- definitions */

typedef unsigned short wchar_t;

/* ---------- prototypes */

extern void factorize(long n, long *nFact, long *fact);
extern void transTableSetup(long *sofar, long *actual, long *remain, long *nFact, long *nPoints);
extern void permute(long nPoint, long nFact, long *fact, long *remain, float *xRe, float *xIm, float *yRe, float *yIm);
extern void initTrig(long radix);
extern void fft_4(float *aRe, float *aIm);
extern void fft_5(float *aRe, float *aIm);
extern void fft_8(...);
extern void fft_10(...);
extern void fft_odd(long radix);
extern void twiddleTransf(long sofarRadix, long radix, long remainRadix, float *yRe, float *yIm);
extern void fft(long n, float *xRe, float *xIm, float *yRe, float *yIm);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern float c3_1; // 0x1000A09C
    extern float c3_2; // 0x1000A0A0
    extern float u5; // 0x1000A0A4
    extern float c5_1; // 0x1000A0A8
    extern float c5_2; // 0x1000A0AC
    extern float c5_3; // 0x1000A0B0
    extern float c5_4; // 0x1000A0B4
    extern float c5_5; // 0x1000A0B8
    extern float c8; // 0x1000A0BC
    extern float pi; // 0x1000F490
    extern long groupOffset; // 0x1000F494
    extern long dataOffset; // 0x1000F498
    extern long adr; // 0x1000F49C
    extern long groupNo; // 0x1000F4A0
    extern long dataNo; // 0x1000F4A4
    extern long blockNo; // 0x1000F4A8
    extern long twNo; // 0x1000F4AC
    extern float omega; // 0x1000F4B0
    extern float tw_re; // 0x1000F4B4
    extern float tw_im; // 0x1000F4B8
    extern float twiddleRe[37]; // 0x1000F4C0
    extern float twiddleIm[37]; // 0x1000F558
    extern float trigRe[37]; // 0x1000F5F0
    extern float trigIm[37]; // 0x1000F688
    extern float zRe[37]; // 0x1000F720
    extern float zIm[37]; // 0x1000F7B8
    extern float vRe[19]; // 0x1000F850
    extern float vIm[19]; // 0x1000F8A0
    extern float wRe[19]; // 0x1000F8F0
    extern float wIm[19]; // 0x1000F940
}

/* ---------- public code */

_extern void _sub_10005224(long, long *, long *);
void factorize(long n, long *nFact, long *fact) // 0x10005224
{
    mangled_assert("_factorize@12");
    todo("implement");
    _sub_10005224(n, nFact, fact);
}

_extern void _sub_10005F5E(long *, long *, long *, long *, long *);
void transTableSetup(long *sofar, long *actual, long *remain, long *nFact, long *nPoints) // 0x10005F5E
{
    mangled_assert("_transTableSetup@20");
    todo("implement");
    _sub_10005F5E(sofar, actual, remain, nFact, nPoints);
}

_extern void _sub_10005E47(long, long, long *, long *, float *, float *, float *, float *);
void permute(long nPoint, long nFact, long *fact, long *remain, float *xRe, float *xIm, float *yRe, float *yIm) // 0x10005E47
{
    mangled_assert("_permute@32");
    todo("implement");
    _sub_10005E47(nPoint, nFact, fact, remain, xRe, xIm, yRe, yIm);
}

_extern void _sub_10005D65(long);
void initTrig(long radix) // 0x10005D65
{
    mangled_assert("_initTrig@4");
    todo("implement");
    _sub_10005D65(radix);
}

_extern void _sub_10005682(float *, float *);
void fft_4(float *aRe, float *aIm) // 0x10005682
{
    mangled_assert("_fft_4@8");
    todo("implement");
    _sub_10005682(aRe, aIm);
}

_extern void _sub_10005732(float *, float *);
void fft_5(float *aRe, float *aIm) // 0x10005732
{
    mangled_assert("_fft_5@8");
    todo("implement");
    _sub_10005732(aRe, aIm);
}

_extern void _sub_1000591C(...);
void fft_8(...) // 0x1000591C
{
    mangled_assert("_fft_8@0");
    todo("implement");
    _sub_1000591C(bRe);
}

_extern void _sub_100053FE(...);
void fft_10(...) // 0x100053FE
{
    mangled_assert("_fft_10@0");
    todo("implement");
    _sub_100053FE(bRe);
}

_extern void _sub_10005B8B(long);
void fft_odd(long radix) // 0x10005B8B
{
    mangled_assert("_fft_odd@4");
    todo("implement");
    _sub_10005B8B(radix);
}

_extern void _sub_10006016(long, long, long, float *, float *);
void twiddleTransf(long sofarRadix, long radix, long remainRadix, float *yRe, float *yIm) // 0x10006016
{
    mangled_assert("_twiddleTransf@20");
    todo("implement");
    _sub_10006016(sofarRadix, radix, remainRadix, yRe, yIm);
}

_extern void _sub_1000537D(long, float *, float *, float *, float *);
void fft(long n, float *xRe, float *xIm, float *yRe, float *yIm) // 0x1000537D
{
    mangled_assert("_fft@20");
    todo("implement");
    _sub_1000537D(n, xRe, xIm, yRe, yIm);
}

/* ---------- private code */
#endif
