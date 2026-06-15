#if 0
/* ---------- headers */

#include "decomp.h"
#include <Collision\pch.h>
#include <Collision\Primitives\triangle.h>
#include <debug\db.h>
#include <Collision\Primitives\sphere.h>
#include <Mathlib\matrix3.h>
#include <Collision\distance.h>
#include <Collision\primitivesfwd.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern bool Collision::Intersect(Collision::Triangle const &tri, Collision::Sphere const &sphere);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

bool Collision::Intersect(Collision::Triangle const &tri, Collision::Sphere const &sphere) // 0x6633A4
{
    mangled_assert("?Intersect@Collision@@YG_NABVTriangle@1@ABVSphere@1@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
