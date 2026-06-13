#if 0
/* ---------- headers */

#include "decomp.h"
#include <Collision\pch.h>
#include <math.h>
#include <Collision\Primitives\segment.h>
#include <Mathlib\matrix3.h>
#include <Mathlib\vector3.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern float Collision::DistanceSqr(Collision::Segment const &A, Collision::Segment const &B, float *pSegA, float *pSegB);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern float _sub_664E68(Collision::Segment const &, Collision::Segment const &, float *, float *);
float Collision::DistanceSqr(Collision::Segment const &A, Collision::Segment const &B, float *pSegA, float *pSegB) // 0x664E68
{
    mangled_assert("?DistanceSqr@Collision@@YGMABVSegment@1@0PAM1@Z");
    todo("implement");
    float __result = _sub_664E68(A, B, pSegA, pSegB);
    return __result;
}

/* ---------- private code */
#endif
