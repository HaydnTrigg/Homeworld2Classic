#if 0
/* ---------- headers */

#include "decomp.h"
#include <Engine\DynamicPoint.h>
#include <Engine\Player.h>
#include <xstring>
#include <Engine\FamilyListMgr.h>
#include <Engine\ResearchManager.h>
#include <xmemory0>
#include <Engine\FamilyList.h>
#include <fileio\bytestream.h>
#include <fileio\fileioexports.h>
#include <Engine\fixedpoint.h>
#include <Engine\Modifiers\ModifierAbility.h>
#include <Engine\Ship\FormationTargetInfo.h>
#include <luaconfig\luaconfig.h>
#include <lua\lua.h>
#include <Engine\Selector.h>
#include <platform\timer.h>
#include <Engine\MetaSelTarg.h>
#include <platform\platformexports.h>
#include <Engine\visibility.h>
#include <Engine\MultiplierTypes.h>
#include <new>
#include <Engine\Squadron.h>
#include <xstddef>
#include <type_traits>
#include <Engine\FormationCommands\FormationAttackCommand.h>
#include <Engine\ship.h>
#include <Engine\SobWithMesh.h>
#include <Engine\SobRigidBody.h>
#include <Engine\sob.h>
#include <Engine\sobstatic.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <Engine\GameEventDefs.h>
#include <vector>
#include <Engine\GameEventSys.h>
#include <xmemory>
#include <Engine\CaptureManager.h>
#include <Engine\LatchPointManager.h>
#include <xhash>
#include <Engine\weaponinfo.h>
#include <Engine\Ship\Formation.h>
#include <Engine\Ship\FormationPattern.h>
#include <Engine\Universe.h>
#include <math.h>
#include <Engine\Waypoint.h>
#include <Engine\gameRandom.h>
#include <Engine\SobUnmoveable.h>
#include <list>
#include <Engine\playerresourcetype.h>
#include <Engine\TeamColourRegistry.h>
#include <Engine\savegame.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <Engine\SobWithMeshStatic.h>
#include <map>
#include <xtree>
#include <assist\typemagic.h>
#include <Engine\Interpolation.h>
#include <boost\scoped_ptr.hpp>
#include <localizer\localizer.h>
#include <Engine\HyperspaceManager.h>
#include <profile\profile.h>
#include <iostream>
#include <util\types.h>
#include <util\colour.h>
#include <Engine\savegameimpl.h>
#include <Engine\pathpoints.h>
#include <Collision\BVH\octree.h>
#include <boost\cstdint.hpp>
#include <Collision\BVH\span.h>
#include <Engine\Subsystems\SubSystemType.h>
#include <Engine\Modifiers\ModifierUIInfo.h>
#include <Engine\Modifiers\ModifierMultiplier.h>
#include <Engine\Modifiers\ModifierEffect.h>
#include <Engine\FormationCommands\FormationCommand.h>
#include <Engine\command.h>
#include <Engine\sobtypes.h>
#include <Engine\selection.h>
#include <Engine\savegamedef.h>
#include <Engine\SelTarg.h>
#include <Engine\prim.h>
#include <Engine\Modifiers\ModifierApplier.h>
#include <Engine\pch.h>
#include <Engine\AttackCommand.h>
#include <Engine\dbdefines.h>
#include <Engine\AttackStyle.h>
#include <Engine\UnitCaps\UnitCaps.h>
#include <Engine\ITweak.h>
#include <Mathlib\vector2.h>
#include <Engine\Subsystems\Subsystem.h>
#include <Engine\Family.h>
#include <Engine\Subsystems\SubsystemStatic.h>
#include <Engine\weaponTargetInfo.h>
#include <Engine\abilities.h>
#include <Engine\Race.h>
#include <Engine\weaponstaticinfo.h>
#include <Engine\SquadronList.h>
#include <Engine\GunBinding.h>
#include <Engine\random.h>
#include <fileio\filepath.h>
#include <Engine\BuildManager.h>
#include <assist\stlexsmallvector.h>
#include <boost\shared_ptr.hpp>
#include <Engine\WeaponStatic.h>
#include <boost\throw_exception.hpp>
#include <Engine\weaponfiretypes.h>
#include <Engine\WeaponClassSpecificInfo.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <Engine\Tactics.h>
#include <Engine\SOBGroupManager.h>
#include <wchar.h>
#include <string>
#include <Engine\alliance.h>
#include <Engine\Modifiers\ModifierTargetCache.h>
#include <Engine\sobid.h>
#include <deque>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern bool selEnemy(Sob const *s, void *data);
extern bool CompareByAttackers(Sob const &p1, Sob const &p2, AttackSortData const &sortData);
extern bool beingCapturedByFriendly(Sob const &sob, SobWithMesh const *attacker);

