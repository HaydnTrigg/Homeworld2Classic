#if 0
/* ---------- headers */

#include "decomp.h"
#include "src\src\Shared\PC\FDAudio\pch.h"
#include "src\src\Shared\PC\FDAudio\dct.h"
#include <xtgmath.h>
#include <math.h>

/* ---------- constants */

/* ---------- definitions */

typedef double type;

/* ---------- prototypes */

extern __int32 idct(float *g, float *f, float *c, unsigned long n);
extern __int32 Initdct(float *c, unsigned long n);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

__int32 idct(float *g, float *f, float *c, unsigned long n) // 0x10001110
{
    mangled_assert("_idct@16");
    todo("implement");
}

__int32 Initdct(float *c, unsigned long n) // 0x10001029
{
    mangled_assert("_Initdct@8");
    todo("implement");
}

/* ---------- private code */
#endif
