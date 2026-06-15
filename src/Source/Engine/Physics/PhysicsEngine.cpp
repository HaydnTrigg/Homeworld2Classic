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

void PhysicsEngine::AddMissingSaveObjects() // 0x4734A7
{
    mangled_assert("?AddMissingSaveObjects@PhysicsEngine@@QAEXXZ");
    todo("implement");
}

bool PhysicsEngine::restore(SaveGameData *) // 0x473843
{
    mangled_assert("?restore@PhysicsEngine@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool PhysicsEngine::save(SaveGameData *, SaveType) // 0x47388D
{
    mangled_assert("?save@PhysicsEngine@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

PhysicsEngine::PhysicsEngine() // 0x4733BD
{
    mangled_assert("??0PhysicsEngine@@AAE@XZ");
    todo("implement");
}

_inline PhysicsEngine::~PhysicsEngine() // 0x4733E8
{
    mangled_assert("??1PhysicsEngine@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

void PhysicsEngine::postRestore() // 0x473746
{
    mangled_assert("?postRestore@PhysicsEngine@@UAEXXZ");
    todo("implement");
}

void PhysicsEngine::solve(float) // 0x4738E2
{
    mangled_assert("?solve@PhysicsEngine@@QAEXM@Z");
    todo("implement");
}

void PhysicsEngine::addPhysicsObject(PhysicsObject *) // 0x473602
{
    mangled_assert("?addPhysicsObject@PhysicsEngine@@QAEXPAVPhysicsObject@@@Z");
    todo("implement");
}

void PhysicsEngine::removePhysicsObject(PhysicsObject *) // 0x4737B3
{
    mangled_assert("?removePhysicsObject@PhysicsEngine@@QAEXPAVPhysicsObject@@@Z");
    todo("implement");
}

PhysicsEngine *PhysicsEngine::create() // 0x47367F
{
    mangled_assert("?create@PhysicsEngine@@CGPAV1@XZ");
    todo("implement");
}

bool PhysicsEngine::release() // 0x473799
{
    mangled_assert("?release@PhysicsEngine@@SG_NXZ");
    todo("implement");
}

PhysicsEngine *PhysicsEngine::instance() // 0x473707
{
    mangled_assert("?instance@PhysicsEngine@@SGPAV1@XZ");
    todo("implement");
}

PhysicsEngine *PhysicsEngine::i() // 0x473702
{
    mangled_assert("?i@PhysicsEngine@@SGPAV1@XZ");
    todo("implement");
}

__int32 PhysicsEngine::getNumberOfObjects() const // 0x4736CA
{
    mangled_assert("?getNumberOfObjects@PhysicsEngine@@QBEHXZ");
    todo("implement");
}

void PhysicsEngine::getStats(char *) // 0x4736EE
{
    mangled_assert("?getStats@PhysicsEngine@@QAEXPAD@Z");
    todo("implement");
}

bool PhysicsEngine::startup() // 0x47395D
{
    mangled_assert("?startup@PhysicsEngine@@SG_NXZ");
    todo("implement");
}

bool PhysicsEngine::shutdown() // 0x4738D4
{
    mangled_assert("?shutdown@PhysicsEngine@@SG_NXZ");
    todo("implement");
}

bool PhysicsEngine::saveStatics(SaveGameData *saveGameData, SaveType saveType) // 0x4738C2
{
    mangled_assert("?saveStatics@PhysicsEngine@@SG_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

bool PhysicsEngine::restoreStatics(SaveGameData *saveGameData) // 0x473881
{
    mangled_assert("?restoreStatics@PhysicsEngine@@SG_NPAVSaveGameData@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
