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

SobZeroMassBody::SobZeroMassBody(SobType, char const *, bool) // 0x4B3766
{
    mangled_assert("??0SobZeroMassBody@@QAE@W4SobType@@PBD_N@Z");
    todo("implement");
}

SobZeroMassBody::~SobZeroMassBody() // 0x4B3806
{
    mangled_assert("??1SobZeroMassBody@@UAE@XZ");
    todo("implement");
}

void SobZeroMassBody::RemoveFromSimulation() // 0x4B388D
{
    mangled_assert("?RemoveFromSimulation@SobZeroMassBody@@MAEXXZ");
    todo("implement");
}

void SobZeroMassBody::RemoveAllSimData() // 0x4B385A
{
    mangled_assert("?RemoveAllSimData@SobZeroMassBody@@IAEXXZ");
    todo("implement");
}

vector3 const &SobZeroMassBody::getPosition() const // 0x4B3980
{
    mangled_assert("?getPosition@SobZeroMassBody@@UBEABVvector3@@XZ");
    todo("implement");
}

void SobZeroMassBody::setPosition(vector3 const &) // 0x4B3AD8
{
    mangled_assert("?setPosition@SobZeroMassBody@@UAEXABVvector3@@@Z");
    todo("implement");
}

void SobZeroMassBody::setTransform(vector3 const &, matrix3 const &) // 0x4B3AF5
{
    mangled_assert("?setTransform@SobZeroMassBody@@UAEXABVvector3@@ABVmatrix3@@@Z");
    todo("implement");
}

vector3 const &SobZeroMassBody::getVelocity() const // 0x4B3994
{
    mangled_assert("?getVelocity@SobZeroMassBody@@UBEABVvector3@@XZ");
    todo("implement");
}

void SobZeroMassBody::setVelocity(vector3 const &) // 0x4B3B28
{
    mangled_assert("?setVelocity@SobZeroMassBody@@UAEXABVvector3@@@Z");
    todo("implement");
}

vector3 const &SobZeroMassBody::getOldPosition() const // 0x4B3948
{
    mangled_assert("?getOldPosition@SobZeroMassBody@@UBEABVvector3@@XZ");
    todo("implement");
}

vector3 const &SobZeroMassBody::getOldVelocity() const // 0x4B395C
{
    mangled_assert("?getOldVelocity@SobZeroMassBody@@UBEABVvector3@@XZ");
    todo("implement");
}

bool SobZeroMassBody::isMoving() const // 0x4B39B1
{
    mangled_assert("?isMoving@SobZeroMassBody@@UBE_NXZ");
    todo("implement");
}

bool SobZeroMassBody::isRotating() const // 0x4B39C3
{
    mangled_assert("?isRotating@SobZeroMassBody@@UBE_NXZ");
    todo("implement");
}

void SobZeroMassBody::reloadStats() // 0x4B39E6
{
    mangled_assert("?reloadStats@SobZeroMassBody@@UAEXXZ");
    todo("implement");
}

bool SobZeroMassBody::update(float) // 0x4B3B33
{
    mangled_assert("?update@SobZeroMassBody@@UAE_NM@Z");
    todo("implement");
}

quat const &SobZeroMassBody::getCoordSysQuat() const // 0x4B3904
{
    mangled_assert("?getCoordSysQuat@SobZeroMassBody@@UBEABVquat@@XZ");
    todo("implement");
}

matrix3 const &SobZeroMassBody::getCoordSys() const // 0x4B38CE
{
    mangled_assert("?getCoordSys@SobZeroMassBody@@UBEABVmatrix3@@XZ");
    todo("implement");
}

void SobZeroMassBody::setCoordSys(quat const &) // 0x4B3AB4
{
    mangled_assert("?setCoordSys@SobZeroMassBody@@UAEXABVquat@@@Z");
    todo("implement");
}

void SobZeroMassBody::setCoordSys(matrix3 const &) // 0x4B3A90
{
    mangled_assert("?setCoordSys@SobZeroMassBody@@UAEXABVmatrix3@@@Z");
    todo("implement");
}

vector3 const &SobZeroMassBody::getAngularVelocity() const // 0x4B38B4
{
    mangled_assert("?getAngularVelocity@SobZeroMassBody@@UBEABVvector3@@XZ");
    todo("implement");
}

void SobZeroMassBody::setAngularVelocity(vector3 const &) // 0x4B3A85
{
    mangled_assert("?setAngularVelocity@SobZeroMassBody@@UAEXABVvector3@@@Z");
    todo("implement");
}

vector3 const &SobZeroMassBody::getOldAngularVelocity() const // 0x4B3914
{
    mangled_assert("?getOldAngularVelocity@SobZeroMassBody@@UBEABVvector3@@XZ");
    todo("implement");
}

quat const &SobZeroMassBody::getOldCoordSysQuat() const // 0x4B392E
{
    mangled_assert("?getOldCoordSysQuat@SobZeroMassBody@@UBEABVquat@@XZ");
    todo("implement");
}

SobZeroMassBody::SobZeroMassBody(SobType, SaveGameData *) // 0x4B3743
{
    mangled_assert("??0SobZeroMassBody@@QAE@W4SobType@@PAVSaveGameData@@@Z");
    todo("implement");
}

void SobZeroMassBody::defaultSettings() // 0x4B389D
{
    mangled_assert("?defaultSettings@SobZeroMassBody@@QAEXXZ");
    todo("implement");
}

void SobZeroMassBody::postRestore() // 0x4B39D5
{
    mangled_assert("?postRestore@SobZeroMassBody@@UAEXXZ");
    todo("implement");
}

bool SobZeroMassBody::restore(SaveGameData *) // 0x4B39EB
{
    mangled_assert("?restore@SobZeroMassBody@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool SobZeroMassBody::save(SaveGameData *, SaveType) // 0x4B3A38
{
    mangled_assert("?save@SobZeroMassBody@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
