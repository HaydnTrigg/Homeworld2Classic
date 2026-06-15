#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <isteammusic.h>
#include <xstring>
#include <BuildManager.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <DynamicPoint.h>
#include <pch.h>
#include <isteamuserstats.h>
#include <isteamugc.h>
#include <isteamremotestorage.h>
#include <playerresourcetype.h>
#include <Parade.h>
#include <isteamapplist.h>
#include <Mathlib\matrix3.h>
#include <isteamhttp.h>
#include <steamhttpenums.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <new>
#include <SelTarg.h>
#include <exception>
#include <xstddef>
#include <prim.h>
#include <type_traits>
#include <steamclientpublic.h>
#include <steamuniverse.h>
#include <isteamnetworking.h>
#include <abilities.h>
#include <Modifiers\ModifierUIInfo.h>
#include <luaconfig\luabinding.h>
#include <xutility>
#include <Collision\Primitives\capsule.h>
#include <Modifiers\ModifierMultiplier.h>
#include <luaconfig\luaconfig.h>
#include <utility>
#include <iosfwd>
#include <Collision\Primitives\segment.h>
#include <Modifiers\ModifierEffect.h>
#include <lua.h>
#include <vector>
#include <Collision\BVH\profiling.h>
#include <isteamutils.h>
#include <xmemory>
#include <ResearchManager.h>
#include <fileio\fileioexports.h>
#include <shipstatic.h>
#include <Modifiers\ModifierApplier.h>
#include <Tactics.h>
#include <seInterface2\PatchID.h>
#include <list>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <Subsystems\Subsystem.h>
#include <isteammatchmaking.h>
#include <assist\fixedstring.h>
#include <Subsystems\SubsystemStatic.h>
#include <matchmakingtypes.h>
#include <isteamunifiedmessages.h>
#include <weaponstaticinfo.h>
#include <assist\stlexstring.h>
#include <Mathlib\vector3.h>
#include <GunBinding.h>
#include <Mathlib\vector4.h>
#include <isteamapps.h>
#include <Selector.h>
#include <xtree>
#include <MetaSelTarg.h>
#include <boost\scoped_ptr.hpp>
#include <gameSettings.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <syncChecking.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <ParadeCommand.h>
#include <weaponinfo.h>
#include <commandtype.h>
#include <Mathlib\vector2.h>
#include <SOBGroupManager.h>
#include <util\types.h>
#include <hash_map>
#include <Squadron.h>
#include <xhash>
#include <command.h>
#include <Modifiers\ModifierTargetCache.h>
#include <WeaponClassSpecificInfo.h>
#include <LevelDesc.h>
#include <Hash.h>
#include <fileio\md5.h>
#include <boost\cstdint.hpp>
#include <boost\config.hpp>
#include <GameObj.h>
#include <config.h>
#include <Graphics\TeamColour.h>
#include <isteamscreenshots.h>
#include <util\statmonitor.h>
#include <fileio\iff.h>
#include <util\utilexports.h>
#include <platform\timer.h>
#include <Mathlib\quat.h>
#include <platform\platformexports.h>
#include <isteamfriends.h>
#include <gamestructimpl.h>
#include <Badge.h>
#include <assist\typemagic.h>
#include <assist\zeroed.h>
#include <MeshAnimation.h>
#include <ShieldTypes.h>
#include <SobWithMeshStatic.h>
#include <ship.h>
#include <SobWithMesh.h>
#include <Subsystems\HardPointManager.h>
#include <Modifiers\ModifierAbility.h>
#include <SobRigidBody.h>
#include <Subsystems\HardPoint.h>
#include <pathpoints.h>
#include <OrderFeedback.h>
#include <isteamcontroller.h>
#include <sob.h>
#include <Subsystems\HardPointStatic.h>
#include <steamcontrollerpublic.h>
#include <sobstatic.h>
#include <debug\db.h>
#include <SobRigidBodyStatic.h>
#include <Subsystems\SubSystemType.h>
#include <BuildData.h>
#include <Collision\Primitives\sphere.h>
#include <HyperspaceManager.h>
#include <deque>
#include <Player.h>
#include <SquadronList.h>
#include <boost\static_assert.hpp>
#include <sobid.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <isteammusicremote.h>
#include <savegamedef.h>
#include <Collision\BVH\octree.h>
#include <boost\detail\shared_count.hpp>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <boost\detail\lwm_win32.hpp>
#include <Collision\BVH\proxy.h>
#include <ResearchData.h>
#include <localizer\localizer.h>
#include <Collision\intersect.h>
#include <SoundManager\SoundEntityHandle.h>
#include <Universe.h>
#include <DependencyData.h>
#include <Collision\primitivesfwd.h>
#include <Waypoint.h>
#include <SobUnmoveable.h>
#include <SteamFuncs.h>
#include <steam_api.h>
#include <isteamclient.h>
#include <steamtypes.h>
#include <Stats\StatLoggingInternal.h>
#include <Interpolation.h>
#include <GameEventSys.h>
#include <wchar.h>
#include <GameEventDefs.h>
#include <string>
#include <Race.h>
#include <isteamuser.h>
#include <TeamColourRegistry.h>
#include <dbdefines.h>
#include <savegame.h>
#include <Collision\Primitives\aabb.h>
#include <UnitCaps\UnitCaps.h>
#include <App\Hw2Identify.h>
#include <queue>
#include <task.h>
#include <stack>
#include <Collision\Primitives\obb.h>
#include <isteamhtmlsurface.h>

