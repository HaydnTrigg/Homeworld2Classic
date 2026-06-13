#if 0
/* ---------- headers */

#include "decomp.h"
#include <abilities.h>
#include <Race.h>
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <Collision\Primitives\obb.h>
#include <xmemory0>
#include <Collision\BVH\octree.h>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Tactics.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <BuildManager.h>
#include <GameObj.h>
#include <Mathlib\matrix3.h>
#include <util\statmonitor.h>
#include <util\utilexports.h>
#include <Interpolation.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <Collision\Primitives\aabb.h>
#include <OrderFeedback.h>
#include <gameSettings.h>
#include <config.h>
#include <sobid.h>
#include <syncChecking.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <weaponinfo.h>
#include <vector>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <orders.h>
#include <Modifiers\ModifierTargetCache.h>
#include <orders_base.h>
#include <dbdefines.h>
#include <UnitCaps\UnitCaps.h>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <Player.h>
#include <gamemsg.h>
#include <task.h>
#include <ResearchManager.h>
#include <list>
#include <stack>
#include <SobWithMeshStatic.h>
#include <Squadron.h>
#include <command.h>
#include <ship.h>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <Mathlib\vector3.h>
#include <SobWithMesh.h>
#include <Modifiers\ModifierUIInfo.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <SobRigidBody.h>
#include <Mathlib\vector4.h>
#include <Modifiers\ModifierMultiplier.h>
#include <seInterface2\SoundParams.h>
#include <Modifiers\ModifierEffect.h>
#include <SobRigidBodyStatic.h>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <MeshAnimation.h>
#include <ShieldTypes.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <Modifiers\ModifierApplier.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <Subsystems\HardPointManager.h>
#include <Subsystems\HardPoint.h>
#include <Subsystems\HardPointStatic.h>
#include <DynamicPoint.h>
#include <shipstatic.h>
#include <boost\cstdint.hpp>
#include <Subsystems\SubSystemType.h>
#include <weaponstaticinfo.h>
#include <boost\config.hpp>
#include <GunBinding.h>
#include <GameEventDefs.h>
#include <SOBGroupManager.h>
#include <GameEventSys.h>
#include <hash_map>
#include <Parade.h>
#include <xhash>
#include <Mathlib\quat.h>
#include <HyperspaceManager.h>
#include <SquadronList.h>
#include <playerresourcetype.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <WeaponClassSpecificInfo.h>
#include <MultiplierTypes.h>
#include <LevelDesc.h>
#include <Collision\BVH\bvh.h>
#include <Hash.h>
#include <fileio\md5.h>
#include <SoundManager\SoundEntityHandle.h>
#include <gamestructimpl.h>
#include <platform\timer.h>
#include <Badge.h>
#include <pathpoints.h>
#include <platform\platformexports.h>
#include <debug\db.h>
#include <Universe.h>
#include <Waypoint.h>
#include <deque>
#include <SobUnmoveable.h>
#include <sob.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <Modifiers\ModifierAbility.h>
#include <boost\static_assert.hpp>
#include <AttackCommand.h>
#include <AttackStyle.h>
#include <weaponTargetInfo.h>
#include <ParadeCommand.h>
#include <alliance.h>
#include <commandtype.h>
#include <fixedpoint.h>
#include <wchar.h>
#include <util\fixed.h>
#include <queue>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern Alliance *Alliance::m_instance; // 0x8486C4

/* ---------- private variables */

/* ---------- public code */

_extern _sub_5DBF90(Alliance *const);
Alliance::Alliance() // 0x5DBF90
{
    mangled_assert("??0Alliance@@QAE@XZ");
    todo("implement");
    _sub_5DBF90(this);
}

