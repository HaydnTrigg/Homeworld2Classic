#if 0
/* ---------- headers */

#include "decomp.h"
#include <Engine\DynamicPoint.h>
#include <xstring>
#include <Engine\FlyRoundAttackStyle.h>
#include <Engine\Modifiers\ModifierAbility.h>
#include <xmemory0>
#include <Engine\Ship\FormationTargetInfo.h>
#include <Engine\fixedpoint.h>
#include <Engine\dbdefines.h>
#include <Engine\WeaponStatic.h>
#include <Engine\visibility.h>
#include <Engine\UnitCaps\UnitCaps.h>
#include <Engine\MultiplierTypes.h>
#include <Engine\Ship\FlightManeuverManager.h>
#include <new>
#include <Engine\Squadron.h>
#include <xstddef>
#include <type_traits>
#include <Engine\ship.h>
#include <Engine\gameRandom.h>
#include <Engine\weapon.h>
#include <Engine\FormationCommands\FormationAttackCommand.h>
#include <Engine\WeaponFire\WeaponFire.h>
#include <Engine\SobWithMesh.h>
#include <Engine\FormationCommands\FormationCommand.h>
#include <Engine\SobRigidBody.h>
#include <Engine\weaponfiretypes.h>
#include <Engine\sob.h>
#include <Engine\sobstatic.h>
#include <xutility>
#include <iosfwd>
#include <Engine\WeaponClassSpecificInfo.h>
#include <vector>
#include <xmemory>
#include <Engine\Collision\Collision.h>
#include <Engine\config.h>
#include <Engine\Ship\Formation.h>
#include <xhash>
#include <Engine\Ship\FormationPattern.h>
#include <Engine\weaponinfo.h>
#include <Engine\Subsystems\Subsystem.h>
#include <Engine\Subsystems\SubsystemStatic.h>
#include <math.h>
#include <Engine\MoveToTargetAndShootAttackStyle.h>
#include <list>
#include <Engine\playerresourcetype.h>
#include <Mathlib\mathutil.h>
#include <Engine\DogFightAttackStyle.h>
#include <Engine\TeamColourRegistry.h>
#include <Mathlib\vector3.h>
#include <Engine\SOBGroupManager.h>
#include <Mathlib\vector4.h>
#include <Engine\ITweak.h>
#include <Engine\SobWithMeshStatic.h>
#include <Engine\Tactics.h>
#include <xtree>
#include <Mathlib\quat.h>
#include <boost\scoped_ptr.hpp>
#include <Engine\SobZeroMassBody.h>
#include <Engine\Ship\FormationTargetInfoUtil.h>
#include <Engine\sobzeromassbodystatic.h>
#include <util\types.h>
#include <util\colour.h>
#include <Engine\ShieldTypes.h>
#include <luaconfig\luaconfig.h>
#include <lua\lua.h>
#include <Engine\pathpoints.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <boost\cstdint.hpp>
#include <Engine\Modifiers\ModifierUIInfo.h>
#include <platform\timer.h>
#include <Engine\Modifiers\ModifierMultiplier.h>
#include <platform\platformexports.h>
#include <Engine\Modifiers\ModifierEffect.h>
#include <Engine\Subsystems\SubSystemType.h>
#include <Engine\random.h>
#include <Engine\CircleStrafe.h>
#include <Engine\CircleStrafeBase.h>
#include <Engine\command.h>
#include <Engine\sobtypes.h>
#include <Engine\selection.h>
#include <Engine\savegamedef.h>
#include <Engine\Modifiers\ModifierApplier.h>
#include <Engine\commandtype.h>
#include <Engine\pch.h>
#include <Engine\AttackStyle.h>
#include <Engine\Race.h>
#include <Engine\JustShootAttackStyle.h>
#include <Mathlib\vector2.h>
#include <Mathlib\fastmath.h>
#include <Engine\weaponTargetInfo.h>
#include <Engine\abilities.h>
#include <Engine\SquadronList.h>
#include <Engine\FaceTargetAttackStyle.h>
#include <Engine\BuildManager.h>
#include <Engine\Universe.h>
#include <Engine\Waypoint.h>
#include <Engine\alliance.h>
#include <Engine\SobUnmoveable.h>
#include <assist\stlexsmallvector.h>
#include <Engine\AttackCommand.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <Engine\AttackRun.h>
#include <Engine\shipstatic.h>
#include <Engine\weaponstaticinfo.h>
#include <Engine\GunBinding.h>
#include <Engine\Family.h>
#include <Engine\KamikazeAttackStyle.h>
#include <Engine\HyperspaceManager.h>
#include <wchar.h>
#include <Engine\Modifiers\ModifierTargetCache.h>
#include <Engine\Player.h>
#include <Engine\ResearchManager.h>
#include <Engine\sobid.h>
#include <deque>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern SaveData const AttackStyle::m_saveData[9]; // 0x7BA380
extern char const AttackStyle::m_saveToken[12]; // 0x7BA4A0

