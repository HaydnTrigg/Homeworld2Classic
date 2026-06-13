#if 0
/* ---------- headers */

#include "decomp.h"
#include <set>
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <ParadeCommand.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <commandtype.h>
#include <boost\shared_array.hpp>
#include <pch.h>
#include <Interpolation.h>
#include <OrderFeedback.h>
#include <memory\memorylib.h>
#include <Mathlib\LinearInterp.h>
#include <BattleScar\BattleScarStats.h>
#include <Collision\Primitives\aabb.h>
#include <WeaponClassSpecificInfo.h>
#include <BattleScar\BattleScarManager.h>
#include <Collision\Primitives\obb.h>
#include <Decal\DecalManager.h>
#include <Decal\VertexPool.h>
#include <abilities.h>
#include <Mathlib\matrix3.h>
#include <seInterface2\SampleID.h>
#include <seInterface2\SampleBase.h>
#include <Camera\OrbitParameters.h>
#include <new>
#include <exception>
#include <SimVis\ShipVis.h>
#include <xstddef>
#include <SimVis\RenderModelVis.h>
#include <type_traits>
#include <SimVis\SobVis.h>
#include <SensorsManager.h>
#include <Render\gl\r_types.h>
#include <Mathlib\matvec.h>
#include <xutility>
#include <App\Hw2Identify.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <MainUI.h>
#include <debug\ctassert.h>
#include <SelTarg.h>
#include <Selector.h>
#include <Render\gl\r_defines.h>
#include <prim.h>
#include <MetaSelTarg.h>
#include <Render\gl\glext.h>
#include <luaconfig\luaconfig.h>
#include <lua.h>
#include <HyperspaceInhibitorManager.h>
#include <Modifiers\ModifierAbility.h>
#include <platform\timer.h>
#include <math.h>
#include <platform\platformexports.h>
#include <list>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <SOBGroupManager.h>
#include <seInterface2\sedefinesshared.h>
#include <Collision\BVH\profiling.h>
#include <DynamicPoint.h>
#include <Modifiers\ModifierTargetCache.h>
#include <Mathlib\vector3.h>
#include <Render\FxGL\FXManager.h>
#include <Mathlib\vector4.h>
#include <Render\FxGL\VarMulti.h>
#include <map>
#include <xtree>
#include <boost\smart_ptr.hpp>
#include <memory\memoryalloc.h>
#include <boost\scoped_ptr.hpp>
#include <sobid.h>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <RenderAnim\MarkerInstance.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <Tactics.h>
#include <Race.h>
#include <boost\cstdint.hpp>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <boost\scoped_array.hpp>
#include <fileio\filepath.h>
#include <Mathlib\quat.h>
#include <HyperSpaceBaseCommand.h>
#include <BuildManager.h>
#include <Volume.h>
#include <VolumeStatic.h>
#include <Ship\FormationTargetInfo.h>
#include <SobUnmoveableStatic.h>
#include <profile\profile.h>
#include <iostream>
#include <RenderAnim\RenderModelInstance.h>
#include <Parade.h>
#include <RenderAnim\EffectAnimationList.h>
#include <hash_map>
#include <RenderAnim\AnimEventContext.h>
#include <xhash>
#include <Mathlib\mathlibdll.h>
#include <assist\callback.h>
#include <weaponinfo.h>
#include <Mathlib\fastmath.h>
#include <memory\memorysmall.h>
#include <savegameimpl.h>
#include <savegamedata.h>
#include <pathpoints.h>
#include <EngineTrailSystem.h>
#include <playerresourcetype.h>
#include <debug\db.h>
#include <Universe.h>
#include <Waypoint.h>
#include <TeamColourRegistry.h>
#include <SobUnmoveable.h>
#include <savegame.h>
#include <Viewer.h>
#include <deque>
#include <task.h>
#include <stack>
#include <EffectCreate.h>
#include <Squadron.h>
#include <command.h>
#include <SobWithMeshStatic.h>
#include <SoundManager\SoundEntityHandle.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <ship.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <SobWithMesh.h>
#include <Modifiers\ModifierUIInfo.h>
#include <savegamedef.h>
#include <SobRigidBody.h>
#include <Modifiers\ModifierMultiplier.h>
#include <savestream.h>
#include <Player.h>
#include <sob.h>
#include <boost\detail\shared_count.hpp>
#include <Modifiers\ModifierEffect.h>
#include <ResearchManager.h>
#include <bitset>
#include <sobstatic.h>
#include <SobRigidBodyStatic.h>
#include <GameEventDefs.h>
#include <Collision\Primitives\sphere.h>
#include <boost\detail\lwm_win32.hpp>
#include <GameEventSys.h>
#include <SoundManager\SoundManager.h>
#include <Ship\Formation.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <MeshAnimation.h>
#include <Ship\FormationPattern.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <ShieldTypes.h>
#include <dbdefines.h>
#include <UnitCaps\UnitCaps.h>
#include <config.h>
#include <Modifiers\ModifierApplier.h>
#include <HyperspaceManager.h>
#include <Collision\BVH\octree.h>
#include <Subsystems\HardPointManager.h>
#include <ITweak.h>
#include <SquadronList.h>
#include <wchar.h>
#include <Collision\BVH\span.h>
#include <Subsystems\HardPoint.h>
#include <shipstatic.h>
#include <HyperSpaceCommand.h>
#include <Ping.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Subsystems\HardPointStatic.h>
#include <weaponstaticinfo.h>
#include <Collision\BVH\proxy.h>
#include <Subsystems\SubSystemType.h>
#include <GunBinding.h>
#include <Collision\intersect.h>
#include <queue>
#include <Collision\primitivesfwd.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */


