#if 0
/* ---------- headers */

#include "decomp.h"
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <Animation.h>
#include <Mathlib\matrix3.h>
#include <exception>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <RenderAnim\MarkerAnimation.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_516F4D(float, AnimVector3 const &, AnimVector3 const &, matrix4 &);
void MarkerAnimation::update(float currentTime, AnimVector3 const &transKeys, AnimVector3 const &rotKeys, matrix4 &output) // 0x516F4D
{
    mangled_assert("?update@MarkerAnimation@@SGXMABVAnimVector3@@0AAVmatrix4@@@Z");
    todo("implement");
    _sub_516F4D(currentTime, transKeys, rotKeys, output);
}

/* ---------- private code */
#endif
