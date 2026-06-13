#if 0
/* ---------- headers */

#include "decomp.h"
#include <pch.h>
#include <vector>
#include <AnimCurve.h>
#include <Mathlib\vector3.h>
#include <Animation.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_5DCDBD(AnimatedAttribute *const);
AnimatedAttribute::AnimatedAttribute() // 0x5DCDBD
{
    mangled_assert("??0AnimatedAttribute@@QAE@XZ");
    todo("implement");
    _sub_5DCDBD(this);
}

_extern void _sub_5DCDF1(AnimatedAttribute *const, float *);
void AnimatedAttribute::attachAttribute(float *) // 0x5DCDF1
{
    mangled_assert("?attachAttribute@AnimatedAttribute@@QAEXPAM@Z");
    todo("implement");
    _sub_5DCDF1(this, arg);
}

_extern void _sub_5DCE2A(AnimatedAttribute *const, AnimCurve *);
void AnimatedAttribute::attachCurve(AnimCurve *) // 0x5DCE2A
{
    mangled_assert("?attachCurve@AnimatedAttribute@@QAEXPAVAnimCurve@@@Z");
    todo("implement");
    _sub_5DCE2A(this, arg);
}

_extern void _sub_5DCE73(AnimatedAttribute *const, float);
void AnimatedAttribute::evaluate(float) // 0x5DCE73
{
    mangled_assert("?evaluate@AnimatedAttribute@@QAEXM@Z");
    todo("implement");
    _sub_5DCE73(this, arg);
}

_extern _sub_5DCDB0(AnimVector3 *const);
AnimVector3::AnimVector3() // 0x5DCDB0
{
    mangled_assert("??0AnimVector3@@QAE@XZ");
    todo("implement");
    _sub_5DCDB0(this);
}

_extern void _sub_5DCDC7(AnimVector3 *const);
AnimVector3::~AnimVector3() // 0x5DCDC7
{
    mangled_assert("??1AnimVector3@@QAE@XZ");
    todo("implement");
    _sub_5DCDC7(this);
}

_extern void _sub_5DCDFA(AnimVector3 *const, unsigned __int32, AnimCurve *);
void AnimVector3::attachCurve(unsigned __int32, AnimCurve *) // 0x5DCDFA
{
    mangled_assert("?attachCurve@AnimVector3@@QAEXIPAVAnimCurve@@@Z");
    todo("implement");
    _sub_5DCDFA(this, arg, arg);
}

_extern AnimCurve *_sub_5DCE92(AnimVector3 *const, unsigned __int32);
AnimCurve *AnimVector3::getCurve(unsigned __int32) // 0x5DCE92
{
    mangled_assert("?getCurve@AnimVector3@@QAEPAVAnimCurve@@I@Z");
    todo("implement");
    AnimCurve * __result = _sub_5DCE92(this, arg);
    return __result;
}

_extern void _sub_5DCE34(AnimVector3 const *const, float, vector3 &);
void AnimVector3::evaluate(float, vector3 &) const // 0x5DCE34
{
    mangled_assert("?evaluate@AnimVector3@@QBEXMAAVvector3@@@Z");
    todo("implement");
    _sub_5DCE34(this, arg, arg);
}

/* ---------- private code */
#endif
