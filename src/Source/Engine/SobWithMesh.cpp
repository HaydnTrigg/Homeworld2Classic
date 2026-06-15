#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <seInterface2\sedefinesshared.h>
#include <Subsystems\HardPointManager.h>
#include <xstring>
#include <Subsystems\HardPoint.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <boost\shared_array.hpp>
#include <SimVis\RenderModelVis.h>
#include <Subsystems\HardPointStatic.h>
#include <pch.h>
#include <SimVis\SobVis.h>
#include <memory\memorylib.h>
#include <Subsystems\SubSystemType.h>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <gameRenderDebug.h>
#include <task.h>
#include <Render\objects\fontsystem.h>
#include <stack>
#include <Render\objects\bitmapfont.h>
#include <SobWithMeshStatic.h>
#include <HyperspaceManager.h>
#include <SquadronList.h>
#include <ATITemplate.h>
#include <Mathlib\matrix3.h>
#include <platform\osdef.h>
#include <ATI.h>
#include <savestream.h>
#include <SobRigidBodyStatic.h>
#include <weaponinfo.h>
#include <new>
#include <exception>
#include <xstddef>
#include <MeshAnimation.h>
#include <type_traits>
#include <NavLights.h>
#include <DynamicPoint.h>
#include <Render\objects\light.h>
#include <LatchManager.h>
#include <Render\objects\objects.h>
#include <Universe.h>
#include <Collision\Primitives\obb.h>
#include <Render\gl\types.h>
#include <Waypoint.h>
#include <platform\timer.h>
#include <Collision\BVH\octree.h>
#include <Mathlib\matvec.h>
#include <SobUnmoveable.h>
#include <platform\platformexports.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Render\FxGL\FXManager.h>
#include <ParadeCommand.h>
#include <xutility>
#include <Collision\BVH\proxy.h>
#include <Render\FxGL\VarMulti.h>
#include <Parade.h>
#include <alliance.h>
#include <utility>
#include <iosfwd>
#include <Collision\intersect.h>
#include <Decal\DecalRefMesh.h>
#include <vector>
#include <Collision\primitivesfwd.h>
#include <fileio\bytestream.h>
#include <xmemory>
#include <Render\gl\lotypes.h>
#include <Squadron.h>
#include <debug\ctassert.h>
#include <PreciseSelTarg.h>
#include <command.h>
#include <memory\memoryalloc.h>
#include <fog.h>
#include <Modifiers\ModifierUIInfo.h>
#include <MainUI.h>
#include <Modifiers\ModifierMultiplier.h>
#include <Render\gl\r_types.h>
#include <Selector.h>
#include <Modifiers\ModifierEffect.h>
#include <math.h>
#include <Interpolation.h>
#include <MetaSelTarg.h>
#include <RenderAnim\MarkerInstance.h>
#include <Ship\FormationTargetInfo.h>
#include <list>
#include <Collision\Primitives\aabb.h>
#include <Render\objects\compiledtext.h>
#include <Mathlib\vector3.h>
#include <config.h>
#include <Mathlib\vector4.h>
#include <Modifiers\ModifierApplier.h>
#include <GameEventDefs.h>
#include <sobid.h>
#include <GameEventSys.h>
#include <map>
#include <xtree>
#include <boost\smart_ptr.hpp>
#include <boost\scoped_ptr.hpp>
#include <weaponstaticinfo.h>
#include <GunBinding.h>
#include <playerresourcetype.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <Render\objects\stateblock\stateblocktypes.h>
#include <gameRender.h>
#include <Race.h>
#include <boost\cstdint.hpp>
#include <SensorsManager.h>
#include <RenderAnim\RenderModelInstance.h>
#include <Render\gl\r_defines.h>
#include <SoundManager\SoundManager.h>
#include <BuildManager.h>
#include <RenderAnim\EffectAnimationList.h>
#include <Render\gl\glext.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <RenderAnim\AnimEventContext.h>
#include <Graphics\DirectMeshRender.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <assist\callback.h>
#include <Graphics\meshrenderproxy.h>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <memory\memorysmall.h>
#include <Render\objects\stateblock\statevariableinstance.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <WeaponClassSpecificInfo.h>
#include <util\dictionary.h>
#include <seInterface2\SoundParams.h>
#include <boost\scoped_array.hpp>
#include <util\utilexports.h>
#include <Ship\Formation.h>
#include <Ship\FormationPattern.h>
#include <Mathlib\quat.h>
#include <SoundManager\SoundEntityHandle.h>
#include <Render\objects\debugrender.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <profile\profile.h>
#include <Render\objects\mesh.h>
#include <iostream>
#include <Render\objects\renderable.h>
#include <abilities.h>
#include <savegameimpl.h>
#include <savegamedata.h>
#include <pathpoints.h>
#include <fixedpoint.h>
#include <debug\db.h>
#include <util\fixed.h>
#include <Player.h>
#include <ResearchManager.h>
#include <deque>
#include <dbdefines.h>
#include <UnitCaps\UnitCaps.h>
#include <seInterface2\SampleID.h>
#include <Modifiers\ModifierAbility.h>
#include <seInterface2\SampleBase.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <shipstatic.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <SOBGroupManager.h>
#include <commandtype.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <selection.h>
#include <hash_map>
#include <savegamedef.h>
#include <MultiplierTypes.h>
#include <xhash>
#include <EffectCreate.h>
#include <boost\detail\shared_count.hpp>
#include <Collision\BVH\bvh.h>
#include <renderer.h>
#include <bitset>
#include <boost\detail\lwm_win32.hpp>
#include <HierarchyDynamic.h>
#include <OrderFeedback.h>
#include <HierarchyStatic.h>
#include <Collision\Primitives\mesh.h>
#include <Collision\Primitives\triangle.h>
#include <DotManager.h>
#include <Mathlib\LinearInterp.h>
#include <MADState.h>
#include <Render\objects\stateblock\stateblock.h>
#include <luaconfig\luabinding.h>
#include <Camera\Camera.h>
#include <Render\objects\texture.h>
#include <luaconfig\luaconfig.h>
#include <Camera\Frustum.h>
#include <Render\objects\textureregistry.h>
#include <Modifiers\ModifierTargetCache.h>
#include <lua.h>
#include <Camera\Plane3.h>
#include <Render\objects\core.h>
#include <SobWithMesh.h>
#include <Camera\OrbitParameters.h>
#include <BattleScar\BattleScarStats.h>
#include <SobRigidBody.h>
#include <wchar.h>
#include <BattleScar\BattleScarManager.h>
#include <string>
#include <sob.h>
#include <Decal\DecalManager.h>
#include <sobstatic.h>
#include <Decal\VertexPool.h>
#include <ship.h>
#include <EngineTrailSystem.h>
#include <Collision\Primitives\sphere.h>
#include <ShieldTypes.h>
#include <ITweak.h>
#include <queue>
#include <Render\objects\cliprect.h>
#include <FamilyListMgr.h>
#include <Tactics.h>
#include <FamilyList.h>
#include <Family.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void SobWithMeshAnimationFinishedCallBack(SobWithMesh *ship, AnimatorMad *animator, AnimatorMad::CallbackEvent event);

