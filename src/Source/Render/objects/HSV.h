#if 0
#ifndef __HSV_H__
#define __HSV_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class HSVConversion
{
public:
    static void RGBToHSV(float R, float G, float B, float &H, float &S, float &V);
    static void HSVToRGB(float H, float S, float V, float &R, float &G, float &B);
};
static_assert(sizeof(HSVConversion) == 1, "Invalid HSVConversion size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __HSV_H__
#endif