/* ---------- private variables */

/* ---------- public code */

void AttackStyle::exportAttackStyleEnums(LuaConfig &lc) // 0x6BC436
{
    mangled_assert("?exportAttackStyleEnums@AttackStyle@@SGXAAVLuaConfig@@@Z");
    todo("implement");
}

AttackAction::AttackActionType AttackAction::getAttackActionTypeFromString(char const *pszString) // 0x6BC58C
{
    mangled_assert("?getAttackActionTypeFromString@AttackAction@@SG?AW4AttackActionType@1@PBD@Z");
    todo("implement");
}

char const *AttackAction::getStringFromAttackActionType(AttackAction::AttackActionType nType) // 0x6BC856
{
    mangled_assert("?getStringFromAttackActionType@AttackAction@@SGPBDW4AttackActionType@1@@Z");
    todo("implement");
}

char const *AttackStyle::getStringForAttackStyle(AttackStyle::AttackStyleType nType) // 0x6BC7BA
{
    mangled_assert("?getStringForAttackStyle@AttackStyle@@SGPBDW4AttackStyleType@1@@Z");
    todo("implement");
}

AttackStyle::AttackStyleType AttackStyle::getAttackStyleFromString(char const *pszString) // 0x6BC5DE
{
    mangled_assert("?getAttackStyleFromString@AttackStyle@@SG?AW4AttackStyleType@1@PBD@Z");
    todo("implement");
}

AttackStyle::AttackStyleType AttackStyle::getAttackStyleTypeFor(Ship *pAttacker, Sob *pTarget) // 0x6BC630
{
    mangled_assert("?getAttackStyleTypeFor@AttackStyle@@SG?AW4AttackStyleType@1@PAVShip@@PAVSob@@@Z");
    todo("implement");
}

char const *AttackStyle::getStringForBreakStyle(AttackStyle::BreakStyleType nType) // 0x6BC82A
{
    mangled_assert("?getStringForBreakStyle@AttackStyle@@SGPBDW4BreakStyleType@1@@Z");
    todo("implement");
}

AttackStyle::BreakStyleType AttackStyle::getBreakStyleFromString(char const *pszString) // 0x6BC6B7
{
    mangled_assert("?getBreakStyleFromString@AttackStyle@@SG?AW4BreakStyleType@1@PBD@Z");
    todo("implement");
}

AttackStyle *AttackStyle::CreateAttackStyle(FormationAttackCommand const *pParent, Formation *pAttackers, Selection const &pTargets) // 0x6BB7B8
{
    mangled_assert("?CreateAttackStyle@AttackStyle@@SGPAV1@PBVFormationAttackCommand@@PAVFormation@@ABVSelection@@@Z");
    todo("implement");
}

AttackStyle::AttackStyle(FormationAttackCommand const *, Formation *, Selection const &, __int32) // 0x6BB4DF
{
    mangled_assert("??0AttackStyle@@QAE@PBVFormationAttackCommand@@PAVFormation@@ABVSelection@@H@Z");
    todo("implement");
}

AttackStyle::~AttackStyle() // 0x6BB604
{
    mangled_assert("??1AttackStyle@@UAE@XZ");
    todo("implement");
}

void AttackStyle::RepickAttackPointOnTarget() // 0x6BC0D2
{
    mangled_assert("?RepickAttackPointOnTarget@AttackStyle@@IAEXXZ");
    todo("implement");
}

void AttackStyle::updateCurrentTargetPoint(vector3 const &) // 0x6BCD60
{
    mangled_assert("?updateCurrentTargetPoint@AttackStyle@@IAEXABVvector3@@@Z");
    todo("implement");
}

void AttackStyle::PickFreshTarget() // 0x6BC05D
{
    mangled_assert("?PickFreshTarget@AttackStyle@@IAEXXZ");
    todo("implement");
}

Sob *AttackStyle::findBestTarget() // 0x6BC50D
{
    mangled_assert("?findBestTarget@AttackStyle@@AAEPAVSob@@XZ");
    todo("implement");
}

WeaponTargetInfo const &AttackStyle::GetAndUpdateCurrentTarget() // 0x6BBA70
{
    mangled_assert("?GetAndUpdateCurrentTarget@AttackStyle@@IAEABVWeaponTargetInfo@@XZ");
    todo("implement");
}

Sob *AttackStyle::getSobToNotAvoid() const // 0x6BC761
{
    mangled_assert("?getSobToNotAvoid@AttackStyle@@UBEPAVSob@@XZ");
    todo("implement");
}

