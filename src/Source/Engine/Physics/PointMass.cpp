#if 0
/* ---------- headers */

#include "decomp.h"
#include <xmemory0>
#include <pch.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <list>
#include <Mathlib\vector3.h>
#include <map>
#include <xtree>
#include <Physics\PhysicsObject.h>
#include <Mathlib\quat.h>
#include <savegameimpl.h>
#include <profile\profile.h>
#include <iostream>
#include <savegamedef.h>
#include <Physics\PointMass.h>
#include <Physics\PointMassController.h>

/* ---------- constants */

/* ---------- definitions */

typedef std::_List_iterator<std::_List_val<std::_List_simple_types<PointMassController *> > > PointMassControllerListIterator;

/* ---------- prototypes */

/* ---------- globals */

extern char const PointMass::m_saveToken[0]; // 0x78B630
extern SaveData const PointMass::m_saveData[4]; // 0x78B5B0

/* ---------- private variables */

/* ---------- public code */

_extern _sub_475FFE(PointMass::BodyState *const);
_inline PointMass::BodyState::BodyState() // 0x475FFE
{
    mangled_assert("??0BodyState@PointMass@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_475FFE(this);
}

_extern bool _sub_4766CD(PointMass *const, SaveGameData *);
bool PointMass::restore(SaveGameData *) // 0x4766CD
{
    mangled_assert("?restore@PointMass@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_4766CD(this, arg);
    return __result;
}

_extern bool _sub_47671A(PointMass *const, SaveGameData *, SaveType);
bool PointMass::save(SaveGameData *, SaveType) // 0x47671A
{
    mangled_assert("?save@PointMass@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_47671A(this, arg, arg);
    return __result;
}

_extern _sub_4760B5(PointMass *const, bool);
PointMass::PointMass(bool) // 0x4760B5
{
    mangled_assert("??0PointMass@@QAE@_N@Z");
    todo("implement");
    _sub_4760B5(this, arg);
}

_extern void _sub_476112(std::_List_buy<PointMassController *,std::allocator<PointMassController *> > *const);
_inline std::_List_buy<PointMassController *,std::allocator<PointMassController *> >::~_List_buy<PointMassController *,std::allocator<PointMassController *> >() // 0x476112
{
    mangled_assert("??1?$_List_buy@PAVPointMassController@@V?$allocator@PAVPointMassController@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_476112(this);
}

_extern _sub_476001(PointMass *const, PointMass const &);
PointMass::PointMass(PointMass const &) // 0x476001
{
    mangled_assert("??0PointMass@@QAE@ABV0@@Z");
    todo("implement");
    _sub_476001(this, arg);
}

_extern _sub_476061(PointMass *const, SaveGameData *);
PointMass::PointMass(SaveGameData *) // 0x476061
{
    mangled_assert("??0PointMass@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_476061(this, arg);
}

_extern void _sub_47612D(PointMass *const);
PointMass::~PointMass() // 0x47612D
{
    mangled_assert("??1PointMass@@UAE@XZ");
    todo("implement");
    _sub_47612D(this);
}

_extern PointMass &_sub_4761A0(PointMass *const, PointMass const &);
_inline PointMass &PointMass::operator=(PointMass const &) // 0x4761A0
{
    mangled_assert("??4PointMass@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    PointMass & __result = _sub_4761A0(this, arg);
    return __result;
}

_extern void _sub_4764FF(PointMass *const);
void PointMass::defaultSettings() // 0x4764FF
{
    mangled_assert("?defaultSettings@PointMass@@QAEXXZ");
    todo("implement");
    _sub_4764FF(this);
}

_extern void _sub_47661A(PointMass *const);
void PointMass::postRestore() // 0x47661A
{
    mangled_assert("?postRestore@PointMass@@UAEXXZ");
    todo("implement");
    _sub_47661A(this);
}

_extern void _sub_476767(PointMass *const);
void PointMass::setDefaultBodyStates() // 0x476767
{
    mangled_assert("?setDefaultBodyStates@PointMass@@AAEXXZ");
    todo("implement");
    _sub_476767(this);
}

_extern void _sub_4768FA(PointMass *const);
void PointMass::swapBodyStates() // 0x4768FA
{
    mangled_assert("?swapBodyStates@PointMass@@AAEXXZ");
    todo("implement");
    _sub_4768FA(this);
}

_extern void _sub_4767E4(PointMass *const, float);
void PointMass::simulateTimeStep(float) // 0x4767E4
{
    mangled_assert("?simulateTimeStep@PointMass@@UAEXM@Z");
    todo("implement");
    _sub_4767E4(this, arg);
}

_extern void _sub_47681D(PointMass *const, float);
void PointMass::solveEuler(float) // 0x47681D
{
    mangled_assert("?solveEuler@PointMass@@AAEXM@Z");
    todo("implement");
    _sub_47681D(this, arg);
}

_extern void _sub_476419(PointMass *const, float);
void PointMass::applyForces(float) // 0x476419
{
    mangled_assert("?applyForces@PointMass@@AAEXM@Z");
    todo("implement");
    _sub_476419(this, arg);
}

_extern void _sub_4767BF(PointMass *const, vector3 const &);
void PointMass::setPosition(vector3 const &) // 0x4767BF
{
    mangled_assert("?setPosition@PointMass@@QAEXABVvector3@@@Z");
    todo("implement");
    _sub_4767BF(this, arg);
}

_extern vector3 const &_sub_4765F2(PointMass const *const);
vector3 const &PointMass::getPosition() const // 0x4765F2
{
    mangled_assert("?getPosition@PointMass@@QBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_4765F2(this);
    return __result;
}

_extern void _sub_476397(PointMass *const, vector3 const &);
void PointMass::addForce(vector3 const &) // 0x476397
{
    mangled_assert("?addForce@PointMass@@QAEXABVvector3@@@Z");
    todo("implement");
    _sub_476397(this, arg);
}

_extern void _sub_4767A9(PointMass *const, float);
void PointMass::setMass(float) // 0x4767A9
{
    mangled_assert("?setMass@PointMass@@QAEXM@Z");
    todo("implement");
    _sub_4767A9(this, arg);
}

_extern float _sub_4765CC(PointMass const *const);
float PointMass::getMass() const // 0x4765CC
{
    mangled_assert("?getMass@PointMass@@QBEMXZ");
    todo("implement");
    float __result = _sub_4765CC(this);
    return __result;
}

_extern vector3 const &_sub_4765F6(PointMass const *const);
vector3 const &PointMass::getVelocity() const // 0x4765F6
{
    mangled_assert("?getVelocity@PointMass@@QBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_4765F6(this);
    return __result;
}

_extern void _sub_4767D0(PointMass *const, vector3 const &);
void PointMass::setVelocity(vector3 const &) // 0x4767D0
{
    mangled_assert("?setVelocity@PointMass@@QAEXABVvector3@@@Z");
    todo("implement");
    _sub_4767D0(this, arg);
}

_extern void _sub_476374(PointMass *const, PointMassController *);
void PointMass::addController(PointMassController *) // 0x476374
{
    mangled_assert("?addController@PointMass@@QAEXPAVPointMassController@@@Z");
    todo("implement");
    _sub_476374(this, arg);
}

_extern void _sub_4766B2(PointMass *const, PointMassController *);
void PointMass::removeController(PointMassController *) // 0x4766B2
{
    mangled_assert("?removeController@PointMass@@QAEXPAVPointMassController@@@Z");
    todo("implement");
    _sub_4766B2(this, arg);
}

_extern void _sub_476689(PointMass *const);
void PointMass::removeAllControllers() // 0x476689
{
    mangled_assert("?removeAllControllers@PointMass@@QAEXXZ");
    todo("implement");
    _sub_476689(this);
}

_extern vector3 const &_sub_4765E7(PointMass const *const);
vector3 const &PointMass::getOldPosition() const // 0x4765E7
{
    mangled_assert("?getOldPosition@PointMass@@QBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_4765E7(this);
    return __result;
}

_extern vector3 const &_sub_4765EB(PointMass const *const);
vector3 const &PointMass::getOldVelocity() const // 0x4765EB
{
    mangled_assert("?getOldVelocity@PointMass@@QBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_4765EB(this);
    return __result;
}

/* ---------- private code */
#endif
