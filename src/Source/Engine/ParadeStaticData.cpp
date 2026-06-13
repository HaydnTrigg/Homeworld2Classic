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
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <list>
#include <Mathlib\vector3.h>
#include <ParadeStaticData.h>
#include <hash_map>
#include <string>
#include <xhash>
#include <algorithm>

/* ---------- constants */

/* ---------- definitions */

typedef stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,StaticParadeSlotData,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,StaticParadeSlotData> > > SlotDataMap;

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_5DAEE0(std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,StaticParadeSlotData> *const);
_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,StaticParadeSlotData>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,StaticParadeSlotData>() // 0x5DAEE0
{
    mangled_assert("??1?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UStaticParadeSlotData@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5DAEE0(this);
}

_extern bool _sub_5DB452(StaticParadeData const *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
bool StaticParadeData::isInParadeData(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) const // 0x5DB452
{
    mangled_assert("?isInParadeData@StaticParadeData@@QBE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    bool __result = _sub_5DB452(this, arg);
    return __result;
}

_extern bool _sub_5DB3AC(StaticParadeData *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, vector3 &, vector3 &, vector3 &, float &);
bool StaticParadeData::getSlotData(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, vector3 &, vector3 &, vector3 &, float &) // 0x5DB3AC
{
    mangled_assert("?getSlotData@StaticParadeData@@QAE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAVvector3@@11AAM@Z");
    todo("implement");
    bool __result = _sub_5DB3AC(this, arg, arg, arg, arg, arg);
    return __result;
}

_extern void _sub_5DB26A(StaticParadeData *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, StaticParadeSlotData const &);
void StaticParadeData::addSlotData(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, StaticParadeSlotData const &) // 0x5DB26A
{
    mangled_assert("?addSlotData@StaticParadeData@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABUStaticParadeSlotData@@@Z");
    todo("implement");
    _sub_5DB26A(this, arg, arg);
}

/* ---------- private code */
#endif
