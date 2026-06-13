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

_extern _sub_65EA24(quat *const, quat const &, quat const &, float);
quat::quat(quat const &, quat const &, float) // 0x65EA24
{
    mangled_assert("??0quat@@QAE@ABV0@0M@Z");
    todo("implement");
    _sub_65EA24(this, arg, arg, arg);
}

_extern _sub_65EC4B(quat *const, vector3 const &, vector3 const &);
quat::quat(vector3 const &, vector3 const &) // 0x65EC4B
{
    mangled_assert("??0quat@@QAE@ABVvector3@@0@Z");
    todo("implement");
    _sub_65EC4B(this, arg, arg);
}

_extern void _sub_65EEB5(quat *const, float, float, float, __int32);
void quat::MakeQuatFromEulerAngles(float, float, float, __int32) // 0x65EEB5
{
    mangled_assert("?MakeQuatFromEulerAngles@quat@@QAEXMMMH@Z");
    todo("implement");
    _sub_65EEB5(this, arg, arg, arg, arg);
}

_extern void _sub_65F868(quat const *const, float &, vector3 &);
void quat::getAxisAndAngle(float &, vector3 &) const // 0x65F868
{
    mangled_assert("?getAxisAndAngle@quat@@QBEXAAMAAVvector3@@@Z");
    todo("implement");
    _sub_65F868(this, arg, arg);
}

_extern char *_sub_65F776(quat *const, char *);
char *quat::PrintToBuffer(char *) // 0x65F776
{
    mangled_assert("?PrintToBuffer@quat@@QAEPADPAD@Z");
    todo("implement");
    char * __result = _sub_65F776(this, arg);
    return __result;
}

_extern char *_sub_65F711(quat *const, char *);
char *quat::PrintAsAxisAngle(char *) // 0x65F711
{
    mangled_assert("?PrintAsAxisAngle@quat@@QAEPADPAD@Z");
    todo("implement");
    char * __result = _sub_65F711(this, arg);
    return __result;
}

_extern char *_sub_65F7C8(quat *const, char *);
char *quat::PrintVerbose(char *) // 0x65F7C8
{
    mangled_assert("?PrintVerbose@quat@@QAEPADPAD@Z");
    todo("implement");
    char * __result = _sub_65F7C8(this, arg);
    return __result;
}

/* ---------- private code */
#endif
