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

_extern _sub_6AB02B(MoveToSobCommand *const, Squadron *, SobID const &, vector3 const &, Command::CommandOrigin);
MoveToSobCommand::MoveToSobCommand(Squadron *, SobID const &, vector3 const &, Command::CommandOrigin) // 0x6AB02B
{
    mangled_assert("??0MoveToSobCommand@@QAE@PAVSquadron@@ABVSobID@@ABVvector3@@W4CommandOrigin@Command@@@Z");
    todo("implement");
    _sub_6AB02B(this, arg, arg, arg, arg);
}

_extern void _sub_6AB0AE(MoveToSobCommand *const);
MoveToSobCommand::~MoveToSobCommand() // 0x6AB0AE
{
    mangled_assert("??1MoveToSobCommand@@UAE@XZ");
    todo("implement");
    _sub_6AB0AE(this);
}

_extern void _sub_6AB78E(MoveToSobCommand *const, vector3 const &);
void MoveToSobCommand::useSubDestination(vector3 const &) // 0x6AB78E
{
    mangled_assert("?useSubDestination@MoveToSobCommand@@QAEXABVvector3@@@Z");
    todo("implement");
    _sub_6AB78E(this, arg);
}

_extern char const *_sub_6AB23E(MoveToSobCommand const *const);
char const *MoveToSobCommand::getName() const // 0x6AB23E
{
    mangled_assert("?getName@MoveToSobCommand@@UBEPBDXZ");
    todo("implement");
    char const * __result = _sub_6AB23E(this);
    return __result;
}

_extern CommandType _sub_6AB156(MoveToSobCommand const *const);
CommandType MoveToSobCommand::getCommandType() const // 0x6AB156
{
    mangled_assert("?getCommandType@MoveToSobCommand@@UBE?AW4CommandType@@XZ");
    todo("implement");
    CommandType __result = _sub_6AB156(this);
    return __result;
}

_extern ComResult _sub_6AB2F7(MoveToSobCommand *const, float);
ComResult MoveToSobCommand::update(float) // 0x6AB2F7
{
    mangled_assert("?update@MoveToSobCommand@@UAE?AW4ComResult@@M@Z");
    todo("implement");
    ComResult __result = _sub_6AB2F7(this, arg);
    return __result;
}

_extern vector3 const &_sub_6AB15A(MoveToSobCommand const *const);
vector3 const &MoveToSobCommand::getDestinationDtrm() const // 0x6AB15A
{
    mangled_assert("?getDestinationDtrm@MoveToSobCommand@@UBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_6AB15A(this);
    return __result;
}

_extern vector3 const &_sub_6AB1CF(MoveToSobCommand const *const);
vector3 const &MoveToSobCommand::getDestinationVis() const // 0x6AB1CF
{
    mangled_assert("?getDestinationVis@MoveToSobCommand@@UBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_6AB1CF(this);
    return __result;
}

_extern void _sub_6AB24C(MoveToSobCommand *const);
void MoveToSobCommand::resetCommand() // 0x6AB24C
{
    mangled_assert("?resetCommand@MoveToSobCommand@@UAEXXZ");
    todo("implement");
    _sub_6AB24C(this);
}

_extern _sub_6AAFE6(MoveToSobCommand *const, SaveGameData *);
MoveToSobCommand::MoveToSobCommand(SaveGameData *) // 0x6AAFE6
{
    mangled_assert("??0MoveToSobCommand@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_6AAFE6(this, arg);
}

_extern void _sub_6AB132(MoveToSobCommand *const);
void MoveToSobCommand::defaultSettings() // 0x6AB132
{
    mangled_assert("?defaultSettings@MoveToSobCommand@@QAEXXZ");
    todo("implement");
    _sub_6AB132(this);
}

_extern void _sub_6AB247(MoveToSobCommand *const);
void MoveToSobCommand::postRestore() // 0x6AB247
{
    mangled_assert("?postRestore@MoveToSobCommand@@UAEXXZ");
    todo("implement");
    _sub_6AB247(this);
}

_extern bool _sub_6AB25D(MoveToSobCommand *const, SaveGameData *);
bool MoveToSobCommand::restore(SaveGameData *) // 0x6AB25D
{
    mangled_assert("?restore@MoveToSobCommand@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_6AB25D(this, arg);
    return __result;
}

_extern bool _sub_6AB2AA(MoveToSobCommand *const, SaveGameData *, SaveType);
bool MoveToSobCommand::save(SaveGameData *, SaveType) // 0x6AB2AA
{
    mangled_assert("?save@MoveToSobCommand@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_6AB2AA(this, arg, arg);
    return __result;
}

_extern _sub_6AB09A(MoveToSobCommandStaticInfo *const);
MoveToSobCommandStaticInfo::MoveToSobCommandStaticInfo() // 0x6AB09A
{
    mangled_assert("??0MoveToSobCommandStaticInfo@@QAE@XZ");
    todo("implement");
    _sub_6AB09A(this);
}

_extern void _sub_6AB0ED(MoveToSobCommandStaticInfo *const);
MoveToSobCommandStaticInfo::~MoveToSobCommandStaticInfo() // 0x6AB0ED
{
    mangled_assert("??1MoveToSobCommandStaticInfo@@UAE@XZ");
    todo("implement");
    _sub_6AB0ED(this);
}

/* ---------- private code */
#endif
