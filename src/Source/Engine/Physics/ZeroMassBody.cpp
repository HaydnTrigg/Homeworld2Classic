#if 0
/* ---------- headers */

#include "decomp.h"
#include <xmemory0>
#include <pch.h>
#include <memory\memorylib.h>
#include <crtdefs.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <vector>
#include <xmemory>
#include <math.h>
#include <list>
#include <Mathlib\vector3.h>
#include <map>
#include <xtree>
#include <Physics\PhysicsObject.h>
#include <boost\config.hpp>
#include <memory\mmfixedpool.h>
#include <boost\static_assert.hpp>
#include <assert.h>
#include <Mathlib\quat.h>
#include <savegameimpl.h>
#include <savegamedef.h>
#include <Physics\ZeroMassBody.h>
#include <profile\profile.h>
#include <Physics\ZeroMassBodyController.h>
#include <iostream>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const ZeroMassBody::m_saveToken[0]; // 0x78B728
extern SaveData const ZeroMassBody::m_saveData[2]; // 0x78B6E8

/* ---------- private variables */

_static
{
    extern FixedSizeObjAllocator<ZeroMassBody,1000> s_ZeroMassBodyAllocator; // 0x843B44
}

/* ---------- public code */

_extern _sub_476A44(ZeroMassBody::BodyState *const);
_inline ZeroMassBody::BodyState::BodyState() // 0x476A44
{
    mangled_assert("??0BodyState@ZeroMassBody@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_476A44(this);
}

_extern void *_sub_476B55(unsigned __int32);
void *ZeroMassBody::operator new(unsigned __int32 size) // 0x476B55
{
    mangled_assert("??2ZeroMassBody@@SGPAXI@Z");
    todo("implement");
    void * __result = _sub_476B55(size);
    return __result;
}

_extern void _sub_476B62(void *, unsigned __int32);
void ZeroMassBody::operator delete(void *p, unsigned __int32 size) // 0x476B62
{
    mangled_assert("??3ZeroMassBody@@SGXPAXI@Z");
    todo("implement");
    _sub_476B62(p, size);
}

_extern ZeroMassBody &_sub_476B83(ZeroMassBody *const, ZeroMassBody const &);
_inline ZeroMassBody &ZeroMassBody::operator=(ZeroMassBody const &) // 0x476B83
{
    mangled_assert("??4ZeroMassBody@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    ZeroMassBody & __result = _sub_476B83(this, arg);
    return __result;
}

_extern bool _sub_476E5D(ZeroMassBody *const, SaveGameData *);
bool ZeroMassBody::restore(SaveGameData *) // 0x476E5D
{
    mangled_assert("?restore@ZeroMassBody@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_476E5D(this, arg);
    return __result;
}

_extern bool _sub_476EAA(ZeroMassBody *const, SaveGameData *, SaveType);
bool ZeroMassBody::save(SaveGameData *, SaveType) // 0x476EAA
{
    mangled_assert("?save@ZeroMassBody@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_476EAA(this, arg, arg);
    return __result;
}

_extern _sub_476AB6(ZeroMassBody *const, bool);
ZeroMassBody::ZeroMassBody(bool) // 0x476AB6
{
    mangled_assert("??0ZeroMassBody@@QAE@_N@Z");
    todo("implement");
    _sub_476AB6(this, arg);
}

_extern _sub_476A47(ZeroMassBody *const, ZeroMassBody const &);
ZeroMassBody::ZeroMassBody(ZeroMassBody const &) // 0x476A47
{
    mangled_assert("??0ZeroMassBody@@QAE@ABV0@@Z");
    todo("implement");
    _sub_476A47(this, arg);
}

_extern _sub_476A97(ZeroMassBody *const, SaveGameData *);
ZeroMassBody::ZeroMassBody(SaveGameData *) // 0x476A97
{
    mangled_assert("??0ZeroMassBody@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_476A97(this, arg);
}

_extern void _sub_476B4A(ZeroMassBody *const);
ZeroMassBody::~ZeroMassBody() // 0x476B4A
{
    mangled_assert("??1ZeroMassBody@@UAE@XZ");
    todo("implement");
    _sub_476B4A(this);
}

_extern void _sub_476CF4(ZeroMassBody *const);
void ZeroMassBody::defaultSettings() // 0x476CF4
{
    mangled_assert("?defaultSettings@ZeroMassBody@@QAEXXZ");
    todo("implement");
    _sub_476CF4(this);
}

_extern void _sub_476D1C(ZeroMassBody *const);
void ZeroMassBody::postRestore() // 0x476D1C
{
    mangled_assert("?postRestore@ZeroMassBody@@UAEXXZ");
    todo("implement");
    _sub_476D1C(this);
}

_extern void _sub_476F1E(ZeroMassBody *const);
void ZeroMassBody::setDefaultBodyStates() // 0x476F1E
{
    mangled_assert("?setDefaultBodyStates@ZeroMassBody@@AAEXXZ");
    todo("implement");
    _sub_476F1E(this);
}

_extern void _sub_47721D(ZeroMassBody *const);
void ZeroMassBody::swapBodyStates() // 0x47721D
{
    mangled_assert("?swapBodyStates@ZeroMassBody@@AAEXXZ");
    todo("implement");
    _sub_47721D(this);
}

_extern void _sub_477039(ZeroMassBody *const, float);
void ZeroMassBody::simulateTimeStep(float) // 0x477039
{
    mangled_assert("?simulateTimeStep@ZeroMassBody@@UAEXM@Z");
    todo("implement");
    _sub_477039(this, arg);
}

_extern void _sub_477066(ZeroMassBody *const, float);
void ZeroMassBody::solveEuler(float) // 0x477066
{
    mangled_assert("?solveEuler@ZeroMassBody@@AAEXM@Z");
    todo("implement");
    _sub_477066(this, arg);
}

_extern void _sub_476FF1(ZeroMassBody *const, vector3 const &);
void ZeroMassBody::setPosition(vector3 const &) // 0x476FF1
{
    mangled_assert("?setPosition@ZeroMassBody@@QAEXABVvector3@@@Z");
    todo("implement");
    _sub_476FF1(this, arg);
}

_extern void _sub_476FC8(ZeroMassBody *const, quat const &);
void ZeroMassBody::setOrientation(quat const &) // 0x476FC8
{
    mangled_assert("?setOrientation@ZeroMassBody@@QAEXABVquat@@@Z");
    todo("implement");
    _sub_476FC8(this, arg);
}

_extern void _sub_476F8B(ZeroMassBody *const, matrix3 const &);
void ZeroMassBody::setOrientation(matrix3 const &) // 0x476F8B
{
    mangled_assert("?setOrientation@ZeroMassBody@@QAEXABVmatrix3@@@Z");
    todo("implement");
    _sub_476F8B(this, arg);
}

_extern void _sub_477012(ZeroMassBody *const, vector3 const &);
void ZeroMassBody::setVelocity(vector3 const &) // 0x477012
{
    mangled_assert("?setVelocity@ZeroMassBody@@QAEXABVvector3@@@Z");
    todo("implement");
    _sub_477012(this, arg);
}

_extern void _sub_476EF7(ZeroMassBody *const, vector3 const &);
void ZeroMassBody::setAngularVelocity(vector3 const &) // 0x476EF7
{
    mangled_assert("?setAngularVelocity@ZeroMassBody@@QAEXABVvector3@@@Z");
    todo("implement");
    _sub_476EF7(this, arg);
}

/* ---------- private code */
#endif
