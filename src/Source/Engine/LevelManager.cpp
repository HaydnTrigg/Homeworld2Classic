#if 0
/* ---------- headers */

#include "decomp.h"
#include <xiosbase>
#include <assist\stlexsmallvector.h>
#include <xlocale>
#include <stdexcept>
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <App\PlayerProfileGameOptions.h>
#include <KeyBindings.h>
#include <new>
#include <config.h>
#include <platform\keydefines.h>
#include <xstddef>
#include <type_traits>
#include <xlocinfo>
#include <LuaLoadLevel.h>
#include <Scar\Graphics\LuaLight.h>
#include <xutility>
#include <xatomic0.h>
#include <utility>
#include <iosfwd>
#include <Scar\Graphics\LuaFog.h>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <Scar\Graphics\LuaShadow.h>
#include <Scar\LuaSound.h>
#include <list>
#include <assist\fixedstring.h>
#include <assist\stlexstring.h>
#include <Mathlib\vector3.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <App\PlayerProfileMan.h>
#include <App\PlayerProfile.h>
#include <stack>
#include <luaconfig\luaconfig.h>
#include <fileio\filestream.h>
#include <lua.h>
#include <Mathlib\vector2.h>
#include <xfacet>
#include <campaign.h>
#include <scripting.h>
#include <scriptaccess.h>
#include <scripttypedef.h>
#include <assist\typemagic.h>
#include <fileio\filepath.h>
#include <localizer\localizer.h>
#include <util\colour.h>
#include <Race.h>
#include <savegamedef.h>
#include <LevelManager.h>
#include <LevelDesc.h>
#include <Hash.h>
#include <fileio\md5.h>
#include <system_error>
#include <luaconfig\luabinding.h>
#include <sstream>
#include <string>
#include <ostream>
#include <ios>
#include <algorithm>
#include <streambuf>

/* ---------- constants */

/* ---------- definitions */

typedef unsigned __int32 LevelHandle;
typedef std::vector<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int> > > LevelList;
typedef std::map<unsigned int,LevelDesc,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,LevelDesc> > > LevelMap;
typedef std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > ChatNamesList;
typedef wchar_t char_type;
typedef std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > stl_string;
typedef std::vector<unsigned int,std::allocator<bool> > _Vectype;
typedef __int32 _Dift;
typedef unsigned __int32 _Sizet;
typedef std::_Vb_const_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > > _Mytype;
typedef std::_Vb_reference<std::_Wrap_alloc<std::allocator<unsigned int> > > _Reft;
typedef std::basic_ostream<char,std::char_traits<char> > _Myos;

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern LevelManager *s_instance; // 0x848AC0
    extern bool s_compatibleSources[4][4]; // 0x83C238
    extern char const *LUALIB_LIST[5]; // 0x848AC4
}

/* ---------- public code */

_extern _sub_60256D(LevelManager *const, char const *, char const *);
LevelManager::LevelManager(char const *, char const *) // 0x60256D
{
    mangled_assert("??0LevelManager@@AAE@PBD0@Z");
    todo("implement");
    _sub_60256D(this, arg, arg);
}

_extern void _sub_6026D9(std::_Tree_buy<std::pair<unsigned int const ,LevelDesc>,std::allocator<std::pair<unsigned int const ,LevelDesc> > > *const);
_inline std::_Tree_buy<std::pair<unsigned int const ,LevelDesc>,std::allocator<std::pair<unsigned int const ,LevelDesc> > >::~_Tree_buy<std::pair<unsigned int const ,LevelDesc>,std::allocator<std::pair<unsigned int const ,LevelDesc> > >() // 0x6026D9
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBIVLevelDesc@@@std@@V?$allocator@U?$pair@$$CBIVLevelDesc@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6026D9(this);
}

_extern void _sub_6026E2(std::_Tree_comp<0,std::_Tmap_traits<unsigned int,LevelDesc,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,LevelDesc> >,0> > *const);
_inline std::_Tree_comp<0,std::_Tmap_traits<unsigned int,LevelDesc,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,LevelDesc> >,0> >::~_Tree_comp<0,std::_Tmap_traits<unsigned int,LevelDesc,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,LevelDesc> >,0> >() // 0x6026E2
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@IVLevelDesc@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIVLevelDesc@@@std@@@3@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6026E2(this);
}

