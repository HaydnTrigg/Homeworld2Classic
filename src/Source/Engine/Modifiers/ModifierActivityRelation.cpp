#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <iosfwd>
#include <Modifiers\ModifierActivityRelation.h>
#include <string>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern ActivityRelation getActivityRelationFromString(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &inStr);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern ActivityRelation _sub_56DFAD(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
ActivityRelation getActivityRelationFromString(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &inStr) // 0x56DFAD
{
    mangled_assert("?getActivityRelationFromString@@YG?AW4ActivityRelation@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    ActivityRelation __result = _sub_56DFAD(inStr);
    return __result;
}

/* ---------- private code */
#endif