_static bool CompareByAngle(Sob const &min, Sob const &cmp, AttackSortData const &sortData);
_static bool CompareByDistanceAndPriority(Sob const &min, Sob const &cmp, AttackSortData const &sortData);
_static bool CompareByCapture(Sob const &min, Sob const &cmp, AttackSortData const &sortData);

/* ---------- globals */

extern char const AttackCommand::m_saveToken[0]; // 0x7B6E88
extern SpecialAttackManager *SpecialAttackManager::s_instance; // 0x84CA08
extern SaveData const AttackCommand::m_saveData[14]; // 0x7B6E98

/* ---------- private variables */

/* ---------- public code */

_extern bool _sub_6A0BBD(Sob const *, void *);
bool selEnemy(Sob const *s, void *data) // 0x6A0BBD
{
    mangled_assert("?selEnemy@@YG_NPBVSob@@PAX@Z");
    todo("implement");
    bool __result = _sub_6A0BBD(s, data);
    return __result;
}

_extern _sub_69EC8E(AttackSortData *const);
AttackSortData::AttackSortData() // 0x69EC8E
{
    mangled_assert("??0AttackSortData@@QAE@XZ");
    todo("implement");
    _sub_69EC8E(this);
}

_extern _sub_69EACA(AttackCommand *const, Squadron *, Selection const &, Command::CommandOrigin, bool, bool, vector3 const &);
AttackCommand::AttackCommand(Squadron *, Selection const &, Command::CommandOrigin, bool, bool, vector3 const &) // 0x69EACA
{
    mangled_assert("??0AttackCommand@@QAE@PAVSquadron@@ABVSelection@@W4CommandOrigin@Command@@_N3ABVvector3@@@Z");
    todo("implement");
    _sub_69EACA(this, arg, arg, arg, arg, arg, arg);
}

_extern void _sub_69ED0F(AttackCommand *const);
AttackCommand::~AttackCommand() // 0x69ED0F
{
    mangled_assert("??1AttackCommand@@UAE@XZ");
    todo("implement");
    _sub_69ED0F(this);
}

_extern void _sub_69FB22(AttackCommand *const);
void AttackCommand::cleanUpCommand() // 0x69FB22
{
    mangled_assert("?cleanUpCommand@AttackCommand@@UAEXXZ");
    todo("implement");
    _sub_69FB22(this);
}

_extern void _sub_6A0ACF(AttackCommand *const);
void AttackCommand::resetCommand() // 0x6A0ACF
{
    mangled_assert("?resetCommand@AttackCommand@@UAEXXZ");
    todo("implement");
    _sub_6A0ACF(this);
}

