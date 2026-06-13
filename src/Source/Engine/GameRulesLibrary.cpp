#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <io.h>
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <luaconfig\luaconfig.h>
#include <crtdefs.h>
#include <lua.h>
#include <App\PlayerProfileMan.h>
#include <App\PlayerProfile.h>
#include <LevelDesc.h>
#include <GameRulesLibrary.h>
#include <Hash.h>
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
#include <assist\fixedstring.h>
#include <map>
#include <xtree>
#include <fileio\archivemanager.h>
#include <App\PlayerProfileGameOptions.h>
#include <boost\scoped_ptr.hpp>
#include <KeyBindings.h>
#include <config.h>
#include <platform\keydefines.h>
#include <assist\typemagic.h>
#include <fileio\archive.h>
#include <fileio\archiveinternals.h>
#include <localizer\localizer.h>
#include <fileio\md5.h>
#include <platform\cmdline.h>
#include <platform\platformexports.h>
#include <LocalizerDirectory.h>
#include <fileio\filepath.h>
#include <wchar.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern GameRulesLibrary *GameRulesLibrary::s_instance; // 0x848874

/* ---------- private variables */

_static
{
    extern char const *k_ArchiveFileSignature; // 0x83C1A4
    extern char const *k_ArchiveMD5SecurityKey; // 0x83C1A8
    extern char const *k_ArchiveMD5RootSecurityKey; // 0x83C1AC
}

/* ---------- public code */

_extern _sub_5F63D0(GameRulesLibrary::GameRulesDescription *const, GameRulesLibrary::GameRulesDescription const &);
_inline GameRulesLibrary::GameRulesDescription::GameRulesDescription(GameRulesLibrary::GameRulesDescription const &) // 0x5F63D0
{
    mangled_assert("??0GameRulesDescription@GameRulesLibrary@@QAE@ABU01@@Z");
    compiler_generated();
    todo("implement");
    _sub_5F63D0(this, arg);
}

_extern _sub_5F643D(GameRulesLibrary::GameRulesDescription *const);
_inline GameRulesLibrary::GameRulesDescription::GameRulesDescription() // 0x5F643D
{
    mangled_assert("??0GameRulesDescription@GameRulesLibrary@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5F643D(this);
}

_extern bool _sub_5F735C();
bool GameRulesLibrary::Startup() // 0x5F735C
{
    mangled_assert("?Startup@GameRulesLibrary@@SG_NXZ");
    todo("implement");
    bool __result = _sub_5F735C();
    return __result;
}

_extern GameRulesLibrary *_sub_5F69FA();
GameRulesLibrary *GameRulesLibrary::Instance() // 0x5F69FA
{
    mangled_assert("?Instance@GameRulesLibrary@@SGPAV1@XZ");
    todo("implement");
    GameRulesLibrary * __result = _sub_5F69FA();
    return __result;
}

_extern bool _sub_5F7338();
bool GameRulesLibrary::Shutdown() // 0x5F7338
{
    mangled_assert("?Shutdown@GameRulesLibrary@@SG_NXZ");
    todo("implement");
    bool __result = _sub_5F7338();
    return __result;
}

_extern _sub_5F647C(GameRulesLibrary *const);
GameRulesLibrary::GameRulesLibrary() // 0x5F647C
{
    mangled_assert("??0GameRulesLibrary@@QAE@XZ");
    todo("implement");
    _sub_5F647C(this);
}

_extern void _sub_5F64B8(std::_Tree_buy<std::pair<MD5Hash const ,GameRulesLibrary::GameRulesDescription>,std::allocator<std::pair<MD5Hash const ,GameRulesLibrary::GameRulesDescription> > > *const);
_inline std::_Tree_buy<std::pair<MD5Hash const ,GameRulesLibrary::GameRulesDescription>,std::allocator<std::pair<MD5Hash const ,GameRulesLibrary::GameRulesDescription> > >::~_Tree_buy<std::pair<MD5Hash const ,GameRulesLibrary::GameRulesDescription>,std::allocator<std::pair<MD5Hash const ,GameRulesLibrary::GameRulesDescription> > >() // 0x5F64B8
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBVMD5Hash@@UGameRulesDescription@GameRulesLibrary@@@std@@V?$allocator@U?$pair@$$CBVMD5Hash@@UGameRulesDescription@GameRulesLibrary@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5F64B8(this);
}

