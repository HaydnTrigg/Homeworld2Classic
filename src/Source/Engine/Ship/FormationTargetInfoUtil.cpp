#if 0
/* ---------- headers */

#include "decomp.h"
#include <Collision\Primitives\sphere.h>
#include <ship.h>
#include <SobWithMesh.h>
#include <xstring>
#include <SobRigidBody.h>
#include <xmemory0>
#include <SobRigidBodyStatic.h>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <MeshAnimation.h>
#include <ShieldTypes.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Mathlib\matrix3.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <Subsystems\HardPointManager.h>
#include <Subsystems\HardPoint.h>
#include <Subsystems\HardPointStatic.h>
#include <new>
#include <Subsystems\SubSystemType.h>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <Interpolation.h>
#include <ParadeCommand.h>
#include <xutility>
#include <Collision\Primitives\aabb.h>
#include <commandtype.h>
#include <utility>
#include <Collision\Primitives\obb.h>
#include <iosfwd>
#include <vector>
#include <Squadron.h>
#include <xmemory>
#include <command.h>
#include <abilities.h>
#include <math.h>
#include <OrderFeedback.h>
#include <list>
#include <SquadronList.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <boost\scoped_ptr.hpp>
#include <SelTarg.h>
#include <prim.h>
#include <Mathlib\vector2.h>
#include <Collision\Primitives\capsule.h>
#include <Ship\FormationController.h>
#include <Collision\Primitives\segment.h>
#include <Ship\AdvRigidBodyController.h>
#include <boost\cstdint.hpp>
#include <Collision\BVH\profiling.h>
#include <Physics\RigidBodyController.h>
#include <Modifiers\ModifierTargetCache.h>
#include <seInterface2\PatchID.h>
#include <Mathlib\quat.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <debug\db.h>
#include <deque>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <Parade.h>
#include <hash_map>
#include <xhash>
#include <weaponinfo.h>
#include <playerresourcetype.h>
#include <Ship\FormationTargetInfoUtil.h>
#include <Ship\FormationTargetInfo.h>
#include <wchar.h>
#include <DynamicPoint.h>
#include <TeamColourRegistry.h>
#include <sobid.h>
#include <savegame.h>
#include <task.h>
#include <queue>
#include <stack>
#include <sob.h>
#include <SobWithMeshStatic.h>
#include <SoundManager\SoundEntityHandle.h>
#include <sobstatic.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_4B6E92(IntersectTarget *const, Sob *, Sob *);
IntersectTarget::IntersectTarget(Sob *, Sob *) // 0x4B6E92
{
    mangled_assert("??0IntersectTarget@@QAE@PAVSob@@0@Z");
    todo("implement");
    _sub_4B6E92(this, arg, arg);
}

_extern void _sub_4B6F20(FlyAtSpaceObject *const);
_inline FlyAtSpaceObject::~FlyAtSpaceObject() // 0x4B6F20
{
    mangled_assert("??1FlyAtSpaceObject@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4B6F20(this);
}

_extern void _sub_4B6F25(FlyToPoint *const);
_inline FlyToPoint::~FlyToPoint() // 0x4B6F25
{
    mangled_assert("??1FlyToPoint@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4B6F25(this);
}

_extern void _sub_4B6F2A(FlyToSpaceObject *const);
_inline FlyToSpaceObject::~FlyToSpaceObject() // 0x4B6F2A
{
    mangled_assert("??1FlyToSpaceObject@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4B6F2A(this);
}

_extern void _sub_4B6F2F(FlyToSquadron *const);
_inline FlyToSquadron::~FlyToSquadron() // 0x4B6F2F
{
    mangled_assert("??1FlyToSquadron@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4B6F2F(this);
}

_extern void _sub_4B6F34(IntersectTarget *const);
_inline IntersectTarget::~IntersectTarget() // 0x4B6F34
{
    mangled_assert("??1IntersectTarget@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4B6F34(this);
}

_extern _sub_4B6A0F(FlyToSpaceObject *const, Sob *);
FlyToSpaceObject::FlyToSpaceObject(Sob *) // 0x4B6A0F
{
    mangled_assert("??0FlyToSpaceObject@@QAE@PAVSob@@@Z");
    todo("implement");
    _sub_4B6A0F(this, arg);
}

_extern _sub_4B6BAC(FlyToSpaceObject *const, Sob *, vector3 const &);
FlyToSpaceObject::FlyToSpaceObject(Sob *, vector3 const &) // 0x4B6BAC
{
    mangled_assert("??0FlyToSpaceObject@@QAE@PAVSob@@ABVvector3@@@Z");
    todo("implement");
    _sub_4B6BAC(this, arg, arg);
}

_extern _sub_4B6ABE(FlyToSpaceObject *const, Sob *, vector3 const &, vector3 const &, vector3 const &);
FlyToSpaceObject::FlyToSpaceObject(Sob *, vector3 const &, vector3 const &, vector3 const &) // 0x4B6ABE
{
    mangled_assert("??0FlyToSpaceObject@@QAE@PAVSob@@ABVvector3@@11@Z");
    todo("implement");
    _sub_4B6ABE(this, arg, arg, arg, arg);
}

_extern _sub_4B6C75(FlyToSquadron *const, Squadron *);
FlyToSquadron::FlyToSquadron(Squadron *) // 0x4B6C75
{
    mangled_assert("??0FlyToSquadron@@QAE@PAVSquadron@@@Z");
    todo("implement");
    _sub_4B6C75(this, arg);
}

_extern _sub_4B6D72(FlyToSquadron *const, Squadron *, vector3 const &);
FlyToSquadron::FlyToSquadron(Squadron *, vector3 const &) // 0x4B6D72
{
    mangled_assert("??0FlyToSquadron@@QAE@PAVSquadron@@ABVvector3@@@Z");
    todo("implement");
    _sub_4B6D72(this, arg, arg);
}

_extern _sub_4B6687(FlyAtSpaceObject *const, Sob *);
FlyAtSpaceObject::FlyAtSpaceObject(Sob *) // 0x4B6687
{
    mangled_assert("??0FlyAtSpaceObject@@QAE@PAVSob@@@Z");
    todo("implement");
    _sub_4B6687(this, arg);
}

_extern _sub_4B673A(FlyAtSpaceObject *const, Sob *, vector3 const &);
FlyAtSpaceObject::FlyAtSpaceObject(Sob *, vector3 const &) // 0x4B673A
{
    mangled_assert("??0FlyAtSpaceObject@@QAE@PAVSob@@ABVvector3@@@Z");
    todo("implement");
    _sub_4B673A(this, arg, arg);
}

_extern _sub_4B699F(FlyToPoint *const, vector3 const &);
FlyToPoint::FlyToPoint(vector3 const &) // 0x4B699F
{
    mangled_assert("??0FlyToPoint@@QAE@ABVvector3@@@Z");
    todo("implement");
    _sub_4B699F(this, arg);
}

_extern _sub_4B6800(FlyToPoint *const, vector3 const &, vector3 const &);
FlyToPoint::FlyToPoint(vector3 const &, vector3 const &) // 0x4B6800
{
    mangled_assert("??0FlyToPoint@@QAE@ABVvector3@@0@Z");
    todo("implement");
    _sub_4B6800(this, arg, arg);
}

/* ---------- private code */
#endif
