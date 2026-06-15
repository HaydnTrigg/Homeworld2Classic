#if 0
/* ---------- headers */

#include "decomp.h"
#include <Collision\pch.h>
#include <Collision\Primitives\sphere.h>
#include <debug\db.h>
#include <Collision\Primitives\aabb.h>
#include <Mathlib\matrix3.h>
#include <Mathlib\vector3.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

Collision::Sphere::Sphere(vector3 const &, float) // 0x660942
{
    mangled_assert("??0Sphere@Collision@@QAE@ABVvector3@@M@Z");
    todo("implement");
}

void Collision::Sphere::ComputeAABB(Collision::AABB &) const // 0x66095F
{
    mangled_assert("?ComputeAABB@Sphere@Collision@@QBEXAAVAABB@2@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
