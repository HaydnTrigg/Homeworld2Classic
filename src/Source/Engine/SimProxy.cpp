#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <Modifiers\ModifierAbility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <orders.h>
#include <orders_base.h>
#include <Race.h>
#include <Mathlib\matrix3.h>
#include <gamemsg.h>
#include <boost\checked_delete.hpp>
#include <new>
#include <ship.h>
#include <exception>
#include <SobWithMesh.h>
#include <xstddef>
#include <BuildManager.h>
#include <SobRigidBody.h>
#include <type_traits>
#include <sob.h>
#include <ParadeCommand.h>
#include <dbdefines.h>
#include <sobstatic.h>
#include <commandtype.h>
#include <UnitCaps\UnitCaps.h>
#include <Collision\Primitives\sphere.h>
#include <OrderFeedback.h>
#include <weaponinfo.h>
#include <Squadron.h>
#include <command.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <Modifiers\ModifierTargetCache.h>
#include <vector>
#include <xmemory>
#include <luaconfig\luabinding.h>
#include <TeamColourRegistry.h>
#include <luaconfig\luaconfig.h>
#include <savegame.h>
#include <lua.h>
#include <task.h>
#include <stack>
#include <SobWithMeshStatic.h>
#include <list>
#include <BuildJobType.h>
#include <SobRigidBodyStatic.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <MeshAnimation.h>
#include <ShieldTypes.h>
#include <GameObj.h>
#include <xtree>
#include <ResearchManager.h>
#include <config.h>
#include <boost\scoped_ptr.hpp>
#include <Collision\Primitives\obb.h>
#include <util\statmonitor.h>
#include <Collision\BVH\octree.h>
#include <util\utilexports.h>
#include <SOBGroupManager.h>
#include <Collision\BVH\span.h>
#include <platform\timer.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Subsystems\HardPointManager.h>
#include <platform\platformexports.h>
#include <Mathlib\vector2.h>
#include <Collision\BVH\proxy.h>
#include <Subsystems\HardPoint.h>
#include <Collision\intersect.h>
#include <Subsystems\HardPointStatic.h>
#include <util\types.h>
#include <Collision\primitivesfwd.h>
#include <Subsystems\SubSystemType.h>
#include <boost\cstdint.hpp>
#include <DynamicPoint.h>
#include <Interpolation.h>
#include <Modifiers\ModifierUIInfo.h>
#include <Modifiers\ModifierMultiplier.h>
#include <shipstatic.h>
#include <Modifiers\ModifierEffect.h>
#include <Tactics.h>
#include <Mathlib\quat.h>
#include <Collision\Primitives\aabb.h>
#include <playerresourcetype.h>
#include <sobid.h>
#include <App\Hw2Identify.h>
#include <Modifiers\ModifierApplier.h>
#include <SoundManager\SoundEntityHandle.h>
#include <Subsystems\SubsystemStatic.h>
#include <weaponstaticinfo.h>
#include <GunBinding.h>
#include <pathpoints.h>
#include <debug\db.h>
#include <deque>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <BuildQueue.h>
#include <seInterface2\SoundParams.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <BuildData.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <Parade.h>
#include <savegamedef.h>
#include <hash_map>
#include <boost\detail\shared_count.hpp>
#include <xhash>
#include <WeaponClassSpecificInfo.h>
#include <Universe.h>
#include <Waypoint.h>
#include <boost\detail\lwm_win32.hpp>
#include <SobUnmoveable.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <BuildJob.h>
#include <ResearchData.h>
#include <DependencyData.h>
#include <SimProxy.h>
#include <Player.h>
#include <GameEventSys.h>
#include <wchar.h>
#include <SquadronList.h>
#include <string>
#include <queue>
#include <abilities.h>
#include <Stats\StatLogging.h>
#include <HyperspaceManager.h>

/* ---------- constants */

/* ---------- definitions */

