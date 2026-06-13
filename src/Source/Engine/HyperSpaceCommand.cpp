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

_extern _sub_6AA836(HyperSpaceCommand *const, Squadron *, vector3 const &, Command::CommandOrigin);
HyperSpaceCommand::HyperSpaceCommand(Squadron *, vector3 const &, Command::CommandOrigin) // 0x6AA836
{
    mangled_assert("??0HyperSpaceCommand@@QAE@PAVSquadron@@ABVvector3@@W4CommandOrigin@Command@@@Z");
    todo("implement");
    _sub_6AA836(this, arg, arg, arg);
}

_extern _sub_6AA7EA(HyperSpaceCommand *const, Squadron *, vector3 const &, vector3 const &, vector3 const &, Command::CommandOrigin);
HyperSpaceCommand::HyperSpaceCommand(Squadron *, vector3 const &, vector3 const &, vector3 const &, Command::CommandOrigin) // 0x6AA7EA
{
    mangled_assert("??0HyperSpaceCommand@@QAE@PAVSquadron@@ABVvector3@@11W4CommandOrigin@Command@@@Z");
    todo("implement");
    _sub_6AA7EA(this, arg, arg, arg, arg, arg);
}

_extern _sub_6AA86B(HyperSpaceCommand *const, Squadron *, Command::CommandOrigin, bool);
HyperSpaceCommand::HyperSpaceCommand(Squadron *, Command::CommandOrigin, bool) // 0x6AA86B
{
    mangled_assert("??0HyperSpaceCommand@@QAE@PAVSquadron@@W4CommandOrigin@Command@@_N@Z");
    todo("implement");
    _sub_6AA86B(this, arg, arg, arg);
}

_extern void _sub_6AA987(HyperSpaceCommand *const);
HyperSpaceCommand::~HyperSpaceCommand() // 0x6AA987
{
    mangled_assert("??1HyperSpaceCommand@@UAE@XZ");
    todo("implement");
    _sub_6AA987(this);
}

_extern bool _sub_6AA9D8(HyperSpaceCommand const *const);
bool HyperSpaceCommand::allowPassiveActions() const // 0x6AA9D8
{
    mangled_assert("?allowPassiveActions@HyperSpaceCommand@@UBE_NXZ");
    todo("implement");
    bool __result = _sub_6AA9D8(this);
    return __result;
}

_extern ComResult _sub_6AAC92(HyperSpaceCommand *const, float);
ComResult HyperSpaceCommand::update(float) // 0x6AAC92
{
    mangled_assert("?update@HyperSpaceCommand@@UAE?AW4ComResult@@M@Z");
    todo("implement");
    ComResult __result = _sub_6AAC92(this, arg);
    return __result;
}

_extern void _sub_6AAC73(HyperSpaceCommand *const, vector3 const &, vector3 const &);
void HyperSpaceCommand::setOrientation(vector3 const &, vector3 const &) // 0x6AAC73
{
    mangled_assert("?setOrientation@HyperSpaceCommand@@QAEXABVvector3@@0@Z");
    todo("implement");
    _sub_6AAC73(this, arg, arg);
}

_extern void _sub_6AA9DB(HyperSpaceCommand *const, vector3 const &, bool);
void HyperSpaceCommand::bringOnMap(vector3 const &, bool) // 0x6AA9DB
{
    mangled_assert("?bringOnMap@HyperSpaceCommand@@QAEXABVvector3@@_N@Z");
    todo("implement");
    _sub_6AA9DB(this, arg, arg);
}

_extern void _sub_6AAAD5(HyperSpaceCommand *const);
void HyperSpaceCommand::exitHyperspace() // 0x6AAAD5
{
    mangled_assert("?exitHyperspace@HyperSpaceCommand@@MAEXXZ");
    todo("implement");
    _sub_6AAAD5(this);
}

_extern void _sub_6AAA75(HyperSpaceCommand *const);
void HyperSpaceCommand::dropOutOfHyperspace() // 0x6AAA75
{
    mangled_assert("?dropOutOfHyperspace@HyperSpaceCommand@@MAEXXZ");
    todo("implement");
    _sub_6AAA75(this);
}

