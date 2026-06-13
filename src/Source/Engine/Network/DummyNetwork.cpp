#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <HyperspaceManager.h>
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <Mathlib\matrix3.h>
#include <orders.h>
#include <orders_base.h>
#include <sobid.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <FrameOrders.h>
#include <dbdefines.h>
#include <xutility>
#include <UnitCaps\UnitCaps.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <LevelDesc.h>
#include <fileio\fileioexports.h>
#include <Hash.h>
#include <fileio\md5.h>
#include <gamestructimpl.h>
#include <commandtype.h>
#include <Badge.h>
#include <list>
#include <Universe.h>
#include <Waypoint.h>
#include <SobUnmoveable.h>
#include <sob.h>
#include <sobstatic.h>
#include <Mathlib\vector3.h>
#include <Collision\Primitives\sphere.h>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <boost\static_assert.hpp>
#include <Mathlib\vector2.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <util\types.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <gamemsg.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <boost\cstdint.hpp>
#include <boost\config.hpp>
#include <Interpolation.h>
#include <Mathlib\quat.h>
#include <Collision\Primitives\aabb.h>
#include <Collision\Primitives\obb.h>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <pathpoints.h>
#include <debug\db.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <gameSettings.h>
#include <SelTarg.h>
#include <boost\throw_exception.hpp>
#include <config.h>
#include <selection.h>
#include <prim.h>
#include <savegamedef.h>
#include <syncChecking.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <Network\DummyNetwork.h>
#include <Network\inetwork.h>
#include <wchar.h>
#include <SquadronList.h>
#include <recorder.h>
#include <seInterface2\PatchID.h>
#include <SOBGroupManager.h>
#include <seInterface2\PatchBase.h>
#include <hash_map>
#include <seInterface2\SoundParams.h>
#include <xhash>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_5BC423(DummyNetwork *const);
DummyNetwork::DummyNetwork() // 0x5BC423
{
    mangled_assert("??0DummyNetwork@@QAE@XZ");
    todo("implement");
    _sub_5BC423(this);
}

_extern void _sub_5BC471(DummyNetwork *const);
DummyNetwork::~DummyNetwork() // 0x5BC471
{
    mangled_assert("??1DummyNetwork@@UAE@XZ");
    todo("implement");
    _sub_5BC471(this);
}

_extern bool _sub_5BC4C3(DummyNetwork *const);
bool DummyNetwork::Execute() // 0x5BC4C3
{
    mangled_assert("?Execute@DummyNetwork@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_5BC4C3(this);
    return __result;
}

_extern __int32 _sub_5BC51B(DummyNetwork *const);
__int32 DummyNetwork::GetSimLoopCount() // 0x5BC51B
{
    mangled_assert("?GetSimLoopCount@DummyNetwork@@UAEHXZ");
    todo("implement");
    __int32 __result = _sub_5BC51B(this);
    return __result;
}

_extern FrameOrders const *_sub_5BC51F(DummyNetwork const *const);
FrameOrders const *DummyNetwork::PeekNextFrameOrders() const // 0x5BC51F
{
    mangled_assert("?PeekNextFrameOrders@DummyNetwork@@UBEPBVFrameOrders@@XZ");
    todo("implement");
    FrameOrders const * __result = _sub_5BC51F(this);
    return __result;
}

_extern void _sub_5BC523(DummyNetwork *const, std::auto_ptr<Order>);
void DummyNetwork::SendOrder(std::auto_ptr<Order>) // 0x5BC523
{
    mangled_assert("?SendOrder@DummyNetwork@@UAEXV?$auto_ptr@VOrder@@@std@@@Z");
    todo("implement");
    _sub_5BC523(this, arg);
}

/* ---------- private code */
#endif
