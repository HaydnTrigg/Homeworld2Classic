#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <ParadeCommand.h>
#include <dbdefines.h>
#include <commandtype.h>
#include <xstring>
#include <UnitCaps\UnitCaps.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <Squadron.h>
#include <pch.h>
#include <command.h>
#include <SOBGroupManager.h>
#include <hash_map>
#include <xhash>
#include <Mathlib\matrix3.h>
#include <abilities.h>
#include <Missile.h>
#include <MissileStatic.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <new>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <Modifiers\ModifierTargetCache.h>
#include <xutility>
#include <profile\profile.h>
#include <utility>
#include <iosfwd>
#include <iostream>
#include <vector>
#include <xmemory>
#include <Universe.h>
#include <Waypoint.h>
#include <SobUnmoveable.h>
#include <sob.h>
#include <OrderFeedback.h>
#include <sobstatic.h>
#include <CloakManager.h>
#include <Collision\Primitives\sphere.h>
#include <list>
#include <HyperspaceManager.h>
#include <SquadronList.h>
#include <Sob\Resource\Resource.h>
#include <Mathlib\vector3.h>
#include <Sob\Resource\ResourceStatic.h>
#include <Mathlib\vector4.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <weaponinfo.h>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <weaponTargetInfo.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <boost\cstdint.hpp>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <Collision\Primitives\obb.h>
#include <task.h>
#include <Collision\BVH\octree.h>
#include <stack>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <SobWithMeshStatic.h>
#include <Collision\BVH\proxy.h>
#include <playerresourcetype.h>
#include <Collision\intersect.h>
#include <ship.h>
#include <Race.h>
#include <Collision\primitivesfwd.h>
#include <SobWithMesh.h>
#include <Mathlib\quat.h>
#include <SobRigidBody.h>
#include <DynamicPoint.h>
#include <SobRigidBodyStatic.h>
#include <MeshAnimation.h>
#include <SoundManager\SoundEntityHandle.h>
#include <ShieldTypes.h>
#include <Parade.h>
#include <Interpolation.h>
#include <BuildManager.h>
#include <Collision\Primitives\aabb.h>
#include <SensorPingManager.h>
#include <Subsystems\HardPointManager.h>
#include <Subsystems\HardPoint.h>
#include <Subsystems\HardPointStatic.h>
#include <Subsystems\SubSystemType.h>
#include <sobid.h>
#include <pathpoints.h>
#include <Ship\FormationTargetInfo.h>
#include <debug\db.h>
#include <Selector.h>
#include <MetaSelTarg.h>
#include <deque>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <Player.h>
#include <seInterface2\SoundParams.h>
#include <ResearchManager.h>
#include <FogOfWar.h>
#include <wchar.h>
#include <Collision\Primitives\capsule.h>
#include <alliance.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <Ship\Formation.h>
#include <queue>
#include <fixedpoint.h>
#include <Ship\FormationPattern.h>
#include <util\fixed.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern bool FogOfWar::m_forceUpdate; // 0x848760

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_5EE906(std::_List_buy<Sob *,std::allocator<Sob *> > *const);
_inline std::_List_buy<Sob *,std::allocator<Sob *> >::~_List_buy<Sob *,std::allocator<Sob *> >() // 0x5EE906
{
    mangled_assert("??1?$_List_buy@PAVSob@@V?$allocator@PAVSob@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5EE906(this);
}

_extern void _sub_5EEA08(bool);
void FogOfWar::calculateFog(bool pause) // 0x5EEA08
{
    mangled_assert("?calculateFog@FogOfWar@@SGX_N@Z");
    todo("implement");
    _sub_5EEA08(pause);
}

_extern void _sub_5EEAAA(__int32);
void FogOfWar::calculateFogForPlayer(__int32 playerIndex) // 0x5EEAAA
{
    mangled_assert("?calculateFogForPlayer@FogOfWar@@CGXH@Z");
    todo("implement");
    _sub_5EEAAA(playerIndex);
}

_extern void _sub_5EE9B1(__int32);
void FogOfWar::calculateCloakingForPlayer(__int32 playerIndex) // 0x5EE9B1
{
    mangled_assert("?calculateCloakingForPlayer@FogOfWar@@CGXH@Z");
    todo("implement");
    _sub_5EE9B1(playerIndex);
}

_extern void _sub_5EED6A(__int32);
void FogOfWar::clearVisibilityForPlayer(__int32 playerIndex) // 0x5EED6A
{
    mangled_assert("?clearVisibilityForPlayer@FogOfWar@@CGXH@Z");
    todo("implement");
    _sub_5EED6A(playerIndex);
}

_extern void _sub_5EEDA0(__int32);
void FogOfWar::doAutoSpottingForPlayer(__int32 playerIndex) // 0x5EEDA0
{
    mangled_assert("?doAutoSpottingForPlayer@FogOfWar@@CGXH@Z");
    todo("implement");
    _sub_5EEDA0(playerIndex);
}

_extern void _sub_5EEEC1(__int32, Ship *, std::list<Sob *,std::allocator<Sob *> > &);
void FogOfWar::doShipVisibility(__int32 playerIndex, Ship *ship, std::list<Sob *,std::allocator<Sob *> > &sobList) // 0x5EEEC1
{
    mangled_assert("?doShipVisibility@FogOfWar@@CGXHPAVShip@@AAV?$list@PAVSob@@V?$allocator@PAVSob@@@std@@@std@@@Z");
    todo("implement");
    _sub_5EEEC1(playerIndex, ship, sobList);
}

_extern void _sub_5EF000(__int32);
void FogOfWar::doSpottingForPlayer(__int32 playerIndex) // 0x5EF000
{
    mangled_assert("?doSpottingForPlayer@FogOfWar@@CGXH@Z");
    todo("implement");
    _sub_5EF000(playerIndex);
}

_extern bool _sub_5EEC57(__int32, Ship *, Sob *);
bool FogOfWar::checkVisualRange(__int32 playerIndex, Ship *detector, Sob *detectee) // 0x5EEC57
{
    mangled_assert("?checkVisualRange@FogOfWar@@CG_NHPAVShip@@PAVSob@@@Z");
    todo("implement");
    bool __result = _sub_5EEC57(playerIndex, detector, detectee);
    return __result;
}

_extern void _sub_5EEACA(__int32, Ship *, Sob *);
void FogOfWar::checkSensorsRange(__int32 playerIndex, Ship *detector, Sob *detectee) // 0x5EEACA
{
    mangled_assert("?checkSensorsRange@FogOfWar@@CGXHPAVShip@@PAVSob@@@Z");
    todo("implement");
    _sub_5EEACA(playerIndex, detector, detectee);
}

/* ---------- private code */
#endif
