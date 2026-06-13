#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <Collision\Primitives\obb.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <sctObjectLoad.h>
#include <Mathlib\vector3.h>
#include <Interpolation.h>
#include <boost\scoped_ptr.hpp>
#include <Collision\Primitives\aabb.h>
#include <Mathlib\vector2.h>
#include <boost\cstdint.hpp>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <Mathlib\quat.h>
#include <sob.h>
#include <SelTarg.h>
#include <sobid.h>
#include <prim.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <LatchManager.h>
#include <debug\db.h>
#include <savegame.h>
#include <task.h>
#include <stack>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <Sob\Resource\ResourceStatic.h>
#include <SobWithMeshStatic.h>
#include <wchar.h>
#include <SobRigidBodyStatic.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_4B127E(ResourceStatic *const);
void ResourceStatic::initialiseResourcingPoints() // 0x4B127E
{
    mangled_assert("?initialiseResourcingPoints@ResourceStatic@@QAEXXZ");
    todo("implement");
    _sub_4B127E(this);
}

_extern void _sub_4B1206(ResourceStatic *const);
ResourceStatic::~ResourceStatic() // 0x4B1206
{
    mangled_assert("??1ResourceStatic@@MAE@XZ");
    todo("implement");
    _sub_4B1206(this);
}

_extern _sub_4B11B0(ResourceStatic *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, SobType);
ResourceStatic::ResourceStatic(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, SobType) // 0x4B11B0
{
    mangled_assert("??0ResourceStatic@@IAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4SobType@@@Z");
    todo("implement");
    _sub_4B11B0(this, arg, arg);
}

/* ---------- private code */
#endif
