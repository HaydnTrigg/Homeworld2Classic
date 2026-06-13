#if 0
/* ---------- headers */

#include "decomp.h"
#include <luaconfig\luabinding.h>
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
#include <fileio\bytestream.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <list>
#include <luaconfig\luaconfig.h>
#include <lua.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\vector2.h>
#include <Mathlib\mathutil.h>
#include <assist\typemagic.h>
#include <Mathlib\luamathbinding.h>
#include <luaconfig\luautils.h>
#include <profile\profile.h>
#include <iostream>
#include <Ship\FlightManeuver.h>
#include <fileio\filepath.h>
#include <Ship\FlightManeuverManager.h>
#include <string>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern FlightManeuverManager *FlightManeuverManager::s_instance; // 0x843D7C

/* ---------- private variables */

_static
{
    extern FlightManeuver *currentFlightManeuver; // 0x843D78
}

/* ---------- public code */

_extern FlightManeuverManager *_sub_49D167();
FlightManeuverManager *FlightManeuverManager::instance() // 0x49D167
{
    mangled_assert("?instance@FlightManeuverManager@@SGPAV1@XZ");
    todo("implement");
    FlightManeuverManager * __result = _sub_49D167();
    return __result;
}

_extern bool _sub_49D5B8();
bool FlightManeuverManager::release() // 0x49D5B8
{
    mangled_assert("?release@FlightManeuverManager@@SG_NXZ");
    todo("implement");
    bool __result = _sub_49D5B8();
    return __result;
}

_extern FlightManeuverManager *_sub_49CD9E();
FlightManeuverManager *FlightManeuverManager::create() // 0x49CD9E
{
    mangled_assert("?create@FlightManeuverManager@@CGPAV1@XZ");
    todo("implement");
    FlightManeuverManager * __result = _sub_49CD9E();
    return __result;
}

_extern _sub_49C6EE(FlightManeuverManager *const);
FlightManeuverManager::FlightManeuverManager() // 0x49C6EE
{
    mangled_assert("??0FlightManeuverManager@@AAE@XZ");
    todo("implement");
    _sub_49C6EE(this);
}

_extern _sub_49C72E(FlightManeuver::FlightPoint *const);
_inline FlightManeuver::FlightPoint::FlightPoint() // 0x49C72E
{
    mangled_assert("??0FlightPoint@FlightManeuver@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_49C72E(this);
}

_extern void _sub_49C758(std::_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int> > > *const);
_inline std::_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int> > >::~_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int> > >() // 0x49C758
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@I@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@I@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_49C758(this);
}

_extern void _sub_49C761(std::_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int> >,0> > *const);
_inline std::_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int> >,0> >::~_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int> >,0> >() // 0x49C761
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@IU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@I@std@@@2@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_49C761(this);
}

_extern void _sub_49C76A(std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int> > > *const);
_inline std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int> > >::~map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int> > >() // 0x49C76A
{
    mangled_assert("??1?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@IU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@I@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_49C76A(this);
}

_extern void _sub_49C76F(std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int> *const);
_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int>() // 0x49C76F
{
    mangled_assert("??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@I@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_49C76F(this);
}

_extern void _sub_49C779(FlightManeuver *const);
_inline FlightManeuver::~FlightManeuver() // 0x49C779
{
    mangled_assert("??1FlightManeuver@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_49C779(this);
}

_extern void _sub_49C78C(FlightManeuverManager *const);
FlightManeuverManager::~FlightManeuverManager() // 0x49C78C
{
    mangled_assert("??1FlightManeuverManager@@AAE@XZ");
    todo("implement");
    _sub_49C78C(this);
}

_extern void _sub_49D5EC(FlightManeuverManager *const);
void FlightManeuverManager::resetManeuvers() // 0x49D5EC
{
    mangled_assert("?resetManeuvers@FlightManeuverManager@@AAEXXZ");
    todo("implement");
    _sub_49D5EC(this);
}

_extern unsigned __int32 _sub_49D0FB(FlightManeuverManager const *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
unsigned __int32 FlightManeuverManager::getManeuverID(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) const // 0x49D0FB
{
    mangled_assert("?getManeuverID@FlightManeuverManager@@QBEIABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    unsigned __int32 __result = _sub_49D0FB(this, arg);
    return __result;
}

_extern FlightManeuver const *_sub_49D0EB(FlightManeuverManager const *const, unsigned __int32);
FlightManeuver const *FlightManeuverManager::getManeuver(unsigned __int32) const // 0x49D0EB
{
    mangled_assert("?getManeuver@FlightManeuverManager@@QBEPBVFlightManeuver@@I@Z");
    todo("implement");
    FlightManeuver const * __result = _sub_49D0EB(this, arg);
    return __result;
}

_extern bool _sub_49D17B(FlightManeuverManager const *const, unsigned __int32);
bool FlightManeuverManager::isValidID(unsigned __int32) const // 0x49D17B
{
    mangled_assert("?isValidID@FlightManeuverManager@@QBE_NI@Z");
    todo("implement");
    bool __result = _sub_49D17B(this, arg);
    return __result;
}

_extern bool _sub_49D19D(FlightManeuverManager *const, LuaConfig &);
bool FlightManeuverManager::loadManeuver(LuaConfig &) // 0x49D19D
{
    mangled_assert("?loadManeuver@FlightManeuverManager@@AAE_NAAVLuaConfig@@@Z");
    todo("implement");
    bool __result = _sub_49D19D(this, arg);
    return __result;
}

_extern void _sub_49D405(FlightManeuverManager *const);
void FlightManeuverManager::loadManeuvers() // 0x49D405
{
    mangled_assert("?loadManeuvers@FlightManeuverManager@@AAEXXZ");
    todo("implement");
    _sub_49D405(this);
}

_extern void _sub_49D5DC(FlightManeuverManager *const);
void FlightManeuverManager::reloadManeuvers() // 0x49D5DC
{
    mangled_assert("?reloadManeuvers@FlightManeuverManager@@QAEXXZ");
    todo("implement");
    _sub_49D5DC(this);
}

_extern bool _sub_49D63E();
bool FlightManeuverManager::startup() // 0x49D63E
{
    mangled_assert("?startup@FlightManeuverManager@@SG_NXZ");
    todo("implement");
    bool __result = _sub_49D63E();
    return __result;
}

_extern bool _sub_49D62C();
bool FlightManeuverManager::shutdown() // 0x49D62C
{
    mangled_assert("?shutdown@FlightManeuverManager@@SG_NXZ");
    todo("implement");
    bool __result = _sub_49D62C();
    return __result;
}

/* ---------- private code */
#endif
