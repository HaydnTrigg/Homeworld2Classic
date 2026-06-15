#if 0
/* ---------- headers */

#include "decomp.h"
#include <pch.h>
#include <savegameimpl.h>
#include <savegamedef.h>
#include <Physics\PointMassController.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern SaveData const PointMassController::m_saveData[1]; // 0x78B680
extern char const PointMassController::m_saveToken[20]; // 0x78B6A0

/* ---------- private variables */

/* ---------- public code */

bool PointMassController::restore(SaveGameData *) // 0x47697B
{
    mangled_assert("?restore@PointMassController@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool PointMassController::save(SaveGameData *, SaveType) // 0x4769B9
{
    mangled_assert("?save@PointMassController@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

PointMassController::PointMassController() // 0x47692C
{
    mangled_assert("??0PointMassController@@QAE@XZ");
    todo("implement");
}

_inline PointMassController::~PointMassController() // 0x476944
{
    mangled_assert("??1PointMassController@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

PointMassController::PointMassController(SaveGameData *) // 0x476912
{
    mangled_assert("??0PointMassController@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

void PointMassController::defaultSettings() // 0x476965
{
    mangled_assert("?defaultSettings@PointMassController@@QAEXXZ");
    todo("implement");
}

void PointMassController::postRestore() // 0x47697A
{
    mangled_assert("?postRestore@PointMassController@@UAEXXZ");
    todo("implement");
}

void PointMassController::setPointMass(PointMass *) // 0x4769F4
{
    mangled_assert("?setPointMass@PointMassController@@QAEXPAVPointMass@@@Z");
    todo("implement");
}

PointMass *PointMassController::getPointMass() // 0x47696A
{
    mangled_assert("?getPointMass@PointMassController@@QAEPAVPointMass@@XZ");
    todo("implement");
}

bool PointMassController::isControllingPointMass() // 0x47696E
{
    mangled_assert("?isControllingPointMass@PointMassController@@QAE_NXZ");
    todo("implement");
}

/* ---------- private code */
#endif
