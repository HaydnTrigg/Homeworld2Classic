#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <HyperspaceManager.h>
#include <SquadronList.h>
#include <Mathlib\matrix3.h>
#include <SobPointMassStatic.h>
#include <new>
#include <Universe.h>
#include <Waypoint.h>
#include <platform\timer.h>
#include <xstddef>
#include <SobUnmoveable.h>
#include <platform\platformexports.h>
#include <type_traits>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <xutility>
#include <Collision\intersect.h>
#include <utility>
#include <iosfwd>
#include <Collision\primitivesfwd.h>
#include <vector>
#include <xmemory>
#include <Physics\PhysicsObject.h>
#include <Interpolation.h>
#include <list>
#include <Collision\Primitives\aabb.h>
#include <Mathlib\vector3.h>
#include <sobid.h>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <boost\cstdint.hpp>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <seInterface2\SoundParams.h>
#include <Mathlib\quat.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <Physics\PhysicsEngine.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <pathpoints.h>
#include <debug\db.h>
#include <dbdefines.h>
#include <UnitCaps\UnitCaps.h>
#include <SOBGroupManager.h>
#include <hash_map>
#include <xhash>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <Physics\PointMass.h>
#include <sobtypes.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <boost\throw_exception.hpp>
#include <Physics\PointMassController.h>
#include <MultiplierTypes.h>
#include <selection.h>
#include <savegamedef.h>
#include <Collision\BVH\bvh.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <SobPointMass.h>
#include <sob.h>
#include <wchar.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern SaveData const SobPointMass::m_saveData[1]; // 0x790C10
extern char const SobPointMass::m_saveToken[13]; // 0x790C30

/* ---------- private variables */

/* ---------- public code */

_extern _sub_4B3411(SobPointMass *const, SobType, SaveGameData *);
SobPointMass::SobPointMass(SobType, SaveGameData *) // 0x4B3411
{
    mangled_assert("??0SobPointMass@@IAE@W4SobType@@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_4B3411(this, arg, arg);
}

_extern void _sub_4B35E3(SobPointMass *const);
void SobPointMass::postRestore() // 0x4B35E3
{
    mangled_assert("?postRestore@SobPointMass@@MAEXXZ");
    todo("implement");
    _sub_4B35E3(this);
}

_extern bool _sub_4B3603(SobPointMass *const, SaveGameData *);
bool SobPointMass::restore(SaveGameData *) // 0x4B3603
{
    mangled_assert("?restore@SobPointMass@@MAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_4B3603(this, arg);
    return __result;
}

_extern bool _sub_4B3650(SobPointMass *const, SaveGameData *, SaveType);
bool SobPointMass::save(SaveGameData *, SaveType) // 0x4B3650
{
    mangled_assert("?save@SobPointMass@@MAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_4B3650(this, arg, arg);
    return __result;
}

_extern _sub_4B342D(SobPointMass *const, SobType, char const *, bool);
SobPointMass::SobPointMass(SobType, char const *, bool) // 0x4B342D
{
    mangled_assert("??0SobPointMass@@QAE@W4SobType@@PBD_N@Z");
    todo("implement");
    _sub_4B342D(this, arg, arg, arg);
}

_extern void _sub_4B34E1(SobPointMass *const);
SobPointMass::~SobPointMass() // 0x4B34E1
{
    mangled_assert("??1SobPointMass@@UAE@XZ");
    todo("implement");
    _sub_4B34E1(this);
}

_extern void _sub_4B3568(SobPointMass *const);
void SobPointMass::RemoveFromSimulation() // 0x4B3568
{
    mangled_assert("?RemoveFromSimulation@SobPointMass@@MAEXXZ");
    todo("implement");
    _sub_4B3568(this);
}

_extern void _sub_4B3535(SobPointMass *const);
void SobPointMass::RemoveAllSimData() // 0x4B3535
{
    mangled_assert("?RemoveAllSimData@SobPointMass@@IAEXXZ");
    todo("implement");
    _sub_4B3535(this);
}

_extern vector3 const &_sub_4B35AE(SobPointMass const *const);
vector3 const &SobPointMass::getPosition() const // 0x4B35AE
{
    mangled_assert("?getPosition@SobPointMass@@UBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_4B35AE(this);
    return __result;
}

_extern void _sub_4B369D(SobPointMass *const, vector3 const &);
void SobPointMass::setPosition(vector3 const &) // 0x4B369D
{
    mangled_assert("?setPosition@SobPointMass@@UAEXABVvector3@@@Z");
    todo("implement");
    _sub_4B369D(this, arg);
}

_extern void _sub_4B36BA(SobPointMass *const, vector3 const &, matrix3 const &);
void SobPointMass::setTransform(vector3 const &, matrix3 const &) // 0x4B36BA
{
    mangled_assert("?setTransform@SobPointMass@@UAEXABVvector3@@ABVmatrix3@@@Z");
    todo("implement");
    _sub_4B36BA(this, arg, arg);
}

_extern vector3 const &_sub_4B35C0(SobPointMass const *const);
vector3 const &SobPointMass::getVelocity() const // 0x4B35C0
{
    mangled_assert("?getVelocity@SobPointMass@@UBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_4B35C0(this);
    return __result;
}

_extern void _sub_4B36C6(SobPointMass *const, vector3 const &);
void SobPointMass::setVelocity(vector3 const &) // 0x4B36C6
{
    mangled_assert("?setVelocity@SobPointMass@@UAEXABVvector3@@@Z");
    todo("implement");
    _sub_4B36C6(this, arg);
}

_extern vector3 const &_sub_4B3598(SobPointMass const *const);
vector3 const &SobPointMass::getOldPosition() const // 0x4B3598
{
    mangled_assert("?getOldPosition@SobPointMass@@UBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_4B3598(this);
    return __result;
}

_extern vector3 const &_sub_4B35A3(SobPointMass const *const);
vector3 const &SobPointMass::getOldVelocity() const // 0x4B35A3
{
    mangled_assert("?getOldVelocity@SobPointMass@@UBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_4B35A3(this);
    return __result;
}

_extern bool _sub_4B35CE(SobPointMass const *const);
bool SobPointMass::isMoving() const // 0x4B35CE
{
    mangled_assert("?isMoving@SobPointMass@@UBE_NXZ");
    todo("implement");
    bool __result = _sub_4B35CE(this);
    return __result;
}

_extern bool _sub_4B35E0(SobPointMass const *const);
bool SobPointMass::isRotating() const // 0x4B35E0
{
    mangled_assert("?isRotating@SobPointMass@@UBE_NXZ");
    todo("implement");
    bool __result = _sub_4B35E0(this);
    return __result;
}

_extern void _sub_4B35F3(SobPointMass *const);
void SobPointMass::reloadStats() // 0x4B35F3
{
    mangled_assert("?reloadStats@SobPointMass@@UAEXXZ");
    todo("implement");
    _sub_4B35F3(this);
}

_extern void _sub_4B3578(SobPointMass *const);
void SobPointMass::UpdatePointMassWithStaticData() // 0x4B3578
{
    mangled_assert("?UpdatePointMassWithStaticData@SobPointMass@@IAEXXZ");
    todo("implement");
    _sub_4B3578(this);
}

_extern bool _sub_4B36D1(SobPointMass *const, float);
bool SobPointMass::update(float) // 0x4B36D1
{
    mangled_assert("?update@SobPointMass@@UAE_NM@Z");
    todo("implement");
    bool __result = _sub_4B36D1(this, arg);
    return __result;
}

/* ---------- private code */
#endif
