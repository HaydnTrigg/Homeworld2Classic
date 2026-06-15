#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <pch.h>
#include <Mathlib\matrix3.h>
#include <Render\gl\r_defines.h>
#include <new>
#include <Render\gl\glext.h>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <xmemory>
#include <math.h>
#include <list>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <map>
#include <xtree>
#include <Mathlib\mathutil.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <profile\profile.h>
#include <iostream>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <platform\osdef.h>
#include <util\colour.h>
#include <renderer.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <Render\gl\lotypes.h>
#include <Graphics\ArcArray.h>
#include <Render\gl\r_types.h>
#include <algorithm>

/* ---------- constants */

/* ---------- definitions */

typedef ArcArray::Arc *ArcIterator;
typedef ArcArray::Arc const *ArcConstIterator;
typedef ArcArray::ArcSegment const *SegmentConstIterator;
typedef ArcArray::ArcSegment *SegmentIterator;

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern float const TwoPiDivTableSize; // 0x839BC8
    extern float const TableSizeDivTwoPi; // 0x839BCC
    extern float sinTable[81]; // 0x844A28
    extern bool tableInitialized; // 0x844B6C
    extern float const nSegmentsReal; // 0x839BD0
    extern float const segmentStep; // 0x844B70
    extern float const indexConvert; // 0x844B74
}

/* ---------- public code */

ArcArray::ArcArray() // 0x569990
{
    mangled_assert("??0ArcArray@@QAE@XZ");
    todo("implement");
}

_inline ArcArray::Arc::~Arc() // 0x5699EB
{
    mangled_assert("??1Arc@ArcArray@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

ArcArray::~ArcArray() // 0x5699F3
{
    mangled_assert("??1ArcArray@@QAE@XZ");
    todo("implement");
}

_inline ArcArray::Arc &ArcArray::Arc::operator=(ArcArray::Arc const &) // 0x569A1B
{
    mangled_assert("??4Arc@ArcArray@@QAEAAU01@ABU01@@Z");
    compiler_generated();
    todo("implement");
}

void ArcArray::addSphere(vector3 const &, float, vector4 const &, float) // 0x569B86
{
    mangled_assert("?addSphere@ArcArray@@QAEXABVvector3@@MABVvector4@@M@Z");
    todo("implement");
}

void ArcArray::addCircle(vector3 const &, float, vector4 const &) // 0x569AC7
{
    mangled_assert("?addCircle@ArcArray@@QAEXABVvector3@@MABVvector4@@@Z");
    todo("implement");
}

void ArcArray::computeIntersections() // 0x569D63
{
    mangled_assert("?computeIntersections@ArcArray@@QAEXXZ");
    todo("implement");
}

void ArcArray::clear() // 0x569D52
{
    mangled_assert("?clear@ArcArray@@QAEXXZ");
    todo("implement");
}

void ArcArray::render() const // 0x56A4B5
{
    mangled_assert("?render@ArcArray@@QBEXXZ");
    todo("implement");
}

void ArcArray::renderArcSegment(vector3 const &, float, vector4 const &, float, float) const // 0x56A54C
{
    mangled_assert("?renderArcSegment@ArcArray@@QBEXABVvector3@@MABVvector4@@MM@Z");
    todo("implement");
}

ArcArray::Arc::Arc() // 0x56997C
{
    mangled_assert("??0Arc@ArcArray@@QAE@XZ");
    todo("implement");
}

ArcArray::Arc::Arc(ArcArray::Arc const &) // 0x56991C
{
    mangled_assert("??0Arc@ArcArray@@QAE@ABU01@@Z");
    todo("implement");
}

void ArcArray::Arc::intersect(ArcArray::Arc &) // 0x569F56
{
    mangled_assert("?intersect@Arc@ArcArray@@QAEXAAU12@@Z");
    todo("implement");
}

ArcArray::ArcSegment &ArcArray::Arc::addSegment(float, float, bool) // 0x569B1B
{
    mangled_assert("?addSegment@Arc@ArcArray@@QAEAAUArcSegment@2@MM_N@Z");
    todo("implement");
}

void ArcArray::Arc::removeSegment(float, float) // 0x56A3C7
{
    mangled_assert("?removeSegment@Arc@ArcArray@@QAEXMM@Z");
    todo("implement");
}

/* ---------- private code */
#endif
