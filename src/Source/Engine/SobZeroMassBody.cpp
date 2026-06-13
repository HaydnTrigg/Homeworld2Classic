#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <dbdefines.h>
#include <xstring>
#include <UnitCaps\UnitCaps.h>
#include <xmemory0>
#include <pch.h>
#include <SOBGroupManager.h>
#include <hash_map>
#include <xhash>
#include <Mathlib\matrix3.h>
#include <sobzeromassbodystatic.h>
#include <new>
#include <exception>
#include <xstddef>
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
#include <Interpolation.h>
#include <list>
#include <Collision\Primitives\aabb.h>
#include <HyperspaceManager.h>
#include <SquadronList.h>
#include <Mathlib\vector3.h>
#include <sobid.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <Universe.h>
#include <Physics\PhysicsObject.h>
#include <Waypoint.h>
#include <platform\timer.h>
#include <SobUnmoveable.h>
#include <platform\platformexports.h>
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
#include <savegameimpl.h>
#include <pathpoints.h>
#include <debug\db.h>
#include <profile\profile.h>
#include <iostream>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <boost\throw_exception.hpp>
#include <MultiplierTypes.h>
#include <selection.h>
#include <savegamedef.h>
#include <Collision\BVH\bvh.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <SobZeroMassBody.h>
#include <Physics\PhysicsEngine.h>
#include <sob.h>
#include <wchar.h>
#include <Physics\ZeroMassBody.h>
#include <sobstatic.h>
#include <Physics\ZeroMassBodyController.h>
#include <Collision\Primitives\sphere.h>
#include <fixedpoint.h>
#include <util\fixed.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern SaveData const SobZeroMassBody::m_saveData[1]; // 0x790D48
extern char const SobZeroMassBody::m_saveToken[16]; // 0x790D68

/* ---------- private variables */

/* ---------- public code */

_extern _sub_4B3766(SobZeroMassBody *const, SobType, char const *, bool);
SobZeroMassBody::SobZeroMassBody(SobType, char const *, bool) // 0x4B3766
{
    mangled_assert("??0SobZeroMassBody@@QAE@W4SobType@@PBD_N@Z");
    todo("implement");
    _sub_4B3766(this, arg, arg, arg);
}

_extern void _sub_4B3806(SobZeroMassBody *const);
SobZeroMassBody::~SobZeroMassBody() // 0x4B3806
{
    mangled_assert("??1SobZeroMassBody@@UAE@XZ");
    todo("implement");
    _sub_4B3806(this);
}

_extern void _sub_4B388D(SobZeroMassBody *const);
void SobZeroMassBody::RemoveFromSimulation() // 0x4B388D
{
    mangled_assert("?RemoveFromSimulation@SobZeroMassBody@@MAEXXZ");
    todo("implement");
    _sub_4B388D(this);
}

_extern void _sub_4B385A(SobZeroMassBody *const);
void SobZeroMassBody::RemoveAllSimData() // 0x4B385A
{
    mangled_assert("?RemoveAllSimData@SobZeroMassBody@@IAEXXZ");
    todo("implement");
    _sub_4B385A(this);
}

