#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <fileio\iff.h>
#include <pch.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <AnimCurve.h>
#include <xutility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <list>
#include <Mathlib\vector3.h>
#include <RenderAnim\MarkerAnimation.h>
#include <Mathlib\vector4.h>
#include <RenderAnim\Marker.h>
#include <Animation.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_5168D8(Marker *const);
Marker::Marker() // 0x5168D8
{
    mangled_assert("??0Marker@@QAE@XZ");
    todo("implement");
    _sub_5168D8(this);
}

_extern void _sub_516956(Marker *const);
Marker::~Marker() // 0x516956
{
    mangled_assert("??1Marker@@QAE@XZ");
    todo("implement");
    _sub_516956(this);
}

_extern vector3 _sub_516E86(Marker const *const);
vector3 Marker::getOffset() const // 0x516E86
{
    mangled_assert("?getOffset@Marker@@QBE?AVvector3@@XZ");
    todo("implement");
    vector3 __result = _sub_516E86(this);
    return __result;
}

_extern vector3 _sub_516E5C(Marker const *const);
vector3 Marker::getDirection() const // 0x516E5C
{
    mangled_assert("?getDirection@Marker@@QBE?AVvector3@@XZ");
    todo("implement");
    vector3 __result = _sub_516E5C(this);
    return __result;
}

_extern matrix4 _sub_516E9E(Marker const *const, float);
matrix4 Marker::getTransform(float) const // 0x516E9E
{
    mangled_assert("?getTransform@Marker@@QBE?AVmatrix4@@M@Z");
    todo("implement");
    matrix4 __result = _sub_516E9E(this, arg);
    return __result;
}

_extern vector3 _sub_516E74(Marker const *const, float);
vector3 Marker::getOffset(float) const // 0x516E74
{
    mangled_assert("?getOffset@Marker@@QBE?AVvector3@@M@Z");
    todo("implement");
    vector3 __result = _sub_516E74(this, arg);
    return __result;
}

_extern vector3 _sub_516E4A(Marker const *const, float);
vector3 Marker::getDirection(float) const // 0x516E4A
{
    mangled_assert("?getDirection@Marker@@QBE?AVvector3@@M@Z");
    todo("implement");
    vector3 __result = _sub_516E4A(this, arg);
    return __result;
}

_extern __int32 _sub_516BB8(IFF *, IFFChunk *, void *, void *);
__int32 Marker::HandleHEAD(IFF *iff, IFFChunk *pChunk, void *pContext1, void *pContext2) // 0x516BB8
{
    mangled_assert("?HandleHEAD@Marker@@CGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
    __int32 __result = _sub_516BB8(iff, pChunk, pContext1, pContext2);
    return __result;
}

_extern __int32 _sub_516E1A(IFF *, IFFChunk *, void *, void *);
__int32 Marker::HandleKEYF(IFF *iff, IFFChunk *pChunk, void *pContext1, void *pContext2) // 0x516E1A
{
    mangled_assert("?HandleKEYF@Marker@@CGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
    __int32 __result = _sub_516E1A(iff, pChunk, pContext1, pContext2);
    return __result;
}

_extern __int32 _sub_5169C0(IFF *, IFFChunk *, void *, void *);
__int32 Marker::HandleANIM(IFF *iff, IFFChunk *pChunk, void *pContext1, void *pContext2) // 0x5169C0
{
    mangled_assert("?HandleANIM@Marker@@CGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
    __int32 __result = _sub_5169C0(iff, pChunk, pContext1, pContext2);
    return __result;
}

_extern __int32 _sub_516EC8(Marker *const, IFF &);
__int32 Marker::load(IFF &) // 0x516EC8
{
    mangled_assert("?load@Marker@@QAEHAAVIFF@@@Z");
    todo("implement");
    __int32 __result = _sub_516EC8(this, arg);
    return __result;
}

/* ---------- private code */
#endif
