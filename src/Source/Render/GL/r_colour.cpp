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

_extern void _sub_1000C060(vector4 const &);
void rglSetClearColour(vector4 const &c) // 0x1000C060
{
    mangled_assert("?rglSetClearColour@@YGXABVvector4@@@Z");
    todo("implement");
    _sub_1000C060(c);
}

_extern vector4 const &_sub_1000BFEE();
vector4 const &rglGetClearColour() // 0x1000BFEE
{
    mangled_assert("?rglGetClearColour@@YGABVvector4@@XZ");
    todo("implement");
    vector4 const & __result = _sub_1000BFEE();
    return __result;
}

_extern void _sub_1000C0FE(float);
void rglSetClearDepth(float d) // 0x1000C0FE
{
    mangled_assert("?rglSetClearDepth@@YGXM@Z");
    todo("implement");
    _sub_1000C0FE(d);
}

_extern float _sub_1000BFF4();
float rglGetClearDepth() // 0x1000BFF4
{
    mangled_assert("?rglGetClearDepth@@YGMXZ");
    todo("implement");
    float __result = _sub_1000BFF4();
    return __result;
}

_extern void _sub_1000C14D(unsigned __int32);
void rglSetClearStencil(unsigned __int32 _s) // 0x1000C14D
{
    mangled_assert("?rglSetClearStencil@@YGXI@Z");
    todo("implement");
    _sub_1000C14D(_s);
}

_extern unsigned __int32 _sub_1000C006();
unsigned __int32 rglGetClearStencil() // 0x1000C006
{
    mangled_assert("?rglGetClearStencil@@YGIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_1000C006();
    return __result;
}

_extern void _sub_1000C22E(vector4 const &);
void rglSetVertexColour(vector4 const &c) // 0x1000C22E
{
    mangled_assert("?rglSetVertexColour@@YGXABVvector4@@@Z");
    todo("implement");
    _sub_1000C22E(c);
}

_extern vector4 _sub_1000C047();
vector4 rglGetVertexColour() // 0x1000C047
{
    mangled_assert("?rglGetVertexColour@@YG?AVvector4@@XZ");
    todo("implement");
    vector4 __result = _sub_1000C047();
    return __result;
}

_extern void _sub_1000C24C(FogParam const &);
void setFog(FogParam const &fog) // 0x1000C24C
{
    mangled_assert("?setFog@@YGXABVFogParam@@@Z");
    todo("implement");
    _sub_1000C24C(fog);
}

_extern void _sub_1000C17E(FogParam const &);
void rglSetFog(FogParam const &fog) // 0x1000C17E
{
    mangled_assert("?rglSetFog@@YGXABVFogParam@@@Z");
    todo("implement");
    _sub_1000C17E(fog);
}

_extern FogParam const &_sub_1000C00C();
FogParam const &rglGetFog() // 0x1000C00C
{
    mangled_assert("?rglGetFog@@YGABVFogParam@@XZ");
    todo("implement");
    FogParam const & __result = _sub_1000C00C();
    return __result;
}

_extern void _sub_1000C012(__int32, __int32, __int32, __int32, PixelFormat, __int32, void *);
void rglGetPixels(__int32 x, __int32 y, __int32 width, __int32 height, PixelFormat format, __int32 bits, void *data) // 0x1000C012
{
    mangled_assert("?rglGetPixels@@YGXHHHHW4PixelFormat@@HPAX@Z");
    todo("implement");
    _sub_1000C012(x, y, width, height, format, bits, data);
}

/* ---------- private code */

_extern unsigned __int32 _sub_1000BF28(FogType);
_static unsigned __int32 mapFogType(FogType type) // 0x1000BF28
{
    mangled_assert("mapFogType");
    todo("implement");
    unsigned __int32 __result = _sub_1000BF28(type);
    return __result;
}

_extern bool _sub_1000BEA7(FogParam const &, FogParam const &);
_static bool fogEqual(FogParam const &a, FogParam const &b) // 0x1000BEA7
{
    mangled_assert("fogEqual");
    todo("implement");
    bool __result = _sub_1000BEA7(a, b);
    return __result;
}

_extern unsigned __int32 _sub_1000BF56(PixelFormat);
_static unsigned __int32 mapPixelType(PixelFormat type) // 0x1000BF56
{
    mangled_assert("mapPixelType");
    todo("implement");
    unsigned __int32 __result = _sub_1000BF56(type);
    return __result;
}
#endif
