#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <luaconfig\luabinding.h>
#include <pch.h>
#include <FamilyListMgr.h>
#include <FamilyList.h>
#include <Family.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <luaconfig\luaconfig.h>
#include <lua.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <boost\cstdint.hpp>
#include <Race.h>
#include <savegameimpl.h>
#include <savegamedata.h>
#include <savestream.h>
#include <savegamedef.h>
#include <UnitCaps\UnitCaps.h>
#include <wchar.h>

/* ---------- constants */

/* ---------- definitions */

typedef UnitCaps type_class;

/* ---------- prototypes */

/* ---------- globals */

extern char const UnitCaps::m_saveToken[0]; // 0x7A7B60
extern SaveData const UnitCaps::m_saveData[2]; // 0x7A7B70

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_5D563A(LuaBinding::ObjInternal2<char const *,unsigned int,void,LuaBinding::Functor2MemberNonConst<char const *,unsigned int,void,UnitCaps> > *const);
_inline LuaBinding::ObjInternal2<char const *,unsigned int,void,LuaBinding::Functor2MemberNonConst<char const *,unsigned int,void,UnitCaps> >::~ObjInternal2<char const *,unsigned int,void,LuaBinding::Functor2MemberNonConst<char const *,unsigned int,void,UnitCaps> >() // 0x5D563A
{
    mangled_assert("??1?$ObjInternal2@PBDIXV?$Functor2MemberNonConst@PBDIXVUnitCaps@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5D563A(this);
}

_extern void _sub_5D5640(LuaBinding::ObjInternal3<char const *,char const *,unsigned int,void,LuaBinding::Functor3MemberNonConst<char const *,char const *,unsigned int,void,UnitCaps> > *const);
_inline LuaBinding::ObjInternal3<char const *,char const *,unsigned int,void,LuaBinding::Functor3MemberNonConst<char const *,char const *,unsigned int,void,UnitCaps> >::~ObjInternal3<char const *,char const *,unsigned int,void,LuaBinding::Functor3MemberNonConst<char const *,char const *,unsigned int,void,UnitCaps> >() // 0x5D5640
{
    mangled_assert("??1?$ObjInternal3@PBDPBDIXV?$Functor3MemberNonConst@PBDPBDIXVUnitCaps@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5D5640(this);
}

_extern unsigned __int32 _sub_5D586A(UnitCaps const *const, __int32, __int32);
unsigned __int32 UnitCaps::GetFamilyUnitCaps(__int32, __int32) const // 0x5D586A
{
    mangled_assert("?GetFamilyUnitCaps@UnitCaps@@QBEIHH@Z");
    todo("implement");
    unsigned __int32 __result = _sub_5D586A(this, arg, arg);
    return __result;
}

_extern unsigned __int32 _sub_5D588F(UnitCaps const *const, __int32, __int32);
unsigned __int32 UnitCaps::GetShipTypeUnitCaps(__int32, __int32) const // 0x5D588F
{
    mangled_assert("?GetShipTypeUnitCaps@UnitCaps@@QBEIHH@Z");
    todo("implement");
    unsigned __int32 __result = _sub_5D588F(this, arg, arg);
    return __result;
}

_extern bool _sub_5D58B7(UnitCaps const *const, std::vector<std::map<int,unsigned int,std::less<int>,std::allocator<std::pair<int const ,unsigned int> > >,std::allocator<std::map<int,unsigned int,std::less<int>,std::allocator<std::pair<int const ,unsigned int> > > > > const &, __int32, __int32, unsigned __int32 &);
bool UnitCaps::GetUnitCaps(std::vector<std::map<int,unsigned int,std::less<int>,std::allocator<std::pair<int const ,unsigned int> > >,std::allocator<std::map<int,unsigned int,std::less<int>,std::allocator<std::pair<int const ,unsigned int> > > > > const &, __int32, __int32, unsigned __int32 &) const // 0x5D58B7
{
    mangled_assert("?GetUnitCaps@UnitCaps@@ABE_NABV?$vector@V?$map@HIU?$less@H@std@@V?$allocator@U?$pair@$$CBHI@std@@@2@@std@@V?$allocator@V?$map@HIU?$less@H@std@@V?$allocator@U?$pair@$$CBHI@std@@@2@@std@@@2@@std@@HHAAI@Z");
    todo("implement");
    bool __result = _sub_5D58B7(this, arg, arg, arg, arg);
    return __result;
}

_extern void _sub_5D5777(UnitCaps *const);
void UnitCaps::Clear() // 0x5D5777
{
    mangled_assert("?Clear@UnitCaps@@AAEXXZ");
    todo("implement");
    _sub_5D5777(this);
}

_extern void _sub_5D5A3B(UnitCaps *const, char const *, unsigned __int32);
void UnitCaps::UnitCapsFamily(char const *, unsigned __int32) // 0x5D5A3B
{
    mangled_assert("?UnitCapsFamily@UnitCaps@@AAEXPBDI@Z");
    todo("implement");
    _sub_5D5A3B(this, arg, arg);
}

_extern void _sub_5D5AF5(UnitCaps *const, char const *, char const *, unsigned __int32);
void UnitCaps::UnitCapsFamilyOverride(char const *, char const *, unsigned __int32) // 0x5D5AF5
{
    mangled_assert("?UnitCapsFamilyOverride@UnitCaps@@AAEXPBD0I@Z");
    todo("implement");
    _sub_5D5AF5(this, arg, arg, arg);
}

_extern void _sub_5D5BFB(UnitCaps *const, char const *, unsigned __int32);
void UnitCaps::UnitCapsShipType(char const *, unsigned __int32) // 0x5D5BFB
{
    mangled_assert("?UnitCapsShipType@UnitCaps@@AAEXPBDI@Z");
    todo("implement");
    _sub_5D5BFB(this, arg, arg);
}

_extern void _sub_5D5CB5(UnitCaps *const, char const *, char const *, unsigned __int32);
void UnitCaps::UnitCapsShipTypeOverride(char const *, char const *, unsigned __int32) // 0x5D5CB5
{
    mangled_assert("?UnitCapsShipTypeOverride@UnitCaps@@AAEXPBD0I@Z");
    todo("implement");
    _sub_5D5CB5(this, arg, arg, arg);
}

_extern bool _sub_5D58FF(UnitCaps *const, char const *);
bool UnitCaps::LoadUnitCap(char const *) // 0x5D58FF
{
    mangled_assert("?LoadUnitCap@UnitCaps@@QAE_NPBD@Z");
    todo("implement");
    bool __result = _sub_5D58FF(this, arg);
    return __result;
}

_extern void _sub_5D61E6(UnitCaps *const);
void UnitCaps::postRestore() // 0x5D61E6
{
    mangled_assert("?postRestore@UnitCaps@@UAEXXZ");
    todo("implement");
    _sub_5D61E6(this);
}

_extern void _sub_5D62FB(std::map<int,unsigned int,std::less<int>,std::allocator<std::pair<int const ,unsigned int> > > const &, SaveGameData *);
void UnitCaps::saveUnitCapsMap(std::map<int,unsigned int,std::less<int>,std::allocator<std::pair<int const ,unsigned int> > > const &map, SaveGameData *saveGameData) // 0x5D62FB
{
    mangled_assert("?saveUnitCapsMap@UnitCaps@@SGXABV?$map@HIU?$less@H@std@@V?$allocator@U?$pair@$$CBHI@std@@@2@@std@@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_5D62FB(map, saveGameData);
}

_extern void _sub_5D615B(std::map<int,unsigned int,std::less<int>,std::allocator<std::pair<int const ,unsigned int> > > &, SaveGameData *);
void UnitCaps::loadUnitCapsMap(std::map<int,unsigned int,std::less<int>,std::allocator<std::pair<int const ,unsigned int> > > &map, SaveGameData *saveGameData) // 0x5D615B
{
    mangled_assert("?loadUnitCapsMap@UnitCaps@@SGXAAV?$map@HIU?$less@H@std@@V?$allocator@U?$pair@$$CBHI@std@@@2@@std@@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_5D615B(map, saveGameData);
}

_extern void _sub_5D4F69(void *, SaveGameData *, SaveType);
void UnitCaps::saveMap(void *objectPtr, SaveGameData *saveGameData, SaveType savetype) // 0x5D4F69
{
    mangled_assert("?saveMap@UnitCaps@@SGXPAXPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    _sub_5D4F69(objectPtr, saveGameData, savetype);
}

_extern void _sub_5D4FB5(void *, SaveGameData *);
void UnitCaps::loadMap(void *objectPtr, SaveGameData *saveGameData) // 0x5D4FB5
{
    mangled_assert("?loadMap@UnitCaps@@SGXPAXPAVSaveGameData@@@Z");
    todo("implement");
    _sub_5D4FB5(objectPtr, saveGameData);
}

_extern bool _sub_5D6288(UnitCaps *const, SaveGameData *);
bool UnitCaps::restore(SaveGameData *) // 0x5D6288
{
    mangled_assert("?restore@UnitCaps@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_5D6288(this, arg);
    return __result;
}

_extern bool _sub_5D62C6(UnitCaps *const, SaveGameData *, SaveType);
bool UnitCaps::save(SaveGameData *, SaveType) // 0x5D62C6
{
    mangled_assert("?save@UnitCaps@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_5D62C6(this, arg, arg);
    return __result;
}

/* ---------- private code */
#endif
