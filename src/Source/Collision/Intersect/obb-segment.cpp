#if 0
/* ---------- headers */

#include "decomp.h"
#include <Collision\pch.h>
#include <math.h>
#include <Collision\Primitives\segment.h>
#include <debug\db.h>
#include <Collision\Primitives\obb.h>
#include <Mathlib\matrix3.h>
#include <Mathlib\vector3.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern bool Collision::Intersect(Collision::OBB const &obb, Collision::Segment const &segment);
extern bool Collision::FindIntersection(Collision::Segment const &segment, Collision::OBB const &obb, __int32 &nbIntersection, vector3 *points);
extern bool Collision::FindFirstIntersectionDistance(Collision::Segment const &segment, Collision::OBB const &obb, float &distance);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

bool Collision::Intersect(Collision::OBB const &obb, Collision::Segment const &segment) // 0x662B2C
{
    mangled_assert("?Intersect@Collision@@YG_NABVOBB@1@ABVSegment@1@@Z");
    todo("implement");
}

bool Collision::FindIntersection(Collision::Segment const &segment, Collision::OBB const &obb, __int32 &nbIntersection, vector3 *points) // 0x6628F0
{
    mangled_assert("?FindIntersection@Collision@@YG_NABVSegment@1@ABVOBB@1@AAHQAVvector3@@@Z");
    todo("implement");
}

bool Collision::FindFirstIntersectionDistance(Collision::Segment const &segment, Collision::OBB const &obb, float &distance) // 0x6625DC
{
    mangled_assert("?FindFirstIntersectionDistance@Collision@@YG_NABVSegment@1@ABVOBB@1@AAM@Z");
    todo("implement");
}

/* ---------- private code */
#endif
