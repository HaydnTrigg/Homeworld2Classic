#if 0
/* ---------- headers */

#include "decomp.h"
#include <stdio.h>
#include <crtdefs.h>
#include <sal.h>
#include <string.h>
#include <concurrencysal.h>
#include <swprintf.inl>
#include <vadefs.h>
#include <Filter.h>
#include <util\types.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_10005913(DebugFilter *const);
DebugFilter::DebugFilter() // 0x10005913
{
    mangled_assert("??0DebugFilter@@QAE@XZ");
    todo("implement");
    _sub_10005913(this);
}

_extern void _sub_10005938(DebugFilter *const);
DebugFilter::~DebugFilter() // 0x10005938
{
    mangled_assert("??1DebugFilter@@QAE@XZ");
    todo("implement");
    _sub_10005938(this);
}

_extern bool _sub_10005939(DebugFilter *const, char const *, FilterElement *, __int32 *);
bool DebugFilter::addFilter(char const *, FilterElement *, __int32 *) // 0x10005939
{
    mangled_assert("?addFilter@DebugFilter@@AAE_NPBDPAUFilterElement@@PAH@Z");
    todo("implement");
    bool __result = _sub_10005939(this, arg, arg, arg);
    return __result;
}

_extern __int32 _sub_10005B38(DebugFilter *const, char *);
__int32 DebugFilter::setFilters(char *) // 0x10005B38
{
    mangled_assert("?setFilters@DebugFilter@@QAEHPAD@Z");
    todo("implement");
    __int32 __result = _sub_10005B38(this, arg);
    return __result;
}

_extern __int32 _sub_10005A96(DebugFilter *const, char *, __int32);
__int32 DebugFilter::getFilters(char *, __int32) // 0x10005A96
{
    mangled_assert("?getFilters@DebugFilter@@QAEHPADH@Z");
    todo("implement");
    __int32 __result = _sub_10005A96(this, arg, arg);
    return __result;
}

_extern void _sub_10005A36(DebugFilter *const, void (*)(char const *));
void DebugFilter::enumerateFilters(void (*)(char const *)) // 0x10005A36
{
    mangled_assert("?enumerateFilters@DebugFilter@@QAEXP6GXPBD@Z@Z");
    todo("implement");
    _sub_10005A36(this, arg);
}

_extern bool _sub_100059FA(DebugFilter *const, char const *, FilterElement *, __int32);
bool DebugFilter::compareAgainstFilters(char const *, FilterElement *, __int32) // 0x100059FA
{
    mangled_assert("?compareAgainstFilters@DebugFilter@@AAE_NPBDPAUFilterElement@@H@Z");
    todo("implement");
    bool __result = _sub_100059FA(this, arg, arg, arg);
    return __result;
}

_extern bool _sub_100059B9(DebugFilter *const, char const *);
bool DebugFilter::compare(char const *) // 0x100059B9
{
    mangled_assert("?compare@DebugFilter@@QAE_NPBD@Z");
    todo("implement");
    bool __result = _sub_100059B9(this, arg);
    return __result;
}

/* ---------- private code */
#endif
