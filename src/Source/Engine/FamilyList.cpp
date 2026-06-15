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
#include <xmemory>
#include <assist\stlexstring.h>
#include <boost\cstdint.hpp>
#include <FamilyList.h>
#include <Family.h>
#include <wchar.h>
#include <string>
#include <algorithm>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_inline Family::Family(Family const &) // 0x4F28C1
{
    mangled_assert("??0Family@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline Family::~Family() // 0x4F2904
{
    mangled_assert("??1Family@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

Family *FamilyList::GetFamily(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x4F2ABB
{
    mangled_assert("?GetFamily@FamilyList@@QAEPAVFamily@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

Family *FamilyList::GetFamily(unsigned __int32) // 0x4F2AD0
{
    mangled_assert("?GetFamily@FamilyList@@QAEPAVFamily@@I@Z");
    todo("implement");
}

__int32 FamilyList::GetFamilyIndex(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x4F2AF4
{
    mangled_assert("?GetFamilyIndex@FamilyList@@QAEHABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

bool FamilyList::DoesExist(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) const // 0x4F2A4C
{
    mangled_assert("?DoesExist@FamilyList@@QBE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

Family *FamilyList::AddFamily(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x4F29DB
{
    mangled_assert("?AddFamily@FamilyList@@QAEPAVFamily@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
