#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <Physics\RigidBody.h>
#include <Physics\RigidBodyController.h>
#include <Mathlib\matrix3.h>
#include <SobRigidBodyStatic.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <Collision\Primitives\obb.h>
#include <HierarchyStatic.h>
#include <Decal\DecalRefMesh.h>
#include <Collision\BVH\octree.h>
#include <Collision\Primitives\mesh.h>
#include <Collision\BVH\span.h>
#include <Collision\Primitives\triangle.h>
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
#include <math.h>
#include <list>
#include <Collision\Primitives\aabb.h>
#include <Mathlib\vector3.h>
#include <sobid.h>
#include <Physics\PhysicsEngine.h>
#include <map>
#include <xtree>
#include <fixedpoint.h>
#include <boost\scoped_ptr.hpp>
#include <util\fixed.h>
#include <Mathlib\vector2.h>
#include <dbdefines.h>
#include <UnitCaps\UnitCaps.h>
#include <util\types.h>
#include <SOBGroupManager.h>
#include <hash_map>
#include <boost\cstdint.hpp>
#include <xhash>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <seInterface2\SoundParams.h>
#include <Mathlib\quat.h>
#include <Physics\PhysicsObject.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <gameRandom.h>
#include <random.h>
#include <savegameimpl.h>
#include <pathpoints.h>
#include <debug\db.h>
#include <HyperspaceManager.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <SquadronList.h>
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
#include <profile\profile.h>
#include <iostream>
#include <Universe.h>
#include <Waypoint.h>
#include <platform\timer.h>
#include <SobUnmoveable.h>
#include <platform\platformexports.h>
#include <SobRigidBody.h>
#include <sob.h>
#include <wchar.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern SaveData const SobRigidBody::m_saveData[3]; // 0x790A98
extern char const SobRigidBody::m_saveToken[13]; // 0x790AF8

/* ---------- private variables */

/* ---------- public code */

SobRigidBody::SobRigidBody(SobType, SaveGameData *) // 0x4B2CBA
{
    mangled_assert("??0SobRigidBody@@QAE@W4SobType@@PAVSaveGameData@@@Z");
    todo("implement");
}

void SobRigidBody::defaultSettings() // 0x4B2E53
{
    mangled_assert("?defaultSettings@SobRigidBody@@IAEXXZ");
    todo("implement");
}

void SobRigidBody::postRestore() // 0x4B300F
{
    mangled_assert("?postRestore@SobRigidBody@@MAEXXZ");
    todo("implement");
}

SobRigidBody::SobRigidBody(SobType, char const *, bool) // 0x4B2D0C
{
    mangled_assert("??0SobRigidBody@@QAE@W4SobType@@PBD_N@Z");
    todo("implement");
}

SobRigidBody::~SobRigidBody() // 0x4B2DA2
{
    mangled_assert("??1SobRigidBody@@UAE@XZ");
    todo("implement");
}

void SobRigidBody::RemoveFromSimulation() // 0x4B2E42
{
    mangled_assert("?RemoveFromSimulation@SobRigidBody@@MAEXXZ");
    todo("implement");
}

void SobRigidBody::RemoveAllSimData() // 0x4B2E0F
{
    mangled_assert("?RemoveAllSimData@SobRigidBody@@IAEXXZ");
    todo("implement");
}

vector3 const &SobRigidBody::getPosition() const // 0x4B2F91
{
    mangled_assert("?getPosition@SobRigidBody@@UBEABVvector3@@XZ");
    todo("implement");
}

vector3 const SobRigidBody::getUp() const // 0x4B2FA1
{
    mangled_assert("?getUp@SobRigidBody@@UBE?BVvector3@@XZ");
    todo("implement");
}

quat const &SobRigidBody::getCoordSysQuat() const // 0x4B2F00
{
    mangled_assert("?getCoordSysQuat@SobRigidBody@@UBEABVquat@@XZ");
    todo("implement");
}

matrix3 const &SobRigidBody::getCoordSys() const // 0x4B2E72
{
    mangled_assert("?getCoordSys@SobRigidBody@@UBEABVmatrix3@@XZ");
    todo("implement");
}

void SobRigidBody::setTransform(vector3 const &, matrix3 const &) // 0x4B32B2
{
    mangled_assert("?setTransform@SobRigidBody@@UAEXABVvector3@@ABVmatrix3@@@Z");
    todo("implement");
}

void SobRigidBody::setPosition(vector3 const &) // 0x4B3140
{
    mangled_assert("?setPosition@SobRigidBody@@UAEXABVvector3@@@Z");
    todo("implement");
}

void SobRigidBody::setCoordSys(quat const &) // 0x4B30EE
{
    mangled_assert("?setCoordSys@SobRigidBody@@UAEXABVquat@@@Z");
    todo("implement");
}

