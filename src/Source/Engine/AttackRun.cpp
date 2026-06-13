#if 0
/* ---------- headers */

#include "decomp.h"
#include <Engine\DynamicPoint.h>
#include <xstring>
#include <xmemory0>
#include <Engine\Ship\Formation.h>
#include <Engine\scripting.h>
#include <Engine\Ship\FormationPattern.h>
#include <Engine\fixedpoint.h>
#include <Engine\scriptaccess.h>
#include <Engine\SOBGroupManager.h>
#include <Engine\scripttypedef.h>
#include <Engine\Modifiers\ModifierAbility.h>
#include <lua\lua.h>
#include <Mathlib\matrix3.h>
#include <Engine\MultiplierTypes.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <Engine\ship.h>
#include <Engine\SobWithMesh.h>
#include <Engine\SobRigidBody.h>
#include <Engine\sob.h>
#include <Engine\sobstatic.h>
#include <platform\timer.h>
#include <xutility>
#include <platform\platformexports.h>
#include <Engine\Ship\FormationController.h>
#include <utility>
#include <iosfwd>
#include <Engine\Ship\AdvRigidBodyController.h>
#include <vector>
#include <Engine\Physics\RigidBodyController.h>
#include <xmemory>
#include <xhash>
#include <Engine\weaponinfo.h>
#include <Engine\FormationCommands\FormationCommand.h>
#include <math.h>
#include <list>
#include <Mathlib\mathutil.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <Engine\SobWithMeshStatic.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <Engine\Universe.h>
#include <Engine\Waypoint.h>
#include <Engine\gameRandom.h>
#include <Engine\SobUnmoveable.h>
#include <util\types.h>
#include <util\colour.h>
#include <Engine\pathpoints.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <luaconfig\luabinding.h>
#include <Engine\Ship\FormationTargetInfoUtil.h>
#include <luaconfig\luaconfig.h>
#include <Engine\Subsystems\SubSystemType.h>
#include <Engine\Modifiers\ModifierUIInfo.h>
#include <Engine\Modifiers\ModifierMultiplier.h>
#include <Engine\sobtypes.h>
#include <Engine\HyperspaceManager.h>
#include <Engine\command.h>
#include <Engine\Modifiers\ModifierEffect.h>
#include <Engine\selection.h>
#include <Engine\savegamedef.h>
#include <Engine\pch.h>
#include <Engine\AttackRun.h>
#include <Engine\Modifiers\ModifierApplier.h>
#include <Engine\AttackStyle.h>
#include <Mathlib\vector2.h>
#include <Engine\Subsystems\Subsystem.h>
#include <Engine\weaponTargetInfo.h>
#include <Engine\SquadronList.h>
#include <Engine\Subsystems\SubsystemStatic.h>
#include <Engine\weaponstaticinfo.h>
#include <Engine\GunBinding.h>
#include <assist\stlexsmallvector.h>
#include <Engine\dbdefines.h>
#include <Engine\Ship\FormationTargetInfo.h>
#include <Engine\UnitCaps\UnitCaps.h>
#include <Engine\WeaponClassSpecificInfo.h>
#include <Engine\random.h>
#include <Engine\FormationCommands\FormationAttackCommand.h>
#include <Engine\Modifiers\ModifierTargetCache.h>
#include <Engine\sobid.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const AttackRunAttackStyle::m_saveToken[0]; // 0x7B9FA8
extern SaveData const AttackRunAttackStyle::m_saveData[1]; // 0x7B9F88

/* ---------- private variables */

/* ---------- public code */

_extern _sub_6B50D9(AttackRunAttackStyle *const, FormationAttackCommand const *, Formation *, Selection const &, __int32);
AttackRunAttackStyle::AttackRunAttackStyle(FormationAttackCommand const *, Formation *, Selection const &, __int32) // 0x6B50D9
{
    mangled_assert("??0AttackRunAttackStyle@@QAE@PBVFormationAttackCommand@@PAVFormation@@ABVSelection@@H@Z");
    todo("implement");
    _sub_6B50D9(this, arg, arg, arg, arg);
}

_extern void _sub_6B5156(AttackRunAttackStyle *const);
AttackRunAttackStyle::~AttackRunAttackStyle() // 0x6B5156
{
    mangled_assert("??1AttackRunAttackStyle@@UAE@XZ");
    todo("implement");
    _sub_6B5156(this);
}

