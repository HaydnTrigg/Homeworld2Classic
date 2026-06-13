#if 0
/* ---------- headers */

#include "decomp.h"
#include <Modifiers\ModifierEffect.h>
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <xmemory0>
#include <HyperspaceManager.h>
#include <pch.h>
#include <Modifiers\ModifierApplier.h>
#include <Mathlib\matrix3.h>
#include <weaponstaticinfo.h>
#include <GunBinding.h>
#include <boost\checked_delete.hpp>
#include <Universe.h>
#include <Waypoint.h>
#include <SobUnmoveable.h>
#include <new>
#include <sob.h>
#include <xstddef>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <type_traits>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <dbdefines.h>
#include <vector>
#include <fileio\bytestream.h>
#include <UnitCaps\UnitCaps.h>
#include <xmemory>
#include <Collision\BVH\octree.h>
#include <WeaponClassSpecificInfo.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <profile\profile.h>
#include <iostream>
#include <assist\zeroed.h>
#include <list>
#include <Stats\StatLoggingDump.h>
#include <assist\fixedstring.h>
#include <Interpolation.h>
#include <assist\stlexstring.h>
#include <savestream.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <Collision\Primitives\aabb.h>
#include <map>
#include <xtree>
#include <Collision\Primitives\obb.h>
#include <boost\scoped_ptr.hpp>
#include <Player.h>
#include <SquadronList.h>
#include <sobid.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <Modifiers\ModifierAbility.h>
#include <boost\cstdint.hpp>
#include <Mathlib\quat.h>
#include <SelTarg.h>
#include <Stats\StatLoggingInternal.h>
#include <prim.h>
#include <GameEventSys.h>
#include <Race.h>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <task.h>
#include <stack>
#include <Collision\Primitives\capsule.h>
#include <platform\timer.h>
#include <Collision\Primitives\segment.h>
#include <platform\platformexports.h>
#include <Collision\BVH\profiling.h>
#include <BuildManager.h>
#include <savegameimpl.h>
#include <savegamedata.h>
#include <pathpoints.h>
#include <debug\db.h>
#include <playerresourcetype.h>
#include <SOBGroupManager.h>
#include <seInterface2\PatchID.h>
#include <hash_map>
#include <seInterface2\PatchBase.h>
#include <xhash>
#include <seInterface2\SoundParams.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <sobtypes.h>
#include <fixedpoint.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <util\fixed.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <Subsystems\SubsystemStatic.h>
#include <SobWithMeshStatic.h>
#include <boost\detail\lwm_win32.hpp>
#include <SobRigidBodyStatic.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <App\Hw2Identify.h>
#include <ResearchManager.h>
#include <Stats\StatLogging.h>
#include <wchar.h>
#include <Subsystems\SubSystemType.h>
#include <Modifiers\ModifierUIInfo.h>
#include <Modifiers\ModifierMultiplier.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */


_static void getListOfStatics(std::list<SobStatic *,std::allocator<SobStatic *> > &subsystems, unsigned __int32 staticId);

/* ---------- globals */

extern SaveData const StatLogging::m_saveData[1]; // 0x79C7D8
extern char const StatLogging::m_saveToken[12]; // 0x79C7F8

/* ---------- private variables */

_static
{
    extern StatLogging *s_instance; // 0x844524
}

/* ---------- public code */

