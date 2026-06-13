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
#include <Modifiers\ModifierInfluenceType.h>
#include <string>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern InfluenceType getInfluenceTypeFromString(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &inStr);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern InfluenceType _sub_56E8AC(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
InfluenceType getInfluenceTypeFromString(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &inStr) // 0x56E8AC
{
    mangled_assert("?getInfluenceTypeFromString@@YG?AW4InfluenceType@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    InfluenceType __result = _sub_56E8AC(inStr);
    return __result;
}

/* ---------- private code */
#endif
