#if 0
/* ---------- headers */

#include "decomp.h"
#include <Engine\DynamicPoint.h>
#include <xstring>
#include <Engine\Race.h>
#include <xmemory0>
#include <Engine\fixedpoint.h>
#include <util\fixed.h>
#include <Engine\HyperspaceManager.h>
#include <Engine\BuildManager.h>
#include <Mathlib\matrix3.h>
#include <Engine\MultiplierTypes.h>
#include <Engine\Ship\Formation.h>
#include <Engine\Ship\FormationPattern.h>
#include <Engine\ITweak.h>
#include <new>
#include <Engine\Tactics.h>
#include <Engine\Squadron.h>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <Engine\SobRigidBody.h>
#include <Engine\sob.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <xhash>
#include <Engine\dbdefines.h>
#include <Engine\UnitCaps\UnitCaps.h>
#include <math.h>
#include <list>
#include <Engine\playerresourcetype.h>
#include <Engine\CoordSysUtilities.h>
#include <profile\profile.h>
#include <iostream>
#include <Engine\Player.h>
#include <Engine\ResearchManager.h>
#include <Engine\TeamColourRegistry.h>
#include <Mathlib\vector3.h>
#include <Engine\SobWithMeshStatic.h>
#include <map>
#include <Engine\EngineTrailSystem.h>
#include <xtree>
#include <Engine\GameEventDefs.h>
#include <boost\scoped_ptr.hpp>
#include <Engine\GameEventSys.h>
#include <Engine\shipHold.h>
#include <util\types.h>
#include <util\colour.h>
#include <Engine\savegameimpl.h>
#include <Engine\pathpoints.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Engine\EffectCreate.h>
#include <Engine\SOBGroupManager.h>
#include <Engine\command.h>
#include <Engine\sobtypes.h>
#include <Engine\selection.h>
#include <Engine\savegamedef.h>
#include <Engine\pch.h>
#include <Engine\HyperSpaceCommand.h>
#include <Engine\HyperSpaceBaseCommand.h>
#include <Mathlib\vector2.h>
#include <Engine\SquadronList.h>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <assist\stlexsmallvector.h>
#include <Engine\Ship\FormationTargetInfo.h>
#include <Engine\Universe.h>
#include <Engine\Waypoint.h>
#include <Engine\SobUnmoveable.h>
#include <Engine\sobid.h>
#include <set>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const HyperSpaceCommand::m_saveToken[0]; // 0x7B87A8
extern SaveData const HyperSpaceCommand::m_saveData[8]; // 0x7B87C0

/* ---------- private variables */

/* ---------- public code */

HyperSpaceCommand::HyperSpaceCommand(Squadron *, vector3 const &, Command::CommandOrigin) // 0x6AA836
{
    mangled_assert("??0HyperSpaceCommand@@QAE@PAVSquadron@@ABVvector3@@W4CommandOrigin@Command@@@Z");
    todo("implement");
}

HyperSpaceCommand::HyperSpaceCommand(Squadron *, vector3 const &, vector3 const &, vector3 const &, Command::CommandOrigin) // 0x6AA7EA
{
    mangled_assert("??0HyperSpaceCommand@@QAE@PAVSquadron@@ABVvector3@@11W4CommandOrigin@Command@@@Z");
    todo("implement");
}

HyperSpaceCommand::HyperSpaceCommand(Squadron *, Command::CommandOrigin, bool) // 0x6AA86B
{
    mangled_assert("??0HyperSpaceCommand@@QAE@PAVSquadron@@W4CommandOrigin@Command@@_N@Z");
    todo("implement");
}

HyperSpaceCommand::~HyperSpaceCommand() // 0x6AA987
{
    mangled_assert("??1HyperSpaceCommand@@UAE@XZ");
    todo("implement");
}

