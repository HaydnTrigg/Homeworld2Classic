#if 0
/* ---------- headers */

#include "decomp.h"
#include <Engine\DynamicPoint.h>
#include <xstring>
#include <xmemory0>
#include <Engine\fixedpoint.h>
#include <Engine\visibility.h>
#include <Engine\MultiplierTypes.h>
#include <new>
#include <Engine\Squadron.h>
#include <Engine\SOBGroupManager.h>
#include <xstddef>
#include <type_traits>
#include <Engine\ship.h>
#include <Engine\SobWithMesh.h>
#include <Engine\SobRigidBody.h>
#include <Engine\sob.h>
#include <Engine\Ship\FormationTargetInfo.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <xhash>
#include <list>
#include <platform\timer.h>
#include <Engine\playerresourcetype.h>
#include <platform\platformexports.h>
#include <Engine\TeamColourRegistry.h>
#include <Mathlib\vector3.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <Engine\Ship\Formation.h>
#include <Engine\Ship\FormationPattern.h>
#include <util\types.h>
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
#include <Engine\Race.h>
#include <Engine\pch.h>
#include <Engine\waypointMoveCommand.h>
#include <profile\profile.h>
#include <Mathlib\vector2.h>
#include <iostream>
#include <Engine\HyperspaceManager.h>
#include <Engine\SquadronList.h>
#include <Engine\BuildManager.h>
#include <Engine\ITweak.h>
#include <Engine\Tactics.h>
#include <assist\stlexsmallvector.h>
#include <boost\shared_ptr.hpp>
#include <boost\throw_exception.hpp>
#include <boost\detail\shared_count.hpp>
#include <Engine\Ship\FormationTargetInfoUtil.h>
#include <boost\detail\lwm_win32.hpp>
#include <Engine\dbdefines.h>
#include <Engine\UnitCaps\UnitCaps.h>
#include <Engine\GameEventDefs.h>
#include <Engine\GameEventSys.h>
#include <Engine\Player.h>
#include <Engine\ResearchManager.h>
#include <Engine\sobid.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const WaypointMoveCommand::m_saveToken[0]; // 0x7B8378
extern SaveData const WaypointMoveCommand::m_saveData[8]; // 0x7B8390

/* ---------- private variables */

/* ---------- public code */

WaypointMoveCommand::WaypointMoveCommand(Squadron *, std::vector<vector3,std::allocator<vector3> > const &, bool, unsigned __int32, bool, bool, SobID const &, Command::CommandOrigin) // 0x6A8D06
{
    mangled_assert("??0WaypointMoveCommand@@QAE@PAVSquadron@@ABV?$vector@Vvector3@@V?$allocator@Vvector3@@@std@@@std@@_NI22ABVSobID@@W4CommandOrigin@Command@@@Z");
    todo("implement");
}

WaypointMoveCommand::~WaypointMoveCommand() // 0x6A8DDF
{
    mangled_assert("??1WaypointMoveCommand@@UAE@XZ");
    todo("implement");
}

char const *WaypointMoveCommand::getName() const // 0x6A8EF2
{
    mangled_assert("?getName@WaypointMoveCommand@@UBEPBDXZ");
    todo("implement");
}

CommandType WaypointMoveCommand::getCommandType() const // 0x6A8EC2
{
    mangled_assert("?getCommandType@WaypointMoveCommand@@UBE?AW4CommandType@@XZ");
    todo("implement");
}

void WaypointMoveCommand::resetCommand() // 0x6A8FDB
{
    mangled_assert("?resetCommand@WaypointMoveCommand@@UAEXXZ");
    todo("implement");
}

vector3 const &WaypointMoveCommand::getDestinationDtrm() const // 0x6A8EC6
{
    mangled_assert("?getDestinationDtrm@WaypointMoveCommand@@UBEABVvector3@@XZ");
    todo("implement");
}

vector3 const &WaypointMoveCommand::getDestinationVis() const // 0x6A8EDC
{
    mangled_assert("?getDestinationVis@WaypointMoveCommand@@UBEABVvector3@@XZ");
    todo("implement");
}

void WaypointMoveCommand::moveToPoint(vector3 const &, bool) // 0x6A8EFB
{
    mangled_assert("?moveToPoint@WaypointMoveCommand@@AAEXABVvector3@@_N@Z");
    todo("implement");
}

bool WaypointMoveCommand::canBeInterrupted(CommandType, Command *) // 0x6A8E94
{
    mangled_assert("?canBeInterrupted@WaypointMoveCommand@@UAE_NW4CommandType@@PAVCommand@@@Z");
    todo("implement");
}

ComResult WaypointMoveCommand::update(float) // 0x6A90A9
{
    mangled_assert("?update@WaypointMoveCommand@@UAE?AW4ComResult@@M@Z");
    todo("implement");
}

void WaypointMoveCommand::spawnEndCommand() // 0x6A9086
{
    mangled_assert("?spawnEndCommand@WaypointMoveCommand@@AAEXXZ");
    todo("implement");
}

WaypointMoveCommand::WaypointMoveCommand(SaveGameData *) // 0x6A8CAD
{
    mangled_assert("??0WaypointMoveCommand@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

void WaypointMoveCommand::defaultSettings() // 0x6A8EB3
{
    mangled_assert("?defaultSettings@WaypointMoveCommand@@QAEXXZ");
    todo("implement");
}

void WaypointMoveCommand::postRestore() // 0x6A8FD6
{
    mangled_assert("?postRestore@WaypointMoveCommand@@UAEXXZ");
    todo("implement");
}

bool WaypointMoveCommand::restore(SaveGameData *) // 0x6A8FEC
{
    mangled_assert("?restore@WaypointMoveCommand@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool WaypointMoveCommand::save(SaveGameData *, SaveType) // 0x6A9039
{
    mangled_assert("?save@WaypointMoveCommand@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

WaypointMoveCommandStaticInfo::WaypointMoveCommandStaticInfo() // 0x6A8DCF
{
    mangled_assert("??0WaypointMoveCommandStaticInfo@@QAE@XZ");
    todo("implement");
}

WaypointMoveCommandStaticInfo::~WaypointMoveCommandStaticInfo() // 0x6A8E42
{
    mangled_assert("??1WaypointMoveCommandStaticInfo@@UAE@XZ");
    todo("implement");
}

/* ---------- private code */
#endif