_static float getTimeTillExit(Squadron &squadron);

/* ---------- globals */

extern char const HyperspaceManager::m_saveToken[18]; // 0x7AA9C0
extern SaveData const HyperspaceManager::m_saveData[2]; // 0x7AA9D8
extern HyperspaceEffectSettings *HyperspaceEffectSettings::m_instance; // 0x848878

/* ---------- private variables */

_static
{
    extern float const ViewerUpdateRate; // 0x7AA9B8
    extern float const ViewerUpdatePeriod; // 0x83C1B0
    extern float const CameraDistanceUpdateRate; // 0x7AA9BC
    extern float const CameraDistanceUpdatePeriod; // 0x83C1B4
    extern std::_Nil _Nil_obj; // 0x84887C
}

/* ---------- public code */

_extern bool _sub_5F9670(HyperspaceEffectSettings *const);
bool HyperspaceEffectSettings::LoadSettings() // 0x5F9670
{
    mangled_assert("?LoadSettings@HyperspaceEffectSettings@@AAE_NXZ");
    todo("implement");
    bool __result = _sub_5F9670(this);
    return __result;
}

_extern _sub_5F91FA(HyperspaceEffectSettings *const);
HyperspaceEffectSettings::HyperspaceEffectSettings() // 0x5F91FA
{
    mangled_assert("??0HyperspaceEffectSettings@@QAE@XZ");
    todo("implement");
    _sub_5F91FA(this);
}

_extern void _sub_5F982A();
void HyperspaceEffectSettings::Startup() // 0x5F982A
{
    mangled_assert("?Startup@HyperspaceEffectSettings@@SGXXZ");
    todo("implement");
    _sub_5F982A();
}

_extern void _sub_5F9812();
void HyperspaceEffectSettings::Shutdown() // 0x5F9812
{
    mangled_assert("?Shutdown@HyperspaceEffectSettings@@SGXXZ");
    todo("implement");
    _sub_5F9812();
}

_extern float _sub_5FA173(Selection const &, vector3 const &, vector3 const &);
float HyperspaceManager::costOfHyperspacingShips(Selection const &ships, vector3 const &startpoint, vector3 const &destination) // 0x5FA173
{
    mangled_assert("?costOfHyperspacingShips@HyperspaceManager@@SGMABVSelection@@ABVvector3@@1@Z");
    todo("implement");
    float __result = _sub_5FA173(ships, startpoint, destination);
    return __result;
}

_extern _sub_5F9352(HyperspaceManager *const);
HyperspaceManager::HyperspaceManager() // 0x5F9352
{
    mangled_assert("??0HyperspaceManager@@QAE@XZ");
    todo("implement");
    _sub_5F9352(this);
}

