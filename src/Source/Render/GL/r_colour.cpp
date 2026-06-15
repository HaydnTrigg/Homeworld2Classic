#if 0
/* ---------- headers */

#include "decomp.h"
#include <Render\GL\pch.h>
#include <Render\GL\r_macros.h>
#include <Mathlib\vector4.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void rglSetClearColour(vector4 const &c);
extern vector4 const &rglGetClearColour();
extern void rglSetClearDepth(float d);
extern float rglGetClearDepth();
extern void rglSetClearStencil(unsigned __int32 _s);
extern unsigned __int32 rglGetClearStencil();
extern void rglSetVertexColour(vector4 const &c);
extern vector4 rglGetVertexColour();
extern void setFog(FogParam const &fog);
extern void rglSetFog(FogParam const &fog);
extern FogParam const &rglGetFog();
extern void rglGetPixels(__int32 x, __int32 y, __int32 width, __int32 height, PixelFormat format, __int32 bits, void *data);

_static unsigned __int32 mapFogType(FogType type);
_static bool fogEqual(FogParam const &a, FogParam const &b);
_static unsigned __int32 mapPixelType(PixelFormat type);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

void rglSetClearColour(vector4 const &c) // 0x1000C060
{
    mangled_assert("?rglSetClearColour@@YGXABVvector4@@@Z");
    todo("implement");
}

vector4 const &rglGetClearColour() // 0x1000BFEE
{
    mangled_assert("?rglGetClearColour@@YGABVvector4@@XZ");
    todo("implement");
}

void rglSetClearDepth(float d) // 0x1000C0FE
{
    mangled_assert("?rglSetClearDepth@@YGXM@Z");
    todo("implement");
}

float rglGetClearDepth() // 0x1000BFF4
{
    mangled_assert("?rglGetClearDepth@@YGMXZ");
    todo("implement");
}

void rglSetClearStencil(unsigned __int32 _s) // 0x1000C14D
{
    mangled_assert("?rglSetClearStencil@@YGXI@Z");
    todo("implement");
}

unsigned __int32 rglGetClearStencil() // 0x1000C006
{
    mangled_assert("?rglGetClearStencil@@YGIXZ");
    todo("implement");
}

void rglSetVertexColour(vector4 const &c) // 0x1000C22E
{
    mangled_assert("?rglSetVertexColour@@YGXABVvector4@@@Z");
    todo("implement");
}

vector4 rglGetVertexColour() // 0x1000C047
{
    mangled_assert("?rglGetVertexColour@@YG?AVvector4@@XZ");
    todo("implement");
}

void setFog(FogParam const &fog) // 0x1000C24C
{
    mangled_assert("?setFog@@YGXABVFogParam@@@Z");
    todo("implement");
}

void rglSetFog(FogParam const &fog) // 0x1000C17E
{
    mangled_assert("?rglSetFog@@YGXABVFogParam@@@Z");
    todo("implement");
}

FogParam const &rglGetFog() // 0x1000C00C
{
    mangled_assert("?rglGetFog@@YGABVFogParam@@XZ");
    todo("implement");
}

void rglGetPixels(__int32 x, __int32 y, __int32 width, __int32 height, PixelFormat format, __int32 bits, void *data) // 0x1000C012
{
    mangled_assert("?rglGetPixels@@YGXHHHHW4PixelFormat@@HPAX@Z");
    todo("implement");
}

/* ---------- private code */

_static unsigned __int32 mapFogType(FogType type) // 0x1000BF28
{
    mangled_assert("mapFogType");
    todo("implement");
}

_static bool fogEqual(FogParam const &a, FogParam const &b) // 0x1000BEA7
{
    mangled_assert("fogEqual");
    todo("implement");
}

_static unsigned __int32 mapPixelType(PixelFormat type) // 0x1000BF56
{
    mangled_assert("mapPixelType");
    todo("implement");
}
#endif
