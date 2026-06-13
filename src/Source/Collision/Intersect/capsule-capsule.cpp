#if 0
/* ---------- headers */

#include "decomp.h"
#include <Collision\pch.h>
#include <Collision\distance.h>
#include <Collision\primitivesfwd.h>
#include <debug\db.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Mathlib\matrix3.h>
#include <Collision\Primitives\sphere.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern bool Collision::Intersect(Collision::Capsule const &A, Collision::Capsule const &B);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern bool _sub_663575(Collision::Capsule const &, Collision::Capsule const &);
bool Collision::Intersect(Collision::Capsule const &A, Collision::Capsule const &B) // 0x663575
{
    mangled_assert("?Intersect@Collision@@YG_NABVCapsule@1@0@Z");
    todo("implement");
    bool __result = _sub_663575(A, B);
    return __result;
}

/* ---------- private code */
#endif
