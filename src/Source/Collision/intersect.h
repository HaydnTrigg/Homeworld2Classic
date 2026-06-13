#if 0
#ifndef __INTERSECT_H__
#define __INTERSECT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern _inline bool Collision::Intersect(Collision::Sphere const &sphere, Collision::OBB const &obb);

/* ---------- globals */

/* ---------- public code */

_extern bool _sub_4A8894(Collision::Sphere const &, Collision::OBB const &);
_inline bool Collision::Intersect(Collision::Sphere const &sphere, Collision::OBB const &obb) // 0x4A8894
{
    mangled_assert("?Intersect@Collision@@YG_NABVSphere@1@ABVOBB@1@@Z");
    todo("implement");
    bool __result = _sub_4A8894(sphere, obb);
    return __result;
}

/* ---------- private code */

#endif // __INTERSECT_H__
#endif
