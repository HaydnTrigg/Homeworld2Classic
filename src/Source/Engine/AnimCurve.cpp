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

AnimCurve::AnimCurve() // 0x5DD0B0
{
    mangled_assert("??0AnimCurve@@QAE@XZ");
    todo("implement");
}

AnimCurve::~AnimCurve() // 0x5DD103
{
    mangled_assert("??1AnimCurve@@QAE@XZ");
    todo("implement");
}

void AnimCurve::addKey(float, float, float, float, float, float) // 0x5DD2AC
{
    mangled_assert("?addKey@AnimCurve@@QAEXMMMMMM@Z");
    todo("implement");
}

float AnimCurve::getKeyTime(unsigned __int32) // 0x5DE5DF
{
    mangled_assert("?getKeyTime@AnimCurve@@QAEMI@Z");
    todo("implement");
}

float AnimCurve::getKeyValue(unsigned __int32) // 0x5DE5EF
{
    mangled_assert("?getKeyValue@AnimCurve@@QAEMI@Z");
    todo("implement");
}

void AnimCurve::adjustLastKey(float) // 0x5DD351
{
    mangled_assert("?adjustLastKey@AnimCurve@@QAEXM@Z");
    todo("implement");
}

void AnimCurve::setPreInfinity(EtInfinityType) // 0x5DEFAD
{
    mangled_assert("?setPreInfinity@AnimCurve@@QAEXW4EtInfinityType@@@Z");
    todo("implement");
}

void AnimCurve::setPostInfinity(EtInfinityType) // 0x5DEFA3
{
    mangled_assert("?setPostInfinity@AnimCurve@@QAEXW4EtInfinityType@@@Z");
    todo("implement");
}

void AnimCurve::visualize(float, float, float, float, float, float, float, float, unsigned __int32, float, vector4 const &) // 0x5DEFC4
{
    mangled_assert("?visualize@AnimCurve@@QAEXMMMMMMMMIMABVvector4@@@Z");
    todo("implement");
}

bool AnimCurve::find(float, __int32 *) // 0x5DE57F
{
    mangled_assert("?find@AnimCurve@@AAE_NMPAH@Z");
    todo("implement");
}

void AnimCurve::bezierCreate(float *, float *) // 0x5DD952
{
    mangled_assert("?bezierCreate@AnimCurve@@AAEXQAM0@Z");
    todo("implement");
}

float AnimCurve::bezierEvaluate(float) // 0x5DDC12
{
    mangled_assert("?bezierEvaluate@AnimCurve@@AAEMM@Z");
    todo("implement");
}

void AnimCurve::hermiteCreate(float *, float *) // 0x5DE600
{
    mangled_assert("?hermiteCreate@AnimCurve@@AAEXQAM0@Z");
    todo("implement");
}

float AnimCurve::hermiteEvaluate(float) // 0x5DE6D6
{
    mangled_assert("?hermiteEvaluate@AnimCurve@@AAEMM@Z");
    todo("implement");
}

float AnimCurve::evaluateInfinities(float, bool) // 0x5DE27D
{
    mangled_assert("?evaluateInfinities@AnimCurve@@AAEMM_N@Z");
    todo("implement");
}

void AnimCurve::startEvaluation() // 0x5DEFB7
{
    mangled_assert("?startEvaluation@AnimCurve@@QAEXXZ");
    todo("implement");
}

float AnimCurve::evaluate(float) // 0x5DDF84
{
    mangled_assert("?evaluate@AnimCurve@@QAEMM@Z");
    todo("implement");
}

CurveChannel AnimCurve::mapNameToChannel(char const *name) // 0x5DE776
{
    mangled_assert("?mapNameToChannel@AnimCurve@@SG?AW4CurveChannel@@PBD@Z");
    todo("implement");
}

CurveChannel AnimCurve::setChannelByName(char const *) // 0x5DEF91
{
    mangled_assert("?setChannelByName@AnimCurve@@QAE?AW4CurveChannel@@PBD@Z");
    todo("implement");
}

/* ---------- private code */

_static bool isInRange(float x, float y, float left, float right, float bottom, float top) // 0x5DE73F
{
    mangled_assert("isInRange");
    todo("implement");
}

_static __int32 dbl_gt(float *a, float *b) // 0x5DDF2D
{
    mangled_assert("dbl_gt");
    todo("implement");
}

_static void dbl_mult(float *a, float *b, float *atimesb) // 0x5DDF44
{
    mangled_assert("dbl_mult");
    todo("implement");
}

_static void dbl_add(float *a, float *b, float *aplusb) // 0x5DDF12
{
    mangled_assert("dbl_add");
    todo("implement");
}

_static void init_tolerance() // 0x5DE70F
{
    mangled_assert("init_tolerance");
    todo("implement");
}

_static void constrainInsideBounds(float *x1, float *x2) // 0x5DDDFF
{
    mangled_assert("constrainInsideBounds");
    todo("implement");
}

_static void checkMonotonic(float *x1, float *x2) // 0x5DDD5B
{
    mangled_assert("checkMonotonic");
    todo("implement");
}

_static void bezierToPower(float a1, float b1, float c1, float d1, float *a2, float *b2, float *c2, float *d2) // 0x5DDCE5
{
    mangled_assert("bezierToPower");
    todo("implement");
}

_static float ag_horner1(float *P, __int32 deg, float s) // 0x5DD377
{
    mangled_assert("ag_horner1");
    todo("implement");
}

_static float ag_zeroin2(float a, float b, float fa, float fb, float tol, ag_polynomial *pars) // 0x5DD3A6
{
    mangled_assert("ag_zeroin2");
    todo("implement");
}

_static float ag_zeroin(float a, float b, float tol, ag_polynomial *pars) // 0x5DD84D
{
    mangled_assert("ag_zeroin");
    todo("implement");
}

_static __int32 polyZeroes(float *Poly, __int32 deg, float a, __int32 a_closed, float b, __int32 b_closed, float *Roots) // 0x5DE7FB
{
    mangled_assert("polyZeroes");
    todo("implement");
}
#endif