_extern _sub_50D830(StatLoggingInternal::BadgeInfo *const);
_inline StatLoggingInternal::BadgeInfo::BadgeInfo() // 0x50D830
{
    mangled_assert("??0BadgeInfo@StatLoggingInternal@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_50D830(this);
}

_extern _sub_50D836(StatLoggingInternal::PlayerStat *const, StatLoggingInternal::PlayerStat const &);
_inline StatLoggingInternal::PlayerStat::PlayerStat(StatLoggingInternal::PlayerStat const &) // 0x50D836
{
    mangled_assert("??0PlayerStat@StatLoggingInternal@@QAE@ABU01@@Z");
    compiler_generated();
    todo("implement");
    _sub_50D836(this, arg);
}

_extern _sub_50DA0D(StatLoggingInternal::PlayerStat *const);
_inline StatLoggingInternal::PlayerStat::PlayerStat() // 0x50DA0D
{
    mangled_assert("??0PlayerStat@StatLoggingInternal@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_50DA0D(this);
}

_extern _sub_50DAEB(StatLoggingInternal::ShipStat *const);
_inline StatLoggingInternal::ShipStat::ShipStat() // 0x50DAEB
{
    mangled_assert("??0ShipStat@StatLoggingInternal@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_50DAEB(this);
}

_extern _sub_50DB10(StatLogging *const);
StatLogging::StatLogging() // 0x50DB10
{
    mangled_assert("??0StatLogging@@AAE@XZ");
    todo("implement");
    _sub_50DB10(this);
}

_extern void _sub_50DB41(std::_List_buy<SobStatic *,std::allocator<SobStatic *> > *const);
_inline std::_List_buy<SobStatic *,std::allocator<SobStatic *> >::~_List_buy<SobStatic *,std::allocator<SobStatic *> >() // 0x50DB41
{
    mangled_assert("??1?$_List_buy@PAVSobStatic@@V?$allocator@PAVSobStatic@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_50DB41(this);
}

_extern void _sub_50DB6D(StatLoggingInternal::BadgeInfo *const);
_inline StatLoggingInternal::BadgeInfo::~BadgeInfo() // 0x50DB6D
{
    mangled_assert("??1BadgeInfo@StatLoggingInternal@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_50DB6D(this);
}

_extern void _sub_50DB6E(StatLoggingInternal::PlayerStat *const);
_inline StatLoggingInternal::PlayerStat::~PlayerStat() // 0x50DB6E
{
    mangled_assert("??1PlayerStat@StatLoggingInternal@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_50DB6E(this);
}

_extern void _sub_50DB79(StatLogging *const);
StatLogging::~StatLogging() // 0x50DB79
{
    mangled_assert("??1StatLogging@@EAE@XZ");
    todo("implement");
    _sub_50DB79(this);
}

_extern void _sub_50DBB6(SubSystemFinder *const);
_inline SubSystemFinder::~SubSystemFinder() // 0x50DBB6
{
    mangled_assert("??1SubSystemFinder@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_50DBB6(this);
}

_extern StatLoggingInternal::PlayerStat &_sub_50DCF8(StatLoggingInternal::PlayerStat *const, StatLoggingInternal::PlayerStat const &);
_inline StatLoggingInternal::PlayerStat &StatLoggingInternal::PlayerStat::operator=(StatLoggingInternal::PlayerStat const &) // 0x50DCF8
{
    mangled_assert("??4PlayerStat@StatLoggingInternal@@QAEAAU01@ABU01@@Z");
    compiler_generated();
    todo("implement");
    StatLoggingInternal::PlayerStat & __result = _sub_50DCF8(this, arg);
    return __result;
}

_extern StatLogging *_sub_50E22D();
StatLogging *StatLogging::Instance() // 0x50E22D
{
    mangled_assert("?Instance@StatLogging@@SGPAV1@XZ");
    todo("implement");
    StatLogging * __result = _sub_50E22D();
    return __result;
}

_extern bool _sub_50E20B();
bool StatLogging::Initialize() // 0x50E20B
{
    mangled_assert("?Initialize@StatLogging@@SG_NXZ");
    todo("implement");
    bool __result = _sub_50E20B();
    return __result;
}

_extern bool _sub_50E8B1();
bool StatLogging::Shutdown() // 0x50E8B1
{
    mangled_assert("?Shutdown@StatLogging@@SG_NXZ");
    todo("implement");
    bool __result = _sub_50E8B1();
    return __result;
}

_extern void _sub_50E393(StatLogging *const, Universe const *);
void StatLogging::RecordStart(Universe const *) // 0x50E393
{
    mangled_assert("?RecordStart@StatLogging@@QAEXPBVUniverse@@@Z");
    todo("implement");
    _sub_50E393(this, arg);
}

_extern void _sub_50E42D(StatLogging *const, Universe const *);
void StatLogging::RecordStop(Universe const *) // 0x50E42D
{
    mangled_assert("?RecordStop@StatLogging@@QAEXPBVUniverse@@@Z");
    todo("implement");
    _sub_50E42D(this, arg);
}

_extern void _sub_50E383(StatLogging *const);
void StatLogging::RecordAbort() // 0x50E383
{
    mangled_assert("?RecordAbort@StatLogging@@QAEXXZ");
    todo("implement");
    _sub_50E383(this);
}

_extern void _sub_50E38B(StatLogging *const, Universe const *);
void StatLogging::RecordFrame(Universe const *) // 0x50E38B
{
    mangled_assert("?RecordFrame@StatLogging@@QAEXPBVUniverse@@@Z");
    todo("implement");
    _sub_50E38B(this, arg);
}

_extern unsigned __int32 _sub_50E32E(StatLogging const *const);
unsigned __int32 StatLogging::PlayerCount() const // 0x50E32E
{
    mangled_assert("?PlayerCount@StatLogging@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_50E32E(this);
    return __result;
}

_extern unsigned __int32 _sub_50E280(StatLogging const *const, unsigned __int32);
unsigned __int32 StatLogging::PlayerAt(unsigned __int32) const // 0x50E280
{
    mangled_assert("?PlayerAt@StatLogging@@QBEII@Z");
    todo("implement");
    unsigned __int32 __result = _sub_50E280(this, arg);
    return __result;
}

_extern unsigned __int32 _sub_50E24E(StatLogging const *const, unsigned __int32);
unsigned __int32 StatLogging::NumShipTypes(unsigned __int32) const // 0x50E24E
{
    mangled_assert("?NumShipTypes@StatLogging@@QBEII@Z");
    todo("implement");
    unsigned __int32 __result = _sub_50E24E(this, arg);
    return __result;
}

_extern unsigned __int32 _sub_50E1D5(StatLogging const *const, unsigned __int32, unsigned __int32);
unsigned __int32 StatLogging::GetShipType(unsigned __int32, unsigned __int32) const // 0x50E1D5
{
    mangled_assert("?GetShipType@StatLogging@@QBEIII@Z");
    todo("implement");
    unsigned __int32 __result = _sub_50E1D5(this, arg, arg);
    return __result;
}

_extern __int32 _sub_50E613(StatLogging const *const, unsigned __int32, unsigned __int32);
__int32 StatLogging::ShipsCreated(unsigned __int32, unsigned __int32) const // 0x50E613
{
    mangled_assert("?ShipsCreated@StatLogging@@QBEHII@Z");
    todo("implement");
    __int32 __result = _sub_50E613(this, arg, arg);
    return __result;
}

_extern __int32 _sub_50E699(StatLogging const *const, unsigned __int32, unsigned __int32);
__int32 StatLogging::ShipsCreatedInRUs(unsigned __int32, unsigned __int32) const // 0x50E699
{
    mangled_assert("?ShipsCreatedInRUs@StatLogging@@QBEHII@Z");
    todo("implement");
    __int32 __result = _sub_50E699(this, arg, arg);
    return __result;
}

_extern __int32 _sub_50E7A5(StatLogging const *const, unsigned __int32, unsigned __int32);
__int32 StatLogging::ShipsLost(unsigned __int32, unsigned __int32) const // 0x50E7A5
{
    mangled_assert("?ShipsLost@StatLogging@@QBEHII@Z");
    todo("implement");
    __int32 __result = _sub_50E7A5(this, arg, arg);
    return __result;
}

_extern __int32 _sub_50E82B(StatLogging const *const, unsigned __int32, unsigned __int32);
__int32 StatLogging::ShipsLostInRUs(unsigned __int32, unsigned __int32) const // 0x50E82B
{
    mangled_assert("?ShipsLostInRUs@StatLogging@@QBEHII@Z");
    todo("implement");
    __int32 __result = _sub_50E82B(this, arg, arg);
    return __result;
}

_extern __int32 _sub_50E8F9(StatLogging const *const, unsigned __int32, unsigned __int32);
__int32 StatLogging::SquadronsMax(unsigned __int32, unsigned __int32) const // 0x50E8F9
{
    mangled_assert("?SquadronsMax@StatLogging@@QBEHII@Z");
    todo("implement");
    __int32 __result = _sub_50E8F9(this, arg, arg);
    return __result;
}

_extern __int32 _sub_50E71F(StatLogging const *const, unsigned __int32, unsigned __int32);
__int32 StatLogging::ShipsFirstBuilt(unsigned __int32, unsigned __int32) const // 0x50E71F
{
    mangled_assert("?ShipsFirstBuilt@StatLogging@@QBEHII@Z");
    todo("implement");
    __int32 __result = _sub_50E71F(this, arg, arg);
    return __result;
}

_extern __int32 _sub_50E507(StatLogging const *const, unsigned __int32, unsigned __int32);
__int32 StatLogging::ShipsCaptured(unsigned __int32, unsigned __int32) const // 0x50E507
{
    mangled_assert("?ShipsCaptured@StatLogging@@QBEHII@Z");
    todo("implement");
    __int32 __result = _sub_50E507(this, arg, arg);
    return __result;
}

_extern __int32 _sub_50E58D(StatLogging const *const, unsigned __int32, unsigned __int32);
__int32 StatLogging::ShipsCapturedInRUs(unsigned __int32, unsigned __int32) const // 0x50E58D
{
    mangled_assert("?ShipsCapturedInRUs@StatLogging@@QBEHII@Z");
    todo("implement");
    __int32 __result = _sub_50E58D(this, arg, arg);
    return __result;
}

_extern __int32 _sub_50E8E3(StatLogging const *const, unsigned __int32, unsigned __int32);
__int32 StatLogging::SquadronsActive(unsigned __int32, unsigned __int32) const // 0x50E8E3
{
    mangled_assert("?SquadronsActive@StatLogging@@QBEHII@Z");
    todo("implement");
    __int32 __result = _sub_50E8E3(this, arg, arg);
    return __result;
}

_extern __int32 _sub_50E97F(StatLogging const *const, unsigned __int32, unsigned __int32);
__int32 StatLogging::SquadronsQueued(unsigned __int32, unsigned __int32) const // 0x50E97F
{
    mangled_assert("?SquadronsQueued@StatLogging@@QBEHII@Z");
    todo("implement");
    __int32 __result = _sub_50E97F(this, arg, arg);
    return __result;
}

_extern wchar_t const *_sub_50E233(StatLogging const *const);
wchar_t const *StatLogging::LevelName() const // 0x50E233
{
    mangled_assert("?LevelName@StatLogging@@QBEPB_WXZ");
    todo("implement");
    wchar_t const * __result = _sub_50E233(this);
    return __result;
}

_extern __int32 _sub_50E9D4(StatLogging const *const);
__int32 StatLogging::TotalDuration() const // 0x50E9D4
{
    mangled_assert("?TotalDuration@StatLogging@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_50E9D4(this);
    return __result;
}

_extern __int32 _sub_50E23F(StatLogging const *const);
__int32 StatLogging::LocalPlayerIndex() const // 0x50E23F
{
    mangled_assert("?LocalPlayerIndex@StatLogging@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_50E23F(this);
    return __result;
}

_extern __int32 _sub_50E14E(StatLogging const *const);
__int32 StatLogging::FirstCombatTime() const // 0x50E14E
{
    mangled_assert("?FirstCombatTime@StatLogging@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_50E14E(this);
    return __result;
}

_extern wchar_t const *_sub_50E34D(StatLogging const *const, unsigned __int32);
wchar_t const *StatLogging::PlayerName(unsigned __int32) const // 0x50E34D
{
    mangled_assert("?PlayerName@StatLogging@@QBEPB_WI@Z");
    todo("implement");
    wchar_t const * __result = _sub_50E34D(this, arg);
    return __result;
}

_extern void _sub_50E2B8(StatLogging *const, unsigned __int32, vector4 &, vector4 &, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &);
void StatLogging::PlayerBadgeInfo(unsigned __int32, vector4 &, vector4 &, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &) // 0x50E2B8
{
    mangled_assert("?PlayerBadgeInfo@StatLogging@@QAEXIAAVvector4@@0AAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    _sub_50E2B8(this, arg, arg, arg, arg);
}

_extern __int32 _sub_50E371(StatLogging const *const, unsigned __int32);
__int32 StatLogging::PlayerTeamID(unsigned __int32) const // 0x50E371
{
    mangled_assert("?PlayerTeamID@StatLogging@@QBEHI@Z");
    todo("implement");
    __int32 __result = _sub_50E371(this, arg);
    return __result;
}

_extern __int32 _sub_50E35F(StatLogging const *const, unsigned __int32);
__int32 StatLogging::PlayerRaceID(unsigned __int32) const // 0x50E35F
{
    mangled_assert("?PlayerRaceID@StatLogging@@QBEHI@Z");
    todo("implement");
    __int32 __result = _sub_50E35F(this, arg);
    return __result;
}

_extern __int32 _sub_50E45F(StatLogging const *const, unsigned __int32);
__int32 StatLogging::ResearchTotal(unsigned __int32) const // 0x50E45F
{
    mangled_assert("?ResearchTotal@StatLogging@@QBEHI@Z");
    todo("implement");
    __int32 __result = _sub_50E45F(this, arg);
    return __result;
}

_extern __int32 _sub_50E435(StatLogging const *const, unsigned __int32);
__int32 StatLogging::ResearchCount(unsigned __int32) const // 0x50E435
{
    mangled_assert("?ResearchCount@StatLogging@@QBEHI@Z");
    todo("implement");
    __int32 __result = _sub_50E435(this, arg);
    return __result;
}

_extern __int32 _sub_50E44A(StatLogging const *const, unsigned __int32);
__int32 StatLogging::ResearchRUValue(unsigned __int32) const // 0x50E44A
{
    mangled_assert("?ResearchRUValue@StatLogging@@QBEHI@Z");
    todo("implement");
    __int32 __result = _sub_50E44A(this, arg);
    return __result;
}

_extern __int32 _sub_50E124(StatLogging const *const, unsigned __int32);
__int32 StatLogging::EnemyShipsCaptured(unsigned __int32) const // 0x50E124
{
    mangled_assert("?EnemyShipsCaptured@StatLogging@@QBEHI@Z");
    todo("implement");
    __int32 __result = _sub_50E124(this, arg);
    return __result;
}

_extern __int32 _sub_50E139(StatLogging const *const, unsigned __int32);
__int32 StatLogging::EnemyShipsCapturedInRUs(unsigned __int32) const // 0x50E139
{
    mangled_assert("?EnemyShipsCapturedInRUs@StatLogging@@QBEHI@Z");
    todo("implement");
    __int32 __result = _sub_50E139(this, arg);
    return __result;
}

_extern __int32 _sub_50E256(StatLogging const *const, unsigned __int32);
__int32 StatLogging::OwnShipsCaptured(unsigned __int32) const // 0x50E256
{
    mangled_assert("?OwnShipsCaptured@StatLogging@@QBEHI@Z");
    todo("implement");
    __int32 __result = _sub_50E256(this, arg);
    return __result;
}

_extern __int32 _sub_50E26B(StatLogging const *const, unsigned __int32);
__int32 StatLogging::OwnShipsCapturedInRUs(unsigned __int32) const // 0x50E26B
{
    mangled_assert("?OwnShipsCapturedInRUs@StatLogging@@QBEHI@Z");
    todo("implement");
    __int32 __result = _sub_50E26B(this, arg);
    return __result;
}

_extern __int32 _sub_50E9E3(StatLogging const *const, unsigned __int32);
__int32 StatLogging::TotalKills(unsigned __int32) const // 0x50E9E3
{
    mangled_assert("?TotalKills@StatLogging@@QBEHI@Z");
    todo("implement");
    __int32 __result = _sub_50E9E3(this, arg);
    return __result;
}

_extern __int32 _sub_50E9F8(StatLogging const *const, unsigned __int32);
__int32 StatLogging::TotalKillsInRUs(unsigned __int32) const // 0x50E9F8
{
    mangled_assert("?TotalKillsInRUs@StatLogging@@QBEHI@Z");
    todo("implement");
    __int32 __result = _sub_50E9F8(this, arg);
    return __result;
}

_extern __int32 _sub_50EA0D(StatLogging const *const, unsigned __int32);
__int32 StatLogging::TotalLosses(unsigned __int32) const // 0x50EA0D
{
    mangled_assert("?TotalLosses@StatLogging@@QBEHI@Z");
    todo("implement");
    __int32 __result = _sub_50EA0D(this, arg);
    return __result;
}

_extern __int32 _sub_50EA22(StatLogging const *const, unsigned __int32);
__int32 StatLogging::TotalLossesInRUs(unsigned __int32) const // 0x50EA22
{
    mangled_assert("?TotalLossesInRUs@StatLogging@@QBEHI@Z");
    todo("implement");
    __int32 __result = _sub_50EA22(this, arg);
    return __result;
}

_extern __int32 _sub_50EA61(StatLogging const *const, unsigned __int32);
__int32 StatLogging::TotalSquadKills(unsigned __int32) const // 0x50EA61
{
    mangled_assert("?TotalSquadKills@StatLogging@@QBEHI@Z");
    todo("implement");
    __int32 __result = _sub_50EA61(this, arg);
    return __result;
}

_extern __int32 _sub_50EA76(StatLogging const *const, unsigned __int32);
__int32 StatLogging::TotalSquadKillsInRUs(unsigned __int32) const // 0x50EA76
{
    mangled_assert("?TotalSquadKillsInRUs@StatLogging@@QBEHI@Z");
    todo("implement");
    __int32 __result = _sub_50EA76(this, arg);
    return __result;
}

_extern __int32 _sub_50EA8B(StatLogging const *const, unsigned __int32);
__int32 StatLogging::TotalSquadLosses(unsigned __int32) const // 0x50EA8B
{
    mangled_assert("?TotalSquadLosses@StatLogging@@QBEHI@Z");
    todo("implement");
    __int32 __result = _sub_50EA8B(this, arg);
    return __result;
}

_extern __int32 _sub_50EAA0(StatLogging const *const, unsigned __int32);
__int32 StatLogging::TotalSquadLossesInRUs(unsigned __int32) const // 0x50EAA0
{
    mangled_assert("?TotalSquadLossesInRUs@StatLogging@@QBEHI@Z");
    todo("implement");
    __int32 __result = _sub_50EAA0(this, arg);
    return __result;
}

_extern __int32 _sub_50E9BF(StatLogging const *const, unsigned __int32);
__int32 StatLogging::TimeKilled(unsigned __int32) const // 0x50E9BF
{
    mangled_assert("?TimeKilled@StatLogging@@QBEHI@Z");
    todo("implement");
    __int32 __result = _sub_50E9BF(this, arg);
    return __result;
}

_extern __int32 _sub_50E8CB(StatLogging const *const, unsigned __int32);
__int32 StatLogging::SpentRUs(unsigned __int32) const // 0x50E8CB
{
    mangled_assert("?SpentRUs@StatLogging@@QBEHI@Z");
    todo("implement");
    __int32 __result = _sub_50E8CB(this, arg);
    return __result;
}

_extern __int32 _sub_50E1BD(StatLogging const *const, unsigned __int32);
__int32 StatLogging::GatheredRUs(unsigned __int32) const // 0x50E1BD
{
    mangled_assert("?GatheredRUs@StatLogging@@QBEHI@Z");
    todo("implement");
    __int32 __result = _sub_50E1BD(this, arg);
    return __result;
}

_extern __int32 _sub_50E15D(StatLogging const *const, unsigned __int32);
__int32 StatLogging::GatheredRUAsteroid(unsigned __int32) const // 0x50E15D
{
    mangled_assert("?GatheredRUAsteroid@StatLogging@@QBEHI@Z");
    todo("implement");
    __int32 __result = _sub_50E15D(this, arg);
    return __result;
}

_extern __int32 _sub_50E175(StatLogging const *const, unsigned __int32);
__int32 StatLogging::GatheredRUDustCloud(unsigned __int32) const // 0x50E175
{
    mangled_assert("?GatheredRUDustCloud@StatLogging@@QBEHI@Z");
    todo("implement");
    __int32 __result = _sub_50E175(this, arg);
    return __result;
}

_extern __int32 _sub_50E18D(StatLogging const *const, unsigned __int32);
__int32 StatLogging::GatheredRUNebula(unsigned __int32) const // 0x50E18D
{
    mangled_assert("?GatheredRUNebula@StatLogging@@QBEHI@Z");
    todo("implement");
    __int32 __result = _sub_50E18D(this, arg);
    return __result;
}

_extern __int32 _sub_50E1A5(StatLogging const *const, unsigned __int32);
__int32 StatLogging::GatheredRUSalvage(unsigned __int32) const // 0x50E1A5
{
    mangled_assert("?GatheredRUSalvage@StatLogging@@QBEHI@Z");
    todo("implement");
    __int32 __result = _sub_50E1A5(this, arg);
    return __result;
}

_extern __int32 _sub_50EACD(StatLogging const *const, unsigned __int32);
__int32 StatLogging::TributeReceived(unsigned __int32) const // 0x50EACD
{
    mangled_assert("?TributeReceived@StatLogging@@QBEHI@Z");
    todo("implement");
    __int32 __result = _sub_50EACD(this, arg);
    return __result;
}

_extern __int32 _sub_50EAB5(StatLogging const *const, unsigned __int32);
__int32 StatLogging::TributeDonated(unsigned __int32) const // 0x50EAB5
{
    mangled_assert("?TributeDonated@StatLogging@@QBEHI@Z");
    todo("implement");
    __int32 __result = _sub_50EAB5(this, arg);
    return __result;
}

_extern __int32 _sub_50EA37(StatLogging const *const, unsigned __int32);
__int32 StatLogging::TotalShipsBuilt(unsigned __int32) const // 0x50EA37
{
    mangled_assert("?TotalShipsBuilt@StatLogging@@QBEHI@Z");
    todo("implement");
    __int32 __result = _sub_50EA37(this, arg);
    return __result;
}

_extern __int32 _sub_50EA4C(StatLogging const *const, unsigned __int32);
__int32 StatLogging::TotalShipsBuiltInRUs(unsigned __int32) const // 0x50EA4C
{
    mangled_assert("?TotalShipsBuiltInRUs@StatLogging@@QBEHI@Z");
    todo("implement");
    __int32 __result = _sub_50EA4C(this, arg);
    return __result;
}

_extern __int32 _sub_50E0AC(StatLogging const *const, unsigned __int32);
__int32 StatLogging::BuildShipsBuilt(unsigned __int32) const // 0x50E0AC
{
    mangled_assert("?BuildShipsBuilt@StatLogging@@QBEHI@Z");
    todo("implement");
    __int32 __result = _sub_50E0AC(this, arg);
    return __result;
}

_extern __int32 _sub_50E0C1(StatLogging const *const, unsigned __int32);
__int32 StatLogging::BuildShipsBuiltInRUs(unsigned __int32) const // 0x50E0C1
{
    mangled_assert("?BuildShipsBuiltInRUs@StatLogging@@QBEHI@Z");
    todo("implement");
    __int32 __result = _sub_50E0C1(this, arg);
    return __result;
}

_extern __int32 _sub_50E1E1(StatLogging const *const, unsigned __int32);
__int32 StatLogging::HarvestersBuilt(unsigned __int32) const // 0x50E1E1
{
    mangled_assert("?HarvestersBuilt@StatLogging@@QBEHI@Z");
    todo("implement");
    __int32 __result = _sub_50E1E1(this, arg);
    return __result;
}

_extern __int32 _sub_50E1F6(StatLogging const *const, unsigned __int32);
__int32 StatLogging::HarvestersBuiltInRUs(unsigned __int32) const // 0x50E1F6
{
    mangled_assert("?HarvestersBuiltInRUs@StatLogging@@QBEHI@Z");
    todo("implement");
    __int32 __result = _sub_50E1F6(this, arg);
    return __result;
}

_extern __int32 _sub_50E995(StatLogging const *const, unsigned __int32);
__int32 StatLogging::SubsystemsBuilt(unsigned __int32) const // 0x50E995
{
    mangled_assert("?SubsystemsBuilt@StatLogging@@QBEHI@Z");
    todo("implement");
    __int32 __result = _sub_50E995(this, arg);
    return __result;
}

_extern __int32 _sub_50E9AA(StatLogging const *const, unsigned __int32);
__int32 StatLogging::SubsystemsBuiltInRUs(unsigned __int32) const // 0x50E9AA
{
    mangled_assert("?SubsystemsBuiltInRUs@StatLogging@@QBEHI@Z");
    todo("implement");
    __int32 __result = _sub_50E9AA(this, arg);
    return __result;
}

_extern StatLoggingInternal const *_sub_50E1DD(StatLogging const *const);
StatLoggingInternal const *StatLogging::GetStats() const // 0x50E1DD
{
    mangled_assert("?GetStats@StatLogging@@QBEPBVStatLoggingInternal@@XZ");
    todo("implement");
    StatLoggingInternal const * __result = _sub_50E1DD(this);
    return __result;
}

_extern void _sub_50E474(StatLogging *const);
void StatLogging::Reset() // 0x50E474
{
    mangled_assert("?Reset@StatLogging@@QAEXXZ");
    todo("implement");
    _sub_50E474(this);
}

_extern void _sub_50E0D9(StatLogging *const, char const *);
void StatLogging::DumpFramesToDisk(char const *) // 0x50E0D9
{
    mangled_assert("?DumpFramesToDisk@StatLogging@@QAEXPBD@Z");
    todo("implement");
    _sub_50E0D9(this, arg);
}

_extern bool _sub_50E4EF(SaveGameData *, SaveType);
bool StatLogging::Save(SaveGameData *saveGameData, SaveType saveType) // 0x50E4EF
{
    mangled_assert("?Save@StatLogging@@SG_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_50E4EF(saveGameData, saveType);
    return __result;
}

_extern bool _sub_50E482(SaveGameData *);
bool StatLogging::Restore(SaveGameData *saveGameData) // 0x50E482
{
    mangled_assert("?Restore@StatLogging@@SG_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_50E482(saveGameData);
    return __result;
}

_extern void _sub_50C7F3(void *, SaveGameData *, SaveType);
void StatLogging::saveStatsInternal(void *objectPtr, SaveGameData *saveGameData, SaveType savetype) // 0x50C7F3
{
    mangled_assert("?saveStatsInternal@StatLogging@@CGXPAXPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    _sub_50C7F3(objectPtr, saveGameData, savetype);
}

_extern void _sub_50CC33(void *, SaveGameData *);
void StatLogging::restoreStatsInternal(void *objectPtr, SaveGameData *saveGameData) // 0x50CC33
{
    mangled_assert("?restoreStatsInternal@StatLogging@@CGXPAXPAVSaveGameData@@@Z");
    todo("implement");
    _sub_50CC33(objectPtr, saveGameData);
}

_extern void _sub_50F168(StatLogging *const);
void StatLogging::postRestore() // 0x50F168
{
    mangled_assert("?postRestore@StatLogging@@UAEXXZ");
    todo("implement");
    _sub_50F168(this);
}

_extern bool _sub_50F2CA(StatLogging *const, SaveGameData *);
bool StatLogging::restore(SaveGameData *) // 0x50F2CA
{
    mangled_assert("?restore@StatLogging@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_50F2CA(this, arg);
    return __result;
}

_extern bool _sub_50F308(StatLogging *const, SaveGameData *, SaveType);
bool StatLogging::save(SaveGameData *, SaveType) // 0x50F308
{
    mangled_assert("?save@StatLogging@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_50F308(this, arg, arg);
    return __result;
}

/* ---------- private code */

_extern void _sub_50F0CD(std::list<SobStatic *,std::allocator<SobStatic *> > &, unsigned __int32);
_static void getListOfStatics(std::list<SobStatic *,std::allocator<SobStatic *> > &subsystems, unsigned __int32 staticId) // 0x50F0CD
{
    mangled_assert("getListOfStatics");
    todo("implement");
    _sub_50F0CD(subsystems, staticId);
}
#endif
