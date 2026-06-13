#if 0
/* ---------- headers */

#include "decomp.h"
#include <Render\GL\pch.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern unsigned __int32 mapBlend(BlendFunc blendFunc);
extern void rglSetSrcBlend(unsigned __int32 state);
extern BlendFunc rglGetSrcBlend();
extern void rglSetDestBlend(unsigned __int32 state);
extern BlendFunc rglGetDestBlend();

_static _inline void _setBlend();

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern unsigned __int32 _sub_10009CEC(BlendFunc);
unsigned __int32 mapBlend(BlendFunc blendFunc) // 0x10009CEC
{
    mangled_assert("?mapBlend@@YGIW4BlendFunc@@@Z");
    todo("implement");
    unsigned __int32 __result = _sub_10009CEC(blendFunc);
    return __result;
}

_extern void _sub_10009DB5(unsigned __int32);
void rglSetSrcBlend(unsigned __int32 state) // 0x10009DB5
{
    mangled_assert("?rglSetSrcBlend@@YGXI@Z");
    todo("implement");
    _sub_10009DB5(state);
}

_extern BlendFunc _sub_10009D8A();
BlendFunc rglGetSrcBlend() // 0x10009D8A
{
    mangled_assert("?rglGetSrcBlend@@YG?AW4BlendFunc@@XZ");
    todo("implement");
    BlendFunc __result = _sub_10009D8A();
    return __result;
}

_extern void _sub_10009D90(unsigned __int32);
void rglSetDestBlend(unsigned __int32 state) // 0x10009D90
{
    mangled_assert("?rglSetDestBlend@@YGXI@Z");
    todo("implement");
    _sub_10009D90(state);
}

_extern BlendFunc _sub_10009D84();
BlendFunc rglGetDestBlend() // 0x10009D84
{
    mangled_assert("?rglGetDestBlend@@YG?AW4BlendFunc@@XZ");
    todo("implement");
    BlendFunc __result = _sub_10009D84();
    return __result;
}

/* ---------- private code */

_extern void _sub_10009CCD();
_static _inline void _setBlend() // 0x10009CCD
{
    mangled_assert("_setBlend");
    todo("implement");
    _sub_10009CCD();
}
#endif
