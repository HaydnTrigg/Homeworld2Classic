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

_extern _sub_6BCDA3(TrailTargetCommand *const, Squadron *, Command::CommandOrigin, vector3 const &);
TrailTargetCommand::TrailTargetCommand(Squadron *, Command::CommandOrigin, vector3 const &) // 0x6BCDA3
{
    mangled_assert("??0TrailTargetCommand@@QAE@PAVSquadron@@W4CommandOrigin@Command@@ABVvector3@@@Z");
    todo("implement");
    _sub_6BCDA3(this, arg, arg, arg);
}

_extern void _sub_6BCDD4(TrailTargetCommand *const);
TrailTargetCommand::~TrailTargetCommand() // 0x6BCDD4
{
    mangled_assert("??1TrailTargetCommand@@UAE@XZ");
    todo("implement");
    _sub_6BCDD4(this);
}

_extern bool _sub_6BD07E(TrailTargetCommand *const, Sob const *);
bool TrailTargetCommand::targetMovingRelativeToUs(Sob const *) // 0x6BD07E
{
    mangled_assert("?targetMovingRelativeToUs@TrailTargetCommand@@AAE_NPBVSob@@@Z");
    todo("implement");
    bool __result = _sub_6BD07E(this, arg);
    return __result;
}

_extern void _sub_6BD123(TrailTargetCommand *const);
void TrailTargetCommand::trailTarget() // 0x6BD123
{
    mangled_assert("?trailTarget@TrailTargetCommand@@IAEXXZ");
    todo("implement");
    _sub_6BD123(this);
}

_extern void _sub_6BCF10(TrailTargetCommand *const, Sob *);
void TrailTargetCommand::moveToAndMaintain(Sob *) // 0x6BCF10
{
    mangled_assert("?moveToAndMaintain@TrailTargetCommand@@AAEXPAVSob@@@Z");
    todo("implement");
    _sub_6BCF10(this, arg);
}

_extern void _sub_6BCE1F(TrailTargetCommand *const, Sob *);
void TrailTargetCommand::moveTo(Sob *) // 0x6BCE1F
{
    mangled_assert("?moveTo@TrailTargetCommand@@AAEXPAVSob@@@Z");
    todo("implement");
    _sub_6BCE1F(this, arg);
}

_extern _sub_6BCD84(TrailTargetCommand *const, SaveGameData *);
TrailTargetCommand::TrailTargetCommand(SaveGameData *) // 0x6BCD84
{
    mangled_assert("??0TrailTargetCommand@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_6BCD84(this, arg);
}

_extern void _sub_6BCE01(TrailTargetCommand *const);
void TrailTargetCommand::defaultSettings() // 0x6BCE01
{
    mangled_assert("?defaultSettings@TrailTargetCommand@@QAEXXZ");
    todo("implement");
    _sub_6BCE01(this);
}

_extern void _sub_6BCFE3(TrailTargetCommand *const);
void TrailTargetCommand::postRestore() // 0x6BCFE3
{
    mangled_assert("?postRestore@TrailTargetCommand@@UAEXXZ");
    todo("implement");
    _sub_6BCFE3(this);
}

_extern bool _sub_6BCFE4(TrailTargetCommand *const, SaveGameData *);
bool TrailTargetCommand::restore(SaveGameData *) // 0x6BCFE4
{
    mangled_assert("?restore@TrailTargetCommand@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_6BCFE4(this, arg);
    return __result;
}

_extern bool _sub_6BD031(TrailTargetCommand *const, SaveGameData *, SaveType);
bool TrailTargetCommand::save(SaveGameData *, SaveType) // 0x6BD031
{
    mangled_assert("?save@TrailTargetCommand@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_6BD031(this, arg, arg);
    return __result;
}

/* ---------- private code */
#endif
