#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\callback.h>
#include <assist\stlexsmallvector.h>
#include <Render\gl\r_types.h>
#include <memory\memorysmall.h>
#include <xstring>
#include <Collision\Collision.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <GameEventDefs.h>
#include <pch.h>
#include <Render\objects\compiledtext.h>
#include <memory\memorylib.h>
#include <GameEventSys.h>
#include <TeamColourRegistry.h>
#include <Race.h>
#include <Render\FxGL\FXManager.h>
#include <savegame.h>
#include <Render\FxGL\VarMulti.h>
#include <task.h>
#include <ship.h>
#include <SOBGroupManager.h>
#include <ATITemplate.h>
#include <stack>
#include <ShieldTypes.h>
#include <hash_map>
#include <HyperspaceManager.h>
#include <ATI.h>
#include <xhash>
#include <SobWithMeshStatic.h>
#include <SimVis\RenderModelScars.h>
#include <Camera\Camera.h>
#include <Mathlib\matrix3.h>
#include <alliance.h>
#include <Camera\Frustum.h>
#include <Camera\Plane3.h>
#include <Subsystems\HardPointManager.h>
#include <BuildManager.h>
#include <SobRigidBodyStatic.h>
#include <new>
#include <exception>
#include <xstddef>
#include <BuildQueue.h>
#include <type_traits>
#include <MeshAnimation.h>
#include <BuildData.h>
#include <weaponinfo.h>
#include <DependencyData.h>
#include <SobZeroMassBody.h>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\octree.h>
#include <sobzeromassbodystatic.h>
#include <Collision\BVH\span.h>
#include <Render\gl\r_defines.h>
#include <xutility>
#include <Collision\BVH\Internal\span_i.h>
#include <Render\gl\glext.h>
#include <utility>
#include <iosfwd>
#include <Collision\BVH\proxy.h>
#include <vector>
#include <Collision\intersect.h>
#include <xmemory>
#include <Collision\primitivesfwd.h>
#include <debug\ctassert.h>
#include <dbdefines.h>
#include <UnitCaps\UnitCaps.h>
#include <weaponTargetInfo.h>
#include <Interpolation.h>
#include <list>
#include <Subsystems\SubsystemStatic.h>
#include <Subsystems\SubSystemType.h>
#include <gameRender.h>
#include <Modifiers\ModifierUIInfo.h>
#include <Collision\Primitives\aabb.h>
#include <Modifiers\ModifierMultiplier.h>
#include <Modifiers\ModifierEffect.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <ResearchManager.h>
#include <sobid.h>
#include <abilities.h>
#include <ShaderVariables.h>
#include <BattleScar\BattleScarStats.h>
#include <map>
#include <util\dictionary.h>
#include <BattleScar\BattleScarManager.h>
#include <xtree>
#include <util\utilexports.h>
#include <Decal\DecalManager.h>
#include <boost\scoped_ptr.hpp>
#include <Decal\VertexPool.h>
#include <Modifiers\ModifierApplier.h>
#include <Universe.h>
#include <Mathlib\vector2.h>
#include <Waypoint.h>
#include <SobUnmoveable.h>
#include <util\types.h>
#include <weaponstaticinfo.h>
#include <GunBinding.h>
#include <NavLights.h>
#include <SimVis\RenderModelVis.h>
#include <Render\objects\light.h>
#include <SimVis\SobVis.h>
#include <boost\cstdint.hpp>
#include <Render\objects\objects.h>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <luaconfig\luabinding.h>
#include <Render\objects\stateblock\stateblocktypes.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <luaconfig\luaconfig.h>
#include <seInterface2\SoundParams.h>
#include <lua.h>
#include <Mathlib\quat.h>
#include <Render\objects\core.h>
#include <config.h>
#include <WeaponClassSpecificInfo.h>
#include <Tactics.h>
#include <Collision\Primitives\capsule.h>
#include <Render\objects\stateblock\statevariableinstance.h>
#include <Collision\Primitives\segment.h>
#include <profile\profile.h>
#include <Collision\BVH\profiling.h>
#include <MADState.h>
#include <iostream>
#include <Render\objects\cliprect.h>
#include <playerresourcetype.h>
#include <HierarchyDynamic.h>
#include <Mathlib\mathlibdll.h>
#include <HierarchyStatic.h>
#include <Decal\DecalRefMesh.h>
#include <Mathlib\fastmath.h>
#include <Collision\Primitives\mesh.h>
#include <Collision\Primitives\triangle.h>
#include <savegameimpl.h>
#include <platform\timer.h>
#include <pathpoints.h>
#include <platform\platformexports.h>
#include <Mathlib\LinearInterp.h>
#include <SoundManager\SoundEntityHandle.h>
#include <debug\db.h>
#include <Subsystems\HardPoint.h>
#include <gameRenderDebug.h>
#include <Subsystems\HardPointStatic.h>
#include <fixedpoint.h>
#include <Render\objects\fontsystem.h>
#include <memory\memoryalloc.h>
#include <util\fixed.h>
#include <Render\objects\bitmapfont.h>
#include <Render\objects\mesh.h>
#include <deque>
#include <Render\objects\renderable.h>
#include <RenderAnim\MarkerInstance.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <ITweak.h>
#include <selection.h>
#include <platform\osdef.h>
#include <OrderFeedback.h>
#include <savegamedef.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <DynamicPoint.h>
#include <MultiplierTypes.h>
#include <boost\detail\shared_count.hpp>
#include <bitset>
#include <Collision\BVH\bvh.h>
#include <Modifiers\ModifierAbility.h>
#include <boost\detail\lwm_win32.hpp>
#include <WeaponStatic.h>
#include <App\Hw2Identify.h>
#include <renderer.h>
#include <UserInterface\UISoundManager.h>
#include <Player.h>
#include <Render\gl\types.h>
#include <SquadronList.h>
#include <Mathlib\matvec.h>
#include <Subsystems\Subsystem.h>
#include <weapon.h>
#include <SobWithMesh.h>
#include <wchar.h>
#include <WeaponFire\WeaponFire.h>
#include <string>
#include <SobRigidBody.h>
#include <Modifiers\ModifierTargetCache.h>
#include <weaponfiretypes.h>
#include <sob.h>
#include <Render\gl\lotypes.h>
#include <sobstatic.h>
#include <Render\objects\stateblock\stateblock.h>
#include <Collision\Primitives\sphere.h>
#include <Render\objects\texture.h>
#include <shipstatic.h>
#include <RenderAnim\RenderModelInstance.h>
#include <Render\objects\textureregistry.h>
#include <commandtype.h>
#include <RenderAnim\EffectAnimationList.h>
#include <RenderAnim\AnimEventContext.h>