_extern CommandType _sub_6AAB28(HyperSpaceCommand const *const);
CommandType HyperSpaceCommand::getCommandType() const // 0x6AAB28
{
    mangled_assert("?getCommandType@HyperSpaceCommand@@UBE?AW4CommandType@@XZ");
    todo("implement");
    CommandType __result = _sub_6AAB28(this);
    return __result;
}

_extern void _sub_6AABD8(HyperSpaceCommand *const);
void HyperSpaceCommand::resetCommand() // 0x6AABD8
{
    mangled_assert("?resetCommand@HyperSpaceCommand@@UAEXXZ");
    todo("implement");
    _sub_6AABD8(this);
}

_extern void _sub_6AAA3A(HyperSpaceCommand *const);
void HyperSpaceCommand::cleanUpCommand() // 0x6AAA3A
{
    mangled_assert("?cleanUpCommand@HyperSpaceCommand@@UAEXXZ");
    todo("implement");
    _sub_6AAA3A(this);
}

_extern float _sub_6AAB3A(HyperSpaceCommand const *const);
float HyperSpaceCommand::getTransitTime() const // 0x6AAB3A
{
    mangled_assert("?getTransitTime@HyperSpaceCommand@@UBEMXZ");
    todo("implement");
    float __result = _sub_6AAB3A(this);
    return __result;
}

_extern char const *_sub_6AAB34(HyperSpaceCommand const *const);
char const *HyperSpaceCommand::getName() const // 0x6AAB34
{
    mangled_assert("?getName@HyperSpaceCommand@@UBEPBDXZ");
    todo("implement");
    char const * __result = _sub_6AAB34(this);
    return __result;
}

_extern void _sub_6AAB54(HyperSpaceCommand *const);
void HyperSpaceCommand::jumpEffectToEnd() // 0x6AAB54
{
    mangled_assert("?jumpEffectToEnd@HyperSpaceCommand@@UAEXXZ");
    todo("implement");
    _sub_6AAB54(this);
}

_extern _sub_6AA7CB(HyperSpaceCommand *const, SaveGameData *);
HyperSpaceCommand::HyperSpaceCommand(SaveGameData *) // 0x6AA7CB
{
    mangled_assert("??0HyperSpaceCommand@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_6AA7CB(this, arg);
}

_extern void _sub_6AAA3F(HyperSpaceCommand *const);
void HyperSpaceCommand::defaultSettings() // 0x6AAA3F
{
    mangled_assert("?defaultSettings@HyperSpaceCommand@@QAEXXZ");
    todo("implement");
    _sub_6AAA3F(this);
}

_extern void _sub_6AABD3(HyperSpaceCommand *const);
void HyperSpaceCommand::postRestore() // 0x6AABD3
{
    mangled_assert("?postRestore@HyperSpaceCommand@@UAEXXZ");
    todo("implement");
    _sub_6AABD3(this);
}

_extern bool _sub_6AABD9(HyperSpaceCommand *const, SaveGameData *);
bool HyperSpaceCommand::restore(SaveGameData *) // 0x6AABD9
{
    mangled_assert("?restore@HyperSpaceCommand@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_6AABD9(this, arg);
    return __result;
}

_extern bool _sub_6AAC26(HyperSpaceCommand *const, SaveGameData *, SaveType);
bool HyperSpaceCommand::save(SaveGameData *, SaveType) // 0x6AAC26
{
    mangled_assert("?save@HyperSpaceCommand@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_6AAC26(this, arg, arg);
    return __result;
}

_extern _sub_6AA961(HyperSpaceCommandStaticInfo *const, ShipStatic *);
HyperSpaceCommandStaticInfo::HyperSpaceCommandStaticInfo(ShipStatic *) // 0x6AA961
{
    mangled_assert("??0HyperSpaceCommandStaticInfo@@QAE@PAVShipStatic@@@Z");
    todo("implement");
    _sub_6AA961(this, arg);
}

_extern void _sub_6AA992(HyperSpaceCommandStaticInfo *const);
HyperSpaceCommandStaticInfo::~HyperSpaceCommandStaticInfo() // 0x6AA992
{
    mangled_assert("??1HyperSpaceCommandStaticInfo@@UAE@XZ");
    todo("implement");
    _sub_6AA992(this);
}

/* ---------- private code */
#endif
