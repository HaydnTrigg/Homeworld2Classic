#if 0
/* ---------- headers */

#include "decomp.h"
#include <Collision\pch.h>
#include <boost\cstdint.hpp>
#include <Collision\BVH\proxy.h>
#include <Collision\Primitives\aabb.h>
#include <debug\db.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <Mathlib\matrix3.h>
#include <Mathlib\vector3.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern bool Collision::Intersect(Collision::Proxy const *a, Collision::Proxy const *b);
extern bool Collision::Intersect(Collision::Proxy const *a, Collision::Segment const &ray, unsigned __int32 collisionMask);
extern bool Collision::Intersect(Collision::Proxy const *a, Collision::Sphere const &sphere, unsigned __int32 collisionMask);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_664049(Collision::Proxy *const, Collision::AABB const &, void *);
Collision::Proxy::Proxy(Collision::AABB const &, void *) // 0x664049
{
    mangled_assert("??0Proxy@Collision@@IAE@ABVAABB@1@PAX@Z");
    todo("implement");
    _sub_664049(this, arg, arg);
}

_extern void _sub_66413B(Collision::Proxy *const, Collision::AABB const &);
void Collision::Proxy::Update(Collision::AABB const &) // 0x66413B
{
    mangled_assert("?Update@Proxy@Collision@@UAEXABVAABB@2@@Z");
    todo("implement");
    _sub_66413B(this, arg);
}

_extern bool _sub_66408A(Collision::Proxy const *, Collision::Proxy const *);
bool Collision::Intersect(Collision::Proxy const *a, Collision::Proxy const *b) // 0x66408A
{
    mangled_assert("?Intersect@Collision@@YG_NPBVProxy@1@0@Z");
    todo("implement");
    bool __result = _sub_66408A(a, b);
    return __result;
}

_extern bool _sub_6640F9(Collision::Proxy const *, Collision::Segment const &, unsigned __int32);
bool Collision::Intersect(Collision::Proxy const *a, Collision::Segment const &ray, unsigned __int32 collisionMask) // 0x6640F9
{
    mangled_assert("?Intersect@Collision@@YG_NPBVProxy@1@ABVSegment@1@I@Z");
    todo("implement");
    bool __result = _sub_6640F9(a, ray, collisionMask);
    return __result;
}

_extern bool _sub_66411A(Collision::Proxy const *, Collision::Sphere const &, unsigned __int32);
bool Collision::Intersect(Collision::Proxy const *a, Collision::Sphere const &sphere, unsigned __int32 collisionMask) // 0x66411A
{
    mangled_assert("?Intersect@Collision@@YG_NPBVProxy@1@ABVSphere@1@I@Z");
    todo("implement");
    bool __result = _sub_66411A(a, sphere, collisionMask);
    return __result;
}

/* ---------- private code */
#endif
