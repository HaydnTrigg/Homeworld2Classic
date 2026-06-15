#if 0
/* ---------- headers */

#include "decomp.h"
#include <Collision\pch.h>
#include <Collision\Primitives\segment.h>
#include <debug\db.h>
#include <Collision\Primitives\aabb.h>
#include <xutility>
#include <Mathlib\matrix3.h>
#include <Mathlib\vector3.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

Collision::Segment::Segment(vector3 const &, vector3 const &) // 0x6610D8
{
    mangled_assert("??0Segment@Collision@@QAE@ABVvector3@@0@Z");
    todo("implement");
}

void Collision::Segment::ComputeAABB(Collision::AABB &) const // 0x6610F4
{
    mangled_assert("?ComputeAABB@Segment@Collision@@QBEXAAVAABB@2@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
