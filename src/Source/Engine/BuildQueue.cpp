#if 0
/* ---------- headers */

#include "decomp.h"
#include <savegame.h>
#include <set>
#include <Collision\Primitives\aabb.h>
#include <assist\stlexsmallvector.h>
#include <task.h>
#include <stack>
#include <ParadeCommand.h>
#include <xstring>
#include <Parade.h>
#include <xmemory0>
#include <SobWithMeshStatic.h>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <memory\memorylib.h>
#include <sobid.h>
#include <ship.h>
#include <Squadron.h>
#include <SobWithMesh.h>
#include <command.h>
#include <SobRigidBody.h>
#include <weaponinfo.h>
#include <SobRigidBodyStatic.h>
#include <Race.h>
#include <MeshAnimation.h>
#include <Modifiers\ModifierTargetCache.h>
#include <Ship\FormationTargetInfo.h>
#include <Mathlib\matrix3.h>
#include <ShieldTypes.h>
#include <new>
#include <exception>
#include <xstddef>
#include <Subsystems\HardPointManager.h>
#include <BuildManager.h>
#include <type_traits>
#include <Subsystems\HardPoint.h>
#include <Subsystems\HardPointStatic.h>
#include <Subsystems\SubsystemStatic.h>
#include <Subsystems\SubSystemType.h>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <BuildJobType.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <seInterface2\SoundParams.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <shipHold.h>
#include <Collision\Primitives\capsule.h>
#include <fixedpoint.h>
#include <Collision\Primitives\segment.h>
#include <util\fixed.h>
#include <Modifiers\ModifierUIInfo.h>
#include <Collision\BVH\profiling.h>
#include <Modifiers\ModifierMultiplier.h>
#include <Modifiers\ModifierEffect.h>
#include <luaconfig\luabinding.h>
#include <dbdefines.h>
#include <Ping.h>
#include <list>
#include <luaconfig\luaconfig.h>
#include <UnitCaps\UnitCaps.h>
#include <lua.h>
#include <Ship\Formation.h>
#include <Ship\FormationPattern.h>
#include <SOBGroupManager.h>
#include <hash_map>
#include <config.h>
#include <Mathlib\vector3.h>
#include <xhash>
#include <Modifiers\ModifierApplier.h>
#include <Mathlib\vector4.h>
#include <profile\profile.h>
#include <iostream>
#include <map>
#include <Player.h>
#include <xtree>
#include <ResearchManager.h>
#include <boost\scoped_ptr.hpp>
#include <weaponstaticinfo.h>
#include <GunBinding.h>
#include <App\Hw2Identify.h>
#include <Mathlib\vector2.h>
#include <playerresourcetype.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <util\types.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <UIBuildJob.h>
#include <boost\cstdint.hpp>
#include <SoundManager\SoundEntityHandle.h>
#include <BuildQueueStatic.h>
#include <WeaponClassSpecificInfo.h>
#include <GameEventDefs.h>
#include <Universe.h>
#include <Mathlib\quat.h>
#include <Waypoint.h>
#include <SobUnmoveable.h>
#include <sob.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <HyperspaceManager.h>
#include <SquadronList.h>
#include <OrderFeedback.h>
#include <savegameimpl.h>
#include <savegamedata.h>
#include <pathpoints.h>
#include <debug\db.h>
#include <ITweak.h>
#include <savestream.h>
#include <GameEventSys.h>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <deque>
#include <Modifiers\ModifierAbility.h>
#include <SobFactory.h>
#include <shipstatic.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <commandtype.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <abilities.h>
#include <boost\detail\lwm_win32.hpp>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <BuildJob.h>
#include <FamilyListMgr.h>
#include <BuildQueue.h>
#include <FamilyList.h>
#include <BuildData.h>
#include <wchar.h>
#include <Family.h>
#include <string>
#include <DependencyData.h>
#include <queue>
#include <Tactics.h>
#include <DynamicPoint.h>
#include <algorithm>
#include <Interpolation.h>
#include <assist\stlexvector.h>
#include <TeamColourRegistry.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern bool moveJobToTop(unsigned __int32 buildJobID, std::list<BuildJob *,std::allocator<BuildJob *> > &list);
extern bool moveJobToTop(unsigned __int32 buildJobID, std::list<UIBuildJob *,std::allocator<UIBuildJob *> > &list);
extern std::_Vector_iterator<std::_Vector_val<std::_Simple_types<HardPoint *> > > findFittingHardpoint(std::_Vector_iterator<std::_Vector_val<std::_Simple_types<HardPoint *> > > begin, std::_Vector_iterator<std::_Vector_val<std::_Simple_types<HardPoint *> > > end, unsigned __int32 subSystemId);

