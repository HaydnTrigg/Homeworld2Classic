#if 0
/* ---------- headers */

#include "decomp.h"
#include <Engine\UnitCaps\UnitCaps.h>
#include <Engine\DynamicPoint.h>
#include <xstring>
#include <Engine\Ship\Formation.h>
#include <xmemory0>
#include <Engine\Ship\FormationPattern.h>
#include <Engine\fixedpoint.h>
#include <Engine\Ship\ShipController.h>
#include <Engine\Ship\AdvRigidBodyController.h>
#include <Engine\Physics\RigidBodyController.h>
#include <new>
#include <Engine\Squadron.h>
#include <xstddef>
#include <type_traits>
#include <Engine\ship.h>
#include <Engine\SobRigidBody.h>
#include <Engine\sob.h>
#include <xutility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <Engine\SOBGroupManager.h>
#include <xhash>
#include <list>
#include <Mathlib\vector3.h>
#include <xtree>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <util\types.h>
#include <Engine\pathpoints.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Engine\Ship\FormationTargetInfoUtil.h>
#include <Engine\Ship\FormationTargetInfo.h>
#include <Engine\command.h>
#include <Engine\sobtypes.h>
#include <Engine\selection.h>
#include <Engine\savegamedef.h>
#include <Engine\ParadeCommand.h>
#include <Engine\Universe.h>
#include <Engine\Waypoint.h>
#include <Engine\pch.h>
#include <Engine\TrailTargetCommand.h>
#include <Engine\SobUnmoveable.h>
#include <Engine\SquadronList.h>
#include <assist\stlexsmallvector.h>
#include <Engine\HyperspaceManager.h>
#include <Engine\sobid.h>
#include <Engine\dbdefines.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const TrailTargetCommand::m_saveToken[19]; // 0x7BA8C0
extern SaveData const TrailTargetCommand::m_saveData[3]; // 0x7BA8D8

/* ---------- private variables */

/* ---------- public code */

TrailTargetCommand::TrailTargetCommand(Squadron *, Command::CommandOrigin, vector3 const &) // 0x6BCDA3
{
    mangled_assert("??0TrailTargetCommand@@QAE@PAVSquadron@@W4CommandOrigin@Command@@ABVvector3@@@Z");
    todo("implement");
}

TrailTargetCommand::~TrailTargetCommand() // 0x6BCDD4
{
    mangled_assert("??1TrailTargetCommand@@UAE@XZ");
    todo("implement");
}

bool TrailTargetCommand::targetMovingRelativeToUs(Sob const *) // 0x6BD07E
{
    mangled_assert("?targetMovingRelativeToUs@TrailTargetCommand@@AAE_NPBVSob@@@Z");
    todo("implement");
}

void TrailTargetCommand::trailTarget() // 0x6BD123
{
    mangled_assert("?trailTarget@TrailTargetCommand@@IAEXXZ");
    todo("implement");
}

void TrailTargetCommand::moveToAndMaintain(Sob *) // 0x6BCF10
{
    mangled_assert("?moveToAndMaintain@TrailTargetCommand@@AAEXPAVSob@@@Z");
    todo("implement");
}

void TrailTargetCommand::moveTo(Sob *) // 0x6BCE1F
{
    mangled_assert("?moveTo@TrailTargetCommand@@AAEXPAVSob@@@Z");
    todo("implement");
}

TrailTargetCommand::TrailTargetCommand(SaveGameData *) // 0x6BCD84
{
    mangled_assert("??0TrailTargetCommand@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

void TrailTargetCommand::defaultSettings() // 0x6BCE01
{
    mangled_assert("?defaultSettings@TrailTargetCommand@@QAEXXZ");
    todo("implement");
}

void TrailTargetCommand::postRestore() // 0x6BCFE3
{
    mangled_assert("?postRestore@TrailTargetCommand@@UAEXXZ");
    todo("implement");
}

bool TrailTargetCommand::restore(SaveGameData *) // 0x6BCFE4
{
    mangled_assert("?restore@TrailTargetCommand@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool TrailTargetCommand::save(SaveGameData *, SaveType) // 0x6BD031
{
    mangled_assert("?save@TrailTargetCommand@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
