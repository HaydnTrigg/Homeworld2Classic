#if 0
/* ---------- headers */

#include "decomp.h"
#include <Objects\pch.h>
#include <Objects\HLS.h>
#include <Objects\Objects.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern float const k_UndefinedHue; // 0x100E47B8
    extern float const k_hue60; // 0x100E47BC
    extern float const k_hue120; // 0x100E47C0
    extern float const k_hue180; // 0x100E47C4
    extern float const k_hue240; // 0x100E47C8
    extern float const k_hue360; // 0x100E47CC
}

/* ---------- public code */

_inline HLSConversion &HLSConversion::operator=(HLSConversion const &) // 0x1005F420
{
    mangled_assert("??4HLSConversion@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

void HLSConversion::RGBToHLS(float R, float G, float B, float &H, float &L, float &S) // 0x1005F630
{
    mangled_assert("?RGBToHLS@HLSConversion@@SGXMMMAAM00@Z");
    todo("implement");
}

float HLSConversion::colHLSValue(float n1, float n2, float hue) // 0x1005F780
{
    mangled_assert("?colHLSValue@HLSConversion@@SGMMMM@Z");
    todo("implement");
}

void HLSConversion::HLSToRGB(float H, float L, float S, float &R, float &G, float &B) // 0x1005F430
{
    mangled_assert("?HLSToRGB@HLSConversion@@SGXMMMAAM00@Z");
    todo("implement");
}

/* ---------- private code */
#endif
