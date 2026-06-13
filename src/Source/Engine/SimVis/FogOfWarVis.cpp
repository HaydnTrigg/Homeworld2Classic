#if 0
/* ---------- headers */

#include "decomp.h"
#include <xmemory0>
#include <pch.h>
#include <profile\profile.h>
#include <iostream>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <list>
#include <map>
#include <xtree>
#include <SimVis\FogOfWarVis.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern FogOfWarVis *s_instance; // 0x84477C
}

/* ---------- public code */

_extern bool _sub_51CA47();
bool FogOfWarVis::Startup() // 0x51CA47
{
    mangled_assert("?Startup@FogOfWarVis@@SG_NXZ");
    todo("implement");
    bool __result = _sub_51CA47();
    return __result;
}

_extern bool _sub_51CA2A();
bool FogOfWarVis::Shutdown() // 0x51CA2A
{
    mangled_assert("?Shutdown@FogOfWarVis@@SG_NXZ");
    todo("implement");
    bool __result = _sub_51CA2A();
    return __result;
}

_extern FogOfWarVis *_sub_51CA24();
FogOfWarVis *FogOfWarVis::Instance() // 0x51CA24
{
    mangled_assert("?Instance@FogOfWarVis@@SGPAV1@XZ");
    todo("implement");
    FogOfWarVis * __result = _sub_51CA24();
    return __result;
}

/* ---------- private code */
#endif
