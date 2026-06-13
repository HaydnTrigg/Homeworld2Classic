#if 0
/* ---------- headers */

#include "decomp.h"
#include <Collision\Primitives\segment.h>
#include <platform\timer.h>
#include <Collision\BVH\profiling.h>
#include <weaponinfo.h>
#include <assist\stlexsmallvector.h>
#include <platform\platformexports.h>
#include <BuildManager.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <boost\shared_array.hpp>
#include <pch.h>
#include <SensorsBlobs.h>
#include <numeric>
#include <OrderFeedback.h>
#include <sob.h>
#include <SquadronList.h>
#include <sobstatic.h>
#include <ParadeCommand.h>
#include <Volume.h>
#include <Collision\Primitives\sphere.h>
#include <Mathlib\matrix3.h>
#include <commandtype.h>
#include <VolumeStatic.h>
#include <luaconfig\luaconfig.h>
#include <Family.h>
#include <SobUnmoveableStatic.h>
#include <Squadron.h>
#include <Modifiers\ModifierUIInfo.h>
#include <command.h>
#include <Modifiers\ModifierMultiplier.h>
#include <Camera\OrbitParameters.h>
#include <Modifiers\ModifierEffect.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <MeshAnimation.h>
#include <UserInterface\NewUIScreenManager.h>
#include <Collision\BVH\bvh.h>
#include <ShieldTypes.h>
#include <UserInterface\uitypes.h>
#include <Modifiers\ModifierApplier.h>
#include <platform\inputinterface.h>
#include <Universe.h>
#include <platform\keydefines.h>
#include <xutility>
#include <Waypoint.h>
#include <utility>
#include <iosfwd>
#include <SobUnmoveable.h>
#include <vector>
#include <Subsystems\Subsystem.h>
#include <xmemory>
#include <Player.h>
#include <Subsystems\HardPointManager.h>
#include <ResearchManager.h>
#include <Subsystems\SubsystemStatic.h>
#include <Subsystems\HardPoint.h>
#include <weaponstaticinfo.h>
#include <MetaSelTarg.h>
#include <Subsystems\HardPointStatic.h>
#include <GunBinding.h>
#include <Viewer.h>
#include <SelTarg.h>
#include <Subsystems\SubSystemType.h>
#include <DefenseFieldManager.h>
#include <math.h>
#include <CameraCommand.h>
#include <list>
#include <CameraHW.h>
#include <shipstatic.h>
#include <Camera\CameraOrbitTarget.h>
#include <config.h>
#include <Collision\Primitives\obb.h>
#include <Camera\Camera.h>
#include <Tactics.h>
#include <Camera\Frustum.h>
#include <Camera\Plane3.h>
#include <Mathlib\vector3.h>
#include <HyperspaceManager.h>
#include <Mathlib\vector4.h>
#include <FormHyperspaceGateCommand.h>
#include <WeaponClassSpecificInfo.h>
#include <map>
#include <xtree>
#include <boost\smart_ptr.hpp>
#include <boost\scoped_ptr.hpp>
#include <Modifiers\ModifierTargetCache.h>
#include <DynamicPoint.h>
#include <Sob\Resource\Resource.h>
#include <Sob\Resource\ResourceStatic.h>
#include <profile\profile.h>
#include <Mathlib\vector2.h>
#include <iostream>
#include <util\types.h>
#include <abilities.h>
#include <TeamColourRegistry.h>
#include <SoundManager\SoundManager.h>
#include <savegame.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <boost\cstdint.hpp>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <sobid.h>
#include <SobWithMeshStatic.h>
#include <ResourceGroupManager.h>
#include <ship.h>
#include <SobWithMesh.h>
#include <boost\scoped_array.hpp>
#include <SobRigidBody.h>
#include <CloakManager.h>
#include <dbdefines.h>
#include <Mathlib\quat.h>
#include <Collision\BVH\octree.h>
#include <SobRigidBodyStatic.h>
#include <UnitCaps\UnitCaps.h>
#include <Collision\BVH\span.h>
#include <HyperSpaceBaseCommand.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <Modifiers\ModifierAbility.h>
#include <Collision\primitivesfwd.h>
#include <alliance.h>
#include <Ping.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <seInterface2\PatchID.h>
#include <Interpolation.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <pathpoints.h>
#include <Collision\Primitives\aabb.h>
#include <debug\db.h>
#include <Parade.h>
#include <hash_map>
#include <xhash>
#include <seInterface2\SampleID.h>
#include <deque>
#include <seInterface2\SampleBase.h>
#include <fixedpoint.h>
#include <KeyBindings.h>
#include <util\fixed.h>
#include <playerresourcetype.h>
#include <scripting.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <scriptaccess.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <scripttypedef.h>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <bitset>
#include <SOBGroupManager.h>
#include <CaptureManager.h>
#include <lua.h>
#include <boost\detail\lwm_win32.hpp>
#include <MainUI.h>
#include <LatchPointManager.h>
#include <SoundManager\SoundEntityHandle.h>
#include <SensorsManager.h>
#include <Render\gl\r_types.h>
#include <Mathlib\matvec.h>
#include <Mathlib\mathutil.h>
#include <task.h>
#include <Render\gl\r_defines.h>
#include <stack>
#include <Render\gl\glext.h>
#include <Selector.h>
#include <prim.h>
#include <wchar.h>
#include <Race.h>
#include <DockCommand.h>
#include <region.h>
#include <queue>
#include <Collision\Primitives\capsule.h>
#include <seInterface2\sedefinesshared.h>

/* ---------- constants */

/* ---------- definitions */

typedef std::vector<Selector::SobWithPriority,std::allocator<Selector::SobWithPriority> > PrioritySobList;
typedef stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,Selection *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,Selection *> > > ResourceGroupMap;
typedef std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,Selection *> > > > ResourceGroupMapI;

