#if 0
/* ---------- headers */

#include "decomp.h"
#include <Collision\pch.h>
#include <math.h>
#include <exception>
#include <Collision\Primitives\obb.h>
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

_extern _sub_660AF1(Collision::OBB *const);
Collision::OBB::OBB() // 0x660AF1
{
    mangled_assert("??0OBB@Collision@@QAE@XZ");
    todo("implement");
    _sub_660AF1(this);
}

_extern _sub_6609ED(Collision::OBB *const, vector3 const &, vector3 const &);
Collision::OBB::OBB(vector3 const &, vector3 const &) // 0x6609ED
{
    mangled_assert("??0OBB@Collision@@QAE@ABVvector3@@0@Z");
    todo("implement");
    _sub_6609ED(this, arg, arg);
}

_extern void _sub_660B19(Collision::OBB const *const, Collision::AABB &);
void Collision::OBB::ComputeAABB(Collision::AABB &) const // 0x660B19
{
    mangled_assert("?ComputeAABB@OBB@Collision@@QBEXAAVAABB@2@@Z");
    todo("implement");
    _sub_660B19(this, arg);
}

_extern void _sub_660BEA(Collision::OBB const *const, vector3 *);
void Collision::OBB::ComputeVertices(vector3 *) const // 0x660BEA
{
    mangled_assert("?ComputeVertices@OBB@Collision@@QBEXQAVvector3@@@Z");
    todo("implement");
    _sub_660BEA(this, arg);
}

_extern void _sub_660ED7(Collision::OBB *const, vector3 const &, vector3 const &);
void Collision::OBB::Set(vector3 const &, vector3 const &) // 0x660ED7
{
    mangled_assert("?Set@OBB@Collision@@QAEXABVvector3@@0@Z");
    todo("implement");
    _sub_660ED7(this, arg, arg);
}

/* ---------- private code */
#endif
