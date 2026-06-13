#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <fileio\filepath.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <fileio\bytestream.h>
#include <fileio\fileioexports.h>
#include <luaconfig\luaconfig.h>
#include <lua.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <NavLightStyleManager.h>
#include <fileio\filestream.h>
#include <string>

/* ---------- constants */

/* ---------- definitions */

typedef std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,NavLightStyle *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NavLightStyle *> > > NavLightStyleMap;
typedef std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NavLightStyle *> > > > NavLightStyleMapI;

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern char const *NAVLIGHTSTYLES_ALIAS; // 0x83C678
    extern char const *NAVLIGHTSTYLES_SCRIPT_DIR; // 0x83C67C
    extern char const *NAVLIGHTSTYLES_EXTENSION; // 0x83C680
}

/* ---------- public code */

_extern _sub_60BBDA(NavLightStyle *const);
NavLightStyle::NavLightStyle() // 0x60BBDA
{
    mangled_assert("??0NavLightStyle@@QAE@XZ");
    todo("implement");
    _sub_60BBDA(this);
}

_extern _sub_60BBBE(NavLightStyleManager::Data *const);
_inline NavLightStyleManager::Data::Data() // 0x60BBBE
{
    mangled_assert("??0Data@NavLightStyleManager@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_60BBBE(this);
}

_extern _sub_60BBFB(NavLightStyleManager *const, LuaConfig *);
NavLightStyleManager::NavLightStyleManager(LuaConfig *) // 0x60BBFB
{
    mangled_assert("??0NavLightStyleManager@@AAE@PAVLuaConfig@@@Z");
    todo("implement");
    _sub_60BBFB(this, arg);
}

_extern void _sub_60BC65(std::_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NavLightStyle *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NavLightStyle *> > > *const);
_inline std::_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NavLightStyle *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NavLightStyle *> > >::~_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NavLightStyle *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NavLightStyle *> > >() // 0x60BC65
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVNavLightStyle@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVNavLightStyle@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_60BC65(this);
}

_extern void _sub_60BC6E(std::_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,NavLightStyle *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NavLightStyle *> >,0> > *const);
_inline std::_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,NavLightStyle *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NavLightStyle *> >,0> >::~_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,NavLightStyle *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NavLightStyle *> >,0> >() // 0x60BC6E
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVNavLightStyle@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVNavLightStyle@@@std@@@2@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_60BC6E(this);
}

_extern void _sub_60BC77(std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,NavLightStyle *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NavLightStyle *> > > *const);
_inline std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,NavLightStyle *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NavLightStyle *> > >::~map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,NavLightStyle *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NavLightStyle *> > >() // 0x60BC77
{
    mangled_assert("??1?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVNavLightStyle@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVNavLightStyle@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_60BC77(this);
}

_extern void _sub_60BC7C(std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NavLightStyle *> *const);
_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NavLightStyle *>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NavLightStyle *>() // 0x60BC7C
{
    mangled_assert("??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVNavLightStyle@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_60BC7C(this);
}

_extern void _sub_60BC81(std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,NavLightStyle *> *const);
_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,NavLightStyle *>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,NavLightStyle *>() // 0x60BC81
{
    mangled_assert("??1?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVNavLightStyle@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_60BC81(this);
}

_extern void _sub_60BC86(NavLightStyleManager::Data *const);
_inline NavLightStyleManager::Data::~Data() // 0x60BC86
{
    mangled_assert("??1Data@NavLightStyleManager@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_60BC86(this);
}

_extern void _sub_60BC8E(NavLightStyle *const);
_inline NavLightStyle::~NavLightStyle() // 0x60BC8E
{
    mangled_assert("??1NavLightStyle@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_60BC8E(this);
}

_extern void _sub_60BC93(NavLightStyleManager *const);
NavLightStyleManager::~NavLightStyleManager() // 0x60BC93
{
    mangled_assert("??1NavLightStyleManager@@AAE@XZ");
    todo("implement");
    _sub_60BC93(this);
}

_extern NavLightStyle *_sub_60C419(NavLightStyleManager *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
NavLightStyle *NavLightStyleManager::findStyle(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x60C419
{
    mangled_assert("?findStyle@NavLightStyleManager@@QAEPAVNavLightStyle@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    NavLightStyle * __result = _sub_60C419(this, arg);
    return __result;
}

_extern NavLightStyle *_sub_60C44F(NavLightStyleManager *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
NavLightStyle *NavLightStyleManager::loadStyle(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x60C44F
{
    mangled_assert("?loadStyle@NavLightStyleManager@@AAEPAVNavLightStyle@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    NavLightStyle * __result = _sub_60C44F(this, arg);
    return __result;
}

/* ---------- private code */
#endif