_extern void _sub_5F93DD(std::_List_buy<HyperspaceManager::HyperspaceGroup *,std::allocator<HyperspaceManager::HyperspaceGroup *> > *const);
_inline std::_List_buy<HyperspaceManager::HyperspaceGroup *,std::allocator<HyperspaceManager::HyperspaceGroup *> >::~_List_buy<HyperspaceManager::HyperspaceGroup *,std::allocator<HyperspaceManager::HyperspaceGroup *> >() // 0x5F93DD
{
    mangled_assert("??1?$_List_buy@PAVHyperspaceGroup@HyperspaceManager@@V?$allocator@PAVHyperspaceGroup@HyperspaceManager@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5F93DD(this);
}

_extern void _sub_5F940D(std::_Tree_buy<SobID,std::allocator<SobID> > *const);
_inline std::_Tree_buy<SobID,std::allocator<SobID> >::~_Tree_buy<SobID,std::allocator<SobID> >() // 0x5F940D
{
    mangled_assert("??1?$_Tree_buy@VSobID@@V?$allocator@VSobID@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5F940D(this);
}

_extern void _sub_5F9416(std::_Tree_comp<0,std::_Tset_traits<SobID,std::less<SobID>,std::allocator<SobID>,0> > *const);
_inline std::_Tree_comp<0,std::_Tset_traits<SobID,std::less<SobID>,std::allocator<SobID>,0> >::~_Tree_comp<0,std::_Tset_traits<SobID,std::less<SobID>,std::allocator<SobID>,0> >() // 0x5F9416
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tset_traits@VSobID@@U?$less@VSobID@@@std@@V?$allocator@VSobID@@@3@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5F9416(this);
}

_extern void _sub_5F9431(std::set<SobID,std::less<SobID>,std::allocator<SobID> > *const);
_inline std::set<SobID,std::less<SobID>,std::allocator<SobID> >::~set<SobID,std::less<SobID>,std::allocator<SobID> >() // 0x5F9431
{
    mangled_assert("??1?$set@VSobID@@U?$less@VSobID@@@std@@V?$allocator@VSobID@@@3@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5F9431(this);
}

_extern void _sub_5F9452(HyperspaceManager *const);
HyperspaceManager::~HyperspaceManager() // 0x5F9452
{
    mangled_assert("??1HyperspaceManager@@UAE@XZ");
    todo("implement");
    _sub_5F9452(this);
}

_extern void _sub_5FAD67(HyperspaceManager *const, float);
void HyperspaceManager::update(float) // 0x5FAD67
{
    mangled_assert("?update@HyperspaceManager@@QAEXM@Z");
    todo("implement");
    _sub_5FAD67(this, arg);
}

_extern void _sub_5FA94B(HyperspaceManager *const);
void HyperspaceManager::interpolateHyperspacingShips() // 0x5FA94B
{
    mangled_assert("?interpolateHyperspacingShips@HyperspaceManager@@QAEXXZ");
    todo("implement");
    _sub_5FA94B(this);
}

_extern bool _sub_5F9CEA(HyperspaceManager *const, Squadron const &);
bool HyperspaceManager::canHyperspace(Squadron const &) // 0x5F9CEA
{
    mangled_assert("?canHyperspace@HyperspaceManager@@QAE_NABVSquadron@@@Z");
    todo("implement");
    bool __result = _sub_5F9CEA(this, arg);
    return __result;
}

_extern bool _sub_5FA897(HyperspaceManager *const, Squadron &);
bool HyperspaceManager::hyperspaceSquadron(Squadron &) // 0x5FA897
{
    mangled_assert("?hyperspaceSquadron@HyperspaceManager@@IAE_NAAVSquadron@@@Z");
    todo("implement");
    bool __result = _sub_5FA897(this, arg);
    return __result;
}

_extern void _sub_5FA6EC(HyperspaceManager *const, Squadron &);
void HyperspaceManager::hyperspaceOffMap(Squadron &) // 0x5FA6EC
{
    mangled_assert("?hyperspaceOffMap@HyperspaceManager@@IAEXAAVSquadron@@@Z");
    todo("implement");
    _sub_5FA6EC(this, arg);
}

_extern void _sub_5FA75C(HyperspaceManager *const, Squadron &, float, bool);
void HyperspaceManager::hyperspaceSquadron(Squadron &, float, bool) // 0x5FA75C
{
    mangled_assert("?hyperspaceSquadron@HyperspaceManager@@AAEXAAVSquadron@@M_N@Z");
    todo("implement");
    _sub_5FA75C(this, arg, arg, arg);
}

_extern void _sub_5FA6FF(HyperspaceManager *const, Squadron &);
void HyperspaceManager::hyperspaceOnMap(Squadron &) // 0x5FA6FF
{
    mangled_assert("?hyperspaceOnMap@HyperspaceManager@@IAEXAAVSquadron@@@Z");
    todo("implement");
    _sub_5FA6FF(this, arg);
}

_extern void _sub_5FA258(HyperspaceManager *const, Squadron &);
void HyperspaceManager::dropOutOfHyperspace(Squadron &) // 0x5FA258
{
    mangled_assert("?dropOutOfHyperspace@HyperspaceManager@@IAEXAAVSquadron@@@Z");
    todo("implement");
    _sub_5FA258(this, arg);
}

_extern void _sub_5F9BBA(HyperspaceManager *const, Squadron &);
void HyperspaceManager::bringSquadronOutOfHyperspace(Squadron &) // 0x5F9BBA
{
    mangled_assert("?bringSquadronOutOfHyperspace@HyperspaceManager@@AAEXAAVSquadron@@@Z");
    todo("implement");
    _sub_5F9BBA(this, arg);
}

_extern unsigned __int32 _sub_5FA9B0(HyperspaceManager const *const);
unsigned __int32 HyperspaceManager::numberOfShipsInHyperspace() const // 0x5FA9B0
{
    mangled_assert("?numberOfShipsInHyperspace@HyperspaceManager@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_5FA9B0(this);
    return __result;
}

_extern _sub_5F921A(HyperspaceManager::HyperspaceGroup *const, float, bool, Squadron *);
HyperspaceManager::HyperspaceGroup::HyperspaceGroup(float, bool, Squadron *) // 0x5F921A
{
    mangled_assert("??0HyperspaceGroup@HyperspaceManager@@QAE@M_NPAVSquadron@@@Z");
    todo("implement");
    _sub_5F921A(this, arg, arg, arg);
}

_extern _sub_5F9312(HyperspaceManager::HyperspaceGroup *const, float, bool, Squadron *, vector3 const &);
HyperspaceManager::HyperspaceGroup::HyperspaceGroup(float, bool, Squadron *, vector3 const &) // 0x5F9312
{
    mangled_assert("??0HyperspaceGroup@HyperspaceManager@@QAE@M_NPAVSquadron@@ABVvector3@@@Z");
    todo("implement");
    _sub_5F9312(this, arg, arg, arg, arg);
}

_extern void _sub_5F9436(HyperspaceManager::HyperspaceGroup *const);
HyperspaceManager::HyperspaceGroup::~HyperspaceGroup() // 0x5F9436
{
    mangled_assert("??1HyperspaceGroup@HyperspaceManager@@QAE@XZ");
    todo("implement");
    _sub_5F9436(this);
}

_extern void _sub_5F97F1(HyperspaceManager::HyperspaceGroup *const, Sob *);
void HyperspaceManager::HyperspaceGroup::Notify_Insertion(Sob *) // 0x5F97F1
{
    mangled_assert("?Notify_Insertion@HyperspaceGroup@HyperspaceManager@@EAEXPAVSob@@@Z");
    todo("implement");
    _sub_5F97F1(this, arg);
}

_extern void _sub_5F97F4(HyperspaceManager::HyperspaceGroup *const, Sob *);
void HyperspaceManager::HyperspaceGroup::Notify_Removal(Sob *) // 0x5F97F4
{
    mangled_assert("?Notify_Removal@HyperspaceGroup@HyperspaceManager@@EAEXPAVSob@@@Z");
    todo("implement");
    _sub_5F97F4(this, arg);
}

_extern void _sub_5FAE77(HyperspaceManager::HyperspaceGroup *const);
void HyperspaceManager::HyperspaceGroup::updatePosition() // 0x5FAE77
{
    mangled_assert("?updatePosition@HyperspaceGroup@HyperspaceManager@@QAEXXZ");
    todo("implement");
    _sub_5FAE77(this);
}

_extern void _sub_5FAC53(HyperspaceManager::HyperspaceGroup *const, vector3 const &);
void HyperspaceManager::HyperspaceGroup::setPosition(vector3 const &) // 0x5FAC53
{
    mangled_assert("?setPosition@HyperspaceGroup@HyperspaceManager@@QAEXABVvector3@@@Z");
    todo("implement");
    _sub_5FAC53(this, arg);
}

_extern void _sub_5F9B43(HyperspaceManager *const, SobID const &);
void HyperspaceManager::addInhibitor(SobID const &) // 0x5F9B43
{
    mangled_assert("?addInhibitor@HyperspaceManager@@QAEXABVSobID@@@Z");
    todo("implement");
    _sub_5F9B43(this, arg);
}

_extern void _sub_5FAB8F(HyperspaceManager *const, SobID const &);
void HyperspaceManager::removeInhibitor(SobID const &) // 0x5FAB8F
{
    mangled_assert("?removeInhibitor@HyperspaceManager@@QAEXABVSobID@@@Z");
    todo("implement");
    _sub_5FAB8F(this, arg);
}

_extern void _sub_5FAD05(Squadron *);
void HyperspaceManager::stopHyperspaceEffectsFor(Squadron *squad) // 0x5FAD05
{
    mangled_assert("?stopHyperspaceEffectsFor@HyperspaceManager@@SGXPAVSquadron@@@Z");
    todo("implement");
    _sub_5FAD05(squad);
}

_extern void _sub_5FA9D1(Squadron *, bool const);
void HyperspaceManager::playHyperspaceEffectsFor(Squadron *squad, bool const entering) // 0x5FA9D1
{
    mangled_assert("?playHyperspaceEffectsFor@HyperspaceManager@@SGXPAVSquadron@@_N@Z");
    todo("implement");
    _sub_5FA9D1(squad, entering);
}

_extern bool _sub_5F9D34(HyperspaceManager *const, vector3 const &, vector3 const &, vector3 &, Player const *);
bool HyperspaceManager::canHyperspace(vector3 const &, vector3 const &, vector3 &, Player const *) // 0x5F9D34
{
    mangled_assert("?canHyperspace@HyperspaceManager@@QAE_NABVvector3@@0AAV2@PBVPlayer@@@Z");
    todo("implement");
    bool __result = _sub_5F9D34(this, arg, arg, arg, arg);
    return __result;
}

_extern void _sub_5FA919(HyperspaceManager::HyperspaceGroup *const);
void HyperspaceManager::HyperspaceGroup::interpolateHyperspacingShips() // 0x5FA919
{
    mangled_assert("?interpolateHyperspacingShips@HyperspaceGroup@HyperspaceManager@@QAEXXZ");
    todo("implement");
    _sub_5FA919(this);
}

_extern void _sub_5FAB80(HyperspaceManager *const);
void HyperspaceManager::postRestore() // 0x5FAB80
{
    mangled_assert("?postRestore@HyperspaceManager@@UAEXXZ");
    todo("implement");
    _sub_5FAB80(this);
}

_extern bool _sub_5FABBC(HyperspaceManager *const, SaveGameData *);
bool HyperspaceManager::restore(SaveGameData *) // 0x5FABBC
{
    mangled_assert("?restore@HyperspaceManager@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_5FABBC(this, arg);
    return __result;
}

_extern bool _sub_5FABFA(HyperspaceManager *const, SaveGameData *, SaveType);
bool HyperspaceManager::save(SaveGameData *, SaveType) // 0x5FABFA
{
    mangled_assert("?save@HyperspaceManager@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_5FABFA(this, arg, arg);
    return __result;
}

_extern void _sub_5F8944(void *, SaveGameData *, SaveType);
void HyperspaceManager::saveShipsInHyperspace(void *objectPtr, SaveGameData *saveGameData, SaveType savetype) // 0x5F8944
{
    mangled_assert("?saveShipsInHyperspace@HyperspaceManager@@SGXPAXPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    _sub_5F8944(objectPtr, saveGameData, savetype);
}

_extern void _sub_5F89CF(void *, SaveGameData *);
void HyperspaceManager::loadShipsInHyperspace(void *objectPtr, SaveGameData *saveGameData) // 0x5F89CF
{
    mangled_assert("?loadShipsInHyperspace@HyperspaceManager@@SGXPAXPAVSaveGameData@@@Z");
    todo("implement");
    _sub_5F89CF(objectPtr, saveGameData);
}

_extern void _sub_5F8AC7(void *, SaveGameData *, SaveType);
void HyperspaceManager::saveInhibitors(void *objectPtr, SaveGameData *saveGameData, SaveType savetype) // 0x5F8AC7
{
    mangled_assert("?saveInhibitors@HyperspaceManager@@SGXPAXPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    _sub_5F8AC7(objectPtr, saveGameData, savetype);
}

_extern void _sub_5F8B1E(void *, SaveGameData *);
void HyperspaceManager::loadInhibitors(void *objectPtr, SaveGameData *saveGameData) // 0x5F8B1E
{
    mangled_assert("?loadInhibitors@HyperspaceManager@@SGXPAXPAVSaveGameData@@@Z");
    todo("implement");
    _sub_5F8B1E(objectPtr, saveGameData);
}

/* ---------- private code */

_extern float _sub_5FA6BD(Squadron &);
_static float getTimeTillExit(Squadron &squadron) // 0x5FA6BD
{
    mangled_assert("getTimeTillExit");
    todo("implement");
    float __result = _sub_5FA6BD(squadron);
    return __result;
}
#endif
