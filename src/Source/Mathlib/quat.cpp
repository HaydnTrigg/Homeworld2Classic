#if 0
/* ---------- headers */

#include "decomp.h"
#include <Mathlib\matvec.h>
#include <util\types.h>
#include <Mathlib\pch.h>
#include <Mathlib\quat.h>
#include <Mathlib\fastmath.h>
#include <Mathlib\mathlibdll.h>
#include <math.h>
#include <Mathlib\mathutil.h>
#include <Mathlib\vector2.h>
#include <Engine\Interface.h>
#include <Mathlib\matrix4.h>
#include <Mathlib\matrix3.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern quat quat::identity; // 0x83DADC

/* ---------- private variables */

_static
{
    extern float const QUAT_INTERPOLATION_DELTA; // 0x7B31AC
}

/* ---------- public code */

quat::quat(quat const &, quat const &, float) // 0x65EA24
{
    mangled_assert("??0quat@@QAE@ABV0@0M@Z");
    todo("implement");
}

quat::quat(vector3 const &, vector3 const &) // 0x65EC4B
{
    mangled_assert("??0quat@@QAE@ABVvector3@@0@Z");
    todo("implement");
}

void quat::MakeQuatFromEulerAngles(float, float, float, __int32) // 0x65EEB5
{
    mangled_assert("?MakeQuatFromEulerAngles@quat@@QAEXMMMH@Z");
    todo("implement");
}

void quat::getAxisAndAngle(float &, vector3 &) const // 0x65F868
{
    mangled_assert("?getAxisAndAngle@quat@@QBEXAAMAAVvector3@@@Z");
    todo("implement");
}

char *quat::PrintToBuffer(char *) // 0x65F776
{
    mangled_assert("?PrintToBuffer@quat@@QAEPADPAD@Z");
    todo("implement");
}

char *quat::PrintAsAxisAngle(char *) // 0x65F711
{
    mangled_assert("?PrintAsAxisAngle@quat@@QAEPADPAD@Z");
    todo("implement");
}

char *quat::PrintVerbose(char *) // 0x65F7C8
{
    mangled_assert("?PrintVerbose@quat@@QAEPADPAD@Z");
    todo("implement");
}

/* ---------- private code */
#endif