/* ---------- globals */

extern char const BuildQueue::m_saveToken[0]; // 0x7A7918
extern SaveData const BuildQueue::m_saveData[7]; // 0x7A7928

/* ---------- private variables */

/* ---------- public code */

_extern _sub_5CE263(std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned int> > > *const, std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned int> > > const &);
_inline std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned int> > >::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned int> > >(std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned int> > > const &) // 0x5CE263
{
    mangled_assert("??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@I@std@@@std@@@std@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
    _sub_5CE263(this, arg);
}

_extern _sub_5CE285(std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned int> > > *const, std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned int> > > const &);
_inline std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned int> > >::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned int> > >(std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned int> > > const &) // 0x5CE285
{
    mangled_assert("??0?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@I@std@@@std@@@std@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
    _sub_5CE285(this, arg);
}

_extern _sub_5CE426(std::move_iterator<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned int> > > > *const, std::move_iterator<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned int> > > > const &);
_inline std::move_iterator<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned int> > > >::move_iterator<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned int> > > >(std::move_iterator<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned int> > > > const &) // 0x5CE426
{
    mangled_assert("??0?$move_iterator@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@I@std@@@std@@@std@@@std@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
    _sub_5CE426(this, arg);
}

_extern _sub_5CE4FF(BuildQueue *const, Ship *);
BuildQueue::BuildQueue(Ship *) // 0x5CE4FF
{
    mangled_assert("??0BuildQueue@@QAE@PAVShip@@@Z");
    todo("implement");
    _sub_5CE4FF(this, arg);
}

_extern void _sub_5CE6C1(std::_List_buy<BuildJob *,std::allocator<BuildJob *> > *const);
_inline std::_List_buy<BuildJob *,std::allocator<BuildJob *> >::~_List_buy<BuildJob *,std::allocator<BuildJob *> >() // 0x5CE6C1
{
    mangled_assert("??1?$_List_buy@PAVBuildJob@@V?$allocator@PAVBuildJob@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5CE6C1(this);
}

_extern void _sub_5CE6CA(std::_List_buy<UIBuildJob *,std::allocator<UIBuildJob *> > *const);
_inline std::_List_buy<UIBuildJob *,std::allocator<UIBuildJob *> >::~_List_buy<UIBuildJob *,std::allocator<UIBuildJob *> >() // 0x5CE6CA
{
    mangled_assert("??1?$_List_buy@PAVUIBuildJob@@V?$allocator@PAVUIBuildJob@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5CE6CA(this);
}

_extern void _sub_5CE6F7(std::move_iterator<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned int> > > > *const);
_inline std::move_iterator<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned int> > > >::~move_iterator<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned int> > > >() // 0x5CE6F7
{
    mangled_assert("??1?$move_iterator@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@I@std@@@std@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5CE6F7(this);
}

_extern void _sub_5CE6FD(BuildQueue *const);
BuildQueue::~BuildQueue() // 0x5CE6FD
{
    mangled_assert("??1BuildQueue@@UAE@XZ");
    todo("implement");
    _sub_5CE6FD(this);
}

_extern void _sub_5CE849(GameEvent_BuildAvailable *const);
_inline GameEvent_BuildAvailable::~GameEvent_BuildAvailable() // 0x5CE849
{
    mangled_assert("??1GameEvent_BuildAvailable@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5CE849(this);
}

_extern void _sub_5CE850(GameEvent_BuildSubSystemComplete *const);
_inline GameEvent_BuildSubSystemComplete::~GameEvent_BuildSubSystemComplete() // 0x5CE850
{
    mangled_assert("??1GameEvent_BuildSubSystemComplete@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5CE850(this);
}

_extern void _sub_5CE857(GameEvent_BuildUnitCancel *const);
_inline GameEvent_BuildUnitCancel::~GameEvent_BuildUnitCancel() // 0x5CE857
{
    mangled_assert("??1GameEvent_BuildUnitCancel@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5CE857(this);
}

_extern void _sub_5CE85E(GameEvent_BuildUnitComplete *const);
_inline GameEvent_BuildUnitComplete::~GameEvent_BuildUnitComplete() // 0x5CE85E
{
    mangled_assert("??1GameEvent_BuildUnitComplete@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5CE85E(this);
}

_extern void _sub_5CE865(GameEvent_BuildUnitStart *const);
_inline GameEvent_BuildUnitStart::~GameEvent_BuildUnitStart() // 0x5CE865
{
    mangled_assert("??1GameEvent_BuildUnitStart@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5CE865(this);
}

_extern void _sub_5CE86C(GameEvent_BuildUnitUnitCaps *const);
_inline GameEvent_BuildUnitUnitCaps::~GameEvent_BuildUnitUnitCaps() // 0x5CE86C
{
    mangled_assert("??1GameEvent_BuildUnitUnitCaps@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5CE86C(this);
}

_extern void _sub_5CE873(NDGameEvent_BuildingUnit *const);
_inline NDGameEvent_BuildingUnit::~NDGameEvent_BuildingUnit() // 0x5CE873
{
    mangled_assert("??1NDGameEvent_BuildingUnit@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5CE873(this);
}

_extern void _sub_5CEBEE(BuildQueue *const);
void BuildQueue::UpdateQueueForUnitCaps() // 0x5CEBEE
{
    mangled_assert("?UpdateQueueForUnitCaps@BuildQueue@@AAEXXZ");
    todo("implement");
    _sub_5CEBEE(this);
}

_extern void _sub_5CEDB6(BuildQueue *const);
void BuildQueue::UpdateUnitCapsForUI() // 0x5CEDB6
{
    mangled_assert("?UpdateUnitCapsForUI@BuildQueue@@AAEXXZ");
    todo("implement");
    _sub_5CEDB6(this);
}

_extern void _sub_5D0821(BuildQueue *const, float);
void BuildQueue::update(float) // 0x5D0821
{
    mangled_assert("?update@BuildQueue@@QAEXM@Z");
    todo("implement");
    _sub_5D0821(this, arg);
}

_extern BuildJob *_sub_5D000D(BuildQueue *const, unsigned __int32);
BuildJob *BuildQueue::getBuildJob(unsigned __int32) // 0x5D000D
{
    mangled_assert("?getBuildJob@BuildQueue@@QAEPAVBuildJob@@I@Z");
    todo("implement");
    BuildJob * __result = _sub_5D000D(this, arg);
    return __result;
}

_extern bool _sub_5CF53D(BuildQueue *const, unsigned __int32, bool, bool, UIBuildJob **, bool);
bool BuildQueue::addJobToBuildQueue(unsigned __int32, bool, bool, UIBuildJob **, bool) // 0x5CF53D
{
    mangled_assert("?addJobToBuildQueue@BuildQueue@@QAE_NI_N0PAPAVUIBuildJob@@0@Z");
    todo("implement");
    bool __result = _sub_5CF53D(this, arg, arg, arg, arg, arg);
    return __result;
}

_extern UIBuildJob *_sub_5CFBD1(BuildQueue *const, unsigned __int32);
UIBuildJob *BuildQueue::createUIBuildJobFor(unsigned __int32) // 0x5CFBD1
{
    mangled_assert("?createUIBuildJobFor@BuildQueue@@AAEPAVUIBuildJob@@I@Z");
    todo("implement");
    UIBuildJob * __result = _sub_5CFBD1(this, arg);
    return __result;
}

_extern BuildJob *_sub_5D00EE(BuildQueue *const, UIBuildJob *);
BuildJob *BuildQueue::initialiseUIBuildJob(UIBuildJob *) // 0x5D00EE
{
    mangled_assert("?initialiseUIBuildJob@BuildQueue@@AAEPAVBuildJob@@PAVUIBuildJob@@@Z");
    todo("implement");
    BuildJob * __result = _sub_5D00EE(this, arg);
    return __result;
}

_extern void _sub_5CF4CB(BuildQueue *const, BuildJob *);
void BuildQueue::actuallyAddNewJobToQueue(BuildJob *) // 0x5CF4CB
{
    mangled_assert("?actuallyAddNewJobToQueue@BuildQueue@@AAEXPAVBuildJob@@@Z");
    todo("implement");
    _sub_5CF4CB(this, arg);
}

_extern bool _sub_5CFA0C(BuildQueue *const, unsigned __int32, bool);
bool BuildQueue::cancelBuildJob(unsigned __int32, bool) // 0x5CFA0C
{
    mangled_assert("?cancelBuildJob@BuildQueue@@QAE_NI_N@Z");
    todo("implement");
    bool __result = _sub_5CFA0C(this, arg, arg);
    return __result;
}

_extern bool _sub_5D0274(unsigned __int32, std::list<BuildJob *,std::allocator<BuildJob *> > &);
bool moveJobToTop(unsigned __int32 buildJobID, std::list<BuildJob *,std::allocator<BuildJob *> > &list) // 0x5D0274
{
    mangled_assert("?moveJobToTop@@YG_NIAAV?$list@PAVBuildJob@@V?$allocator@PAVBuildJob@@@std@@@std@@@Z");
    todo("implement");
    bool __result = _sub_5D0274(buildJobID, list);
    return __result;
}

_extern bool _sub_5D02E1(unsigned __int32, std::list<UIBuildJob *,std::allocator<UIBuildJob *> > &);
bool moveJobToTop(unsigned __int32 buildJobID, std::list<UIBuildJob *,std::allocator<UIBuildJob *> > &list) // 0x5D02E1
{
    mangled_assert("?moveJobToTop@@YG_NIAAV?$list@PAVUIBuildJob@@V?$allocator@PAVUIBuildJob@@@std@@@std@@@Z");
    todo("implement");
    bool __result = _sub_5D02E1(buildJobID, list);
    return __result;
}

_extern bool _sub_5D034D(BuildQueue *const, unsigned __int32, bool);
bool BuildQueue::moveJobToTop(unsigned __int32, bool) // 0x5D034D
{
    mangled_assert("?moveJobToTop@BuildQueue@@QAE_NI_N@Z");
    todo("implement");
    bool __result = _sub_5D034D(this, arg, arg);
    return __result;
}

_extern std::_Vector_iterator<std::_Vector_val<std::_Simple_types<HardPoint *> > > _sub_5CFFCF(std::_Vector_iterator<std::_Vector_val<std::_Simple_types<HardPoint *> > >, std::_Vector_iterator<std::_Vector_val<std::_Simple_types<HardPoint *> > >, unsigned __int32);
std::_Vector_iterator<std::_Vector_val<std::_Simple_types<HardPoint *> > > findFittingHardpoint(std::_Vector_iterator<std::_Vector_val<std::_Simple_types<HardPoint *> > > begin, std::_Vector_iterator<std::_Vector_val<std::_Simple_types<HardPoint *> > > end, unsigned __int32 subSystemId) // 0x5CFFCF
{
    mangled_assert("?findFittingHardpoint@@YG?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PAVHardPoint@@@std@@@std@@@std@@V12@0I@Z");
    todo("implement");
    std::_Vector_iterator<std::_Vector_val<std::_Simple_types<HardPoint *> > > __result = _sub_5CFFCF(begin, end, subSystemId);
    return __result;
}

_extern bool _sub_5CF8B0(BuildQueue *const, unsigned __int32);
bool BuildQueue::canBuild(unsigned __int32) // 0x5CF8B0
{
    mangled_assert("?canBuild@BuildQueue@@QAE_NI@Z");
    todo("implement");
    bool __result = _sub_5CF8B0(this, arg);
    return __result;
}

_extern bool _sub_5CF8C2(BuildQueue *const, unsigned __int32);
bool BuildQueue::canBuildSubSystem(unsigned __int32) // 0x5CF8C2
{
    mangled_assert("?canBuildSubSystem@BuildQueue@@QAE_NI@Z");
    todo("implement");
    bool __result = _sub_5CF8C2(this, arg);
    return __result;
}

_extern void _sub_5CEBD9(BuildQueue *const);
void BuildQueue::ForceUpdateOfWhatJobsCanBeDone() // 0x5CEBD9
{
    mangled_assert("?ForceUpdateOfWhatJobsCanBeDone@BuildQueue@@QAEXXZ");
    todo("implement");
    _sub_5CEBD9(this);
}

_extern void _sub_5CEE08(BuildQueue *const);
void BuildQueue::UpdateWhatJobsCanBeDone() // 0x5CEE08
{
    mangled_assert("?UpdateWhatJobsCanBeDone@BuildQueue@@AAEXXZ");
    todo("implement");
    _sub_5CEE08(this);
}

_extern void _sub_5D06F9(BuildQueue *const, unsigned __int32);
void BuildQueue::restrictBuildableItem(unsigned __int32) // 0x5D06F9
{
    mangled_assert("?restrictBuildableItem@BuildQueue@@QAEXI@Z");
    todo("implement");
    _sub_5D06F9(this, arg);
}

_extern void _sub_5D07EF(BuildQueue *const, unsigned __int32);
void BuildQueue::unRestrictBuildableItem(unsigned __int32) // 0x5D07EF
{
    mangled_assert("?unRestrictBuildableItem@BuildQueue@@QAEXI@Z");
    todo("implement");
    _sub_5D07EF(this, arg);
}

_extern bool _sub_5D0149(BuildQueue *const, unsigned __int32);
bool BuildQueue::instantlyBuildSubSystem(unsigned __int32) // 0x5D0149
{
    mangled_assert("?instantlyBuildSubSystem@BuildQueue@@QAE_NI@Z");
    todo("implement");
    bool __result = _sub_5D0149(this, arg);
    return __result;
}

_extern bool _sub_5CEBB9(BuildQueue *const, BuildData *);
bool BuildQueue::CanBuildItemFamily(BuildData *) // 0x5CEBB9
{
    mangled_assert("?CanBuildItemFamily@BuildQueue@@AAE_NPAVBuildData@@@Z");
    todo("implement");
    bool __result = _sub_5CEBB9(this, arg);
    return __result;
}

_extern bool _sub_5CEB69(BuildQueue *const, unsigned __int32, bool, bool);
bool BuildQueue::CanBuildDisplayFamily(unsigned __int32, bool, bool) // 0x5CEB69
{
    mangled_assert("?CanBuildDisplayFamily@BuildQueue@@QAE_NI_N0@Z");
    todo("implement");
    bool __result = _sub_5CEB69(this, arg, arg, arg);
    return __result;
}

_extern void _sub_5D05FF(BuildQueue *const, BuildJobType *);
void BuildQueue::removeJobType(BuildJobType *) // 0x5D05FF
{
    mangled_assert("?removeJobType@BuildQueue@@AAEXPAVBuildJobType@@@Z");
    todo("implement");
    _sub_5D05FF(this, arg);
}

_extern void _sub_5CF6CB(BuildQueue *const, BuildData *);
void BuildQueue::addNewItemTypeToBuildQueue(BuildData *) // 0x5CF6CB
{
    mangled_assert("?addNewItemTypeToBuildQueue@BuildQueue@@AAEXPAVBuildData@@@Z");
    todo("implement");
    _sub_5CF6CB(this, arg);
}

_extern BuildJobType *_sub_5D0037(BuildQueue const *const, unsigned __int32);
BuildJobType *BuildQueue::getBuildableItemByBuildJobId(unsigned __int32) const // 0x5D0037
{
    mangled_assert("?getBuildableItemByBuildJobId@BuildQueue@@QBEPAVBuildJobType@@I@Z");
    todo("implement");
    BuildJobType * __result = _sub_5D0037(this, arg);
    return __result;
}

_extern BuildJobType *_sub_5D008C(BuildQueue const *const, unsigned __int32);
BuildJobType *BuildQueue::getBuildableItemByIndex(unsigned __int32) const // 0x5D008C
{
    mangled_assert("?getBuildableItemByIndex@BuildQueue@@QBEPAVBuildJobType@@I@Z");
    todo("implement");
    BuildJobType * __result = _sub_5D008C(this, arg);
    return __result;
}

_extern BuildJobType *_sub_5D00A9(BuildQueue const *const, unsigned __int32);
BuildJobType *BuildQueue::getBuildableItemByName(unsigned __int32) const // 0x5D00A9
{
    mangled_assert("?getBuildableItemByName@BuildQueue@@QBEPAVBuildJobType@@I@Z");
    todo("implement");
    BuildJobType * __result = _sub_5D00A9(this, arg);
    return __result;
}

_extern BuildJobType *_sub_5D005E(BuildQueue const *const, unsigned __int32);
BuildJobType *BuildQueue::getBuildableItemByGenericSubSystemTypeId(unsigned __int32) const // 0x5D005E
{
    mangled_assert("?getBuildableItemByGenericSubSystemTypeId@BuildQueue@@QBEPAVBuildJobType@@I@Z");
    todo("implement");
    BuildJobType * __result = _sub_5D005E(this, arg);
    return __result;
}

_extern bool _sub_5CEBDE(BuildQueue *const);
bool BuildQueue::UIJobTypesChangedSinceLastView() // 0x5CEBDE
{
    mangled_assert("?UIJobTypesChangedSinceLastView@BuildQueue@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_5CEBDE(this);
    return __result;
}

_extern void _sub_5CEB64(BuildQueue *const);
void BuildQueue::BuildJobTypesChanged() // 0x5CEB64
{
    mangled_assert("?BuildJobTypesChanged@BuildQueue@@AAEXXZ");
    todo("implement");
    _sub_5CEB64(this);
}

_extern bool _sub_5D01F7(BuildQueue const *const, BuildType);
bool BuildQueue::isBuilding(BuildType) const // 0x5D01F7
{
    mangled_assert("?isBuilding@BuildQueue@@QBE_NW4BuildType@@@Z");
    todo("implement");
    bool __result = _sub_5D01F7(this, arg);
    return __result;
}

_extern std::_List_iterator<std::_List_val<std::_List_simple_types<BuildJob *> > > _sub_5CF8D4(BuildQueue *const, std::_List_iterator<std::_List_val<std::_List_simple_types<BuildJob *> > >);
std::_List_iterator<std::_List_val<std::_List_simple_types<BuildJob *> > > BuildQueue::cancelBuildJob(std::_List_iterator<std::_List_val<std::_List_simple_types<BuildJob *> > >) // 0x5CF8D4
{
    mangled_assert("?cancelBuildJob@BuildQueue@@AAE?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@PAVBuildJob@@@std@@@std@@@std@@V23@@Z");
    todo("implement");
    std::_List_iterator<std::_List_val<std::_List_simple_types<BuildJob *> > > __result = _sub_5CF8D4(this, arg);
    return __result;
}

_extern void _sub_5CFAA4(BuildQueue *const, Player *);
void BuildQueue::changePlayerOwner(Player *) // 0x5CFAA4
{
    mangled_assert("?changePlayerOwner@BuildQueue@@QAEXPAVPlayer@@@Z");
    todo("implement");
    _sub_5CFAA4(this, arg);
}

_extern _sub_5CE466(BuildQueue *const, SaveGameData *);
BuildQueue::BuildQueue(SaveGameData *) // 0x5CE466
{
    mangled_assert("??0BuildQueue@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_5CE466(this, arg);
}

_extern void _sub_5CFC8C(BuildQueue *const);
void BuildQueue::defaultSettings() // 0x5CFC8C
{
    mangled_assert("?defaultSettings@BuildQueue@@QAEXXZ");
    todo("implement");
    _sub_5CFC8C(this);
}

_extern void _sub_5D0387(BuildQueue *const);
void BuildQueue::postRestore() // 0x5D0387
{
    mangled_assert("?postRestore@BuildQueue@@UAEXXZ");
    todo("implement");
    _sub_5D0387(this);
}

_extern bool _sub_5D06BB(BuildQueue *const, SaveGameData *);
bool BuildQueue::restore(SaveGameData *) // 0x5D06BB
{
    mangled_assert("?restore@BuildQueue@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_5D06BB(this, arg);
    return __result;
}

_extern bool _sub_5D072A(BuildQueue *const, SaveGameData *, SaveType);
bool BuildQueue::save(SaveGameData *, SaveType) // 0x5D072A
{
    mangled_assert("?save@BuildQueue@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_5D072A(this, arg, arg);
    return __result;
}

_extern void _sub_5CD317(void *, SaveGameData *, SaveType);
void BuildQueue::saveRestrictedList(void *objectPtr, SaveGameData *saveGameData, SaveType savetype) // 0x5CD317
{
    mangled_assert("?saveRestrictedList@BuildQueue@@SGXPAXPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    _sub_5CD317(objectPtr, saveGameData, savetype);
}

_extern void _sub_5CD358(void *, SaveGameData *);
void BuildQueue::loadRestrictedList(void *objectPtr, SaveGameData *saveGameData) // 0x5CD358
{
    mangled_assert("?loadRestrictedList@BuildQueue@@SGXPAXPAVSaveGameData@@@Z");
    todo("implement");
    _sub_5CD358(objectPtr, saveGameData);
}

/* ---------- private code */
#endif