/* ---------- globals */

extern bool g_bUseNLips; // 0x835B3B
extern char const SobWithMesh::m_saveToken[12]; // 0x791D80
extern SaveData const SobWithMesh::m_saveData[5]; // 0x791D90
extern bool s_bUseOriginalTC; // 0x843F28
extern bool SobWithMesh::s_showShipAvoidance; // 0x843F29
extern bool SobWithMesh::s_showFormationAvoidance; // 0x843F2A

/* ---------- private variables */

_static
{
    extern unsigned __int32 const indices[36]; // 0x791CF0
}

/* ---------- public code */

SobWithMesh::SobWithMesh(SobType, char const *, bool, Player *) // 0x4BE09A
{
    mangled_assert("??0SobWithMesh@@QAE@W4SobType@@PBD_NPAVPlayer@@@Z");
    todo("implement");
}

_inline GameEvent_ShipRemoved::~GameEvent_ShipRemoved() // 0x4BE1FE
{
    mangled_assert("??1GameEvent_ShipRemoved@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

SobWithMesh::~SobWithMesh() // 0x4BE205
{
    mangled_assert("??1SobWithMesh@@UAE@XZ");
    todo("implement");
}

void SobWithMesh::UseOriginalTeamColour(bool bUseOriginalTC) // 0x4BECF8
{
    mangled_assert("?UseOriginalTeamColour@SobWithMesh@@SGX_N@Z");
    todo("implement");
}

void SobWithMesh::RemoveAllSimData() // 0x4BE443
{
    mangled_assert("?RemoveAllSimData@SobWithMesh@@IAEXXZ");
    todo("implement");
}

void SobWithMesh::RemoveFromSimulation() // 0x4BE45F
{
    mangled_assert("?RemoveFromSimulation@SobWithMesh@@MAEXXZ");
    todo("implement");
}

SobWithMesh *SobWithMesh::getSobMeshPtr() // 0x4BF94A
{
    mangled_assert("?getSobMeshPtr@SobWithMesh@@UAEPAV1@XZ");
    todo("implement");
}

float SobWithMesh::getMeshAlpha() const // 0x4BF837
{
    mangled_assert("?getMeshAlpha@SobWithMesh@@QBEMXZ");
    todo("implement");
}

bool SobWithMesh::getJointPosition(char const *, vector3 &, bool) const // 0x4BF58D
{
    mangled_assert("?getJointPosition@SobWithMesh@@QBE_NPBDAAVvector3@@_N@Z");
    todo("implement");
}

bool SobWithMesh::getJointPosition(JointAnimStack const *, vector3 &, bool) const // 0x4BF695
{
    mangled_assert("?getJointPosition@SobWithMesh@@QBE_NPBVJointAnimStack@@AAVvector3@@_N@Z");
    todo("implement");
}

bool SobWithMesh::getInterpolatedJointPosition(char const *, vector3 &, bool) const // 0x4BF2AA
{
    mangled_assert("?getInterpolatedJointPosition@SobWithMesh@@QBE_NPBDAAVvector3@@_N@Z");
    todo("implement");
}

bool SobWithMesh::getInterpolatedJointPosition(JointAnimStack const *, vector3 &, bool) const // 0x4BF3C4
{
    mangled_assert("?getInterpolatedJointPosition@SobWithMesh@@QBE_NPBVJointAnimStack@@AAVvector3@@_N@Z");
    todo("implement");
}

bool SobWithMesh::getJointOrientation(char const *, matrix3 &, bool) const // 0x4BF4E1
{
    mangled_assert("?getJointOrientation@SobWithMesh@@QBE_NPBDAAVmatrix3@@_N@Z");
    todo("implement");
}

bool SobWithMesh::getJointOrientation(JointAnimStack const *, matrix3 &, bool) const // 0x4BF532
{
    mangled_assert("?getJointOrientation@SobWithMesh@@QBE_NPBVJointAnimStack@@AAVmatrix3@@_N@Z");
    todo("implement");
}

bool SobWithMesh::getInterpolatedJointOrientation(char const *, matrix3 &, bool) const // 0x4BF204
{
    mangled_assert("?getInterpolatedJointOrientation@SobWithMesh@@QBE_NPBDAAVmatrix3@@_N@Z");
    todo("implement");
}

bool SobWithMesh::getInterpolatedJointOrientation(JointAnimStack const *, matrix3 &, bool) const // 0x4BF252
{
    mangled_assert("?getInterpolatedJointOrientation@SobWithMesh@@QBE_NPBVJointAnimStack@@AAVmatrix3@@_N@Z");
    todo("implement");
}

void SobWithMesh::postRestore() // 0x4BFCB1
{
    mangled_assert("?postRestore@SobWithMesh@@UAEXXZ");
    todo("implement");
}

SobWithMesh::SobWithMesh(SobType, SaveGameData *) // 0x4BE003
{
    mangled_assert("??0SobWithMesh@@QAE@W4SobType@@PAVSaveGameData@@@Z");
    todo("implement");
}

void SobWithMesh::defaultSettings() // 0x4BF114
{
    mangled_assert("?defaultSettings@SobWithMesh@@QAEXXZ");
    todo("implement");
}

void SobWithMesh::initComponents() // 0x4BF977
{
    mangled_assert("?initComponents@SobWithMesh@@AAEXXZ");
    todo("implement");
}

void SobWithMesh::setMySobDieTime(float) // 0x4BFEA9
{
    mangled_assert("?setMySobDieTime@SobWithMesh@@QAEXM@Z");
    todo("implement");
}

bool SobWithMesh::updateTimeOfDeath(float) // 0x4BFFB6
{
    mangled_assert("?updateTimeOfDeath@SobWithMesh@@UAE_NM@Z");
    todo("implement");
}

void SobWithMesh::DrawAvoidanceBox(Collision::OBB const &, vector4 const &, vector4 const &) // 0x4BE388
{
    mangled_assert("?DrawAvoidanceBox@SobWithMesh@@AAEXABVOBB@Collision@@ABVvector4@@1@Z");
    todo("implement");
}

void SobWithMesh::ShowAvoidanceBox(Collision::OBB const &, vector3 const &, vector3 const &, float, vector4 const &, vector4 const &) // 0x4BE8E1
{
    mangled_assert("?ShowAvoidanceBox@SobWithMesh@@AAEXABVOBB@Collision@@ABVvector3@@1MABVvector4@@2@Z");
    todo("implement");
}

void SobWithMesh::ShowAvoidance() // 0x4BE636
{
    mangled_assert("?ShowAvoidance@SobWithMesh@@QAEXXZ");
    todo("implement");
}

void SobWithMesh::SetShowFormationAvoidance(bool enable) // 0x4BE61E
{
    mangled_assert("?SetShowFormationAvoidance@SobWithMesh@@SGX_N@Z");
    todo("implement");
}

void SobWithMesh::SetShowShipAvoidance(bool enable) // 0x4BE62A
{
    mangled_assert("?SetShowShipAvoidance@SobWithMesh@@SGX_N@Z");
    todo("implement");
}

bool SobWithMesh::update(float) // 0x4BFF49
{
    mangled_assert("?update@SobWithMesh@@UAE_NM@Z");
    todo("implement");
}

void SobWithMeshAnimationFinishedCallBack(SobWithMesh *ship, AnimatorMad *animator, AnimatorMad::CallbackEvent event) // 0x4BECE1
{
    mangled_assert("?SobWithMeshAnimationFinishedCallBack@@YGXPAVSobWithMesh@@PAVAnimatorMad@@W4CallbackEvent@2@@Z");
    todo("implement");
}

bool SobWithMesh::startAnimation(char *) // 0x4BFEBA
{
    mangled_assert("?startAnimation@SobWithMesh@@QAE_NPAD@Z");
    todo("implement");
}

void SobWithMesh::computeNlips(float) // 0x4BEE08
{
    mangled_assert("?computeNlips@SobWithMesh@@QAEXM@Z");
    todo("implement");
}

void SobWithMesh::computeSelTarg(Camera const *) // 0x4BEECE
{
    mangled_assert("?computeSelTarg@SobWithMesh@@UAEXPBVCamera@@@Z");
    todo("implement");
}

vector4 SobWithMesh::getHighlightColour() const // 0x4BF197
{
    mangled_assert("?getHighlightColour@SobWithMesh@@QBE?AVvector4@@XZ");
    todo("implement");
}

SobWithMesh::ViewStatus SobWithMesh::checkMeshInView(Camera const *, float *) const // 0x4BED04
{
    mangled_assert("?checkMeshInView@SobWithMesh@@QBE?AW4ViewStatus@1@PBVCamera@@PAM@Z");
    todo("implement");
}

void SobWithMesh::getRootTxfm(matrix4 &) const // 0x4BF8F5
{
    mangled_assert("?getRootTxfm@SobWithMesh@@QBEXAAVmatrix4@@@Z");
    todo("implement");
}

bool SobWithMesh::renderDot(Camera const *, vector4 const &, float) // 0x4BFD27
{
    mangled_assert("?renderDot@SobWithMesh@@QAE_NPBVCamera@@ABVvector4@@M@Z");
    todo("implement");
}

void SobWithMesh::renderStart(Camera const *, matrix4 &) // 0x4BFDEB
{
    mangled_assert("?renderStart@SobWithMesh@@QAEXPBVCamera@@AAVmatrix4@@@Z");
    todo("implement");
}

void SobWithMesh::renderMesh(Camera const *, matrix4 const &, MeshRenderProxy &, unsigned __int32 const, float const, float const, vector4 const &, __int32) // 0x4BFDAD
{
    mangled_assert("?renderMesh@SobWithMesh@@QAEXPBVCamera@@ABVmatrix4@@AAVMeshRenderProxy@@IMMABVvector4@@H@Z");
    todo("implement");
}

void SobWithMesh::renderEnd(Camera const *) // 0x4BFDAA
{
    mangled_assert("?renderEnd@SobWithMesh@@QAEXPBVCamera@@@Z");
    todo("implement");
}

void SobWithMesh::customRender(Camera const *, MeshRenderProxy &) // 0x4BEFF6
{
    mangled_assert("?customRender@SobWithMesh@@UAEXPBVCamera@@AAVMeshRenderProxy@@@Z");
    todo("implement");
}

void SobWithMesh::render(Camera const *, MeshRenderProxy &) // 0x4BFCD0
{
    mangled_assert("?render@SobWithMesh@@UAEXPBVCamera@@AAVMeshRenderProxy@@@Z");
    todo("implement");
}

TeamColour const &SobWithMesh::getTeamColour() const // 0x4BF94D
{
    mangled_assert("?getTeamColour@SobWithMesh@@QBEABVTeamColour@@XZ");
    todo("implement");
}

void SobWithMesh::updateJointTxfm() // 0x4BFFA8
{
    mangled_assert("?updateJointTxfm@SobWithMesh@@QAEXXZ");
    todo("implement");
}

wchar_t const *SobWithMesh::getPlayerName() const // 0x4BF87D
{
    mangled_assert("?getPlayerName@SobWithMesh@@QBEPB_WXZ");
    todo("implement");
}

void SobWithMesh::latchObject(SobWithMesh *, bool) // 0x4BFA87
{
    mangled_assert("?latchObject@SobWithMesh@@QAEXPAV1@_N@Z");
    todo("implement");
}

void SobWithMesh::moveLatchedObject(SobWithMesh *, vector3 const &) // 0x4BFCA0
{
    mangled_assert("?moveLatchedObject@SobWithMesh@@QAEXPAV1@ABVvector3@@@Z");
    todo("implement");
}

void SobWithMesh::latchObject(SobWithMesh *, vector3 const &, matrix3 const &, bool) // 0x4BFA5B
{
    mangled_assert("?latchObject@SobWithMesh@@QAEXPAV1@ABVvector3@@ABVmatrix3@@_N@Z");
    todo("implement");
}

void SobWithMesh::unLatchObject(SobWithMesh *) // 0x4BFF28
{
    mangled_assert("?unLatchObject@SobWithMesh@@QAEXPAV1@@Z");
    todo("implement");
}

Selection const &SobWithMesh::getAllLatchedObjects() const // 0x4BF138
{
    mangled_assert("?getAllLatchedObjects@SobWithMesh@@QBEABVSelection@@XZ");
    todo("implement");
}

unsigned __int32 SobWithMesh::getLOD(Camera const &) const // 0x4BF7B3
{
    mangled_assert("?getLOD@SobWithMesh@@QBEIABVCamera@@@Z");
    todo("implement");
}

bool SobWithMesh::isAlliedWith(Player const *) const // 0x4BFA20
{
    mangled_assert("?isAlliedWith@SobWithMesh@@QBE_NPBVPlayer@@@Z");
    todo("implement");
}

void SobWithMesh::makeDead(Sob::ReasonDied, unsigned __int32) // 0x4BFBE6
{
    mangled_assert("?makeDead@SobWithMesh@@UAEXW4ReasonDied@Sob@@I@Z");
    todo("implement");
}

void SobWithMesh::SetPreciseSelection() // 0x4BE46F
{
    mangled_assert("?SetPreciseSelection@SobWithMesh@@AAEXXZ");
    todo("implement");
}

bool SobWithMesh::restore(SaveGameData *) // 0x4BFE05
{
    mangled_assert("?restore@SobWithMesh@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool SobWithMesh::save(SaveGameData *, SaveType) // 0x4BFE52
{
    mangled_assert("?save@SobWithMesh@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

void SobWithMesh::saveMadState(void *objectPtr, SaveGameData *saveGameData, SaveType savetype) // 0x4BDF16
{
    mangled_assert("?saveMadState@SobWithMesh@@SGXPAXPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

void SobWithMesh::restoreMadState(void *objectPtr, SaveGameData *saveGameData) // 0x4BDF49
{
    mangled_assert("?restoreMadState@SobWithMesh@@SGXPAXPAVSaveGameData@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