_extern void _sub_5F64C1(std::_Tree_comp<0,std::_Tmap_traits<MD5Hash,GameRulesLibrary::GameRulesDescription,std::less<MD5Hash>,std::allocator<std::pair<MD5Hash const ,GameRulesLibrary::GameRulesDescription> >,0> > *const);
_inline std::_Tree_comp<0,std::_Tmap_traits<MD5Hash,GameRulesLibrary::GameRulesDescription,std::less<MD5Hash>,std::allocator<std::pair<MD5Hash const ,GameRulesLibrary::GameRulesDescription> >,0> >::~_Tree_comp<0,std::_Tmap_traits<MD5Hash,GameRulesLibrary::GameRulesDescription,std::less<MD5Hash>,std::allocator<std::pair<MD5Hash const ,GameRulesLibrary::GameRulesDescription> >,0> >() // 0x5F64C1
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@VMD5Hash@@UGameRulesDescription@GameRulesLibrary@@U?$less@VMD5Hash@@@std@@V?$allocator@U?$pair@$$CBVMD5Hash@@UGameRulesDescription@GameRulesLibrary@@@std@@@5@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5F64C1(this);
}

_extern void _sub_5F64D7(std::map<MD5Hash,GameRulesLibrary::GameRulesDescription,std::less<MD5Hash>,std::allocator<std::pair<MD5Hash const ,GameRulesLibrary::GameRulesDescription> > > *const);
_inline std::map<MD5Hash,GameRulesLibrary::GameRulesDescription,std::less<MD5Hash>,std::allocator<std::pair<MD5Hash const ,GameRulesLibrary::GameRulesDescription> > >::~map<MD5Hash,GameRulesLibrary::GameRulesDescription,std::less<MD5Hash>,std::allocator<std::pair<MD5Hash const ,GameRulesLibrary::GameRulesDescription> > >() // 0x5F64D7
{
    mangled_assert("??1?$map@VMD5Hash@@UGameRulesDescription@GameRulesLibrary@@U?$less@VMD5Hash@@@std@@V?$allocator@U?$pair@$$CBVMD5Hash@@UGameRulesDescription@GameRulesLibrary@@@std@@@5@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5F64D7(this);
}

_extern void _sub_5F64DC(std::pair<MD5Hash const ,GameRulesLibrary::GameRulesDescription> *const);
_inline std::pair<MD5Hash const ,GameRulesLibrary::GameRulesDescription>::~pair<MD5Hash const ,GameRulesLibrary::GameRulesDescription>() // 0x5F64DC
{
    mangled_assert("??1?$pair@$$CBVMD5Hash@@UGameRulesDescription@GameRulesLibrary@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5F64DC(this);
}

_extern void _sub_5F651F(GameRulesLibrary *const);
GameRulesLibrary::~GameRulesLibrary() // 0x5F651F
{
    mangled_assert("??1GameRulesLibrary@@QAE@XZ");
    todo("implement");
    _sub_5F651F(this);
}

_extern void _sub_5F64E4(std::pair<MD5Hash,GameRulesLibrary::GameRulesDescription> *const);
_inline std::pair<MD5Hash,GameRulesLibrary::GameRulesDescription>::~pair<MD5Hash,GameRulesLibrary::GameRulesDescription>() // 0x5F64E4
{
    mangled_assert("??1?$pair@VMD5Hash@@UGameRulesDescription@GameRulesLibrary@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5F64E4(this);
}

_extern GameRulesLibrary::GameRulesDescription &_sub_5F654A(GameRulesLibrary::GameRulesDescription *const, GameRulesLibrary::GameRulesDescription const &);
_inline GameRulesLibrary::GameRulesDescription &GameRulesLibrary::GameRulesDescription::operator=(GameRulesLibrary::GameRulesDescription const &) // 0x5F654A
{
    mangled_assert("??4GameRulesDescription@GameRulesLibrary@@QAEAAU01@ABU01@@Z");
    compiler_generated();
    todo("implement");
    GameRulesLibrary::GameRulesDescription & __result = _sub_5F654A(this, arg);
    return __result;
}

_extern void _sub_5F64EC(GameRulesLibrary::GameRulesDescription *const);
_inline GameRulesLibrary::GameRulesDescription::~GameRulesDescription() // 0x5F64EC
{
    mangled_assert("??1GameRulesDescription@GameRulesLibrary@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5F64EC(this);
}

_extern bool _sub_5F6B57(GameRulesLibrary *const);
bool GameRulesLibrary::ReadAllGameRules() // 0x5F6B57
{
    mangled_assert("?ReadAllGameRules@GameRulesLibrary@@AAE_NXZ");
    todo("implement");
    bool __result = _sub_5F6B57(this);
    return __result;
}

_extern void _sub_5F6E09(GameRulesLibrary *const, char const *);
void GameRulesLibrary::ReadGameRulesFromArchives(char const *) // 0x5F6E09
{
    mangled_assert("?ReadGameRulesFromArchives@GameRulesLibrary@@AAEXPBD@Z");
    todo("implement");
    _sub_5F6E09(this, arg);
}

_extern bool _sub_5F6A00(GameRulesLibrary *const, GameRulesLibrary::GameRulesDescription &, LuaConfig &);
bool GameRulesLibrary::ParseGameRulesInfo(GameRulesLibrary::GameRulesDescription &, LuaConfig &) // 0x5F6A00
{
    mangled_assert("?ParseGameRulesInfo@GameRulesLibrary@@AAE_NAAUGameRulesDescription@1@AAVLuaConfig@@@Z");
    todo("implement");
    bool __result = _sub_5F6A00(this, arg, arg);
    return __result;
}

_extern GameRulesLibrary::GameRulesDescription const *_sub_5F6913(GameRulesLibrary const *const, MD5Hash const &);
GameRulesLibrary::GameRulesDescription const *GameRulesLibrary::GetDescription(MD5Hash const &) const // 0x5F6913
{
    mangled_assert("?GetDescription@GameRulesLibrary@@QBEPBUGameRulesDescription@1@ABVMD5Hash@@@Z");
    todo("implement");
    GameRulesLibrary::GameRulesDescription const * __result = _sub_5F6913(this, arg);
    return __result;
}

_extern MD5Hash const *_sub_5F696B(GameRulesLibrary const *const, char const *);
MD5Hash const *GameRulesLibrary::GetGuid(char const *) const // 0x5F696B
{
    mangled_assert("?GetGuid@GameRulesLibrary@@QBEPBVMD5Hash@@PBD@Z");
    todo("implement");
    MD5Hash const * __result = _sub_5F696B(this, arg);
    return __result;
}

_extern MD5Hash const *_sub_5F69B1(GameRulesLibrary const *const, wchar_t const *);
MD5Hash const *GameRulesLibrary::GetGuid(wchar_t const *) const // 0x5F69B1
{
    mangled_assert("?GetGuid@GameRulesLibrary@@QBEPBVMD5Hash@@PB_W@Z");
    todo("implement");
    MD5Hash const * __result = _sub_5F69B1(this, arg);
    return __result;
}

_extern MD5Hash const *_sub_5F6938(GameRulesLibrary const *const, unsigned __int32);
MD5Hash const *GameRulesLibrary::GetGuid(unsigned __int32) const // 0x5F6938
{
    mangled_assert("?GetGuid@GameRulesLibrary@@QBEPBVMD5Hash@@I@Z");
    todo("implement");
    MD5Hash const * __result = _sub_5F6938(this, arg);
    return __result;
}

_extern __int32 _sub_5F67D5(GameRulesLibrary const *const, std::vector<MD5Hash const *,std::allocator<MD5Hash const *> > &);
__int32 GameRulesLibrary::GetAllGameRuleSets(std::vector<MD5Hash const *,std::allocator<MD5Hash const *> > &) const // 0x5F67D5
{
    mangled_assert("?GetAllGameRuleSets@GameRulesLibrary@@QBEHAAV?$vector@PBVMD5Hash@@V?$allocator@PBVMD5Hash@@@std@@@std@@@Z");
    todo("implement");
    __int32 __result = _sub_5F67D5(this, arg);
    return __result;
}

_extern void _sub_5F687D(GameRulesLibrary const *const, MD5Hash &);
void GameRulesLibrary::GetDefaultRules(MD5Hash &) const // 0x5F687D
{
    mangled_assert("?GetDefaultRules@GameRulesLibrary@@QBEXAAVMD5Hash@@@Z");
    todo("implement");
    _sub_5F687D(this, arg);
}

/* ---------- private code */
#endif
