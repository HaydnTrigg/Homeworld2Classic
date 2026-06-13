#if 0
/* ---------- headers */

#include "decomp.h"
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <Mathlib\pch.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <math.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern vector2 vector2::zero; // 0x84B91C

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_66027A(vector2 *const, float);
void vector2::NormalizeToLength(float) // 0x66027A
{
    mangled_assert("?NormalizeToLength@vector2@@QAEXM@Z");
    todo("implement");
    _sub_66027A(this, arg);
}

_extern void _sub_66012F(vector2 *const, float, float);
void vector2::ClampComponents(float, float) // 0x66012F
{
    mangled_assert("?ClampComponents@vector2@@QAEXMM@Z");
    todo("implement");
    _sub_66012F(this, arg, arg);
}

_extern void _sub_66016E(vector2 *const, float, float);
void vector2::ClampMagnitude(float, float) // 0x66016E
{
    mangled_assert("?ClampMagnitude@vector2@@QAEXMM@Z");
    todo("implement");
    _sub_66016E(this, arg, arg);
}

_extern void _sub_660224(vector2 *const, float);
void vector2::ClampMagnitudeMin(float) // 0x660224
{
    mangled_assert("?ClampMagnitudeMin@vector2@@QAEXM@Z");
    todo("implement");
    _sub_660224(this, arg);
}

_extern void _sub_6601CE(vector2 *const, float);
void vector2::ClampMagnitudeMax(float) // 0x6601CE
{
    mangled_assert("?ClampMagnitudeMax@vector2@@QAEXM@Z");
    todo("implement");
    _sub_6601CE(this, arg);
}

_extern void _sub_660326(vector2 *const, vector2 const &, vector2 const &, float);
void vector2::VectorsBlend(vector2 const &, vector2 const &, float) // 0x660326
{
    mangled_assert("?VectorsBlend@vector2@@QAEXABV1@0M@Z");
    todo("implement");
    _sub_660326(this, arg, arg, arg);
}

_extern char *_sub_6602F0(vector2 const *const, char *);
char *vector2::PrintToBuffer(char *) const // 0x6602F0
{
    mangled_assert("?PrintToBuffer@vector2@@QBEPADPAD@Z");
    todo("implement");
    char * __result = _sub_6602F0(this, arg);
    return __result;
}

/* ---------- private code */
#endif
