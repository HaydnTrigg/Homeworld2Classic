#if 0
/* ---------- headers */

#include "decomp.h"
#include <Player.h>
#include <SquadronList.h>
#include <Render\objects\mesh.h>
#include <xstring>
#include <Render\objects\core.h>
#include <xmemory0>
#include <RenderAnim\MarkerInstance.h>
#include <Mathlib\matrix4.h>
#include <boost\shared_array.hpp>
#include <Render\objects\objects.h>
#include <pch.h>
#include <memory\memorylib.h>
#include <Render\gl\types.h>
#include <MeshAnimation.h>
#include <SimVis\RenderModelEventSink.h>
#include <Render\gl\lotypes.h>
#include <RenderAnim\AnimEventSink.h>
#include <Mathlib\matrix3.h>
#include <SimVis\SobVis.h>
#include <boost\checked_delete.hpp>
#include <new>
#include <exception>
#include <xstddef>
#include <Mathlib\LinearInterp.h>
#include <type_traits>
#include <MainUI.h>
#include <Selector.h>
#include <Render\objects\stateblock\stateblock.h>
#include <Collision\Primitives\obb.h>
#include <MetaSelTarg.h>
#include <playerresourcetype.h>
#include <Render\objects\texture.h>
#include <Collision\BVH\octree.h>
#include <Camera\OrbitParameters.h>
#include <Render\objects\textureregistry.h>
#include <Collision\BVH\span.h>
#include <SimVis\RenderModelScars.h>
#include <hash_map>
#include <Collision\BVH\Internal\span_i.h>
#include <xhash>
#include <Collision\BVH\proxy.h>
#include <xutility>
#include <Collision\intersect.h>
#include <utility>
#include <iosfwd>
#include <Collision\primitivesfwd.h>
#include <vector>
#include <xmemory>
#include <fixedpoint.h>
#include <debug\ctassert.h>
#include <util\fixed.h>
#include <BuildManager.h>
#include <Interpolation.h>
#include <math.h>
#include <platform\osdef.h>
#include <list>
#include <Collision\Primitives\aabb.h>
#include <memory\memoryalloc.h>
#include <Mathlib\vector3.h>
#include <sobid.h>
#include <Mathlib\vector4.h>
#include <SensorsManager.h>
#include <Mathlib\mathutil.h>
#include <SoundManager\SoundManager.h>
#include <map>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <RenderAnim\RenderModel.h>
#include <xtree>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <boost\smart_ptr.hpp>
#include <RenderAnim\Marker.h>
#include <boost\scoped_ptr.hpp>
#include <Animation.h>
#include <platform\timer.h>
#include <Mathlib\vector2.h>
#include <platform\platformexports.h>
#include <util\types.h>
#include <ResearchManager.h>
#include <mainuidefines.h>
#include <boost\cstdint.hpp>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <SimVis\EffectContainer.h>
#include <seInterface2\SoundParams.h>
#include <boost\scoped_array.hpp>
#include <abilities.h>
#include <Mathlib\quat.h>
#include <SimVis\FogOfWarVis.h>
#include <RenderAnim\RenderModelInstance.h>
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
#include <seInterface2\SampleID.h>
#include <RenderAnim\EffectAnimation.h>
#include <Decal\VertexPool.h>
#include <seInterface2\SampleBase.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <Render\gl\r_types.h>
#include <Mathlib\matvec.h>
#include <debug\db.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <ShaderVariables.h>
#include <sobtypes.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <boost\throw_exception.hpp>
#include <util\dictionary.h>
#include <MultiplierTypes.h>
#include <selection.h>
#include <util\utilexports.h>
#include <savegamedef.h>
#include <Collision\BVH\bvh.h>
#include <boost\detail\shared_count.hpp>
#include <bitset>
#include <TeamColourRegistry.h>
#include <boost\detail\lwm_win32.hpp>
#include <RenderAnim\MarkerAnimation.h>
#include <Render\FxGL\FXManager.h>
#include <Render\FxGL\VarMulti.h>
#include <SimVis\RenderModelUtil.h>
#include <SobWithMeshStatic.h>
#include <seInterface2\sedefinesshared.h>
#include <SobWithMesh.h>
#include <Render\objects\stateblock\stateblocktypes.h>
#include <SobRigidBody.h>
#include <Race.h>
#include <SobRigidBodyStatic.h>
#include <SimVis\RenderModelVis.h>
#include <sob.h>
#include <wchar.h>
#include <sobstatic.h>
#include <SimVis\EmitterContainer.h>
#include <Collision\Primitives\sphere.h>
#include <savegame.h>
#include <SoundManager\SoundEntityHandle.h>
#include <task.h>
#include <stack>
#include <Render\objects\stateblock\statevariableinstance.h>
#include <Render\objects\renderable.h>
#include <profile\profile.h>
#include <iostream>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