/* ---------- prototypes */

extern __int32 CountMilitary(__int32 result, Selector::SobWithPriority swp);
extern bool selIsSobCurrentPlayers(Sob const *s);
extern bool selIsSobLatched(Sob const *s);
extern bool selIsSobControllableShip(Sob const *s);
extern bool selIsSobControllableSubSystem(Sob const *s);
extern bool selIsRetireableSubSystem(Sob const *s);
extern bool selIsSobSelectable(Sob const *s);
extern bool selIsSobSelected(Sob const *s);
extern bool selIsSobAttackable(Sob const *s);
extern bool selIsSobForceAttackable(Sob const *s);
extern bool selIsSobFocusable(Sob const *s);
extern bool selIsSobDamaged(Sob const *s);
extern bool selIsSobAResource(Sob const *s);
extern bool selIsSobHarvestable(Sob const *s);
extern bool selIsSobAShipNotMissile(Sob const *s);
extern bool selIsSobAWaypoint(Sob const *s);
extern bool selIsSobASubsystem(Sob const *s);
extern bool selIsSobNeutral(Sob const *s);
extern bool selIsSobEnemy(Sob const *s);
extern bool selIsSobAlly(Sob const *s);
extern bool selIsSobGuardable(Sob const *s);
extern bool selIsSobCapturable(Sob const *s);
extern bool selIsSobSalvageable(Sob const *s);
extern bool selCanSobScuttle(Sob const *s);
extern bool selShipCanDock(Sob const *s);
extern bool selIsSobReadyHyperspaceGate(Sob const *s);
extern bool selIsSobSingleHyperspaceGate(Sob const *s);
extern bool selIsVolumeName(Sob const *s, void *type);
extern bool selIsShipDamaged(Sob const *s, void *health);
extern bool selIsSobType(Sob const *s, void *sobType);
extern bool selShipIsCurrentAbility(Sob const *s, void *ability);
extern bool selShipIsCurrentlyAble(Sob const *s, void *ability);
extern bool selShipIsCurrentlyAbleExt(Sob const *s, void *abilities);
extern bool selIsSobInside(Sob const *s, void *volume);
extern bool selIsAttackFamily(Sob const *s, void *familyID);
extern bool selIsShipMilitary(Sob const *s);
extern bool selIsLatchRepairable(Sob const *s);
extern bool selCanCloakOrDeCloak(Sob const *s);
extern bool selCanUseDefenseField(Sob const *s);
extern void selectorRegisterTweaks();

_static float computeMouseDistanceFromCircle(vector2 const &mouse, Sob *pSob);

/* ---------- globals */

extern float selectorTwkMinSelectionCircleRadius; // 0x83D010
extern float selectorTwkSelectionAreaNeeded; // 0x83D00C

/* ---------- private variables */

_static
{
    extern float twkGroupMergeSize; // 0x83D008
    extern float const ViewerUpdateRate; // 0x7AF3BC
    extern float const ViewerUpdatePeriod; // 0x83D014
    extern float const CameraDistanceUpdateRate; // 0x7AF3C0
    extern float const CameraDistanceUpdatePeriod; // 0x83D018
}

/* ---------- public code */

