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
#include <Subsystems\SubSystemType.h>
#include <string>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern SubSystemType getSubSystemTypeFromString(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &inStr, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &inShipName);
extern SubSystemFamily getSubSystemFamilyFromString(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &inStr, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &inShipName);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

SubSystemType getSubSystemTypeFromString(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &inStr, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &inShipName) // 0x4F1AB4
{
    mangled_assert("?getSubSystemTypeFromString@@YG?AW4SubSystemType@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z");
    todo("implement");
}

SubSystemFamily getSubSystemFamilyFromString(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &inStr, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &inShipName) // 0x4F1967
{
    mangled_assert("?getSubSystemFamilyFromString@@YG?AW4SubSystemFamily@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z");
    todo("implement");
}

/* ---------- private code */
#endif
