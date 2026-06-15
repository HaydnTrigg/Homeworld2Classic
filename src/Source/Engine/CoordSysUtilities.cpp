#if 0
/* ---------- headers */

#include "decomp.h"
#include <sob.h>
#include <xstring>
#include <sobstatic.h>
#include <xmemory0>
#include <pch.h>
#include <Collision\Primitives\sphere.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <math.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <Mathlib\vector3.h>
#include <Interpolation.h>
#include <boost\scoped_ptr.hpp>
#include <Collision\Primitives\aabb.h>
#include <sobid.h>
#include <Mathlib\vector2.h>
#include <boost\cstdint.hpp>
#include <Mathlib\quat.h>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <seInterface2\SoundParams.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <debug\db.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <CoordSysUtilities.h>
#include <wchar.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void physCreateCoordSysFromHeading(matrix3 &result, vector3 const &head);
extern void physCreateCoordSysFromHeadingAndLeft(matrix3 &result, vector3 const &heading, vector3 const &left);
extern void physCreateCoordSysFromHeadingAndUp(matrix3 &result, vector3 const &heading, vector3 const &up);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

void physCreateCoordSysFromHeading(matrix3 &result, vector3 const &head) // 0x5E9F67
{
    mangled_assert("?physCreateCoordSysFromHeading@@YGXAAVmatrix3@@ABVvector3@@@Z");
    todo("implement");
}

void physCreateCoordSysFromHeadingAndLeft(matrix3 &result, vector3 const &heading, vector3 const &left) // 0x5EA0A6
{
    mangled_assert("?physCreateCoordSysFromHeadingAndLeft@@YGXAAVmatrix3@@ABVvector3@@1@Z");
    todo("implement");
}

void physCreateCoordSysFromHeadingAndUp(matrix3 &result, vector3 const &heading, vector3 const &up) // 0x5EA137
{
    mangled_assert("?physCreateCoordSysFromHeadingAndUp@@YGXAAVmatrix3@@ABVvector3@@1@Z");
    todo("implement");
}

/* ---------- private code */
#endif
