#if 0
/* ---------- headers */

#include "decomp.h"
#include <Collision\pch.h>
#include <Collision\Primitives\segment.h>
#include <Mathlib\matrix3.h>
#include <Mathlib\vector3.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern float Collision::DistanceSqr(vector3 const &P, Collision::Segment const &segment, float *where);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern float _sub_6648A9(vector3 const &, Collision::Segment const &, float *);
float Collision::DistanceSqr(vector3 const &P, Collision::Segment const &segment, float *where) // 0x6648A9
{
    mangled_assert("?DistanceSqr@Collision@@YGMABVvector3@@ABVSegment@1@PAM@Z");
    todo("implement");
    float __result = _sub_6648A9(P, segment, where);
    return __result;
}

/* ---------- private code */
#endif
