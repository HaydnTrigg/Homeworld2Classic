#if 0
/* ---------- headers */

#include "decomp.h"
#include <bitset>
#include <xstring>
#include <xmemory0>
#include <boost\scoped_ptr.hpp>
#include <UserInterface\pch.h>
#include <seInterface2\sedefinesshared.h>
#include <crtdefs.h>
#include <boost\shared_array.hpp>
#include <boost\assert.hpp>
#include <boost\checked_delete.hpp>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <math.h>
#include <list>
#include <UserInterface\UISoundManager.h>
#include <hash_map>
#include <xhash>
#include <SoundManager\SoundEntityHandle.h>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <assert.h>
#include <Mathlib\fastmath.h>
#include <SoundManager\SoundManager.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\seinterfacefunc.h>
#include <seInterface2\SoundParamManager.h>
#include <util\types.h>
#include <assist\gbitset.h>
#include <seInterface2\PatchID.h>
#include <seInterface2\SampleID.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SampleBase.h>
#include <boost\smart_ptr.hpp>
#include <seInterface2\SoundParams.h>
#include <boost\scoped_array.hpp>
#include <boost\shared_ptr.hpp>
#include <boost\config.hpp>
#include <string>

/* ---------- constants */

/* ---------- definitions */

typedef stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,PatchID,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,PatchID> > > SoundMap;

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern UI::UISoundManager *s_instance; // 0x84B95C
}

/* ---------- public code */

_inline UI::UISoundManager::Data::Data() // 0x66FDDD
{
    mangled_assert("??0Data@UISoundManager@UI@@QAE@XZ");
    todo("implement");
}

void UI::UISoundManager::Startup() // 0x670376
{
    mangled_assert("?Startup@UISoundManager@UI@@SGXXZ");
    todo("implement");
}

void UI::UISoundManager::Shutdown() // 0x670354
{
    mangled_assert("?Shutdown@UISoundManager@UI@@SGXXZ");
    todo("implement");
}

UI::UISoundManager *UI::UISoundManager::Instance() // 0x670100
{
    mangled_assert("?Instance@UISoundManager@UI@@SGPAV12@XZ");
    todo("implement");
}

UI::UISoundManager::UISoundManager() // 0x66FE0C
{
    mangled_assert("??0UISoundManager@UI@@AAE@XZ");
    todo("implement");
}

_inline std::_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,PatchID>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,PatchID> > >::~_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,PatchID>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,PatchID> > >() // 0x66FE6B
{
    mangled_assert("??1?$_List_buy@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VPatchID@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VPatchID@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,PatchID,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,PatchID> > >::~hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,PatchID,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,PatchID> > >() // 0x66FE74
{
    mangled_assert("??1?$hash_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VPatchID@@V?$hash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@stdext@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VPatchID@@@std@@@2@@stdext@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,PatchID>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,PatchID>() // 0x66FE8B
{
    mangled_assert("??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VPatchID@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,PatchID>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,PatchID>() // 0x66FEBC
{
    mangled_assert("??1?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VPatchID@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

UI::UISoundManager::~UISoundManager() // 0x66FF13
{
    mangled_assert("??1UISoundManager@UI@@AAE@XZ");
    todo("implement");
}

_inline UI::UISoundManager::Data::~Data() // 0x66FF00
{
    mangled_assert("??1Data@UISoundManager@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

void UI::UISoundManager::LoadSoundMap(char const *) // 0x670114
{
    mangled_assert("?LoadSoundMap@UISoundManager@UI@@QAEXPBD@Z");
    todo("implement");
}

void UI::UISoundManager::PlaySound(char const *) // 0x67027A
{
    mangled_assert("?PlaySound@UISoundManager@UI@@QAEXPBD@Z");
    todo("implement");
}

void UI::UISoundManager::SetVolume(float) // 0x670344
{
    mangled_assert("?SetVolume@UISoundManager@UI@@QAEXM@Z");
    todo("implement");
}

float UI::UISoundManager::GetVolume() const // 0x6700FA
{
    mangled_assert("?GetVolume@UISoundManager@UI@@QBEMXZ");
    todo("implement");
}

/* ---------- private code */
#endif
