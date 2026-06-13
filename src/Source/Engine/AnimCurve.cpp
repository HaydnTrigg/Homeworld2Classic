#if 0
/* ---------- headers */

#include "decomp.h"
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <pch.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <Mathlib\matrix3.h>
#include <boost\checked_delete.hpp>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <vector>
#include <xmemory>
#include <math.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathutil.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <boost\scoped_array.hpp>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <platform\osdef.h>
#include <renderer.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <util\colour.h>
#include <Render\gl\lotypes.h>
#include <Render\gl\r_types.h>
#include <AnimCurve.h>

/* ---------- constants */

/* ---------- definitions */

struct ag_polynomial
{
    float *p; // 0x0
    __int32 deg; // 0x4
};
static_assert(sizeof(ag_polynomial) == 8, "Invalid ag_polynomial size");

struct AnimCurve::mapNameToChannel::__l2::<unnamed-type-channelTable>
{
    char *name; // 0x0
    CurveChannel channel; // 0x4
};
static_assert(sizeof(AnimCurve::mapNameToChannel::__l2::<unnamed-type-channelTable>) == 8, "Invalid AnimCurve::mapNameToChannel::__l2::<unnamed-type-channelTable> size");

typedef ag_polynomial AG_POLYNOMIAL;

/* ---------- prototypes */


_static bool isInRange(float x, float y, float left, float right, float bottom, float top);
_static __int32 dbl_gt(float *a, float *b);
_static void dbl_mult(float *a, float *b, float *atimesb);
_static void dbl_add(float *a, float *b, float *aplusb);
_static void init_tolerance();
_static void constrainInsideBounds(float *x1, float *x2);
_static void checkMonotonic(float *x1, float *x2);
_static void bezierToPower(float a1, float b1, float c1, float d1, float *a2, float *b2, float *c2, float *d2);
_static float ag_horner1(float *P, __int32 deg, float s);
_static float ag_zeroin2(float a, float b, float fa, float fb, float tol, ag_polynomial *pars);
_static float ag_zeroin(float a, float b, float tol, ag_polynomial *pars);
_static __int32 polyZeroes(float *Poly, __int32 deg, float a, __int32 a_closed, float b, __int32 b_closed, float *Roots);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern float const kFourThirds; // 0x7A81B4
    extern float const kTwoThirds; // 0x7A81B8
    extern float const kOneThird; // 0x7A81BC
    extern float const kMaxTan; // 0x7A81C0
    extern float sMachineTolerance; // 0x8486C8
}

/* ---------- public code */

_extern _sub_5DD0B0(AnimCurve *const);
AnimCurve::AnimCurve() // 0x5DD0B0
{
    mangled_assert("??0AnimCurve@@QAE@XZ");
    todo("implement");
    _sub_5DD0B0(this);
}

_extern void _sub_5DD103(AnimCurve *const);
AnimCurve::~AnimCurve() // 0x5DD103
{
    mangled_assert("??1AnimCurve@@QAE@XZ");
    todo("implement");
    _sub_5DD103(this);
}

_extern void _sub_5DD2AC(AnimCurve *const, float, float, float, float, float, float);
void AnimCurve::addKey(float, float, float, float, float, float) // 0x5DD2AC
{
    mangled_assert("?addKey@AnimCurve@@QAEXMMMMMM@Z");
    todo("implement");
    _sub_5DD2AC(this, arg, arg, arg, arg, arg, arg);
}

_extern float _sub_5DE5DF(AnimCurve *const, unsigned __int32);
float AnimCurve::getKeyTime(unsigned __int32) // 0x5DE5DF
{
    mangled_assert("?getKeyTime@AnimCurve@@QAEMI@Z");
    todo("implement");
    float __result = _sub_5DE5DF(this, arg);
    return __result;
}

_extern float _sub_5DE5EF(AnimCurve *const, unsigned __int32);
float AnimCurve::getKeyValue(unsigned __int32) // 0x5DE5EF
{
    mangled_assert("?getKeyValue@AnimCurve@@QAEMI@Z");
    todo("implement");
    float __result = _sub_5DE5EF(this, arg);
    return __result;
}

