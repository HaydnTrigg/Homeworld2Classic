#if 0
/* ---------- headers */

#include "decomp.h"
#include <Collision\pch.h>
#include <Collision\Primitives\triangle.h>
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

Collision::Triangle::Triangle(vector3 const &, vector3 const &, vector3 const &) // 0x6633D8
{
    mangled_assert("??0Triangle@Collision@@QAE@ABVvector3@@00@Z");
    todo("implement");
}

void Collision::Triangle::ComputeAABB(Collision::AABB &) const // 0x6633FE
{
    mangled_assert("?ComputeAABB@Triangle@Collision@@QBEXAAVAABB@2@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
