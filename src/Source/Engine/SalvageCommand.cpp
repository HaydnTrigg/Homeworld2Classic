#if 0
/* ---------- headers */

#include "decomp.h"
#include <iostream>
#include <Engine\DynamicPoint.h>
#include <xstring>
#include <xmemory0>
#include <Engine\DockCommand.h>
#include <Engine\ITweak.h>
#include <Engine\visibility.h>
#include <Engine\Tactics.h>
#include <Engine\MultiplierTypes.h>
#include <new>
#include <Engine\Squadron.h>
#include <Engine\ship.h>
#include <xstddef>
#include <type_traits>
#include <Engine\SobWithMesh.h>
#include <Engine\SobRigidBody.h>
#include <Engine\sob.h>
#include <Engine\SalvageManager.h>
#include <xutility>
#include <Engine\LatchPointManager.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <Engine\FormationCommands\FormationLatchCommand.h>
#include <Engine\GameEventDefs.h>
#include <Engine\GameEventSys.h>
#include <list>
#include <Engine\Ship\FormationController.h>
#include <Engine\Ship\AdvRigidBodyController.h>
#include <Engine\savegame.h>
#include <Engine\Physics\RigidBodyController.h>
#include <Mathlib\vector3.h>
#include <map>
#include <xtree>
#include <Engine\Interpolation.h>
#include <Mathlib\quat.h>
#include <boost\scoped_ptr.hpp>
#include <Engine\MeshAnimation.h>
#include <util\colour.h>
#include <Engine\command.h>
#include <Engine\selection.h>
#include <Engine\Ship\FormationTargetInfo.h>
#include <Engine\savegamedef.h>
#include <Engine\MADState.h>
#include <Engine\pch.h>
#include <Engine\SalvageCommand.h>
#include <Engine\FormationCommands\FormationCommand.h>
#include <luaconfig\luabinding.h>
#include <Mathlib\vector2.h>
#include <luaconfig\luaconfig.h>
#include <lua\lua.h>
#include <assist\stlexsmallvector.h>
#include <boost\throw_exception.hpp>
#include <Engine\LatchManager.h>
#include <Engine\Ship\Formation.h>
#include <boost\detail\shared_count.hpp>
#include <Engine\Ship\FormationPattern.h>
#include <boost\detail\lwm_win32.hpp>
#include <Engine\sobid.h>
#include <profile\profile.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const SalvageCommand::m_saveToken[0]; // 0x7B8F90
extern SaveData const SalvageCommand::m_saveData[2]; // 0x7B8FA0

/* ---------- private variables */

/* ---------- public code */

_extern _sub_6AE734(SalvageCommand *const, Squadron *, SobID const &, Command::CommandOrigin);
SalvageCommand::SalvageCommand(Squadron *, SobID const &, Command::CommandOrigin) // 0x6AE734
{
    mangled_assert("??0SalvageCommand@@QAE@PAVSquadron@@ABVSobID@@W4CommandOrigin@Command@@@Z");
    todo("implement");
    _sub_6AE734(this, arg, arg, arg);
}

_extern void _sub_6AE7A3(SalvageCommand *const);
SalvageCommand::~SalvageCommand() // 0x6AE7A3
{
    mangled_assert("??1SalvageCommand@@UAE@XZ");
    todo("implement");
    _sub_6AE7A3(this);
}

_extern bool _sub_6AE822(SalvageCommand *const, CommandType, Command *);
bool SalvageCommand::canBeInterrupted(CommandType, Command *) // 0x6AE822
{
    mangled_assert("?canBeInterrupted@SalvageCommand@@UAE_NW4CommandType@@PAVCommand@@@Z");
    todo("implement");
    bool __result = _sub_6AE822(this, arg, arg);
    return __result;
}

_extern void _sub_6AE9CB(SalvageCommand *const, Ship *);
void SalvageCommand::moveToTarget(Ship *) // 0x6AE9CB
{
    mangled_assert("?moveToTarget@SalvageCommand@@AAEXPAVShip@@@Z");
    todo("implement");
    _sub_6AE9CB(this, arg);
}

_extern void _sub_6AE986(SalvageCommand *const, Ship *);
void SalvageCommand::moveToLatchPoint(Ship *) // 0x6AE986
{
    mangled_assert("?moveToLatchPoint@SalvageCommand@@AAEXPAVShip@@@Z");
    todo("implement");
    _sub_6AE986(this, arg);
}

_extern bool _sub_6AE8F4(SalvageCommand *const, Ship *);
bool SalvageCommand::latchWithTarget(Ship *) // 0x6AE8F4
{
    mangled_assert("?latchWithTarget@SalvageCommand@@AAE_NPAVShip@@@Z");
    todo("implement");
    bool __result = _sub_6AE8F4(this, arg);
    return __result;
}

