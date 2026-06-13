#if 0
/* ---------- headers */

#include "decomp.h"
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <assist\stlexsmallvector.h>
#include <Collision\BVH\profiling.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <SobWithMesh.h>
#include <SobRigidBody.h>
#include <sob.h>
#include <sobstatic.h>
#include <Mathlib\matrix3.h>
#include <Collision\Primitives\sphere.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <Collision\Primitives\obb.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <boost\scoped_ptr.hpp>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <task.h>
#include <stack>
#include <Mathlib\vector2.h>
#include <SobWithMeshStatic.h>
#include <boost\cstdint.hpp>
#include <SobRigidBodyStatic.h>
#include <sobid.h>
#include <MeshAnimation.h>
#include <Mathlib\quat.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <seInterface2\PatchID.h>
#include <Interpolation.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <debug\db.h>
#include <Collision\Primitives\aabb.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <MetaSelTarg.h>
#include <SelTarg.h>
#include <wchar.h>
#include <prim.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_608BC0(MetaSelTarg *const);
MetaSelTarg::~MetaSelTarg() // 0x608BC0
{
    mangled_assert("??1MetaSelTarg@@QAE@XZ");
    todo("implement");
    _sub_608BC0(this);
}

_extern void _sub_608C26(MetaSelTarg *const, Selection const *);
void MetaSelTarg::setSelection(Selection const *) // 0x608C26
{
    mangled_assert("?setSelection@MetaSelTarg@@QAEXPBVSelection@@@Z");
    todo("implement");
    _sub_608C26(this, arg);
}

/* ---------- private code */
#endif
