#if 0
/* ---------- headers */

#include "decomp.h"
#include <pch.h>
#include <savegameimpl.h>
#include <savegamedef.h>
#include <Physics\ZeroMassBodyController.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern SaveData const ZeroMassBodyController::m_saveData[1]; // 0x78B780
extern char const ZeroMassBodyController::m_saveToken[23]; // 0x78B7A0

/* ---------- private variables */

/* ---------- public code */

bool ZeroMassBodyController::restore(SaveGameData *) // 0x4772AD
{
    mangled_assert("?restore@ZeroMassBodyController@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool ZeroMassBodyController::save(SaveGameData *, SaveType) // 0x4772EB
{
    mangled_assert("?save@ZeroMassBodyController@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

ZeroMassBodyController::ZeroMassBodyController() // 0x47725E
{
    mangled_assert("??0ZeroMassBodyController@@QAE@XZ");
    todo("implement");
}

_inline ZeroMassBodyController::~ZeroMassBodyController() // 0x477276
{
    mangled_assert("??1ZeroMassBodyController@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

ZeroMassBodyController::ZeroMassBodyController(SaveGameData *) // 0x477244
{
    mangled_assert("??0ZeroMassBodyController@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

void ZeroMassBodyController::defaultSettings() // 0x477297
{
    mangled_assert("?defaultSettings@ZeroMassBodyController@@QAEXXZ");
    todo("implement");
}

void ZeroMassBodyController::postRestore() // 0x4772AC
{
    mangled_assert("?postRestore@ZeroMassBodyController@@UAEXXZ");
    todo("implement");
}

void ZeroMassBodyController::setZeroMassBody(ZeroMassBody *) // 0x477326
{
    mangled_assert("?setZeroMassBody@ZeroMassBodyController@@QAEXPAVZeroMassBody@@@Z");
    todo("implement");
}

ZeroMassBody *ZeroMassBodyController::getZeroMassBody() // 0x47729C
{
    mangled_assert("?getZeroMassBody@ZeroMassBodyController@@QAEPAVZeroMassBody@@XZ");
    todo("implement");
}

bool ZeroMassBodyController::isControllingZeroMassBody() // 0x4772A0
{
    mangled_assert("?isControllingZeroMassBody@ZeroMassBodyController@@QAE_NXZ");
    todo("implement");
}

/* ---------- private code */
#endif
