#if 0
/* ---------- headers */

#include "decomp.h"
#include <xmemory0>
#include <pch.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <fileio\bytestream.h>
#include <list>
#include <Mathlib\vector3.h>
#include <map>
#include <xtree>
#include <Mathlib\vector2.h>
#include <ITweak.h>
#include <savegameimpl.h>
#include <Tactics.h>
#include <util\colour.h>
#include <savegamedef.h>
#include <profile\profile.h>
#include <iostream>
#include <MultiplierContainer.h>
#include <savestream.h>
#include <MultiplierTypes.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern SaveData const MultiplierContainer::m_saveData[1]; // 0x7992B4
extern char const MultiplierContainer::m_saveToken[20]; // 0x7992D4
extern std::list<MultiplierContainer *,std::allocator<MultiplierContainer *> > MultiplierContainer::m_multiplierContainerList; // 0x8440F0

/* ---------- private variables */

/* ---------- public code */

void MultiplierContainer::cleanTemporaryMultipliers() // 0x4F1FFD
{
    mangled_assert("?cleanTemporaryMultipliers@MultiplierContainer@@QAEXXZ");
    todo("implement");
}

MultiplierContainer::MultiplierContainer() // 0x4F1D6A
{
    mangled_assert("??0MultiplierContainer@@QAE@XZ");
    todo("implement");
}

_inline std::_List_buy<MultiplierContainer *,std::allocator<MultiplierContainer *> >::~_List_buy<MultiplierContainer *,std::allocator<MultiplierContainer *> >() // 0x4F1DE9
{
    mangled_assert("??1?$_List_buy@PAVMultiplierContainer@@V?$allocator@PAVMultiplierContainer@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

MultiplierContainer::~MultiplierContainer() // 0x4F1E04
{
    mangled_assert("??1MultiplierContainer@@UAE@XZ");
    todo("implement");
}

void MultiplierContainer::cleanAllTemporaryMultipliers() // 0x4F1FDD
{
    mangled_assert("?cleanAllTemporaryMultipliers@MultiplierContainer@@SGXXZ");
    todo("implement");
}

void MultiplierContainer::addTemporaryMultiplier(MultiplierType, float) // 0x4F1F70
{
    mangled_assert("?addTemporaryMultiplier@MultiplierContainer@@QAEXW4MultiplierType@@M@Z");
    todo("implement");
}

void MultiplierContainer::postRestore() // 0x4F20B3
{
    mangled_assert("?postRestore@MultiplierContainer@@UAEXXZ");
    todo("implement");
}

bool MultiplierContainer::restore(SaveGameData *) // 0x4F20C2
{
    mangled_assert("?restore@MultiplierContainer@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool MultiplierContainer::save(SaveGameData *, SaveType) // 0x4F2100
{
    mangled_assert("?save@MultiplierContainer@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
