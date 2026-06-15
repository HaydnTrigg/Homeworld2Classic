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
#include <platform\cmdline.h>
#include <platform\platformexports.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\vector2.h>
#include <TacticalOverlay.h>
#include <hash_map>
#include <xhash>
#include <profile\profile.h>
#include <iostream>
#include <luaconfig\luaconfig.h>
#include <lua.h>
#include <util\colour.h>
#include <TacticalIcon.h>
#include <prim.h>
#include <string>

/* ---------- constants */

/* ---------- definitions */

typedef std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TacticalIcon *> > > > local_iterator;

/* ---------- prototypes */

extern bool toStartup();
extern bool toShutdown();

_static TacticalOverlay::TO_Flags const convertStringIntoSetting(char const *name);

/* ---------- globals */

extern TacticalOverlay *TacticalOverlay::s_instance; // 0x84AF90

/* ---------- private variables */

_static
{
    extern char const *TacticalIconDir; // 0x83D69C
    extern char const *TacticalIconExt; // 0x83D6A0
}

/* ---------- public code */

bool toStartup() // 0x645603
{
    mangled_assert("?toStartup@@YG_NXZ");
    todo("implement");
}

bool toShutdown() // 0x6455FB
{
    mangled_assert("?toShutdown@@YG_NXZ");
    todo("implement");
}

TacticalOverlay::TacticalOverlay() // 0x644537
{
    mangled_assert("??0TacticalOverlay@@AAE@XZ");
    todo("implement");
}

_inline std::_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TacticalIcon *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TacticalIcon *> > >::~_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TacticalIcon *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TacticalIcon *> > >() // 0x64474E
{
    mangled_assert("??1?$_List_buy@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVTacticalIcon@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVTacticalIcon@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,TacticalIcon *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TacticalIcon *> > >::~hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,TacticalIcon *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TacticalIcon *> > >() // 0x644757
{
    mangled_assert("??1?$hash_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVTacticalIcon@@V?$hash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@stdext@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVTacticalIcon@@@std@@@2@@stdext@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TacticalIcon *>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TacticalIcon *>() // 0x64476E
{
    mangled_assert("??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVTacticalIcon@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,TacticalIcon *>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,TacticalIcon *>() // 0x644773
{
    mangled_assert("??1?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVTacticalIcon@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

void TacticalOverlay::incrementSetting() // 0x645485
{
    mangled_assert("?incrementSetting@TacticalOverlay@@QAEXXZ");
    todo("implement");
}

void TacticalOverlay::chooseSettingIndex(unsigned __int32) // 0x645020
{
    mangled_assert("?chooseSettingIndex@TacticalOverlay@@QAEXI@Z");
    todo("implement");
}

TacticalOverlay::~TacticalOverlay() // 0x64477D
{
    mangled_assert("??1TacticalOverlay@@AAE@XZ");
    todo("implement");
}

TacticalOverlay *TacticalOverlay::i() // 0x645445
{
    mangled_assert("?i@TacticalOverlay@@SGPAV1@XZ");
    todo("implement");
}

bool TacticalOverlay::release() // 0x6455C6
{
    mangled_assert("?release@TacticalOverlay@@SG_NXZ");
    todo("implement");
}

TacticalIcon *TacticalOverlay::getTacticalIcon(char const *) // 0x6452E8
{
    mangled_assert("?getTacticalIcon@TacticalOverlay@@QAEPAVTacticalIcon@@PBD@Z");
    todo("implement");
}

void TacticalOverlay::addTacticalIcon(char const *, TacticalIcon *) // 0x644F36
{
    mangled_assert("?addTacticalIcon@TacticalOverlay@@QAEXPBDPAVTacticalIcon@@@Z");
    todo("implement");
}

/* ---------- private code */

_static TacticalOverlay::TO_Flags const convertStringIntoSetting(char const *name) // 0x6450B3
{
    mangled_assert("convertStringIntoSetting");
    todo("implement");
}
#endif
