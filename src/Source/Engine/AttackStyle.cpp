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

_extern void _sub_6BC436(LuaConfig &);
void AttackStyle::exportAttackStyleEnums(LuaConfig &lc) // 0x6BC436
{
    mangled_assert("?exportAttackStyleEnums@AttackStyle@@SGXAAVLuaConfig@@@Z");
    todo("implement");
    _sub_6BC436(lc);
}

_extern AttackAction::AttackActionType _sub_6BC58C(char const *);
AttackAction::AttackActionType AttackAction::getAttackActionTypeFromString(char const *pszString) // 0x6BC58C
{
    mangled_assert("?getAttackActionTypeFromString@AttackAction@@SG?AW4AttackActionType@1@PBD@Z");
    todo("implement");
    AttackAction::AttackActionType __result = _sub_6BC58C(pszString);
    return __result;
}

_extern char const *_sub_6BC856(AttackAction::AttackActionType);
char const *AttackAction::getStringFromAttackActionType(AttackAction::AttackActionType nType) // 0x6BC856
{
    mangled_assert("?getStringFromAttackActionType@AttackAction@@SGPBDW4AttackActionType@1@@Z");
    todo("implement");
    char const * __result = _sub_6BC856(nType);
    return __result;
}

_extern char const *_sub_6BC7BA(AttackStyle::AttackStyleType);
char const *AttackStyle::getStringForAttackStyle(AttackStyle::AttackStyleType nType) // 0x6BC7BA
{
    mangled_assert("?getStringForAttackStyle@AttackStyle@@SGPBDW4AttackStyleType@1@@Z");
    todo("implement");
    char const * __result = _sub_6BC7BA(nType);
    return __result;
}

_extern AttackStyle::AttackStyleType _sub_6BC5DE(char const *);
AttackStyle::AttackStyleType AttackStyle::getAttackStyleFromString(char const *pszString) // 0x6BC5DE
{
    mangled_assert("?getAttackStyleFromString@AttackStyle@@SG?AW4AttackStyleType@1@PBD@Z");
    todo("implement");
    AttackStyle::AttackStyleType __result = _sub_6BC5DE(pszString);
    return __result;
}

_extern AttackStyle::AttackStyleType _sub_6BC630(Ship *, Sob *);
AttackStyle::AttackStyleType AttackStyle::getAttackStyleTypeFor(Ship *pAttacker, Sob *pTarget) // 0x6BC630
{
    mangled_assert("?getAttackStyleTypeFor@AttackStyle@@SG?AW4AttackStyleType@1@PAVShip@@PAVSob@@@Z");
    todo("implement");
    AttackStyle::AttackStyleType __result = _sub_6BC630(pAttacker, pTarget);
    return __result;
}

_extern char const *_sub_6BC82A(AttackStyle::BreakStyleType);
char const *AttackStyle::getStringForBreakStyle(AttackStyle::BreakStyleType nType) // 0x6BC82A
{
    mangled_assert("?getStringForBreakStyle@AttackStyle@@SGPBDW4BreakStyleType@1@@Z");
    todo("implement");
    char const * __result = _sub_6BC82A(nType);
    return __result;
}

_extern AttackStyle::BreakStyleType _sub_6BC6B7(char const *);
AttackStyle::BreakStyleType AttackStyle::getBreakStyleFromString(char const *pszString) // 0x6BC6B7
{
    mangled_assert("?getBreakStyleFromString@AttackStyle@@SG?AW4BreakStyleType@1@PBD@Z");
    todo("implement");
    AttackStyle::BreakStyleType __result = _sub_6BC6B7(pszString);
    return __result;
}

_extern AttackStyle *_sub_6BB7B8(FormationAttackCommand const *, Formation *, Selection const &);
AttackStyle *AttackStyle::CreateAttackStyle(FormationAttackCommand const *pParent, Formation *pAttackers, Selection const &pTargets) // 0x6BB7B8
{
    mangled_assert("?CreateAttackStyle@AttackStyle@@SGPAV1@PBVFormationAttackCommand@@PAVFormation@@ABVSelection@@@Z");
    todo("implement");
    AttackStyle * __result = _sub_6BB7B8(pParent, pAttackers, pTargets);
    return __result;
}

_extern _sub_6BB4DF(AttackStyle *const, FormationAttackCommand const *, Formation *, Selection const &, __int32);
AttackStyle::AttackStyle(FormationAttackCommand const *, Formation *, Selection const &, __int32) // 0x6BB4DF
{
    mangled_assert("??0AttackStyle@@QAE@PBVFormationAttackCommand@@PAVFormation@@ABVSelection@@H@Z");
    todo("implement");
    _sub_6BB4DF(this, arg, arg, arg, arg);
}

_extern void _sub_6BB604(AttackStyle *const);
AttackStyle::~AttackStyle() // 0x6BB604
{
    mangled_assert("??1AttackStyle@@UAE@XZ");
    todo("implement");
    _sub_6BB604(this);
}

