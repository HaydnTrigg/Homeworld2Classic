#if 0
/* ---------- headers */

#include "decomp.h"
#include <platform\timer.h>
#include <Engine\DynamicPoint.h>
#include <platform\platformexports.h>
#include <xstring>
#include <xmemory0>
#include <Engine\ITweak.h>
#include <Engine\fixedpoint.h>
#include <Mathlib\mathutil.h>
#include <Engine\Tactics.h>
#include <Engine\visibility.h>
#include <Engine\MultiplierTypes.h>
#include <new>
#include <Engine\Squadron.h>
#include <xstddef>
#include <type_traits>
#include <Engine\ship.h>
#include <Engine\SobRigidBody.h>
#include <Engine\sob.h>
#include <profile\profile.h>
#include <iostream>
#include <Collision\Primitives\sphere.h>
#include <xutility>
#include <Engine\Universe.h>
#include <utility>
#include <iosfwd>
#include <Engine\Waypoint.h>
#include <Engine\Ship\FormationTargetInfoUtil.h>
#include <vector>
#include <Engine\SobUnmoveable.h>
#include <xmemory>
#include <xhash>
#include <Engine\Race.h>
#include <list>
#include <Engine\playerresourcetype.h>
#include <Engine\TeamColourRegistry.h>
#include <Engine\HyperspaceManager.h>
#include <Mathlib\vector3.h>
#include <map>
#include <Engine\BuildManager.h>
#include <Engine\FormationCommands\FormationCommand.h>
#include <xtree>
#include <Engine\Interpolation.h>
#include <Engine\AttackCommand.h>
#include <Engine\AttackStyle.h>
#include <Engine\gameRandom.h>
#include <util\types.h>
#include <Engine\weaponTargetInfo.h>
#include <util\colour.h>
#include <Engine\savegameimpl.h>
#include <Engine\CoordSysUtilities.h>
#include <Engine\pathpoints.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Engine\dbdefines.h>
#include <Engine\Ship\ShipController.h>
#include <Engine\command.h>
#include <Engine\sobtypes.h>
#include <Engine\Ship\FormationTargetInfo.h>
#include <Engine\UnitCaps\UnitCaps.h>
#include <Engine\selection.h>
#include <Engine\savegamedef.h>
#include <Engine\Player.h>
#include <Engine\ResearchManager.h>
#include <Engine\pch.h>
#include <Engine\GuardCommand.h>
#include <Engine\TrailTargetCommand.h>
#include <Mathlib\vector2.h>
#include <Engine\SquadronList.h>
#include <assist\stlexsmallvector.h>
#include <boost\throw_exception.hpp>
#include <Engine\Ship\Formation.h>
#include <Engine\Ship\FormationPattern.h>
#include <boost\detail\shared_count.hpp>
#include <Engine\SOBGroupManager.h>
#include <Engine\random.h>
#include <boost\detail\lwm_win32.hpp>
#include <Engine\Ship\FormationController.h>
#include <Engine\Ship\AdvRigidBodyController.h>
#include <Engine\Physics\RigidBodyController.h>
#include <Engine\sobid.h>
#include <Engine\FormationCommands\FormationAttackCommand.h>

/* ---------- constants */

/* ---------- definitions */

struct inRangeData
{
    vector3 origin; // 0x0
    float range; // 0xC
    _inline inRangeData(); /* compiler_generated() */
};
static_assert(sizeof(inRangeData) == 16, "Invalid inRangeData size");

/* ---------- prototypes */

extern bool makeInRange(Sob const *sob, void *vdata);

/* ---------- globals */

extern char const GuardCommand::m_saveToken[0]; // 0x7B8590
extern SaveData const GuardCommand::m_saveData[3]; // 0x7B85A0

/* ---------- private variables */

/* ---------- public code */

_extern _sub_6A9347(GuardCommand *const, Squadron *, Selection const &, Command::CommandOrigin, vector3 const &);
GuardCommand::GuardCommand(Squadron *, Selection const &, Command::CommandOrigin, vector3 const &) // 0x6A9347
{
    mangled_assert("??0GuardCommand@@QAE@PAVSquadron@@ABVSelection@@W4CommandOrigin@Command@@ABVvector3@@@Z");
    todo("implement");
    _sub_6A9347(this, arg, arg, arg, arg);
}

_extern void _sub_6A9455(GuardCommand *const);
GuardCommand::~GuardCommand() // 0x6A9455
{
    mangled_assert("??1GuardCommand@@UAE@XZ");
    todo("implement");
    _sub_6A9455(this);
}

