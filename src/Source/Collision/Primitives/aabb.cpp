#if 0
/* ---------- headers */

#include "decomp.h"
#include <Collision\pch.h>
#include <Collision\Primitives\aabb.h>
#include <debug\db.h>
#include <xutility>
#include <Mathlib\matrix3.h>
#include <Mathlib\vector3.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern Collision::AABB Collision::AABB::EMPTY; // 0x83DAEC

/* ---------- private variables */

/* ---------- public code */

_extern _sub_661032(Collision::AABB *const);
Collision::AABB::AABB() // 0x661032
{
    mangled_assert("??0AABB@Collision@@QAE@XZ");
    todo("implement");
    _sub_661032(this);
}

_extern _sub_661016(Collision::AABB *const, vector3 const &, vector3 const &);
Collision::AABB::AABB(vector3 const &, vector3 const &) // 0x661016
{
    mangled_assert("??0AABB@Collision@@QAE@ABVvector3@@0@Z");
    todo("implement");
    _sub_661016(this, arg, arg);
}

_extern _sub_660FE8(Collision::AABB *const, Collision::AABB::EnumEmpty);
Collision::AABB::AABB(Collision::AABB::EnumEmpty) // 0x660FE8
{
    mangled_assert("??0AABB@Collision@@AAE@W4EnumEmpty@01@@Z");
    todo("implement");
    _sub_660FE8(this, arg);
}

_extern void _sub_66104D(Collision::AABB *const, Collision::AABB const &);
void Collision::AABB::Add(Collision::AABB const &) // 0x66104D
{
    mangled_assert("?Add@AABB@Collision@@QAEXABV12@@Z");
    todo("implement");
    _sub_66104D(this, arg);
}

/* ---------- private code */
#endif
