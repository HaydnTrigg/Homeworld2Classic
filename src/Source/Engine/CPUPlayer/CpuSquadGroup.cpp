#if 0
/* ---------- headers */

#include "decomp.h"
#include <SobRigidBody.h>
#include <sob.h>
#include <assist\stlexsmallvector.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <xstring>
#include <SobRigidBodyStatic.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <MeshAnimation.h>
#include <ShieldTypes.h>
#include <Mathlib\matrix3.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Subsystems\HardPointManager.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Subsystems\HardPoint.h>
#include <Collision\BVH\proxy.h>
#include <Subsystems\HardPointStatic.h>
#include <Collision\intersect.h>
#include <Subsystems\SubSystemType.h>
#include <new>
#include <Collision\primitivesfwd.h>
#include <SOBGroupManager.h>
#include <exception>
#include <xstddef>
#include <orders.h>
#include <type_traits>
#include <orders_base.h>
#include <ParadeCommand.h>
#include <SquadronList.h>
#include <Interpolation.h>
#include <Parade.h>
#include <xutility>
#include <hash_map>
#include <gamemsg.h>
#include <utility>
#include <iosfwd>
#include <xhash>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <Collision\Primitives\aabb.h>
#include <fileio\fileioexports.h>
#include <Collision\Primitives\obb.h>
#include <abilities.h>
#include <platform\timer.h>
#include <fileio\logfile.h>
#include <platform\platformexports.h>
#include <list>
#include <ShipQuery.h>
#include <assist\fixedstring.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <SelTarg.h>
#include <prim.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <boost\cstdint.hpp>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <Universe.h>
#include <Waypoint.h>
#include <Modifiers\ModifierTargetCache.h>
#include <SobUnmoveable.h>
#include <CPUPlayer\CpuDefendState.h>
#include <Mathlib\quat.h>
#include <CPUPlayer\CpuIdleState.h>
#include <seInterface2\PatchID.h>
#include <OrderFeedback.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <HyperspaceManager.h>
#include <commandtype.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <pathpoints.h>
#include <MultiplierTypes.h>
#include <debug\db.h>
#include <Collision\BVH\bvh.h>
#include <deque>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <CPUPlayer\CpuCommon.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <CPUPlayer\CpuTarget.h>
#include <selection.h>
#include <savegamedef.h>
#include <Squadron.h>
#include <command.h>
#include <boost\detail\shared_count.hpp>
#include <sobid.h>
#include <boost\detail\lwm_win32.hpp>
#include <weaponinfo.h>
#include <dbdefines.h>
#include <UnitCaps\UnitCaps.h>
#include <CPUPlayer\CpuAttackState.h>
#include <CPUPlayer\CpuOneShotState.h>
#include <playerresourcetype.h>
#include <DynamicPoint.h>
#include <CPUPlayer\CpuSquadGroup.h>
#include <CPUPlayer\CpuScoutState.h>
#include <wchar.h>
#include <TeamColourRegistry.h>
#include <CPUPlayer\cpustate.h>
#include <savegame.h>
#include <savestream.h>
#include <task.h>
#include <stack>
#include <queue>
#include <SobWithMeshStatic.h>
#include <SoundManager\SoundEntityHandle.h>
#include <ship.h>
#include <SobWithMesh.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern bool _sub_540097(CpuSquadGroup const *const);
bool CpuSquadGroup::AreAllAwake() const // 0x540097
{
    mangled_assert("?AreAllAwake@CpuSquadGroup@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_540097(this);
    return __result;
}

_extern _sub_53FEAC(CpuSquadGroup *const, CpuCommon &, CpuSquadGroup::GroupType);
CpuSquadGroup::CpuSquadGroup(CpuCommon &, CpuSquadGroup::GroupType) // 0x53FEAC
{
    mangled_assert("??0CpuSquadGroup@@QAE@AAVCpuCommon@@W4GroupType@0@@Z");
    todo("implement");
    _sub_53FEAC(this, arg, arg);
}

_extern void _sub_54000D(CpuSquadGroup *const);
CpuSquadGroup::~CpuSquadGroup() // 0x54000D
{
    mangled_assert("??1CpuSquadGroup@@QAE@XZ");
    todo("implement");
    _sub_54000D(this);
}

_extern void _sub_540207(CpuSquadGroup *const, Squadron *);
void CpuSquadGroup::push_back(Squadron *) // 0x540207
{
    mangled_assert("?push_back@CpuSquadGroup@@QAEXPAVSquadron@@@Z");
    todo("implement");
    _sub_540207(this, arg);
}

_extern void _sub_5401E0(CpuSquadGroup *const, CpuSquadGroup &);
void CpuSquadGroup::merge(CpuSquadGroup &) // 0x5401E0
{
    mangled_assert("?merge@CpuSquadGroup@@QAEXAAV1@@Z");
    todo("implement");
    _sub_5401E0(this, arg);
}

_extern void _sub_540268(CpuSquadGroup *const, Squadron const *);
void CpuSquadGroup::remove(Squadron const *) // 0x540268
{
    mangled_assert("?remove@CpuSquadGroup@@QAEXPBVSquadron@@@Z");
    todo("implement");
    _sub_540268(this, arg);
}

_extern bool _sub_540177(CpuSquadGroup const *const);
bool CpuSquadGroup::alive() const // 0x540177
{
    mangled_assert("?alive@CpuSquadGroup@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_540177(this);
    return __result;
}

_extern Squadron *_sub_5401B0(CpuSquadGroup *const);
Squadron *CpuSquadGroup::getLeadSquadron() // 0x5401B0
{
    mangled_assert("?getLeadSquadron@CpuSquadGroup@@QAEPAVSquadron@@XZ");
    todo("implement");
    Squadron * __result = _sub_5401B0(this);
    return __result;
}

_extern Squadron const *_sub_5401BE(CpuSquadGroup const *const);
Squadron const *CpuSquadGroup::getLeadSquadron() const // 0x5401BE
{
    mangled_assert("?getLeadSquadron@CpuSquadGroup@@QBEPBVSquadron@@XZ");
    todo("implement");
    Squadron const * __result = _sub_5401BE(this);
    return __result;
}

_extern void _sub_5400FB(CpuSquadGroup *const, SquadState);
void CpuSquadGroup::SendOrderRequest(SquadState) // 0x5400FB
{
    mangled_assert("?SendOrderRequest@CpuSquadGroup@@QAEXW4SquadState@@@Z");
    todo("implement");
    _sub_5400FB(this, arg);
}

_extern bool _sub_54015F(CpuSquadGroup *const);
bool CpuSquadGroup::Update() // 0x54015F
{
    mangled_assert("?Update@CpuSquadGroup@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_54015F(this);
    return __result;
}

_extern bool _sub_5400C7(CpuSquadGroup *const, CommandType);
bool CpuSquadGroup::IsAnySquadronInState(CommandType) // 0x5400C7
{
    mangled_assert("?IsAnySquadronInState@CpuSquadGroup@@QAE_NW4CommandType@@@Z");
    todo("implement");
    bool __result = _sub_5400C7(this, arg);
    return __result;
}

_extern void _sub_540270(CpuSquadGroup const *const, SaveStream *);
void CpuSquadGroup::save(SaveStream *) const // 0x540270
{
    mangled_assert("?save@CpuSquadGroup@@QBEXPAVSaveStream@@@Z");
    todo("implement");
    _sub_540270(this, arg);
}

_extern _sub_53FD6F(CpuSquadGroup *const, CpuCommon &, SaveStream *);
CpuSquadGroup::CpuSquadGroup(CpuCommon &, SaveStream *) // 0x53FD6F
{
    mangled_assert("??0CpuSquadGroup@@QAE@AAVCpuCommon@@PAVSaveStream@@@Z");
    todo("implement");
    _sub_53FD6F(this, arg, arg);
}

/* ---------- private code */
#endif
