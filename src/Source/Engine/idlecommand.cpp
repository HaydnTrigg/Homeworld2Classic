#if 0
/* ---------- headers */

#include "decomp.h"
#include <Engine\DynamicPoint.h>
#include <xstring>
#include <xmemory0>
#include <Engine\fixedpoint.h>
#include <Engine\MultiplierTypes.h>
#include <Engine\Ship\Formation.h>
#include <Engine\Ship\FormationPattern.h>
#include <Engine\SOBGroupManager.h>
#include <new>
#include <Engine\Squadron.h>
#include <Engine\ship.h>
#include <xstddef>
#include <type_traits>
#include <Engine\SobWithMesh.h>
#include <Engine\SobRigidBody.h>
#include <Engine\sob.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <Engine\GameEventDefs.h>
#include <vector>
#include <Engine\GameEventSys.h>
#include <xmemory>
#include <xhash>
#include <profile\profile.h>
#include <platform\timer.h>
#include <iostream>
#include <platform\platformexports.h>
#include <list>
#include <Engine\playerresourcetype.h>
#include <Engine\TeamColourRegistry.h>
#include <Mathlib\vector3.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <util\types.h>
#include <Engine\MeshAnimation.h>
#include <util\colour.h>
#include <Engine\savegameimpl.h>
#include <Engine\pathpoints.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Engine\Universe.h>
#include <Engine\Waypoint.h>
#include <Engine\SobUnmoveable.h>
#include <Engine\command.h>
#include <Engine\sobtypes.h>
#include <Engine\selection.h>
#include <Engine\savegamedef.h>
#include <Engine\AttackCommand.h>
#include <Engine\AttackStyle.h>
#include <Engine\Race.h>
#include <Engine\weaponTargetInfo.h>
#include <Engine\pch.h>
#include <Engine\idlecommand.h>
#include <Mathlib\vector2.h>
#include <Engine\HyperspaceManager.h>
#include <Engine\SquadronList.h>
#include <Engine\BuildManager.h>
#include <Engine\Tactics.h>
#include <Engine\StrikeGroup.h>
#include <assist\stlexsmallvector.h>
#include <Engine\dbdefines.h>
#include <Engine\Ship\FormationTargetInfo.h>
#include <Engine\UnitCaps\UnitCaps.h>
#include <Engine\Ship\FormationTargetInfoUtil.h>
#include <Engine\Player.h>
#include <Engine\ResearchManager.h>
#include <Engine\ITweak.h>
#include <Engine\MADState.h>
#include <luaconfig\luabinding.h>
#include <luaconfig\luaconfig.h>
#include <Engine\sobid.h>
#include <lua\lua.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const IdleCommand::m_saveToken[0]; // 0x7B8130
extern SaveData const IdleCommand::m_saveData[2]; // 0x7B8140

/* ---------- private variables */

/* ---------- public code */

IdleCommand::IdleCommand(Squadron *, Command::CommandOrigin) // 0x6A8394
{
    mangled_assert("??0IdleCommand@@QAE@PAVSquadron@@W4CommandOrigin@Command@@@Z");
    todo("implement");
}

IdleCommand::~IdleCommand() // 0x6A83E7
{
    mangled_assert("??1IdleCommand@@UAE@XZ");
    todo("implement");
}

void IdleCommand::resetCommand() // 0x6A842F
{
    mangled_assert("?resetCommand@IdleCommand@@UAEXXZ");
    todo("implement");
}

ComResult IdleCommand::update(float) // 0x6A84CE
{
    mangled_assert("?update@IdleCommand@@UAE?AW4ComResult@@M@Z");
    todo("implement");
}

char const *IdleCommand::getName() const // 0x6A8421
{
    mangled_assert("?getName@IdleCommand@@UBEPBDXZ");
    todo("implement");
}

CommandType IdleCommand::getCommandType() const // 0x6A841E
{
    mangled_assert("?getCommandType@IdleCommand@@UBE?AW4CommandType@@XZ");
    todo("implement");
}

IdleCommand::IdleCommand(SaveGameData *) // 0x6A8378
{
    mangled_assert("??0IdleCommand@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

void IdleCommand::defaultSettings() // 0x6A8419
{
    mangled_assert("?defaultSettings@IdleCommand@@QAEXXZ");
    todo("implement");
}

void IdleCommand::postRestore() // 0x6A842A
{
    mangled_assert("?postRestore@IdleCommand@@UAEXXZ");
    todo("implement");
}

bool IdleCommand::restore(SaveGameData *) // 0x6A8434
{
    mangled_assert("?restore@IdleCommand@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool IdleCommand::save(SaveGameData *, SaveType) // 0x6A8481
{
    mangled_assert("?save@IdleCommand@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
