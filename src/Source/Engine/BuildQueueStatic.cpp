#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <iosfwd>
#include <vector>
#include <FamilyListMgr.h>
#include <FamilyList.h>
#include <Family.h>
#include <list>
#include <boost\cstdint.hpp>
#include <BuildQueueStatic.h>
#include <wchar.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_5D0B82(BuildQueueStatic *const);
BuildQueueStatic::BuildQueueStatic() // 0x5D0B82
{
    mangled_assert("??0BuildQueueStatic@@QAE@XZ");
    todo("implement");
    _sub_5D0B82(this);
}

_extern void _sub_5D0BCC(BuildQueueStatic *const);
BuildQueueStatic::~BuildQueueStatic() // 0x5D0BCC
{
    mangled_assert("??1BuildQueueStatic@@QAE@XZ");
    todo("implement");
    _sub_5D0BCC(this);
}

_extern void _sub_5D0C4B(BuildQueueStatic *const, char const *);
void BuildQueueStatic::addBuildableFamily(char const *) // 0x5D0C4B
{
    mangled_assert("?addBuildableFamily@BuildQueueStatic@@QAEXPBD@Z");
    todo("implement");
    _sub_5D0C4B(this, arg);
}

_extern void _sub_5D0BF3(BuildQueueStatic *const, char const *);
void BuildQueueStatic::addBuildableDisplayFamily(char const *) // 0x5D0BF3
{
    mangled_assert("?addBuildableDisplayFamily@BuildQueueStatic@@QAEXPBD@Z");
    todo("implement");
    _sub_5D0BF3(this, arg);
}

_extern bool _sub_5D0CE5(BuildQueueStatic *const, char const *);
bool BuildQueueStatic::canBuildFamily(char const *) // 0x5D0CE5
{
    mangled_assert("?canBuildFamily@BuildQueueStatic@@QAE_NPBD@Z");
    todo("implement");
    bool __result = _sub_5D0CE5(this, arg);
    return __result;
}

_extern bool _sub_5D0CC4(BuildQueueStatic *const, unsigned __int32);
bool BuildQueueStatic::canBuildFamily(unsigned __int32) // 0x5D0CC4
{
    mangled_assert("?canBuildFamily@BuildQueueStatic@@QAE_NI@Z");
    todo("implement");
    bool __result = _sub_5D0CC4(this, arg);
    return __result;
}

_extern bool _sub_5D0CA2(BuildQueueStatic *const, unsigned __int32);
bool BuildQueueStatic::canBuildDisplayFamily(unsigned __int32) // 0x5D0CA2
{
    mangled_assert("?canBuildDisplayFamily@BuildQueueStatic@@QAE_NI@Z");
    todo("implement");
    bool __result = _sub_5D0CA2(this, arg);
    return __result;
}

/* ---------- private code */
#endif