_extern void _sub_6026EB(std::map<unsigned int,LevelDesc,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,LevelDesc> > > *const);
_inline std::map<unsigned int,LevelDesc,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,LevelDesc> > >::~map<unsigned int,LevelDesc,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,LevelDesc> > >() // 0x6026EB
{
    mangled_assert("??1?$map@IVLevelDesc@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIVLevelDesc@@@std@@@3@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6026EB(this);
}

_extern void _sub_6026F0(std::pair<unsigned int const ,LevelDesc> *const);
_inline std::pair<unsigned int const ,LevelDesc>::~pair<unsigned int const ,LevelDesc>() // 0x6026F0
{
    mangled_assert("??1?$pair@$$CBIVLevelDesc@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6026F0(this);
}

_extern void _sub_6026F1(std::pair<unsigned int,LevelDesc> *const);
_inline std::pair<unsigned int,LevelDesc>::~pair<unsigned int,LevelDesc>() // 0x6026F1
{
    mangled_assert("??1?$pair@IVLevelDesc@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6026F1(this);
}

_extern void _sub_6026F2(LevelDesc *const);
_inline LevelDesc::~LevelDesc() // 0x6026F2
{
    mangled_assert("??1LevelDesc@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6026F2(this);
}

_extern void _sub_602B4D(LevelManager const *const, LevelDesc::Source, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &);
void LevelManager::GetDirectory(LevelDesc::Source, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &) const // 0x602B4D
{
    mangled_assert("?GetDirectory@LevelManager@@QBEXW4Source@LevelDesc@@AAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    _sub_602B4D(this, arg, arg);
}

_extern bool _sub_602D6F(LevelManager const *const, LevelDesc::Source, char const *, LevelDesc &);
bool LevelManager::LoadDescription(LevelDesc::Source, char const *, LevelDesc &) const // 0x602D6F
{
    mangled_assert("?LoadDescription@LevelManager@@ABE_NW4Source@LevelDesc@@PBDAAV3@@Z");
    todo("implement");
    bool __result = _sub_602D6F(this, arg, arg, arg);
    return __result;
}

_extern LevelDesc const *_sub_602BAF(LevelManager const *const, unsigned __int32 const &);
LevelDesc const *LevelManager::GetLevel(unsigned __int32 const &) const // 0x602BAF
{
    mangled_assert("?GetLevel@LevelManager@@QBEPBVLevelDesc@@ABI@Z");
    todo("implement");
    LevelDesc const * __result = _sub_602BAF(this, arg);
    return __result;
}

_extern LevelDesc const *_sub_602C1F(LevelManager const *const, LevelDesc::Source, char const *);
LevelDesc const *LevelManager::GetLevel(LevelDesc::Source, char const *) const // 0x602C1F
{
    mangled_assert("?GetLevel@LevelManager@@QBEPBVLevelDesc@@W4Source@2@PBD@Z");
    todo("implement");
    LevelDesc const * __result = _sub_602C1F(this, arg, arg);
    return __result;
}

_extern LevelDesc const *_sub_602BD3(LevelManager const *const, MD5Hash const &);
LevelDesc const *LevelManager::GetLevel(MD5Hash const &) const // 0x602BD3
{
    mangled_assert("?GetLevel@LevelManager@@QBEPBVLevelDesc@@ABVMD5Hash@@@Z");
    todo("implement");
    LevelDesc const * __result = _sub_602BD3(this, arg);
    return __result;
}

_extern bool _sub_602CC6(LevelManager *const, std::vector<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int> > > &);
bool LevelManager::GetMultiplayerLevels(std::vector<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int> > > &) // 0x602CC6
{
    mangled_assert("?GetMultiplayerLevels@LevelManager@@QAE_NAAV?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@I@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@I@std@@@2@@std@@@Z");
    todo("implement");
    bool __result = _sub_602CC6(this, arg);
    return __result;
}

_extern void _sub_6029D7(LevelManager *const);
void LevelManager::FindCampaignlevels() // 0x6029D7
{
    mangled_assert("?FindCampaignlevels@LevelManager@@QAEXXZ");
    todo("implement");
    _sub_6029D7(this);
}

_extern void _sub_602AB0(LevelManager *const, char const *, LevelDesc::Source);
void LevelManager::FindMultiplayerLevels(char const *, LevelDesc::Source) // 0x602AB0
{
    mangled_assert("?FindMultiplayerLevels@LevelManager@@AAEXPBDW4Source@LevelDesc@@@Z");
    todo("implement");
    _sub_602AB0(this, arg, arg);
}

_extern bool _sub_603244(LevelManager *const, char const *, bool);
bool LevelManager::LoadLevel(char const *, bool) // 0x603244
{
    mangled_assert("?LoadLevel@LevelManager@@QAE_NPBD_N@Z");
    todo("implement");
    bool __result = _sub_603244(this, arg, arg);
    return __result;
}

_extern LevelDesc const *_sub_6032E7(LevelManager const *const, MD5Hash const &);
LevelDesc const *LevelManager::LoadProfileLevel(MD5Hash const &) const // 0x6032E7
{
    mangled_assert("?LoadProfileLevel@LevelManager@@ABEPBVLevelDesc@@ABVMD5Hash@@@Z");
    todo("implement");
    LevelDesc const * __result = _sub_6032E7(this, arg);
    return __result;
}

_extern bool _sub_603434(LevelManager const *const, MD5Hash const &, char const *, unsigned char const *, unsigned char const *);
bool LevelManager::SaveLevelFile(MD5Hash const &, char const *, unsigned char const *, unsigned char const *) const // 0x603434
{
    mangled_assert("?SaveLevelFile@LevelManager@@QBE_NABVMD5Hash@@PBDPBE2@Z");
    todo("implement");
    bool __result = _sub_603434(this, arg, arg, arg, arg);
    return __result;
}

_extern LevelManager *_sub_603BF0();
LevelManager *LevelManager::instance() // 0x603BF0
{
    mangled_assert("?instance@LevelManager@@SGPAV1@XZ");
    todo("implement");
    LevelManager * __result = _sub_603BF0();
    return __result;
}

_extern bool _sub_6033CE(char const *, char const *);
bool LevelManager::Restart(char const *levelDir0, char const *levelDir1) // 0x6033CE
{
    mangled_assert("?Restart@LevelManager@@SG_NPBD0@Z");
    todo("implement");
    bool __result = _sub_6033CE(levelDir0, levelDir1);
    return __result;
}

_extern bool _sub_60351A();
bool LevelManager::Shutdown() // 0x60351A
{
    mangled_assert("?Shutdown@LevelManager@@SG_NXZ");
    todo("implement");
    bool __result = _sub_60351A();
    return __result;
}

/* ---------- private code */
#endif
