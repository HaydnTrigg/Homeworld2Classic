#if 0
/* ---------- headers */

#include "decomp.h"
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\src\Shared\PC\FDAudio\pch.h"
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\src\Shared\PC\FDAudio\fqcodec.h"
#include <crtdefs.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\src\Shared\PC\FDAudio\fquant.h"
#include <assert.h>
#include <math.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern __int32 fqInitDequant();
extern __int32 fqDequantBlock(char *aQBlock, float *aFPBlock, float *aFSBlock, unsigned char *aEBlock, unsigned long nLen, unsigned long nRate, unsigned long nSize);
extern _inline long fqSUnpack(unsigned long nLen, unsigned long nPos, char *aBlock);
extern _inline unsigned long fqUnpack(unsigned long nLen, unsigned long nPos, char *aBlock);

/* ---------- globals */

extern float aSDBlock[6]; // 0x1000F474
extern unsigned short aCBBlock[27]; // 0x1000A064

/* ---------- private variables */

/* ---------- public code */

_extern __int32 _sub_10005138();
__int32 fqInitDequant() // 0x10005138
{
    mangled_assert("_fqInitDequant@0");
    todo("implement");
    __int32 __result = _sub_10005138();
    return __result;
}

_extern __int32 _sub_10004E55(char *, float *, float *, unsigned char *, unsigned long, unsigned long, unsigned long);
__int32 fqDequantBlock(char *aQBlock, float *aFPBlock, float *aFSBlock, unsigned char *aEBlock, unsigned long nLen, unsigned long nRate, unsigned long nSize) // 0x10004E55
{
    mangled_assert("_fqDequantBlock@28");
    todo("implement");
    __int32 __result = _sub_10004E55(aQBlock, aFPBlock, aFSBlock, aEBlock, nLen, nRate, nSize);
    return __result;
}

_extern long _sub_10005197(unsigned long, unsigned long, char *);
_inline long fqSUnpack(unsigned long nLen, unsigned long nPos, char *aBlock) // 0x10005197
{
    mangled_assert("_fqSUnpack@12");
    todo("implement");
    long __result = _sub_10005197(nLen, nPos, aBlock);
    return __result;
}

_extern unsigned long _sub_100051EB(unsigned long, unsigned long, char *);
_inline unsigned long fqUnpack(unsigned long nLen, unsigned long nPos, char *aBlock) // 0x100051EB
{
    mangled_assert("_fqUnpack@12");
    todo("implement");
    unsigned long __result = _sub_100051EB(nLen, nPos, aBlock);
    return __result;
}

/* ---------- private code */
#endif
