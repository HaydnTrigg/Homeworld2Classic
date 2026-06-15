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

SalvageCommand::SalvageCommand(Squadron *, SobID const &, Command::CommandOrigin) // 0x6AE734
{
    mangled_assert("??0SalvageCommand@@QAE@PAVSquadron@@ABVSobID@@W4CommandOrigin@Command@@@Z");
    todo("implement");
}

SalvageCommand::~SalvageCommand() // 0x6AE7A3
{
    mangled_assert("??1SalvageCommand@@UAE@XZ");
    todo("implement");
}

bool SalvageCommand::canBeInterrupted(CommandType, Command *) // 0x6AE822
{
    mangled_assert("?canBeInterrupted@SalvageCommand@@UAE_NW4CommandType@@PAVCommand@@@Z");
    todo("implement");
}

void SalvageCommand::moveToTarget(Ship *) // 0x6AE9CB
{
    mangled_assert("?moveToTarget@SalvageCommand@@AAEXPAVShip@@@Z");
    todo("implement");
}

void SalvageCommand::moveToLatchPoint(Ship *) // 0x6AE986
{
    mangled_assert("?moveToLatchPoint@SalvageCommand@@AAEXPAVShip@@@Z");
    todo("implement");
}

bool SalvageCommand::latchWithTarget(Ship *) // 0x6AE8F4
{
    mangled_assert("?latchWithTarget@SalvageCommand@@AAE_NPAVShip@@@Z");
    todo("implement");
}

ComResult SalvageCommand::update(float) // 0x6AEC0D
{
    mangled_assert("?update@SalvageCommand@@UAE?AW4ComResult@@M@Z");
    todo("implement");
}

CommandType SalvageCommand::getCommandType() const // 0x6AE875
{
    mangled_assert("?getCommandType@SalvageCommand@@UBE?AW4CommandType@@XZ");
    todo("implement");
}

void SalvageCommand::resetCommand() // 0x6AEAF4
{
    mangled_assert("?resetCommand@SalvageCommand@@UAEXXZ");
    todo("implement");
}

void SalvageCommand::cleanUpCommand() // 0x6AE860
{
    mangled_assert("?cleanUpCommand@SalvageCommand@@UAEXXZ");
    todo("implement");
}

vector3 const &SalvageCommand::getDestinationDtrm() const // 0x6AE879
{
    mangled_assert("?getDestinationDtrm@SalvageCommand@@UBEABVvector3@@XZ");
    todo("implement");
}

vector3 const &SalvageCommand::getDestinationVis() const // 0x6AE898
{
    mangled_assert("?getDestinationVis@SalvageCommand@@UBEABVvector3@@XZ");
    todo("implement");
}

Sob *SalvageCommand::getSobToNotAvoid() const // 0x6AE8C5
{
    mangled_assert("?getSobToNotAvoid@SalvageCommand@@UBEPAVSob@@XZ");
    todo("implement");
}

Sob *SalvageCommand::getSobToNotCollideWith() const // 0x6AE8DB
{
    mangled_assert("?getSobToNotCollideWith@SalvageCommand@@UBEPAVSob@@XZ");
    todo("implement");
}

char const *SalvageCommand::getName() const // 0x6AE8B8
{
    mangled_assert("?getName@SalvageCommand@@UBEPBDXZ");
    todo("implement");
}

SalvageCommand::SalvageCommand(SaveGameData *) // 0x6AE6F2
{
    mangled_assert("??0SalvageCommand@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

void SalvageCommand::defaultSettings() // 0x6AE870
{
    mangled_assert("?defaultSettings@SalvageCommand@@QAEXXZ");
    todo("implement");
}

void SalvageCommand::postRestore() // 0x6AEAEF
{
    mangled_assert("?postRestore@SalvageCommand@@UAEXXZ");
    todo("implement");
}

bool SalvageCommand::restore(SaveGameData *) // 0x6AEB73
{
    mangled_assert("?restore@SalvageCommand@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool SalvageCommand::save(SaveGameData *, SaveType) // 0x6AEBC0
{
    mangled_assert("?save@SalvageCommand@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

SalvageCommandStaticInfo::SalvageCommandStaticInfo(ShipStatic *) // 0x6AE78A
{
    mangled_assert("??0SalvageCommandStaticInfo@@QAE@PAVShipStatic@@@Z");
    todo("implement");
}

SalvageCommandStaticInfo::~SalvageCommandStaticInfo() // 0x6AE7E2
{
    mangled_assert("??1SalvageCommandStaticInfo@@UAE@XZ");
    todo("implement");
}

/* ---------- private code */
#endif
