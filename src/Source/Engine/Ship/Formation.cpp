#if 0
/* ---------- headers */

#include "decomp.h"
#include <weaponstaticinfo.h>
#include <GunBinding.h>
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <weaponinfo.h>
#include <FormationCommands\FormationDockCommand.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <SOBGroupManager.h>
#include <playerresourcetype.h>
#include <OrderFeedback.h>
#include <FormationCommands\FormationAttackCommand.h>
#include <SquadronList.h>
#include <Ship\FormationPattern.h>
#include <TeamColourRegistry.h>
#include <Mathlib\matrix3.h>
#include <savegame.h>
#include <task.h>
#include <ship.h>
#include <stack>
#include <WeaponClassSpecificInfo.h>
#include <Mathlib\mathutil.h>
#include <SobRigidBodyStatic.h>
#include <SobWithMesh.h>
#include <SoundManager\SoundEntityHandle.h>
#include <SobWithMeshStatic.h>
#include <new>
#include <Ship\FlightManeuverManager.h>
#include <exception>
#include <xstddef>
#include <WeaponStatic.h>
#include <type_traits>
#include <FormationCommands\FormationLatchCommand.h>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <MeshAnimation.h>
#include <xutility>
#include <Collision\BVH\proxy.h>
#include <ShieldTypes.h>
#include <weapon.h>
#include <platform\timer.h>
#include <utility>
#include <iosfwd>
#include <Collision\intersect.h>
#include <WeaponFire\WeaponFire.h>
#include <platform\platformexports.h>
#include <vector>
#include <Collision\primitivesfwd.h>
#include <weaponfiretypes.h>
#include <fileio\bytestream.h>
#include <xmemory>
#include <random.h>
#include <Ship\FormationPathFinder.h>
#include <Subsystems\HardPointManager.h>
#include <Subsystems\HardPoint.h>
#include <Subsystems\HardPointStatic.h>
#include <Subsystems\SubSystemType.h>
#include <math.h>
#include <Interpolation.h>
#include <Collision\Collision.h>
#include <weaponTargetInfo.h>
#include <list>
#include <Collision\Primitives\aabb.h>
#include <Modifiers\ModifierAbility.h>
#include <Mathlib\vector3.h>
#include <shipstatic.h>
#include <Mathlib\vector4.h>
#include <commandtype.h>
#include <sobid.h>
#include <savestream.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <Ship\FormationPatternManager.h>
#include <abilities.h>
#include <Universe.h>
#include <Waypoint.h>
#include <Mathlib\vector2.h>
#include <SobUnmoveable.h>
#include <util\types.h>
#include <FormationCommands\FormationCommand.h>
#include <SobZeroMassBody.h>
#include <boost\cstdint.hpp>
#include <sobzeromassbodystatic.h>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <Tactics.h>
#include <seInterface2\SoundParams.h>
#include <Mathlib\quat.h>
#include <FormationCommands\FormationMoveCommand.h>
#include <ITweak.h>
#include <GameObj.h>
#include <ParadeCommand.h>
#include <HyperspaceManager.h>
#include <Parade.h>
#include <Collision\Primitives\capsule.h>
#include <hash_map>
#include <util\statmonitor.h>
#include <Collision\Primitives\segment.h>
#include <xhash>
#include <FormationCommands\FormationLaunchCommand.h>
#include <util\utilexports.h>
#include <Collision\BVH\profiling.h>
#include <Squadron.h>
#include <command.h>
#include <Ship\FormationController.h>
#include <Ship\AdvRigidBodyController.h>
#include <Physics\RigidBodyController.h>
#include <Modifiers\ModifierTargetCache.h>
#include <savegamedata.h>
#include <pathpoints.h>
#include <debug\db.h>
#include <deque>
#include <scripting.h>
#include <Ship\FormationTargetInfo.h>
#include <scriptaccess.h>
#include <scripttypedef.h>
#include <fixedpoint.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <util\fixed.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <dbdefines.h>
#include <selection.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <lua.h>
#include <UnitCaps\UnitCaps.h>
#include <savegamedef.h>
#include <MultiplierTypes.h>
#include <boost\detail\shared_count.hpp>
#include <Collision\BVH\bvh.h>
#include <Physics\RigidBody.h>
#include <boost\detail\lwm_win32.hpp>
#include <DynamicPoint.h>
#include <Physics\PhysicsObject.h>
#include <gameRandom.h>
#include <Ship\ShipController.h>
#include <Modifiers\ModifierUIInfo.h>
#include <Modifiers\ModifierMultiplier.h>
#include <Modifiers\ModifierEffect.h>
#include <Ship\Formation.h>
#include <SobRigidBody.h>
#include <wchar.h>
#include <sob.h>
#include <config.h>
#include <sobstatic.h>
#include <Modifiers\ModifierApplier.h>
#include <Collision\Primitives\sphere.h>
#include <queue>
#include <profile\profile.h>
#include <iostream>

