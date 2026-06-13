#if 0
/* ---------- headers */

#include "decomp.h"
#include <boost\scoped_ptr.hpp>
#include <xstring>
#include <xmemory0>
#include <Render\FxGL\pch.h>
#include <memory\memorylib.h>
#include <Render\FxGL\VarMulti.h>
#include <util\colour.h>
#include <new>
#include <xstddef>
#include <luaconfig\luaconfig.h>
#include <type_traits>
#include <assist\typemagic.h>
#include <lua\lua.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <algorithm>
#include <Mathlib\matrix4.h>
#include <xmemory>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <fileio\filepath.h>
#include <fileio\fileioexports.h>
#include <fileio\bytestream.h>
#include <debug\db.h>
#include <assist\fixedstring.h>
#include <assist\stlexstring.h>
#include <list>
#include <wchar.h>
#include <string>
#include <Render\FxGL\FXLoad.h>
#include <Render\FxGL\FXManager.h>
#include <debug\ctassert.h>
#include <vector>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern bool FXLoad(char const *fxname, FXManager::Style &style, std::list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,VarMulti>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,VarMulti> > > &properties);
extern bool FXSave(char const *fxname, FXManager::Style const &style, std::list<FXManager::Type::Property,std::allocator<FXManager::Type::Property> > const &properties);

_static std::basic_string<char,std::char_traits<char>,std::allocator<char> > GetFileName(char const *fxname);
_static char const *GetStyleName(FXManager::Style const &s);
_static bool ReadStyle(LuaConfig &lc, FXManager::Style &style);
_static char const *GetPropCount(unsigned __int32 c);
_static char const *GetPropName(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &s);
_static char const *GetPropType(VarMulti::VarType const &t);
_static void AddPropVar(LuaConfig &lc, VarMulti const &v);
_static bool ReadType(LuaConfig &lc, VarMulti::VarType &type);
_static bool ReadValue(LuaConfig &lc, VarMulti &value, VarMulti::VarType const &type);
_static bool ReadProperty(LuaConfig &lc, char *name, unsigned __int32 maxn, VarMulti &value);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern bool _sub_6F5E28(char const *, FXManager::Style &, std::list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,VarMulti>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,VarMulti> > > &);
bool FXLoad(char const *fxname, FXManager::Style &style, std::list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,VarMulti>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,VarMulti> > > &properties) // 0x6F5E28
{
    mangled_assert("?FXLoad@@YG_NPBDAAW4Style@FXManager@@AAV?$list@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VVarMulti@@@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VVarMulti@@@std@@@2@@std@@@Z");
    todo("implement");
    bool __result = _sub_6F5E28(fxname, style, properties);
    return __result;
}

_extern bool _sub_6F60CD(char const *, FXManager::Style const &, std::list<FXManager::Type::Property,std::allocator<FXManager::Type::Property> > const &);
bool FXSave(char const *fxname, FXManager::Style const &style, std::list<FXManager::Type::Property,std::allocator<FXManager::Type::Property> > const &properties) // 0x6F60CD
{
    mangled_assert("?FXSave@@YG_NPBDABW4Style@FXManager@@ABV?$list@UProperty@Type@FXManager@@V?$allocator@UProperty@Type@FXManager@@@std@@@std@@@Z");
    todo("implement");
    bool __result = _sub_6F60CD(fxname, style, properties);
    return __result;
}

/* ---------- private code */

_extern std::basic_string<char,std::char_traits<char>,std::allocator<char> > _sub_6F6266(char const *);
_static std::basic_string<char,std::char_traits<char>,std::allocator<char> > GetFileName(char const *fxname) // 0x6F6266
{
    mangled_assert("GetFileName");
    todo("implement");
    std::string __result = _sub_6F6266(fxname);
    return __result;
}

_extern char const *_sub_6F6317(FXManager::Style const &);
_static char const *GetStyleName(FXManager::Style const &s) // 0x6F6317
{
    mangled_assert("GetStyleName");
    todo("implement");
    char const * __result = _sub_6F6317(s);
    return __result;
}

_extern bool _sub_6F63B9(LuaConfig &, FXManager::Style &);
_static bool ReadStyle(LuaConfig &lc, FXManager::Style &style) // 0x6F63B9
{
    mangled_assert("ReadStyle");
    todo("implement");
    bool __result = _sub_6F63B9(lc, style);
    return __result;
}

_extern char const *_sub_6F62C9(unsigned __int32);
_static char const *GetPropCount(unsigned __int32 c) // 0x6F62C9
{
    mangled_assert("GetPropCount");
    todo("implement");
    char const * __result = _sub_6F62C9(c);
    return __result;
}

_extern char const *_sub_6F62E8(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
_static char const *GetPropName(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &s) // 0x6F62E8
{
    mangled_assert("GetPropName");
    todo("implement");
    char const * __result = _sub_6F62E8(s);
    return __result;
}

_extern char const *_sub_6F62F7(VarMulti::VarType const &);
_static char const *GetPropType(VarMulti::VarType const &t) // 0x6F62F7
{
    mangled_assert("GetPropType");
    todo("implement");
    char const * __result = _sub_6F62F7(t);
    return __result;
}

_extern void _sub_6F5738(LuaConfig &, VarMulti const &);
_static void AddPropVar(LuaConfig &lc, VarMulti const &v) // 0x6F5738
{
    mangled_assert("AddPropVar");
    todo("implement");
    _sub_6F5738(lc, v);
}

_extern bool _sub_6F641D(LuaConfig &, VarMulti::VarType &);
_static bool ReadType(LuaConfig &lc, VarMulti::VarType &type) // 0x6F641D
{
    mangled_assert("ReadType");
    todo("implement");
    bool __result = _sub_6F641D(lc, type);
    return __result;
}

_extern bool _sub_6F6488(LuaConfig &, VarMulti &, VarMulti::VarType const &);
_static bool ReadValue(LuaConfig &lc, VarMulti &value, VarMulti::VarType const &type) // 0x6F6488
{
    mangled_assert("ReadValue");
    todo("implement");
    bool __result = _sub_6F6488(lc, value, type);
    return __result;
}

_extern bool _sub_6F6337(LuaConfig &, char *, unsigned __int32, VarMulti &);
_static bool ReadProperty(LuaConfig &lc, char *name, unsigned __int32 maxn, VarMulti &value) // 0x6F6337
{
    mangled_assert("ReadProperty");
    todo("implement");
    bool __result = _sub_6F6337(lc, name, maxn, value);
    return __result;
}
#endif
