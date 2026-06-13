#if 0
/* ---------- headers */

#include "decomp.h"
#include <Engine\DynamicPoint.h>
#include <Engine\MADState.h>
#include <xstring>
#include <luaconfig\luabinding.h>
#include <xmemory0>
#include <luaconfig\luaconfig.h>
#include <lua\lua.h>
#include <Engine\fixedpoint.h>
#include <Engine\Race.h>
#include <util\fixed.h>
#include <Engine\BuildManager.h>
#include <Engine\Ship\FormationTargetInfo.h>
#include <new>
#include <Engine\GameEventDefs.h>
#include <Engine\Squadron.h>
#include <Engine\GameEventSys.h>
#include <Engine\ship.h>
#include <xstddef>
#include <type_traits>
#include <Engine\SobWithMesh.h>
#include <Engine\SobRigidBody.h>
#include <Engine\dbdefines.h>
#include <Engine\sob.h>
#include <Engine\UnitCaps\UnitCaps.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <Engine\HyperSpaceViaGateCommand.h>
#include <xmemory>
#include <xhash>
#include <list>
#include <Engine\playerresourcetype.h>
#include <Engine\TeamColourRegistry.h>
#include <Engine\Player.h>
#include <Engine\ResearchManager.h>
#include <Engine\Ship\Formation.h>
#include <Engine\Ship\FormationPattern.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <Engine\SOBGroupManager.h>
#include <util\types.h>
#include <Engine\MeshAnimation.h>
#include <Engine\HyperSpaceBaseCommand.h>
#include <util\colour.h>
#include <Engine\savegameimpl.h>
#include <Engine\pathpoints.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Mathlib\mathutil.h>
#include <Engine\command.h>
#include <Engine\sobtypes.h>
#include <Engine\selection.h>
#include <Engine\savegamedef.h>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <Engine\commandtype.h>
#include <Engine\pch.h>
#include <Engine\FormHyperspaceGateCommand.h>
#include <Engine\SquadronList.h>
#include <profile\profile.h>
#include <iostream>
#include <Engine\Ship\FormationTargetInfoUtil.h>
#include <assist\stlexsmallvector.h>
#include <Engine\Universe.h>
#include <Engine\Waypoint.h>
#include <Engine\SobUnmoveable.h>
#include <Engine\MoveCommand.h>
#include <Engine\sobid.h>
#include <Engine\HyperspaceManager.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const FormHyperspaceGateCommand::m_saveToken[0]; // 0x7B6A58
extern SaveData const FormHyperspaceGateCommand::m_saveData[4]; // 0x7B6A78

/* ---------- private variables */

/* ---------- public code */

_extern _sub_69AAA6(FormHyperspaceGateCommand *const, Squadron *, Squadron *, Command::CommandOrigin);
FormHyperspaceGateCommand::FormHyperspaceGateCommand(Squadron *, Squadron *, Command::CommandOrigin) // 0x69AAA6
{
    mangled_assert("??0FormHyperspaceGateCommand@@QAE@PAVSquadron@@0W4CommandOrigin@Command@@@Z");
    todo("implement");
    _sub_69AAA6(this, arg, arg, arg);
}

_extern void _sub_69AB1D(FormHyperspaceGateCommand *const);
FormHyperspaceGateCommand::~FormHyperspaceGateCommand() // 0x69AB1D
{
    mangled_assert("??1FormHyperspaceGateCommand@@UAE@XZ");
    todo("implement");
    _sub_69AB1D(this);
}

_extern bool _sub_69AB98(FormHyperspaceGateCommand *const, CommandType, Command *);
bool FormHyperspaceGateCommand::canBeInterrupted(CommandType, Command *) // 0x69AB98
{
    mangled_assert("?canBeInterrupted@FormHyperspaceGateCommand@@UAE_NW4CommandType@@PAVCommand@@@Z");
    todo("implement");
    bool __result = _sub_69AB98(this, arg, arg);
    return __result;
}

_extern bool _sub_69AC6A(FormHyperspaceGateCommand *const, Squadron const *);
bool FormHyperspaceGateCommand::registerWithGate(Squadron const *) // 0x69AC6A
{
    mangled_assert("?registerWithGate@FormHyperspaceGateCommand@@QAE_NPBVSquadron@@@Z");
    todo("implement");
    bool __result = _sub_69AC6A(this, arg);
    return __result;
}

_extern Fixed<10> _sub_69ABD1(Squadron const *);
Fixed<10> FormHyperspaceGateCommand::costOfSettingUpGate(Squadron const *gate) // 0x69ABD1
{
    mangled_assert("?costOfSettingUpGate@FormHyperspaceGateCommand@@SG?AV?$Fixed@$09@@PBVSquadron@@@Z");
    todo("implement");
    Fixed<10> __result = _sub_69ABD1(gate);
    return __result;
}

_extern ComResult _sub_69AE09(FormHyperspaceGateCommand *const, float);
ComResult FormHyperspaceGateCommand::update(float) // 0x69AE09
{
    mangled_assert("?update@FormHyperspaceGateCommand@@UAE?AW4ComResult@@M@Z");
    todo("implement");
    ComResult __result = _sub_69AE09(this, arg);
    return __result;
}

