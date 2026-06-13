#if 0
/* ---------- headers */

#include "decomp.h"
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\src\Shared\PC\FDAudio\pch.h"
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\src\Shared\PC\FDAudio\dct.h"
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\src\Shared\PC\FDAudio\fqcodec.h"
#include <math.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern __int32 fqDecOver(float *aFPBlock, float *aFSBlock, float *aTPBlock, float *aTSBlock, float *aCBlock, float *aWBlock, unsigned long nSize);
extern __int32 fqDecBlock(float *aFPBlock, float *aFSBlock, float *aTPBlock, float *aTSBlock, __int32 nMode, __int32 nFact);
extern __int32 fqWriteTBlock(float *aLBlock, float *aRBlock, short nChan, void *pBuf1, unsigned long nSize1, void *pBuf2, unsigned long nSize2);

/* ---------- globals */

extern double fChopT; // 0x1000DF60
extern float aCDBlock[256]; // 0x1000DF68
extern float aCBlock[128]; // 0x1000E368
extern float aCHBlock[64]; // 0x1000E568
extern float aWDBlock[512]; // 0x1000E668
extern float aWBlock[256]; // 0x1000EE68
extern float aWHBlock[128]; // 0x1000F268

/* ---------- private variables */

/* ---------- public code */

_extern __int32 _sub_10004213(float *, float *, float *, float *, float *, float *, unsigned long);
__int32 fqDecOver(float *aFPBlock, float *aFSBlock, float *aTPBlock, float *aTSBlock, float *aCBlock, float *aWBlock, unsigned long nSize) // 0x10004213
{
    mangled_assert("_fqDecOver@28");
    todo("implement");
    __int32 __result = _sub_10004213(aFPBlock, aFSBlock, aTPBlock, aTSBlock, aCBlock, aWBlock, nSize);
    return __result;
}

_extern __int32 _sub_10003EF9(float *, float *, float *, float *, __int32, __int32);
__int32 fqDecBlock(float *aFPBlock, float *aFSBlock, float *aTPBlock, float *aTSBlock, __int32 nMode, __int32 nFact) // 0x10003EF9
{
    mangled_assert("_fqDecBlock@24");
    todo("implement");
    __int32 __result = _sub_10003EF9(aFPBlock, aFSBlock, aTPBlock, aTSBlock, nMode, nFact);
    return __result;
}

_extern __int32 _sub_100042B5(float *, float *, short, void *, unsigned long, void *, unsigned long);
__int32 fqWriteTBlock(float *aLBlock, float *aRBlock, short nChan, void *pBuf1, unsigned long nSize1, void *pBuf2, unsigned long nSize2) // 0x100042B5
{
    mangled_assert("_fqWriteTBlock@28");
    todo("implement");
    __int32 __result = _sub_100042B5(aLBlock, aRBlock, nChan, pBuf1, nSize1, pBuf2, nSize2);
    return __result;
}

/* ---------- private code */
#endif
