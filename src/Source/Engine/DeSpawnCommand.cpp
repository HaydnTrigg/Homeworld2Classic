#if 0
/* ---------- headers */

#include "decomp.h"
#include <Engine\DynamicPoint.h>
#include <xstring>
#include <Engine\Ship\Formation.h>
#include <xmemory0>
#include <Engine\Ship\FormationPattern.h>
#include <Engine\fixedpoint.h>
#include <Mathlib\matrix3.h>
#include <Engine\MultiplierTypes.h>
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
#include <xmemory>
#include <Engine\SOBGroupManager.h>
#include <xhash>
#include <list>
#include <Engine\CoordSysUtilities.h>
#include <Mathlib\vector3.h>
#include <Engine\SobWithMeshStatic.h>
#include <map>
#include <platform\timer.h>
#include <xtree>
#include <platform\platformexports.h>
#include <Engine\EngineTrailSystem.h>
#include <Engine\ITweak.h>
#include <Engine\Tactics.h>
#include <util\types.h>
#include <util\colour.h>
#include <Engine\EffectCreate.h>
#include <Engine\pathpoints.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Engine\command.h>
#include <Engine\sobtypes.h>
#include <Engine\selection.h>
#include <Engine\savegamedef.h>
#include <profile\profile.h>
#include <iostream>
#include <Engine\Universe.h>
#include <Engine\Waypoint.h>
#include <Engine\pch.h>
#include <Engine\DeSpawnCommand.h>
#include <Engine\SobUnmoveable.h>
#include <Engine\HyperSpaceBaseCommand.h>
#include <Mathlib\vector2.h>
#include <Engine\SquadronList.h>
#include <assist\stlexsmallvector.h>
#include <Engine\HyperspaceManager.h>
#include <Engine\Ship\FormationTargetInfo.h>
#include <Engine\dbdefines.h>
#include <Engine\UnitCaps\UnitCaps.h>
#include <Engine\sobid.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const DeSpawnCommand::m_saveToken[0]; // 0x7B8D00
extern SaveData const DeSpawnCommand::m_saveData[6]; // 0x7B8D10

/* ---------- private variables */

/* ---------- public code */

_extern _sub_6AC4F5(DeSpawnCommand *const, Squadron *, Command::CommandOrigin);
DeSpawnCommand::DeSpawnCommand(Squadron *, Command::CommandOrigin) // 0x6AC4F5
{
    mangled_assert("??0DeSpawnCommand@@QAE@PAVSquadron@@W4CommandOrigin@Command@@@Z");
    todo("implement");
    _sub_6AC4F5(this, arg, arg);
}

_extern void _sub_6AC5CA(DeSpawnCommand *const);
DeSpawnCommand::~DeSpawnCommand() // 0x6AC5CA
{
    mangled_assert("??1DeSpawnCommand@@UAE@XZ");
    todo("implement");
    _sub_6AC5CA(this);
}

_extern bool _sub_6AC5F7(DeSpawnCommand const *const);
bool DeSpawnCommand::allowPassiveActions() const // 0x6AC5F7
{
    mangled_assert("?allowPassiveActions@DeSpawnCommand@@UBE_NXZ");
    todo("implement");
    bool __result = _sub_6AC5F7(this);
    return __result;
}

_extern ComResult _sub_6AC76C(DeSpawnCommand *const, float);
ComResult DeSpawnCommand::update(float) // 0x6AC76C
{
    mangled_assert("?update@DeSpawnCommand@@UAE?AW4ComResult@@M@Z");
    todo("implement");
    ComResult __result = _sub_6AC76C(this, arg);
    return __result;
}

_extern CommandType _sub_6AC63E(DeSpawnCommand const *const);
CommandType DeSpawnCommand::getCommandType() const // 0x6AC63E
{
    mangled_assert("?getCommandType@DeSpawnCommand@@UBE?AW4CommandType@@XZ");
    todo("implement");
    CommandType __result = _sub_6AC63E(this);
    return __result;
}

