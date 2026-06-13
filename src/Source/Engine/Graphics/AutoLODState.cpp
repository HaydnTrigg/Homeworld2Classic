#if 0
/* ---------- headers */

#include "decomp.h"
#include <pch.h>
#include <xutility>
#include <Graphics\AutoLODState.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_56AEDC(AutoLODState *const);
AutoLODState::AutoLODState() // 0x56AEDC
{
    mangled_assert("??0AutoLODState@@QAE@XZ");
    todo("implement");
    _sub_56AEDC(this);
}

_extern void _sub_56AF14(AutoLODState *const);
AutoLODState::~AutoLODState() // 0x56AF14
{
    mangled_assert("??1AutoLODState@@QAE@XZ");
    todo("implement");
    _sub_56AF14(this);
}

_extern void _sub_56B030(AutoLODState *const, float);
void AutoLODState::SetDesiredFPS(float) // 0x56B030
{
    mangled_assert("?SetDesiredFPS@AutoLODState@@QAEXM@Z");
    todo("implement");
    _sub_56B030(this, arg);
}

_extern void _sub_56AF54(AutoLODState *const, char *, unsigned __int32);
void AutoLODState::GetDebugString(char *, unsigned __int32) // 0x56AF54
{
    mangled_assert("?GetDebugString@AutoLODState@@QAEXPADI@Z");
    todo("implement");
    _sub_56AF54(this, arg, arg);
}

_extern AutoLODState::Action _sub_56B099(AutoLODState *const, float);
AutoLODState::Action AutoLODState::Update(float) // 0x56B099
{
    mangled_assert("?Update@AutoLODState@@QAE?AW4Action@1@M@Z");
    todo("implement");
    AutoLODState::Action __result = _sub_56B099(this, arg);
    return __result;
}

_extern void _sub_56AF39(AutoLODState *const);
void AutoLODState::ClearAccum() // 0x56AF39
{
    mangled_assert("?ClearAccum@AutoLODState@@AAEXXZ");
    todo("implement");
    _sub_56AF39(this);
}

_extern AutoLODState::State _sub_56B002(AutoLODState *const, AutoLODState::Zone);
AutoLODState::State AutoLODState::HandleStable(AutoLODState::Zone) // 0x56B002
{
    mangled_assert("?HandleStable@AutoLODState@@AAE?AW4State@1@W4Zone@1@@Z");
    todo("implement");
    AutoLODState::State __result = _sub_56B002(this, arg);
    return __result;
}

_extern AutoLODState::State _sub_56AFEF(AutoLODState *const, AutoLODState::Zone);
AutoLODState::State AutoLODState::HandleReducingGeometry(AutoLODState::Zone) // 0x56AFEF
{
    mangled_assert("?HandleReducingGeometry@AutoLODState@@AAE?AW4State@1@W4Zone@1@@Z");
    todo("implement");
    AutoLODState::State __result = _sub_56AFEF(this, arg);
    return __result;
}

_extern AutoLODState::State _sub_56AFDC(AutoLODState *const, AutoLODState::Zone);
AutoLODState::State AutoLODState::HandleIncreasingGeometry(AutoLODState::Zone) // 0x56AFDC
{
    mangled_assert("?HandleIncreasingGeometry@AutoLODState@@AAE?AW4State@1@W4Zone@1@@Z");
    todo("implement");
    AutoLODState::State __result = _sub_56AFDC(this, arg);
    return __result;
}

_extern AutoLODState::Zone _sub_56AF15(AutoLODState *const, float);
AutoLODState::Zone AutoLODState::CalcZone(float) // 0x56AF15
{
    mangled_assert("?CalcZone@AutoLODState@@AAE?AW4Zone@1@M@Z");
    todo("implement");
    AutoLODState::Zone __result = _sub_56AF15(this, arg);
    return __result;
}

/* ---------- private code */
#endif
