#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <luaconfig\luaconfig.h>
#include <xmemory0>
#include <boost\scoped_ptr.hpp>
#include <UserInterface\pch.h>
#include <boost\checked_delete.hpp>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <list>
#include <UserInterface\StringTable.h>
#include <assist\typemagic.h>
#include <localizer\localizer.h>
#include <wchar.h>
#include <string>
#include <hash_map>
#include <xhash>

/* ---------- constants */

/* ---------- definitions */

struct `anonymous-namespace'::Data
{
    stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > > m_table; // 0x0
    Data(`anonymous-namespace'::Data const &); /* compiler_generated() */
    Data(); /* compiler_generated() */
    ~Data(); /* compiler_generated() */
    `anonymous-namespace'::Data &operator=(`anonymous-namespace'::Data const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::Data) == 32, "Invalid `anonymous-namespace'::Data size");

typedef `anonymous-namespace'::Data ?A0x5e999f90::Data;

/* ---------- prototypes */

/* ---------- globals */

extern char const *UI::STRINGTABLE_FILENAME; // 0x83DBFC
extern UI::StringTable *UI::StringTable::ms_stringTable; // 0x84B980

/* ---------- private variables */

/* ---------- public code */

_extern UI::StringTable *_sub_674DC4();
UI::StringTable *UI::StringTable::i() // 0x674DC4
{
    mangled_assert("?i@StringTable@UI@@SGPAV12@XZ");
    todo("implement");
    UI::StringTable * __result = _sub_674DC4();
    return __result;
}

_extern bool _sub_674372();
bool UI::StringTable::Create() // 0x674372
{
    mangled_assert("?Create@StringTable@UI@@SG_NXZ");
    todo("implement");
    bool __result = _sub_674372();
    return __result;
}

_extern bool _sub_6743CA();
bool UI::StringTable::Destroy() // 0x6743CA
{
    mangled_assert("?Destroy@StringTable@UI@@SG_NXZ");
    todo("implement");
    bool __result = _sub_6743CA();
    return __result;
}

_extern _sub_67400F(UI::StringTable *const);
UI::StringTable::StringTable() // 0x67400F
{
    mangled_assert("??0StringTable@UI@@AAE@XZ");
    todo("implement");
    _sub_67400F(this);
}

_extern void _sub_67407E(std::_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > > *const);
_inline std::_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > >::~_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > >() // 0x67407E
{
    mangled_assert("??1?$_List_buy@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_67407E(this);
}

_extern void _sub_674087(stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > > *const);
_inline stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > >::~hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > >() // 0x674087
{
    mangled_assert("??1?$hash_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@V?$hash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@stdext@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@std@@@2@@stdext@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_674087(this);
}

_extern void _sub_67409E(std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > *const);
_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > >::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > >() // 0x67409E
{
    mangled_assert("??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_67409E(this);
}

_extern void _sub_6740B5(std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > *const);
_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > >::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > >() // 0x6740B5
{
    mangled_assert("??1?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6740B5(this);
}

_extern void _sub_6740DE(UI::StringTable *const);
UI::StringTable::~StringTable() // 0x6740DE
{
    mangled_assert("??1StringTable@UI@@AAE@XZ");
    todo("implement");
    _sub_6740DE(this);
}

_extern bool _sub_6743EE(UI::StringTable const *const, char const *, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &);
bool UI::StringTable::GetString(char const *, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &) const // 0x6743EE
{
    mangled_assert("?GetString@StringTable@UI@@QBE_NPBDAAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z");
    todo("implement");
    bool __result = _sub_6743EE(this, arg, arg);
    return __result;
}

_extern bool _sub_6742CD(UI::StringTable *const, char const *, wchar_t const *);
bool UI::StringTable::AddString(char const *, wchar_t const *) // 0x6742CD
{
    mangled_assert("?AddString@StringTable@UI@@QAE_NPBDPB_W@Z");
    todo("implement");
    bool __result = _sub_6742CD(this, arg, arg);
    return __result;
}

_extern void _sub_674476(UI::StringTable *const, char const *, char const *);
void UI::StringTable::Load(char const *, char const *) // 0x674476
{
    mangled_assert("?Load@StringTable@UI@@AAEXPBD0@Z");
    todo("implement");
    _sub_674476(this, arg, arg);
}

/* ---------- private code */
#endif
