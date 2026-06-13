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

_extern bool _sub_47697B(PointMassController *const, SaveGameData *);
bool PointMassController::restore(SaveGameData *) // 0x47697B
{
    mangled_assert("?restore@PointMassController@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_47697B(this, arg);
    return __result;
}

_extern bool _sub_4769B9(PointMassController *const, SaveGameData *, SaveType);
bool PointMassController::save(SaveGameData *, SaveType) // 0x4769B9
{
    mangled_assert("?save@PointMassController@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_4769B9(this, arg, arg);
    return __result;
}

_extern _sub_47692C(PointMassController *const);
PointMassController::PointMassController() // 0x47692C
{
    mangled_assert("??0PointMassController@@QAE@XZ");
    todo("implement");
    _sub_47692C(this);
}

_extern void _sub_476944(PointMassController *const);
_inline PointMassController::~PointMassController() // 0x476944
{
    mangled_assert("??1PointMassController@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_476944(this);
}

_extern _sub_476912(PointMassController *const, SaveGameData *);
PointMassController::PointMassController(SaveGameData *) // 0x476912
{
    mangled_assert("??0PointMassController@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_476912(this, arg);
}

_extern void _sub_476965(PointMassController *const);
void PointMassController::defaultSettings() // 0x476965
{
    mangled_assert("?defaultSettings@PointMassController@@QAEXXZ");
    todo("implement");
    _sub_476965(this);
}

_extern void _sub_47697A(PointMassController *const);
void PointMassController::postRestore() // 0x47697A
{
    mangled_assert("?postRestore@PointMassController@@UAEXXZ");
    todo("implement");
    _sub_47697A(this);
}

_extern void _sub_4769F4(PointMassController *const, PointMass *);
void PointMassController::setPointMass(PointMass *) // 0x4769F4
{
    mangled_assert("?setPointMass@PointMassController@@QAEXPAVPointMass@@@Z");
    todo("implement");
    _sub_4769F4(this, arg);
}

_extern PointMass *_sub_47696A(PointMassController *const);
PointMass *PointMassController::getPointMass() // 0x47696A
{
    mangled_assert("?getPointMass@PointMassController@@QAEPAVPointMass@@XZ");
    todo("implement");
    PointMass * __result = _sub_47696A(this);
    return __result;
}

_extern bool _sub_47696E(PointMassController *const);
bool PointMassController::isControllingPointMass() // 0x47696E
{
    mangled_assert("?isControllingPointMass@PointMassController@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_47696E(this);
    return __result;
}

/* ---------- private code */
#endif
