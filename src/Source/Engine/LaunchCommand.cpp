#if 0
/* ---------- headers */

#include "decomp.h"
#include <Engine\DynamicPoint.h>
#include <xstring>
#include <profile\profile.h>
#include <xmemory0>
#include <iostream>
#include <Engine\SOBGroupManager.h>
#include <Engine\fixedpoint.h>
#include <Engine\Sob\Resource\Resource.h>
#include <Engine\Sob\Resource\ResourceStatic.h>
#include <Engine\Modifiers\ModifierUIInfo.h>
#include <Engine\Modifiers\ModifierMultiplier.h>
#include <Engine\GameEventDefs.h>
#include <Engine\Modifiers\ModifierEffect.h>
#include <Mathlib\matrix3.h>
#include <Engine\GameEventSys.h>
#include <Engine\visibility.h>
#include <Engine\FormationCommands\FormationLaunchCommand.h>
#include <Engine\gameRandom.h>
#include <new>
#include <exception>
#include <Engine\random.h>
#include <Engine\Squadron.h>
#include <xstddef>
#include <Engine\ship.h>
#include <type_traits>
#include <Engine\config.h>
#include <Engine\SobWithMesh.h>
#include <Engine\Modifiers\ModifierApplier.h>
#include <Engine\SobRigidBody.h>
#include <Engine\sob.h>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <Engine\shipstatic.h>
#include <xutility>
#include <Engine\weaponstaticinfo.h>
#include <utility>
#include <iosfwd>
#include <Engine\GunBinding.h>
#include <vector>
#include <xmemory>
#include <xhash>
#include <math.h>
#include <list>
#include <Engine\playerresourcetype.h>
#include <Engine\shipHold.h>
#include <Engine\TeamColourRegistry.h>
#include <Engine\WeaponClassSpecificInfo.h>
#include <Mathlib\vector3.h>
#include <Engine\Race.h>
#include <Mathlib\vector4.h>
#include <Engine\SobWithMeshStatic.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <Engine\Universe.h>
#include <Engine\Waypoint.h>
#include <Engine\SobUnmoveable.h>
#include <Engine\MoveCommand.h>
#include <Engine\BuildManager.h>
#include <util\types.h>
#include <Engine\MeshAnimation.h>
#include <util\colour.h>
#include <Engine\ShieldTypes.h>
#include <Engine\savegameimpl.h>
#include <Engine\savegamedata.h>
#include <Engine\FamilyListMgr.h>
#include <Engine\pathpoints.h>
#include <Engine\FamilyList.h>
#include <Collision\BVH\octree.h>
#include <Engine\Family.h>
#include <Collision\BVH\span.h>
#include <boost\cstdint.hpp>
#include <Engine\Ship\FormationTargetInfo.h>
#include <Engine\FormationCommands\FormationCommand.h>
#include <Engine\HyperspaceManager.h>
#include <Engine\Modifiers\ModifierAbility.h>
#include <Engine\command.h>
#include <Engine\sobtypes.h>
#include <Engine\selection.h>
#include <Engine\savegamedef.h>
#include <Engine\commandtype.h>
#include <Engine\DockLaunch.h>
#include <Engine\DockQueue.h>
#include <Engine\pch.h>
#include <stdarg.h>
#include <Engine\SquadronQueue.h>
#include <Engine\LaunchCommand.h>
#include <Engine\abilities.h>
#include <Engine\Player.h>
#include <Engine\SquadronList.h>
#include <Engine\ResearchManager.h>
#include <Engine\Ship\Formation.h>
#include <Engine\Tactics.h>
#include <Engine\dbdefines.h>
#include <Engine\Ship\FormationPattern.h>
#include <assist\stlexsmallvector.h>
#include <Engine\UnitCaps\UnitCaps.h>
#include <boost\shared_ptr.hpp>
#include <boost\throw_exception.hpp>
#include <Engine\EngineTrailSystem.h>
#include <boost\detail\shared_count.hpp>
#include <Engine\resourceCommand.h>
#include <boost\detail\lwm_win32.hpp>
#include <Engine\MADState.h>
#include <luaconfig\luabinding.h>
#include <luaconfig\luaconfig.h>
#include <lua\lua.h>
#include <wchar.h>
#include <Engine\sobid.h>
#include <set>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const LaunchCommand::m_saveToken[0]; // 0x7B76A8
extern SaveData const LaunchCommand::m_saveData[9]; // 0x7B76B8