_extern ComResult _sub_6AEC0D(SalvageCommand *const, float);
ComResult SalvageCommand::update(float) // 0x6AEC0D
{
    mangled_assert("?update@SalvageCommand@@UAE?AW4ComResult@@M@Z");
    todo("implement");
    ComResult __result = _sub_6AEC0D(this, arg);
    return __result;
}

_extern CommandType _sub_6AE875(SalvageCommand const *const);
CommandType SalvageCommand::getCommandType() const // 0x6AE875
{
    mangled_assert("?getCommandType@SalvageCommand@@UBE?AW4CommandType@@XZ");
    todo("implement");
    CommandType __result = _sub_6AE875(this);
    return __result;
}

_extern void _sub_6AEAF4(SalvageCommand *const);
void SalvageCommand::resetCommand() // 0x6AEAF4
{
    mangled_assert("?resetCommand@SalvageCommand@@UAEXXZ");
    todo("implement");
    _sub_6AEAF4(this);
}

_extern void _sub_6AE860(SalvageCommand *const);
void SalvageCommand::cleanUpCommand() // 0x6AE860
{
    mangled_assert("?cleanUpCommand@SalvageCommand@@UAEXXZ");
    todo("implement");
    _sub_6AE860(this);
}

_extern vector3 const &_sub_6AE879(SalvageCommand const *const);
vector3 const &SalvageCommand::getDestinationDtrm() const // 0x6AE879
{
    mangled_assert("?getDestinationDtrm@SalvageCommand@@UBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_6AE879(this);
    return __result;
}

_extern vector3 const &_sub_6AE898(SalvageCommand const *const);
vector3 const &SalvageCommand::getDestinationVis() const // 0x6AE898
{
    mangled_assert("?getDestinationVis@SalvageCommand@@UBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_6AE898(this);
    return __result;
}

_extern Sob *_sub_6AE8C5(SalvageCommand const *const);
Sob *SalvageCommand::getSobToNotAvoid() const // 0x6AE8C5
{
    mangled_assert("?getSobToNotAvoid@SalvageCommand@@UBEPAVSob@@XZ");
    todo("implement");
    Sob * __result = _sub_6AE8C5(this);
    return __result;
}

_extern Sob *_sub_6AE8DB(SalvageCommand const *const);
Sob *SalvageCommand::getSobToNotCollideWith() const // 0x6AE8DB
{
    mangled_assert("?getSobToNotCollideWith@SalvageCommand@@UBEPAVSob@@XZ");
    todo("implement");
    Sob * __result = _sub_6AE8DB(this);
    return __result;
}

_extern char const *_sub_6AE8B8(SalvageCommand const *const);
char const *SalvageCommand::getName() const // 0x6AE8B8
{
    mangled_assert("?getName@SalvageCommand@@UBEPBDXZ");
    todo("implement");
    char const * __result = _sub_6AE8B8(this);
    return __result;
}

_extern _sub_6AE6F2(SalvageCommand *const, SaveGameData *);
SalvageCommand::SalvageCommand(SaveGameData *) // 0x6AE6F2
{
    mangled_assert("??0SalvageCommand@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_6AE6F2(this, arg);
}

_extern void _sub_6AE870(SalvageCommand *const);
void SalvageCommand::defaultSettings() // 0x6AE870
{
    mangled_assert("?defaultSettings@SalvageCommand@@QAEXXZ");
    todo("implement");
    _sub_6AE870(this);
}

_extern void _sub_6AEAEF(SalvageCommand *const);
void SalvageCommand::postRestore() // 0x6AEAEF
{
    mangled_assert("?postRestore@SalvageCommand@@UAEXXZ");
    todo("implement");
    _sub_6AEAEF(this);
}

_extern bool _sub_6AEB73(SalvageCommand *const, SaveGameData *);
bool SalvageCommand::restore(SaveGameData *) // 0x6AEB73
{
    mangled_assert("?restore@SalvageCommand@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_6AEB73(this, arg);
    return __result;
}

_extern bool _sub_6AEBC0(SalvageCommand *const, SaveGameData *, SaveType);
bool SalvageCommand::save(SaveGameData *, SaveType) // 0x6AEBC0
{
    mangled_assert("?save@SalvageCommand@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_6AEBC0(this, arg, arg);
    return __result;
}

_extern _sub_6AE78A(SalvageCommandStaticInfo *const, ShipStatic *);
SalvageCommandStaticInfo::SalvageCommandStaticInfo(ShipStatic *) // 0x6AE78A
{
    mangled_assert("??0SalvageCommandStaticInfo@@QAE@PAVShipStatic@@@Z");
    todo("implement");
    _sub_6AE78A(this, arg);
}

_extern void _sub_6AE7E2(SalvageCommandStaticInfo *const);
SalvageCommandStaticInfo::~SalvageCommandStaticInfo() // 0x6AE7E2
{
    mangled_assert("??1SalvageCommandStaticInfo@@UAE@XZ");
    todo("implement");
    _sub_6AE7E2(this);
}

/* ---------- private code */
#endif
