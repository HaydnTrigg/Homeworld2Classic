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

bool selEnemy(Sob const *s, void *data) // 0x6A0BBD
{
    mangled_assert("?selEnemy@@YG_NPBVSob@@PAX@Z");
    todo("implement");
}

AttackSortData::AttackSortData() // 0x69EC8E
{
    mangled_assert("??0AttackSortData@@QAE@XZ");
    todo("implement");
}

AttackCommand::AttackCommand(Squadron *, Selection const &, Command::CommandOrigin, bool, bool, vector3 const &) // 0x69EACA
{
    mangled_assert("??0AttackCommand@@QAE@PAVSquadron@@ABVSelection@@W4CommandOrigin@Command@@_N3ABVvector3@@@Z");
    todo("implement");
}

AttackCommand::~AttackCommand() // 0x69ED0F
{
    mangled_assert("??1AttackCommand@@UAE@XZ");
    todo("implement");
}

void AttackCommand::cleanUpCommand() // 0x69FB22
{
    mangled_assert("?cleanUpCommand@AttackCommand@@UAEXXZ");
    todo("implement");
}

void AttackCommand::resetCommand() // 0x6A0ACF
{
    mangled_assert("?resetCommand@AttackCommand@@UAEXXZ");
    todo("implement");
}

vector3 const &AttackCommand::getDestinationDtrm() const // 0x6A02D7
{
    mangled_assert("?getDestinationDtrm@AttackCommand@@UBEABVvector3@@XZ");
    todo("implement");
}

vector3 const &AttackCommand::getDestinationVis() const // 0x6A02FE
{
    mangled_assert("?getDestinationVis@AttackCommand@@UBEABVvector3@@XZ");
    todo("implement");
}

void AttackCommand::scanForNewTargets() // 0x6A0B7A
{
    mangled_assert("?scanForNewTargets@AttackCommand@@AAEXXZ");
    todo("implement");
}

bool AttackCommand::useAvoidance() const // 0x6A1106
{
    mangled_assert("?useAvoidance@AttackCommand@@UBE_NXZ");
    todo("implement");
}

void AttackCommand::flyStraightAtEnemy() // 0x69FEB8
{
    mangled_assert("?flyStraightAtEnemy@AttackCommand@@AAEXXZ");
    todo("implement");
}

void AttackCommand::flyToAboveEnemy() // 0x6A005F
{
    mangled_assert("?flyToAboveEnemy@AttackCommand@@AAEXXZ");
    todo("implement");
}

void AttackCommand::breakAllAndAttack() // 0x69F991
{
    mangled_assert("?breakAllAndAttack@AttackCommand@@AAEXXZ");
    todo("implement");
}

void AttackCommand::makeSureAllAreAttacking() // 0x6A09DA
{
    mangled_assert("?makeSureAllAreAttacking@AttackCommand@@AAEXXZ");
    todo("implement");
}

void AttackCommand::FlyToLastKnownPosition() // 0x69F3BC
{
    mangled_assert("?FlyToLastKnownPosition@AttackCommand@@AAEXXZ");
    todo("implement");
}

ComResult AttackCommand::update(float) // 0x6A0C51
{
    mangled_assert("?update@AttackCommand@@UAE?AW4ComResult@@M@Z");
    todo("implement");
}

AttackStyle::BreakStyleType AttackCommand::getBreakStyleForType(unsigned __int32) const // 0x6A02B6
{
    mangled_assert("?getBreakStyleForType@AttackCommand@@ABE?AW4BreakStyleType@AttackStyle@@I@Z");
    todo("implement");
}

Sob *AttackCommand::getTargetNonDeterministicSafe() const // 0x6A038A
{
    mangled_assert("?getTargetNonDeterministicSafe@AttackCommand@@QBEPAVSob@@XZ");
    todo("implement");
}

bool AttackCommand::isAttackable(Sob const *s, void *data) // 0x6A03DA
{
    mangled_assert("?isAttackable@AttackCommand@@SG_NPBVSob@@PAX@Z");
    todo("implement");
}