RenderModelVis::RenderModelVis(Sob const *) // 0x5226FB
{
    mangled_assert("??0RenderModelVis@@QAE@PBVSob@@@Z");
    todo("implement");
}

RenderModelVis::RenderModelVis(Sob const *, SaveGameData *) // 0x522851
{
    mangled_assert("??0RenderModelVis@@QAE@PBVSob@@PAVSaveGameData@@@Z");
    todo("implement");
}

_inline EmitterContainer::~EmitterContainer() // 0x5229C9
{
    mangled_assert("??1EmitterContainer@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

RenderModelVis::~RenderModelVis() // 0x5229CE
{
    mangled_assert("??1RenderModelVis@@UAE@XZ");
    todo("implement");
}

void RenderModelVis::setHierarchy(HierarchyDynamic const *) // 0x5230B6
{
    mangled_assert("?setHierarchy@RenderModelVis@@UAEXPBVHierarchyDynamic@@@Z");
    todo("implement");
}

bool RenderModelVis::hasEffectEvent(char const *) const // 0x522E07
{
    mangled_assert("?hasEffectEvent@RenderModelVis@@UBE_NPBD@Z");
    todo("implement");
}

void RenderModelVis::startEffectEvent(char const *, float) // 0x5230D8
{
    mangled_assert("?startEffectEvent@RenderModelVis@@UAEXPBDM@Z");
    todo("implement");
}

void RenderModelVis::stopEffectEvent(char const *) // 0x5230F3
{
    mangled_assert("?stopEffectEvent@RenderModelVis@@UAEXPBD@Z");
    todo("implement");
}

void RenderModelVis::setEffectVariable(char const *, float, float) // 0x52308E
{
    mangled_assert("?setEffectVariable@RenderModelVis@@UAEXPBDMM@Z");
    todo("implement");
}

void RenderModelVis::update(Camera const &, float, float, __int32) // 0x523100
{
    mangled_assert("?update@RenderModelVis@@UAEXABVCamera@@MMH@Z");
    todo("implement");
}

void RenderModelVis::updateAlpha(float, __int32) // 0x523340
{
    mangled_assert("?updateAlpha@RenderModelVis@@AAEXMH@Z");
    todo("implement");
}

void RenderModelVis::updateAdditiveColour(float) // 0x523210
{
    mangled_assert("?updateAdditiveColour@RenderModelVis@@AAEXM@Z");
    todo("implement");
}

void RenderModelVis::postDeathUpdate(float) // 0x522F10
{
    mangled_assert("?postDeathUpdate@RenderModelVis@@AAEXM@Z");
    todo("implement");
}

void RenderModelVis::setBaseAlpha(float) // 0x523080
{
    mangled_assert("?setBaseAlpha@RenderModelVis@@QAEXM@Z");
    todo("implement");
}

float RenderModelVis::getAlpha() const // 0x522BD0
{
    mangled_assert("?getAlpha@RenderModelVis@@QBEMXZ");
    todo("implement");
}

void RenderModelVis::onHealthChange() // 0x522E30
{
    mangled_assert("?onHealthChange@RenderModelVis@@UAEXXZ");
    todo("implement");
}

void RenderModelVis::setAdditiveColour(vector4 const &, RenderModelVis::AdditiveColourMode, unsigned __int32) // 0x522FD0
{
    mangled_assert("?setAdditiveColour@RenderModelVis@@QAEXABVvector4@@W4AdditiveColourMode@1@I@Z");
    todo("implement");
}

bool RenderModelVis::hasAdditiveColour() const // 0x522E00
{
    mangled_assert("?hasAdditiveColour@RenderModelVis@@QBE_NXZ");
    todo("implement");
}

__int32 RenderModelVis::getMarkerID(char const *) const // 0x522CB0
{
    mangled_assert("?getMarkerID@RenderModelVis@@QBEHPBD@Z");
    todo("implement");
}

bool RenderModelVis::getMarkerPosition(__int32, vector3 &) const // 0x522CC0
{
    mangled_assert("?getMarkerPosition@RenderModelVis@@QBE_NHAAVvector3@@@Z");
    todo("implement");
}

bool RenderModelVis::save(SaveGameData *) // 0x522FB0
{
    mangled_assert("?save@RenderModelVis@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool RenderModelVis::restore(SaveGameData *) // 0x522F90
{
    mangled_assert("?restore@RenderModelVis@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

void RenderModelVis::init() // 0x522E10
{
    mangled_assert("?init@RenderModelVis@@UAEXXZ");
    todo("implement");
}

void RenderModelVis::postRestore() // 0x522F70
{
    mangled_assert("?postRestore@RenderModelVis@@UAEXXZ");
    todo("implement");
}

/* ---------- private code */
#endif
