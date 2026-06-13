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

_extern bool _sub_4772AD(ZeroMassBodyController *const, SaveGameData *);
bool ZeroMassBodyController::restore(SaveGameData *) // 0x4772AD
{
    mangled_assert("?restore@ZeroMassBodyController@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_4772AD(this, arg);
    return __result;
}

_extern bool _sub_4772EB(ZeroMassBodyController *const, SaveGameData *, SaveType);
bool ZeroMassBodyController::save(SaveGameData *, SaveType) // 0x4772EB
{
    mangled_assert("?save@ZeroMassBodyController@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_4772EB(this, arg, arg);
    return __result;
}

_extern _sub_47725E(ZeroMassBodyController *const);
ZeroMassBodyController::ZeroMassBodyController() // 0x47725E
{
    mangled_assert("??0ZeroMassBodyController@@QAE@XZ");
    todo("implement");
    _sub_47725E(this);
}

_extern void _sub_477276(ZeroMassBodyController *const);
_inline ZeroMassBodyController::~ZeroMassBodyController() // 0x477276
{
    mangled_assert("??1ZeroMassBodyController@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_477276(this);
}

_extern _sub_477244(ZeroMassBodyController *const, SaveGameData *);
ZeroMassBodyController::ZeroMassBodyController(SaveGameData *) // 0x477244
{
    mangled_assert("??0ZeroMassBodyController@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_477244(this, arg);
}

_extern void _sub_477297(ZeroMassBodyController *const);
void ZeroMassBodyController::defaultSettings() // 0x477297
{
    mangled_assert("?defaultSettings@ZeroMassBodyController@@QAEXXZ");
    todo("implement");
    _sub_477297(this);
}

_extern void _sub_4772AC(ZeroMassBodyController *const);
void ZeroMassBodyController::postRestore() // 0x4772AC
{
    mangled_assert("?postRestore@ZeroMassBodyController@@UAEXXZ");
    todo("implement");
    _sub_4772AC(this);
}

_extern void _sub_477326(ZeroMassBodyController *const, ZeroMassBody *);
void ZeroMassBodyController::setZeroMassBody(ZeroMassBody *) // 0x477326
{
    mangled_assert("?setZeroMassBody@ZeroMassBodyController@@QAEXPAVZeroMassBody@@@Z");
    todo("implement");
    _sub_477326(this, arg);
}

_extern ZeroMassBody *_sub_47729C(ZeroMassBodyController *const);
ZeroMassBody *ZeroMassBodyController::getZeroMassBody() // 0x47729C
{
    mangled_assert("?getZeroMassBody@ZeroMassBodyController@@QAEPAVZeroMassBody@@XZ");
    todo("implement");
    ZeroMassBody * __result = _sub_47729C(this);
    return __result;
}

_extern bool _sub_4772A0(ZeroMassBodyController *const);
bool ZeroMassBodyController::isControllingZeroMassBody() // 0x4772A0
{
    mangled_assert("?isControllingZeroMassBody@ZeroMassBodyController@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_4772A0(this);
    return __result;
}

/* ---------- private code */
#endif
