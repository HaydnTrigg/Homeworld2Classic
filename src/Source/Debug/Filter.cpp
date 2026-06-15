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

DebugFilter::DebugFilter() // 0x10005913
{
    mangled_assert("??0DebugFilter@@QAE@XZ");
    todo("implement");
}

DebugFilter::~DebugFilter() // 0x10005938
{
    mangled_assert("??1DebugFilter@@QAE@XZ");
    todo("implement");
}

bool DebugFilter::addFilter(char const *, FilterElement *, __int32 *) // 0x10005939
{
    mangled_assert("?addFilter@DebugFilter@@AAE_NPBDPAUFilterElement@@PAH@Z");
    todo("implement");
}

__int32 DebugFilter::setFilters(char *) // 0x10005B38
{
    mangled_assert("?setFilters@DebugFilter@@QAEHPAD@Z");
    todo("implement");
}

__int32 DebugFilter::getFilters(char *, __int32) // 0x10005A96
{
    mangled_assert("?getFilters@DebugFilter@@QAEHPADH@Z");
    todo("implement");
}

void DebugFilter::enumerateFilters(void (*)(char const *)) // 0x10005A36
{
    mangled_assert("?enumerateFilters@DebugFilter@@QAEXP6GXPBD@Z@Z");
    todo("implement");
}

bool DebugFilter::compareAgainstFilters(char const *, FilterElement *, __int32) // 0x100059FA
{
    mangled_assert("?compareAgainstFilters@DebugFilter@@AAE_NPBDPAUFilterElement@@H@Z");
    todo("implement");
}

bool DebugFilter::compare(char const *) // 0x100059B9
{
    mangled_assert("?compare@DebugFilter@@QAE_NPBD@Z");
    todo("implement");
}

/* ---------- private code */
#endif
