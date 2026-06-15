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

LevelManager::LevelManager(char const *, char const *) // 0x60256D
{
    mangled_assert("??0LevelManager@@AAE@PBD0@Z");
    todo("implement");
}

_inline std::_Tree_buy<std::pair<unsigned int const ,LevelDesc>,std::allocator<std::pair<unsigned int const ,LevelDesc> > >::~_Tree_buy<std::pair<unsigned int const ,LevelDesc>,std::allocator<std::pair<unsigned int const ,LevelDesc> > >() // 0x6026D9
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBIVLevelDesc@@@std@@V?$allocator@U?$pair@$$CBIVLevelDesc@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_comp<0,std::_Tmap_traits<unsigned int,LevelDesc,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,LevelDesc> >,0> >::~_Tree_comp<0,std::_Tmap_traits<unsigned int,LevelDesc,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,LevelDesc> >,0> >() // 0x6026E2
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@IVLevelDesc@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIVLevelDesc@@@std@@@3@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::map<unsigned int,LevelDesc,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,LevelDesc> > >::~map<unsigned int,LevelDesc,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,LevelDesc> > >() // 0x6026EB
{
    mangled_assert("??1?$map@IVLevelDesc@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIVLevelDesc@@@std@@@3@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<unsigned int const ,LevelDesc>::~pair<unsigned int const ,LevelDesc>() // 0x6026F0
{
    mangled_assert("??1?$pair@$$CBIVLevelDesc@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<unsigned int,LevelDesc>::~pair<unsigned int,LevelDesc>() // 0x6026F1
{
    mangled_assert("??1?$pair@IVLevelDesc@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LevelDesc::~LevelDesc() // 0x6026F2
{
    mangled_assert("??1LevelDesc@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

void LevelManager::GetDirectory(LevelDesc::Source, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &) const // 0x602B4D
{
    mangled_assert("?GetDirectory@LevelManager@@QBEXW4Source@LevelDesc@@AAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

bool LevelManager::LoadDescription(LevelDesc::Source, char const *, LevelDesc &) const // 0x602D6F
{
    mangled_assert("?LoadDescription@LevelManager@@ABE_NW4Source@LevelDesc@@PBDAAV3@@Z");
    todo("implement");
}

LevelDesc const *LevelManager::GetLevel(unsigned __int32 const &) const // 0x602BAF
{
    mangled_assert("?GetLevel@LevelManager@@QBEPBVLevelDesc@@ABI@Z");
    todo("implement");
}

LevelDesc const *LevelManager::GetLevel(LevelDesc::Source, char const *) const // 0x602C1F
{
    mangled_assert("?GetLevel@LevelManager@@QBEPBVLevelDesc@@W4Source@2@PBD@Z");
    todo("implement");
}

LevelDesc const *LevelManager::GetLevel(MD5Hash const &) const // 0x602BD3
{
    mangled_assert("?GetLevel@LevelManager@@QBEPBVLevelDesc@@ABVMD5Hash@@@Z");
    todo("implement");
}

bool LevelManager::GetMultiplayerLevels(std::vector<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int> > > &) // 0x602CC6
{
    mangled_assert("?GetMultiplayerLevels@LevelManager@@QAE_NAAV?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@I@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@I@std@@@2@@std@@@Z");
    todo("implement");
}

void LevelManager::FindCampaignlevels() // 0x6029D7
{
    mangled_assert("?FindCampaignlevels@LevelManager@@QAEXXZ");
    todo("implement");
}

void LevelManager::FindMultiplayerLevels(char const *, LevelDesc::Source) // 0x602AB0
{
    mangled_assert("?FindMultiplayerLevels@LevelManager@@AAEXPBDW4Source@LevelDesc@@@Z");
    todo("implement");
}

bool LevelManager::LoadLevel(char const *, bool) // 0x603244
{
    mangled_assert("?LoadLevel@LevelManager@@QAE_NPBD_N@Z");
    todo("implement");
}

LevelDesc const *LevelManager::LoadProfileLevel(MD5Hash const &) const // 0x6032E7
{
    mangled_assert("?LoadProfileLevel@LevelManager@@ABEPBVLevelDesc@@ABVMD5Hash@@@Z");
    todo("implement");
}

bool LevelManager::SaveLevelFile(MD5Hash const &, char const *, unsigned char const *, unsigned char const *) const // 0x603434
{
    mangled_assert("?SaveLevelFile@LevelManager@@QBE_NABVMD5Hash@@PBDPBE2@Z");
    todo("implement");
}

LevelManager *LevelManager::instance() // 0x603BF0
{
    mangled_assert("?instance@LevelManager@@SGPAV1@XZ");
    todo("implement");
}

bool LevelManager::Restart(char const *levelDir0, char const *levelDir1) // 0x6033CE
{
    mangled_assert("?Restart@LevelManager@@SG_NPBD0@Z");
    todo("implement");
}

bool LevelManager::Shutdown() // 0x60351A
{
    mangled_assert("?Shutdown@LevelManager@@SG_NXZ");
    todo("implement");
}

/* ---------- private code */
#endif
