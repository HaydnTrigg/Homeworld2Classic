#if 0
#ifndef __SCRIPTACCESS_H__
#define __SCRIPTACCESS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern _inline unsigned __int32 sctGetUdword(__int32 object);
extern _inline __int32 sctGetSdword(__int32 object);
extern _inline float sctGetReal32(__int32 object);
extern _inline bool sctGetBool(__int32 object);
extern _inline char *sctGetString(__int32 object);

/* ---------- globals */

/* ---------- public code */

_extern unsigned __int32 _sub_442496(__int32);
_inline unsigned __int32 sctGetUdword(__int32 object) // 0x442496
{
    mangled_assert("?sctGetUdword@@YGIH@Z");
    todo("implement");
    unsigned __int32 __result = _sub_442496(object);
    return __result;
}

_extern __int32 _sub_4D0085(__int32);
_inline __int32 sctGetSdword(__int32 object) // 0x4D0085
{
    mangled_assert("?sctGetSdword@@YGHH@Z");
    todo("implement");
    __int32 __result = _sub_4D0085(object);
    return __result;
}

_extern float _sub_44247A(__int32);
_inline float sctGetReal32(__int32 object) // 0x44247A
{
    mangled_assert("?sctGetReal32@@YGMH@Z");
    todo("implement");
    float __result = _sub_44247A(object);
    return __result;
}

_extern bool _sub_4D0058(__int32);
_inline bool sctGetBool(__int32 object) // 0x4D0058
{
    mangled_assert("?sctGetBool@@YG_NH@Z");
    todo("implement");
    bool __result = _sub_4D0058(object);
    return __result;
}

_extern char *_sub_449D29(__int32);
_inline char *sctGetString(__int32 object) // 0x449D29
{
    mangled_assert("?sctGetString@@YGPADH@Z");
    todo("implement");
    char * __result = _sub_449D29(object);
    return __result;
}

/* ---------- private code */

#endif // __SCRIPTACCESS_H__
#endif
