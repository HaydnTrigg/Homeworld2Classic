#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <Viewer.h>
#include <xstring>
#include <task.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <stack>
#include <SelTarg.h>
#include <Mathlib\matrix3.h>
#include <prim.h>
#include <new>
#include <exception>
#include <xstddef>
#include <Collision\Primitives\capsule.h>
#include <type_traits>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <Camera\Camera.h>
#include <Camera\Frustum.h>
#include <MeshAnimation.h>
#include <Camera\Plane3.h>
#include <HierarchyDynamic.h>
#include <HierarchyStatic.h>
#include <Decal\DecalRefMesh.h>
#include <Collision\Primitives\mesh.h>
#include <Collision\Primitives\triangle.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Mathlib\vector3.h>
#include <Collision\BVH\bvh.h>
#include <Mathlib\vector4.h>
#include <boost\scoped_ptr.hpp>
#include <sobid.h>
#include <Mathlib\vector2.h>
#include <boost\cstdint.hpp>
#include <Mathlib\quat.h>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <SobWithMeshStatic.h>
#include <sob.h>
#include <sobstatic.h>
#include <SobWithMesh.h>
#include <Collision\Primitives\sphere.h>
#include <SobRigidBody.h>
#include <SobRigidBodyStatic.h>
#include <debug\db.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <Collision\primitivesfwd.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <Interpolation.h>
#include <Collision\Primitives\aabb.h>
#include <Collision\Primitives\obb.h>
#include <Graphics\LensFlareCollision.h>
#include <Render\objects\lensflare.h>
#include <wchar.h>
#include <Render\objects\objects.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern float const ViewerUpdateRate; // 0x7A00A0
    extern float const ViewerUpdatePeriod; // 0x839C40
    extern float const CameraDistanceUpdateRate; // 0x7A00A4
    extern float const CameraDistanceUpdatePeriod; // 0x839C44
}

/* ---------- public code */

_extern bool _sub_56B9FC(LensFlareCollision const *const, Camera const *, vector2 const &);
bool LensFlareCollision::CheckOcclusion(Camera const *, vector2 const &) const // 0x56B9FC
{
    mangled_assert("?CheckOcclusion@LensFlareCollision@@UBE_NPBVCamera@@ABVvector2@@@Z");
    todo("implement");
    bool __result = _sub_56B9FC(this, arg, arg);
    return __result;
}

/* ---------- private code */
#endif
