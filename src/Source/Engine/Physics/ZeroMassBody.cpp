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

_inline ZeroMassBody::BodyState::BodyState() // 0x476A44
{
    mangled_assert("??0BodyState@ZeroMassBody@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

void *ZeroMassBody::operator new(unsigned __int32 size) // 0x476B55
{
    mangled_assert("??2ZeroMassBody@@SGPAXI@Z");
    todo("implement");
}

void ZeroMassBody::operator delete(void *p, unsigned __int32 size) // 0x476B62
{
    mangled_assert("??3ZeroMassBody@@SGXPAXI@Z");
    todo("implement");
}

_inline ZeroMassBody &ZeroMassBody::operator=(ZeroMassBody const &) // 0x476B83
{
    mangled_assert("??4ZeroMassBody@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

bool ZeroMassBody::restore(SaveGameData *) // 0x476E5D
{
    mangled_assert("?restore@ZeroMassBody@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool ZeroMassBody::save(SaveGameData *, SaveType) // 0x476EAA
{
    mangled_assert("?save@ZeroMassBody@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

ZeroMassBody::ZeroMassBody(bool) // 0x476AB6
{
    mangled_assert("??0ZeroMassBody@@QAE@_N@Z");
    todo("implement");
}

ZeroMassBody::ZeroMassBody(ZeroMassBody const &) // 0x476A47
{
    mangled_assert("??0ZeroMassBody@@QAE@ABV0@@Z");
    todo("implement");
}

ZeroMassBody::ZeroMassBody(SaveGameData *) // 0x476A97
{
    mangled_assert("??0ZeroMassBody@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

ZeroMassBody::~ZeroMassBody() // 0x476B4A
{
    mangled_assert("??1ZeroMassBody@@UAE@XZ");
    todo("implement");
}

void ZeroMassBody::defaultSettings() // 0x476CF4
{
    mangled_assert("?defaultSettings@ZeroMassBody@@QAEXXZ");
    todo("implement");
}

void ZeroMassBody::postRestore() // 0x476D1C
{
    mangled_assert("?postRestore@ZeroMassBody@@UAEXXZ");
    todo("implement");
}

void ZeroMassBody::setDefaultBodyStates() // 0x476F1E
{
    mangled_assert("?setDefaultBodyStates@ZeroMassBody@@AAEXXZ");
    todo("implement");
}

void ZeroMassBody::swapBodyStates() // 0x47721D
{
    mangled_assert("?swapBodyStates@ZeroMassBody@@AAEXXZ");
    todo("implement");
}

void ZeroMassBody::simulateTimeStep(float) // 0x477039
{
    mangled_assert("?simulateTimeStep@ZeroMassBody@@UAEXM@Z");
    todo("implement");
}

void ZeroMassBody::solveEuler(float) // 0x477066
{
    mangled_assert("?solveEuler@ZeroMassBody@@AAEXM@Z");
    todo("implement");
}

void ZeroMassBody::setPosition(vector3 const &) // 0x476FF1
{
    mangled_assert("?setPosition@ZeroMassBody@@QAEXABVvector3@@@Z");
    todo("implement");
}

void ZeroMassBody::setOrientation(quat const &) // 0x476FC8
{
    mangled_assert("?setOrientation@ZeroMassBody@@QAEXABVquat@@@Z");
    todo("implement");
}

void ZeroMassBody::setOrientation(matrix3 const &) // 0x476F8B
{
    mangled_assert("?setOrientation@ZeroMassBody@@QAEXABVmatrix3@@@Z");
    todo("implement");
}

void ZeroMassBody::setVelocity(vector3 const &) // 0x477012
{
    mangled_assert("?setVelocity@ZeroMassBody@@QAEXABVvector3@@@Z");
    todo("implement");
}

void ZeroMassBody::setAngularVelocity(vector3 const &) // 0x476EF7
{
    mangled_assert("?setAngularVelocity@ZeroMassBody@@QAEXABVvector3@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
