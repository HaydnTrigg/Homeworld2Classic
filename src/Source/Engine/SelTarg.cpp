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

_extern _sub_632E61(SelTarg *const);
SelTarg::SelTarg() // 0x632E61
{
    mangled_assert("??0SelTarg@@QAE@XZ");
    todo("implement");
    _sub_632E61(this);
}

_extern void _sub_632EB7(SelTarg const *const, PrimRectangle *, bool, float);
void SelTarg::getRectangle(PrimRectangle *, bool, float) const // 0x632EB7
{
    mangled_assert("?getRectangle@SelTarg@@UBEXPAUPrimRectangle@@_NM@Z");
    todo("implement");
    _sub_632EB7(this, arg, arg, arg);
}

_extern void _sub_632F43(SelTarg const *const, PrimRectangle *, bool, float);
void SelTarg::getRectangleCentred(PrimRectangle *, bool, float) const // 0x632F43
{
    mangled_assert("?getRectangleCentred@SelTarg@@UBEXPAUPrimRectangle@@_NM@Z");
    todo("implement");
    _sub_632F43(this, arg, arg, arg);
}

_extern float _sub_632F89(SelTarg *const, PrimRectangle const &, bool);
float SelTarg::intersectRect(PrimRectangle const &, bool) // 0x632F89
{
    mangled_assert("?intersectRect@SelTarg@@UAEMABUPrimRectangle@@_N@Z");
    todo("implement");
    float __result = _sub_632F89(this, arg, arg);
    return __result;
}

_extern void _sub_632E74(SelTarg *const, vector3 const &, float, matrix3 const &, float, Camera const *);
void SelTarg::compute(vector3 const &, float, matrix3 const &, float, Camera const *) // 0x632E74
{
    mangled_assert("?compute@SelTarg@@UAEXABVvector3@@MABVmatrix3@@MPBVCamera@@@Z");
    todo("implement");
    _sub_632E74(this, arg, arg, arg, arg, arg);
}

_extern bool _sub_63304D(SelTarg const *const, float, float, float);
bool SelTarg::isPointInCircle(float, float, float) const // 0x63304D
{
    mangled_assert("?isPointInCircle@SelTarg@@ABE_NMMM@Z");
    todo("implement");
    bool __result = _sub_63304D(this, arg, arg, arg);
    return __result;
}

_extern bool _sub_632F5F(SelTarg const *const, float, float);
bool SelTarg::intersectPoint(float, float) const // 0x632F5F
{
    mangled_assert("?intersectPoint@SelTarg@@UBE_NMM@Z");
    todo("implement");
    bool __result = _sub_632F5F(this, arg, arg);
    return __result;
}

_extern bool _sub_632FF5(SelTarg const *const);
bool SelTarg::isOnScreen() const // 0x632FF5
{
    mangled_assert("?isOnScreen@SelTarg@@UBE_NXZ");
    todo("implement");
    bool __result = _sub_632FF5(this);
    return __result;
}

_extern void _sub_6330E4(vector3 const &, float const, float &, float &, float &, float &, matrix4 const &, matrix4 const &);
void stScreenCircleCompute(vector3 const &worldPosition, float const worldRadius, float &screenX, float &screenY, float &screenDepth, float &screenRadius, matrix4 const &modelView, matrix4 const &projection) // 0x6330E4
{
    mangled_assert("?stScreenCircleCompute@@YGXABVvector3@@MAAM111ABVmatrix4@@2@Z");
    todo("implement");
    _sub_6330E4(worldPosition, worldRadius, screenX, screenY, screenDepth, screenRadius, modelView, projection);
}

/* ---------- private code */
#endif