/* ---------- constants */

/* ---------- definitions */

typedef std::vector<StatLoggingInternal::ShipStat,std::allocator<StatLoggingInternal::ShipStat> > ShipList;

/* ---------- prototypes */


_static __int32 GetShipCost(Ship const &ship);
_static __int32 GetSquadCost(Squadron const &squad);
_static bool IsSquadDead(Ship const *pShip);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_inline StatLoggingInternal::GameStat::GameStat() // 0x50F84E
{
    mangled_assert("??0GameStat@StatLoggingInternal@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline GameEventSys::Listener::Listener() // 0x50F881
{
    mangled_assert("??0Listener@GameEventSys@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline Player::Observer::Observer() // 0x50F88A
{
    mangled_assert("??0Observer@Player@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

StatLoggingInternal::StatLoggingInternal() // 0x50F893
{
    mangled_assert("??0StatLoggingInternal@@AAE@XZ");
    todo("implement");
}

_inline StatLoggingInternal::GameStat::~GameStat() // 0x50F8C5
{
    mangled_assert("??1GameStat@StatLoggingInternal@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

StatLoggingInternal::~StatLoggingInternal() // 0x50F8D0
{
    mangled_assert("??1StatLoggingInternal@@QAE@XZ");
    todo("implement");
}

StatLoggingInternal::GameStat const *StatLoggingInternal::GetStatGame() const // 0x50FC55
{
    mangled_assert("?GetStatGame@StatLoggingInternal@@QBEPBUGameStat@1@XZ");
    todo("implement");
}

StatLoggingInternal::PlayerStat *StatLoggingInternal::GetStatPlayer(unsigned __int32) // 0x50FC59
{
    mangled_assert("?GetStatPlayer@StatLoggingInternal@@AAEPAUPlayerStat@1@I@Z");
    todo("implement");
}

StatLoggingInternal::ShipStat *StatLoggingInternal::GetStatShip(unsigned __int32, unsigned __int32) // 0x50FCD0
{
    mangled_assert("?GetStatShip@StatLoggingInternal@@AAEPAUShipStat@1@II@Z");
    todo("implement");
}

StatLoggingInternal::PlayerStat const *StatLoggingInternal::GetStatPlayer(unsigned __int32) const // 0x50FCCB
{
    mangled_assert("?GetStatPlayer@StatLoggingInternal@@QBEPBUPlayerStat@1@I@Z");
    todo("implement");
}

StatLoggingInternal::ShipStat const *StatLoggingInternal::GetStatShip(unsigned __int32, unsigned __int32) const // 0x50FD41
{
    mangled_assert("?GetStatShip@StatLoggingInternal@@QBEPBUShipStat@1@II@Z");
    todo("implement");
}

unsigned __int32 const StatLoggingInternal::GetNumStatShips(unsigned __int32) const // 0x50FBEC
{
    mangled_assert("?GetNumStatShips@StatLoggingInternal@@QBE?BII@Z");
    todo("implement");
}

unsigned __int32 const StatLoggingInternal::GetStatShipID(unsigned __int32, unsigned __int32) const // 0x50FD90
{
    mangled_assert("?GetStatShipID@StatLoggingInternal@@QBE?BIII@Z");
    todo("implement");
}

StatLoggingInternal::RecordState StatLoggingInternal::IsRecording() const // 0x50FDCC
{
    mangled_assert("?IsRecording@StatLoggingInternal@@ABE?AW4RecordState@1@XZ");
    todo("implement");
}

void StatLoggingInternal::RecordStart(Universe const *) // 0x51064C
{
    mangled_assert("?RecordStart@StatLoggingInternal@@AAEXPBVUniverse@@@Z");
    todo("implement");
}

void StatLoggingInternal::RecordInitial(Universe const *) // 0x5105B5
{
    mangled_assert("?RecordInitial@StatLoggingInternal@@AAEXPBVUniverse@@@Z");
    todo("implement");
}

void StatLoggingInternal::RecordStop(Universe const *) // 0x5106D2
{
    mangled_assert("?RecordStop@StatLoggingInternal@@AAEXPBVUniverse@@@Z");
    todo("implement");
}

void StatLoggingInternal::RecordFrame(Universe const *) // 0x51059A
{
    mangled_assert("?RecordFrame@StatLoggingInternal@@AAEXPBVUniverse@@@Z");
    todo("implement");
}

void StatLoggingInternal::AddPlayer(Player const *, Universe const *) // 0x50F9DF
{
    mangled_assert("?AddPlayer@StatLoggingInternal@@AAEXPBVPlayer@@PBVUniverse@@@Z");
    todo("implement");
}

void StatLoggingInternal::OnSquadProduced(unsigned __int32, Squadron const *) // 0x510441
{
    mangled_assert("?OnSquadProduced@StatLoggingInternal@@AAEXIPBVSquadron@@@Z");
    todo("implement");
}

void StatLoggingInternal::OnEvent(GameEventSys::Event const &) // 0x50FE29
{
    mangled_assert("?OnEvent@StatLoggingInternal@@EAEXABVEvent@GameEventSys@@@Z");
    todo("implement");
}

void StatLoggingInternal::RecordAbort() // 0x51058C
{
    mangled_assert("?RecordAbort@StatLoggingInternal@@AAEXXZ");
    todo("implement");
}

void StatLoggingInternal::RmvPlayer(Player const *, StatLoggingInternal::PlayerState, __int32) // 0x510780
{
    mangled_assert("?RmvPlayer@StatLoggingInternal@@AAEXPBVPlayer@@W4PlayerState@1@H@Z");
    todo("implement");
}

void StatLoggingInternal::AddTech(Player const *, ResearchData const &) // 0x50FBA1
{
    mangled_assert("?AddTech@StatLoggingInternal@@AAEXPBVPlayer@@ABVResearchData@@@Z");
    todo("implement");
}

void StatLoggingInternal::OnIncResource(Player const *, Fixed<10> const &, PlayerResourceType) // 0x5103B9
{
    mangled_assert("?OnIncResource@StatLoggingInternal@@EAEXPBVPlayer@@ABV?$Fixed@$09@@W4PlayerResourceType@@@Z");
    // __shifted(StatLoggingInternal, 4);
    todo("implement");
}

void StatLoggingInternal::OnDecResource(Player const *, Fixed<10> const &) // 0x50FE09
{
    mangled_assert("?OnDecResource@StatLoggingInternal@@EAEXPBVPlayer@@ABV?$Fixed@$09@@@Z");
    // __shifted(StatLoggingInternal, 4);
    todo("implement");
}

/* ---------- private code */

_static __int32 GetShipCost(Ship const &ship) // 0x50FC14
{
    mangled_assert("GetShipCost");
    todo("implement");
}

_static __int32 GetSquadCost(Squadron const &squad) // 0x50FC30
{
    mangled_assert("GetSquadCost");
    todo("implement");
}

_static bool IsSquadDead(Ship const *pShip) // 0x50FDD0
{
    mangled_assert("IsSquadDead");
    todo("implement");
}
#endif