/* ---------- constants */

enum `anonymous-namespace'::MeshInstanceCache
{
    MIC_FogColour = 0,
    MIC_Number,
};

/* ---------- definitions */

typedef `anonymous-namespace'::MeshInstanceCache ?A0x9fa343f9::MeshInstanceCache;

/* ---------- prototypes */


_static void InitializeMeshInstanceCache(MeshInstance *instance);

/* ---------- globals */

extern char const SubSystem::m_saveToken[0]; // 0x798F98
extern SaveData const SubSystem::m_saveData[6]; // 0x798FA8

/* ---------- private variables */

/* ---------- public code */

_extern _sub_4F034F(SubSystem *const, char const *, bool, Player *);
SubSystem::SubSystem(char const *, bool, Player *) // 0x4F034F
{
    mangled_assert("??0SubSystem@@QAE@PBD_NPAVPlayer@@@Z");
    todo("implement");
    _sub_4F034F(this, arg, arg, arg);
}

_extern void _sub_4F041E(GameEvent_SubSystemEvent *const);
_inline GameEvent_SubSystemEvent::~GameEvent_SubSystemEvent() // 0x4F041E
{
    mangled_assert("??1GameEvent_SubSystemEvent@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4F041E(this);
}

_extern _sub_4F02EF(SubSystem *const, SaveGameData *);
SubSystem::SubSystem(SaveGameData *) // 0x4F02EF
{
    mangled_assert("??0SubSystem@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_4F02EF(this, arg);
}

_extern void _sub_4F0425(SubSystem *const);
SubSystem::~SubSystem() // 0x4F0425
{
    mangled_assert("??1SubSystem@@UAE@XZ");
    todo("implement");
    _sub_4F0425(this);
}

_extern void _sub_4F0502(SubSystem *const);
void SubSystem::RemoveAllSimData() // 0x4F0502
{
    mangled_assert("?RemoveAllSimData@SubSystem@@IAEXXZ");
    todo("implement");
    _sub_4F0502(this);
}

_extern void _sub_4F0537(SubSystem *const);
void SubSystem::RemoveFromSimulation() // 0x4F0537
{
    mangled_assert("?RemoveFromSimulation@SubSystem@@MAEXXZ");
    todo("implement");
    _sub_4F0537(this);
}

_extern void _sub_4F04D8(SubSystem *const);
void SubSystem::Deploy() // 0x4F04D8
{
    mangled_assert("?Deploy@SubSystem@@QAEXXZ");
    todo("implement");
    _sub_4F04D8(this);
}

_extern void _sub_4F0547(SubSystem *const, bool);
void SubSystem::Retire(bool) // 0x4F0547
{
    mangled_assert("?Retire@SubSystem@@QAEX_N@Z");
    todo("implement");
    _sub_4F0547(this, arg);
}

_extern float _sub_4F0A9A(SubSystem *const);
float SubSystem::getActivity() // 0x4F0A9A
{
    mangled_assert("?getActivity@SubSystem@@QAEMXZ");
    todo("implement");
    float __result = _sub_4F0A9A(this);
    return __result;
}

_extern void _sub_4F05EE(SubSystem *const, SubSystem::SubSystemState);
void SubSystem::SetState(SubSystem::SubSystemState) // 0x4F05EE
{
    mangled_assert("?SetState@SubSystem@@IAEXW4SubSystemState@1@@Z");
    todo("implement");
    _sub_4F05EE(this, arg);
}

_extern void _sub_4F0697(SubSystem *const, AnimatorMad *, AnimatorMad::CallbackEvent);
void SubSystem::animationFinished(AnimatorMad *, AnimatorMad::CallbackEvent) // 0x4F0697
{
    mangled_assert("?animationFinished@SubSystem@@UAEXPAVAnimatorMad@@W4CallbackEvent@2@@Z");
    todo("implement");
    _sub_4F0697(this, arg, arg);
}

_extern void _sub_4F049A(SubSystem *const);
void SubSystem::BlowUp() // 0x4F049A
{
    mangled_assert("?BlowUp@SubSystem@@AAEXXZ");
    todo("implement");
    _sub_4F049A(this);
}

_extern bool _sub_4F1405(SubSystem *const, float);
bool SubSystem::update(float) // 0x4F1405
{
    mangled_assert("?update@SubSystem@@UAE_NM@Z");
    todo("implement");
    bool __result = _sub_4F1405(this, arg);
    return __result;
}

_extern void _sub_4F06DD(SubSystem *const);
void SubSystem::applyMultipliersAndAbilities() // 0x4F06DD
{
    mangled_assert("?applyMultipliersAndAbilities@SubSystem@@QAEXXZ");
    todo("implement");
    _sub_4F06DD(this);
}

_extern void _sub_4F1129(SubSystem *const);
void SubSystem::setupWeapons() // 0x4F1129
{
    mangled_assert("?setupWeapons@SubSystem@@IAEXXZ");
    todo("implement");
    _sub_4F1129(this);
}

_extern void _sub_4F0749(SubSystem *const);
void SubSystem::cleanUpWeapons() // 0x4F0749
{
    mangled_assert("?cleanUpWeapons@SubSystem@@IAEXXZ");
    todo("implement");
    _sub_4F0749(this);
}

_extern Weapon *_sub_4F0D27(SubSystem *const, __int32);
Weapon *SubSystem::getWeaponWithID(__int32) // 0x4F0D27
{
    mangled_assert("?getWeaponWithID@SubSystem@@QAEPAVWeapon@@H@Z");
    todo("implement");
    Weapon * __result = _sub_4F0D27(this, arg);
    return __result;
}

_extern float _sub_4F0B95(SubSystem const *const);
float SubSystem::getMinActiveWeaponRange() const // 0x4F0B95
{
    mangled_assert("?getMinActiveWeaponRange@SubSystem@@QBEMXZ");
    todo("implement");
    float __result = _sub_4F0B95(this);
    return __result;
}

_extern float _sub_4F0AEE(SubSystem const *const);
float SubSystem::getMaxActiveWeaponRange() const // 0x4F0AEE
{
    mangled_assert("?getMaxActiveWeaponRange@SubSystem@@QBEMXZ");
    todo("implement");
    float __result = _sub_4F0AEE(this);
    return __result;
}

_extern WeaponActivate _sub_4F0D15(SubSystem const *const);
WeaponActivate SubSystem::getWeaponActivation() const // 0x4F0D15
{
    mangled_assert("?getWeaponActivation@SubSystem@@QBE?AW4WeaponActivate@@XZ");
    todo("implement");
    WeaponActivate __result = _sub_4F0D15(this);
    return __result;
}

_extern unsigned __int32 _sub_4F0C10(SubSystem const *const, WeaponActivate);
unsigned __int32 SubSystem::getNumberOfWeaponsWithActivation(WeaponActivate) const // 0x4F0C10
{
    mangled_assert("?getNumberOfWeaponsWithActivation@SubSystem@@QBEIW4WeaponActivate@@@Z");
    todo("implement");
    unsigned __int32 __result = _sub_4F0C10(this, arg);
    return __result;
}

_extern float _sub_4F0CEC(SubSystem const *const);
float SubSystem::getWeaponAccuracy() const // 0x4F0CEC
{
    mangled_assert("?getWeaponAccuracy@SubSystem@@QBEMXZ");
    todo("implement");
    float __result = _sub_4F0CEC(this);
    return __result;
}

_extern void _sub_4F0974(SubSystem *const, vector3 const &, std::list<Sob *,std::allocator<Sob *> > &);
void SubSystem::fireDroppables(vector3 const &, std::list<Sob *,std::allocator<Sob *> > &) // 0x4F0974
{
    mangled_assert("?fireDroppables@SubSystem@@QAEXABVvector3@@AAV?$list@PAVSob@@V?$allocator@PAVSob@@@std@@@std@@@Z");
    todo("implement");
    _sub_4F0974(this, arg, arg);
}

_extern void _sub_4F0A69(SubSystem *const);
void SubSystem::flushWeaponTargets() // 0x4F0A69
{
    mangled_assert("?flushWeaponTargets@SubSystem@@QAEXXZ");
    todo("implement");
    _sub_4F0A69(this);
}

_extern void _sub_4F09E4(SubSystem *const, WeaponTargetInfo const &, Selection const &);
void SubSystem::fireWeaponsAtTarget(WeaponTargetInfo const &, Selection const &) // 0x4F09E4
{
    mangled_assert("?fireWeaponsAtTarget@SubSystem@@QAEXABVWeaponTargetInfo@@ABVSelection@@@Z");
    todo("implement");
    _sub_4F09E4(this, arg, arg);
}

_extern bool _sub_4F1568(SubSystem *const, float);
bool SubSystem::weaponUpdate(float) // 0x4F1568
{
    mangled_assert("?weaponUpdate@SubSystem@@QAE_NM@Z");
    todo("implement");
    bool __result = _sub_4F1568(this, arg);
    return __result;
}

_extern void _sub_4F0F38(SubSystem *const, Camera const *, matrix4 const &, MeshRenderProxy &, unsigned __int32 const, float const, float const, vector4 const &, __int32);
void SubSystem::render(Camera const *, matrix4 const &, MeshRenderProxy &, unsigned __int32 const, float const, float const, vector4 const &, __int32) // 0x4F0F38
{
    mangled_assert("?render@SubSystem@@QAEXPBVCamera@@ABVmatrix4@@AAVMeshRenderProxy@@IMMABVvector4@@H@Z");
    todo("implement");
    _sub_4F0F38(this, arg, arg, arg, arg, arg, arg, arg, arg);
}

_extern bool _sub_4F0D61(SubSystem const *const);
bool SubSystem::isMoving() const // 0x4F0D61
{
    mangled_assert("?isMoving@SubSystem@@MBE_NXZ");
    todo("implement");
    bool __result = _sub_4F0D61(this);
    return __result;
}

_extern bool _sub_4F0D96(SubSystem const *const);
bool SubSystem::isRotating() const // 0x4F0D96
{
    mangled_assert("?isRotating@SubSystem@@MBE_NXZ");
    todo("implement");
    bool __result = _sub_4F0D96(this);
    return __result;
}

_extern void _sub_4F154E(SubSystem *const, float);
void SubSystem::updateAnimations(float) // 0x4F154E
{
    mangled_assert("?updateAnimations@SubSystem@@QAEXM@Z");
    todo("implement");
    _sub_4F154E(this, arg);
}

_extern void _sub_4F121F(SubSystem *const, float, char const *, unsigned __int32, Sob::ReasonDied);
void SubSystem::takeDamage(float, char const *, unsigned __int32, Sob::ReasonDied) // 0x4F121F
{
    mangled_assert("?takeDamage@SubSystem@@UAEXMPBDIW4ReasonDied@Sob@@@Z");
    todo("implement");
    _sub_4F121F(this, arg, arg, arg, arg);
}

_extern void _sub_4F0F33(SubSystem *const);
void SubSystem::reloadStats() // 0x4F0F33
{
    mangled_assert("?reloadStats@SubSystem@@UAEXXZ");
    todo("implement");
    _sub_4F0F33(this);
}

_extern void _sub_4F07B4(SubSystem *const, OrderFeedbackValue const *, unsigned __int32);
void SubSystem::displayATI(OrderFeedbackValue const *, unsigned __int32) // 0x4F07B4
{
    mangled_assert("?displayATI@SubSystem@@QAEXPBUOrderFeedbackValue@@I@Z");
    todo("implement");
    _sub_4F07B4(this, arg, arg);
}

_extern void _sub_4F0DCB(SubSystem *const);
void SubSystem::onMouseEnter() // 0x4F0DCB
{
    mangled_assert("?onMouseEnter@SubSystem@@QAEXXZ");
    todo("implement");
    _sub_4F0DCB(this);
}

_extern void _sub_4F089E(SubSystem *const);
void SubSystem::displaySelecting() // 0x4F089E
{
    mangled_assert("?displaySelecting@SubSystem@@QAEXXZ");
    todo("implement");
    _sub_4F089E(this);
}

_extern Visibility *_sub_4F0CC2(SubSystem *const);
Visibility *SubSystem::getVisibility() // 0x4F0CC2
{
    mangled_assert("?getVisibility@SubSystem@@UAEPAVVisibility@@XZ");
    todo("implement");
    Visibility * __result = _sub_4F0CC2(this);
    return __result;
}

_extern void _sub_4F0798(SubSystem *const);
void SubSystem::defaultSettings() // 0x4F0798
{
    mangled_assert("?defaultSettings@SubSystem@@QAEXXZ");
    todo("implement");
    _sub_4F0798(this);
}

_extern void _sub_4F108F(SubSystem *const, HardPoint *);
void SubSystem::setHardPoint(HardPoint *) // 0x4F108F
{
    mangled_assert("?setHardPoint@SubSystem@@QAEXPAVHardPoint@@@Z");
    todo("implement");
    _sub_4F108F(this, arg);
}

_extern void _sub_4F0C84(SubSystem const *const, vector3 const &, vector3 &, vector3 &, float);
void SubSystem::getTargetOnSob(vector3 const &, vector3 &, vector3 &, float) const // 0x4F0C84
{
    mangled_assert("?getTargetOnSob@SubSystem@@UBEXABVvector3@@AAV2@1M@Z");
    todo("implement");
    _sub_4F0C84(this, arg, arg, arg, arg);
}

_extern float _sub_4F0C45(SubSystem const *const);
float SubSystem::getPerSecondDamageRating() const // 0x4F0C45
{
    mangled_assert("?getPerSecondDamageRating@SubSystem@@QBEMXZ");
    todo("implement");
    float __result = _sub_4F0C45(this);
    return __result;
}

_extern float _sub_4F0B5F(SubSystem const *const);
float SubSystem::getMaxHealth() const // 0x4F0B5F
{
    mangled_assert("?getMaxHealth@SubSystem@@UBEMXZ");
    todo("implement");
    float __result = _sub_4F0B5F(this);
    return __result;
}

_extern void _sub_4F10F6(SubSystem *const, Player *);
void SubSystem::setPlayerOwner(Player *) // 0x4F10F6
{
    mangled_assert("?setPlayerOwner@SubSystem@@UAEXPAVPlayer@@@Z");
    todo("implement");
    _sub_4F10F6(this, arg);
}

_extern void _sub_4F0DE3(SubSystem *const);
void SubSystem::postRestore() // 0x4F0DE3
{
    mangled_assert("?postRestore@SubSystem@@UAEXXZ");
    todo("implement");
    _sub_4F0DE3(this);
}

_extern bool _sub_4F0FF5(SubSystem *const, SaveGameData *);
bool SubSystem::restore(SaveGameData *) // 0x4F0FF5
{
    mangled_assert("?restore@SubSystem@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_4F0FF5(this, arg);
    return __result;
}

_extern bool _sub_4F1042(SubSystem *const, SaveGameData *, SaveType);
bool SubSystem::save(SaveGameData *, SaveType) // 0x4F1042
{
    mangled_assert("?save@SubSystem@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_4F1042(this, arg, arg);
    return __result;
}

/* ---------- private code */

_extern void _sub_4F04E0(MeshInstance *);
_static void InitializeMeshInstanceCache(MeshInstance *instance) // 0x4F04E0
{
    mangled_assert("InitializeMeshInstanceCache");
    todo("implement");
    _sub_4F04E0(instance);
}
#endif