_extern void _sub_5DD351(AnimCurve *const, float);
void AnimCurve::adjustLastKey(float) // 0x5DD351
{
    mangled_assert("?adjustLastKey@AnimCurve@@QAEXM@Z");
    todo("implement");
    _sub_5DD351(this, arg);
}

_extern void _sub_5DEFAD(AnimCurve *const, EtInfinityType);
void AnimCurve::setPreInfinity(EtInfinityType) // 0x5DEFAD
{
    mangled_assert("?setPreInfinity@AnimCurve@@QAEXW4EtInfinityType@@@Z");
    todo("implement");
    _sub_5DEFAD(this, arg);
}

_extern void _sub_5DEFA3(AnimCurve *const, EtInfinityType);
void AnimCurve::setPostInfinity(EtInfinityType) // 0x5DEFA3
{
    mangled_assert("?setPostInfinity@AnimCurve@@QAEXW4EtInfinityType@@@Z");
    todo("implement");
    _sub_5DEFA3(this, arg);
}

_extern void _sub_5DEFC4(AnimCurve *const, float, float, float, float, float, float, float, float, unsigned __int32, float, vector4 const &);
void AnimCurve::visualize(float, float, float, float, float, float, float, float, unsigned __int32, float, vector4 const &) // 0x5DEFC4
{
    mangled_assert("?visualize@AnimCurve@@QAEXMMMMMMMMIMABVvector4@@@Z");
    todo("implement");
    _sub_5DEFC4(this, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg);
}

_extern bool _sub_5DE57F(AnimCurve *const, float, __int32 *);
bool AnimCurve::find(float, __int32 *) // 0x5DE57F
{
    mangled_assert("?find@AnimCurve@@AAE_NMPAH@Z");
    todo("implement");
    bool __result = _sub_5DE57F(this, arg, arg);
    return __result;
}

_extern void _sub_5DD952(AnimCurve *const, float *, float *);
void AnimCurve::bezierCreate(float *, float *) // 0x5DD952
{
    mangled_assert("?bezierCreate@AnimCurve@@AAEXQAM0@Z");
    todo("implement");
    _sub_5DD952(this, arg, arg);
}

_extern float _sub_5DDC12(AnimCurve *const, float);
float AnimCurve::bezierEvaluate(float) // 0x5DDC12
{
    mangled_assert("?bezierEvaluate@AnimCurve@@AAEMM@Z");
    todo("implement");
    float __result = _sub_5DDC12(this, arg);
    return __result;
}

_extern void _sub_5DE600(AnimCurve *const, float *, float *);
void AnimCurve::hermiteCreate(float *, float *) // 0x5DE600
{
    mangled_assert("?hermiteCreate@AnimCurve@@AAEXQAM0@Z");
    todo("implement");
    _sub_5DE600(this, arg, arg);
}

_extern float _sub_5DE6D6(AnimCurve *const, float);
float AnimCurve::hermiteEvaluate(float) // 0x5DE6D6
{
    mangled_assert("?hermiteEvaluate@AnimCurve@@AAEMM@Z");
    todo("implement");
    float __result = _sub_5DE6D6(this, arg);
    return __result;
}

_extern float _sub_5DE27D(AnimCurve *const, float, bool);
float AnimCurve::evaluateInfinities(float, bool) // 0x5DE27D
{
    mangled_assert("?evaluateInfinities@AnimCurve@@AAEMM_N@Z");
    todo("implement");
    float __result = _sub_5DE27D(this, arg, arg);
    return __result;
}

_extern void _sub_5DEFB7(AnimCurve *const);
void AnimCurve::startEvaluation() // 0x5DEFB7
{
    mangled_assert("?startEvaluation@AnimCurve@@QAEXXZ");
    todo("implement");
    _sub_5DEFB7(this);
}

_extern float _sub_5DDF84(AnimCurve *const, float);
float AnimCurve::evaluate(float) // 0x5DDF84
{
    mangled_assert("?evaluate@AnimCurve@@QAEMM@Z");
    todo("implement");
    float __result = _sub_5DDF84(this, arg);
    return __result;
}

_extern CurveChannel _sub_5DE776(char const *);
CurveChannel AnimCurve::mapNameToChannel(char const *name) // 0x5DE776
{
    mangled_assert("?mapNameToChannel@AnimCurve@@SG?AW4CurveChannel@@PBD@Z");
    todo("implement");
    CurveChannel __result = _sub_5DE776(name);
    return __result;
}