_extern vector3 const &_sub_6A02D7(AttackCommand const *const);
vector3 const &AttackCommand::getDestinationDtrm() const // 0x6A02D7
{
    mangled_assert("?getDestinationDtrm@AttackCommand@@UBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_6A02D7(this);
    return __result;
}

_extern vector3 const &_sub_6A02FE(AttackCommand const *const);
vector3 const &AttackCommand::getDestinationVis() const // 0x6A02FE
{
    mangled_assert("?getDestinationVis@AttackCommand@@UBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_6A02FE(this);
    return __result;
}

_extern void _sub_6A0B7A(AttackCommand *const);
void AttackCommand::scanForNewTargets() // 0x6A0B7A
{
    mangled_assert("?scanForNewTargets@AttackCommand@@AAEXXZ");
    todo("implement");
    _sub_6A0B7A(this);
}

_extern bool _sub_6A1106(AttackCommand const *const);
bool AttackCommand::useAvoidance() const // 0x6A1106
{
    mangled_assert("?useAvoidance@AttackCommand@@UBE_NXZ");
    todo("implement");
    bool __result = _sub_6A1106(this);
    return __result;
}

_extern void _sub_69FEB8(AttackCommand *const);
void AttackCommand::flyStraightAtEnemy() // 0x69FEB8
{
    mangled_assert("?flyStraightAtEnemy@AttackCommand@@AAEXXZ");
    todo("implement");
    _sub_69FEB8(this);
}

_extern void _sub_6A005F(AttackCommand *const);
void AttackCommand::flyToAboveEnemy() // 0x6A005F
{
    mangled_assert("?flyToAboveEnemy@AttackCommand@@AAEXXZ");
    todo("implement");
    _sub_6A005F(this);
}

_extern void _sub_69F991(AttackCommand *const);
void AttackCommand::breakAllAndAttack() // 0x69F991
{
    mangled_assert("?breakAllAndAttack@AttackCommand@@AAEXXZ");
    todo("implement");
    _sub_69F991(this);
}

_extern void _sub_6A09DA(AttackCommand *const);
void AttackCommand::makeSureAllAreAttacking() // 0x6A09DA
{
    mangled_assert("?makeSureAllAreAttacking@AttackCommand@@AAEXXZ");
    todo("implement");
    _sub_6A09DA(this);
}

_extern void _sub_69F3BC(AttackCommand *const);
void AttackCommand::FlyToLastKnownPosition() // 0x69F3BC
{
    mangled_assert("?FlyToLastKnownPosition@AttackCommand@@AAEXXZ");
    todo("implement");
    _sub_69F3BC(this);
}

_extern ComResult _sub_6A0C51(AttackCommand *const, float);
ComResult AttackCommand::update(float) // 0x6A0C51
{
    mangled_assert("?update@AttackCommand@@UAE?AW4ComResult@@M@Z");
    todo("implement");
    ComResult __result = _sub_6A0C51(this, arg);
    return __result;
}

_extern AttackStyle::BreakStyleType _sub_6A02B6(AttackCommand const *const, unsigned __int32);
AttackStyle::BreakStyleType AttackCommand::getBreakStyleForType(unsigned __int32) const // 0x6A02B6
{
    mangled_assert("?getBreakStyleForType@AttackCommand@@ABE?AW4BreakStyleType@AttackStyle@@I@Z");
    todo("implement");
    AttackStyle::BreakStyleType __result = _sub_6A02B6(this, arg);
    return __result;
}

_extern Sob *_sub_6A038A(AttackCommand const *const);
Sob *AttackCommand::getTargetNonDeterministicSafe() const // 0x6A038A
{
    mangled_assert("?getTargetNonDeterministicSafe@AttackCommand@@QBEPAVSob@@XZ");
    todo("implement");
    Sob * __result = _sub_6A038A(this);
    return __result;
}

_extern bool _sub_6A03DA(Sob const *, void *);
bool AttackCommand::isAttackable(Sob const *s, void *data) // 0x6A03DA
{
    mangled_assert("?isAttackable@AttackCommand@@SG_NPBVSob@@PAX@Z");
    todo("implement");
    bool __result = _sub_6A03DA(s, data);
    return __result;
}

_extern Sob *_sub_69F4B6(AttackCommand *const);
Sob *AttackCommand::GetCurrentTarget() // 0x69F4B6
{
    mangled_assert("?GetCurrentTarget@AttackCommand@@AAEPAVSob@@XZ");
    todo("implement");
    Sob * __result = _sub_69F4B6(this);
    return __result;
}

_extern Sob *_sub_6A0261(Squadron const *, Selection const &);
Sob *AttackCommand::getBestTarget(Squadron const *squad, Selection const &targets) // 0x6A0261
{
    mangled_assert("?getBestTarget@AttackCommand@@SGPAVSob@@PBVSquadron@@ABVSelection@@@Z");
    todo("implement");
    Sob * __result = _sub_6A0261(squad, targets);
    return __result;
}

_extern bool _sub_69F0C8(Sob const &, Sob const &, AttackSortData const &);
bool CompareByAttackers(Sob const &p1, Sob const &p2, AttackSortData const &sortData) // 0x69F0C8
{
    mangled_assert("?CompareByAttackers@@YG_NABVSob@@0ABUAttackSortData@@@Z");
    todo("implement");
    bool __result = _sub_69F0C8(p1, p2, sortData);
    return __result;
}

_extern bool _sub_69F92A(Sob const &, SobWithMesh const *);
bool beingCapturedByFriendly(Sob const &sob, SobWithMesh const *attacker) // 0x69F92A
{
    mangled_assert("?beingCapturedByFriendly@@YG_NABVSob@@PBVSobWithMesh@@@Z");
    todo("implement");
    bool __result = _sub_69F92A(sob, attacker);
    return __result;
}

_extern bool _sub_69EEE4(CompareShipsByPriority const *const, Sob const &, Sob const &);
bool CompareShipsByPriority::Compare(Sob const &, Sob const &) const // 0x69EEE4
{
    mangled_assert("?Compare@CompareShipsByPriority@@UBE_NABVSob@@0@Z");
    todo("implement");
    bool __result = _sub_69EEE4(this, arg, arg);
    return __result;
}

_extern char const *_sub_6A0322(AttackCommand const *const);
char const *AttackCommand::getName() const // 0x6A0322
{
    mangled_assert("?getName@AttackCommand@@UBEPBDXZ");
    todo("implement");
    char const * __result = _sub_6A0322(this);
    return __result;
}

_extern CommandType _sub_6A02D3(AttackCommand const *const);
CommandType AttackCommand::getCommandType() const // 0x6A02D3
{
    mangled_assert("?getCommandType@AttackCommand@@UBE?AW4CommandType@@XZ");
    todo("implement");
    CommandType __result = _sub_6A02D3(this);
    return __result;
}

_extern WeaponActivate _sub_6A03D0(AttackCommand const *const);
WeaponActivate AttackCommand::getWeaponActivation() const // 0x6A03D0
{
    mangled_assert("?getWeaponActivation@AttackCommand@@UBE?AW4WeaponActivate@@XZ");
    todo("implement");
    WeaponActivate __result = _sub_6A03D0(this);
    return __result;
}

_extern void _sub_6A054C(AttackCommand *const);
void AttackCommand::kamikaze() // 0x6A054C
{
    mangled_assert("?kamikaze@AttackCommand@@QAEXXZ");
    todo("implement");
    _sub_6A054C(this);
}

_extern bool _sub_69F9EE(AttackCommand *const, CommandType, Command *);
bool AttackCommand::canBeInterrupted(CommandType, Command *) // 0x69F9EE
{
    mangled_assert("?canBeInterrupted@AttackCommand@@UAE_NW4CommandType@@PAVCommand@@@Z");
    todo("implement");
    bool __result = _sub_69F9EE(this, arg, arg);
    return __result;
}

_extern _sub_69EA79(AttackCommand *const, SaveGameData *);
AttackCommand::AttackCommand(SaveGameData *) // 0x69EA79
{
    mangled_assert("??0AttackCommand@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_69EA79(this, arg);
}

_extern void _sub_69FBB4(AttackCommand *const);
void AttackCommand::defaultSettings() // 0x69FBB4
{
    mangled_assert("?defaultSettings@AttackCommand@@QAEXXZ");
    todo("implement");
    _sub_69FBB4(this);
}

_extern void _sub_6A0A51(AttackCommand *const);
void AttackCommand::postRestore() // 0x6A0A51
{
    mangled_assert("?postRestore@AttackCommand@@UAEXXZ");
    todo("implement");
    _sub_6A0A51(this);
}

_extern bool _sub_6A0AE0(AttackCommand *const, SaveGameData *);
bool AttackCommand::restore(SaveGameData *) // 0x6A0AE0
{
    mangled_assert("?restore@AttackCommand@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_6A0AE0(this, arg);
    return __result;
}

_extern bool _sub_6A0B2D(AttackCommand *const, SaveGameData *, SaveType);
bool AttackCommand::save(SaveGameData *, SaveType) // 0x6A0B2D
{
    mangled_assert("?save@AttackCommand@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_6A0B2D(this, arg, arg);
    return __result;
}

_extern _sub_69EBAD(AttackCommandStaticInfo *const, unsigned __int32);
AttackCommandStaticInfo::AttackCommandStaticInfo(unsigned __int32) // 0x69EBAD
{
    mangled_assert("??0AttackCommandStaticInfo@@QAE@I@Z");
    todo("implement");
    _sub_69EBAD(this, arg);
}

_extern void _sub_69ED5D(AttackCommandStaticInfo *const);
AttackCommandStaticInfo::~AttackCommandStaticInfo() // 0x69ED5D
{
    mangled_assert("??1AttackCommandStaticInfo@@UAE@XZ");
    todo("implement");
    _sub_69ED5D(this);
}

_extern AttackStyle::AttackStyleType _sub_6A05A3(AttackCommandStaticInfo *const, char const *, __int32);
AttackStyle::AttackStyleType AttackCommandStaticInfo::loadAttackStyle(char const *, __int32) // 0x6A05A3
{
    mangled_assert("?loadAttackStyle@AttackCommandStaticInfo@@QAE?AW4AttackStyleType@AttackStyle@@PBDH@Z");
    todo("implement");
    AttackStyle::AttackStyleType __result = _sub_6A05A3(this, arg, arg);
    return __result;
}

_extern AttackStyle::AttackStyleType _sub_69F488(AttackCommandStaticInfo const *const, unsigned __int32);
AttackStyle::AttackStyleType AttackCommandStaticInfo::GetAttackStyleForFamilyIndex(unsigned __int32) const // 0x69F488
{
    mangled_assert("?GetAttackStyleForFamilyIndex@AttackCommandStaticInfo@@QBE?AW4AttackStyleType@AttackStyle@@I@Z");
    todo("implement");
    AttackStyle::AttackStyleType __result = _sub_69F488(this, arg);
    return __result;
}

_extern float _sub_69F5B4(AttackCommandStaticInfo const *const, unsigned __int32);
float AttackCommandStaticInfo::GetPriorityForFamilyIndex(unsigned __int32) const // 0x69F5B4
{
    mangled_assert("?GetPriorityForFamilyIndex@AttackCommandStaticInfo@@QBEMI@Z");
    todo("implement");
    float __result = _sub_69F5B4(this, arg);
    return __result;
}

_extern bool _sub_6A0C22();
bool SpecialAttackManager::startup() // 0x6A0C22
{
    mangled_assert("?startup@SpecialAttackManager@@SG_NXZ");
    todo("implement");
    bool __result = _sub_6A0C22();
    return __result;
}

_extern bool _sub_6A0BFE();
bool SpecialAttackManager::shutdown() // 0x6A0BFE
{
    mangled_assert("?shutdown@SpecialAttackManager@@SG_NXZ");
    todo("implement");
    bool __result = _sub_6A0BFE();
    return __result;
}

_extern unsigned __int32 _sub_6A0966(SpecialAttackManager *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
unsigned __int32 SpecialAttackManager::lookUpAttack(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x6A0966
{
    mangled_assert("?lookUpAttack@SpecialAttackManager@@QAEIABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    unsigned __int32 __result = _sub_6A0966(this, arg);
    return __result;
}

_extern std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &_sub_6A0328(SpecialAttackManager *const, unsigned __int32);
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &SpecialAttackManager::getSpecialAttackName(unsigned __int32) // 0x6A0328
{
    mangled_assert("?getSpecialAttackName@SpecialAttackManager@@QAEABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@I@Z");
    todo("implement");
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const & __result = _sub_6A0328(this, arg);
    return __result;
}

_extern _sub_69EC9B(SpecialAttackManager *const);
SpecialAttackManager::SpecialAttackManager() // 0x69EC9B
{
    mangled_assert("??0SpecialAttackManager@@AAE@XZ");
    todo("implement");
    _sub_69EC9B(this);
}

_extern void _sub_69ECB1(std::_List_buy<AttackStyleStatic *,std::allocator<AttackStyleStatic *> > *const);
_inline std::_List_buy<AttackStyleStatic *,std::allocator<AttackStyleStatic *> >::~_List_buy<AttackStyleStatic *,std::allocator<AttackStyleStatic *> >() // 0x69ECB1
{
    mangled_assert("??1?$_List_buy@PAVAttackStyleStatic@@V?$allocator@PAVAttackStyleStatic@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_69ECB1(this);
}

_extern void _sub_69ECE1(std::_Tree_buy<std::pair<unsigned int const ,enum AttackStyle::AttackStyleType>,std::allocator<std::pair<unsigned int const ,enum AttackStyle::AttackStyleType> > > *const);
_inline std::_Tree_buy<std::pair<unsigned int const ,enum AttackStyle::AttackStyleType>,std::allocator<std::pair<unsigned int const ,enum AttackStyle::AttackStyleType> > >::~_Tree_buy<std::pair<unsigned int const ,enum AttackStyle::AttackStyleType>,std::allocator<std::pair<unsigned int const ,enum AttackStyle::AttackStyleType> > >() // 0x69ECE1
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBIW4AttackStyleType@AttackStyle@@@std@@V?$allocator@U?$pair@$$CBIW4AttackStyleType@AttackStyle@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_69ECE1(this);
}

_extern void _sub_69ECEA(std::_Tree_comp<0,std::_Tmap_traits<unsigned int,enum AttackStyle::AttackStyleType,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,enum AttackStyle::AttackStyleType> >,0> > *const);
_inline std::_Tree_comp<0,std::_Tmap_traits<unsigned int,enum AttackStyle::AttackStyleType,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,enum AttackStyle::AttackStyleType> >,0> >::~_Tree_comp<0,std::_Tmap_traits<unsigned int,enum AttackStyle::AttackStyleType,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,enum AttackStyle::AttackStyleType> >,0> >() // 0x69ECEA
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@IW4AttackStyleType@AttackStyle@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIW4AttackStyleType@AttackStyle@@@std@@@4@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_69ECEA(this);
}

_extern void _sub_69ED05(std::map<unsigned int,enum AttackStyle::AttackStyleType,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,enum AttackStyle::AttackStyleType> > > *const);
_inline std::map<unsigned int,enum AttackStyle::AttackStyleType,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,enum AttackStyle::AttackStyleType> > >::~map<unsigned int,enum AttackStyle::AttackStyleType,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,enum AttackStyle::AttackStyleType> > >() // 0x69ED05
{
    mangled_assert("??1?$map@IW4AttackStyleType@AttackStyle@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIW4AttackStyleType@AttackStyle@@@std@@@4@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_69ED05(this);
}

_extern bool _sub_6A0770(SpecialAttackManager *const);
bool SpecialAttackManager::loadScripts() // 0x6A0770
{
    mangled_assert("?loadScripts@SpecialAttackManager@@AAE_NXZ");
    todo("implement");
    bool __result = _sub_6A0770(this);
    return __result;
}

_extern void _sub_69EE0A(SpecialAttackManager *const);
SpecialAttackManager::~SpecialAttackManager() // 0x69EE0A
{
    mangled_assert("??1SpecialAttackManager@@AAE@XZ");
    todo("implement");
    _sub_69EE0A(this);
}

/* ---------- private code */

_extern bool _sub_69EF4D(Sob const &, Sob const &, AttackSortData const &);
_static bool CompareByAngle(Sob const &min, Sob const &cmp, AttackSortData const &sortData) // 0x69EF4D
{
    mangled_assert("CompareByAngle");
    todo("implement");
    bool __result = _sub_69EF4D(min, cmp, sortData);
    return __result;
}

_extern bool _sub_69F16E(Sob const &, Sob const &, AttackSortData const &);
_static bool CompareByDistanceAndPriority(Sob const &min, Sob const &cmp, AttackSortData const &sortData) // 0x69F16E
{
    mangled_assert("CompareByDistanceAndPriority");
    todo("implement");
    bool __result = _sub_69F16E(min, cmp, sortData);
    return __result;
}

_extern bool _sub_69F130(Sob const &, Sob const &, AttackSortData const &);
_static bool CompareByCapture(Sob const &min, Sob const &cmp, AttackSortData const &sortData) // 0x69F130
{
    mangled_assert("CompareByCapture");
    todo("implement");
    bool __result = _sub_69F130(min, cmp, sortData);
    return __result;
}
#endif
