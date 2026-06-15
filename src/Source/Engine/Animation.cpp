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

AnimatedAttribute::AnimatedAttribute() // 0x5DCDBD
{
    mangled_assert("??0AnimatedAttribute@@QAE@XZ");
    todo("implement");
}

void AnimatedAttribute::attachAttribute(float *) // 0x5DCDF1
{
    mangled_assert("?attachAttribute@AnimatedAttribute@@QAEXPAM@Z");
    todo("implement");
}

void AnimatedAttribute::attachCurve(AnimCurve *) // 0x5DCE2A
{
    mangled_assert("?attachCurve@AnimatedAttribute@@QAEXPAVAnimCurve@@@Z");
    todo("implement");
}

void AnimatedAttribute::evaluate(float) // 0x5DCE73
{
    mangled_assert("?evaluate@AnimatedAttribute@@QAEXM@Z");
    todo("implement");
}

AnimVector3::AnimVector3() // 0x5DCDB0
{
    mangled_assert("??0AnimVector3@@QAE@XZ");
    todo("implement");
}

AnimVector3::~AnimVector3() // 0x5DCDC7
{
    mangled_assert("??1AnimVector3@@QAE@XZ");
    todo("implement");
}

void AnimVector3::attachCurve(unsigned __int32, AnimCurve *) // 0x5DCDFA
{
    mangled_assert("?attachCurve@AnimVector3@@QAEXIPAVAnimCurve@@@Z");
    todo("implement");
}

AnimCurve *AnimVector3::getCurve(unsigned __int32) // 0x5DCE92
{
    mangled_assert("?getCurve@AnimVector3@@QAEPAVAnimCurve@@I@Z");
    todo("implement");
}

void AnimVector3::evaluate(float, vector3 &) const // 0x5DCE34
{
    mangled_assert("?evaluate@AnimVector3@@QBEXMAAVvector3@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
