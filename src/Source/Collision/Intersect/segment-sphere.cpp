#if 0
/* ---------- headers */

#include "decomp.h"
#include <Collision\pch.h>
#include <math.h>
#include <Collision\distance.h>
#include <Collision\primitivesfwd.h>
#include <debug\db.h>
#include <Collision\Primitives\segment.h>
#include <Mathlib\matrix3.h>
#include <Collision\Primitives\sphere.h>
#include <Mathlib\vector3.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern bool Collision::Intersect(Collision::Segment const &segment, Collision::Sphere const &sphere);
extern bool Collision::FindIntersection(Collision::Segment const &segment, Collision::Sphere const &sphere, __int32 &nbIntersection, vector3 *points);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern bool _sub_6631D3(Collision::Segment const &, Collision::Sphere const &);
bool Collision::Intersect(Collision::Segment const &segment, Collision::Sphere const &sphere) // 0x6631D3
{
    mangled_assert("?Intersect@Collision@@YG_NABVSegment@1@ABVSphere@1@@Z");
    todo("implement");
    bool __result = _sub_6631D3(segment, sphere);
    return __result;
}

_extern bool _sub_662F06(Collision::Segment const &, Collision::Sphere const &, __int32 &, vector3 *);
bool Collision::FindIntersection(Collision::Segment const &segment, Collision::Sphere const &sphere, __int32 &nbIntersection, vector3 *points) // 0x662F06
{
    mangled_assert("?FindIntersection@Collision@@YG_NABVSegment@1@ABVSphere@1@AAHQAVvector3@@@Z");
    todo("implement");
    bool __result = _sub_662F06(segment, sphere, nbIntersection, points);
    return __result;
}

/* ---------- private code */
#endif