/* ---------- constants */

/* ---------- definitions */

typedef std::vector<FormationPattern *,std::allocator<FormationPattern *> > FormationPatternVector;
typedef std::list<RigidBodyController *,std::allocator<RigidBodyController *> > RigidBodyControllerList;
typedef std::vector<ModifierEffect *,std::allocator<ModifierEffect *> > ModifierEffectVector;
typedef std::vector<ModifierUIInfo::ModifierUIEntry,std::allocator<ModifierUIInfo::ModifierUIEntry> > ModifierUIEntryVector;
typedef std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ShipStatic::spawnSalvage> > > spawnSalvageVectorConstIterator;
typedef std::vector<ShipStatic::spawnSalvage,std::allocator<ShipStatic::spawnSalvage> > spawnSalvageVector;
typedef std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ShipStatic::spawnDustCloud> > > spawnDustCloudVectorConstIterator;
typedef std::vector<ShipStatic::spawnDustCloud,std::allocator<ShipStatic::spawnDustCloud> > spawnDustCloudVector;
typedef std::vector<WeaponResult,std::allocator<WeaponResult> > WeaponResultList;
typedef std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,WeaponStatic *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,WeaponStatic *> > > weaponStaticMap;
typedef __int32 sctRef;
typedef __int32 sctObj;
typedef unsigned char SctIConfig;
typedef std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum ScriptTag const ,int> > > >,bool> _Pairib;
typedef std::list<WaypointPath *,std::allocator<WaypointPath *> > WaypointPathList;
typedef stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SOBGroup *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SOBGroup *> > > SobGroupMap;
typedef std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SOBGroup *> > > > const_local_iterator;
typedef std::less<SobID> value_compare;
typedef std::set<SobID,std::less<SobID>,std::allocator<SobID> > InhibitorSet;
typedef std::vector<std::map<int,unsigned int,std::less<int>,std::allocator<std::pair<int const ,unsigned int> > >,std::allocator<std::map<int,unsigned int,std::less<int>,std::allocator<std::pair<int const ,unsigned int> > > > > VectorRaceToUnitCaps;
typedef bool (*UniverseHideFilter)(Sob *);
typedef std::map<unsigned int,Squadron *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,Squadron *> > > SquadronIDMap;
typedef std::smallvector<FocusPoint *,4,std::allocator<FocusPoint *> > FocusPointContainer;
typedef std::list<WeaponFireEvent *,std::allocator<WeaponFireEvent *> > WeaponFireEventContainer;
typedef std::map<unsigned int,StrikeGroup *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,StrikeGroup *> > > StrikeGroupList;
typedef std::vector<SubtitleCounter *,std::allocator<SubtitleCounter *> > SubtitleCounterContainer;
typedef std::list<vector3,std::allocator<vector3> > Vector3List;
typedef unsigned long long uint64_t;
typedef unsigned __int32 uint32_t;
typedef std::map<Profile::FunctionInfo const *,Profile::Stats,std::less<Profile::FunctionInfo const *>,std::allocator<std::pair<Profile::FunctionInfo const * const,Profile::Stats> > > ChildrenMap;
typedef std::list<Profile::FunctionInfo *,std::allocator<Profile::FunctionInfo *> > FunctionList;
typedef std::smallvector<Sob *,4,std::allocator<Sob *> > SobList;
typedef std::pair<enum ScriptTag const ,int> &_Reftype;