_extern void _sub_5DC00F(std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<AllianceEvent> > > *const);
_inline std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<AllianceEvent> > >::~_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<AllianceEvent> > >() // 0x5DC00F
{
    mangled_assert("??1?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UAllianceEvent@@@std@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5DC00F(this);
}

_extern void _sub_5DC010(std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<AllianceEvent> > > *const);
_inline std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<AllianceEvent> > >::~_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<AllianceEvent> > >() // 0x5DC010
{
    mangled_assert("??1?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UAllianceEvent@@@std@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5DC010(this);
}

_extern void _sub_5DC011(std::_Deque_val<std::_Deque_simple_types<AllianceEvent> > *const);
_inline std::_Deque_val<std::_Deque_simple_types<AllianceEvent> >::~_Deque_val<std::_Deque_simple_types<AllianceEvent> >() // 0x5DC011
{
    mangled_assert("??1?$_Deque_val@U?$_Deque_simple_types@UAllianceEvent@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5DC011(this);
}

_extern void _sub_5DC027(Alliance *const);
Alliance::~Alliance() // 0x5DC027
{
    mangled_assert("??1Alliance@@QAE@XZ");
    todo("implement");
    _sub_5DC027(this);
}

_extern void _sub_5DC03E(GameEvent_PlayerAlliance *const);
_inline GameEvent_PlayerAlliance::~GameEvent_PlayerAlliance() // 0x5DC03E
{
    mangled_assert("??1GameEvent_PlayerAlliance@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5DC03E(this);
}

_extern Alliance *_sub_5DC597();
Alliance *Alliance::instance() // 0x5DC597
{
    mangled_assert("?instance@Alliance@@SGPAV1@XZ");
    todo("implement");
    Alliance * __result = _sub_5DC597();
    return __result;
}

_extern void _sub_5DC8CF(Alliance *const);
void Alliance::release() // 0x5DC8CF
{
    mangled_assert("?release@Alliance@@QAEXXZ");
    todo("implement");
    _sub_5DC8CF(this);
}

_extern void _sub_5DC996(Alliance *const, unsigned __int32, unsigned __int32);
void Alliance::setAlliance(unsigned __int32, unsigned __int32) // 0x5DC996
{
    mangled_assert("?setAlliance@Alliance@@QAEXII@Z");
    todo("implement");
    _sub_5DC996(this, arg, arg);
}

_extern void _sub_5DC7CA(Alliance *const, unsigned __int32, unsigned __int32, unsigned __int32, __int32);
void Alliance::publishEvent(unsigned __int32, unsigned __int32, unsigned __int32, __int32) // 0x5DC7CA
{
    mangled_assert("?publishEvent@Alliance@@IAEXIIIH@Z");
    todo("implement");
    _sub_5DC7CA(this, arg, arg, arg, arg);
}

_extern void _sub_5DC31C(Alliance *const, unsigned __int32, unsigned __int32);
void Alliance::breakAlliance(unsigned __int32, unsigned __int32) // 0x5DC31C
{
    mangled_assert("?breakAlliance@Alliance@@QAEXII@Z");
    todo("implement");
    _sub_5DC31C(this, arg, arg);
}

_extern bool _sub_5DC64B(Alliance *const, unsigned __int32, unsigned __int32);
bool Alliance::isAllied(unsigned __int32, unsigned __int32) // 0x5DC64B
{
    mangled_assert("?isAllied@Alliance@@QAE_NII@Z");
    todo("implement");
    bool __result = _sub_5DC64B(this, arg, arg);
    return __result;
}

_extern bool _sub_5DC5D7(Alliance *const, unsigned __int32, unsigned __int32);
bool Alliance::isAllianceSet(unsigned __int32, unsigned __int32) // 0x5DC5D7
{
    mangled_assert("?isAllianceSet@Alliance@@QAE_NII@Z");
    todo("implement");
    bool __result = _sub_5DC5D7(this, arg, arg);
    return __result;
}

_extern void _sub_5DCAC9(Alliance *const, unsigned __int32, unsigned __int32, bool);
void Alliance::setSharedVision(unsigned __int32, unsigned __int32, bool) // 0x5DCAC9
{
    mangled_assert("?setSharedVision@Alliance@@QAEXII_N@Z");
    todo("implement");
    _sub_5DCAC9(this, arg, arg, arg);
}

_extern bool _sub_5DC51B(Alliance *const, unsigned __int32, unsigned __int32);
bool Alliance::getSharedVision(unsigned __int32, unsigned __int32) // 0x5DC51B
{
    mangled_assert("?getSharedVision@Alliance@@QAE_NII@Z");
    todo("implement");
    bool __result = _sub_5DC51B(this, arg, arg);
    return __result;
}

_extern __int32 _sub_5DCBBF(Alliance *const, unsigned __int32, unsigned __int32, __int32);
__int32 Alliance::transferRUs(unsigned __int32, unsigned __int32, __int32) // 0x5DCBBF
{
    mangled_assert("?transferRUs@Alliance@@QAEHIIH@Z");
    todo("implement");
    __int32 __result = _sub_5DCBBF(this, arg, arg, arg);
    return __result;
}

_extern bool _sub_5DCCAA(Alliance *const, unsigned __int32, unsigned __int32, SquadronList const *);
bool Alliance::transferSquadrons(unsigned __int32, unsigned __int32, SquadronList const *) // 0x5DCCAA
{
    mangled_assert("?transferSquadrons@Alliance@@QAE_NIIPBVSquadronList@@@Z");
    todo("implement");
    bool __result = _sub_5DCCAA(this, arg, arg, arg);
    return __result;
}

_extern void _sub_5DC49C(Alliance *const, unsigned __int32);
void Alliance::formAlliance(unsigned __int32) // 0x5DC49C
{
    mangled_assert("?formAlliance@Alliance@@QAEXI@Z");
    todo("implement");
    _sub_5DC49C(this, arg);
}

_extern void _sub_5DC2D4(Alliance *const, unsigned __int32);
void Alliance::breakAlliance(unsigned __int32) // 0x5DC2D4
{
    mangled_assert("?breakAlliance@Alliance@@QAEXI@Z");
    todo("implement");
    _sub_5DC2D4(this, arg);
}

_extern bool _sub_5DC62C(Alliance *const, unsigned __int32);
bool Alliance::isAllied(unsigned __int32) // 0x5DC62C
{
    mangled_assert("?isAllied@Alliance@@QAE_NI@Z");
    todo("implement");
    bool __result = _sub_5DC62C(this, arg);
    return __result;
}

_extern void _sub_5DC578(Alliance *const, unsigned __int32, bool);
void Alliance::ignorePlayer(unsigned __int32, bool) // 0x5DC578
{
    mangled_assert("?ignorePlayer@Alliance@@QAEXI_N@Z");
    todo("implement");
    _sub_5DC578(this, arg, arg);
}

_extern bool _sub_5DC6E1(Alliance *const, unsigned __int32);
bool Alliance::isPlayerIgnored(unsigned __int32) // 0x5DC6E1
{
    mangled_assert("?isPlayerIgnored@Alliance@@QAE_NI@Z");
    todo("implement");
    bool __result = _sub_5DC6E1(this, arg);
    return __result;
}

_extern __int32 _sub_5DCB4D(Alliance *const, unsigned __int32, __int32);
__int32 Alliance::transferRUs(unsigned __int32, __int32) // 0x5DCB4D
{
    mangled_assert("?transferRUs@Alliance@@QAEHIH@Z");
    todo("implement");
    __int32 __result = _sub_5DCB4D(this, arg, arg);
    return __result;
}

_extern void _sub_5DCC5E(Alliance *const, unsigned __int32, SquadronList const *);
void Alliance::transferSquadrons(unsigned __int32, SquadronList const *) // 0x5DCC5E
{
    mangled_assert("?transferSquadrons@Alliance@@QAEXIPBVSquadronList@@@Z");
    todo("implement");
    _sub_5DCC5E(this, arg, arg);
}

_extern void _sub_5DC247(Alliance *const, AllianceEventType, unsigned __int32, unsigned __int32);
void Alliance::addAllianceEvent(AllianceEventType, unsigned __int32, unsigned __int32) // 0x5DC247
{
    mangled_assert("?addAllianceEvent@Alliance@@QAEXW4AllianceEventType@@II@Z");
    todo("implement");
    _sub_5DC247(this, arg, arg, arg);
}

_extern void _sub_5DC712(Alliance *const, AllianceEvent *);
void Alliance::popAllianceEvent(AllianceEvent *) // 0x5DC712
{
    mangled_assert("?popAllianceEvent@Alliance@@QAEXPAUAllianceEvent@@@Z");
    todo("implement");
    _sub_5DC712(this, arg);
}

_extern void _sub_5DC76C(Alliance *const, AllianceOrderAction, unsigned __int32, unsigned __int32, unsigned __int32, SquadronList const *);
void Alliance::processOrder(AllianceOrderAction, unsigned __int32, unsigned __int32, unsigned __int32, SquadronList const *) // 0x5DC76C
{
    mangled_assert("?processOrder@Alliance@@QAEXW4AllianceOrderAction@@IIIPBVSquadronList@@@Z");
    todo("implement");
    _sub_5DC76C(this, arg, arg, arg, arg, arg);
}

_extern void _sub_5DC8F1(Alliance *const, unsigned __int32, unsigned __int32);
void Alliance::removeAllyFromAttack(unsigned __int32, unsigned __int32) // 0x5DC8F1
{
    mangled_assert("?removeAllyFromAttack@Alliance@@QAEXII@Z");
    todo("implement");
    _sub_5DC8F1(this, arg, arg);
}

/* ---------- private code */
#endif
