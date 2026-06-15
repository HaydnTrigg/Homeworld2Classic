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

_inline unsigned __int32 sctGetUdword(__int32 object) // 0x442496
{
    mangled_assert("?sctGetUdword@@YGIH@Z");
    todo("implement");
}

_inline __int32 sctGetSdword(__int32 object) // 0x4D0085
{
    mangled_assert("?sctGetSdword@@YGHH@Z");
    todo("implement");
}

_inline float sctGetReal32(__int32 object) // 0x44247A
{
    mangled_assert("?sctGetReal32@@YGMH@Z");
    todo("implement");
}

_inline bool sctGetBool(__int32 object) // 0x4D0058
{
    mangled_assert("?sctGetBool@@YG_NH@Z");
    todo("implement");
}

_inline char *sctGetString(__int32 object) // 0x449D29
{
    mangled_assert("?sctGetString@@YGPADH@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __SCRIPTACCESS_H__
#endif