/* ---------- prototypes */

/* ---------- globals */

extern SaveData const Formation::m_saveData[27]; // 0x7B2968
extern char const Formation::m_saveToken[10]; // 0x7B2CC8

/* ---------- private variables */

/* ---------- public code */

Formation::Formation(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, Selection const *, Squadron *) // 0x6557E7
{
    mangled_assert("??0Formation@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVSelection@@PAVSquadron@@@Z");
    todo("implement");
}

Formation::~Formation() // 0x655B87
{
    mangled_assert("??1Formation@@UAE@XZ");
    todo("implement");
}

_inline FormationTargetInfo &FormationTargetInfo::operator=(FormationTargetInfo const &) // 0x655C75
{
    mangled_assert("??4FormationTargetInfo@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

void Formation::RemoveAllSimData() // 0x656009
{
    mangled_assert("?RemoveAllSimData@Formation@@IAEXXZ");
    todo("implement");
}

void Formation::RemoveFromSimulation() // 0x65606A
{
    mangled_assert("?RemoveFromSimulation@Formation@@MAEXXZ");
    todo("implement");
}

bool Formation::addShip(Ship *) // 0x656141
{
    mangled_assert("?addShip@Formation@@QAE_NPAVShip@@@Z");
    todo("implement");
}

void Formation::removeShip(Ship *) // 0x6588C3
{
    mangled_assert("?removeShip@Formation@@QAEXPAVShip@@@Z");
    todo("implement");
}

bool Formation::addShips(Selection const &) // 0x656175
{
    mangled_assert("?addShips@Formation@@QAE_NABVSelection@@@Z");
    todo("implement");
}

void Formation::removeShips(Selection const &) // 0x6588CE
{
    mangled_assert("?removeShips@Formation@@QAEXABVSelection@@@Z");
    todo("implement");
}

void Formation::reinitialize(bool) // 0x6584D0
{
    mangled_assert("?reinitialize@Formation@@QAEX_N@Z");
    todo("implement");
}

void Formation::setShipsToInitialPositions() // 0x658E9C
{
    mangled_assert("?setShipsToInitialPositions@Formation@@QAEXXZ");
    todo("implement");
}

void Formation::setPattern(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, bool) // 0x658D37
{
    mangled_assert("?setPattern@Formation@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z");
    todo("implement");
}

void Formation::setPattern(FormationPattern *) // 0x658DC0
{
    mangled_assert("?setPattern@Formation@@QAEXPAVFormationPattern@@@Z");
    todo("implement");
}

void Formation::transformLocalFormationSlot(__int32, vector3 &) const // 0x65A07D
{
    mangled_assert("?transformLocalFormationSlot@Formation@@IBEXHAAVvector3@@@Z");
    todo("implement");
}

void Formation::transformFormationSlot(__int32, vector3 &, vector3 &, vector3 &) const // 0x6595E5
{
    mangled_assert("?transformFormationSlot@Formation@@IBEXHAAVvector3@@00@Z");
    todo("implement");
}

void Formation::updateShips(float) // 0x65A563
{
    mangled_assert("?updateShips@Formation@@IAEXM@Z");
    todo("implement");
}

void Formation::updateCommand(float) // 0x65A2C5
{
    mangled_assert("?updateCommand@Formation@@IAEXM@Z");
    todo("implement");
}

bool Formation::update(float) // 0x65A0FB
{
    mangled_assert("?update@Formation@@UAE_NM@Z");
    todo("implement");
}

void Formation::updateShipTargets() // 0x65A30B
{
    mangled_assert("?updateShipTargets@Formation@@IAEXXZ");
    todo("implement");
}

void Formation::circleStrafe(DynamicPoint const &, float, float, vector3 const &, bool, float) // 0x6561E5
{
    mangled_assert("?circleStrafe@Formation@@QAEXABVDynamicPoint@@MMABVvector3@@_NM@Z");
    todo("implement");
}

void Formation::enableCircleStrafing() // 0x656DBF
{
    mangled_assert("?enableCircleStrafing@Formation@@IAEXXZ");
    todo("implement");
}

void Formation::setupNewCircleStrafePoint() // 0x65914B
{
    mangled_assert("?setupNewCircleStrafePoint@Formation@@IAEXXZ");
    todo("implement");
}

void Formation::updateCircleStrafing() // 0x65A2A2
{
    mangled_assert("?updateCircleStrafing@Formation@@IAEXXZ");
    todo("implement");
}

void Formation::disableCircleStrafing() // 0x656730
{
    mangled_assert("?disableCircleStrafing@Formation@@IAEXXZ");
    todo("implement");
}

void Formation::flyTo(FormationTargetInfo const &) // 0x656FB5
{
    mangled_assert("?flyTo@Formation@@QAEXABVFormationTargetInfo@@@Z");
    todo("implement");
}

void Formation::doFlyTo(float) // 0x656738
{
    mangled_assert("?doFlyTo@Formation@@IAEXM@Z");
    todo("implement");
}

bool Formation::finishedPathAsFarAsItGoes(float) // 0x656EFE
{
    mangled_assert("?finishedPathAsFarAsItGoes@Formation@@QAE_NM@Z");
    todo("implement");
}

void Formation::determineProperties() // 0x656524
{
    mangled_assert("?determineProperties@Formation@@IAEXXZ");
    todo("implement");
}

bool Formation::finishedMovementGoals(bool, float, bool) // 0x656E0F
{
    mangled_assert("?finishedMovementGoals@Formation@@QAE_N_NM0@Z");
    todo("implement");
}

bool Formation::reachedGoal(bool, float) const // 0x65843C
{
    mangled_assert("?reachedGoal@Formation@@IBE_N_NM@Z");
    todo("implement");
}

bool Formation::matchedGoalRotation() const // 0x65803C
{
    mangled_assert("?matchedGoalRotation@Formation@@QBE_NXZ");
    todo("implement");
}

void Formation::stop() // 0x659504
{
    mangled_assert("?stop@Formation@@QAEXXZ");
    todo("implement");
}

Ship *Formation::getLeadShip() const // 0x6579AB
{
    mangled_assert("?getLeadShip@Formation@@QBEPAVShip@@XZ");
    todo("implement");
}

vector3 const &Formation::getLeadShipPosition() const // 0x6579DF
{
    mangled_assert("?getLeadShipPosition@Formation@@QBEABVvector3@@XZ");
    todo("implement");
}

void Formation::flushTarget() // 0x656F8D
{
    mangled_assert("?flushTarget@Formation@@QAEXXZ");
    todo("implement");
}

bool Formation::weaponsFiredLastTurn() const // 0x65A8DB
{
    mangled_assert("?weaponsFiredLastTurn@Formation@@QBE_NXZ");
    todo("implement");
}

void Formation::fireAtTarget(WeaponTargetInfo const &, Selection const &) // 0x656F5B
{
    mangled_assert("?fireAtTarget@Formation@@QAEXABVWeaponTargetInfo@@ABVSelection@@@Z");
    todo("implement");
}

void Formation::Attack(Sob *, Selection const &) // 0x655DF4
{
    mangled_assert("?Attack@Formation@@QAEXPAVSob@@ABVSelection@@@Z");
    todo("implement");
}

void Formation::Idle() // 0x655E9B
{
    mangled_assert("?Idle@Formation@@QAEXXZ");
    todo("implement");
}

void Formation::Move(FormationTargetInfo const &) // 0x655F6D
{
    mangled_assert("?Move@Formation@@QAEXABVFormationTargetInfo@@@Z");
    todo("implement");
}

void Formation::Dock(Ship *, unsigned __int32) // 0x655E46
{
    mangled_assert("?Dock@Formation@@QAEXPAVShip@@I@Z");
    todo("implement");
}

void Formation::Latch(SobID const &, vector3 const &, matrix3 const &, bool) // 0x655EBD
{
    mangled_assert("?Latch@Formation@@QAEXABVSobID@@ABVvector3@@ABVmatrix3@@_N@Z");
    todo("implement");
}

void Formation::Launch(Ship *, unsigned __int32) // 0x655F18
{
    mangled_assert("?Launch@Formation@@QAEXPAVShip@@I@Z");
    todo("implement");
}

float Formation::getFormationWidth() const // 0x6578B7
{
    mangled_assert("?getFormationWidth@Formation@@QBEMXZ");
    todo("implement");
}

void Formation::getExactFormationExtents(vector3 &, vector3 &) const // 0x657518
{
    mangled_assert("?getExactFormationExtents@Formation@@QBEXAAVvector3@@0@Z");
    todo("implement");
}

vector3 Formation::getFormationExtents() const // 0x6576CA
{
    mangled_assert("?getFormationExtents@Formation@@QBE?AVvector3@@XZ");
    todo("implement");
}

Formation::Formation(SaveGameData *) // 0x655A2D
{
    mangled_assert("??0Formation@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

_inline std::_List_buy<FormationTargetInfo,std::allocator<FormationTargetInfo> >::~_List_buy<FormationTargetInfo,std::allocator<FormationTargetInfo> >() // 0x655B6C
{
    mangled_assert("??1?$_List_buy@VFormationTargetInfo@@V?$allocator@VFormationTargetInfo@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

void Formation::defaultSettings() // 0x6564A3
{
    mangled_assert("?defaultSettings@Formation@@QAEXXZ");
    todo("implement");
}

void Formation::postRestore() // 0x6583EF
{
    mangled_assert("?postRestore@Formation@@UAEXXZ");
    todo("implement");
}

bool Formation::restore(SaveGameData *) // 0x658A1C
{
    mangled_assert("?restore@Formation@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool Formation::save(SaveGameData *, SaveType) // 0x658A69
{
    mangled_assert("?save@Formation@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

void Formation::saveFormationGoals(void *objectPtr, SaveGameData *saveGameData, SaveType savetype) // 0x6552F2
{
    mangled_assert("?saveFormationGoals@Formation@@KGXPAXPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

void Formation::restoreFormationGoals(void *objectPtr, SaveGameData *saveGameData) // 0x655342
{
    mangled_assert("?restoreFormationGoals@Formation@@KGXPAXPAVSaveGameData@@@Z");
    todo("implement");
}

void Formation::setPosition(vector3 const &) // 0x658E03
{
    mangled_assert("?setPosition@Formation@@UAEXABVvector3@@@Z");
    todo("implement");
}

void Formation::setCoordSys(quat const &) // 0x658B7B
{
    mangled_assert("?setCoordSys@Formation@@UAEXABVquat@@@Z");
    todo("implement");
}

void Formation::setCoordSys(matrix3 const &) // 0x658AB6
{
    mangled_assert("?setCoordSys@Formation@@UAEXABVmatrix3@@@Z");
    todo("implement");
}

void Formation::setTransform(vector3 const &, matrix3 const &) // 0x65902D
{
    mangled_assert("?setTransform@Formation@@UAEXABVvector3@@ABVmatrix3@@@Z");
    todo("implement");
}

void Formation::mirror(float) // 0x65811B
{
    mangled_assert("?mirror@Formation@@IAEXM@Z");
    todo("implement");
}

void Formation::updateSwayOffset(unsigned __int32) // 0x65A692
{
    mangled_assert("?updateSwayOffset@Formation@@IAEXI@Z");
    todo("implement");
}

vector3 Formation::getSwayOffset(unsigned __int32) const // 0x657AB9
{
    mangled_assert("?getSwayOffset@Formation@@IBE?AVvector3@@I@Z");
    todo("implement");
}

float Formation::getSwayRotateFactor(unsigned __int32) const // 0x657B79
{
    mangled_assert("?getSwayRotateFactor@Formation@@IBEMI@Z");
    todo("implement");
}

unsigned __int32 Formation::getShipPositionInFormation(Ship *) // 0x657A1D
{
    mangled_assert("?getShipPositionInFormation@Formation@@QAEIPAVShip@@@Z");
    todo("implement");
}

unsigned __int32 Formation::getNumberOfShipPositions() // 0x6579FD
{
    mangled_assert("?getNumberOfShipPositions@Formation@@QAEIXZ");
    todo("implement");
}

Ship *Formation::getShipAtPosition(unsigned __int32) // 0x657A0D
{
    mangled_assert("?getShipAtPosition@Formation@@QAEPAVShip@@I@Z");
    todo("implement");
}

void Formation::setMaxSpeed(float const) // 0x658CB9
{
    mangled_assert("?setMaxSpeed@Formation@@QAEXM@Z");
    todo("implement");
}

bool Formation::isCloseToPosition(vector3 const &, float) // 0x657C16
{
    mangled_assert("?isCloseToPosition@Formation@@QAE_NABVvector3@@M@Z");
    todo("implement");
}

void Formation::Notify_Insertion(Sob *) // 0x655FCC
{
    mangled_assert("?Notify_Insertion@Formation@@EAEXPAVSob@@@Z");
    // __shifted(Formation, 520);
    todo("implement");
}

void Formation::Notify_Removal(Sob *) // 0x655FCF
{
    mangled_assert("?Notify_Removal@Formation@@EAEXPAVSob@@@Z");
    // __shifted(Formation, 520);
    todo("implement");
}

Sob *Formation::getSobToNotAvoid() const // 0x657A95
{
    mangled_assert("?getSobToNotAvoid@Formation@@QBEPAVSob@@XZ");
    todo("implement");
}

Sob *Formation::getSobToNotCollideWith() const // 0x657AA7
{
    mangled_assert("?getSobToNotCollideWith@Formation@@QBEPAVSob@@XZ");
    todo("implement");
}

void Formation::reposition(bool) // 0x658904
{
    mangled_assert("?reposition@Formation@@QAEX_N@Z");
    todo("implement");
}

void Formation::performFlightManeuver(unsigned __int32) // 0x658329
{
    mangled_assert("?performFlightManeuver@Formation@@QAEXI@Z");
    todo("implement");
}

void Formation::performRandomFlightManeuver(std::vector<unsigned int,std::allocator<unsigned int> > const &) // 0x6583A0
{
    mangled_assert("?performRandomFlightManeuver@Formation@@IAEXABV?$vector@IV?$allocator@I@std@@@std@@@Z");
    todo("implement");
}

void Formation::setSleepingFlag(bool) // 0x658FE0
{
    mangled_assert("?setSleepingFlag@Formation@@UAEX_N@Z");
    todo("implement");
}

void Formation::matchAdditionalVelocityWith(Sob const *) // 0x657CAF
{
    mangled_assert("?matchAdditionalVelocityWith@Formation@@QAEXPBVSob@@@Z");
    todo("implement");
}

void Formation::latchShipsTo(Ship *, bool) // 0x657C6E
{
    mangled_assert("?latchShipsTo@Formation@@QAEXPAVShip@@_N@Z");
    todo("implement");
}

void Formation::moveLatchPoint(vector3 const &) // 0x6582B0
{
    mangled_assert("?moveLatchPoint@Formation@@QAEXABVvector3@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