_extern vector3 const &_sub_6A973F(GuardCommand const *const);
vector3 const &GuardCommand::getDestinationDtrm() const // 0x6A973F
{
    mangled_assert("?getDestinationDtrm@GuardCommand@@UBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_6A973F(this);
    return __result;
}

_extern vector3 const &_sub_6A975E(GuardCommand const *const);
vector3 const &GuardCommand::getDestinationVis() const // 0x6A975E
{
    mangled_assert("?getDestinationVis@GuardCommand@@UBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_6A975E(this);
    return __result;
}

_extern bool _sub_6A98C4(Sob const *, void *);
bool makeInRange(Sob const *sob, void *vdata) // 0x6A98C4
{
    mangled_assert("?makeInRange@@YG_NPBVSob@@PAX@Z");
    todo("implement");
    bool __result = _sub_6A98C4(sob, vdata);
    return __result;
}

_extern bool _sub_6A94E3(GuardCommand *const, CommandType, Command *);
bool GuardCommand::canBeInterrupted(CommandType, Command *) // 0x6A94E3
{
    mangled_assert("?canBeInterrupted@GuardCommand@@UAE_NW4CommandType@@PAVCommand@@@Z");
    todo("implement");
    bool __result = _sub_6A94E3(this, arg, arg);
    return __result;
}

_extern Sob *_sub_6A9656(Squadron const *, Selection const &);
Sob *GuardCommand::getBestTarget(Squadron const *squad, Selection const &targets) // 0x6A9656
{
    mangled_assert("?getBestTarget@GuardCommand@@SGPAVSob@@PBVSquadron@@ABVSelection@@@Z");
    todo("implement");
    Sob * __result = _sub_6A9656(squad, targets);
    return __result;
}

_extern void _sub_6A9788(GuardCommand *const, Selection &);
void GuardCommand::getTargets(Selection &) // 0x6A9788
{
    mangled_assert("?getTargets@GuardCommand@@AAEXAAVSelection@@@Z");
    todo("implement");
    _sub_6A9788(this, arg);
}

_extern Sob *_sub_6A9780(GuardCommand *const);
Sob *GuardCommand::getTarget() // 0x6A9780
{
    mangled_assert("?getTarget@GuardCommand@@MAEPAVSob@@XZ");
    todo("implement");
    Sob * __result = _sub_6A9780(this);
    return __result;
}

_extern float _sub_6A9670(GuardCommand *const);
float GuardCommand::getDesiredDistance() // 0x6A9670
{
    mangled_assert("?getDesiredDistance@GuardCommand@@MAEMXZ");
    todo("implement");
    float __result = _sub_6A9670(this);
    return __result;
}

_extern bool _sub_6A954D(GuardCommand *const);
bool GuardCommand::checkAttack() // 0x6A954D
{
    mangled_assert("?checkAttack@GuardCommand@@AAE_NXZ");
    todo("implement");
    bool __result = _sub_6A954D(this);
    return __result;
}

_extern ComResult _sub_6A99C1(GuardCommand *const, float);
ComResult GuardCommand::update(float) // 0x6A99C1
{
    mangled_assert("?update@GuardCommand@@UAE?AW4ComResult@@M@Z");
    todo("implement");
    ComResult __result = _sub_6A99C1(this, arg);
    return __result;
}

_extern CommandType _sub_6A966C(GuardCommand const *const);
CommandType GuardCommand::getCommandType() const // 0x6A966C
{
    mangled_assert("?getCommandType@GuardCommand@@UBE?AW4CommandType@@XZ");
    todo("implement");
    CommandType __result = _sub_6A966C(this);
    return __result;
}

_extern void _sub_6A964C(GuardCommand *const);
void GuardCommand::cleanUpCommand() // 0x6A964C
{
    mangled_assert("?cleanUpCommand@GuardCommand@@UAEXXZ");
    todo("implement");
    _sub_6A964C(this);
}

_extern void _sub_6A9916(GuardCommand *const);
void GuardCommand::resetCommand() // 0x6A9916
{
    mangled_assert("?resetCommand@GuardCommand@@UAEXXZ");
    todo("implement");
    _sub_6A9916(this);
}

_extern char const *_sub_6A977A(GuardCommand const *const);
char const *GuardCommand::getName() const // 0x6A977A
{
    mangled_assert("?getName@GuardCommand@@UBEPBDXZ");
    todo("implement");
    char const * __result = _sub_6A977A(this);
    return __result;
}

_extern _sub_6A92F9(GuardCommand *const, SaveGameData *);
GuardCommand::GuardCommand(SaveGameData *) // 0x6A92F9
{
    mangled_assert("??0GuardCommand@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_6A92F9(this, arg);
}

_extern void _sub_6A9651(GuardCommand *const);
void GuardCommand::defaultSettings() // 0x6A9651
{
    mangled_assert("?defaultSettings@GuardCommand@@QAEXXZ");
    todo("implement");
    _sub_6A9651(this);
}

_extern void _sub_6A9915(GuardCommand *const);
void GuardCommand::postRestore() // 0x6A9915
{
    mangled_assert("?postRestore@GuardCommand@@UAEXXZ");
    todo("implement");
    _sub_6A9915(this);
}

_extern bool _sub_6A9927(GuardCommand *const, SaveGameData *);
bool GuardCommand::restore(SaveGameData *) // 0x6A9927
{
    mangled_assert("?restore@GuardCommand@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_6A9927(this, arg);
    return __result;
}

_extern bool _sub_6A9974(GuardCommand *const, SaveGameData *, SaveType);
bool GuardCommand::save(SaveGameData *, SaveType) // 0x6A9974
{
    mangled_assert("?save@GuardCommand@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_6A9974(this, arg, arg);
    return __result;
}

_extern _sub_6A9432(GuardCommandStaticInfo *const, ShipStatic *);
GuardCommandStaticInfo::GuardCommandStaticInfo(ShipStatic *) // 0x6A9432
{
    mangled_assert("??0GuardCommandStaticInfo@@QAE@PAVShipStatic@@@Z");
    todo("implement");
    _sub_6A9432(this, arg);
}

_extern _sub_6A9452(inRangeData *const);
_inline inRangeData::inRangeData() // 0x6A9452
{
    mangled_assert("??0inRangeData@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6A9452(this);
}

_extern void _sub_6A94A3(GuardCommandStaticInfo *const);
GuardCommandStaticInfo::~GuardCommandStaticInfo() // 0x6A94A3
{
    mangled_assert("??1GuardCommandStaticInfo@@UAE@XZ");
    todo("implement");
    _sub_6A94A3(this);
}

/* ---------- private code */
#endif