void SobRigidBody::setCoordSys(matrix3 const &) // 0x4B30CA
{
    mangled_assert("?setCoordSys@SobRigidBody@@UAEXABVmatrix3@@@Z");
    todo("implement");
}

vector3 const &SobRigidBody::getVelocity() const // 0x4B2FC0
{
    mangled_assert("?getVelocity@SobRigidBody@@UBEABVvector3@@XZ");
    todo("implement");
}

void SobRigidBody::setVelocity(vector3 const &) // 0x4B32E5
{
    mangled_assert("?setVelocity@SobRigidBody@@UAEXABVvector3@@@Z");
    todo("implement");
}

vector3 const &SobRigidBody::getOldPosition() const // 0x4B2F6A
{
    mangled_assert("?getOldPosition@SobRigidBody@@UBEABVvector3@@XZ");
    todo("implement");
}

quat const &SobRigidBody::getOldCoordSysQuat() const // 0x4B2F49
{
    mangled_assert("?getOldCoordSysQuat@SobRigidBody@@UBEABVquat@@XZ");
    todo("implement");
}

vector3 const &SobRigidBody::getOldVelocity() const // 0x4B2F81
{
    mangled_assert("?getOldVelocity@SobRigidBody@@UBEABVvector3@@XZ");
    todo("implement");
}

vector3 const &SobRigidBody::getAngularVelocity() const // 0x4B2E62
{
    mangled_assert("?getAngularVelocity@SobRigidBody@@UBEABVvector3@@XZ");
    todo("implement");
}

void SobRigidBody::setAngularVelocity(vector3 const &) // 0x4B30BF
{
    mangled_assert("?setAngularVelocity@SobRigidBody@@UAEXABVvector3@@@Z");
    todo("implement");
}

void SobRigidBody::setRandomAngularVelocity(float) // 0x4B315D
{
    mangled_assert("?setRandomAngularVelocity@SobRigidBody@@UAEXM@Z");
    todo("implement");
}

vector3 const &SobRigidBody::getOldAngularVelocity() const // 0x4B2F39
{
    mangled_assert("?getOldAngularVelocity@SobRigidBody@@UBEABVvector3@@XZ");
    todo("implement");
}

bool SobRigidBody::isMoving() const // 0x4B2FE5
{
    mangled_assert("?isMoving@SobRigidBody@@UBE_NXZ");
    todo("implement");
}

bool SobRigidBody::isRotating() const // 0x4B3004
{
    mangled_assert("?isRotating@SobRigidBody@@UBE_NXZ");
    todo("implement");
}

void SobRigidBody::reloadStats() // 0x4B3020
{
    mangled_assert("?reloadStats@SobRigidBody@@UAEXXZ");
    todo("implement");
}

void SobRigidBody::UpdateRigidBodyWithStaticData() // 0x4B2E52
{
    mangled_assert("?UpdateRigidBodyWithStaticData@SobRigidBody@@IAEXXZ");
    todo("implement");
}

vector3 const SobRigidBody::getHeading() const // 0x4B2F10
{
    mangled_assert("?getHeading@SobRigidBody@@QBE?BVvector3@@XZ");
    todo("implement");
}

bool SobRigidBody::update(float) // 0x4B331C
{
    mangled_assert("?update@SobRigidBody@@UAE_NM@Z");
    todo("implement");
}

bool SobRigidBody::HasRigidBody() // 0x4B2E0C
{
    mangled_assert("?HasRigidBody@SobRigidBody@@UAE_NXZ");
    todo("implement");
}

void SobRigidBody::setLatched(SobID const &) // 0x4B3112
{
    mangled_assert("?setLatched@SobRigidBody@@IAEXABVSobID@@@Z");
    todo("implement");
}

void SobRigidBody::unSetLatched() // 0x4B32F0
{
    mangled_assert("?unSetLatched@SobRigidBody@@IAEXXZ");
    todo("implement");
}

bool SobRigidBody::isLatched() const // 0x4B2FDE
{
    mangled_assert("?isLatched@SobRigidBody@@QBE_NXZ");
    todo("implement");
}

Sob *SobRigidBody::getWhatWeAreLatchedTo() const // 0x4B2FD0
{
    mangled_assert("?getWhatWeAreLatchedTo@SobRigidBody@@QBEPAVSob@@XZ");
    todo("implement");
}

bool SobRigidBody::restore(SaveGameData *) // 0x4B3025
{
    mangled_assert("?restore@SobRigidBody@@MAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool SobRigidBody::save(SaveGameData *, SaveType) // 0x4B3072
{
    mangled_assert("?save@SobRigidBody@@MAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