Sob *AttackCommand::GetCurrentTarget() // 0x69F4B6
{
    mangled_assert("?GetCurrentTarget@AttackCommand@@AAEPAVSob@@XZ");
    todo("implement");
}

Sob *AttackCommand::getBestTarget(Squadron const *squad, Selection const &targets) // 0x6A0261
{
    mangled_assert("?getBestTarget@AttackCommand@@SGPAVSob@@PBVSquadron@@ABVSelection@@@Z");
    todo("implement");
}

bool CompareByAttackers(Sob const &p1, Sob const &p2, AttackSortData const &sortData) // 0x69F0C8
{
    mangled_assert("?CompareByAttackers@@YG_NABVSob@@0ABUAttackSortData@@@Z");
    todo("implement");
}

bool beingCapturedByFriendly(Sob const &sob, SobWithMesh const *attacker) // 0x69F92A
{
    mangled_assert("?beingCapturedByFriendly@@YG_NABVSob@@PBVSobWithMesh@@@Z");
    todo("implement");
}

bool CompareShipsByPriority::Compare(Sob const &, Sob const &) const // 0x69EEE4
{
    mangled_assert("?Compare@CompareShipsByPriority@@UBE_NABVSob@@0@Z");
    todo("implement");
}

char const *AttackCommand::getName() const // 0x6A0322
{
    mangled_assert("?getName@AttackCommand@@UBEPBDXZ");
    todo("implement");
}

CommandType AttackCommand::getCommandType() const // 0x6A02D3
{
    mangled_assert("?getCommandType@AttackCommand@@UBE?AW4CommandType@@XZ");
    todo("implement");
}

WeaponActivate AttackCommand::getWeaponActivation() const // 0x6A03D0
{
    mangled_assert("?getWeaponActivation@AttackCommand@@UBE?AW4WeaponActivate@@XZ");
    todo("implement");
}

void AttackCommand::kamikaze() // 0x6A054C
{
    mangled_assert("?kamikaze@AttackCommand@@QAEXXZ");
    todo("implement");
}

bool AttackCommand::canBeInterrupted(CommandType, Command *) // 0x69F9EE
{
    mangled_assert("?canBeInterrupted@AttackCommand@@UAE_NW4CommandType@@PAVCommand@@@Z");
    todo("implement");
}

