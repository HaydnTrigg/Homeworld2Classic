#if 0
#ifndef __R_PBUFFER_H__
#define __R_PBUFFER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class PBuffer
{
public:
    PBuffer(unsigned __int32 const, unsigned __int32 const);
    __int32 width; // 0x0
    __int32 height; // 0x4
    HPBUFFERARB__ *hpbuffer; // 0x8
    HDC__ *hdc; // 0xC
    HGLRC__ *hglrc; // 0x10
    unsigned __int32 textureColour; // 0x14
    unsigned __int32 textureDepth; // 0x18
    HDC__ *prev_hdc; // 0x1C
    HGLRC__ *prev_hglrc; // 0x20
    __int32 viewport[4]; // 0x24
    unsigned __int32 const depthBits; // 0x34
    unsigned __int32 const stencilBits; // 0x38
};
static_assert(sizeof(PBuffer) == 60, "Invalid PBuffer size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __R_PBUFFER_H__
#endif
