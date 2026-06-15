#if 0
/* ---------- headers */

#include "decomp.h"
#include <ITweak.h>
#include <assist\stlexsmallvector.h>
#include <SOBGroupManager.h>
#include <Tactics.h>
#include <hash_map>
#include <xstring>
#include <xhash>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <boost\shared_array.hpp>
#include <pch.h>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <task.h>
#include <stack>
#include <SobWithMeshStatic.h>
#include <Mathlib\matrix3.h>
#include <SobRigidBodyStatic.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <MeshAnimation.h>
#include <Mathlib\mathutil.h>
#include <Sob\Cloud\CloudStatic.h>
#include <Collision\Primitives\obb.h>
#include <Camera\OrbitParameters.h>
#include <gameRandom.h>
#include <Collision\BVH\octree.h>
#include <random.h>
#include <Collision\BVH\span.h>
#include <xutility>
#include <Collision\BVH\Internal\span_i.h>
#include <utility>
#include <iosfwd>
#include <Collision\BVH\proxy.h>
#include <vector>
#include <Collision\intersect.h>
#include <xmemory>
#include <Collision\primitivesfwd.h>
#include <SoundManager\SoundManager.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <HyperspaceManager.h>
#include <SquadronList.h>
#include <Interpolation.h>
#include <profile\profile.h>
#include <list>
#include <SoundManager\SoundEntityHandle.h>
#include <iostream>
#include <BillboardRender.h>
#include <Graphics\meshrenderproxy.h>
#include <Collision\Primitives\aabb.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <sobid.h>
#include <Universe.h>
#include <map>
#include <Waypoint.h>
#include <fixedpoint.h>
#include <xtree>
#include <MainUI.h>
#include <boost\smart_ptr.hpp>
#include <SobUnmoveable.h>
#include <util\fixed.h>
#include <Selector.h>
#include <boost\scoped_ptr.hpp>
#include <MetaSelTarg.h>
#include <Mathlib\vector2.h>
#include <platform\timer.h>
#include <util\types.h>
#include <platform\platformexports.h>
#include <boost\cstdint.hpp>
#include <seInterface2\SampleID.h>
#include <seInterface2\SampleBase.h>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <boost\scoped_array.hpp>
#include <seInterface2\SoundParams.h>
#include <Mathlib\quat.h>
#include <Collision\Primitives\capsule.h>
#include <SensorsManager.h>
#include <Collision\Primitives\segment.h>
#include <Render\gl\r_types.h>
#include <Collision\BVH\profiling.h>
#include <Mathlib\matvec.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <pathpoints.h>
#include <debug\db.h>
#include <seInterface2\sedefinesshared.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <abilities.h>
#include <selection.h>
#include <savegamedef.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <boost\detail\shared_count.hpp>
#include <bitset>
#include <Collision\BVH\bvh.h>
#include <boost\detail\lwm_win32.hpp>
#include <Sob\Cloud\Cloud.h>
#include <SobWithMesh.h>
#include <wchar.h>
#include <SobRigidBody.h>
#include <sob.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <dbdefines.h>
#include <UnitCaps\UnitCaps.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

Cloud::Cloud(char const *) // 0x4C42DC
{
    mangled_assert("??0Cloud@@QAE@PBD@Z");
    todo("implement");
}

_inline Cloud::~Cloud() // 0x4C439E
{
    mangled_assert("??1Cloud@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

void Cloud::render(Camera const *, MeshRenderProxy &) // 0x4C453A
{
    mangled_assert("?render@Cloud@@UAEXPBVCamera@@AAVMeshRenderProxy@@@Z");
    todo("implement");
}

void Cloud::setPosition(vector3 const &) // 0x4C45FE
{
    mangled_assert("?setPosition@Cloud@@UAEXABVvector3@@@Z");
    todo("implement");
}

void Cloud::randomizeVisual() // 0x4C44B6
{
    mangled_assert("?randomizeVisual@Cloud@@IAEXXZ");
    todo("implement");
}

void Cloud::setRotation(float) // 0x4C463B
{
    mangled_assert("?setRotation@Cloud@@QAEXM@Z");
    todo("implement");
}

void Cloud::setRadius(float) // 0x4C461A
{
    mangled_assert("?setRadius@Cloud@@QAEXM@Z");
    todo("implement");
}

Cloud *Cloud::Spawn(char const *meshname, vector3 const &position, vector4 const &color, float rotationDegrees, float radius) // 0x4C43D3
{
    mangled_assert("?Spawn@Cloud@@SGPAV1@PBDABVvector3@@ABVvector4@@MM@Z");
    todo("implement");
}

/* ---------- private code */
#endif
