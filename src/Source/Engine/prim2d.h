#if 0
#ifndef __PRIM2D_H__
#define __PRIM2D_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct oldRect
{
    __int32 x0; // 0x0
    __int32 y0; // 0x4
    __int32 x1; // 0x8
    __int32 y1; // 0xC
};
static_assert(sizeof(oldRect) == 16, "Invalid oldRect size");

struct realrectangle
{
    float x0; // 0x0
    float y0; // 0x4
    float x1; // 0x8
    float y1; // 0xC
};
static_assert(sizeof(realrectangle) == 16, "Invalid realrectangle size");

struct triangle
{
    __int32 x0; // 0x0
    __int32 y0; // 0x4
    __int32 x1; // 0x8
    __int32 y1; // 0xC
    __int32 x2; // 0x10
    __int32 y2; // 0x14
};
static_assert(sizeof(triangle) == 24, "Invalid triangle size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __PRIM2D_H__
#endif