bool HyperSpaceCommand::allowPassiveActions() const // 0x6AA9D8
{
    mangled_assert("?allowPassiveActions@HyperSpaceCommand@@UBE_NXZ");
    todo("implement");
}

ComResult HyperSpaceCommand::update(float) // 0x6AAC92
{
    mangled_assert("?update@HyperSpaceCommand@@UAE?AW4ComResult@@M@Z");
    todo("implement");
}

void HyperSpaceCommand::setOrientation(vector3 const &, vector3 const &) // 0x6AAC73
{
    mangled_assert("?setOrientation@HyperSpaceCommand@@QAEXABVvector3@@0@Z");
    todo("implement");
}

void HyperSpaceCommand::bringOnMap(vector3 const &, bool) // 0x6AA9DB
{
    mangled_assert("?bringOnMap@HyperSpaceCommand@@QAEXABVvector3@@_N@Z");
    todo("implement");
}

void HyperSpaceCommand::exitHyperspace() // 0x6AAAD5
{
    mangled_assert("?exitHyperspace@HyperSpaceCommand@@MAEXXZ");
    todo("implement");
}

void HyperSpaceCommand::dropOutOfHyperspace() // 0x6AAA75
{
    mangled_assert("?dropOutOfHyperspace@HyperSpaceCommand@@MAEXXZ");
    todo("implement");
}

CommandType HyperSpaceCommand::getCommandType() const // 0x6AAB28
{
    mangled_assert("?getCommandType@HyperSpaceCommand@@UBE?AW4CommandType@@XZ");
    todo("implement");
}

void HyperSpaceCommand::resetCommand() // 0x6AABD8
{
    mangled_assert("?resetCommand@HyperSpaceCommand@@UAEXXZ");
    todo("implement");
}

void HyperSpaceCommand::cleanUpCommand() // 0x6AAA3A
{
    mangled_assert("?cleanUpCommand@HyperSpaceCommand@@UAEXXZ");
    todo("implement");
}

float HyperSpaceCommand::getTransitTime() const // 0x6AAB3A
{
    mangled_assert("?getTransitTime@HyperSpaceCommand@@UBEMXZ");
    todo("implement");
}

char const *HyperSpaceCommand::getName() const // 0x6AAB34
{
    mangled_assert("?getName@HyperSpaceCommand@@UBEPBDXZ");
    todo("implement");
}

void HyperSpaceCommand::jumpEffectToEnd() // 0x6AAB54
{
    mangled_assert("?jumpEffectToEnd@HyperSpaceCommand@@UAEXXZ");
    todo("implement");
}

HyperSpaceCommand::HyperSpaceCommand(SaveGameData *) // 0x6AA7CB
{
    mangled_assert("??0HyperSpaceCommand@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

void HyperSpaceCommand::defaultSettings() // 0x6AAA3F
{
    mangled_assert("?defaultSettings@HyperSpaceCommand@@QAEXXZ");
    todo("implement");
}

void HyperSpaceCommand::postRestore() // 0x6AABD3
{
    mangled_assert("?postRestore@HyperSpaceCommand@@UAEXXZ");
    todo("implement");
}

bool HyperSpaceCommand::restore(SaveGameData *) // 0x6AABD9
{
    mangled_assert("?restore@HyperSpaceCommand@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool HyperSpaceCommand::save(SaveGameData *, SaveType) // 0x6AAC26
{
    mangled_assert("?save@HyperSpaceCommand@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

HyperSpaceCommandStaticInfo::HyperSpaceCommandStaticInfo(ShipStatic *) // 0x6AA961
{
    mangled_assert("??0HyperSpaceCommandStaticInfo@@QAE@PAVShipStatic@@@Z");
    todo("implement");
}

HyperSpaceCommandStaticInfo::~HyperSpaceCommandStaticInfo() // 0x6AA992
{
    mangled_assert("??1HyperSpaceCommandStaticInfo@@UAE@XZ");
    todo("implement");
}

/* ---------- private code */
#endif