/* ---------- private variables */

_static
{
    extern bool const launchCollideStates[9]; // 0x7B7690
    extern bool const launchAvoidStates[9]; // 0x7B769C
}

/* ---------- public code */

_extern bool _sub_6A2E0A(LaunchCommand const *const);
bool LaunchCommand::shipsInCollideState() const // 0x6A2E0A
{
    mangled_assert("?shipsInCollideState@LaunchCommand@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_6A2E0A(this);
    return __result;
}

_extern bool _sub_6A2E00(LaunchCommand const *const);
bool LaunchCommand::shipsInAvoidState() const // 0x6A2E00
{
    mangled_assert("?shipsInAvoidState@LaunchCommand@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_6A2E00(this);
    return __result;
}

_extern Sob *_sub_6A2943(LaunchCommand const *const);
Sob *LaunchCommand::getSobToNotAvoid() const // 0x6A2943
{
    mangled_assert("?getSobToNotAvoid@LaunchCommand@@UBEPAVSob@@XZ");
    todo("implement");
    Sob * __result = _sub_6A2943(this);
    return __result;
}

_extern Sob *_sub_6A295A(LaunchCommand const *const);
Sob *LaunchCommand::getSobToNotCollideWith() const // 0x6A295A
{
    mangled_assert("?getSobToNotCollideWith@LaunchCommand@@UBEPAVSob@@XZ");
    todo("implement");
    Sob * __result = _sub_6A295A(this);
    return __result;
}

_extern _sub_6A1DEB(LaunchCommand *const, Squadron *, SobID const &, Command::CommandOrigin);
LaunchCommand::LaunchCommand(Squadron *, SobID const &, Command::CommandOrigin) // 0x6A1DEB
{
    mangled_assert("??0LaunchCommand@@QAE@PAVSquadron@@ABVSobID@@W4CommandOrigin@Command@@@Z");
    todo("implement");
    _sub_6A1DEB(this, arg, arg, arg);
}

_extern void _sub_6A2588(LaunchCommand *const);
void LaunchCommand::defaultSettings() // 0x6A2588
{
    mangled_assert("?defaultSettings@LaunchCommand@@QAEXXZ");
    todo("implement");
    _sub_6A2588(this);
}

_extern void _sub_6A1E65(LaunchCommand *const);
LaunchCommand::~LaunchCommand() // 0x6A1E65
{
    mangled_assert("??1LaunchCommand@@UAE@XZ");
    todo("implement");
    _sub_6A1E65(this);
}

_extern void _sub_6A25AF(LaunchCommand *const);
void LaunchCommand::emergencyCleanUp() // 0x6A25AF
{
    mangled_assert("?emergencyCleanUp@LaunchCommand@@UAEXXZ");
    todo("implement");
    _sub_6A25AF(this);
}

_extern void _sub_6A24BF(LaunchCommand *const);
void LaunchCommand::cleanUpCommand() // 0x6A24BF
{
    mangled_assert("?cleanUpCommand@LaunchCommand@@UAEXXZ");
    todo("implement");
    _sub_6A24BF(this);
}

_extern ComResult _sub_6A2E14(LaunchCommand *const, float);
ComResult LaunchCommand::update(float) // 0x6A2E14
{
    mangled_assert("?update@LaunchCommand@@UAE?AW4ComResult@@M@Z");
    todo("implement");
    ComResult __result = _sub_6A2E14(this, arg);
    return __result;
}

_extern bool _sub_6A2281(LaunchCommand *const);
bool LaunchCommand::OrderGiven() // 0x6A2281
{
    mangled_assert("?OrderGiven@LaunchCommand@@AAE_NXZ");
    todo("implement");
    bool __result = _sub_6A2281(this);
    return __result;
}

_extern bool _sub_6A1FB7(LaunchCommand *const);
bool LaunchCommand::FindBestLaunchPath() // 0x6A1FB7
{
    mangled_assert("?FindBestLaunchPath@LaunchCommand@@AAE_NXZ");
    todo("implement");
    bool __result = _sub_6A1FB7(this);
    return __result;
}

_extern bool _sub_6A2359(LaunchCommand *const);
bool LaunchCommand::RegisterForQueue() // 0x6A2359
{
    mangled_assert("?RegisterForQueue@LaunchCommand@@AAE_NXZ");
    todo("implement");
    bool __result = _sub_6A2359(this);
    return __result;
}

_extern bool _sub_6A22C3(LaunchCommand *const);
bool LaunchCommand::Queue() // 0x6A22C3
{
    mangled_assert("?Queue@LaunchCommand@@AAE_NXZ");
    todo("implement");
    bool __result = _sub_6A22C3(this);
    return __result;
}

_extern bool _sub_6A238C(LaunchCommand *const);
bool LaunchCommand::SetupSquadronForLaunch() // 0x6A238C
{
    mangled_assert("?SetupSquadronForLaunch@LaunchCommand@@AAE_NXZ");
    todo("implement");
    bool __result = _sub_6A238C(this);
    return __result;
}

_extern bool _sub_6A209A(LaunchCommand *const);
bool LaunchCommand::LaunchFormations() // 0x6A209A
{
    mangled_assert("?LaunchFormations@LaunchCommand@@AAE_NXZ");
    todo("implement");
    bool __result = _sub_6A209A(this);
    return __result;
}

_extern void _sub_6A1F7F(LaunchCommand *const);
void LaunchCommand::DoLaunchAnimation() // 0x6A1F7F
{
    mangled_assert("?DoLaunchAnimation@LaunchCommand@@AAEXXZ");
    todo("implement");
    _sub_6A1F7F(this);
}

_extern bool _sub_6A231B(LaunchCommand *const);
bool LaunchCommand::ReformFormation() // 0x6A231B
{
    mangled_assert("?ReformFormation@LaunchCommand@@AAE_NXZ");
    todo("implement");
    bool __result = _sub_6A231B(this);
    return __result;
}

_extern bool _sub_6A2019(LaunchCommand *const);
bool LaunchCommand::FlyToMilitaryParadeLocation() // 0x6A2019
{
    mangled_assert("?FlyToMilitaryParadeLocation@LaunchCommand@@AAE_NXZ");
    todo("implement");
    bool __result = _sub_6A2019(this);
    return __result;
}

_extern void _sub_6A2DF2(LaunchCommand *const, LaunchCommand::LaunchState);
void LaunchCommand::setLaunchState(LaunchCommand::LaunchState) // 0x6A2DF2
{
    mangled_assert("?setLaunchState@LaunchCommand@@AAEXW4LaunchState@1@@Z");
    todo("implement");
    _sub_6A2DF2(this, arg);
}

_extern void _sub_6A2A37(LaunchCommand *const, Formation *);
void LaunchCommand::launchFormation(Formation *) // 0x6A2A37
{
    mangled_assert("?launchFormation@LaunchCommand@@AAEXPAVFormation@@@Z");
    todo("implement");
    _sub_6A2A37(this, arg);
}

_extern bool _sub_6A26F4(LaunchCommand *const);
bool LaunchCommand::getBestLaunchPath() // 0x6A26F4
{
    mangled_assert("?getBestLaunchPath@LaunchCommand@@AAE_NXZ");
    todo("implement");
    bool __result = _sub_6A26F4(this);
    return __result;
}

_extern bool _sub_6A297D(LaunchCommand const *const);
bool LaunchCommand::isPlayerInControl() const // 0x6A297D
{
    mangled_assert("?isPlayerInControl@LaunchCommand@@ABE_NXZ");
    todo("implement");
    bool __result = _sub_6A297D(this);
    return __result;
}

_extern bool _sub_6A2453(LaunchCommand *const, CommandType, Command *);
bool LaunchCommand::canBeInterrupted(CommandType, Command *) // 0x6A2453
{
    mangled_assert("?canBeInterrupted@LaunchCommand@@UAE_NW4CommandType@@PAVCommand@@@Z");
    todo("implement");
    bool __result = _sub_6A2453(this, arg, arg);
    return __result;
}

_extern bool _sub_6A243C(LaunchCommand const *const);
bool LaunchCommand::allowPassiveActions() const // 0x6A243C
{
    mangled_assert("?allowPassiveActions@LaunchCommand@@UBE_NXZ");
    todo("implement");
    bool __result = _sub_6A243C(this);
    return __result;
}

_extern void _sub_6A2049(LaunchCommand *const, unsigned __int32, unsigned __int32, DockPathPointStatic **, DockPathPoint **);
void LaunchCommand::GetPathPoint(unsigned __int32, unsigned __int32, DockPathPointStatic **, DockPathPoint **) // 0x6A2049
{
    mangled_assert("?GetPathPoint@LaunchCommand@@AAEXIIPAPAVDockPathPointStatic@@PAPAVDockPathPoint@@@Z");
    todo("implement");
    _sub_6A2049(this, arg, arg, arg, arg);
}

_extern DockPath *_sub_6A2906(LaunchCommand const *const);
DockPath *LaunchCommand::getDockPath() const // 0x6A2906
{
    mangled_assert("?getDockPath@LaunchCommand@@QBEPAVDockPath@@XZ");
    todo("implement");
    DockPath * __result = _sub_6A2906(this);
    return __result;
}

_extern _sub_6A1DA2(LaunchCommand *const, SaveGameData *);
LaunchCommand::LaunchCommand(SaveGameData *) // 0x6A1DA2
{
    mangled_assert("??0LaunchCommand@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_6A1DA2(this, arg);
}

_extern void _sub_6A2D53(LaunchCommand *const);
void LaunchCommand::postRestore() // 0x6A2D53
{
    mangled_assert("?postRestore@LaunchCommand@@UAEXXZ");
    todo("implement");
    _sub_6A2D53(this);
}

_extern bool _sub_6A2D58(LaunchCommand *const, SaveGameData *);
bool LaunchCommand::restore(SaveGameData *) // 0x6A2D58
{
    mangled_assert("?restore@LaunchCommand@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_6A2D58(this, arg);
    return __result;
}

_extern bool _sub_6A2DA5(LaunchCommand *const, SaveGameData *, SaveType);
bool LaunchCommand::save(SaveGameData *, SaveType) // 0x6A2DA5
{
    mangled_assert("?save@LaunchCommand@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_6A2DA5(this, arg, arg);
    return __result;
}

_extern char const *_sub_6A293D(LaunchCommand const *const);
char const *LaunchCommand::getName() const // 0x6A293D
{
    mangled_assert("?getName@LaunchCommand@@UBEPBDXZ");
    todo("implement");
    char const * __result = _sub_6A293D(this);
    return __result;
}

_extern CommandType _sub_6A28FE(LaunchCommand const *const);
CommandType LaunchCommand::getCommandType() const // 0x6A28FE
{
    mangled_assert("?getCommandType@LaunchCommand@@UBE?AW4CommandType@@XZ");
    todo("implement");
    CommandType __result = _sub_6A28FE(this);
    return __result;
}

_extern _sub_6A1E4C(LaunchCommandStaticInfo *const, ShipStatic *);
LaunchCommandStaticInfo::LaunchCommandStaticInfo(ShipStatic *) // 0x6A1E4C
{
    mangled_assert("??0LaunchCommandStaticInfo@@QAE@PAVShipStatic@@@Z");
    todo("implement");
    _sub_6A1E4C(this, arg);
}

_extern void _sub_6A1E5E(GameEvent_ShipLaunched *const);
_inline GameEvent_ShipLaunched::~GameEvent_ShipLaunched() // 0x6A1E5E
{
    mangled_assert("??1GameEvent_ShipLaunched@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6A1E5E(this);
}

_extern void _sub_6A1EA4(LaunchCommandStaticInfo *const);
LaunchCommandStaticInfo::~LaunchCommandStaticInfo() // 0x6A1EA4
{
    mangled_assert("??1LaunchCommandStaticInfo@@UAE@XZ");
    todo("implement");
    _sub_6A1EA4(this);
}

/* ---------- private code */
#endif
