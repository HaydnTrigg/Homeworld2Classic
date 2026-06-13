#if 0
/* ---------- headers */

#include "decomp.h"
#include <xmemory0>
#include <pch.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <map>
#include <xtree>
#include <savegamedef.h>
#include <CPUPlayer\CpuDemand.h>
#include <gameRandom.h>
#include <random.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_52E69F(DemandSys *const, unsigned __int32, float);
void DemandSys::add(unsigned __int32, float) // 0x52E69F
{
    mangled_assert("?add@DemandSys@@QAEXIM@Z");
    todo("implement");
    _sub_52E69F(this, arg, arg);
}

_extern float _sub_52E71A(DemandSys *const, unsigned __int32);
float DemandSys::get(unsigned __int32) // 0x52E71A
{
    mangled_assert("?get@DemandSys@@QAEMI@Z");
    todo("implement");
    float __result = _sub_52E71A(this, arg);
    return __result;
}

/* ---------- private code */
#endif
