#if 0
/* ---------- headers */

#include "decomp.h"
#include <Render\GL\pch.h>
#include <Render\GL\types.h>

/* ---------- constants */

/* ---------- definitions */

struct GlareParams
{
    unsigned __int32 saved_frame; // 0x0
    unsigned __int32 blur_mips[10]; // 0x4
    __int32 mip_width[10]; // 0x2C
    __int32 mip_height[10]; // 0x54
    float mip_s[10]; // 0x7C
    float mip_t[10]; // 0xA4
    __int32 blur_mip_used; // 0xCC
    __int32 width; // 0xD0
    __int32 height; // 0xD4
    float s; // 0xD8
    float t; // 0xDC
    __int32 screenWidth; // 0xE0
    __int32 screenHeight; // 0xE4
};
static_assert(sizeof(GlareParams) == 232, "Invalid GlareParams size");

/* ---------- prototypes */

extern __int32 glareCreateTexture(__int32 width, __int32 height);
extern void rglInitializeGlare(unsigned __int32 width, unsigned __int32 height);
extern void rglFinalizeGlare();
extern void glareResize(unsigned __int32 const width, unsigned __int32 const height);
extern void rglRenderGlare(float intensity);
extern void renderGlareRegisterCombiner(float intensity);
extern void remapFrameBuffer();

_static float setupPowerOfTwo(unsigned __int32 &value);

/* ---------- globals */

extern GlareParams glareParams; // 0x10021A78

/* ---------- private variables */

/* ---------- public code */

__int32 glareCreateTexture(__int32 width, __int32 height) // 0x1000C369
{
    mangled_assert("?glareCreateTexture@@YGHHH@Z");
    todo("implement");
}

void rglInitializeGlare(unsigned __int32 width, unsigned __int32 height) // 0x1000D1B5
{
    mangled_assert("?rglInitializeGlare@@YGXII@Z");
    todo("implement");
}

void rglFinalizeGlare() // 0x1000D196
{
    mangled_assert("?rglFinalizeGlare@@YGXXZ");
    todo("implement");
}

void glareResize(unsigned __int32 const width, unsigned __int32 const height) // 0x1000C428
{
    mangled_assert("?glareResize@@YGXII@Z");
    todo("implement");
}

void rglRenderGlare(float intensity) // 0x1000D343
{
    mangled_assert("?rglRenderGlare@@YGXM@Z");
    todo("implement");
}

void renderGlareRegisterCombiner(float intensity) // 0x1000C59A
{
    mangled_assert("?renderGlareRegisterCombiner@@YGXM@Z");
    todo("implement");
}

void remapFrameBuffer() // 0x1000C4A6
{
    mangled_assert("?remapFrameBuffer@@YGXXZ");
    todo("implement");
}

/* ---------- private code */

_static float setupPowerOfTwo(unsigned __int32 &value) // 0x1000D44A
{
    mangled_assert("setupPowerOfTwo");
    todo("implement");
}
#endif