_extern _sub_62FF36(MetaSelTarg *const, MetaSelTarg const &);
_inline MetaSelTarg::MetaSelTarg(MetaSelTarg const &) // 0x62FF36
{
    mangled_assert("??0MetaSelTarg@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_62FF36(this, arg);
}

_extern _sub_630003(Selector *const);
Selector::Selector() // 0x630003
{
    mangled_assert("??0Selector@@QAE@XZ");
    todo("implement");
    _sub_630003(this);
}

_extern MetaSelTarg &_sub_630084(MetaSelTarg *const, MetaSelTarg const &);
_inline MetaSelTarg &MetaSelTarg::operator=(MetaSelTarg const &) // 0x630084
{
    mangled_assert("??4MetaSelTarg@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    MetaSelTarg & __result = _sub_630084(this, arg);
    return __result;
}

_extern SelTarg &_sub_6300B1(SelTarg *const, SelTarg const &);
_inline SelTarg &SelTarg::operator=(SelTarg const &) // 0x6300B1
{
    mangled_assert("??4SelTarg@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    SelTarg & __result = _sub_6300B1(this, arg);
    return __result;
}

_extern void _sub_630FAA(Selector *const);
void Selector::clearAll() // 0x630FAA
{
    mangled_assert("?clearAll@Selector@@QAEXXZ");
    todo("implement");
    _sub_630FAA(this);
}

_extern void _sub_631089(Selector *const);
void Selector::clearSelected() // 0x631089
{
    mangled_assert("?clearSelected@Selector@@QAEXXZ");
    todo("implement");
    _sub_631089(this);
}

_extern void _sub_6310B6(Selector *const);
void Selector::clearSelectedUncontrollable() // 0x6310B6
{
    mangled_assert("?clearSelectedUncontrollable@Selector@@QAEXXZ");
    todo("implement");
    _sub_6310B6(this);
}

_extern void _sub_6310E9(Selector *const);
void Selector::clearSelecting() // 0x6310E9
{
    mangled_assert("?clearSelecting@Selector@@QAEXXZ");
    todo("implement");
    _sub_6310E9(this);
}

_extern void _sub_63105C(Selector *const);
void Selector::clearMouseOver() // 0x63105C
{
    mangled_assert("?clearMouseOver@Selector@@QAEXXZ");
    todo("implement");
    _sub_63105C(this);
}

_extern void _sub_630FC8(Selector *const, __int32);
void Selector::clearHotKeyGroup(__int32) // 0x630FC8
{
    mangled_assert("?clearHotKeyGroup@Selector@@QAEXH@Z");
    todo("implement");
    _sub_630FC8(this, arg);
}

_extern void _sub_630930(Selector *const, Selector::SelectionLists, Sob *);
void Selector::addToList(Selector::SelectionLists, Sob *) // 0x630930
{
    mangled_assert("?addToList@Selector@@AAEXW4SelectionLists@1@PAVSob@@@Z");
    todo("implement");
    _sub_630930(this, arg, arg);
}

_extern bool _sub_631FD8(Selector *const, Selector::SelectionLists, Sob *);
bool Selector::removeFromList(Selector::SelectionLists, Sob *) // 0x631FD8
{
    mangled_assert("?removeFromList@Selector@@AAE_NW4SelectionLists@1@PAVSob@@@Z");
    todo("implement");
    bool __result = _sub_631FD8(this, arg, arg);
    return __result;
}

_extern bool _sub_631274(Selector const *const, Selector::SelectionLists, Sob *);
bool Selector::findInList(Selector::SelectionLists, Sob *) const // 0x631274
{
    mangled_assert("?findInList@Selector@@ABE_NW4SelectionLists@1@PAVSob@@@Z");
    todo("implement");
    bool __result = _sub_631274(this, arg, arg);
    return __result;
}

_extern void _sub_63101E(Selector *const, Selector::SelectionLists);
void Selector::clearList(Selector::SelectionLists) // 0x63101E
{
    mangled_assert("?clearList@Selector@@AAEXW4SelectionLists@1@@Z");
    todo("implement");
    _sub_63101E(this, arg);
}

_extern void _sub_631116(Selector *const, Selector::SelectionLists);
void Selector::clearStats(Selector::SelectionLists) // 0x631116
{
    mangled_assert("?clearStats@Selector@@AAEXW4SelectionLists@1@@Z");
    todo("implement");
    _sub_631116(this, arg);
}

_extern void _sub_630A46(Selector *const, Sob *);
void Selector::addToSelecting(Sob *) // 0x630A46
{
    mangled_assert("?addToSelecting@Selector@@QAEXPAVSob@@@Z");
    todo("implement");
    _sub_630A46(this, arg);
}

_extern void _sub_6309DC(Selector *const, Sob *);
void Selector::addToSelected(Sob *) // 0x6309DC
{
    mangled_assert("?addToSelected@Selector@@QAEXPAVSob@@@Z");
    todo("implement");
    _sub_6309DC(this, arg);
}

_extern void _sub_6309B0(Selector *const, Selection const &);
void Selector::addToSelected(Selection const &) // 0x6309B0
{
    mangled_assert("?addToSelected@Selector@@QAEXABVSelection@@@Z");
    todo("implement");
    _sub_6309B0(this, arg);
}

_extern void _sub_6308B8(Selector *const, Selection::Observer *);
void Selector::addObserverToSelected(Selection::Observer *) // 0x6308B8
{
    mangled_assert("?addObserverToSelected@Selector@@QAEXPAVObserver@Selection@@@Z");
    todo("implement");
    _sub_6308B8(this, arg);
}

_extern void _sub_630A27(Selector *const, Sob *);
void Selector::addToSelectedUncontrollable(Sob *) // 0x630A27
{
    mangled_assert("?addToSelectedUncontrollable@Selector@@QAEXPAVSob@@@Z");
    todo("implement");
    _sub_630A27(this, arg);
}

_extern void _sub_6309FB(Selector *const, Selection const &);
void Selector::addToSelectedUncontrollable(Selection const &) // 0x6309FB
{
    mangled_assert("?addToSelectedUncontrollable@Selector@@QAEXABVSelection@@@Z");
    todo("implement");
    _sub_6309FB(this, arg);
}

_extern void _sub_6308BD(Selector *const, __int32, Selection const &);
void Selector::addToHotKeyGroup(__int32, Selection const &) // 0x6308BD
{
    mangled_assert("?addToHotKeyGroup@Selector@@QAEXHABVSelection@@@Z");
    todo("implement");
    _sub_6308BD(this, arg, arg);
}

_extern void _sub_6308ED(Selector *const, __int32, Sob *);
void Selector::addToHotKeyGroup(__int32, Sob *) // 0x6308ED
{
    mangled_assert("?addToHotKeyGroup@Selector@@QAEXHPAVSob@@@Z");
    todo("implement");
    _sub_6308ED(this, arg, arg);
}

_extern void _sub_6320B5(Selector *const, Sob *);
void Selector::removeFromSelected(Sob *) // 0x6320B5
{
    mangled_assert("?removeFromSelected@Selector@@QAEXPAVSob@@@Z");
    todo("implement");
    _sub_6320B5(this, arg);
}

_extern void _sub_632089(Selector *const, Selection const &);
void Selector::removeFromSelected(Selection const &) // 0x632089
{
    mangled_assert("?removeFromSelected@Selector@@QAEXABVSelection@@@Z");
    todo("implement");
    _sub_632089(this, arg);
}

_extern void _sub_63213E(Selector *const, Selection::Observer *);
void Selector::removeObserverFromSelected(Selection::Observer *) // 0x63213E
{
    mangled_assert("?removeObserverFromSelected@Selector@@QAEXPAVObserver@Selection@@@Z");
    todo("implement");
    _sub_63213E(this, arg);
}

_extern void _sub_631EDB(Selector *const, Selection const &);
void Selector::removeFromAllHotKeyGroups(Selection const &) // 0x631EDB
{
    mangled_assert("?removeFromAllHotKeyGroups@Selector@@QAEXABVSelection@@@Z");
    todo("implement");
    _sub_631EDB(this, arg);
}

_extern void _sub_631F21(Selector *const, Sob *);
void Selector::removeFromAllHotKeyGroups(Sob *) // 0x631F21
{
    mangled_assert("?removeFromAllHotKeyGroups@Selector@@QAEXPAVSob@@@Z");
    todo("implement");
    _sub_631F21(this, arg);
}

_extern void _sub_631F6E(Selector *const, __int32, Sob *);
void Selector::removeFromHotKeyGroup(__int32, Sob *) // 0x631F6E
{
    mangled_assert("?removeFromHotKeyGroup@Selector@@QAEXHPAVSob@@@Z");
    todo("implement");
    _sub_631F6E(this, arg, arg);
}

_extern void _sub_632D7F(Selector *const);
void Selector::setSelectedFlags() // 0x632D7F
{
    mangled_assert("?setSelectedFlags@Selector@@AAEXXZ");
    todo("implement");
    _sub_632D7F(this);
}

_extern void _sub_63183E(Selector *const);
void Selector::moveSelectingToSelected() // 0x63183E
{
    mangled_assert("?moveSelectingToSelected@Selector@@QAEXXZ");
    todo("implement");
    _sub_63183E(this);
}

_extern void _sub_63181C(Selector *const);
void Selector::moveMouseOverToSelected() // 0x63181C
{
    mangled_assert("?moveMouseOverToSelected@Selector@@QAEXXZ");
    todo("implement");
    _sub_63181C(this);
}

_extern void _sub_6318EE(Selector *const, Selection const &, Sob *);
void Selector::moveToSelected(Selection const &, Sob *) // 0x6318EE
{
    mangled_assert("?moveToSelected@Selector@@QAEXABVSelection@@PAVSob@@@Z");
    todo("implement");
    _sub_6318EE(this, arg, arg);
}

_extern void _sub_63194A(Selector *const, Sob *);
void Selector::moveToSelected(Sob *) // 0x63194A
{
    mangled_assert("?moveToSelected@Selector@@QAEXPAVSob@@@Z");
    todo("implement");
    _sub_63194A(this, arg);
}

_extern void _sub_63196F(Selector *const, Selection const &);
void Selector::moveToSelectedUncontrollable(Selection const &) // 0x63196F
{
    mangled_assert("?moveToSelectedUncontrollable@Selector@@QAEXABVSelection@@@Z");
    todo("implement");
    _sub_63196F(this, arg);
}

_extern void _sub_630888(Selector *const, Sob *);
void Selector::addMouseOverSob(Sob *) // 0x630888
{
    mangled_assert("?addMouseOverSob@Selector@@AAEXPAVSob@@@Z");
    todo("implement");
    _sub_630888(this, arg);
}

_extern void _sub_631860(Selector *const, Selection const &, Sob *);
void Selector::moveToMouseOver(Selection const &, Sob *) // 0x631860
{
    mangled_assert("?moveToMouseOver@Selector@@QAEXABVSelection@@PAVSob@@@Z");
    todo("implement");
    _sub_631860(this, arg, arg);
}

_extern void _sub_632CAC(Selector *const, __int32);
void Selector::selectHotKeyGroup(__int32) // 0x632CAC
{
    mangled_assert("?selectHotKeyGroup@Selector@@QAEXH@Z");
    todo("implement");
    _sub_632CAC(this, arg);
}

_extern Selection const &_sub_6315CC(Selector const *const);
Selection const &Selector::getSelected() const // 0x6315CC
{
    mangled_assert("?getSelected@Selector@@QBEABVSelection@@XZ");
    todo("implement");
    Selection const & __result = _sub_6315CC(this);
    return __result;
}

_extern Selection const &_sub_6315CF(Selector const *const);
Selection const &Selector::getSelectedUncontrollable() const // 0x6315CF
{
    mangled_assert("?getSelectedUncontrollable@Selector@@QBEABVSelection@@XZ");
    todo("implement");
    Selection const & __result = _sub_6315CF(this);
    return __result;
}

_extern Selection const &_sub_6315D6(Selector const *const);
Selection const &Selector::getSelecting() const // 0x6315D6
{
    mangled_assert("?getSelecting@Selector@@QBEABVSelection@@XZ");
    todo("implement");
    Selection const & __result = _sub_6315D6(this);
    return __result;
}

_extern Selection const &_sub_63159C(Selector const *const);
Selection const &Selector::getMouseOver() const // 0x63159C
{
    mangled_assert("?getMouseOver@Selector@@QBEABVSelection@@XZ");
    todo("implement");
    Selection const & __result = _sub_63159C(this);
    return __result;
}

_extern __int32 _sub_6315A0(Selector const *const);
__int32 Selector::getMouseOverNSquadrons() const // 0x6315A0
{
    mangled_assert("?getMouseOverNSquadrons@Selector@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_6315A0(this);
    return __result;
}

_extern Selection const &_sub_63157D(Selector const *const, __int32);
Selection const &Selector::getHotKeyGroup(__int32) const // 0x63157D
{
    mangled_assert("?getHotKeyGroup@Selector@@QBEABVSelection@@H@Z");
    todo("implement");
    Selection const & __result = _sub_63157D(this, arg);
    return __result;
}

_extern bool _sub_631776(Selector const *const, Selector::SelectionLists, Selector::StatsCategories);
bool Selector::isListOnly(Selector::SelectionLists, Selector::StatsCategories) const // 0x631776
{
    mangled_assert("?isListOnly@Selector@@ABE_NW4SelectionLists@1@W4StatsCategories@1@@Z");
    todo("implement");
    bool __result = _sub_631776(this, arg, arg);
    return __result;
}

_extern bool _sub_63172E(Selector const *const, Selector::SelectionLists, Selector::StatsCategories, Selector::StatsCategories);
bool Selector::isListEither(Selector::SelectionLists, Selector::StatsCategories, Selector::StatsCategories) const // 0x63172E
{
    mangled_assert("?isListEither@Selector@@ABE_NW4SelectionLists@1@W4StatsCategories@1@1@Z");
    todo("implement");
    bool __result = _sub_63172E(this, arg, arg, arg);
    return __result;
}

_extern void _sub_632DCC(Selector *const, Selector::SelectionLists);
void Selector::updateSquadCount(Selector::SelectionLists) // 0x632DCC
{
    mangled_assert("?updateSquadCount@Selector@@AAEXW4SelectionLists@1@@Z");
    todo("implement");
    _sub_632DCC(this, arg);
}

_extern bool _sub_6317DA(Selector const *const, Selector::StatsCategories);
bool Selector::isSelectedOnly(Selector::StatsCategories) const // 0x6317DA
{
    mangled_assert("?isSelectedOnly@Selector@@QBE_NW4StatsCategories@1@@Z");
    todo("implement");
    bool __result = _sub_6317DA(this, arg);
    return __result;
}

_extern bool _sub_6317C8(Selector const *const, Selector::StatsCategories, Selector::StatsCategories);
bool Selector::isSelectedEither(Selector::StatsCategories, Selector::StatsCategories) const // 0x6317C8
{
    mangled_assert("?isSelectedEither@Selector@@QBE_NW4StatsCategories@1@0@Z");
    todo("implement");
    bool __result = _sub_6317C8(this, arg, arg);
    return __result;
}

_extern bool _sub_6317BA(Selector const *const, Selector::StatsCategories);
bool Selector::isMouseOverOnly(Selector::StatsCategories) const // 0x6317BA
{
    mangled_assert("?isMouseOverOnly@Selector@@QBE_NW4StatsCategories@1@@Z");
    todo("implement");
    bool __result = _sub_6317BA(this, arg);
    return __result;
}

_extern bool _sub_63162A(Selector const *const, Sob *, unsigned __int32);
bool Selector::isBandBoxable(Sob *, unsigned __int32) const // 0x63162A
{
    mangled_assert("?isBandBoxable@Selector@@ABE_NPAVSob@@I@Z");
    todo("implement");
    bool __result = _sub_63162A(this, arg, arg);
    return __result;
}

_extern float _sub_631D39(Selector *const, PrimRectangle const &, unsigned __int32, Selector::PriorityModifiers const &, Selector::MixModifiers const &, std::vector<Selector::SobWithPriority,std::allocator<Selector::SobWithPriority> > &);
float Selector::rectDragMeta(PrimRectangle const &, unsigned __int32, Selector::PriorityModifiers const &, Selector::MixModifiers const &, std::vector<Selector::SobWithPriority,std::allocator<Selector::SobWithPriority> > &) // 0x631D39
{
    mangled_assert("?rectDragMeta@Selector@@AAEMABUPrimRectangle@@IABUPriorityModifiers@1@ABUMixModifiers@1@AAV?$vector@USobWithPriority@Selector@@V?$allocator@USobWithPriority@Selector@@@std@@@std@@@Z");
    todo("implement");
    float __result = _sub_631D39(this, arg, arg, arg, arg, arg);
    return __result;
}

_extern __int32 _sub_630270(__int32, Selector::SobWithPriority);
__int32 CountMilitary(__int32 result, Selector::SobWithPriority swp) // 0x630270
{
    mangled_assert("?CountMilitary@@YGHHUSobWithPriority@Selector@@@Z");
    todo("implement");
    __int32 __result = _sub_630270(result, swp);
    return __result;
}

_extern void _sub_631A17(Selector *const, Selection const &, PrimRectangle const &, unsigned __int32, Selector::PriorityModifiers const &, Selector::MixModifiers const &);
void Selector::rectDrag(Selection const &, PrimRectangle const &, unsigned __int32, Selector::PriorityModifiers const &, Selector::MixModifiers const &) // 0x631A17
{
    mangled_assert("?rectDrag@Selector@@QAEXABVSelection@@ABUPrimRectangle@@IABUPriorityModifiers@1@ABUMixModifiers@1@@Z");
    todo("implement");
    _sub_631A17(this, arg, arg, arg, arg, arg);
}

_extern void _sub_6320CE(Selector *const, Selector::SelectionLists);
void Selector::removeNonVisibleSob(Selector::SelectionLists) // 0x6320CE
{
    mangled_assert("?removeNonVisibleSob@Selector@@QAEXW4SelectionLists@1@@Z");
    todo("implement");
    _sub_6320CE(this, arg);
}

_extern MetaSelTarg *_sub_63147F(Selector *const, float, float);
MetaSelTarg *Selector::findMouseOverMeta(float, float) // 0x63147F
{
    mangled_assert("?findMouseOverMeta@Selector@@AAEPAVMetaSelTarg@@MM@Z");
    todo("implement");
    MetaSelTarg * __result = _sub_63147F(this, arg, arg);
    return __result;
}

_extern Selection const &_sub_6312AB(Selector *const, Selection const &, float, float);
Selection const &Selector::findMouseOverCandidates(Selection const &, float, float) // 0x6312AB
{
    mangled_assert("?findMouseOverCandidates@Selector@@QAEABVSelection@@ABV2@MM@Z");
    todo("implement");
    Selection const & __result = _sub_6312AB(this, arg, arg, arg);
    return __result;
}

_extern void _sub_630D68(Selector *const, Selector::PriorityModifiers const &, Selector::MixModifiers const &);
void Selector::chooseBestMouseOver(Selector::PriorityModifiers const &, Selector::MixModifiers const &) // 0x630D68
{
    mangled_assert("?chooseBestMouseOver@Selector@@QAEXABUPriorityModifiers@1@ABUMixModifiers@1@@Z");
    todo("implement");
    _sub_630D68(this, arg, arg);
}

_extern unsigned __int32 _sub_6315AE(Selector *const);
unsigned __int32 Selector::getNumMetaSelTarg() // 0x6315AE
{
    mangled_assert("?getNumMetaSelTarg@Selector@@QAEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_6315AE(this);
    return __result;
}

_extern MetaSelTarg *_sub_63158C(Selector *const, unsigned __int32);
MetaSelTarg *Selector::getMetaSelTarg(unsigned __int32) // 0x63158C
{
    mangled_assert("?getMetaSelTarg@Selector@@QAEPAVMetaSelTarg@@I@Z");
    todo("implement");
    MetaSelTarg * __result = _sub_63158C(this, arg);
    return __result;
}

_extern void _sub_631051(Selector *const);
void Selector::clearMetaSelTargs() // 0x631051
{
    mangled_assert("?clearMetaSelTargs@Selector@@AAEXXZ");
    todo("implement");
    _sub_631051(this);
}

_extern void _sub_630809(Selector *const, Selection const *, vector2 const &, float, float, unsigned __int32, unsigned __int32);
void Selector::addMetaSelTarg(Selection const *, vector2 const &, float, float, unsigned __int32, unsigned __int32) // 0x630809
{
    mangled_assert("?addMetaSelTarg@Selector@@QAEXPBVSelection@@ABVvector2@@MMII@Z");
    todo("implement");
    _sub_630809(this, arg, arg, arg, arg, arg, arg);
}

_extern void _sub_632DB8(Selector *const, Camera *, Selection const &, SensorsBlobArray *, bool);
void Selector::updateSelTargs(Camera *, Selection const &, SensorsBlobArray *, bool) // 0x632DB8
{
    mangled_assert("?updateSelTargs@Selector@@QAEXPAVCamera@@ABVSelection@@PAVSensorsBlobArray@@_N@Z");
    todo("implement");
    _sub_632DB8(this, arg, arg, arg, arg);
}

_extern void _sub_630B0B(Selector *const, Camera *, Selection const *);
void Selector::buildMetaSelTargs(Camera *, Selection const *) // 0x630B0B
{
    mangled_assert("?buildMetaSelTargs@Selector@@QAEXPAVCamera@@PBVSelection@@@Z");
    todo("implement");
    _sub_630B0B(this, arg, arg);
}

_extern void _sub_630C3F(Selector *const, Camera *, SensorsBlobArray *, bool);
void Selector::buildSelTargs(Camera *, SensorsBlobArray *, bool) // 0x630C3F
{
    mangled_assert("?buildSelTargs@Selector@@QAEXPAVCamera@@PAVSensorsBlobArray@@_N@Z");
    todo("implement");
    _sub_630C3F(this, arg, arg, arg);
}

_extern bool _sub_6326A6(Sob const *);
bool selIsSobCurrentPlayers(Sob const *s) // 0x6326A6
{
    mangled_assert("?selIsSobCurrentPlayers@@YG_NPBVSob@@@Z");
    todo("implement");
    bool __result = _sub_6326A6(s);
    return __result;
}

_extern bool _sub_6328AA(Sob const *);
bool selIsSobLatched(Sob const *s) // 0x6328AA
{
    mangled_assert("?selIsSobLatched@@YG_NPBVSob@@@Z");
    todo("implement");
    bool __result = _sub_6328AA(s);
    return __result;
}

_extern void _sub_632B93(Selector *const);
void Selector::selectAllShipsOnScreenOfType() // 0x632B93
{
    mangled_assert("?selectAllShipsOnScreenOfType@Selector@@QAEXXZ");
    todo("implement");
    _sub_632B93(this);
}

_extern bool _sub_63161C(Selector const *const, __int32);
bool Selector::hasHotKeyGroupChanged(__int32) const // 0x63161C
{
    mangled_assert("?hasHotKeyGroupChanged@Selector@@QBE_NH@Z");
    todo("implement");
    bool __result = _sub_63161C(this, arg);
    return __result;
}

_extern void _sub_63100F(Selector *const, __int32);
void Selector::clearHotKeyGroupChangedFlag(__int32) // 0x63100F
{
    mangled_assert("?clearHotKeyGroupChangedFlag@Selector@@QAEXH@Z");
    todo("implement");
    _sub_63100F(this, arg);
}

_extern _sub_62FFAE(Selector::PriorityModifiers *const);
Selector::PriorityModifiers::PriorityModifiers() // 0x62FFAE
{
    mangled_assert("??0PriorityModifiers@Selector@@QAE@XZ");
    todo("implement");
    _sub_62FFAE(this);
}

_extern _sub_62FFD6(SelTarg *const, SelTarg const &);
_inline SelTarg::SelTarg(SelTarg const &) // 0x62FFD6
{
    mangled_assert("??0SelTarg@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_62FFD6(this, arg);
}

_extern void _sub_6302D9(Selector::PriorityModifiers *const, LuaConfig &);
void Selector::PriorityModifiers::Parse(LuaConfig &) // 0x6302D9
{
    mangled_assert("?Parse@PriorityModifiers@Selector@@QAEXAAVLuaConfig@@@Z");
    todo("implement");
    _sub_6302D9(this, arg);
}

_extern float _sub_630172(Selector::PriorityModifiers const *const, Sob const *);
float Selector::PriorityModifiers::Apply(Sob const *) const // 0x630172
{
    mangled_assert("?Apply@PriorityModifiers@Selector@@QBEMPBVSob@@@Z");
    todo("implement");
    float __result = _sub_630172(this, arg);
    return __result;
}

_extern _sub_62FF90(Selector::MixModifiers *const);
Selector::MixModifiers::MixModifiers() // 0x62FF90
{
    mangled_assert("??0MixModifiers@Selector@@QAE@XZ");
    todo("implement");
    _sub_62FF90(this);
}

_extern void _sub_630291(Selector::MixModifiers *const, LuaConfig &);
void Selector::MixModifiers::Parse(LuaConfig &) // 0x630291
{
    mangled_assert("?Parse@MixModifiers@Selector@@QAEXAAVLuaConfig@@@Z");
    todo("implement");
    _sub_630291(this, arg);
}

_extern bool _sub_632624(Sob const *);
bool selIsSobControllableShip(Sob const *s) // 0x632624
{
    mangled_assert("?selIsSobControllableShip@@YG_NPBVSob@@@Z");
    todo("implement");
    bool __result = _sub_632624(s);
    return __result;
}

_extern bool _sub_632666(Sob const *);
bool selIsSobControllableSubSystem(Sob const *s) // 0x632666
{
    mangled_assert("?selIsSobControllableSubSystem@@YG_NPBVSob@@@Z");
    todo("implement");
    bool __result = _sub_632666(s);
    return __result;
}

_extern bool _sub_632348(Sob const *);
bool selIsRetireableSubSystem(Sob const *s) // 0x632348
{
    mangled_assert("?selIsRetireableSubSystem@@YG_NPBVSob@@@Z");
    todo("implement");
    bool __result = _sub_632348(s);
    return __result;
}

_extern bool _sub_632974(Sob const *);
bool selIsSobSelectable(Sob const *s) // 0x632974
{
    mangled_assert("?selIsSobSelectable@@YG_NPBVSob@@@Z");
    todo("implement");
    bool __result = _sub_632974(s);
    return __result;
}

_extern bool _sub_632A18(Sob const *);
bool selIsSobSelected(Sob const *s) // 0x632A18
{
    mangled_assert("?selIsSobSelected@@YG_NPBVSob@@@Z");
    todo("implement");
    bool __result = _sub_632A18(s);
    return __result;
}

_extern bool _sub_6324E9(Sob const *);
bool selIsSobAttackable(Sob const *s) // 0x6324E9
{
    mangled_assert("?selIsSobAttackable@@YG_NPBVSob@@@Z");
    todo("implement");
    bool __result = _sub_6324E9(s);
    return __result;
}

_extern bool _sub_6327D2(Sob const *);
bool selIsSobForceAttackable(Sob const *s) // 0x6327D2
{
    mangled_assert("?selIsSobForceAttackable@@YG_NPBVSob@@@Z");
    todo("implement");
    bool __result = _sub_6327D2(s);
    return __result;
}

_extern bool _sub_63277D(Sob const *);
bool selIsSobFocusable(Sob const *s) // 0x63277D
{
    mangled_assert("?selIsSobFocusable@@YG_NPBVSob@@@Z");
    todo("implement");
    bool __result = _sub_63277D(s);
    return __result;
}

_extern bool _sub_632700(Sob const *);
bool selIsSobDamaged(Sob const *s) // 0x632700
{
    mangled_assert("?selIsSobDamaged@@YG_NPBVSob@@@Z");
    todo("implement");
    bool __result = _sub_632700(s);
    return __result;
}

_extern bool _sub_632411(Sob const *);
bool selIsSobAResource(Sob const *s) // 0x632411
{
    mangled_assert("?selIsSobAResource@@YG_NPBVSob@@@Z");
    todo("implement");
    bool __result = _sub_632411(s);
    return __result;
}

_extern bool _sub_63286C(Sob const *);
bool selIsSobHarvestable(Sob const *s) // 0x63286C
{
    mangled_assert("?selIsSobHarvestable@@YG_NPBVSob@@@Z");
    todo("implement");
    bool __result = _sub_63286C(s);
    return __result;
}

_extern bool _sub_63242E(Sob const *);
bool selIsSobAShipNotMissile(Sob const *s) // 0x63242E
{
    mangled_assert("?selIsSobAShipNotMissile@@YG_NPBVSob@@@Z");
    todo("implement");
    bool __result = _sub_63242E(s);
    return __result;
}

_extern bool _sub_632453(Sob const *);
bool selIsSobAWaypoint(Sob const *s) // 0x632453
{
    mangled_assert("?selIsSobAWaypoint@@YG_NPBVSob@@@Z");
    todo("implement");
    bool __result = _sub_632453(s);
    return __result;
}

_extern bool _sub_632440(Sob const *);
bool selIsSobASubsystem(Sob const *s) // 0x632440
{
    mangled_assert("?selIsSobASubsystem@@YG_NPBVSob@@@Z");
    todo("implement");
    bool __result = _sub_632440(s);
    return __result;
}

_extern bool _sub_6328E6(Sob const *);
bool selIsSobNeutral(Sob const *s) // 0x6328E6
{
    mangled_assert("?selIsSobNeutral@@YG_NPBVSob@@@Z");
    todo("implement");
    bool __result = _sub_6328E6(s);
    return __result;
}

_extern bool _sub_632732(Sob const *);
bool selIsSobEnemy(Sob const *s) // 0x632732
{
    mangled_assert("?selIsSobEnemy@@YG_NPBVSob@@@Z");
    todo("implement");
    bool __result = _sub_632732(s);
    return __result;
}

_extern bool _sub_632466(Sob const *);
bool selIsSobAlly(Sob const *s) // 0x632466
{
    mangled_assert("?selIsSobAlly@@YG_NPBVSob@@@Z");
    todo("implement");
    bool __result = _sub_632466(s);
    return __result;
}

_extern bool _sub_632837(Sob const *);
bool selIsSobGuardable(Sob const *s) // 0x632837
{
    mangled_assert("?selIsSobGuardable@@YG_NPBVSob@@@Z");
    todo("implement");
    bool __result = _sub_632837(s);
    return __result;
}

_extern bool _sub_632562(Sob const *);
bool selIsSobCapturable(Sob const *s) // 0x632562
{
    mangled_assert("?selIsSobCapturable@@YG_NPBVSob@@@Z");
    todo("implement");
    bool __result = _sub_632562(s);
    return __result;
}

_extern bool _sub_632950(Sob const *);
bool selIsSobSalvageable(Sob const *s) // 0x632950
{
    mangled_assert("?selIsSobSalvageable@@YG_NPBVSob@@@Z");
    todo("implement");
    bool __result = _sub_632950(s);
    return __result;
}

_extern bool _sub_632238(Sob const *);
bool selCanSobScuttle(Sob const *s) // 0x632238
{
    mangled_assert("?selCanSobScuttle@@YG_NPBVSob@@@Z");
    todo("implement");
    bool __result = _sub_632238(s);
    return __result;
}

_extern bool _sub_632ABC(Sob const *);
bool selShipCanDock(Sob const *s) // 0x632ABC
{
    mangled_assert("?selShipCanDock@@YG_NPBVSob@@@Z");
    todo("implement");
    bool __result = _sub_632ABC(s);
    return __result;
}

_extern bool _sub_632917(Sob const *);
bool selIsSobReadyHyperspaceGate(Sob const *s) // 0x632917
{
    mangled_assert("?selIsSobReadyHyperspaceGate@@YG_NPBVSob@@@Z");
    todo("implement");
    bool __result = _sub_632917(s);
    return __result;
}

_extern bool _sub_632A24(Sob const *);
bool selIsSobSingleHyperspaceGate(Sob const *s) // 0x632A24
{
    mangled_assert("?selIsSobSingleHyperspaceGate@@YG_NPBVSob@@@Z");
    todo("implement");
    bool __result = _sub_632A24(s);
    return __result;
}

_extern bool _sub_632A89(Sob const *, void *);
bool selIsVolumeName(Sob const *s, void *type) // 0x632A89
{
    mangled_assert("?selIsVolumeName@@YG_NPBVSob@@PAX@Z");
    todo("implement");
    bool __result = _sub_632A89(s, type);
    return __result;
}

_extern bool _sub_6323B3(Sob const *, void *);
bool selIsShipDamaged(Sob const *s, void *health) // 0x6323B3
{
    mangled_assert("?selIsShipDamaged@@YG_NPBVSob@@PAX@Z");
    todo("implement");
    bool __result = _sub_6323B3(s, health);
    return __result;
}

_extern bool _sub_632A71(Sob const *, void *);
bool selIsSobType(Sob const *s, void *sobType) // 0x632A71
{
    mangled_assert("?selIsSobType@@YG_NPBVSob@@PAX@Z");
    todo("implement");
    bool __result = _sub_632A71(s, sobType);
    return __result;
}

_extern bool _sub_632B01(Sob const *, void *);
bool selShipIsCurrentAbility(Sob const *s, void *ability) // 0x632B01
{
    mangled_assert("?selShipIsCurrentAbility@@YG_NPBVSob@@PAX@Z");
    todo("implement");
    bool __result = _sub_632B01(s, ability);
    return __result;
}

_extern bool _sub_632B22(Sob const *, void *);
bool selShipIsCurrentlyAble(Sob const *s, void *ability) // 0x632B22
{
    mangled_assert("?selShipIsCurrentlyAble@@YG_NPBVSob@@PAX@Z");
    todo("implement");
    bool __result = _sub_632B22(s, ability);
    return __result;
}

_extern bool _sub_632B55(Sob const *, void *);
bool selShipIsCurrentlyAbleExt(Sob const *s, void *abilities) // 0x632B55
{
    mangled_assert("?selShipIsCurrentlyAbleExt@@YG_NPBVSob@@PAX@Z");
    todo("implement");
    bool __result = _sub_632B55(s, abilities);
    return __result;
}

_extern bool _sub_632894(Sob const *, void *);
bool selIsSobInside(Sob const *s, void *volume) // 0x632894
{
    mangled_assert("?selIsSobInside@@YG_NPBVSob@@PAX@Z");
    todo("implement");
    bool __result = _sub_632894(s, volume);
    return __result;
}

_extern bool _sub_6322F1(Sob const *, void *);
bool selIsAttackFamily(Sob const *s, void *familyID) // 0x6322F1
{
    mangled_assert("?selIsAttackFamily@@YG_NPBVSob@@PAX@Z");
    todo("implement");
    bool __result = _sub_6322F1(s, familyID);
    return __result;
}

_extern bool _sub_6323E4(Sob const *);
bool selIsShipMilitary(Sob const *s) // 0x6323E4
{
    mangled_assert("?selIsShipMilitary@@YG_NPBVSob@@@Z");
    todo("implement");
    bool __result = _sub_6323E4(s);
    return __result;
}

_extern bool _sub_63230E(Sob const *);
bool selIsLatchRepairable(Sob const *s) // 0x63230E
{
    mangled_assert("?selIsLatchRepairable@@YG_NPBVSob@@@Z");
    todo("implement");
    bool __result = _sub_63230E(s);
    return __result;
}

_extern bool _sub_6321E7(Sob const *);
bool selCanCloakOrDeCloak(Sob const *s) // 0x6321E7
{
    mangled_assert("?selCanCloakOrDeCloak@@YG_NPBVSob@@@Z");
    todo("implement");
    bool __result = _sub_6321E7(s);
    return __result;
}

_extern bool _sub_6322A0(Sob const *);
bool selCanUseDefenseField(Sob const *s) // 0x6322A0
{
    mangled_assert("?selCanUseDefenseField@@YG_NPBVSob@@@Z");
    todo("implement");
    bool __result = _sub_6322A0(s);
    return __result;
}

_extern void _sub_632CEC();
void selectorRegisterTweaks() // 0x632CEC
{
    mangled_assert("?selectorRegisterTweaks@@YGXXZ");
    todo("implement");
    _sub_632CEC();
}

/* ---------- private code */

_extern float _sub_631131(vector2 const &, Sob *);
_static float computeMouseDistanceFromCircle(vector2 const &mouse, Sob *pSob) // 0x631131
{
    mangled_assert("computeMouseDistanceFromCircle");
    todo("implement");
    float __result = _sub_631131(mouse, pSob);
    return __result;
}
#endif
