#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <sob.h>
#include <sobstatic.h>
#include <xstring>
#include <Collision\Primitives\sphere.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <Universe.h>
#include <platform\timer.h>
#include <Waypoint.h>
#include <platform\platformexports.h>
#include <SobUnmoveable.h>
#include <Mathlib\matrix3.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <new>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <weaponinfo.h>
#include <xutility>
#include <Interpolation.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <Modifiers\ModifierTargetCache.h>
#include <xmemory>
#include <OrderFeedback.h>
#include <Collision\Primitives\aabb.h>
#include <Collision\Primitives\obb.h>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <task.h>
#include <ship.h>
#include <stack>
#include <math.h>
#include <SobWithMesh.h>
#include <SobWithMeshStatic.h>
#include <list>
#include <SobRigidBody.h>
#include <SobRigidBodyStatic.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <MeshAnimation.h>
#include <xtree>
#include <ShieldTypes.h>
#include <boost\scoped_ptr.hpp>
#include <SelTarg.h>
#include <prim.h>
#include <Mathlib\vector2.h>
#include <Subsystems\HardPointManager.h>
#include <util\types.h>
#include <Subsystems\HardPoint.h>
#include <Subsystems\HardPointStatic.h>
#include <Subsystems\SubSystemType.h>
#include <boost\cstdint.hpp>
#include <Collision\Primitives\capsule.h>
#include <Parade.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <Mathlib\quat.h>
#include <playerresourcetype.h>
#include <seInterface2\PatchID.h>
#include <dbdefines.h>
#include <seInterface2\PatchBase.h>
#include <UnitCaps\UnitCaps.h>
#include <seInterface2\SoundParams.h>
#include <SOBGroupManager.h>
#include <hash_map>
#include <xhash>
#include <SoundManager\SoundEntityHandle.h>
#include <savegameimpl.h>
#include <pathpoints.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <debug\db.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <deque>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <ParadeCommand.h>
#include <commandtype.h>
#include <Squadron.h>
#include <DynamicPoint.h>
#include <command.h>
#include <sobid.h>
#include <wchar.h>
#include <HyperspaceManager.h>
#include <SquadronList.h>
#include <queue>
#include <abilities.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const DynamicPoint::m_saveToken[13]; // 0x7A91C0
extern SaveData const DynamicPoint::m_saveData[10]; // 0x7A91D0

/* ---------- private variables */

/* ---------- public code */

_extern _sub_5EBAA1(DynamicPoint *const);
DynamicPoint::DynamicPoint() // 0x5EBAA1
{
    mangled_assert("??0DynamicPoint@@QAE@XZ");
    todo("implement");
    _sub_5EBAA1(this);
}

_extern _sub_5EBA4B(DynamicPoint *const, DynamicPoint const &);
DynamicPoint::DynamicPoint(DynamicPoint const &) // 0x5EBA4B
{
    mangled_assert("??0DynamicPoint@@QAE@ABV0@@Z");
    todo("implement");
    _sub_5EBA4B(this, arg);
}

_extern void _sub_5EBB4F(DynamicPoint *const);
DynamicPoint::~DynamicPoint() // 0x5EBB4F
{
    mangled_assert("??1DynamicPoint@@UAE@XZ");
    todo("implement");
    _sub_5EBB4F(this);
}

_extern void _sub_5EBD66(DynamicPoint *const, vector3 const &);
void DynamicPoint::UseVector(vector3 const &) // 0x5EBD66
{
    mangled_assert("?UseVector@DynamicPoint@@QAEXABVvector3@@@Z");
    todo("implement");
    _sub_5EBD66(this, arg);
}

_extern void _sub_5EBC3A(DynamicPoint *const, DynamicPoint const &);
void DynamicPoint::UseDynamicPosition(DynamicPoint const &) // 0x5EBC3A
{
    mangled_assert("?UseDynamicPosition@DynamicPoint@@QAEXABV1@@Z");
    todo("implement");
    _sub_5EBC3A(this, arg);
}

_extern void _sub_5EBCC4(DynamicPoint *const, Sob const *);
void DynamicPoint::UseSpaceObject(Sob const *) // 0x5EBCC4
{
    mangled_assert("?UseSpaceObject@DynamicPoint@@QAEXPBVSob@@@Z");
    todo("implement");
    _sub_5EBCC4(this, arg);
}

_extern void _sub_5EBC5F(DynamicPoint *const, Sob const *, Sob const *);
void DynamicPoint::UseInterceptPoint(Sob const *, Sob const *) // 0x5EBC5F
{
    mangled_assert("?UseInterceptPoint@DynamicPoint@@QAEXPBVSob@@0@Z");
    todo("implement");
    _sub_5EBC5F(this, arg, arg);
}

_extern void _sub_5EBD14(DynamicPoint *const, Squadron const *);
void DynamicPoint::UseSquadron(Squadron const *) // 0x5EBD14
{
    mangled_assert("?UseSquadron@DynamicPoint@@QAEXPBVSquadron@@@Z");
    todo("implement");
    _sub_5EBD14(this, arg);
}

_extern DynamicPoint &_sub_5EBB9C(DynamicPoint *const, DynamicPoint const &);
DynamicPoint &DynamicPoint::operator=(DynamicPoint const &) // 0x5EBB9C
{
    mangled_assert("??4DynamicPoint@@QAEAAV0@ABV0@@Z");
    todo("implement");
    DynamicPoint & __result = _sub_5EBB9C(this, arg);
    return __result;
}

_extern vector3 const &_sub_5EC050(DynamicPoint const *const);
vector3 const &DynamicPoint::getPosition() const // 0x5EC050
{
    mangled_assert("?getPosition@DynamicPoint@@QBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_5EC050(this);
    return __result;
}

_extern Squadron const *_sub_5EC408(DynamicPoint const *const);
Squadron const *DynamicPoint::getSquadron() const // 0x5EC408
{
    mangled_assert("?getSquadron@DynamicPoint@@QBEPBVSquadron@@XZ");
    todo("implement");
    Squadron const * __result = _sub_5EC408(this);
    return __result;
}

_extern matrix3 const &_sub_5EBDAB(DynamicPoint const *const);
matrix3 const &DynamicPoint::getMatrix() const // 0x5EBDAB
{
    mangled_assert("?getMatrix@DynamicPoint@@QBEABVmatrix3@@XZ");
    todo("implement");
    matrix3 const & __result = _sub_5EBDAB(this);
    return __result;
}

_extern vector3 const &_sub_5EC417(DynamicPoint const *const);
vector3 const &DynamicPoint::getVelocity() const // 0x5EC417
{
    mangled_assert("?getVelocity@DynamicPoint@@QBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_5EC417(this);
    return __result;
}

_extern void _sub_5EC4EE(DynamicPoint *const);
void DynamicPoint::postRestore() // 0x5EC4EE
{
    mangled_assert("?postRestore@DynamicPoint@@UAEXXZ");
    todo("implement");
    _sub_5EC4EE(this);
}

_extern bool _sub_5EC4EF(DynamicPoint *const, SaveGameData *);
bool DynamicPoint::restore(SaveGameData *) // 0x5EC4EF
{
    mangled_assert("?restore@DynamicPoint@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_5EC4EF(this, arg);
    return __result;
}

_extern bool _sub_5EC52D(DynamicPoint *const, SaveGameData *, SaveType);
bool DynamicPoint::save(SaveGameData *, SaveType) // 0x5EC52D
{
    mangled_assert("?save@DynamicPoint@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_5EC52D(this, arg, arg);
    return __result;
}

/* ---------- private code */
#endif
