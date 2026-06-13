#if 0
/* ---------- headers */

#include "decomp.h"
#include <util\types.h>
#include <Mathlib\pch.h>
#include <Mathlib\LinearInterp.h>
#include <xutility>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_6600AA(LinearInterp *const, float, float);
void LinearInterp::SetTarget(float, float) // 0x6600AA
{
    mangled_assert("?SetTarget@LinearInterp@@QAEXMM@Z");
    todo("implement");
    _sub_6600AA(this, arg, arg);
}

_extern void _sub_6600E7(LinearInterp *const, float);
void LinearInterp::Update(float) // 0x6600E7
{
    mangled_assert("?Update@LinearInterp@@QAEXM@Z");
    todo("implement");
    _sub_6600E7(this, arg);
}

/* ---------- private code */
#endif
