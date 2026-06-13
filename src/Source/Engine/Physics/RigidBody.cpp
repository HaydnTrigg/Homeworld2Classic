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

_extern _sub_473C8C(RigidBody::BodyState *const);
_inline RigidBody::BodyState::BodyState() // 0x473C8C
{
    mangled_assert("??0BodyState@RigidBody@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_473C8C(this);
}

_extern bool _sub_4755B8(RigidBody *const, SaveGameData *);
bool RigidBody::restore(SaveGameData *) // 0x4755B8
{
    mangled_assert("?restore@RigidBody@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_4755B8(this, arg);
    return __result;
}

_extern bool _sub_475605(RigidBody *const, SaveGameData *, SaveType);
bool RigidBody::save(SaveGameData *, SaveType) // 0x475605
{
    mangled_assert("?save@RigidBody@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_475605(this, arg, arg);
    return __result;
}

_extern _sub_473D73(RigidBody *const, char const *, bool);
RigidBody::RigidBody(char const *, bool) // 0x473D73
{
    mangled_assert("??0RigidBody@@QAE@PBD_N@Z");
    todo("implement");
    _sub_473D73(this, arg, arg);
}

_extern void _sub_473E41(std::_List_buy<RigidBodyController *,std::allocator<RigidBodyController *> > *const);
_inline std::_List_buy<RigidBodyController *,std::allocator<RigidBodyController *> >::~_List_buy<RigidBodyController *,std::allocator<RigidBodyController *> >() // 0x473E41
{
    mangled_assert("??1?$_List_buy@PAVRigidBodyController@@V?$allocator@PAVRigidBodyController@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_473E41(this);
}

_extern _sub_473D07(RigidBody *const, SaveGameData *);
RigidBody::RigidBody(SaveGameData *) // 0x473D07
{
    mangled_assert("??0RigidBody@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_473D07(this, arg);
}

_extern _sub_473C8F(RigidBody *const, RigidBody const &);
RigidBody::RigidBody(RigidBody const &) // 0x473C8F
{
    mangled_assert("??0RigidBody@@QAE@ABV0@@Z");
    todo("implement");
    _sub_473C8F(this, arg);
}

_extern void _sub_4754F6(RigidBody *const);
void RigidBody::postRestore() // 0x4754F6
{
    mangled_assert("?postRestore@RigidBody@@UAEXXZ");
    todo("implement");
    _sub_4754F6(this);
}

_extern void _sub_475338(RigidBody *const);
void RigidBody::defaultSettings() // 0x475338
{
    mangled_assert("?defaultSettings@RigidBody@@QAEXXZ");
    todo("implement");
    _sub_475338(this);
}

_extern void _sub_473E5C(RigidBody *const);
RigidBody::~RigidBody() // 0x473E5C
{
    mangled_assert("??1RigidBody@@UAE@XZ");
    todo("implement");
    _sub_473E5C(this);
}

_extern PhysicsObject &_sub_473EDA(PhysicsObject *const, PhysicsObject const &);
_inline PhysicsObject &PhysicsObject::operator=(PhysicsObject const &) // 0x473EDA
{
    mangled_assert("??4PhysicsObject@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    PhysicsObject & __result = _sub_473EDA(this, arg);
    return __result;
}

_extern RigidBody &_sub_473EFB(RigidBody *const, RigidBody const &);
_inline RigidBody &RigidBody::operator=(RigidBody const &) // 0x473EFB
{
    mangled_assert("??4RigidBody@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    RigidBody & __result = _sub_473EFB(this, arg);
    return __result;
}

_extern SaveObject &_sub_474012(SaveObject *const, SaveObject const &);
_inline SaveObject &SaveObject::operator=(SaveObject const &) // 0x474012
{
    mangled_assert("??4SaveObject@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    SaveObject & __result = _sub_474012(this, arg);
    return __result;
}

_extern Saveable &_sub_47402D(Saveable *const, Saveable const &);
_inline Saveable &Saveable::operator=(Saveable const &) // 0x47402D
{
    mangled_assert("??4Saveable@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    Saveable & __result = _sub_47402D(this, arg);
    return __result;
}

_extern void _sub_4756A8(RigidBody *const);
void RigidBody::setDefaultBodyStates() // 0x4756A8
{
    mangled_assert("?setDefaultBodyStates@RigidBody@@AAEXXZ");
    todo("implement");
    _sub_4756A8(this);
}

_extern void _sub_475CAC(RigidBody *const);
void RigidBody::swapBodyStates() // 0x475CAC
{
    mangled_assert("?swapBodyStates@RigidBody@@QAEXXZ");
    todo("implement");
    _sub_475CAC(this);
}

_extern void _sub_475783(RigidBody *const, float);
void RigidBody::simulateTimeStep(float) // 0x475783
{
    mangled_assert("?simulateTimeStep@RigidBody@@UAEXM@Z");
    todo("implement");
    _sub_475783(this, arg);
}

_extern void _sub_4757DA(RigidBody *const, float);
void RigidBody::solveEuler(float) // 0x4757DA
{
    mangled_assert("?solveEuler@RigidBody@@AAEXM@Z");
    todo("implement");
    _sub_4757DA(this, arg);
}

_extern void _sub_475077(RigidBody *const, float);
void RigidBody::applyForcesAndTorques(float) // 0x475077
{
    mangled_assert("?applyForcesAndTorques@RigidBody@@AAEXM@Z");
    todo("implement");
    _sub_475077(this, arg);
}

_extern void _sub_475758(RigidBody *const, vector3 const &);
void RigidBody::setPosition(vector3 const &) // 0x475758
{
    mangled_assert("?setPosition@RigidBody@@QAEXABVvector3@@@Z");
    todo("implement");
    _sub_475758(this, arg);
}

_extern void _sub_475740(RigidBody *const, quat const &);
void RigidBody::setOrientation(quat const &) // 0x475740
{
    mangled_assert("?setOrientation@RigidBody@@QAEXABVquat@@@Z");
    todo("implement");
    _sub_475740(this, arg);
}

_extern void _sub_475715(RigidBody *const, matrix3 const &);
void RigidBody::setOrientation(matrix3 const &) // 0x475715
{
    mangled_assert("?setOrientation@RigidBody@@QAEXABVmatrix3@@@Z");
    todo("implement");
    _sub_475715(this, arg);
}

_extern void _sub_474A5C(RigidBody *const, vector3 const &);
void RigidBody::addForce(vector3 const &) // 0x474A5C
{
    mangled_assert("?addForce@RigidBody@@QAEXABVvector3@@@Z");
    todo("implement");
    _sub_474A5C(this, arg);
}

_extern void _sub_4747F8(RigidBody *const, vector3 const &, vector3 const &);
void RigidBody::addBsForceBsPosition(vector3 const &, vector3 const &) // 0x4747F8
{
    mangled_assert("?addBsForceBsPosition@RigidBody@@QAEXABVvector3@@0@Z");
    todo("implement");
    _sub_4747F8(this, arg, arg);
}

_extern void _sub_474B70(RigidBody *const, vector3 const &, vector3 const &);
void RigidBody::addWsForceBsPosition(vector3 const &, vector3 const &) // 0x474B70
{
    mangled_assert("?addWsForceBsPosition@RigidBody@@QAEXABVvector3@@0@Z");
    todo("implement");
    _sub_474B70(this, arg, arg);
}

_extern void _sub_474870(RigidBody *const, vector3 const &, vector3 const &);
void RigidBody::addBsForceWsPosition(vector3 const &, vector3 const &) // 0x474870
{
    mangled_assert("?addBsForceWsPosition@RigidBody@@QAEXABVvector3@@0@Z");
    todo("implement");
    _sub_474870(this, arg, arg);
}

_extern void _sub_474D26(RigidBody *const, vector3 const &, vector3 const &);
void RigidBody::addWsForceWsPosition(vector3 const &, vector3 const &) // 0x474D26
{
    mangled_assert("?addWsForceWsPosition@RigidBody@@QAEXABVvector3@@0@Z");
    todo("implement");
    _sub_474D26(this, arg, arg);
}

_extern void _sub_474AE6(RigidBody *const, vector3 const &);
void RigidBody::addTorque(vector3 const &) // 0x474AE6
{
    mangled_assert("?addTorque@RigidBody@@QAEXABVvector3@@@Z");
    todo("implement");
    _sub_474AE6(this, arg);
}

_extern void _sub_47576C(RigidBody *const, vector3 const &);
void RigidBody::setVelocity(vector3 const &) // 0x47576C
{
    mangled_assert("?setVelocity@RigidBody@@QAEXABVvector3@@@Z");
    todo("implement");
    _sub_47576C(this, arg);
}

_extern void _sub_47567A(RigidBody *const, vector3 const &);
void RigidBody::setAngularVelocity(vector3 const &) // 0x47567A
{
    mangled_assert("?setAngularVelocity@RigidBody@@QAEXABVvector3@@@Z");
    todo("implement");
    _sub_47567A(this, arg);
}

_extern void _sub_474A39(RigidBody *const, RigidBodyController *);
void RigidBody::addController(RigidBodyController *) // 0x474A39
{
    mangled_assert("?addController@RigidBody@@QAEXPAVRigidBodyController@@@Z");
    todo("implement");
    _sub_474A39(this, arg);
}

_extern void _sub_47559A(RigidBody *const, RigidBodyController *);
void RigidBody::removeController(RigidBodyController *) // 0x47559A
{
    mangled_assert("?removeController@RigidBody@@QAEXPAVRigidBodyController@@@Z");
    todo("implement");
    _sub_47559A(this, arg);
}

_extern void _sub_475571(RigidBody *const);
void RigidBody::removeAllControllers() // 0x475571
{
    mangled_assert("?removeAllControllers@RigidBody@@QAEXXZ");
    todo("implement");
    _sub_475571(this);
}

_extern void _sub_475666(RigidBody *const, vector3 const &);
void RigidBody::setAdditionalVelocity(vector3 const &) // 0x475666
{
    mangled_assert("?setAdditionalVelocity@RigidBody@@QAEXABVvector3@@@Z");
    todo("implement");
    _sub_475666(this, arg);
}

_extern void _sub_475652(RigidBody *const, vector3 const &);
void RigidBody::setAdditionalAngularVelocity(vector3 const &) // 0x475652
{
    mangled_assert("?setAdditionalAngularVelocity@RigidBody@@QAEXABVvector3@@@Z");
    todo("implement");
    _sub_475652(this, arg);
}

_extern void _sub_475691(RigidBody *const, bool, bool);
void RigidBody::setDamping(bool, bool) // 0x475691
{
    mangled_assert("?setDamping@RigidBody@@QAEX_N0@Z");
    todo("implement");
    _sub_475691(this, arg, arg);
}

_extern bool _sub_47549F(RigidBody const *const);
bool RigidBody::hasMoved() const // 0x47549F
{
    mangled_assert("?hasMoved@RigidBody@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_47549F(this);
    return __result;
}

_extern void _sub_475306(RigidBody *const);
void RigidBody::copyBodyStates() // 0x475306
{
    mangled_assert("?copyBodyStates@RigidBody@@QAEXXZ");
    todo("implement");
    _sub_475306(this);
}

/* ---------- private code */
#endif
