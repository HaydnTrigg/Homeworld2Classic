#if 0
/* ---------- headers */

#include "decomp.h"
#include <profile\profile.h>
#include <iostream>
#include <xmemory0>
#include <pch.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <vector>
#include <xmemory>
#include <list>
#include <map>
#include <xtree>
#include <savegameimpl.h>
#include <savegamedef.h>
#include <Physics\PhysicsEngine.h>
#include <Physics\PhysicsObject.h>

/* ---------- constants */

/* ---------- definitions */

typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<PhysicsObject *> > > PhysicsObjectVectorIterator;

/* ---------- prototypes */

/* ---------- globals */

extern SaveData const PhysicsEngine::m_saveData[2]; // 0x78B260
extern char const PhysicsEngine::m_saveToken[14]; // 0x78B2A0
extern PhysicsEngine *PhysicsEngine::s_instance; // 0x843B40

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_4734A7(PhysicsEngine *const);
void PhysicsEngine::AddMissingSaveObjects() // 0x4734A7
{
    mangled_assert("?AddMissingSaveObjects@PhysicsEngine@@QAEXXZ");
    todo("implement");
    _sub_4734A7(this);
}

_extern bool _sub_473843(PhysicsEngine *const, SaveGameData *);
bool PhysicsEngine::restore(SaveGameData *) // 0x473843
{
    mangled_assert("?restore@PhysicsEngine@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_473843(this, arg);
    return __result;
}

_extern bool _sub_47388D(PhysicsEngine *const, SaveGameData *, SaveType);
bool PhysicsEngine::save(SaveGameData *, SaveType) // 0x47388D
{
    mangled_assert("?save@PhysicsEngine@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_47388D(this, arg, arg);
    return __result;
}

_extern _sub_4733BD(PhysicsEngine *const);
PhysicsEngine::PhysicsEngine() // 0x4733BD
{
    mangled_assert("??0PhysicsEngine@@AAE@XZ");
    todo("implement");
    _sub_4733BD(this);
}

_extern void _sub_4733E8(PhysicsEngine *const);
_inline PhysicsEngine::~PhysicsEngine() // 0x4733E8
{
    mangled_assert("??1PhysicsEngine@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4733E8(this);
}

_extern void _sub_473746(PhysicsEngine *const);
void PhysicsEngine::postRestore() // 0x473746
{
    mangled_assert("?postRestore@PhysicsEngine@@UAEXXZ");
    todo("implement");
    _sub_473746(this);
}

_extern void _sub_4738E2(PhysicsEngine *const, float);
void PhysicsEngine::solve(float) // 0x4738E2
{
    mangled_assert("?solve@PhysicsEngine@@QAEXM@Z");
    todo("implement");
    _sub_4738E2(this, arg);
}

_extern void _sub_473602(PhysicsEngine *const, PhysicsObject *);
void PhysicsEngine::addPhysicsObject(PhysicsObject *) // 0x473602
{
    mangled_assert("?addPhysicsObject@PhysicsEngine@@QAEXPAVPhysicsObject@@@Z");
    todo("implement");
    _sub_473602(this, arg);
}

_extern void _sub_4737B3(PhysicsEngine *const, PhysicsObject *);
void PhysicsEngine::removePhysicsObject(PhysicsObject *) // 0x4737B3
{
    mangled_assert("?removePhysicsObject@PhysicsEngine@@QAEXPAVPhysicsObject@@@Z");
    todo("implement");
    _sub_4737B3(this, arg);
}

_extern PhysicsEngine *_sub_47367F();
PhysicsEngine *PhysicsEngine::create() // 0x47367F
{
    mangled_assert("?create@PhysicsEngine@@CGPAV1@XZ");
    todo("implement");
    PhysicsEngine * __result = _sub_47367F();
    return __result;
}

_extern bool _sub_473799();
bool PhysicsEngine::release() // 0x473799
{
    mangled_assert("?release@PhysicsEngine@@SG_NXZ");
    todo("implement");
    bool __result = _sub_473799();
    return __result;
}

_extern PhysicsEngine *_sub_473707();
PhysicsEngine *PhysicsEngine::instance() // 0x473707
{
    mangled_assert("?instance@PhysicsEngine@@SGPAV1@XZ");
    todo("implement");
    PhysicsEngine * __result = _sub_473707();
    return __result;
}

_extern PhysicsEngine *_sub_473702();
PhysicsEngine *PhysicsEngine::i() // 0x473702
{
    mangled_assert("?i@PhysicsEngine@@SGPAV1@XZ");
    todo("implement");
    PhysicsEngine * __result = _sub_473702();
    return __result;
}

_extern __int32 _sub_4736CA(PhysicsEngine const *const);
__int32 PhysicsEngine::getNumberOfObjects() const // 0x4736CA
{
    mangled_assert("?getNumberOfObjects@PhysicsEngine@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_4736CA(this);
    return __result;
}

_extern void _sub_4736EE(PhysicsEngine *const, char *);
void PhysicsEngine::getStats(char *) // 0x4736EE
{
    mangled_assert("?getStats@PhysicsEngine@@QAEXPAD@Z");
    todo("implement");
    _sub_4736EE(this, arg);
}

_extern bool _sub_47395D();
bool PhysicsEngine::startup() // 0x47395D
{
    mangled_assert("?startup@PhysicsEngine@@SG_NXZ");
    todo("implement");
    bool __result = _sub_47395D();
    return __result;
}

_extern bool _sub_4738D4();
bool PhysicsEngine::shutdown() // 0x4738D4
{
    mangled_assert("?shutdown@PhysicsEngine@@SG_NXZ");
    todo("implement");
    bool __result = _sub_4738D4();
    return __result;
}

_extern bool _sub_4738C2(SaveGameData *, SaveType);
bool PhysicsEngine::saveStatics(SaveGameData *saveGameData, SaveType saveType) // 0x4738C2
{
    mangled_assert("?saveStatics@PhysicsEngine@@SG_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_4738C2(saveGameData, saveType);
    return __result;
}

_extern bool _sub_473881(SaveGameData *);
bool PhysicsEngine::restoreStatics(SaveGameData *saveGameData) // 0x473881
{
    mangled_assert("?restoreStatics@PhysicsEngine@@SG_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_473881(saveGameData);
    return __result;
}

/* ---------- private code */
#endif
