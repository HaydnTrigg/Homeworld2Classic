#if 0
/* ---------- headers */

#include "decomp.h"
#include <Collision\pch.h>
#include <Collision\Primitives\aabb.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <debug\db.h>
#include <Collision\Primitives\sphere.h>
#include <utility>
#include <Mathlib\matrix3.h>
#include <Mathlib\vector3.h>
#include <type_traits>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_6611BF(Collision::Capsule *const, Collision::Segment const &, float);
Collision::Capsule::Capsule(Collision::Segment const &, float) // 0x6611BF
{
    mangled_assert("??0Capsule@Collision@@QAE@ABVSegment@1@M@Z");
    todo("implement");
    _sub_6611BF(this, arg, arg);
}

_extern _sub_6611DE(Collision::Capsule *const, Collision::Sphere const &, vector3 const &);
Collision::Capsule::Capsule(Collision::Sphere const &, vector3 const &) // 0x6611DE
{
    mangled_assert("??0Capsule@Collision@@QAE@ABVSphere@1@ABVvector3@@@Z");
    todo("implement");
    _sub_6611DE(this, arg, arg);
}

_extern void _sub_6611FD(Collision::Capsule const *const, Collision::AABB &);
void Collision::Capsule::ComputeAABB(Collision::AABB &) const // 0x6611FD
{
    mangled_assert("?ComputeAABB@Capsule@Collision@@QBEXAAVAABB@2@@Z");
    todo("implement");
    _sub_6611FD(this, arg);
}

/* ---------- private code */
#endif
