#if 0
/* ---------- headers */

#include "decomp.h"
#include <Collision\pch.h>
#include <math.h>
#include <Collision\Primitives\aabb.h>
#include <debug\db.h>
#include <Collision\Primitives\segment.h>
#include <Mathlib\matrix3.h>
#include <Mathlib\vector3.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern bool Collision::Intersect(Collision::AABB const &aabb, Collision::Segment const &segment);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern bool _sub_6655CE(Collision::AABB const &, Collision::Segment const &);
bool Collision::Intersect(Collision::AABB const &aabb, Collision::Segment const &segment) // 0x6655CE
{
    mangled_assert("?Intersect@Collision@@YG_NABVAABB@1@ABVSegment@1@@Z");
    todo("implement");
    bool __result = _sub_6655CE(aabb, segment);
    return __result;
}

/* ---------- private code */
#endif