AttackCommand::AttackCommand(SaveGameData *) // 0x69EA79
{
    mangled_assert("??0AttackCommand@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

void AttackCommand::defaultSettings() // 0x69FBB4
{
    mangled_assert("?defaultSettings@AttackCommand@@QAEXXZ");
    todo("implement");
}

void AttackCommand::postRestore() // 0x6A0A51
{
    mangled_assert("?postRestore@AttackCommand@@UAEXXZ");
    todo("implement");
}

bool AttackCommand::restore(SaveGameData *) // 0x6A0AE0
{
    mangled_assert("?restore@AttackCommand@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool AttackCommand::save(SaveGameData *, SaveType) // 0x6A0B2D
{
    mangled_assert("?save@AttackCommand@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

AttackCommandStaticInfo::AttackCommandStaticInfo(unsigned __int32) // 0x69EBAD
{
    mangled_assert("??0AttackCommandStaticInfo@@QAE@I@Z");
    todo("implement");
}

AttackCommandStaticInfo::~AttackCommandStaticInfo() // 0x69ED5D
{
    mangled_assert("??1AttackCommandStaticInfo@@UAE@XZ");
    todo("implement");
}

AttackStyle::AttackStyleType AttackCommandStaticInfo::loadAttackStyle(char const *, __int32) // 0x6A05A3
{
    mangled_assert("?loadAttackStyle@AttackCommandStaticInfo@@QAE?AW4AttackStyleType@AttackStyle@@PBDH@Z");
    todo("implement");
}

AttackStyle::AttackStyleType AttackCommandStaticInfo::GetAttackStyleForFamilyIndex(unsigned __int32) const // 0x69F488
{
    mangled_assert("?GetAttackStyleForFamilyIndex@AttackCommandStaticInfo@@QBE?AW4AttackStyleType@AttackStyle@@I@Z");
    todo("implement");
}

float AttackCommandStaticInfo::GetPriorityForFamilyIndex(unsigned __int32) const // 0x69F5B4
{
    mangled_assert("?GetPriorityForFamilyIndex@AttackCommandStaticInfo@@QBEMI@Z");
    todo("implement");
}

bool SpecialAttackManager::startup() // 0x6A0C22
{
    mangled_assert("?startup@SpecialAttackManager@@SG_NXZ");
    todo("implement");
}

bool SpecialAttackManager::shutdown() // 0x6A0BFE
{
    mangled_assert("?shutdown@SpecialAttackManager@@SG_NXZ");
    todo("implement");
}

unsigned __int32 SpecialAttackManager::lookUpAttack(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x6A0966
{
    mangled_assert("?lookUpAttack@SpecialAttackManager@@QAEIABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &SpecialAttackManager::getSpecialAttackName(unsigned __int32) // 0x6A0328
{
    mangled_assert("?getSpecialAttackName@SpecialAttackManager@@QAEABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@I@Z");
    todo("implement");
}

SpecialAttackManager::SpecialAttackManager() // 0x69EC9B
{
    mangled_assert("??0SpecialAttackManager@@AAE@XZ");
    todo("implement");
}

_inline std::_List_buy<AttackStyleStatic *,std::allocator<AttackStyleStatic *> >::~_List_buy<AttackStyleStatic *,std::allocator<AttackStyleStatic *> >() // 0x69ECB1
{
    mangled_assert("??1?$_List_buy@PAVAttackStyleStatic@@V?$allocator@PAVAttackStyleStatic@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_buy<std::pair<unsigned int const ,enum AttackStyle::AttackStyleType>,std::allocator<std::pair<unsigned int const ,enum AttackStyle::AttackStyleType> > >::~_Tree_buy<std::pair<unsigned int const ,enum AttackStyle::AttackStyleType>,std::allocator<std::pair<unsigned int const ,enum AttackStyle::AttackStyleType> > >() // 0x69ECE1
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBIW4AttackStyleType@AttackStyle@@@std@@V?$allocator@U?$pair@$$CBIW4AttackStyleType@AttackStyle@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_comp<0,std::_Tmap_traits<unsigned int,enum AttackStyle::AttackStyleType,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,enum AttackStyle::AttackStyleType> >,0> >::~_Tree_comp<0,std::_Tmap_traits<unsigned int,enum AttackStyle::AttackStyleType,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,enum AttackStyle::AttackStyleType> >,0> >() // 0x69ECEA
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@IW4AttackStyleType@AttackStyle@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIW4AttackStyleType@AttackStyle@@@std@@@4@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::map<unsigned int,enum AttackStyle::AttackStyleType,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,enum AttackStyle::AttackStyleType> > >::~map<unsigned int,enum AttackStyle::AttackStyleType,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,enum AttackStyle::AttackStyleType> > >() // 0x69ED05
{
    mangled_assert("??1?$map@IW4AttackStyleType@AttackStyle@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIW4AttackStyleType@AttackStyle@@@std@@@4@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

bool SpecialAttackManager::loadScripts() // 0x6A0770
{
    mangled_assert("?loadScripts@SpecialAttackManager@@AAE_NXZ");
    todo("implement");
}

SpecialAttackManager::~SpecialAttackManager() // 0x69EE0A
{
    mangled_assert("??1SpecialAttackManager@@AAE@XZ");
    todo("implement");
}

/* ---------- private code */

_static bool CompareByAngle(Sob const &min, Sob const &cmp, AttackSortData const &sortData) // 0x69EF4D
{
    mangled_assert("CompareByAngle");
    todo("implement");
}

_static bool CompareByDistanceAndPriority(Sob const &min, Sob const &cmp, AttackSortData const &sortData) // 0x69F16E
{
    mangled_assert("CompareByDistanceAndPriority");
    todo("implement");
}

_static bool CompareByCapture(Sob const &min, Sob const &cmp, AttackSortData const &sortData) // 0x69F130
{
    mangled_assert("CompareByCapture");
    todo("implement");
}
#endif