_extern CurveChannel _sub_5DEF91(AnimCurve *const, char const *);
CurveChannel AnimCurve::setChannelByName(char const *) // 0x5DEF91
{
    mangled_assert("?setChannelByName@AnimCurve@@QAE?AW4CurveChannel@@PBD@Z");
    todo("implement");
    CurveChannel __result = _sub_5DEF91(this, arg);
    return __result;
}

/* ---------- private code */

_extern bool _sub_5DE73F(float, float, float, float, float, float);
_static bool isInRange(float x, float y, float left, float right, float bottom, float top) // 0x5DE73F
{
    mangled_assert("isInRange");
    todo("implement");
    bool __result = _sub_5DE73F(x, y, left, right, bottom, top);
    return __result;
}

_extern __int32 _sub_5DDF2D(float *, float *);
_static __int32 dbl_gt(float *a, float *b) // 0x5DDF2D
{
    mangled_assert("dbl_gt");
    todo("implement");
    __int32 __result = _sub_5DDF2D(a, b);
    return __result;
}

_extern void _sub_5DDF44(float *, float *, float *);
_static void dbl_mult(float *a, float *b, float *atimesb) // 0x5DDF44
{
    mangled_assert("dbl_mult");
    todo("implement");
    _sub_5DDF44(a, b, atimesb);
}

_extern void _sub_5DDF12(float *, float *, float *);
_static void dbl_add(float *a, float *b, float *aplusb) // 0x5DDF12
{
    mangled_assert("dbl_add");
    todo("implement");
    _sub_5DDF12(a, b, aplusb);
}

_extern void _sub_5DE70F();
_static void init_tolerance() // 0x5DE70F
{
    mangled_assert("init_tolerance");
    todo("implement");
    _sub_5DE70F();
}

_extern void _sub_5DDDFF(float *, float *);
_static void constrainInsideBounds(float *x1, float *x2) // 0x5DDDFF
{
    mangled_assert("constrainInsideBounds");
    todo("implement");
    _sub_5DDDFF(x1, x2);
}

_extern void _sub_5DDD5B(float *, float *);
_static void checkMonotonic(float *x1, float *x2) // 0x5DDD5B
{
    mangled_assert("checkMonotonic");
    todo("implement");
    _sub_5DDD5B(x1, x2);
}

_extern void _sub_5DDCE5(float, float, float, float, float *, float *, float *, float *);
_static void bezierToPower(float a1, float b1, float c1, float d1, float *a2, float *b2, float *c2, float *d2) // 0x5DDCE5
{
    mangled_assert("bezierToPower");
    todo("implement");
    _sub_5DDCE5(a1, b1, c1, d1, a2, b2, c2, d2);
}

_extern float _sub_5DD377(float *, __int32, float);
_static float ag_horner1(float *P, __int32 deg, float s) // 0x5DD377
{
    mangled_assert("ag_horner1");
    todo("implement");
    float __result = _sub_5DD377(P, deg, s);
    return __result;
}

_extern float _sub_5DD3A6(float, float, float, float, float, ag_polynomial *);
_static float ag_zeroin2(float a, float b, float fa, float fb, float tol, ag_polynomial *pars) // 0x5DD3A6
{
    mangled_assert("ag_zeroin2");
    todo("implement");
    float __result = _sub_5DD3A6(a, b, fa, fb, tol, pars);
    return __result;
}

_extern float _sub_5DD84D(float, float, float, ag_polynomial *);
_static float ag_zeroin(float a, float b, float tol, ag_polynomial *pars) // 0x5DD84D
{
    mangled_assert("ag_zeroin");
    todo("implement");
    float __result = _sub_5DD84D(a, b, tol, pars);
    return __result;
}

_extern __int32 _sub_5DE7FB(float *, __int32, float, __int32, float, __int32, float *);
_static __int32 polyZeroes(float *Poly, __int32 deg, float a, __int32 a_closed, float b, __int32 b_closed, float *Roots) // 0x5DE7FB
{
    mangled_assert("polyZeroes");
    todo("implement");
    __int32 __result = _sub_5DE7FB(Poly, deg, a, a_closed, b, b_closed, Roots);
    return __result;
}
#endif
