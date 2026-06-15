#if 0
/* ---------- headers */

#include "decomp.h"
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <Mathlib\matrix3.h>
#include <Interface.h>
#include <xutility>
#include <gameRender.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <Mathlib\quat.h>
#include <platform\windowinterface.h>
#include <platform\osdef.h>
#include <Interpolation.h>
#include <platform\platformexports.h>
#include <util\colour.h>
#include <selection.h>
#include <savegamedef.h>
#include <Camera\Camera.h>
#include <Camera\Frustum.h>
#include <Camera\Plane3.h>
#include <SelTarg.h>
#include <prim.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void stScreenCircleCompute(vector3 const &worldPosition, float const worldRadius, float &screenX, float &screenY, float &screenDepth, float &screenRadius, matrix4 const &modelView, matrix4 const &projection);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

SelTarg::SelTarg() // 0x632E61
{
    mangled_assert("??0SelTarg@@QAE@XZ");
    todo("implement");
}

void SelTarg::getRectangle(PrimRectangle *, bool, float) const // 0x632EB7
{
    mangled_assert("?getRectangle@SelTarg@@UBEXPAUPrimRectangle@@_NM@Z");
    todo("implement");
}

void SelTarg::getRectangleCentred(PrimRectangle *, bool, float) const // 0x632F43
{
    mangled_assert("?getRectangleCentred@SelTarg@@UBEXPAUPrimRectangle@@_NM@Z");
    todo("implement");
}

float SelTarg::intersectRect(PrimRectangle const &, bool) // 0x632F89
{
    mangled_assert("?intersectRect@SelTarg@@UAEMABUPrimRectangle@@_N@Z");
    todo("implement");
}

void SelTarg::compute(vector3 const &, float, matrix3 const &, float, Camera const *) // 0x632E74
{
    mangled_assert("?compute@SelTarg@@UAEXABVvector3@@MABVmatrix3@@MPBVCamera@@@Z");
    todo("implement");
}

bool SelTarg::isPointInCircle(float, float, float) const // 0x63304D
{
    mangled_assert("?isPointInCircle@SelTarg@@ABE_NMMM@Z");
    todo("implement");
}

bool SelTarg::intersectPoint(float, float) const // 0x632F5F
{
    mangled_assert("?intersectPoint@SelTarg@@UBE_NMM@Z");
    todo("implement");
}

bool SelTarg::isOnScreen() const // 0x632FF5
{
    mangled_assert("?isOnScreen@SelTarg@@UBE_NXZ");
    todo("implement");
}

void stScreenCircleCompute(vector3 const &worldPosition, float const worldRadius, float &screenX, float &screenY, float &screenDepth, float &screenRadius, matrix4 const &modelView, matrix4 const &projection) // 0x6330E4
{
    mangled_assert("?stScreenCircleCompute@@YGXABVvector3@@MAAM111ABVmatrix4@@2@Z");
    todo("implement");
}

/* ---------- private code */
#endif
