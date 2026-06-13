#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\octree.h>
#include <xutility>
#include <Collision\BVH\span.h>
#include <utility>
#include <iosfwd>
#include <Collision\BVH\Internal\span_i.h>
#include <vector>
#include <Collision\BVH\proxy.h>
#include <xmemory>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <Interpolation.h>
#include <Collision\Primitives\aabb.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <sobid.h>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\vector2.h>
#include <boost\cstdint.hpp>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <seInterface2\SoundParams.h>
#include <Mathlib\quat.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <debug\db.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <savegamedef.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <boost\detail\shared_count.hpp>
#include <MultiplierTypes.h>
#include <boost\detail\lwm_win32.hpp>
#include <Collision\BVH\bvh.h>
#include <SimVis\RenderModelUtil.h>
#include <wchar.h>
#include <sob.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void RenderModelGetSobTransform(Sob const &sob, matrix4 &m);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_52265D(Sob const &, matrix4 &);
void RenderModelGetSobTransform(Sob const &sob, matrix4 &m) // 0x52265D
{
    mangled_assert("?RenderModelGetSobTransform@@YGXABVSob@@AAVmatrix4@@@Z");
    todo("implement");
    _sub_52265D(sob, m);
}

/* ---------- private code */
#endif