struct StaticIDCompare
{
    StaticIDCompare(unsigned __int32);
    bool operator()(Squadron *) const;
    unsigned __int32 m_shipTypeId; // 0x0
};
static_assert(sizeof(StaticIDCompare) == 4, "Invalid StaticIDCompare size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_637CF4(SimProxy::Data::BuildProxyData *const, unsigned __int32, bool);
_inline SimProxy::Data::BuildProxyData::BuildProxyData(unsigned __int32, bool) // 0x637CF4
{
    mangled_assert("??0BuildProxyData@Data@SimProxy@@QAE@I_N@Z");
    todo("implement");
    _sub_637CF4(this, arg, arg);
}

_extern _sub_637D07(SimProxy::Data *const);
_inline SimProxy::Data::Data() // 0x637D07
{
    mangled_assert("??0Data@SimProxy@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_637D07(this);
}

_extern bool _sub_637E44(SimProxy::Data::BuildProxyData *const, SimProxy::Data::BuildProxyData const &);
_inline bool SimProxy::Data::BuildProxyData::operator==(SimProxy::Data::BuildProxyData const &) // 0x637E44
{
    mangled_assert("??8BuildProxyData@Data@SimProxy@@QAE_NABU012@@Z");
    todo("implement");
    bool __result = _sub_637E44(this, arg);
    return __result;
}

_extern _sub_637D68(SimProxy *const, Player *);
SimProxy::SimProxy(Player *) // 0x637D68
{
    mangled_assert("??0SimProxy@@QAE@PAVPlayer@@@Z");
    todo("implement");
    _sub_637D68(this, arg);
}

_extern void _sub_637DBA(std::_List_buy<SimProxy::Data::BuildProxyData,std::allocator<SimProxy::Data::BuildProxyData> > *const);
_inline std::_List_buy<SimProxy::Data::BuildProxyData,std::allocator<SimProxy::Data::BuildProxyData> >::~_List_buy<SimProxy::Data::BuildProxyData,std::allocator<SimProxy::Data::BuildProxyData> >() // 0x637DBA
{
    mangled_assert("??1?$_List_buy@UBuildProxyData@Data@SimProxy@@V?$allocator@UBuildProxyData@Data@SimProxy@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_637DBA(this);
}

_extern void _sub_637DDD(SimProxy::Data *const);
_inline SimProxy::Data::~Data() // 0x637DDD
{
    mangled_assert("??1Data@SimProxy@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_637DDD(this);
}

_extern void _sub_637E15(SimProxy *const);
SimProxy::~SimProxy() // 0x637E15
{
    mangled_assert("??1SimProxy@@QAE@XZ");
    todo("implement");
    _sub_637E15(this);
}

_extern __int32 _sub_637F1A(SimProxy const *const);
__int32 SimProxy::GetRU() const // 0x637F1A
{
    mangled_assert("?GetRU@SimProxy@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_637F1A(this);
    return __result;
}

_extern __int32 _sub_637FF0(SimProxy const *const);
__int32 SimProxy::GetRUInResearch() const // 0x637FF0
{
    mangled_assert("?GetRUInResearch@SimProxy@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_637FF0(this);
    return __result;
}

_extern __int32 _sub_638015(SimProxy const *const);
__int32 SimProxy::GetRUInResearchLeft() const // 0x638015
{
    mangled_assert("?GetRUInResearchLeft@SimProxy@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_638015(this);
    return __result;
}

_extern __int32 _sub_637F2A(SimProxy const *const);
__int32 SimProxy::GetRUInBuildQueue() const // 0x637F2A
{
    mangled_assert("?GetRUInBuildQueue@SimProxy@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_637F2A(this);
    return __result;
}

_extern __int32 _sub_637F9F(SimProxy const *const);
__int32 SimProxy::GetRUInBuildQueueLeft() const // 0x637F9F
{
    mangled_assert("?GetRUInBuildQueueLeft@SimProxy@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_637F9F(this);
    return __result;
}

_extern Fixed<10> const &_sub_637F22(SimProxy const *const);
Fixed<10> const &SimProxy::GetRUFixedPoint() const // 0x637F22
{
    mangled_assert("?GetRUFixedPoint@SimProxy@@QBEABV?$Fixed@$09@@XZ");
    todo("implement");
    Fixed<10> const & __result = _sub_637F22(this);
    return __result;
}

_extern bool _sub_6380E3(SimProxy const *const);
bool SimProxy::IsResearchBusy() const // 0x6380E3
{
    mangled_assert("?IsResearchBusy@SimProxy@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_6380E3(this);
    return __result;
}

_extern bool _sub_638079(SimProxy const *const, unsigned __int32);
bool SimProxy::IsResearchAvailable(unsigned __int32) const // 0x638079
{
    mangled_assert("?IsResearchAvailable@SimProxy@@QBE_NI@Z");
    todo("implement");
    bool __result = _sub_638079(this, arg);
    return __result;
}

_extern bool _sub_6380FA(SimProxy const *const, unsigned __int32);
bool SimProxy::IsResearchDone(unsigned __int32) const // 0x6380FA
{
    mangled_assert("?IsResearchDone@SimProxy@@QBE_NI@Z");
    todo("implement");
    bool __result = _sub_6380FA(this, arg);
    return __result;
}

_extern bool _sub_637EEA(SimProxy const *const, unsigned __int32);
bool SimProxy::CanResearch(unsigned __int32) const // 0x637EEA
{
    mangled_assert("?CanResearch@SimProxy@@QBE_NI@Z");
    todo("implement");
    bool __result = _sub_637EEA(this, arg);
    return __result;
}

_extern unsigned __int32 _sub_638126(SimProxy const *const, unsigned __int32);
unsigned __int32 SimProxy::NumSquadrons(unsigned __int32) const // 0x638126
{
    mangled_assert("?NumSquadrons@SimProxy@@QBEII@Z");
    todo("implement");
    unsigned __int32 __result = _sub_638126(this, arg);
    return __result;
}

_extern __int32 _sub_638149(SimProxy const *const, unsigned __int32);
__int32 SimProxy::NumSquadronsProxy(unsigned __int32) const // 0x638149
{
    mangled_assert("?NumSquadronsProxy@SimProxy@@ABEHI@Z");
    todo("implement");
    __int32 __result = _sub_638149(this, arg);
    return __result;
}

_extern unsigned __int32 _sub_638173(SimProxy const *const, unsigned __int32);
unsigned __int32 SimProxy::NumSquadronsQ(unsigned __int32) const // 0x638173
{
    mangled_assert("?NumSquadronsQ@SimProxy@@QBEII@Z");
    todo("implement");
    unsigned __int32 __result = _sub_638173(this, arg);
    return __result;
}

_extern unsigned __int32 _sub_63819F(SimProxy const *const, unsigned __int32);
unsigned __int32 SimProxy::NumSubSystems(unsigned __int32) const // 0x63819F
{
    mangled_assert("?NumSubSystems@SimProxy@@QBEII@Z");
    todo("implement");
    unsigned __int32 __result = _sub_63819F(this, arg);
    return __result;
}

_extern unsigned __int32 _sub_6381D6(SimProxy const *const, unsigned __int32);
unsigned __int32 SimProxy::NumSubSystemsQ(unsigned __int32) const // 0x6381D6
{
    mangled_assert("?NumSubSystemsQ@SimProxy@@QBEII@Z");
    todo("implement");
    unsigned __int32 __result = _sub_6381D6(this, arg);
    return __result;
}

_extern unsigned __int32 _sub_63813F(SimProxy const *const, __int32);
unsigned __int32 SimProxy::NumSquadronsFamily(__int32) const // 0x63813F
{
    mangled_assert("?NumSquadronsFamily@SimProxy@@QBEIH@Z");
    todo("implement");
    unsigned __int32 __result = _sub_63813F(this, arg);
    return __result;
}

_extern unsigned __int32 _sub_638144(SimProxy const *const, __int32);
unsigned __int32 SimProxy::NumSquadronsFamilyQ(__int32) const // 0x638144
{
    mangled_assert("?NumSquadronsFamilyQ@SimProxy@@QBEIH@Z");
    todo("implement");
    unsigned __int32 __result = _sub_638144(this, arg);
    return __result;
}

_extern void _sub_638239(SimProxy *const, Order const *, bool);
void SimProxy::OnOrder(Order const *, bool) // 0x638239
{
    mangled_assert("?OnOrder@SimProxy@@QAEXPBVOrder@@_N@Z");
    todo("implement");
    _sub_638239(this, arg, arg);
}

_extern __int32 _sub_638045(SimProxy const *const, unsigned __int32);
__int32 SimProxy::GetUCLeftForShip(unsigned __int32) const // 0x638045
{
    mangled_assert("?GetUCLeftForShip@SimProxy@@QBEHI@Z");
    todo("implement");
    __int32 __result = _sub_638045(this, arg);
    return __result;
}

_extern void _sub_638375(SimProxy *const, std::auto_ptr<Order>);
void SimProxy::SendOrder(std::auto_ptr<Order>) // 0x638375
{
    mangled_assert("?SendOrder@SimProxy@@QAEXV?$auto_ptr@VOrder@@@std@@@Z");
    todo("implement");
    _sub_638375(this, arg);
}

_extern void _sub_638367(SimProxy *const, Order const *);
void SimProxy::OrderReceived(Order const *) // 0x638367
{
    mangled_assert("?OrderReceived@SimProxy@@QAEXPBVOrder@@@Z");
    todo("implement");
    _sub_638367(this, arg);
}

_extern void _sub_638236(SimProxy *const, GameEventSys::Event const &);
void SimProxy::OnEvent(GameEventSys::Event const &) // 0x638236
{
    mangled_assert("?OnEvent@SimProxy@@UAEXABVEvent@GameEventSys@@@Z");
    todo("implement");
    _sub_638236(this, arg);
}

/* ---------- private code */
#endif
