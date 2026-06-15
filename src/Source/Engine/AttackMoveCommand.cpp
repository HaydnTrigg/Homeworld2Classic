#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <Engine\StrikeGroup.h>
#include <Engine\fixedpoint.h>
#include <Engine\dbdefines.h>
#include <Engine\UnitCaps\UnitCaps.h>
#include <Engine\GameEventDefs.h>
#include <Engine\MultiplierTypes.h>
#include <Engine\GameEventSys.h>
#include <new>
#include <Engine\Squadron.h>
#include <xstddef>
#include <type_traits>
#include <Engine\sob.h>
#include <xutility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <xhash>
#include <list>
#include <Engine\SOBGroupManager.h>
#include <Mathlib\vector3.h>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <util\types.h>
#include <util\colour.h>
#include <Engine\savegameimpl.h>
#include <platform\timer.h>
#include <Engine\pathpoints.h>
#include <platform\platformexports.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Engine\command.h>
#include <Engine\sobtypes.h>
#include <Engine\selection.h>
#include <Engine\savegamedef.h>
#include <Engine\commandtype.h>
#include <Engine\pch.h>
#include <Engine\AttackMoveCommand.h>
#include <Engine\MoveCommand.h>
#include <Mathlib\vector2.h>
#include <Engine\SquadronList.h>
#include <Engine\Universe.h>
#include <Engine\Waypoint.h>
#include <Engine\SobUnmoveable.h>
#include <assist\stlexsmallvector.h>
#include <Engine\ITweak.h>
#include <Engine\HyperspaceManager.h>
#include <Engine\Tactics.h>
#include <Engine\sobid.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const AttackMoveCommand::m_saveToken[0]; // 0x7B904C
extern SaveData const AttackMoveCommand::m_saveData[1]; // 0x7B9060

/* ---------- private variables */

/* ---------- public code */

AttackMoveCommand::AttackMoveCommand(Squadron *, vector3 const &, Command::CommandOrigin) // 0x6AED91
{
    mangled_assert("??0AttackMoveCommand@@QAE@PAVSquadron@@ABVvector3@@W4CommandOrigin@Command@@@Z");
    todo("implement");
}

AttackMoveCommand::~AttackMoveCommand() // 0x6AEDB1
{
    mangled_assert("??1AttackMoveCommand@@UAE@XZ");
    todo("implement");
}

CommandType AttackMoveCommand::getCommandType() const // 0x6AEED0
{
    mangled_assert("?getCommandType@AttackMoveCommand@@UBE?AW4CommandType@@XZ");
    todo("implement");
}

void AttackMoveCommand::checkAttack() // 0x6AEDDE
{
    mangled_assert("?checkAttack@AttackMoveCommand@@MAEXXZ");
    todo("implement");
}

void AttackMoveCommand::orderAttack(Selection const &) // 0x6AEED7
{
    mangled_assert("?orderAttack@AttackMoveCommand@@AAEXABVSelection@@@Z");
    todo("implement");
}

AttackMoveCommand::AttackMoveCommand(SaveGameData *) // 0x6AED79
{
    mangled_assert("??0AttackMoveCommand@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

void AttackMoveCommand::defaultSettings() // 0x6AEECF
{
    mangled_assert("?defaultSettings@AttackMoveCommand@@QAEXXZ");
    todo("implement");
}

void AttackMoveCommand::postRestore() // 0x6AEF57
{
    mangled_assert("?postRestore@AttackMoveCommand@@UAEXXZ");
    todo("implement");
}

bool AttackMoveCommand::restore(SaveGameData *) // 0x6AEF5C
{
    mangled_assert("?restore@AttackMoveCommand@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool AttackMoveCommand::save(SaveGameData *, SaveType) // 0x6AEFA9
{
    mangled_assert("?save@AttackMoveCommand@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
