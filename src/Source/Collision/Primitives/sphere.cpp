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

_extern _sub_660942(Collision::Sphere *const, vector3 const &, float);
Collision::Sphere::Sphere(vector3 const &, float) // 0x660942
{
    mangled_assert("??0Sphere@Collision@@QAE@ABVvector3@@M@Z");
    todo("implement");
    _sub_660942(this, arg, arg);
}

_extern void _sub_66095F(Collision::Sphere const *const, Collision::AABB &);
void Collision::Sphere::ComputeAABB(Collision::AABB &) const // 0x66095F
{
    mangled_assert("?ComputeAABB@Sphere@Collision@@QBEXAAVAABB@2@@Z");
    todo("implement");
    _sub_66095F(this, arg);
}

/* ---------- private code */
#endif