_extern void _sub_6BC0D2(AttackStyle *const);
void AttackStyle::RepickAttackPointOnTarget() // 0x6BC0D2
{
    mangled_assert("?RepickAttackPointOnTarget@AttackStyle@@IAEXXZ");
    todo("implement");
    _sub_6BC0D2(this);
}

_extern void _sub_6BCD60(AttackStyle *const, vector3 const &);
void AttackStyle::updateCurrentTargetPoint(vector3 const &) // 0x6BCD60
{
    mangled_assert("?updateCurrentTargetPoint@AttackStyle@@IAEXABVvector3@@@Z");
    todo("implement");
    _sub_6BCD60(this, arg);
}

_extern void _sub_6BC05D(AttackStyle *const);
void AttackStyle::PickFreshTarget() // 0x6BC05D
{
    mangled_assert("?PickFreshTarget@AttackStyle@@IAEXXZ");
    todo("implement");
    _sub_6BC05D(this);
}

_extern Sob *_sub_6BC50D(AttackStyle *const);
Sob *AttackStyle::findBestTarget() // 0x6BC50D
{
    mangled_assert("?findBestTarget@AttackStyle@@AAEPAVSob@@XZ");
    todo("implement");
    Sob * __result = _sub_6BC50D(this);
    return __result;
}

_extern WeaponTargetInfo const &_sub_6BBA70(AttackStyle *const);
WeaponTargetInfo const &AttackStyle::GetAndUpdateCurrentTarget() // 0x6BBA70
{
    mangled_assert("?GetAndUpdateCurrentTarget@AttackStyle@@IAEABVWeaponTargetInfo@@XZ");
    todo("implement");
    WeaponTargetInfo const & __result = _sub_6BBA70(this);
    return __result;
}

_extern Sob *_sub_6BC761(AttackStyle const *const);
Sob *AttackStyle::getSobToNotAvoid() const // 0x6BC761
{
    mangled_assert("?getSobToNotAvoid@AttackStyle@@UBEPAVSob@@XZ");
    todo("implement");
    Sob * __result = _sub_6BC761(this);
    return __result;
}

_extern float _sub_6BC710(AttackStyle *const);
float AttackStyle::getHealthOfOurShips() // 0x6BC710
{
    mangled_assert("?getHealthOfOurShips@AttackStyle@@IAEMXZ");
    todo("implement");
    float __result = _sub_6BC710(this);
    return __result;
}

_extern AttackStyle::AttackStyleResult _sub_6BCC65(AttackStyle *const, float);
AttackStyle::AttackStyleResult AttackStyle::update(float) // 0x6BCC65
{
    mangled_assert("?update@AttackStyle@@UAE?AW4AttackStyleResult@1@M@Z");
    todo("implement");
    AttackStyle::AttackStyleResult __result = _sub_6BCC65(this, arg);
    return __result;
}

_extern void _sub_6BCB49(AttackStyle *const, float);
void AttackStyle::processActions(float) // 0x6BCB49
{
    mangled_assert("?processActions@AttackStyle@@AAEXM@Z");
    todo("implement");
    _sub_6BCB49(this, arg);
}

_extern bool _sub_6BBBF5(AttackStyle *const, AttackAction *);
bool AttackStyle::PerformAction(AttackAction *) // 0x6BBBF5
{
    mangled_assert("?PerformAction@AttackStyle@@AAE_NPAVAttackAction@@@Z");
    todo("implement");
    bool __result = _sub_6BBBF5(this, arg);
    return __result;
}

_extern bool _sub_6BC89D(AttackStyle *const, Selection const &);
bool AttackStyle::handleNewTargets(Selection const &) // 0x6BC89D
{
    mangled_assert("?handleNewTargets@AttackStyle@@QAE_NABVSelection@@@Z");
    todo("implement");
    bool __result = _sub_6BC89D(this, arg);
    return __result;
}

_extern AttackStyleStatic const *_sub_6BC782(AttackStyle const *const);
AttackStyleStatic const *AttackStyle::getStaticInfo() const // 0x6BC782
{
    mangled_assert("?getStaticInfo@AttackStyle@@IBEPBVAttackStyleStatic@@XZ");
    todo("implement");
    AttackStyleStatic const * __result = _sub_6BC782(this);
    return __result;
}

_extern bool _sub_6BBF77(AttackStyle *const);
bool AttackStyle::PerformActions() // 0x6BBF77
{
    mangled_assert("?PerformActions@AttackStyle@@IAE_NXZ");
    todo("implement");
    bool __result = _sub_6BBF77(this);
    return __result;
}

_extern bool _sub_6BB74F(AttackStyle *const);
bool AttackStyle::ActionFinished() // 0x6BB74F
{
    mangled_assert("?ActionFinished@AttackStyle@@IAE_NXZ");
    todo("implement");
    bool __result = _sub_6BB74F(this);
    return __result;
}

_extern void _sub_6BCC54(AttackStyle *const, float);
void AttackStyle::setTime(float) // 0x6BCC54
{
    mangled_assert("?setTime@AttackStyle@@IAEXM@Z");
    todo("implement");
    _sub_6BCC54(this, arg);
}