float AttackStyle::getHealthOfOurShips() // 0x6BC710
{
    mangled_assert("?getHealthOfOurShips@AttackStyle@@IAEMXZ");
    todo("implement");
}

AttackStyle::AttackStyleResult AttackStyle::update(float) // 0x6BCC65
{
    mangled_assert("?update@AttackStyle@@UAE?AW4AttackStyleResult@1@M@Z");
    todo("implement");
}

void AttackStyle::processActions(float) // 0x6BCB49
{
    mangled_assert("?processActions@AttackStyle@@AAEXM@Z");
    todo("implement");
}

bool AttackStyle::PerformAction(AttackAction *) // 0x6BBBF5
{
    mangled_assert("?PerformAction@AttackStyle@@AAE_NPAVAttackAction@@@Z");
    todo("implement");
}

bool AttackStyle::handleNewTargets(Selection const &) // 0x6BC89D
{
    mangled_assert("?handleNewTargets@AttackStyle@@QAE_NABVSelection@@@Z");
    todo("implement");
}

AttackStyleStatic const *AttackStyle::getStaticInfo() const // 0x6BC782
{
    mangled_assert("?getStaticInfo@AttackStyle@@IBEPBVAttackStyleStatic@@XZ");
    todo("implement");
}

bool AttackStyle::PerformActions() // 0x6BBF77
{
    mangled_assert("?PerformActions@AttackStyle@@IAE_NXZ");
    todo("implement");
}

bool AttackStyle::ActionFinished() // 0x6BB74F
{
    mangled_assert("?ActionFinished@AttackStyle@@IAE_NXZ");
    todo("implement");
}

void AttackStyle::setTime(float) // 0x6BCC54
{
    mangled_assert("?setTime@AttackStyle@@IAEXM@Z");
    todo("implement");
}

AttackStyle::AttackStyle(SaveGameData *) // 0x6BB491
{
    mangled_assert("??0AttackStyle@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

void AttackStyle::defaultSettings() // 0x6BC3C2
{
    mangled_assert("?defaultSettings@AttackStyle@@QAEXXZ");
    todo("implement");
}

void AttackStyle::postRestore() // 0x6BCB48
{
    mangled_assert("?postRestore@AttackStyle@@UAEXXZ");
    todo("implement");
}

bool AttackStyle::restore(SaveGameData *) // 0x6BCBDB
{
    mangled_assert("?restore@AttackStyle@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool AttackStyle::save(SaveGameData *, SaveType) // 0x6BCC19
{
    mangled_assert("?save@AttackStyle@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

AttackStyleStatic::AttackStyleStatic() // 0x6BB553
{
    mangled_assert("??0AttackStyleStatic@@QAE@XZ");
    todo("implement");
}

_inline std::_List_buy<AttackAction *,std::allocator<AttackAction *> >::~_List_buy<AttackAction *,std::allocator<AttackAction *> >() // 0x6BB5E8
{
    mangled_assert("??1?$_List_buy@PAVAttackAction@@V?$allocator@PAVAttackAction@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

void AttackStyleStatic::deleteActions(std::list<AttackAction *,std::allocator<AttackAction *> > &) // 0x6BC3E8
{
    mangled_assert("?deleteActions@AttackStyleStatic@@AAEXAAV?$list@PAVAttackAction@@V?$allocator@PAVAttackAction@@@std@@@std@@@Z");
    todo("implement");
}

AttackStyleStatic::~AttackStyleStatic() // 0x6BB662
{
    mangled_assert("??1AttackStyleStatic@@UAE@XZ");
    todo("implement");
}

AttackAction *AttackStyleStatic::loadAction(LuaConfig &) // 0x6BC8EA
{
    mangled_assert("?loadAction@AttackStyleStatic@@AAEPAVAttackAction@@AAVLuaConfig@@@Z");
    todo("implement");
}

AttackStyleStatic *AttackStyleStatic::createStatic(AttackStyle::AttackStyleType type) // 0x6BC238
{
    mangled_assert("?createStatic@AttackStyleStatic@@SGPAV1@W4AttackStyleType@AttackStyle@@@Z");
    todo("implement");
}

void AttackStyleStatic::loadActions(char const *, std::list<AttackAction *,std::allocator<AttackAction *> > &, LuaConfig &) // 0x6BCA03
{
    mangled_assert("?loadActions@AttackStyleStatic@@AAEXPBDAAV?$list@PAVAttackAction@@V?$allocator@PAVAttackAction@@@std@@@std@@AAVLuaConfig@@@Z");
    todo("implement");
}

bool AttackStyleStatic::loadData(LuaConfig &) // 0x6BCACA
{
    mangled_assert("?loadData@AttackStyleStatic@@UAE_NAAVLuaConfig@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
