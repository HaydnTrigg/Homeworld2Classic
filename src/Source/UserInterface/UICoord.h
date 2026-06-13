#if 0
#ifndef __UICOORD_H__
#define __UICOORD_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UICoord
{
public:
    enum
    {
        RefScreenWidth = 800, // 0x0320
        RefScreenHeight = 600, // 0x0258
    };
    static _inline float Nx(float px);
    static _inline float Ny(float py);
    static _inline float NxText(float px);
    static _inline float NyText(float py);
    static _inline float Nyoffset(float py);
    static _inline float Nxoffset(float px);
private:
    static float s_xOffset;
    static float s_yOffset;
    static float s_textXOffset;
    static float s_textYOffset;
};
static_assert(sizeof(UICoord) == 1, "Invalid UICoord size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern float _sub_62D1B1(float);
_inline float UICoord::Nx(float px) // 0x62D1B1
{
    mangled_assert("?Nx@UICoord@@SGMM@Z");
    todo("implement");
    float __result = _sub_62D1B1(px);
    return __result;
}

_extern float _sub_62D1D5(float);
_inline float UICoord::Ny(float py) // 0x62D1D5
{
    mangled_assert("?Ny@UICoord@@SGMM@Z");
    todo("implement");
    float __result = _sub_62D1D5(py);
    return __result;
}

_extern float _sub_68D16F(float);
_inline float UICoord::NxText(float px) // 0x68D16F
{
    mangled_assert("?NxText@UICoord@@SGMM@Z");
    todo("implement");
    float __result = _sub_68D16F(px);
    return __result;
}

_extern float _sub_68D19B(float);
_inline float UICoord::NyText(float py) // 0x68D19B
{
    mangled_assert("?NyText@UICoord@@SGMM@Z");
    todo("implement");
    float __result = _sub_68D19B(py);
    return __result;
}

_extern float _sub_68B199(float);
_inline float UICoord::Nyoffset(float py) // 0x68B199
{
    mangled_assert("?Nyoffset@UICoord@@SGMM@Z");
    todo("implement");
    float __result = _sub_68B199(py);
    return __result;
}

_extern float _sub_68B17D(float);
_inline float UICoord::Nxoffset(float px) // 0x68B17D
{
    mangled_assert("?Nxoffset@UICoord@@SGMM@Z");
    todo("implement");
    float __result = _sub_68B17D(px);
    return __result;
}

/* ---------- private code */

#endif // __UICOORD_H__
#endif
