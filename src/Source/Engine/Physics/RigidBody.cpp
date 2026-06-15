#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <profile\profile.h>
#include <iosfwd>
#include <iostream>
#include <math.h>
#include <list>
#include <Mathlib\vector3.h>
#include <map>
#include <xtree>
#include <Physics\PhysicsObject.h>
#include <Mathlib\quat.h>
#include <savegameimpl.h>
#include <savegamedef.h>
#include <Physics\RigidBody.h>
#include <Physics\RigidBodyController.h>

/* ---------- constants */

/* ---------- definitions */

typedef std::_List_iterator<std::_List_val<std::_List_simple_types<RigidBodyController *> > > RigidBodyControllerListIterator;

/* ---------- prototypes */

/* ---------- globals */

extern char const RigidBody::m_saveToken[0]; // 0x78B4F8
extern SaveData const RigidBody::m_saveData[7]; // 0x78B418

/* ---------- private variables */

_static
{
    extern float const VelocitySetToZeroThreshold; // 0x78B410
    extern float const AngularVelocitySetToZeroThreshold; // 0x78B414
}

/* ---------- public code */

_inline RigidBody::BodyState::BodyState() // 0x473C8C
{
    mangled_assert("??0BodyState@RigidBody@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

bool RigidBody::restore(SaveGameData *) // 0x4755B8
{
    mangled_assert("?restore@RigidBody@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool RigidBody::save(SaveGameData *, SaveType) // 0x475605
{
    mangled_assert("?save@RigidBody@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

RigidBody::RigidBody(char const *, bool) // 0x473D73
{
    mangled_assert("??0RigidBody@@QAE@PBD_N@Z");
    todo("implement");
}

_inline std::_List_buy<RigidBodyController *,std::allocator<RigidBodyController *> >::~_List_buy<RigidBodyController *,std::allocator<RigidBodyController *> >() // 0x473E41
{
    mangled_assert("??1?$_List_buy@PAVRigidBodyController@@V?$allocator@PAVRigidBodyController@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

RigidBody::RigidBody(SaveGameData *) // 0x473D07
{
    mangled_assert("??0RigidBody@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

RigidBody::RigidBody(RigidBody const &) // 0x473C8F
{
    mangled_assert("??0RigidBody@@QAE@ABV0@@Z");
    todo("implement");
}

void RigidBody::postRestore() // 0x4754F6
{
    mangled_assert("?postRestore@RigidBody@@UAEXXZ");
    todo("implement");
}

void RigidBody::defaultSettings() // 0x475338
{
    mangled_assert("?defaultSettings@RigidBody@@QAEXXZ");
    todo("implement");
}

RigidBody::~RigidBody() // 0x473E5C
{
    mangled_assert("??1RigidBody@@UAE@XZ");
    todo("implement");
}

_inline PhysicsObject &PhysicsObject::operator=(PhysicsObject const &) // 0x473EDA
{
    mangled_assert("??4PhysicsObject@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline RigidBody &RigidBody::operator=(RigidBody const &) // 0x473EFB
{
    mangled_assert("??4RigidBody@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline SaveObject &SaveObject::operator=(SaveObject const &) // 0x474012
{
    mangled_assert("??4SaveObject@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline Saveable &Saveable::operator=(Saveable const &) // 0x47402D
{
    mangled_assert("??4Saveable@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

void RigidBody::setDefaultBodyStates() // 0x4756A8
{
    mangled_assert("?setDefaultBodyStates@RigidBody@@AAEXXZ");
    todo("implement");
}

void RigidBody::swapBodyStates() // 0x475CAC
{
    mangled_assert("?swapBodyStates@RigidBody@@QAEXXZ");
    todo("implement");
}

void RigidBody::simulateTimeStep(float) // 0x475783
{
    mangled_assert("?simulateTimeStep@RigidBody@@UAEXM@Z");
    todo("implement");
}

void RigidBody::solveEuler(float) // 0x4757DA
{
    mangled_assert("?solveEuler@RigidBody@@AAEXM@Z");
    todo("implement");
}

void RigidBody::applyForcesAndTorques(float) // 0x475077
{
    mangled_assert("?applyForcesAndTorques@RigidBody@@AAEXM@Z");
    todo("implement");
}

void RigidBody::setPosition(vector3 const &) // 0x475758
{
    mangled_assert("?setPosition@RigidBody@@QAEXABVvector3@@@Z");
    todo("implement");
}

void RigidBody::setOrientation(quat const &) // 0x475740
{
    mangled_assert("?setOrientation@RigidBody@@QAEXABVquat@@@Z");
    todo("implement");
}

void RigidBody::setOrientation(matrix3 const &) // 0x475715
{
    mangled_assert("?setOrientation@RigidBody@@QAEXABVmatrix3@@@Z");
    todo("implement");
}

void RigidBody::addForce(vector3 const &) // 0x474A5C
{
    mangled_assert("?addForce@RigidBody@@QAEXABVvector3@@@Z");
    todo("implement");
}

void RigidBody::addBsForceBsPosition(vector3 const &, vector3 const &) // 0x4747F8
{
    mangled_assert("?addBsForceBsPosition@RigidBody@@QAEXABVvector3@@0@Z");
    todo("implement");
}

void RigidBody::addWsForceBsPosition(vector3 const &, vector3 const &) // 0x474B70
{
    mangled_assert("?addWsForceBsPosition@RigidBody@@QAEXABVvector3@@0@Z");
    todo("implement");
}

void RigidBody::addBsForceWsPosition(vector3 const &, vector3 const &) // 0x474870
{
    mangled_assert("?addBsForceWsPosition@RigidBody@@QAEXABVvector3@@0@Z");
    todo("implement");
}

void RigidBody::addWsForceWsPosition(vector3 const &, vector3 const &) // 0x474D26
{
    mangled_assert("?addWsForceWsPosition@RigidBody@@QAEXABVvector3@@0@Z");
    todo("implement");
}

void RigidBody::addTorque(vector3 const &) // 0x474AE6
{
    mangled_assert("?addTorque@RigidBody@@QAEXABVvector3@@@Z");
    todo("implement");
}

void RigidBody::setVelocity(vector3 const &) // 0x47576C
{
    mangled_assert("?setVelocity@RigidBody@@QAEXABVvector3@@@Z");
    todo("implement");
}

void RigidBody::setAngularVelocity(vector3 const &) // 0x47567A
{
    mangled_assert("?setAngularVelocity@RigidBody@@QAEXABVvector3@@@Z");
    todo("implement");
}

void RigidBody::addController(RigidBodyController *) // 0x474A39
{
    mangled_assert("?addController@RigidBody@@QAEXPAVRigidBodyController@@@Z");
    todo("implement");
}

void RigidBody::removeController(RigidBodyController *) // 0x47559A
{
    mangled_assert("?removeController@RigidBody@@QAEXPAVRigidBodyController@@@Z");
    todo("implement");
}

void RigidBody::removeAllControllers() // 0x475571
{
    mangled_assert("?removeAllControllers@RigidBody@@QAEXXZ");
    todo("implement");
}

void RigidBody::setAdditionalVelocity(vector3 const &) // 0x475666
{
    mangled_assert("?setAdditionalVelocity@RigidBody@@QAEXABVvector3@@@Z");
    todo("implement");
}

void RigidBody::setAdditionalAngularVelocity(vector3 const &) // 0x475652
{
    mangled_assert("?setAdditionalAngularVelocity@RigidBody@@QAEXABVvector3@@@Z");
    todo("implement");
}

void RigidBody::setDamping(bool, bool) // 0x475691
{
    mangled_assert("?setDamping@RigidBody@@QAEX_N0@Z");
    todo("implement");
}

bool RigidBody::hasMoved() const // 0x47549F
{
    mangled_assert("?hasMoved@RigidBody@@QBE_NXZ");
    todo("implement");
}

void RigidBody::copyBodyStates() // 0x475306
{
    mangled_assert("?copyBodyStates@RigidBody@@QAEXXZ");
    todo("implement");
}

/* ---------- private code */
#endif
