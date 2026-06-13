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

_extern _sub_4F28C1(Family *const, Family const &);
_inline Family::Family(Family const &) // 0x4F28C1
{
    mangled_assert("??0Family@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_4F28C1(this, arg);
}

_extern void _sub_4F2904(Family *const);
_inline Family::~Family() // 0x4F2904
{
    mangled_assert("??1Family@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4F2904(this);
}

_extern Family *_sub_4F2ABB(FamilyList *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
Family *FamilyList::GetFamily(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x4F2ABB
{
    mangled_assert("?GetFamily@FamilyList@@QAEPAVFamily@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    Family * __result = _sub_4F2ABB(this, arg);
    return __result;
}

_extern Family *_sub_4F2AD0(FamilyList *const, unsigned __int32);
Family *FamilyList::GetFamily(unsigned __int32) // 0x4F2AD0
{
    mangled_assert("?GetFamily@FamilyList@@QAEPAVFamily@@I@Z");
    todo("implement");
    Family * __result = _sub_4F2AD0(this, arg);
    return __result;
}

_extern __int32 _sub_4F2AF4(FamilyList *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
__int32 FamilyList::GetFamilyIndex(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x4F2AF4
{
    mangled_assert("?GetFamilyIndex@FamilyList@@QAEHABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    __int32 __result = _sub_4F2AF4(this, arg);
    return __result;
}

_extern bool _sub_4F2A4C(FamilyList const *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
bool FamilyList::DoesExist(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) const // 0x4F2A4C
{
    mangled_assert("?DoesExist@FamilyList@@QBE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    bool __result = _sub_4F2A4C(this, arg);
    return __result;
}

_extern Family *_sub_4F29DB(FamilyList *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
Family *FamilyList::AddFamily(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x4F29DB
{
    mangled_assert("?AddFamily@FamilyList@@QAEPAVFamily@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    Family * __result = _sub_4F29DB(this, arg);
    return __result;
}

/* ---------- private code */
#endif
