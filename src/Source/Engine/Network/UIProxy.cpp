#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <Sob\Resource\Resource.h>
#include <Sob\Resource\ResourceStatic.h>
#include <Mathlib\matrix3.h>
#include <Universe.h>
#include <Waypoint.h>
#include <SobUnmoveable.h>
#include <SelTarg.h>
#include <new>
#include <prim.h>
#include <exception>
#include <DockCommand.h>
#include <xstddef>
#include <type_traits>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <Modifiers\ModifierTargetCache.h>
#include <vector>
#include <xmemory>
#include <HyperspaceManager.h>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <list>
#include <gamemsg.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <xtree>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <boost\scoped_ptr.hpp>
#include <DynamicPoint.h>
#include <sobid.h>
#include <Mathlib\vector2.h>
#include <dbdefines.h>
#include <util\types.h>
#include <UnitCaps\UnitCaps.h>
#include <boost\cstdint.hpp>
#include <AttackCommand.h>
#include <AttackStyle.h>
#include <weaponinfo.h>
#include <weaponTargetInfo.h>
#include <Mathlib\quat.h>
#include <playerresourcetype.h>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <task.h>
#include <stack>
#include <SobWithMeshStatic.h>
#include <SoundManager\SoundEntityHandle.h>
#include <Squadron.h>
#include <ship.h>
#include <command.h>
#include <SobWithMesh.h>
#include <orders.h>
#include <SobRigidBody.h>
#include <orders_base.h>
#include <sob.h>
#include <commandtype.h>
#include <sobstatic.h>
#include <SobRigidBodyStatic.h>
#include <Collision\Primitives\sphere.h>
#include <pathpoints.h>
#include <debug\db.h>
#include <SOBGroupManager.h>
#include <MeshAnimation.h>
#include <ShieldTypes.h>
#include <deque>
#include <GuardCommand.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <Collision\BVH\octree.h>
#include <TrailTargetCommand.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <Collision\BVH\span.h>
#include <Subsystems\HardPointManager.h>
#include <selection.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Subsystems\HardPoint.h>
#include <savegamedef.h>
#include <Collision\BVH\proxy.h>
#include <Subsystems\HardPointStatic.h>
#include <boost\detail\shared_count.hpp>
#include <Collision\intersect.h>
#include <Subsystems\SubSystemType.h>
#include <Collision\primitivesfwd.h>
#include <resourceCommand.h>
#include <boost\detail\lwm_win32.hpp>
#include <ParadeCommand.h>
#include <Parade.h>
#include <hash_map>
#include <platform\timer.h>
#include <Interpolation.h>
#include <xhash>
#include <platform\platformexports.h>
#include <Network\UIProxy.h>
#include <OrderFeedback.h>
#include <wchar.h>
#include <Collision\Primitives\aabb.h>
#include <SquadronList.h>
#include <Collision\Primitives\obb.h>
#include <RepairByLatchingCommand.h>
#include <queue>
#include <abilities.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_5C09E5(OrderFeedbackInfo *const, OrderFeedbackInfo const &);
_inline OrderFeedbackInfo::OrderFeedbackInfo(OrderFeedbackInfo const &) // 0x5C09E5
{
    mangled_assert("??0OrderFeedbackInfo@@QAE@ABU0@@Z");
    compiler_generated();
    todo("implement");
    _sub_5C09E5(this, arg);
}

_extern _sub_5C0A08(UIProxy *const);
UIProxy::UIProxy() // 0x5C0A08
{
    mangled_assert("??0UIProxy@@QAE@XZ");
    todo("implement");
    _sub_5C0A08(this);
}

_extern void _sub_5C0A10(UIProxy *const);
UIProxy::~UIProxy() // 0x5C0A10
{
    mangled_assert("??1UIProxy@@QAE@XZ");
    todo("implement");
    _sub_5C0A10(this);
}

_extern void _sub_5C0ABB(UIProxy *const, Order const *);
void UIProxy::OnOrderSend(Order const *) // 0x5C0ABB
{
    mangled_assert("?OnOrderSend@UIProxy@@QAEXPBVOrder@@@Z");
    todo("implement");
    _sub_5C0ABB(this, arg);
}

_extern void _sub_5C0A59(UIProxy *const, Order const *);
void UIProxy::OnOrderReceived(Order const *) // 0x5C0A59
{
    mangled_assert("?OnOrderReceived@UIProxy@@QAEXPBVOrder@@@Z");
    todo("implement");
    _sub_5C0A59(this, arg);
}

_extern void _sub_5C0B7A(UIProxy *const, MoveOrder const *);
void UIProxy::OnSendMoveOrder(MoveOrder const *) // 0x5C0B7A
{
    mangled_assert("?OnSendMoveOrder@UIProxy@@AAEXPBVMoveOrder@@@Z");
    todo("implement");
    _sub_5C0B7A(this, arg);
}

_extern void _sub_5C0B1D(UIProxy *const, MoveOrder const *);
void UIProxy::OnReceivedMoveOrder(MoveOrder const *) // 0x5C0B1D
{
    mangled_assert("?OnReceivedMoveOrder@UIProxy@@AAEXPBVMoveOrder@@@Z");
    todo("implement");
    _sub_5C0B1D(this, arg);
}

_extern void _sub_5C0E51(UIProxy *const, SquadronList2SobBase const *);
void UIProxy::OnSendSquadronList2SobOrder(SquadronList2SobBase const *) // 0x5C0E51
{
    mangled_assert("?OnSendSquadronList2SobOrder@UIProxy@@AAEXPBVSquadronList2SobBase@@@Z");
    todo("implement");
    _sub_5C0E51(this, arg);
}

_extern void _sub_5C0B5B(UIProxy *const, SquadronList2SobBase const *);
void UIProxy::OnReceivedSquadronList2SobOrder(SquadronList2SobBase const *) // 0x5C0B5B
{
    mangled_assert("?OnReceivedSquadronList2SobOrder@UIProxy@@AAEXPBVSquadronList2SobBase@@@Z");
    todo("implement");
    _sub_5C0B5B(this, arg);
}

_extern void _sub_5C0C1A(UIProxy *const, SquadronList2SelectionBase const *);
void UIProxy::OnSendSquadronList2SelectionOrder(SquadronList2SelectionBase const *) // 0x5C0C1A
{
    mangled_assert("?OnSendSquadronList2SelectionOrder@UIProxy@@AAEXPBVSquadronList2SelectionBase@@@Z");
    todo("implement");
    _sub_5C0C1A(this, arg);
}

_extern void _sub_5C0B3C(UIProxy *const, SquadronList2SelectionBase const *);
void UIProxy::OnReceivedSquadronList2SelectionOrder(SquadronList2SelectionBase const *) // 0x5C0B3C
{
    mangled_assert("?OnReceivedSquadronList2SelectionOrder@UIProxy@@AAEXPBVSquadronList2SelectionBase@@@Z");
    todo("implement");
    _sub_5C0B3C(this, arg);
}

/* ---------- private code */
#endif
