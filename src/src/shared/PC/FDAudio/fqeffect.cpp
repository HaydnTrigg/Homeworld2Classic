#if 0
/* ---------- headers */

#include "decomp.h"
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\src\Shared\PC\FDAudio\pch.h"
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\src\Shared\PC\FDAudio\dct.h"
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\src\Shared\PC\FDAudio\fqcodec.h"
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\src\Shared\PC\FDAudio\fquant.h"
#include <math.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\src\Shared\PC\FDAudio\fqeffect.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern long fqFreqToEQBand(long freq);
extern __int32 fqSize(unsigned long nSize);
extern __int32 fqAdd(float *aPBlock, float *aSBlock);
extern __int32 fqScale(float *aBlock, float fLev);
extern __int32 fqMix(float *aPBlock, float *aSBlock, float fLev);
extern __int32 fqPitchShift(float *aBlock, float fShift);
extern __int32 fqEqualize(float *aBlock, float *aEq);
extern __int32 fqDelay(float *aBlock, float fLev, unsigned long nDur, float *aBuf, long nSize, long *nPos);
extern __int32 fqFilterE(float *aBlock, EFFECT *rEffect);
extern __int32 fqAddNoiseE(float *aBlock, EFFECT *rEffect);
extern __int32 fqAddToneE(float *aBlock, EFFECT *rEffect);
extern __int32 fqAddBreakE(float *aBlock, EFFECT *rEffect);
extern __int32 fqPitchShiftE(float *aBlock, EFFECT *rEffect);
extern __int32 fqLimitE(float *aBlock, EFFECT *rEffect);
extern float gaussian();
extern __int32 rrand(__int32 nDummy);

/* ---------- globals */

extern __int32 (*pRandF)(__int32); // 0x1000A034
extern __int32 nRandP; // 0x1000F468
extern unsigned long nBSize; // 0x1000A038
extern unsigned long aEQBlock[10]; // 0x1000A03C

/* ---------- private variables */

/* ---------- public code */

long fqFreqToEQBand(long freq) // 0x10004906
{
    mangled_assert("_fqFreqToEQBand@4");
    todo("implement");
}

__int32 fqSize(unsigned long nSize) // 0x10004D74
{
    mangled_assert("_fqSize@4");
    todo("implement");
}

__int32 fqAdd(float *aPBlock, float *aSBlock) // 0x1000447E
{
    mangled_assert("_fqAdd@8");
    todo("implement");
}

__int32 fqScale(float *aBlock, float fLev) // 0x10004D03
{
    mangled_assert("_fqScale@8");
    todo("implement");
}

__int32 fqMix(float *aPBlock, float *aSBlock, float fLev) // 0x10004A0C
{
    mangled_assert("_fqMix@12");
    todo("implement");
}

__int32 fqPitchShift(float *aBlock, float fShift) // 0x10004A8E
{
    mangled_assert("_fqPitchShift@8");
    todo("implement");
}

__int32 fqEqualize(float *aBlock, float *aEq) // 0x1000481A
{
    mangled_assert("_fqEqualize@8");
    todo("implement");
}

__int32 fqDelay(float *aBlock, float fLev, unsigned long nDur, float *aBuf, long nSize, long *nPos) // 0x10004701
{
    mangled_assert("_fqDelay@24");
    todo("implement");
}

__int32 fqFilterE(float *aBlock, EFFECT *rEffect) // 0x100048AF
{
    mangled_assert("_fqFilterE@8");
    todo("implement");
}

__int32 fqAddNoiseE(float *aBlock, EFFECT *rEffect) // 0x1000454D
{
    mangled_assert("_fqAddNoiseE@8");
    todo("implement");
}

__int32 fqAddToneE(float *aBlock, EFFECT *rEffect) // 0x100045B2
{
    mangled_assert("_fqAddToneE@8");
    todo("implement");
}

__int32 fqAddBreakE(float *aBlock, EFFECT *rEffect) // 0x100044D2
{
    mangled_assert("_fqAddBreakE@8");
    todo("implement");
}

__int32 fqPitchShiftE(float *aBlock, EFFECT *rEffect) // 0x10004BA1
{
    mangled_assert("_fqPitchShiftE@8");
    todo("implement");
}

__int32 fqLimitE(float *aBlock, EFFECT *rEffect) // 0x10004931
{
    mangled_assert("_fqLimitE@8");
    todo("implement");
}

float gaussian() // 0x10004D8C
{
    mangled_assert("_gaussian@0");
    todo("implement");
}

__int32 rrand(__int32 nDummy) // 0x10004475
{
    mangled_assert("_rrand@4");
    todo("implement");
}

/* ---------- private code */
#endif
