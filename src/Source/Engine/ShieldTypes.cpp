#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <pch.h>
#include <xstddef>
#include <ShieldTypes.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern ShieldType getShieldTypeFromString(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &string);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern ShieldType _sub_637A03(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
ShieldType getShieldTypeFromString(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &string) // 0x637A03
{
    mangled_assert("?getShieldTypeFromString@@YG?AW4ShieldType@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    ShieldType __result = _sub_637A03(string);
    return __result;
}

/* ---------- private code */
#endif
