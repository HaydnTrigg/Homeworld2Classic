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

_inline float UICoord::Nx(float px) // 0x62D1B1
{
    mangled_assert("?Nx@UICoord@@SGMM@Z");
    todo("implement");
}

_inline float UICoord::Ny(float py) // 0x62D1D5
{
    mangled_assert("?Ny@UICoord@@SGMM@Z");
    todo("implement");
}

_inline float UICoord::NxText(float px) // 0x68D16F
{
    mangled_assert("?NxText@UICoord@@SGMM@Z");
    todo("implement");
}

_inline float UICoord::NyText(float py) // 0x68D19B
{
    mangled_assert("?NyText@UICoord@@SGMM@Z");
    todo("implement");
}

_inline float UICoord::Nyoffset(float py) // 0x68B199
{
    mangled_assert("?Nyoffset@UICoord@@SGMM@Z");
    todo("implement");
}

_inline float UICoord::Nxoffset(float px) // 0x68B17D
{
    mangled_assert("?Nxoffset@UICoord@@SGMM@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __UICOORD_H__
#endif
