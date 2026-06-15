#if 0
/* ---------- headers */

#include "decomp.h"
#include <Engine\DynamicPoint.h>
#include <xstring>
#include <xmemory0>
#include <Engine\HyperspaceManager.h>
#include <Engine\fixedpoint.h>
#include <Engine\Ship\FormationTargetInfo.h>
#include <Engine\visibility.h>
#include <Mathlib\matrix3.h>
#include <new>
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
#include <Engine\dbdefines.h>
#include <xmemory>
#include <Engine\UnitCaps\UnitCaps.h>
#include <xhash>
#include <profile\profile.h>
#include <Engine\Ship\Formation.h>
#include <iostream>
#include <Engine\CoordSysUtilities.h>
#include <Engine\Ship\FormationPattern.h>
#include <list>
#include <Mathlib\vector3.h>
#include <map>
#include <xtree>
#include <Engine\Interpolation.h>
#include <util\types.h>
#include <Engine\savegameimpl.h>
#include <Engine\pathpoints.h>
#include <Engine\SOBGroupManager.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Engine\command.h>
#include <Engine\sobtypes.h>
#include <Engine\selection.h>
#include <Engine\savegamedef.h>
#include <Engine\pch.h>
#include <Engine\MoveToSobCommand.h>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <Engine\FormationCommands\FormationCommand.h>
#include <Engine\SquadronList.h>
#include <assist\stlexsmallvector.h>
#include <boost\throw_exception.hpp>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <Engine\Universe.h>
#include <Engine\Waypoint.h>
#include <Engine\SobUnmoveable.h>
#include <Engine\sobid.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const MoveToSobCommand::m_saveToken[0]; // 0x7B8988
extern SaveData const MoveToSobCommand::m_saveData[5]; // 0x7B89A0

/* ---------- private variables */

/* ---------- public code */

MoveToSobCommand::MoveToSobCommand(Squadron *, SobID const &, vector3 const &, Command::CommandOrigin) // 0x6AB02B
{
    mangled_assert("??0MoveToSobCommand@@QAE@PAVSquadron@@ABVSobID@@ABVvector3@@W4CommandOrigin@Command@@@Z");
    todo("implement");
}

MoveToSobCommand::~MoveToSobCommand() // 0x6AB0AE
{
    mangled_assert("??1MoveToSobCommand@@UAE@XZ");
    todo("implement");
}

void MoveToSobCommand::useSubDestination(vector3 const &) // 0x6AB78E
{
    mangled_assert("?useSubDestination@MoveToSobCommand@@QAEXABVvector3@@@Z");
    todo("implement");
}

char const *MoveToSobCommand::getName() const // 0x6AB23E
{
    mangled_assert("?getName@MoveToSobCommand@@UBEPBDXZ");
    todo("implement");
}

CommandType MoveToSobCommand::getCommandType() const // 0x6AB156
{
    mangled_assert("?getCommandType@MoveToSobCommand@@UBE?AW4CommandType@@XZ");
    todo("implement");
}

ComResult MoveToSobCommand::update(float) // 0x6AB2F7
{
    mangled_assert("?update@MoveToSobCommand@@UAE?AW4ComResult@@M@Z");
    todo("implement");
}

vector3 const &MoveToSobCommand::getDestinationDtrm() const // 0x6AB15A
{
    mangled_assert("?getDestinationDtrm@MoveToSobCommand@@UBEABVvector3@@XZ");
    todo("implement");
}

vector3 const &MoveToSobCommand::getDestinationVis() const // 0x6AB1CF
{
    mangled_assert("?getDestinationVis@MoveToSobCommand@@UBEABVvector3@@XZ");
    todo("implement");
}

void MoveToSobCommand::resetCommand() // 0x6AB24C
{
    mangled_assert("?resetCommand@MoveToSobCommand@@UAEXXZ");
    todo("implement");
}

MoveToSobCommand::MoveToSobCommand(SaveGameData *) // 0x6AAFE6
{
    mangled_assert("??0MoveToSobCommand@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

void MoveToSobCommand::defaultSettings() // 0x6AB132
{
    mangled_assert("?defaultSettings@MoveToSobCommand@@QAEXXZ");
    todo("implement");
}

void MoveToSobCommand::postRestore() // 0x6AB247
{
    mangled_assert("?postRestore@MoveToSobCommand@@UAEXXZ");
    todo("implement");
}

bool MoveToSobCommand::restore(SaveGameData *) // 0x6AB25D
{
    mangled_assert("?restore@MoveToSobCommand@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool MoveToSobCommand::save(SaveGameData *, SaveType) // 0x6AB2AA
{
    mangled_assert("?save@MoveToSobCommand@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

MoveToSobCommandStaticInfo::MoveToSobCommandStaticInfo() // 0x6AB09A
{
    mangled_assert("??0MoveToSobCommandStaticInfo@@QAE@XZ");
    todo("implement");
}

MoveToSobCommandStaticInfo::~MoveToSobCommandStaticInfo() // 0x6AB0ED
{
    mangled_assert("??1MoveToSobCommandStaticInfo@@UAE@XZ");
    todo("implement");
}

/* ---------- private code */
#endif
