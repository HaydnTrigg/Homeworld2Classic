#if 0
/* ---------- headers */

#include "decomp.h"
#include <Mathlib\vector3.h>
#include <util\types.h>
#include <Mathlib\pch.h>
#include <Mathlib\matrix4.h>
#include <Mathlib\quat.h>
#include <Mathlib\matrix3.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <math.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern vector3 vector3::zero; // 0x84B89C

/* ---------- private variables */

/* ---------- public code */

_extern __int32 _sub_65CDA1(vector3 const *const);
__int32 vector3::DominantAxis() const // 0x65CDA1
{
    mangled_assert("?DominantAxis@vector3@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_65CDA1(this);
    return __result;
}

_extern void _sub_65D097(vector3 *const, float);
void vector3::NormalizeToLength(float) // 0x65D097
{
    mangled_assert("?NormalizeToLength@vector3@@QAEXM@Z");
    todo("implement");
    _sub_65D097(this, arg);
}

_extern void _sub_65CCB2(vector3 *const, float, float);
void vector3::ClampComponents(float, float) // 0x65CCB2
{
    mangled_assert("?ClampComponents@vector3@@QAEXMM@Z");
    todo("implement");
    _sub_65CCB2(this, arg, arg);
}

_extern void _sub_65D1D8(vector3 *const, vector3 const &);
void vector3::minimum(vector3 const &) // 0x65D1D8
{
    mangled_assert("?minimum@vector3@@QAEXABV1@@Z");
    todo("implement");
    _sub_65D1D8(this, arg);
}

_extern void _sub_65D1B8(vector3 *const, vector3 const &);
void vector3::maximum(vector3 const &) // 0x65D1B8
{
    mangled_assert("?maximum@vector3@@QAEXABV1@@Z");
    todo("implement");
    _sub_65D1B8(this, arg);
}

_extern void _sub_65CD0B(vector3 *const, float, float);
void vector3::ClampMagnitude(float, float) // 0x65CD0B
{
    mangled_assert("?ClampMagnitude@vector3@@QAEXMM@Z");
    todo("implement");
    _sub_65CD0B(this, arg, arg);
}

_extern void _sub_65CD75(vector3 *const, float);
void vector3::ClampMagnitudeMin(float) // 0x65CD75
{
    mangled_assert("?ClampMagnitudeMin@vector3@@QAEXM@Z");
    todo("implement");
    _sub_65CD75(this, arg);
}

_extern void _sub_65CD45(vector3 *const, float);
void vector3::ClampMagnitudeMax(float) // 0x65CD45
{
    mangled_assert("?ClampMagnitudeMax@vector3@@QAEXM@Z");
    todo("implement");
    _sub_65CD45(this, arg);
}

_extern void _sub_65D13C(vector3 *const, vector3 const &, vector3 const &, float);
void vector3::VectorsBlend(vector3 const &, vector3 const &, float) // 0x65D13C
{
    mangled_assert("?VectorsBlend@vector3@@QAEXABV1@0M@Z");
    todo("implement");
    _sub_65D13C(this, arg, arg, arg);
}

_extern void _sub_65CF5C(vector3 *const, vector3 const &, vector3 const &, float);
void vector3::LineIntersectWithXYPlane(vector3 const &, vector3 const &, float) // 0x65CF5C
{
    mangled_assert("?LineIntersectWithXYPlane@vector3@@QAEXABV1@0M@Z");
    todo("implement");
    _sub_65CF5C(this, arg, arg, arg);
}

_extern void _sub_65D02E(vector3 *const, vector3 const &, vector3 const &, float);
void vector3::LineIntersectWithYZPlane(vector3 const &, vector3 const &, float) // 0x65D02E
{
    mangled_assert("?LineIntersectWithYZPlane@vector3@@QAEXABV1@0M@Z");
    todo("implement");
    _sub_65D02E(this, arg, arg, arg);
}

_extern void _sub_65CFC5(vector3 *const, vector3 const &, vector3 const &, float);
void vector3::LineIntersectWithXZPlane(vector3 const &, vector3 const &, float) // 0x65CFC5
{
    mangled_assert("?LineIntersectWithXZPlane@vector3@@QAEXABV1@0M@Z");
    todo("implement");
    _sub_65CFC5(this, arg, arg, arg);
}

_extern void _sub_65CE64(vector3 *const, vector3 &, vector3 &, vector3 &, vector3 &);
void vector3::LineIntersectWithPlane(vector3 &, vector3 &, vector3 &, vector3 &) // 0x65CE64
{
    mangled_assert("?LineIntersectWithPlane@vector3@@QAEXAAV1@000@Z");
    todo("implement");
    _sub_65CE64(this, arg, arg, arg, arg);
}

_extern char *_sub_65D0F8(vector3 *const, char *);
char *vector3::PrintToBuffer(char *) // 0x65D0F8
{
    mangled_assert("?PrintToBuffer@vector3@@QAEPADPAD@Z");
    todo("implement");
    char * __result = _sub_65D0F8(this, arg);
    return __result;
}

/* ---------- private code */
/* combined */
/* ---------- headers */

#include "decomp.h"
#include <Mathlib\vector3.h>
#include <util\types.h>
#include <Mathlib\pch.h>
#include <Mathlib\matrix4.h>
#include <Mathlib\quat.h>
#include <Mathlib\matrix3.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <math.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern vector3 vector3::zero; // 0x101A568C

/* ---------- private variables */

/* ---------- public code */

_extern __int32 _sub_100C25E1(vector3 const *const);
__int32 vector3::DominantAxis() const // 0x100C25E1
{
    mangled_assert("?DominantAxis@vector3@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_100C25E1(this);
    return __result;
}

_extern void _sub_100C28D7(vector3 *const, float);
void vector3::NormalizeToLength(float) // 0x100C28D7
{
    mangled_assert("?NormalizeToLength@vector3@@QAEXM@Z");
    todo("implement");
    _sub_100C28D7(this, arg);
}

_extern void _sub_100C24F2(vector3 *const, float, float);
void vector3::ClampComponents(float, float) // 0x100C24F2
{
    mangled_assert("?ClampComponents@vector3@@QAEXMM@Z");
    todo("implement");
    _sub_100C24F2(this, arg, arg);
}

_extern void _sub_100C2A18(vector3 *const, vector3 const &);
void vector3::minimum(vector3 const &) // 0x100C2A18
{
    mangled_assert("?minimum@vector3@@QAEXABV1@@Z");
    todo("implement");
    _sub_100C2A18(this, arg);
}

_extern void _sub_100C29F8(vector3 *const, vector3 const &);
void vector3::maximum(vector3 const &) // 0x100C29F8
{
    mangled_assert("?maximum@vector3@@QAEXABV1@@Z");
    todo("implement");
    _sub_100C29F8(this, arg);
}

_extern void _sub_100C254B(vector3 *const, float, float);
void vector3::ClampMagnitude(float, float) // 0x100C254B
{
    mangled_assert("?ClampMagnitude@vector3@@QAEXMM@Z");
    todo("implement");
    _sub_100C254B(this, arg, arg);
}

_extern void _sub_100C25B5(vector3 *const, float);
void vector3::ClampMagnitudeMin(float) // 0x100C25B5
{
    mangled_assert("?ClampMagnitudeMin@vector3@@QAEXM@Z");
    todo("implement");
    _sub_100C25B5(this, arg);
}

_extern void _sub_100C2585(vector3 *const, float);
void vector3::ClampMagnitudeMax(float) // 0x100C2585
{
    mangled_assert("?ClampMagnitudeMax@vector3@@QAEXM@Z");
    todo("implement");
    _sub_100C2585(this, arg);
}

_extern void _sub_100C297C(vector3 *const, vector3 const &, vector3 const &, float);
void vector3::VectorsBlend(vector3 const &, vector3 const &, float) // 0x100C297C
{
    mangled_assert("?VectorsBlend@vector3@@QAEXABV1@0M@Z");
    todo("implement");
    _sub_100C297C(this, arg, arg, arg);
}

_extern void _sub_100C279C(vector3 *const, vector3 const &, vector3 const &, float);
void vector3::LineIntersectWithXYPlane(vector3 const &, vector3 const &, float) // 0x100C279C
{
    mangled_assert("?LineIntersectWithXYPlane@vector3@@QAEXABV1@0M@Z");
    todo("implement");
    _sub_100C279C(this, arg, arg, arg);
}

_extern void _sub_100C286E(vector3 *const, vector3 const &, vector3 const &, float);
void vector3::LineIntersectWithYZPlane(vector3 const &, vector3 const &, float) // 0x100C286E
{
    mangled_assert("?LineIntersectWithYZPlane@vector3@@QAEXABV1@0M@Z");
    todo("implement");
    _sub_100C286E(this, arg, arg, arg);
}

_extern void _sub_100C2805(vector3 *const, vector3 const &, vector3 const &, float);
void vector3::LineIntersectWithXZPlane(vector3 const &, vector3 const &, float) // 0x100C2805
{
    mangled_assert("?LineIntersectWithXZPlane@vector3@@QAEXABV1@0M@Z");
    todo("implement");
    _sub_100C2805(this, arg, arg, arg);
}

_extern void _sub_100C26A4(vector3 *const, vector3 &, vector3 &, vector3 &, vector3 &);
void vector3::LineIntersectWithPlane(vector3 &, vector3 &, vector3 &, vector3 &) // 0x100C26A4
{
    mangled_assert("?LineIntersectWithPlane@vector3@@QAEXAAV1@000@Z");
    todo("implement");
    _sub_100C26A4(this, arg, arg, arg, arg);
}

_extern char *_sub_100C2938(vector3 *const, char *);
char *vector3::PrintToBuffer(char *) // 0x100C2938
{
    mangled_assert("?PrintToBuffer@vector3@@QAEPADPAD@Z");
    todo("implement");
    char * __result = _sub_100C2938(this, arg);
    return __result;
}

/* ---------- private code */
#endif