_extern void _sub_6B55C1(AttackRunAttackStyle *const, vector3 &, Sob *, WeaponTargetInfo const &, Ship *);
void AttackRunAttackStyle::getUpOfEnemy(vector3 &, Sob *, WeaponTargetInfo const &, Ship *) // 0x6B55C1
{
    mangled_assert("?getUpOfEnemy@AttackRunAttackStyle@@AAEXAAVvector3@@PAVSob@@ABVWeaponTargetInfo@@PAVShip@@@Z");
    todo("implement");
    _sub_6B55C1(this, arg, arg, arg, arg);
}

_extern AttackStyle::AttackStyleResult _sub_6B5780(AttackRunAttackStyle *const, float);
AttackStyle::AttackStyleResult AttackRunAttackStyle::update(float) // 0x6B5780
{
    mangled_assert("?update@AttackRunAttackStyle@@UAE?AW4AttackStyleResult@AttackStyle@@M@Z");
    todo("implement");
    AttackStyle::AttackStyleResult __result = _sub_6B5780(this, arg);
    return __result;
}

_extern vector3 _sub_6B51C4(AttackRunAttackStyle *const);
vector3 AttackRunAttackStyle::determineBreakDestination() // 0x6B51C4
{
    mangled_assert("?determineBreakDestination@AttackRunAttackStyle@@AAE?AVvector3@@XZ");
    todo("implement");
    vector3 __result = _sub_6B51C4(this);
    return __result;
}

_extern Sob *_sub_6B5552(AttackRunAttackStyle const *const);
Sob *AttackRunAttackStyle::getSobToNotAvoid() const // 0x6B5552
{
    mangled_assert("?getSobToNotAvoid@AttackRunAttackStyle@@UBEPAVSob@@XZ");
    todo("implement");
    Sob * __result = _sub_6B5552(this);
    return __result;
}

_extern _sub_6B50BA(AttackRunAttackStyle *const, SaveGameData *);
AttackRunAttackStyle::AttackRunAttackStyle(SaveGameData *) // 0x6B50BA
{
    mangled_assert("??0AttackRunAttackStyle@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_6B50BA(this, arg);
}

_extern void _sub_6B51BC(AttackRunAttackStyle *const);
void AttackRunAttackStyle::defaultSettings() // 0x6B51BC
{
    mangled_assert("?defaultSettings@AttackRunAttackStyle@@QAEXXZ");
    todo("implement");
    _sub_6B51BC(this);
}

_extern void _sub_6B56E1(AttackRunAttackStyle *const);
void AttackRunAttackStyle::postRestore() // 0x6B56E1
{
    mangled_assert("?postRestore@AttackRunAttackStyle@@UAEXXZ");
    todo("implement");
    _sub_6B56E1(this);
}

_extern bool _sub_6B56E6(AttackRunAttackStyle *const, SaveGameData *);
bool AttackRunAttackStyle::restore(SaveGameData *) // 0x6B56E6
{
    mangled_assert("?restore@AttackRunAttackStyle@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_6B56E6(this, arg);
    return __result;
}

_extern bool _sub_6B5733(AttackRunAttackStyle *const, SaveGameData *, SaveType);
bool AttackRunAttackStyle::save(SaveGameData *, SaveType) // 0x6B5733
{
    mangled_assert("?save@AttackRunAttackStyle@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_6B5733(this, arg, arg);
    return __result;
}

_extern _sub_6B5104(AttackRunStatic *const);
AttackRunStatic::AttackRunStatic() // 0x6B5104
{
    mangled_assert("??0AttackRunStatic@@QAE@XZ");
    todo("implement");
    _sub_6B5104(this);
}

_extern void _sub_6B5161(AttackRunStatic *const);
AttackRunStatic::~AttackRunStatic() // 0x6B5161
{
    mangled_assert("??1AttackRunStatic@@UAE@XZ");
    todo("implement");
    _sub_6B5161(this);
}

_extern bool _sub_6B5636(AttackRunStatic *const, LuaConfig &);
bool AttackRunStatic::loadData(LuaConfig &) // 0x6B5636
{
    mangled_assert("?loadData@AttackRunStatic@@UAE_NAAVLuaConfig@@@Z");
    todo("implement");
    bool __result = _sub_6B5636(this, arg);
    return __result;
}

_extern char const *_sub_6B558E(AttackRunStatic::CoordSysChoice);
char const *AttackRunStatic::getStringForCoordSysChoice(AttackRunStatic::CoordSysChoice n) // 0x6B558E
{
    mangled_assert("?getStringForCoordSysChoice@AttackRunStatic@@SGPBDW4CoordSysChoice@1@@Z");
    todo("implement");
    char const * __result = _sub_6B558E(n);
    return __result;
}

/* ---------- private code */
#endif
