#if 0
/* ---------- headers */

#include "decomp.h"
#include <set>
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <Interpolation.h>
#include <ITweak.h>
#include <profile\profile.h>
#include <iostream>
#include <Collision\Primitives\aabb.h>
#include <Collision\Primitives\obb.h>
#include <LevelDesc.h>
#include <Hash.h>
#include <dbdefines.h>
#include <fileio\md5.h>
#include <Mathlib\matrix3.h>
#include <Render\objects\textureregistry.h>
#include <DynamicPoint.h>
#include <Race.h>
#include <Render\objects\objects.h>
#include <TeamColourRegistry.h>
#include <hash_map>
#include <savegame.h>
#include <xhash>
#include <task.h>
#include <Modifiers\ModifierUIInfo.h>
#include <gamestructimpl.h>
#include <stack>
#include <new>
#include <Modifiers\ModifierMultiplier.h>
#include <Badge.h>
#include <exception>
#include <Modifiers\ModifierEffect.h>
#include <ParadeCommand.h>
#include <xstddef>
#include <Parade.h>
#include <type_traits>
#include <Universe.h>
#include <Waypoint.h>
#include <Squadron.h>
#include <SobUnmoveable.h>
#include <command.h>
#include <BuildManager.h>
#include <config.h>
#include <xutility>
#include <Modifiers\ModifierApplier.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <playerresourcetype.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <SelTarg.h>
#include <weaponstaticinfo.h>
#include <prim.h>
#include <GunBinding.h>
#include <fixedpoint.h>
#include <boost\static_assert.hpp>
#include <util\fixed.h>
#include <list>
#include <HyperspaceManager.h>
#include <abilities.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <map>
#include <WeaponClassSpecificInfo.h>
#include <xtree>
#include <ResearchManager.h>
#include <boost\scoped_ptr.hpp>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <GameEventDefs.h>
#include <GameOptions.h>
#include <Mathlib\vector2.h>
#include <GameEventSys.h>
#include <util\types.h>
#include <boost\cstdint.hpp>
#include <boost\config.hpp>
#include <UnitCaps\UnitCaps.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <ResearchData.h>
#include <Collision\BVH\bvh.h>
#include <localizer\localizer.h>
#include <DependencyData.h>
#include <weaponinfo.h>
#include <Mathlib\quat.h>
#include <Graphics\TeamColour.h>
#include <Modifiers\ModifierTargetCache.h>
#include <assist\typemagic.h>
#include <Modifiers\ModifierAbility.h>
#include <shipstatic.h>
#include <commandtype.h>
#include <SOBGroup.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <savegameimpl.h>
#include <pathpoints.h>
#include <debug\db.h>
#include <deque>
#include <MeshAnimation.h>
#include <ShieldTypes.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <SOBGroupManager.h>
#include <OrderFeedback.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <SobWithMeshStatic.h>
#include <selection.h>
#include <ship.h>
#include <Subsystems\Subsystem.h>
#include <savegamedef.h>
#include <SobWithMesh.h>
#include <SobRigidBody.h>
#include <boost\detail\shared_count.hpp>
#include <Subsystems\HardPointManager.h>
#include <Tactics.h>
#include <Subsystems\SubsystemStatic.h>
#include <sob.h>
#include <Subsystems\HardPoint.h>
#include <sobstatic.h>
#include <boost\detail\lwm_win32.hpp>
#include <Subsystems\HardPointStatic.h>
#include <Collision\Primitives\sphere.h>
#include <SobRigidBodyStatic.h>
#include <Subsystems\SubSystemType.h>
#include <gameSettings.h>
#include <syncChecking.h>
#include <Player.h>
#include <luaconfig\luabinding.h>
#include <SquadronList.h>
#include <wchar.h>
#include <Collision\BVH\octree.h>
#include <luaconfig\luaconfig.h>
#include <string>
#include <Collision\BVH\span.h>
#include <lua.h>
#include <Collision\BVH\Internal\span_i.h>
#include <platform\timer.h>
#include <sobid.h>
#include <Collision\BVH\proxy.h>
#include <platform\platformexports.h>
#include <queue>
#include <Collision\intersect.h>
#include <SoundManager\SoundEntityHandle.h>
#include <algorithm>
#include <Collision\primitivesfwd.h>

