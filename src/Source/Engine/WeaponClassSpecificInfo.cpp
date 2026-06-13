#if 0
/* ---------- headers */

#include "decomp.h"
#include <MultiplierContainer.h>
#include <visibility.h>
#include <xstring>
#include <MultiplierTypes.h>
#include <xmemory0>
#include <Collision\BVH\bvh.h>
#include <pch.h>
#include <Mathlib\matrix3.h>
#include <sob.h>
#include <new>
#include <sobstatic.h>
#include <exception>
#include <Collision\Primitives\sphere.h>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <math.h>
#include <Mathlib\vector3.h>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <boost\scoped_ptr.hpp>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <Mathlib\vector2.h>
#include <boost\cstdint.hpp>
#include <Interpolation.h>
#include <Collision\Primitives\aabb.h>
#include <Mathlib\quat.h>
#include <sobid.h>
#include <debug\db.h>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <seInterface2\SoundParams.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <savegamedef.h>
#include <Collision\Primitives\capsule.h>
#include <boost\detail\shared_count.hpp>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <boost\detail\lwm_win32.hpp>
#include <WeaponClassSpecificInfo.h>
#include <wchar.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_4A05FE(WeaponClassSpecificInfo *const);
WeaponClassSpecificInfo::WeaponClassSpecificInfo() // 0x4A05FE
{
    mangled_assert("??0WeaponClassSpecificInfo@@QAE@XZ");
    todo("implement");
    _sub_4A05FE(this);
}

_extern void _sub_4A0684(WeaponClassSpecificInfo *const);
void WeaponClassSpecificInfo::bindStaticCoordSys() // 0x4A0684
{
    mangled_assert("?bindStaticCoordSys@WeaponClassSpecificInfo@@QAEXXZ");
    todo("implement");
    _sub_4A0684(this);
}

/* ---------- private code */
#endif
