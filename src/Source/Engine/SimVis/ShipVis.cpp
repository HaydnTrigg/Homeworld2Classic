#if 0
/* ---------- headers */

#include "decomp.h"
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <Modifiers\ModifierTargetCache.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <boost\shared_array.hpp>
#include <pch.h>
#include <memory\memorylib.h>
#include <RenderAnim\MarkerInstance.h>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <Mathlib\matrix3.h>
#include <SimVis\SobVis.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <Mathlib\LinearInterp.h>
#include <Collision\Primitives\obb.h>
#include <ResearchManager.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <xutility>
#include <Collision\BVH\proxy.h>
#include <utility>
#include <iosfwd>
#include <Collision\intersect.h>
#include <vector>
#include <Collision\primitivesfwd.h>
#include <seInterface2\SampleID.h>
#include <xmemory>
#include <seInterface2\SampleBase.h>
#include <debug\ctassert.h>
#include <Interpolation.h>
#include <TeamColourRegistry.h>
#include <list>
#include <weaponinfo.h>
#include <Collision\Primitives\aabb.h>
#include <SobWithMeshStatic.h>
#include <Mathlib\vector3.h>
#include <memory\memoryalloc.h>
#include <ship.h>
#include <Mathlib\vector4.h>
#include <SobWithMesh.h>
#include <playerresourcetype.h>
#include <sobid.h>
#include <SobRigidBody.h>
#include <map>
#include <SobRigidBodyStatic.h>
#include <xtree>
#include <boost\smart_ptr.hpp>
#include <boost\scoped_ptr.hpp>
#include <SoundManager\SoundEntityHandle.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <seInterface2\sedefinesshared.h>
#include <boost\cstdint.hpp>
#include <MeshAnimation.h>
#include <ShieldTypes.h>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <seInterface2\SoundParams.h>
#include <boost\scoped_array.hpp>
#include <Mathlib\quat.h>
#include <Subsystems\HardPointManager.h>
#include <Subsystems\HardPoint.h>
#include <Subsystems\HardPointStatic.h>
#include <RenderAnim\RenderModelInstance.h>
#include <Subsystems\SubSystemType.h>
#include <Collision\Primitives\capsule.h>
#include <RenderAnim\EffectAnimationList.h>
#include <Collision\Primitives\segment.h>
#include <RenderAnim\AnimEventContext.h>
#include <Collision\BVH\profiling.h>
#include <assist\callback.h>
#include <memory\memorysmall.h>
#include <BattleScar\BattleScarStats.h>
#include <BattleScar\BattleScarManager.h>
#include <Decal\DecalManager.h>
#include <Decal\VertexPool.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <Player.h>
#include <Render\gl\r_types.h>
#include <SquadronList.h>
#include <debug\db.h>
#include <Mathlib\matvec.h>
#include <abilities.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <profile\profile.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <iostream>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <selection.h>
#include <savegamedef.h>
#include <MultiplierTypes.h>
#include <boost\detail\shared_count.hpp>
#include <Collision\BVH\bvh.h>
#include <bitset>
#include <boost\detail\lwm_win32.hpp>
#include <Render\FxGL\FXManager.h>
#include <Render\FxGL\VarMulti.h>
#include <Race.h>
#include <SimVis\ShipVis.h>
#include <SimVis\RenderModelVis.h>
#include <wchar.h>
#include <sob.h>
#include <sobstatic.h>
#include <BuildManager.h>
#include <Collision\Primitives\sphere.h>
#include <savegame.h>
#include <task.h>
#include <SimVis\EffectContainer.h>
#include <stack>
#include <SoundManager\SoundManager.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern char const *k_DefaultHyperspaceFXName; // 0x8378F0
    extern char const *k_DefaultHyperspaceSoundName; // 0x8378F4
    extern char const *k_rootSoundDir; // 0x8378F8
}

/* ---------- public code */

_inline ShipVis::Data::Data() // 0x52346D
{
    mangled_assert("??0Data@ShipVis@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

ShipVis::ShipVis(Sob const *) // 0x523477
{
    mangled_assert("??0ShipVis@@QAE@PBVSob@@@Z");
    todo("implement");
}

ShipVis::ShipVis(Sob const *, SaveGameData *) // 0x5234C8
{
    mangled_assert("??0ShipVis@@QAE@PBVSob@@PAVSaveGameData@@@Z");
    todo("implement");
}

ShipVis::~ShipVis() // 0x52351C
{
    mangled_assert("??1ShipVis@@UAE@XZ");
    todo("implement");
}

void ShipVis::update(Camera const &, float, float, __int32) // 0x5237A9
{
    mangled_assert("?update@ShipVis@@UAEXABVCamera@@MMH@Z");
    todo("implement");
}

bool ShipVis::startHyperspaceFX(vector3 const &, matrix3 const &, float const, float const, float const, char const *, char const *) // 0x523634
{
    mangled_assert("?startHyperspaceFX@ShipVis@@QAE_NABVvector3@@ABVmatrix3@@MMMPBD2@Z");
    todo("implement");
}

bool ShipVis::isHyperspaceFXDead() const // 0x52358E
{
    mangled_assert("?isHyperspaceFXDead@ShipVis@@QBE_NXZ");
    todo("implement");
}

void ShipVis::stopHyperspaceFX() // 0x523796
{
    mangled_assert("?stopHyperspaceFX@ShipVis@@QAEXXZ");
    todo("implement");
}

bool ShipVis::getHyperspaceFXTransform(matrix4 &) const // 0x523575
{
    mangled_assert("?getHyperspaceFXTransform@ShipVis@@QBE_NAAVmatrix4@@@Z");
    todo("implement");
}

bool ShipVis::getHyperspaceFXOffset(vector3 &) const // 0x52355C
{
    mangled_assert("?getHyperspaceFXOffset@ShipVis@@QBE_NAAVvector3@@@Z");
    todo("implement");
}

void ShipVis::setHyperspaceFXVisible(bool) // 0x52361B
{
    mangled_assert("?setHyperspaceFXVisible@ShipVis@@QAEX_N@Z");
    todo("implement");
}

void ShipVis::setHyperspaceFXTransform(matrix4 const &) // 0x523602
{
    mangled_assert("?setHyperspaceFXTransform@ShipVis@@QAEXABVmatrix4@@@Z");
    todo("implement");
}

void ShipVis::setHyperspaceFXSize(float, float, float) // 0x5235A1
{
    mangled_assert("?setHyperspaceFXSize@ShipVis@@QAEXMMM@Z");
    todo("implement");
}

void ShipVis::updateHyperspaceFX(float, bool) // 0x5237FC
{
    mangled_assert("?updateHyperspaceFX@ShipVis@@AAEXM_N@Z");
    todo("implement");
}

/* ---------- private code */
#endif
