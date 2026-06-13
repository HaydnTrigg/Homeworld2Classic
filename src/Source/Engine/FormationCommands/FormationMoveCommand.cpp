#if 0
/* ---------- headers */

#include "decomp.h"
#include <Engine\DynamicPoint.h>
#include <xstring>
#include <xmemory0>
#include <Engine\HyperspaceManager.h>
#include <Engine\fixedpoint.h>
#include <Engine\Player.h>
#include <Engine\ResearchManager.h>
#include <Engine\Modifiers\ModifierUIInfo.h>
#include <Engine\Modifiers\ModifierMultiplier.h>
#include <Engine\Modifiers\ModifierEffect.h>
#include <Engine\MultiplierTypes.h>
#include <new>
#include <Engine\Squadron.h>
#include <Engine\GameEventDefs.h>
#include <xstddef>
#include <type_traits>
#include <Engine\ship.h>
#include <Engine\GameEventSys.h>
#include <Engine\SobWithMesh.h>
#include <Engine\SobRigidBody.h>
#include <Engine\config.h>
#include <Engine\sob.h>
#include <Engine\Modifiers\ModifierApplier.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <Engine\shipstatic.h>
#include <profile\profile.h>
#include <vector>
#include <Engine\dbdefines.h>
#include <Engine\weaponstaticinfo.h>
#include <iostream>
#include <xmemory>
#include <Engine\UnitCaps\UnitCaps.h>
#include <Engine\GunBinding.h>
#include <xhash>
#include <Engine\Ship\FormationTargetInfoUtil.h>
#include <list>
#include <Engine\playerresourcetype.h>
#include <Engine\TeamColourRegistry.h>
#include <Engine\WeaponClassSpecificInfo.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <Engine\SobWithMeshStatic.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <Engine\Ship\FormationTargetInfo.h>
#include <util\types.h>
#include <Engine\MeshAnimation.h>
#include <util\colour.h>
#include <Engine\ShieldTypes.h>
#include <Engine\savegameimpl.h>
#include <Engine\pathpoints.h>
#include <Engine\SOBGroupManager.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Engine\ITweak.h>
#include <Engine\MoveCommand.h>
#include <Engine\sobtypes.h>
#include <Engine\command.h>
#include <Engine\selection.h>
#include <Engine\Modifiers\ModifierAbility.h>
#include <Engine\savegamedef.h>
#include <Engine\commandtype.h>
#include <Engine\pch.h>
#include <Engine\FormationCommands\FormationMoveCommand.h>
#include <Engine\FormationCommands\FormationCommand.h>
#include <platform\timer.h>
#include <Mathlib\vector2.h>
#include <platform\platformexports.h>
#include <Engine\abilities.h>
#include <Engine\Ship\Formation.h>
#include <Engine\SquadronList.h>
#include <Engine\Ship\FormationPattern.h>
#include <Engine\Race.h>
#include <assist\stlexsmallvector.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <Engine\BuildManager.h>
#include <Engine\weaponTargetInfo.h>
#include <Engine\Universe.h>
#include <Engine\MADState.h>
#include <Engine\StrikeGroup.h>
#include <Engine\Waypoint.h>
#include <luaconfig\luabinding.h>
#include <Engine\SobUnmoveable.h>
#include <luaconfig\luaconfig.h>
#include <lua\lua.h>
#include <Engine\sobid.h>
#include <Engine\Tactics.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const FormationMoveCommand::m_saveToken[0]; // 0x7B95B8
extern SaveData const FormationMoveCommand::m_saveData[4]; // 0x7B95D0

/* ---------- private variables */

/* ---------- public code */

_extern _sub_6B05A7(FormationMoveCommand *const, Formation *, FormationTargetInfo const &);
FormationMoveCommand::FormationMoveCommand(Formation *, FormationTargetInfo const &) // 0x6B05A7
{
    mangled_assert("??0FormationMoveCommand@@QAE@PAVFormation@@ABVFormationTargetInfo@@@Z");
    todo("implement");
    _sub_6B05A7(this, arg, arg);
}

_extern void _sub_6B0764(FormationMoveCommand *const);
FormationMoveCommand::~FormationMoveCommand() // 0x6B0764
{
    mangled_assert("??1FormationMoveCommand@@UAE@XZ");
    todo("implement");
    _sub_6B0764(this);
}

_extern FormationCommand::FormationCommandType _sub_6B08FF(FormationMoveCommand const *const);
FormationCommand::FormationCommandType FormationMoveCommand::getType() const // 0x6B08FF
{
    mangled_assert("?getType@FormationMoveCommand@@UBE?AW4FormationCommandType@FormationCommand@@XZ");
    todo("implement");
    FormationCommand::FormationCommandType __result = _sub_6B08FF(this);
    return __result;
}

_extern void _sub_6B0905(FormationMoveCommand *const, bool);
void FormationMoveCommand::journeyAnimation(bool) // 0x6B0905
{
    mangled_assert("?journeyAnimation@FormationMoveCommand@@AAEX_N@Z");
    todo("implement");
    _sub_6B0905(this, arg);
}

_extern FormationCommand::CommandResult _sub_6B0A01(FormationMoveCommand *const, float);
FormationCommand::CommandResult FormationMoveCommand::update(float) // 0x6B0A01
{
    mangled_assert("?update@FormationMoveCommand@@UAE?AW4CommandResult@FormationCommand@@M@Z");
    todo("implement");
    FormationCommand::CommandResult __result = _sub_6B0A01(this, arg);
    return __result;
}

_extern bool _sub_6B07D5(FormationMoveCommand const *const);
bool FormationMoveCommand::CanRetaliate() const // 0x6B07D5
{
    mangled_assert("?CanRetaliate@FormationMoveCommand@@ABE_NXZ");
    todo("implement");
    bool __result = _sub_6B07D5(this);
    return __result;
}

_extern _sub_6B0715(FormationMoveCommand *const, SaveGameData *);
FormationMoveCommand::FormationMoveCommand(SaveGameData *) // 0x6B0715
{
    mangled_assert("??0FormationMoveCommand@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_6B0715(this, arg);
}

_extern void _sub_6B08E0(FormationMoveCommand *const);
void FormationMoveCommand::defaultSettings() // 0x6B08E0
{
    mangled_assert("?defaultSettings@FormationMoveCommand@@QAEXXZ");
    todo("implement");
    _sub_6B08E0(this);
}

_extern void _sub_6B0955(FormationMoveCommand *const);
void FormationMoveCommand::postRestore() // 0x6B0955
{
    mangled_assert("?postRestore@FormationMoveCommand@@UAEXXZ");
    todo("implement");
    _sub_6B0955(this);
}

_extern bool _sub_6B095A(FormationMoveCommand *const, SaveGameData *);
bool FormationMoveCommand::restore(SaveGameData *) // 0x6B095A
{
    mangled_assert("?restore@FormationMoveCommand@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_6B095A(this, arg);
    return __result;
}

_extern bool _sub_6B09A7(FormationMoveCommand *const, SaveGameData *, SaveType);
bool FormationMoveCommand::save(SaveGameData *, SaveType) // 0x6B09A7
{
    mangled_assert("?save@FormationMoveCommand@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_6B09A7(this, arg, arg);
    return __result;
}

/* ---------- private code */
#endif
