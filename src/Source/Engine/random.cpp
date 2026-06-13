#if 0
/* ---------- headers */

#include "decomp.h"
#include <pch.h>
#include <util\types.h>
#include <Interface.h>
#include <random.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char randyNumberLogging[128]; // 0x84A9B0

/* ---------- private variables */

/* ---------- public code */

_extern unsigned __int32 _sub_6210D4(RandomStream *const);
unsigned __int32 RandomStream::hashRandom() // 0x6210D4
{
    mangled_assert("?hashRandom@RandomStream@@EAEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_6210D4(this);
    return __result;
}

_extern _sub_6210B9(RandomStream *const, bool);
RandomStream::RandomStream(bool) // 0x6210B9
{
    mangled_assert("??0RandomStream@@QAE@_N@Z");
    todo("implement");
    _sub_6210B9(this, arg);
}

_extern void _sub_62117B(RandomStream *const, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32);
void RandomStream::parametersSet(unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32) // 0x62117B
{
    mangled_assert("?parametersSet@RandomStream@@UAEXIIIII@Z");
    todo("implement");
    _sub_62117B(this, arg, arg, arg, arg, arg);
}

_extern void _sub_621124(RandomStream *const, unsigned __int32 *, unsigned __int32 *, unsigned __int32 *, unsigned __int32 *, unsigned __int32 *);
void RandomStream::parametersGet(unsigned __int32 *, unsigned __int32 *, unsigned __int32 *, unsigned __int32 *, unsigned __int32 *) // 0x621124
{
    mangled_assert("?parametersGet@RandomStream@@UAEXPAI0000@Z");
    todo("implement");
    _sub_621124(this, arg, arg, arg, arg, arg);
}

_extern void _sub_6211A0(RandomStream *const, unsigned __int32);
void RandomStream::seedSet(unsigned __int32) // 0x6211A0
{
    mangled_assert("?seedSet@RandomStream@@UAEXI@Z");
    todo("implement");
    _sub_6211A0(this, arg);
}

_extern void _sub_621157(RandomStream *const);
void RandomStream::parametersReset() // 0x621157
{
    mangled_assert("?parametersReset@RandomStream@@UAEXXZ");
    todo("implement");
    _sub_621157(this);
}

/* ---------- private code */
#endif
