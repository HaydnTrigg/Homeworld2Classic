#if 0
/* ---------- headers */

#include "decomp.h"
#include <Collision\pch.h>
#include <Collision\Primitives\aabb.h>
#include <debug\db.h>
#include <Collision\Primitives\sphere.h>
#include <Mathlib\matrix3.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern bool Collision::Intersect(Collision::AABB const &aabb, Collision::Sphere const &sphere);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern bool _sub_665883(Collision::AABB const &, Collision::Sphere const &);
bool Collision::Intersect(Collision::AABB const &aabb, Collision::Sphere const &sphere) // 0x665883
{
    mangled_assert("?Intersect@Collision@@YG_NABVAABB@1@ABVSphere@1@@Z");
    todo("implement");
    bool __result = _sub_665883(aabb, sphere);
    return __result;
}

/* ---------- private code */
#endif
