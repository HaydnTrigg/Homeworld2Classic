#if 0
/* ---------- headers */

#include "decomp.h"
#include <Collision\pch.h>
#include <math.h>
#include <Collision\Primitives\obb.h>
#include <debug\db.h>
#include <Collision\Primitives\sphere.h>
#include <Mathlib\matrix3.h>
#include <Mathlib\vector3.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern bool Collision::Intersect(Collision::OBB const &obb, Collision::Sphere const &sphere);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern bool _sub_6631FF(Collision::OBB const &, Collision::Sphere const &);
bool Collision::Intersect(Collision::OBB const &obb, Collision::Sphere const &sphere) // 0x6631FF
{
    mangled_assert("?Intersect@Collision@@YG_NABVOBB@1@ABVSphere@1@@Z");
    todo("implement");
    bool __result = _sub_6631FF(obb, sphere);
    return __result;
}

/* ---------- private code */
#endif
