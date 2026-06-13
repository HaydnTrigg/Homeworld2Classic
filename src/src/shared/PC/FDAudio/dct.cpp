#if 0
/* ---------- headers */

#include "decomp.h"
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\src\Shared\PC\FDAudio\pch.h"
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\src\Shared\PC\FDAudio\dct.h"
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

_extern __int32 _sub_10001110(float *, float *, float *, unsigned long);
__int32 idct(float *g, float *f, float *c, unsigned long n) // 0x10001110
{
    mangled_assert("_idct@16");
    todo("implement");
    __int32 __result = _sub_10001110(g, f, c, n);
    return __result;
}

_extern __int32 _sub_10001029(float *, unsigned long);
__int32 Initdct(float *c, unsigned long n) // 0x10001029
{
    mangled_assert("_Initdct@8");
    todo("implement");
    __int32 __result = _sub_10001029(c, n);
    return __result;
}

/* ---------- private code */
#endif
