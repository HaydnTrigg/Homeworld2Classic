#if 0
#ifndef __HLS_H__
#define __HLS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class HLSConversion
{
public:
    static void RGBToHLS(float, float, float, float &, float &, float &);
    static void HLSToRGB(float, float, float, float &, float &, float &);
    static float colHLSValue(float, float, float);
};
static_assert(sizeof(HLSConversion) == 1, "Invalid HLSConversion size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __HLS_H__
/* combined */
#ifndef __HLS_H__
#define __HLS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class HLSConversion
{
public:
    static void RGBToHLS(float R, float G, float B, float &H, float &L, float &S);
    static void HLSToRGB(float H, float L, float S, float &R, float &G, float &B);
    static float colHLSValue(float n1, float n2, float hue);
};
static_assert(sizeof(HLSConversion) == 1, "Invalid HLSConversion size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __HLS_H__
#endif
