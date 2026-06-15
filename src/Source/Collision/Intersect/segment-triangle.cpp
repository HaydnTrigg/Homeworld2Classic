#if 0
/* ---------- headers */

#include "decomp.h"
#include <Collision\pch.h>
#include <Collision\distance.h>
#include <Collision\primitivesfwd.h>
#include <Collision\Primitives\segment.h>
#include <Mathlib\matrix3.h>
#include <Collision\Primitives\triangle.h>
#include <Mathlib\vector3.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern bool Collision::FindIntersection(Collision::Segment const &segment, Collision::Triangle const &triangle, vector3 &intersection, float *time);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

bool Collision::FindIntersection(Collision::Segment const &segment, Collision::Triangle const &triangle, vector3 &intersection, float *time) // 0x664651
{
    mangled_assert("?FindIntersection@Collision@@YG_NABVSegment@1@ABVTriangle@1@AAVvector3@@PAM@Z");
    todo("implement");
}

/* ---------- private code */
#endif