/* ---------- constants */

/* ---------- definitions */

struct FamilyCmp
{
    _inline FamilyCmp(__int32);
    bool operator()(Squadron const *);
    __int32 m_UCFamilyIndex; // 0x0
};
static_assert(sizeof(FamilyCmp) == 4, "Invalid FamilyCmp size");

typedef std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<GameOptions::Choice> > > choiceiterator;
typedef std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > DirectoryList;

/* ---------- prototypes */

/* ---------- globals */

extern char const Player::m_saveToken[0]; // 0x7AE528
extern SaveData const Player::m_saveData[20]; // 0x7AE530

/* ---------- private variables */

_static
{
    extern std::_Nil _Nil_obj; // 0x84A8B0
}

/* ---------- public code */

Player::Player(__int32, unsigned __int32) // 0x61D3B5
{
    mangled_assert("??0Player@@QAE@HI@Z");
    todo("implement");
}

Player::Player(SaveGameData *) // 0x61D53E
{
    mangled_assert("??0Player@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

_inline std::_Tree_buy<Player::Observer *,std::allocator<Player::Observer *> >::~_Tree_buy<Player::Observer *,std::allocator<Player::Observer *> >() // 0x61D649
{
    mangled_assert("??1?$_Tree_buy@PAVObserver@Player@@V?$allocator@PAVObserver@Player@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_comp<0,std::_Tset_traits<Player::Observer *,std::less<Player::Observer *>,std::allocator<Player::Observer *>,0> >::~_Tree_comp<0,std::_Tset_traits<Player::Observer *,std::less<Player::Observer *>,std::allocator<Player::Observer *>,0> >() // 0x61D652
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tset_traits@PAVObserver@Player@@U?$less@PAVObserver@Player@@@std@@V?$allocator@PAVObserver@Player@@@4@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::set<Player::Observer *,std::less<Player::Observer *>,std::allocator<Player::Observer *> >::~set<Player::Observer *,std::less<Player::Observer *>,std::allocator<Player::Observer *> >() // 0x61D65B
{
    mangled_assert("??1?$set@PAVObserver@Player@@U?$less@PAVObserver@Player@@@std@@V?$allocator@PAVObserver@Player@@@4@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline GameEvent_AddShipToSquadron::~GameEvent_AddShipToSquadron() // 0x61D660
{
    mangled_assert("??1GameEvent_AddShipToSquadron@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline GameEvent_AddSquadronToPlayer::~GameEvent_AddSquadronToPlayer() // 0x61D667
{
    mangled_assert("??1GameEvent_AddSquadronToPlayer@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline GameEvent_PlayerKilled::~GameEvent_PlayerKilled() // 0x61D66E
{
    mangled_assert("??1GameEvent_PlayerKilled@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline GameEvent_RemoveSquadronFromPlayer::~GameEvent_RemoveSquadronFromPlayer() // 0x61D675
{
    mangled_assert("??1GameEvent_RemoveSquadronFromPlayer@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline NDGameEvent_PlayerNameChanged::~NDGameEvent_PlayerNameChanged() // 0x61D67C
{
    mangled_assert("??1NDGameEvent_PlayerNameChanged@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

void Player::postRestore() // 0x61E59D
{
    mangled_assert("?postRestore@Player@@UAEXXZ");
    todo("implement");
}

void Player::defaultSettings() // 0x61DF33
{
    mangled_assert("?defaultSettings@Player@@QAEXXZ");
    todo("implement");
}

Player::~Player() // 0x61D683
{
    mangled_assert("??1Player@@UAE@XZ");
    todo("implement");
}

void Player::addSquadronShip(Ship *) // 0x61DD5A
{
    mangled_assert("?addSquadronShip@Player@@QAEXPAVShip@@@Z");
    todo("implement");
}

void Player::addSquadron(Squadron *) // 0x61DCA5
{
    mangled_assert("?addSquadron@Player@@QAEXPAVSquadron@@@Z");
    todo("implement");
}

void Player::removeSquadron(Squadron *) // 0x61E7C8
{
    mangled_assert("?removeSquadron@Player@@QAEXPAVSquadron@@@Z");
    todo("implement");
}

void Player::conditionalRemoveSquadron(Squadron *) // 0x61DEB5
{
    mangled_assert("?conditionalRemoveSquadron@Player@@QAEXPAVSquadron@@@Z");
    todo("implement");
}

void Player::anesthetizeSquadron(Squadron *) // 0x61DE1C
{
    mangled_assert("?anesthetizeSquadron@Player@@QAEXPAVSquadron@@@Z");
    todo("implement");
}

void Player::rouseSquadron(Squadron *) // 0x61E8BB
{
    mangled_assert("?rouseSquadron@Player@@QAEXPAVSquadron@@@Z");
    todo("implement");
}

void Player::anesthetizeSingleShip(Ship *) // 0x61DDFA
{
    mangled_assert("?anesthetizeSingleShip@Player@@QAEXPAVShip@@@Z");
    todo("implement");
}

void Player::rouseSingleShip(Ship *) // 0x61E899
{
    mangled_assert("?rouseSingleShip@Player@@QAEXPAVShip@@@Z");
    todo("implement");
}

void Player::anesthetizeSquadronOnly(Squadron *) // 0x61DE68
{
    mangled_assert("?anesthetizeSquadronOnly@Player@@QAEXPAVSquadron@@@Z");
    todo("implement");
}

void Player::rouseSquadronOnly(Squadron *) // 0x61E907
{
    mangled_assert("?rouseSquadronOnly@Player@@QAEXPAVSquadron@@@Z");
    todo("implement");
}

void Player::transferOneOfOurSquadronsTo(Squadron *, Player *) // 0x61E9FB
{
    mangled_assert("?transferOneOfOurSquadronsTo@Player@@QAEXPAVSquadron@@PAV1@@Z");
    todo("implement");
}

Selection &Player::getAwakeShips() // 0x61E22A
{
    mangled_assert("?getAwakeShips@Player@@QAEAAVSelection@@XZ");
    todo("implement");
}

Selection &Player::getSleepingShips() // 0x61E3FA
{
    mangled_assert("?getSleepingShips@Player@@QAEAAVSelection@@XZ");
    todo("implement");
}

void Player::setAllies(unsigned short) // 0x61E961
{
    mangled_assert("?setAllies@Player@@QAEXG@Z");
    todo("implement");
}

void Player::purgeFriendliesFromAttackingMeLists() // 0x61E787
{
    mangled_assert("?purgeFriendliesFromAttackingMeLists@Player@@QAEXXZ");
    todo("implement");
}

Ship *Player::getClosestShip(vector3 const &) const // 0x61E22E
{
    mangled_assert("?getClosestShip@Player@@QBEPAVShip@@ABVvector3@@@Z");
    todo("implement");
}

__int32 Player::getNumResourceUnits() const // 0x61E3B8
{
    mangled_assert("?getNumResourceUnits@Player@@QBEHXZ");
    todo("implement");
}

Fixed<10> const &Player::getNumResourceUnitsFixedPoint() const // 0x61E3BF
{
    mangled_assert("?getNumResourceUnitsFixedPoint@Player@@QBEABV?$Fixed@$09@@XZ");
    todo("implement");
}

void Player::setNumResourceUnits(Fixed<10> const &) // 0x61E9E2
{
    mangled_assert("?setNumResourceUnits@Player@@QAEXABV?$Fixed@$09@@@Z");
    todo("implement");
}

void Player::increaseResourceUnits(Fixed<10> const &, PlayerResourceType) // 0x61E49B
{
    mangled_assert("?increaseResourceUnits@Player@@QAEXABV?$Fixed@$09@@W4PlayerResourceType@@@Z");
    todo("implement");
}

void Player::decreaseResourceUnits(Fixed<10> const &) // 0x61DEF6
{
    mangled_assert("?decreaseResourceUnits@Player@@QAEXABV?$Fixed@$09@@@Z");
    todo("implement");
}

PlayerConnectionStatus Player::getConnectionStatus() // 0x61E2C4
{
    mangled_assert("?getConnectionStatus@Player@@QAE?AW4PlayerConnectionStatus@@XZ");
    todo("implement");
}

void Player::setConnectionStatus(PlayerConnectionStatus) // 0x61E975
{
    mangled_assert("?setConnectionStatus@Player@@QAEXW4PlayerConnectionStatus@@@Z");
    todo("implement");
}

bool Player::isOutOfSync() // 0x61E562
{
    mangled_assert("?isOutOfSync@Player@@QAE_NXZ");
    todo("implement");
}

__int32 Player::getOutOfSyncFrame() // 0x61E3F3
{
    mangled_assert("?getOutOfSyncFrame@Player@@QAEHXZ");
    todo("implement");
}

void Player::setOutOfSyncFrame(__int32) // 0x61E9EE
{
    mangled_assert("?setOutOfSyncFrame@Player@@QAEXH@Z");
    todo("implement");
}

void Player::LoadScripts() // 0x61D96B
{
    mangled_assert("?LoadScripts@Player@@AAEXXZ");
    todo("implement");
}

void Player::KillPlayer() // 0x61D883
{
    mangled_assert("?KillPlayer@Player@@QAEXXZ");
    todo("implement");
}

bool Player::update(float) // 0x61EBB9
{
    mangled_assert("?update@Player@@QAE_NM@Z");
    todo("implement");
}

void Player::setName(wchar_t const *) // 0x61E982
{
    mangled_assert("?setName@Player@@QAEXPB_W@Z");
    todo("implement");
}

void Player::SubSystemActivated(SubSystem *) // 0x61DA16
{
    mangled_assert("?SubSystemActivated@Player@@QAEXPAVSubSystem@@@Z");
    todo("implement");
}

void Player::SubSystemDeactivated(SubSystem *) // 0x61DA37
{
    mangled_assert("?SubSystemDeactivated@Player@@QAEXPAVSubSystem@@@Z");
    todo("implement");
}

bool Player::SubSystemTypeIsActive(unsigned __int32) // 0x61DA58
{
    mangled_assert("?SubSystemTypeIsActive@Player@@QAE_NI@Z");
    todo("implement");
}

unsigned __int32 Player::getNumberOfResearchSubSystems() // 0x61E3C3
{
    mangled_assert("?getNumberOfResearchSubSystems@Player@@QAEIXZ");
    todo("implement");
}

_inline FamilyCmp::FamilyCmp(__int32) // 0x61D302
{
    mangled_assert("??0FamilyCmp@@QAE@H@Z");
    todo("implement");
}

_inline bool FamilyCmp::operator()(Squadron const *) // 0x61D81E
{
    mangled_assert("??RFamilyCmp@@QAE_NPBVSquadron@@@Z");
    todo("implement");
}

unsigned __int32 Player::getCurrentUnitsUsedByFamily(__int32) const // 0x61E2CB
{
    mangled_assert("?getCurrentUnitsUsedByFamily@Player@@QBEIH@Z");
    todo("implement");
}

void Player::getCurrentUnitsUsedByShip(__int32, __int32, __int32 &, __int32 &) const // 0x61E2F6
{
    mangled_assert("?getCurrentUnitsUsedByShip@Player@@QBEXHHAAH0@Z");
    todo("implement");
}

unsigned __int32 Player::getUnitCapsLeftForShip(__int32, __int32) const // 0x61E401
{
    mangled_assert("?getUnitCapsLeftForShip@Player@@QBEIHH@Z");
    todo("implement");
}

void Player::AddObserver(Player::Observer *) const // 0x61D867
{
    mangled_assert("?AddObserver@Player@@QBEXPAVObserver@1@@Z");
    todo("implement");
}

void Player::RemoveObserver(Player::Observer *) const // 0x61D9E5
{
    mangled_assert("?RemoveObserver@Player@@QBEXPAVObserver@1@@Z");
    todo("implement");
}

bool Player::restore(SaveGameData *) // 0x61E85B
{
    mangled_assert("?restore@Player@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool Player::save(SaveGameData *, SaveType) // 0x61E926
{
    mangled_assert("?save@Player@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
