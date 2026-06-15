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
#include <Network\PlaybackNetwork.h>
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

typedef std::vector<Order *,std::allocator<Order *> > OrderContainer;

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

PlaybackNetwork::PlaybackNetwork() // 0x5BFB84
{
    mangled_assert("??0PlaybackNetwork@@QAE@XZ");
    todo("implement");
}

PlaybackNetwork::~PlaybackNetwork() // 0x5BFBD2
{
    mangled_assert("??1PlaybackNetwork@@UAE@XZ");
    todo("implement");
}

bool PlaybackNetwork::Execute() // 0x5BFC24
{
    mangled_assert("?Execute@PlaybackNetwork@@UAE_NXZ");
    todo("implement");
}

__int32 PlaybackNetwork::GetSimLoopCount() // 0x5BFCA2
{
    mangled_assert("?GetSimLoopCount@PlaybackNetwork@@UAEHXZ");
    todo("implement");
}

FrameOrders const *PlaybackNetwork::PeekNextFrameOrders() const // 0x5BFCA6
{
    mangled_assert("?PeekNextFrameOrders@PlaybackNetwork@@UBEPBVFrameOrders@@XZ");
    todo("implement");
}

void PlaybackNetwork::SendOrder(std::auto_ptr<Order>) // 0x5BFCAA
{
    mangled_assert("?SendOrder@PlaybackNetwork@@UAEXV?$auto_ptr@VOrder@@@std@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