_extern Squadron *_sub_69AC53(FormHyperspaceGateCommand const *const);
Squadron *FormHyperspaceGateCommand::getTargetGate() const // 0x69AC53
{
    mangled_assert("?getTargetGate@FormHyperspaceGateCommand@@QBEPAVSquadron@@XZ");
    todo("implement");
    Squadron * __result = _sub_69AC53(this);
    return __result;
}

_extern CommandType _sub_69AC11(FormHyperspaceGateCommand const *const);
CommandType FormHyperspaceGateCommand::getCommandType() const // 0x69AC11
{
    mangled_assert("?getCommandType@FormHyperspaceGateCommand@@UBE?AW4CommandType@@XZ");
    todo("implement");
    CommandType __result = _sub_69AC11(this);
    return __result;
}

_extern vector3 const &_sub_69AC15(FormHyperspaceGateCommand const *const);
vector3 const &FormHyperspaceGateCommand::getDestinationDtrm() const // 0x69AC15
{
    mangled_assert("?getDestinationDtrm@FormHyperspaceGateCommand@@UBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_69AC15(this);
    return __result;
}

_extern vector3 const &_sub_69AC31(FormHyperspaceGateCommand const *const);
vector3 const &FormHyperspaceGateCommand::getDestinationVis() const // 0x69AC31
{
    mangled_assert("?getDestinationVis@FormHyperspaceGateCommand@@UBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_69AC31(this);
    return __result;
}

_extern void _sub_69ABCC(FormHyperspaceGateCommand *const);
void FormHyperspaceGateCommand::cleanUpCommand() // 0x69ABCC
{
    mangled_assert("?cleanUpCommand@FormHyperspaceGateCommand@@UAEXXZ");
    todo("implement");
    _sub_69ABCC(this);
}

_extern void _sub_69AD61(FormHyperspaceGateCommand *const);
void FormHyperspaceGateCommand::resetCommand() // 0x69AD61
{
    mangled_assert("?resetCommand@FormHyperspaceGateCommand@@UAEXXZ");
    todo("implement");
    _sub_69AD61(this);
}

_extern char const *_sub_69AC4D(FormHyperspaceGateCommand const *const);
char const *FormHyperspaceGateCommand::getName() const // 0x69AC4D
{
    mangled_assert("?getName@FormHyperspaceGateCommand@@UBEPBDXZ");
    todo("implement");
    char const * __result = _sub_69AC4D(this);
    return __result;
}

_extern _sub_69AA5E(FormHyperspaceGateCommand *const, SaveGameData *);
FormHyperspaceGateCommand::FormHyperspaceGateCommand(SaveGameData *) // 0x69AA5E
{
    mangled_assert("??0FormHyperspaceGateCommand@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_69AA5E(this, arg);
}

_extern void _sub_69AC05(FormHyperspaceGateCommand *const);
void FormHyperspaceGateCommand::defaultSettings() // 0x69AC05
{
    mangled_assert("?defaultSettings@FormHyperspaceGateCommand@@QAEXXZ");
    todo("implement");
    _sub_69AC05(this);
}

_extern void _sub_69AC65(FormHyperspaceGateCommand *const);
void FormHyperspaceGateCommand::postRestore() // 0x69AC65
{
    mangled_assert("?postRestore@FormHyperspaceGateCommand@@UAEXXZ");
    todo("implement");
    _sub_69AC65(this);
}

_extern bool _sub_69AD6F(FormHyperspaceGateCommand *const, SaveGameData *);
bool FormHyperspaceGateCommand::restore(SaveGameData *) // 0x69AD6F
{
    mangled_assert("?restore@FormHyperspaceGateCommand@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_69AD6F(this, arg);
    return __result;
}

_extern bool _sub_69ADBC(FormHyperspaceGateCommand *const, SaveGameData *, SaveType);
bool FormHyperspaceGateCommand::save(SaveGameData *, SaveType) // 0x69ADBC
{
    mangled_assert("?save@FormHyperspaceGateCommand@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_69ADBC(this, arg, arg);
    return __result;
}

_extern _sub_69AAFD(FormHyperspaceGateCommandStaticInfo *const, ShipStatic *);
FormHyperspaceGateCommandStaticInfo::FormHyperspaceGateCommandStaticInfo(ShipStatic *) // 0x69AAFD
{
    mangled_assert("??0FormHyperspaceGateCommandStaticInfo@@QAE@PAVShipStatic@@@Z");
    todo("implement");
    _sub_69AAFD(this, arg);
}

_extern void _sub_69AB58(FormHyperspaceGateCommandStaticInfo *const);
FormHyperspaceGateCommandStaticInfo::~FormHyperspaceGateCommandStaticInfo() // 0x69AB58
{
    mangled_assert("??1FormHyperspaceGateCommandStaticInfo@@UAE@XZ");
    todo("implement");
    _sub_69AB58(this);
}

/* ---------- private code */
#endif
