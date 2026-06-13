#if 0
/* ---------- headers */

#include "decomp.h"
#include <Objects\pch.h>
#include <math.h>
#include <Objects\HSV.h>
#include <Objects\Objects.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern float const k_UndefinedHue; // 0x100E47E8
}

/* ---------- public code */

_extern HSVConversion &_sub_1005F830(HSVConversion *const, HSVConversion const &);
_inline HSVConversion &HSVConversion::operator=(HSVConversion const &) // 0x1005F830
{
    mangled_assert("??4HSVConversion@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    HSVConversion & __result = _sub_1005F830(this, arg);
    return __result;
}

_extern void _sub_1005F9F0(float, float, float, float &, float &, float &);
void HSVConversion::RGBToHSV(float R, float G, float B, float &H, float &S, float &V) // 0x1005F9F0
{
    mangled_assert("?RGBToHSV@HSVConversion@@SGXMMMAAM00@Z");
    todo("implement");
    _sub_1005F9F0(R, G, B, H, S, V);
}

_extern void _sub_1005F840(float, float, float, float &, float &, float &);
void HSVConversion::HSVToRGB(float H, float S, float V, float &R, float &G, float &B) // 0x1005F840
{
    mangled_assert("?HSVToRGB@HSVConversion@@SGXMMMAAM00@Z");
    todo("implement");
    _sub_1005F840(H, S, V, R, G, B);
}

/* ---------- private code */
#endif