_extern _sub_6BB491(AttackStyle *const, SaveGameData *);
AttackStyle::AttackStyle(SaveGameData *) // 0x6BB491
{
    mangled_assert("??0AttackStyle@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_6BB491(this, arg);
}

_extern void _sub_6BC3C2(AttackStyle *const);
void AttackStyle::defaultSettings() // 0x6BC3C2
{
    mangled_assert("?defaultSettings@AttackStyle@@QAEXXZ");
    todo("implement");
    _sub_6BC3C2(this);
}

_extern void _sub_6BCB48(AttackStyle *const);
void AttackStyle::postRestore() // 0x6BCB48
{
    mangled_assert("?postRestore@AttackStyle@@UAEXXZ");
    todo("implement");
    _sub_6BCB48(this);
}

_extern bool _sub_6BCBDB(AttackStyle *const, SaveGameData *);
bool AttackStyle::restore(SaveGameData *) // 0x6BCBDB
{
    mangled_assert("?restore@AttackStyle@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_6BCBDB(this, arg);
    return __result;
}

_extern bool _sub_6BCC19(AttackStyle *const, SaveGameData *, SaveType);
bool AttackStyle::save(SaveGameData *, SaveType) // 0x6BCC19
{
    mangled_assert("?save@AttackStyle@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_6BCC19(this, arg, arg);
    return __result;
}

_extern _sub_6BB553(AttackStyleStatic *const);
AttackStyleStatic::AttackStyleStatic() // 0x6BB553
{
    mangled_assert("??0AttackStyleStatic@@QAE@XZ");
    todo("implement");
    _sub_6BB553(this);
}

_extern void _sub_6BB5E8(std::_List_buy<AttackAction *,std::allocator<AttackAction *> > *const);
_inline std::_List_buy<AttackAction *,std::allocator<AttackAction *> >::~_List_buy<AttackAction *,std::allocator<AttackAction *> >() // 0x6BB5E8
{
    mangled_assert("??1?$_List_buy@PAVAttackAction@@V?$allocator@PAVAttackAction@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6BB5E8(this);
}

_extern void _sub_6BC3E8(AttackStyleStatic *const, std::list<AttackAction *,std::allocator<AttackAction *> > &);
void AttackStyleStatic::deleteActions(std::list<AttackAction *,std::allocator<AttackAction *> > &) // 0x6BC3E8
{
    mangled_assert("?deleteActions@AttackStyleStatic@@AAEXAAV?$list@PAVAttackAction@@V?$allocator@PAVAttackAction@@@std@@@std@@@Z");
    todo("implement");
    _sub_6BC3E8(this, arg);
}

_extern void _sub_6BB662(AttackStyleStatic *const);
AttackStyleStatic::~AttackStyleStatic() // 0x6BB662
{
    mangled_assert("??1AttackStyleStatic@@UAE@XZ");
    todo("implement");
    _sub_6BB662(this);
}

_extern AttackAction *_sub_6BC8EA(AttackStyleStatic *const, LuaConfig &);
AttackAction *AttackStyleStatic::loadAction(LuaConfig &) // 0x6BC8EA
{
    mangled_assert("?loadAction@AttackStyleStatic@@AAEPAVAttackAction@@AAVLuaConfig@@@Z");
    todo("implement");
    AttackAction * __result = _sub_6BC8EA(this, arg);
    return __result;
}

_extern AttackStyleStatic *_sub_6BC238(AttackStyle::AttackStyleType);
AttackStyleStatic *AttackStyleStatic::createStatic(AttackStyle::AttackStyleType type) // 0x6BC238
{
    mangled_assert("?createStatic@AttackStyleStatic@@SGPAV1@W4AttackStyleType@AttackStyle@@@Z");
    todo("implement");
    AttackStyleStatic * __result = _sub_6BC238(type);
    return __result;
}

_extern void _sub_6BCA03(AttackStyleStatic *const, char const *, std::list<AttackAction *,std::allocator<AttackAction *> > &, LuaConfig &);
void AttackStyleStatic::loadActions(char const *, std::list<AttackAction *,std::allocator<AttackAction *> > &, LuaConfig &) // 0x6BCA03
{
    mangled_assert("?loadActions@AttackStyleStatic@@AAEXPBDAAV?$list@PAVAttackAction@@V?$allocator@PAVAttackAction@@@std@@@std@@AAVLuaConfig@@@Z");
    todo("implement");
    _sub_6BCA03(this, arg, arg, arg);
}

_extern bool _sub_6BCACA(AttackStyleStatic *const, LuaConfig &);
bool AttackStyleStatic::loadData(LuaConfig &) // 0x6BCACA
{
    mangled_assert("?loadData@AttackStyleStatic@@UAE_NAAVLuaConfig@@@Z");
    todo("implement");
    bool __result = _sub_6BCACA(this, arg);
    return __result;
}

/* ---------- private code */
#endif