_extern void _sub_6AC67F(DeSpawnCommand *const);
void DeSpawnCommand::resetCommand() // 0x6AC67F
{
    mangled_assert("?resetCommand@DeSpawnCommand@@UAEXXZ");
    todo("implement");
    _sub_6AC67F(this);
}

_extern void _sub_6AC5FF(DeSpawnCommand *const);
void DeSpawnCommand::cleanUpCommand() // 0x6AC5FF
{
    mangled_assert("?cleanUpCommand@DeSpawnCommand@@UAEXXZ");
    todo("implement");
    _sub_6AC5FF(this);
}

_extern void _sub_6AC71A(DeSpawnCommand *const, vector3 const &, vector3 const &);
void DeSpawnCommand::setOrientation(vector3 const &, vector3 const &) // 0x6AC71A
{
    mangled_assert("?setOrientation@DeSpawnCommand@@QAEXABVvector3@@0@Z");
    todo("implement");
    _sub_6AC71A(this, arg, arg);
}

_extern void _sub_6AC735(DeSpawnCommand *const, vector3 const &, bool, bool);
void DeSpawnCommand::spawn(vector3 const &, bool, bool) // 0x6AC735
{
    mangled_assert("?spawn@DeSpawnCommand@@QAEXABVvector3@@_N1@Z");
    todo("implement");
    _sub_6AC735(this, arg, arg, arg);
}

_extern char const *_sub_6AC642(DeSpawnCommand const *const);
char const *DeSpawnCommand::getName() const // 0x6AC642
{
    mangled_assert("?getName@DeSpawnCommand@@UBEPBDXZ");
    todo("implement");
    char const * __result = _sub_6AC642(this);
    return __result;
}

_extern void _sub_6AC636(DeSpawnCommand *const);
void DeSpawnCommand::exitHyperspace() // 0x6AC636
{
    mangled_assert("?exitHyperspace@DeSpawnCommand@@MAEXXZ");
    todo("implement");
    _sub_6AC636(this);
}

_extern void _sub_6AC62E(DeSpawnCommand *const);
void DeSpawnCommand::dropOutOfHyperspace() // 0x6AC62E
{
    mangled_assert("?dropOutOfHyperspace@DeSpawnCommand@@MAEXXZ");
    todo("implement");
    _sub_6AC62E(this);
}

_extern void _sub_6AC652(DeSpawnCommand *const);
void DeSpawnCommand::jumpEffectToEnd() // 0x6AC652
{
    mangled_assert("?jumpEffectToEnd@DeSpawnCommand@@UAEXXZ");
    todo("implement");
    _sub_6AC652(this);
}

_extern _sub_6AC4D6(DeSpawnCommand *const, SaveGameData *);
DeSpawnCommand::DeSpawnCommand(SaveGameData *) // 0x6AC4D6
{
    mangled_assert("??0DeSpawnCommand@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_6AC4D6(this, arg);
}

_extern void _sub_6AC600(DeSpawnCommand *const);
void DeSpawnCommand::defaultSettings() // 0x6AC600
{
    mangled_assert("?defaultSettings@DeSpawnCommand@@QAEXXZ");
    todo("implement");
    _sub_6AC600(this);
}

_extern void _sub_6AC67A(DeSpawnCommand *const);
void DeSpawnCommand::postRestore() // 0x6AC67A
{
    mangled_assert("?postRestore@DeSpawnCommand@@UAEXXZ");
    todo("implement");
    _sub_6AC67A(this);
}

_extern bool _sub_6AC680(DeSpawnCommand *const, SaveGameData *);
bool DeSpawnCommand::restore(SaveGameData *) // 0x6AC680
{
    mangled_assert("?restore@DeSpawnCommand@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_6AC680(this, arg);
    return __result;
}

_extern bool _sub_6AC6CD(DeSpawnCommand *const, SaveGameData *, SaveType);
bool DeSpawnCommand::save(SaveGameData *, SaveType) // 0x6AC6CD
{
    mangled_assert("?save@DeSpawnCommand@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_6AC6CD(this, arg, arg);
    return __result;
}

/* ---------- private code */
#endif
