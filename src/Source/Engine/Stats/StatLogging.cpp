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

_inline StatLoggingInternal::BadgeInfo::BadgeInfo() // 0x50D830
{
    mangled_assert("??0BadgeInfo@StatLoggingInternal@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline StatLoggingInternal::PlayerStat::PlayerStat(StatLoggingInternal::PlayerStat const &) // 0x50D836
{
    mangled_assert("??0PlayerStat@StatLoggingInternal@@QAE@ABU01@@Z");
    compiler_generated();
    todo("implement");
}

_inline StatLoggingInternal::PlayerStat::PlayerStat() // 0x50DA0D
{
    mangled_assert("??0PlayerStat@StatLoggingInternal@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline StatLoggingInternal::ShipStat::ShipStat() // 0x50DAEB
{
    mangled_assert("??0ShipStat@StatLoggingInternal@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

StatLogging::StatLogging() // 0x50DB10
{
    mangled_assert("??0StatLogging@@AAE@XZ");
    todo("implement");
}

_inline std::_List_buy<SobStatic *,std::allocator<SobStatic *> >::~_List_buy<SobStatic *,std::allocator<SobStatic *> >() // 0x50DB41
{
    mangled_assert("??1?$_List_buy@PAVSobStatic@@V?$allocator@PAVSobStatic@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline StatLoggingInternal::BadgeInfo::~BadgeInfo() // 0x50DB6D
{
    mangled_assert("??1BadgeInfo@StatLoggingInternal@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline StatLoggingInternal::PlayerStat::~PlayerStat() // 0x50DB6E
{
    mangled_assert("??1PlayerStat@StatLoggingInternal@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

StatLogging::~StatLogging() // 0x50DB79
{
    mangled_assert("??1StatLogging@@EAE@XZ");
    todo("implement");
}

_inline SubSystemFinder::~SubSystemFinder() // 0x50DBB6
{
    mangled_assert("??1SubSystemFinder@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline StatLoggingInternal::PlayerStat &StatLoggingInternal::PlayerStat::operator=(StatLoggingInternal::PlayerStat const &) // 0x50DCF8
{
    mangled_assert("??4PlayerStat@StatLoggingInternal@@QAEAAU01@ABU01@@Z");
    compiler_generated();
    todo("implement");
}

StatLogging *StatLogging::Instance() // 0x50E22D
{
    mangled_assert("?Instance@StatLogging@@SGPAV1@XZ");
    todo("implement");
}

bool StatLogging::Initialize() // 0x50E20B
{
    mangled_assert("?Initialize@StatLogging@@SG_NXZ");
    todo("implement");
}

bool StatLogging::Shutdown() // 0x50E8B1
{
    mangled_assert("?Shutdown@StatLogging@@SG_NXZ");
    todo("implement");
}

void StatLogging::RecordStart(Universe const *) // 0x50E393
{
    mangled_assert("?RecordStart@StatLogging@@QAEXPBVUniverse@@@Z");
    todo("implement");
}

void StatLogging::RecordStop(Universe const *) // 0x50E42D
{
    mangled_assert("?RecordStop@StatLogging@@QAEXPBVUniverse@@@Z");
    todo("implement");
}

void StatLogging::RecordAbort() // 0x50E383
{
    mangled_assert("?RecordAbort@StatLogging@@QAEXXZ");
    todo("implement");
}

void StatLogging::RecordFrame(Universe const *) // 0x50E38B
{
    mangled_assert("?RecordFrame@StatLogging@@QAEXPBVUniverse@@@Z");
    todo("implement");
}

unsigned __int32 StatLogging::PlayerCount() const // 0x50E32E
{
    mangled_assert("?PlayerCount@StatLogging@@QBEIXZ");
    todo("implement");
}

unsigned __int32 StatLogging::PlayerAt(unsigned __int32) const // 0x50E280
{
    mangled_assert("?PlayerAt@StatLogging@@QBEII@Z");
    todo("implement");
}

unsigned __int32 StatLogging::NumShipTypes(unsigned __int32) const // 0x50E24E
{
    mangled_assert("?NumShipTypes@StatLogging@@QBEII@Z");
    todo("implement");
}

unsigned __int32 StatLogging::GetShipType(unsigned __int32, unsigned __int32) const // 0x50E1D5
{
    mangled_assert("?GetShipType@StatLogging@@QBEIII@Z");
    todo("implement");
}

__int32 StatLogging::ShipsCreated(unsigned __int32, unsigned __int32) const // 0x50E613
{
    mangled_assert("?ShipsCreated@StatLogging@@QBEHII@Z");
    todo("implement");
}

__int32 StatLogging::ShipsCreatedInRUs(unsigned __int32, unsigned __int32) const // 0x50E699
{
    mangled_assert("?ShipsCreatedInRUs@StatLogging@@QBEHII@Z");
    todo("implement");
}

__int32 StatLogging::ShipsLost(unsigned __int32, unsigned __int32) const // 0x50E7A5
{
    mangled_assert("?ShipsLost@StatLogging@@QBEHII@Z");
    todo("implement");
}

__int32 StatLogging::ShipsLostInRUs(unsigned __int32, unsigned __int32) const // 0x50E82B
{
    mangled_assert("?ShipsLostInRUs@StatLogging@@QBEHII@Z");
    todo("implement");
}

__int32 StatLogging::SquadronsMax(unsigned __int32, unsigned __int32) const // 0x50E8F9
{
    mangled_assert("?SquadronsMax@StatLogging@@QBEHII@Z");
    todo("implement");
}

__int32 StatLogging::ShipsFirstBuilt(unsigned __int32, unsigned __int32) const // 0x50E71F
{
    mangled_assert("?ShipsFirstBuilt@StatLogging@@QBEHII@Z");
    todo("implement");
}

__int32 StatLogging::ShipsCaptured(unsigned __int32, unsigned __int32) const // 0x50E507
{
    mangled_assert("?ShipsCaptured@StatLogging@@QBEHII@Z");
    todo("implement");
}

__int32 StatLogging::ShipsCapturedInRUs(unsigned __int32, unsigned __int32) const // 0x50E58D
{
    mangled_assert("?ShipsCapturedInRUs@StatLogging@@QBEHII@Z");
    todo("implement");
}

__int32 StatLogging::SquadronsActive(unsigned __int32, unsigned __int32) const // 0x50E8E3
{
    mangled_assert("?SquadronsActive@StatLogging@@QBEHII@Z");
    todo("implement");
}

__int32 StatLogging::SquadronsQueued(unsigned __int32, unsigned __int32) const // 0x50E97F
{
    mangled_assert("?SquadronsQueued@StatLogging@@QBEHII@Z");
    todo("implement");
}

wchar_t const *StatLogging::LevelName() const // 0x50E233
{
    mangled_assert("?LevelName@StatLogging@@QBEPB_WXZ");
    todo("implement");
}

__int32 StatLogging::TotalDuration() const // 0x50E9D4
{
    mangled_assert("?TotalDuration@StatLogging@@QBEHXZ");
    todo("implement");
}

__int32 StatLogging::LocalPlayerIndex() const // 0x50E23F
{
    mangled_assert("?LocalPlayerIndex@StatLogging@@QBEHXZ");
    todo("implement");
}

__int32 StatLogging::FirstCombatTime() const // 0x50E14E
{
    mangled_assert("?FirstCombatTime@StatLogging@@QBEHXZ");
    todo("implement");
}

wchar_t const *StatLogging::PlayerName(unsigned __int32) const // 0x50E34D
{
    mangled_assert("?PlayerName@StatLogging@@QBEPB_WI@Z");
    todo("implement");
}

void StatLogging::PlayerBadgeInfo(unsigned __int32, vector4 &, vector4 &, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &) // 0x50E2B8
{
    mangled_assert("?PlayerBadgeInfo@StatLogging@@QAEXIAAVvector4@@0AAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

__int32 StatLogging::PlayerTeamID(unsigned __int32) const // 0x50E371
{
    mangled_assert("?PlayerTeamID@StatLogging@@QBEHI@Z");
    todo("implement");
}

__int32 StatLogging::PlayerRaceID(unsigned __int32) const // 0x50E35F
{
    mangled_assert("?PlayerRaceID@StatLogging@@QBEHI@Z");
    todo("implement");
}

__int32 StatLogging::ResearchTotal(unsigned __int32) const // 0x50E45F
{
    mangled_assert("?ResearchTotal@StatLogging@@QBEHI@Z");
    todo("implement");
}

__int32 StatLogging::ResearchCount(unsigned __int32) const // 0x50E435
{
    mangled_assert("?ResearchCount@StatLogging@@QBEHI@Z");
    todo("implement");
}

__int32 StatLogging::ResearchRUValue(unsigned __int32) const // 0x50E44A
{
    mangled_assert("?ResearchRUValue@StatLogging@@QBEHI@Z");
    todo("implement");
}

__int32 StatLogging::EnemyShipsCaptured(unsigned __int32) const // 0x50E124
{
    mangled_assert("?EnemyShipsCaptured@StatLogging@@QBEHI@Z");
    todo("implement");
}

__int32 StatLogging::EnemyShipsCapturedInRUs(unsigned __int32) const // 0x50E139
{
    mangled_assert("?EnemyShipsCapturedInRUs@StatLogging@@QBEHI@Z");
    todo("implement");
}

__int32 StatLogging::OwnShipsCaptured(unsigned __int32) const // 0x50E256
{
    mangled_assert("?OwnShipsCaptured@StatLogging@@QBEHI@Z");
    todo("implement");
}

__int32 StatLogging::OwnShipsCapturedInRUs(unsigned __int32) const // 0x50E26B
{
    mangled_assert("?OwnShipsCapturedInRUs@StatLogging@@QBEHI@Z");
    todo("implement");
}

__int32 StatLogging::TotalKills(unsigned __int32) const // 0x50E9E3
{
    mangled_assert("?TotalKills@StatLogging@@QBEHI@Z");
    todo("implement");
}

__int32 StatLogging::TotalKillsInRUs(unsigned __int32) const // 0x50E9F8
{
    mangled_assert("?TotalKillsInRUs@StatLogging@@QBEHI@Z");
    todo("implement");
}

__int32 StatLogging::TotalLosses(unsigned __int32) const // 0x50EA0D
{
    mangled_assert("?TotalLosses@StatLogging@@QBEHI@Z");
    todo("implement");
}

__int32 StatLogging::TotalLossesInRUs(unsigned __int32) const // 0x50EA22
{
    mangled_assert("?TotalLossesInRUs@StatLogging@@QBEHI@Z");
    todo("implement");
}

__int32 StatLogging::TotalSquadKills(unsigned __int32) const // 0x50EA61
{
    mangled_assert("?TotalSquadKills@StatLogging@@QBEHI@Z");
    todo("implement");
}

__int32 StatLogging::TotalSquadKillsInRUs(unsigned __int32) const // 0x50EA76
{
    mangled_assert("?TotalSquadKillsInRUs@StatLogging@@QBEHI@Z");
    todo("implement");
}

__int32 StatLogging::TotalSquadLosses(unsigned __int32) const // 0x50EA8B
{
    mangled_assert("?TotalSquadLosses@StatLogging@@QBEHI@Z");
    todo("implement");
}

__int32 StatLogging::TotalSquadLossesInRUs(unsigned __int32) const // 0x50EAA0
{
    mangled_assert("?TotalSquadLossesInRUs@StatLogging@@QBEHI@Z");
    todo("implement");
}

__int32 StatLogging::TimeKilled(unsigned __int32) const // 0x50E9BF
{
    mangled_assert("?TimeKilled@StatLogging@@QBEHI@Z");
    todo("implement");
}

__int32 StatLogging::SpentRUs(unsigned __int32) const // 0x50E8CB
{
    mangled_assert("?SpentRUs@StatLogging@@QBEHI@Z");
    todo("implement");
}

__int32 StatLogging::GatheredRUs(unsigned __int32) const // 0x50E1BD
{
    mangled_assert("?GatheredRUs@StatLogging@@QBEHI@Z");
    todo("implement");
}

__int32 StatLogging::GatheredRUAsteroid(unsigned __int32) const // 0x50E15D
{
    mangled_assert("?GatheredRUAsteroid@StatLogging@@QBEHI@Z");
    todo("implement");
}

__int32 StatLogging::GatheredRUDustCloud(unsigned __int32) const // 0x50E175
{
    mangled_assert("?GatheredRUDustCloud@StatLogging@@QBEHI@Z");
    todo("implement");
}

__int32 StatLogging::GatheredRUNebula(unsigned __int32) const // 0x50E18D
{
    mangled_assert("?GatheredRUNebula@StatLogging@@QBEHI@Z");
    todo("implement");
}

__int32 StatLogging::GatheredRUSalvage(unsigned __int32) const // 0x50E1A5
{
    mangled_assert("?GatheredRUSalvage@StatLogging@@QBEHI@Z");
    todo("implement");
}

__int32 StatLogging::TributeReceived(unsigned __int32) const // 0x50EACD
{
    mangled_assert("?TributeReceived@StatLogging@@QBEHI@Z");
    todo("implement");
}

__int32 StatLogging::TributeDonated(unsigned __int32) const // 0x50EAB5
{
    mangled_assert("?TributeDonated@StatLogging@@QBEHI@Z");
    todo("implement");
}

__int32 StatLogging::TotalShipsBuilt(unsigned __int32) const // 0x50EA37
{
    mangled_assert("?TotalShipsBuilt@StatLogging@@QBEHI@Z");
    todo("implement");
}

__int32 StatLogging::TotalShipsBuiltInRUs(unsigned __int32) const // 0x50EA4C
{
    mangled_assert("?TotalShipsBuiltInRUs@StatLogging@@QBEHI@Z");
    todo("implement");
}

__int32 StatLogging::BuildShipsBuilt(unsigned __int32) const // 0x50E0AC
{
    mangled_assert("?BuildShipsBuilt@StatLogging@@QBEHI@Z");
    todo("implement");
}

__int32 StatLogging::BuildShipsBuiltInRUs(unsigned __int32) const // 0x50E0C1
{
    mangled_assert("?BuildShipsBuiltInRUs@StatLogging@@QBEHI@Z");
    todo("implement");
}

__int32 StatLogging::HarvestersBuilt(unsigned __int32) const // 0x50E1E1
{
    mangled_assert("?HarvestersBuilt@StatLogging@@QBEHI@Z");
    todo("implement");
}

__int32 StatLogging::HarvestersBuiltInRUs(unsigned __int32) const // 0x50E1F6
{
    mangled_assert("?HarvestersBuiltInRUs@StatLogging@@QBEHI@Z");
    todo("implement");
}

__int32 StatLogging::SubsystemsBuilt(unsigned __int32) const // 0x50E995
{
    mangled_assert("?SubsystemsBuilt@StatLogging@@QBEHI@Z");
    todo("implement");
}

__int32 StatLogging::SubsystemsBuiltInRUs(unsigned __int32) const // 0x50E9AA
{
    mangled_assert("?SubsystemsBuiltInRUs@StatLogging@@QBEHI@Z");
    todo("implement");
}

StatLoggingInternal const *StatLogging::GetStats() const // 0x50E1DD
{
    mangled_assert("?GetStats@StatLogging@@QBEPBVStatLoggingInternal@@XZ");
    todo("implement");
}

void StatLogging::Reset() // 0x50E474
{
    mangled_assert("?Reset@StatLogging@@QAEXXZ");
    todo("implement");
}

void StatLogging::DumpFramesToDisk(char const *) // 0x50E0D9
{
    mangled_assert("?DumpFramesToDisk@StatLogging@@QAEXPBD@Z");
    todo("implement");
}

bool StatLogging::Save(SaveGameData *saveGameData, SaveType saveType) // 0x50E4EF
{
    mangled_assert("?Save@StatLogging@@SG_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

bool StatLogging::Restore(SaveGameData *saveGameData) // 0x50E482
{
    mangled_assert("?Restore@StatLogging@@SG_NPAVSaveGameData@@@Z");
    todo("implement");
}

void StatLogging::saveStatsInternal(void *objectPtr, SaveGameData *saveGameData, SaveType savetype) // 0x50C7F3
{
    mangled_assert("?saveStatsInternal@StatLogging@@CGXPAXPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

void StatLogging::restoreStatsInternal(void *objectPtr, SaveGameData *saveGameData) // 0x50CC33
{
    mangled_assert("?restoreStatsInternal@StatLogging@@CGXPAXPAVSaveGameData@@@Z");
    todo("implement");
}

void StatLogging::postRestore() // 0x50F168
{
    mangled_assert("?postRestore@StatLogging@@UAEXXZ");
    todo("implement");
}

bool StatLogging::restore(SaveGameData *) // 0x50F2CA
{
    mangled_assert("?restore@StatLogging@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool StatLogging::save(SaveGameData *, SaveType) // 0x50F308
{
    mangled_assert("?save@StatLogging@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

/* ---------- private code */

_static void getListOfStatics(std::list<SobStatic *,std::allocator<SobStatic *> > &subsystems, unsigned __int32 staticId) // 0x50F0CD
{
    mangled_assert("getListOfStatics");
    todo("implement");
}
#endif