_extern vector3 const &_sub_4B3980(SobZeroMassBody const *const);
vector3 const &SobZeroMassBody::getPosition() const // 0x4B3980
{
    mangled_assert("?getPosition@SobZeroMassBody@@UBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_4B3980(this);
    return __result;
}

_extern void _sub_4B3AD8(SobZeroMassBody *const, vector3 const &);
void SobZeroMassBody::setPosition(vector3 const &) // 0x4B3AD8
{
    mangled_assert("?setPosition@SobZeroMassBody@@UAEXABVvector3@@@Z");
    todo("implement");
    _sub_4B3AD8(this, arg);
}

_extern void _sub_4B3AF5(SobZeroMassBody *const, vector3 const &, matrix3 const &);
void SobZeroMassBody::setTransform(vector3 const &, matrix3 const &) // 0x4B3AF5
{
    mangled_assert("?setTransform@SobZeroMassBody@@UAEXABVvector3@@ABVmatrix3@@@Z");
    todo("implement");
    _sub_4B3AF5(this, arg, arg);
}

_extern vector3 const &_sub_4B3994(SobZeroMassBody const *const);
vector3 const &SobZeroMassBody::getVelocity() const // 0x4B3994
{
    mangled_assert("?getVelocity@SobZeroMassBody@@UBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_4B3994(this);
    return __result;
}

_extern void _sub_4B3B28(SobZeroMassBody *const, vector3 const &);
void SobZeroMassBody::setVelocity(vector3 const &) // 0x4B3B28
{
    mangled_assert("?setVelocity@SobZeroMassBody@@UAEXABVvector3@@@Z");
    todo("implement");
    _sub_4B3B28(this, arg);
}

_extern vector3 const &_sub_4B3948(SobZeroMassBody const *const);
vector3 const &SobZeroMassBody::getOldPosition() const // 0x4B3948
{
    mangled_assert("?getOldPosition@SobZeroMassBody@@UBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_4B3948(this);
    return __result;
}

_extern vector3 const &_sub_4B395C(SobZeroMassBody const *const);
vector3 const &SobZeroMassBody::getOldVelocity() const // 0x4B395C
{
    mangled_assert("?getOldVelocity@SobZeroMassBody@@UBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_4B395C(this);
    return __result;
}

_extern bool _sub_4B39B1(SobZeroMassBody const *const);
bool SobZeroMassBody::isMoving() const // 0x4B39B1
{
    mangled_assert("?isMoving@SobZeroMassBody@@UBE_NXZ");
    todo("implement");
    bool __result = _sub_4B39B1(this);
    return __result;
}

_extern bool _sub_4B39C3(SobZeroMassBody const *const);
bool SobZeroMassBody::isRotating() const // 0x4B39C3
{
    mangled_assert("?isRotating@SobZeroMassBody@@UBE_NXZ");
    todo("implement");
    bool __result = _sub_4B39C3(this);
    return __result;
}

_extern void _sub_4B39E6(SobZeroMassBody *const);
void SobZeroMassBody::reloadStats() // 0x4B39E6
{
    mangled_assert("?reloadStats@SobZeroMassBody@@UAEXXZ");
    todo("implement");
    _sub_4B39E6(this);
}

_extern bool _sub_4B3B33(SobZeroMassBody *const, float);
bool SobZeroMassBody::update(float) // 0x4B3B33
{
    mangled_assert("?update@SobZeroMassBody@@UAE_NM@Z");
    todo("implement");
    bool __result = _sub_4B3B33(this, arg);
    return __result;
}

_extern quat const &_sub_4B3904(SobZeroMassBody const *const);
quat const &SobZeroMassBody::getCoordSysQuat() const // 0x4B3904
{
    mangled_assert("?getCoordSysQuat@SobZeroMassBody@@UBEABVquat@@XZ");
    todo("implement");
    quat const & __result = _sub_4B3904(this);
    return __result;
}

_extern matrix3 const &_sub_4B38CE(SobZeroMassBody const *const);
matrix3 const &SobZeroMassBody::getCoordSys() const // 0x4B38CE
{
    mangled_assert("?getCoordSys@SobZeroMassBody@@UBEABVmatrix3@@XZ");
    todo("implement");
    matrix3 const & __result = _sub_4B38CE(this);
    return __result;
}

_extern void _sub_4B3AB4(SobZeroMassBody *const, quat const &);
void SobZeroMassBody::setCoordSys(quat const &) // 0x4B3AB4
{
    mangled_assert("?setCoordSys@SobZeroMassBody@@UAEXABVquat@@@Z");
    todo("implement");
    _sub_4B3AB4(this, arg);
}

_extern void _sub_4B3A90(SobZeroMassBody *const, matrix3 const &);
void SobZeroMassBody::setCoordSys(matrix3 const &) // 0x4B3A90
{
    mangled_assert("?setCoordSys@SobZeroMassBody@@UAEXABVmatrix3@@@Z");
    todo("implement");
    _sub_4B3A90(this, arg);
}

_extern vector3 const &_sub_4B38B4(SobZeroMassBody const *const);
vector3 const &SobZeroMassBody::getAngularVelocity() const // 0x4B38B4
{
    mangled_assert("?getAngularVelocity@SobZeroMassBody@@UBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_4B38B4(this);
    return __result;
}

_extern void _sub_4B3A85(SobZeroMassBody *const, vector3 const &);
void SobZeroMassBody::setAngularVelocity(vector3 const &) // 0x4B3A85
{
    mangled_assert("?setAngularVelocity@SobZeroMassBody@@UAEXABVvector3@@@Z");
    todo("implement");
    _sub_4B3A85(this, arg);
}

_extern vector3 const &_sub_4B3914(SobZeroMassBody const *const);
vector3 const &SobZeroMassBody::getOldAngularVelocity() const // 0x4B3914
{
    mangled_assert("?getOldAngularVelocity@SobZeroMassBody@@UBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_4B3914(this);
    return __result;
}

_extern quat const &_sub_4B392E(SobZeroMassBody const *const);
quat const &SobZeroMassBody::getOldCoordSysQuat() const // 0x4B392E
{
    mangled_assert("?getOldCoordSysQuat@SobZeroMassBody@@UBEABVquat@@XZ");
    todo("implement");
    quat const & __result = _sub_4B392E(this);
    return __result;
}

_extern _sub_4B3743(SobZeroMassBody *const, SobType, SaveGameData *);
SobZeroMassBody::SobZeroMassBody(SobType, SaveGameData *) // 0x4B3743
{
    mangled_assert("??0SobZeroMassBody@@QAE@W4SobType@@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_4B3743(this, arg, arg);
}

_extern void _sub_4B389D(SobZeroMassBody *const);
void SobZeroMassBody::defaultSettings() // 0x4B389D
{
    mangled_assert("?defaultSettings@SobZeroMassBody@@QAEXXZ");
    todo("implement");
    _sub_4B389D(this);
}

_extern void _sub_4B39D5(SobZeroMassBody *const);
void SobZeroMassBody::postRestore() // 0x4B39D5
{
    mangled_assert("?postRestore@SobZeroMassBody@@UAEXXZ");
    todo("implement");
    _sub_4B39D5(this);
}

_extern bool _sub_4B39EB(SobZeroMassBody *const, SaveGameData *);
bool SobZeroMassBody::restore(SaveGameData *) // 0x4B39EB
{
    mangled_assert("?restore@SobZeroMassBody@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_4B39EB(this, arg);
    return __result;
}

_extern bool _sub_4B3A38(SobZeroMassBody *const, SaveGameData *, SaveType);
bool SobZeroMassBody::save(SaveGameData *, SaveType) // 0x4B3A38
{
    mangled_assert("?save@SobZeroMassBody@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_4B3A38(this, arg, arg);
    return __result;
}

/* ---------- private code */
#endif
