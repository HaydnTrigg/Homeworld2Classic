#if 0
/* ---------- headers */

#include "decomp.h"
#include <pch.h>
#include <xutility>
#include <math.h>
#include <Mathlib\vector2.h>
#include <prim.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void primRectIntersect(PrimRectangle const &r0, PrimRectangle const &r1, PrimRectangle &result);
extern void primRectUnion(PrimRectangle const &r0, PrimRectangle const &r1, PrimRectangle &result);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

void PrimRectangle::include(float, float) // 0x6205DA
{
    mangled_assert("?include@PrimRectangle@@QAEXMM@Z");
    todo("implement");
}

void primRectIntersect(PrimRectangle const &r0, PrimRectangle const &r1, PrimRectangle &result) // 0x620663
{
    mangled_assert("?primRectIntersect@@YGXABUPrimRectangle@@0AAU1@@Z");
    todo("implement");
}

void primRectUnion(PrimRectangle const &r0, PrimRectangle const &r1, PrimRectangle &result) // 0x6207A1
{
    mangled_assert("?primRectUnion@@YGXABUPrimRectangle@@0AAU1@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
