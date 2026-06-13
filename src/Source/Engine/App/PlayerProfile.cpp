#if 0
/* ---------- headers */

#include "decomp.h"
#include <UserInterface\uitypes.h>
#include <assist\stlexsmallvector.h>
#include <platform\inputinterface.h>
#include <isteamutils.h>
#include <platform\platformexports.h>
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <isteammatchmaking.h>
#include <matchmakingtypes.h>
#include <isteamunifiedmessages.h>
#include <isteamapps.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <luaconfig\luautils.h>
#include <xutility>
#include <iosfwd>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <isteamscreenshots.h>
#include <list>
#include <isteamfriends.h>
#include <assist\fixedstring.h>
#include <localizer\localizer.h>
#include <assist\stlexstring.h>
#include <boost\scoped_ptr.hpp>
#include <fileio\filepath.h>
#include <isteamcontroller.h>
#include <steamcontrollerpublic.h>
#include <boost\cstdint.hpp>
#include <isteammusicremote.h>
#include <Mathlib\mathutil.h>
#include <LevelDesc.h>
#include <assist\typemagic.h>
#include <Hash.h>
#include <fileio\md5.h>
#include <SteamFuncs.h>
#include <steam_api.h>
#include <App\PlayerProfileGameOptions.h>
#include <isteamclient.h>
#include <KeyBindings.h>
#include <steamtypes.h>
#include <config.h>
#include <platform\keydefines.h>
#include <isteamuser.h>
#include <debug\db.h>
#include <isteamhtmlsurface.h>
#include <isteammusic.h>
#include <util\colour.h>
#include <isteamuserstats.h>
#include <isteamugc.h>
#include <isteamremotestorage.h>
#include <GameRulesLibrary.h>
#include <isteamapplist.h>
#include <isteamhttp.h>
#include <steamhttpenums.h>
#include <App\PlayerProfile.h>
#include <luaconfig\luaconfig.h>
#include <wchar.h>
#include <lua.h>
#include <steamclientpublic.h>
#include <steamuniverse.h>
#include <isteamnetworking.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern char const *FILEPROFILE; // 0x83704C
    extern char const *DEFAULTPROFILE; // 0x837050
}

/* ---------- public code */

_extern _sub_501062(PlayerProfile *const, wchar_t const *);
PlayerProfile::PlayerProfile(wchar_t const *) // 0x501062
{
    mangled_assert("??0PlayerProfile@@QAE@PB_W@Z");
    todo("implement");
    _sub_501062(this, arg);
}

_extern void _sub_5010DB(PlayerProfile *const);
PlayerProfile::~PlayerProfile() // 0x5010DB
{
    mangled_assert("??1PlayerProfile@@QAE@XZ");
    todo("implement");
    _sub_5010DB(this);
}

_extern wchar_t const *_sub_501992(PlayerProfile const *const);
wchar_t const *PlayerProfile::GetPlayerName() const // 0x501992
{
    mangled_assert("?GetPlayerName@PlayerProfile@@QBEPB_WXZ");
    todo("implement");
    wchar_t const * __result = _sub_501992(this);
    return __result;
}

_extern void _sub_501D3F(PlayerProfile *const);
void PlayerProfile::Load() // 0x501D3F
{
    mangled_assert("?Load@PlayerProfile@@QAEXXZ");
    todo("implement");
    _sub_501D3F(this);
}

_extern void _sub_5024C0(PlayerProfile *const);
void PlayerProfile::Save() // 0x5024C0
{
    mangled_assert("?Save@PlayerProfile@@QAEXXZ");
    todo("implement");
    _sub_5024C0(this);
}

_extern LuaConfig &_sub_50178A(PlayerProfile *const);
LuaConfig &PlayerProfile::GetFields() // 0x50178A
{
    mangled_assert("?GetFields@PlayerProfile@@QAEAAVLuaConfig@@XZ");
    todo("implement");
    LuaConfig & __result = _sub_50178A(this);
    return __result;
}

_extern bool _sub_501643(PlayerProfile *const, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &);
bool PlayerProfile::GetChatName(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &) // 0x501643
{
    mangled_assert("?GetChatName@PlayerProfile@@QAE_NAAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z");
    todo("implement");
    bool __result = _sub_501643(this, arg);
    return __result;
}

_extern void _sub_50229A(PlayerProfile *const);
void PlayerProfile::RestorePlayerSetup() // 0x50229A
{
    mangled_assert("?RestorePlayerSetup@PlayerProfile@@QAEXXZ");
    todo("implement");
    _sub_50229A(this);
}

_extern void _sub_502227(PlayerProfile *const);
void PlayerProfile::RestoreDefaultGameOptions() // 0x502227
{
    mangled_assert("?RestoreDefaultGameOptions@PlayerProfile@@QAEXXZ");
    todo("implement");
    _sub_502227(this);
}

_extern bool _sub_50205B(PlayerProfile *const, __int32);
bool PlayerProfile::RestoreCPUPlayer(__int32) // 0x50205B
{
    mangled_assert("?RestoreCPUPlayer@PlayerProfile@@QAE_NH@Z");
    todo("implement");
    bool __result = _sub_50205B(this, arg);
    return __result;
}

_extern void _sub_502807(PlayerProfile *const, wchar_t const *);
void PlayerProfile::SetChatName(wchar_t const *) // 0x502807
{
    mangled_assert("?SetChatName@PlayerProfile@@QAEXPB_W@Z");
    todo("implement");
    _sub_502807(this, arg);
}

_extern bool _sub_501BDC(PlayerProfile *const, Color_4b &, Color_4b &);
bool PlayerProfile::GetTeamColours(Color_4b &, Color_4b &) // 0x501BDC
{
    mangled_assert("?GetTeamColours@PlayerProfile@@QAE_NAAUColor_4b@@0@Z");
    todo("implement");
    bool __result = _sub_501BDC(this, arg, arg);
    return __result;
}

_extern void _sub_502C4D(PlayerProfile *const, Color_4b const &, Color_4b const &);
void PlayerProfile::SetTeamColours(Color_4b const &, Color_4b const &) // 0x502C4D
{
    mangled_assert("?SetTeamColours@PlayerProfile@@QAEXABUColor_4b@@0@Z");
    todo("implement");
    _sub_502C4D(this, arg, arg);
}

_extern bool _sub_5012CE(PlayerProfile *const, unsigned __int32, Color_4b &, Color_4b &, bool);
bool PlayerProfile::GetCPUColours(unsigned __int32, Color_4b &, Color_4b &, bool) // 0x5012CE
{
    mangled_assert("?GetCPUColours@PlayerProfile@@QAE_NIAAUColor_4b@@0_N@Z");
    todo("implement");
    bool __result = _sub_5012CE(this, arg, arg, arg, arg);
    return __result;
}

_extern void _sub_502688(PlayerProfile *const, unsigned __int32, Color_4b const &, Color_4b const &);
void PlayerProfile::SetCPUColours(unsigned __int32, Color_4b const &, Color_4b const &) // 0x502688
{
    mangled_assert("?SetCPUColours@PlayerProfile@@QAEXIABUColor_4b@@0@Z");
    todo("implement");
    _sub_502688(this, arg, arg, arg);
}

_extern bool _sub_5016F5(PlayerProfile *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &);
bool PlayerProfile::GetEmblem(std::basic_string<char,std::char_traits<char>,std::allocator<char> > &) // 0x5016F5
{
    mangled_assert("?GetEmblem@PlayerProfile@@QAE_NAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    bool __result = _sub_5016F5(this, arg);
    return __result;
}

_extern void _sub_502835(PlayerProfile *const, char const *);
void PlayerProfile::SetEmblem(char const *) // 0x502835
{
    mangled_assert("?SetEmblem@PlayerProfile@@QAEXPBD@Z");
    todo("implement");
    _sub_502835(this, arg);
}

_extern bool _sub_5014A6(PlayerProfile *const, unsigned __int32, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &, bool);
bool PlayerProfile::GetCPUEmblem(unsigned __int32, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &, bool) // 0x5014A6
{
    mangled_assert("?GetCPUEmblem@PlayerProfile@@QAE_NIAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z");
    todo("implement");
    bool __result = _sub_5014A6(this, arg, arg, arg);
    return __result;
}

_extern void _sub_502765(PlayerProfile *const, unsigned __int32, char const *);
void PlayerProfile::SetCPUEmblem(unsigned __int32, char const *) // 0x502765
{
    mangled_assert("?SetCPUEmblem@PlayerProfile@@QAEXIPBD@Z");
    todo("implement");
    _sub_502765(this, arg, arg);
}

_extern bool _sub_501ACC(PlayerProfile *const, __int32, Color_4b &);
bool PlayerProfile::GetSwatchColour(__int32, Color_4b &) // 0x501ACC
{
    mangled_assert("?GetSwatchColour@PlayerProfile@@QAE_NHAAUColor_4b@@@Z");
    todo("implement");
    bool __result = _sub_501ACC(this, arg, arg);
    return __result;
}

_extern void _sub_502B7D(PlayerProfile *const, __int32, Color_4b &);
void PlayerProfile::SetSwatchColour(__int32, Color_4b &) // 0x502B7D
{
    mangled_assert("?SetSwatchColour@PlayerProfile@@QAEXHAAUColor_4b@@@Z");
    todo("implement");
    _sub_502B7D(this, arg, arg);
}

_extern bool _sub_501877(PlayerProfile *const, MD5Hash &);
bool PlayerProfile::GetLastSPLevel(MD5Hash &) // 0x501877
{
    mangled_assert("?GetLastSPLevel@PlayerProfile@@QAE_NAAVMD5Hash@@@Z");
    todo("implement");
    bool __result = _sub_501877(this, arg);
    return __result;
}

_extern void _sub_5028FE(PlayerProfile *const, MD5Hash const &);
void PlayerProfile::SetLastSPLevel(MD5Hash const &) // 0x5028FE
{
    mangled_assert("?SetLastSPLevel@PlayerProfile@@QAEXABVMD5Hash@@@Z");
    todo("implement");
    _sub_5028FE(this, arg);
}

_extern bool _sub_501834(PlayerProfile *const, MD5Hash &);
bool PlayerProfile::GetLastMPLevel(MD5Hash &) // 0x501834
{
    mangled_assert("?GetLastMPLevel@PlayerProfile@@QAE_NAAVMD5Hash@@@Z");
    todo("implement");
    bool __result = _sub_501834(this, arg);
    return __result;
}

_extern void _sub_5028D0(PlayerProfile *const, MD5Hash const &);
void PlayerProfile::SetLastMPLevel(MD5Hash const &) // 0x5028D0
{
    mangled_assert("?SetLastMPLevel@PlayerProfile@@QAEXABVMD5Hash@@@Z");
    todo("implement");
    _sub_5028D0(this, arg);
}

_extern void _sub_5011CA(PlayerProfile *const);
void PlayerProfile::ClearGameSettings() // 0x5011CA
{
    mangled_assert("?ClearGameSettings@PlayerProfile@@QAEXXZ");
    todo("implement");
    _sub_5011CA(this);
}

_extern void _sub_502863(PlayerProfile *const, char const *, char const *, char const *);
void PlayerProfile::SetGameSetting(char const *, char const *, char const *) // 0x502863
{
    mangled_assert("?SetGameSetting@PlayerProfile@@QAEXPBD00@Z");
    todo("implement");
    _sub_502863(this, arg, arg, arg);
}

_extern bool _sub_50178E(PlayerProfile *const, char const *, char const *, char *, __int32);
bool PlayerProfile::GetGameSetting(char const *, char const *, char *, __int32) // 0x50178E
{
    mangled_assert("?GetGameSetting@PlayerProfile@@QAE_NPBD0PADH@Z");
    todo("implement");
    bool __result = _sub_50178E(this, arg, arg, arg, arg);
    return __result;
}

_extern void _sub_502A66(PlayerProfile *const, __int32, bool, __int32, __int32, __int32, __int32);
void PlayerProfile::SetPlayerSettings(__int32, bool, __int32, __int32, __int32, __int32) // 0x502A66
{
    mangled_assert("?SetPlayerSettings@PlayerProfile@@QAEXH_NHHHH@Z");
    todo("implement");
    _sub_502A66(this, arg, arg, arg, arg, arg, arg);
}

_extern bool _sub_501995(PlayerProfile *const, __int32, bool &, __int32 &, __int32 &, __int32 &, __int32 &);
bool PlayerProfile::GetPlayerSettings(__int32, bool &, __int32 &, __int32 &, __int32 &, __int32 &) // 0x501995
{
    mangled_assert("?GetPlayerSettings@PlayerProfile@@QAE_NHAA_NAAH111@Z");
    todo("implement");
    bool __result = _sub_501995(this, arg, arg, arg, arg, arg, arg);
    return __result;
}

_extern bool _sub_5017F1(PlayerProfile *const, MD5Hash &);
bool PlayerProfile::GetLastMPGameRules(MD5Hash &) // 0x5017F1
{
    mangled_assert("?GetLastMPGameRules@PlayerProfile@@QAE_NAAVMD5Hash@@@Z");
    todo("implement");
    bool __result = _sub_5017F1(this, arg);
    return __result;
}

_extern void _sub_5028A2(PlayerProfile *const, MD5Hash const &);
void PlayerProfile::SetLastMPGameRules(MD5Hash const &) // 0x5028A2
{
    mangled_assert("?SetLastMPGameRules@PlayerProfile@@QAEXABVMD5Hash@@@Z");
    todo("implement");
    _sub_5028A2(this, arg);
}

_extern void _sub_502974(PlayerProfile *const, char const *, unsigned __int32, bool);
void PlayerProfile::SetMissionComplete(char const *, unsigned __int32, bool) // 0x502974
{
    mangled_assert("?SetMissionComplete@PlayerProfile@@QAEXPBDI_N@Z");
    todo("implement");
    _sub_502974(this, arg, arg, arg);
}

_extern void _sub_50292C(PlayerProfile *const, char const *, unsigned __int32);
void PlayerProfile::SetMaxMission(char const *, unsigned __int32) // 0x50292C
{
    mangled_assert("?SetMaxMission@PlayerProfile@@QAEXPBDI@Z");
    todo("implement");
    _sub_50292C(this, arg, arg);
}

_extern unsigned __int32 _sub_5018BA(PlayerProfile *const, char const *);
unsigned __int32 PlayerProfile::GetMaxMission(char const *) // 0x5018BA
{
    mangled_assert("?GetMaxMission@PlayerProfile@@QAEIPBD@Z");
    todo("implement");
    unsigned __int32 __result = _sub_5018BA(this, arg);
    return __result;
}

_extern bool _sub_501904(PlayerProfile *const, char const *, unsigned __int32);
bool PlayerProfile::GetMissionComplete(char const *, unsigned __int32) // 0x501904
{
    mangled_assert("?GetMissionComplete@PlayerProfile@@QAE_NPBDI@Z");
    todo("implement");
    bool __result = _sub_501904(this, arg, arg);
    return __result;
}

_extern bool _sub_501183(PlayerProfile *const, char const *);
bool PlayerProfile::CampaignStarted(char const *) // 0x501183
{
    mangled_assert("?CampaignStarted@PlayerProfile@@QAE_NPBD@Z");
    todo("implement");
    bool __result = _sub_501183(this, arg);
    return __result;
}

_extern void _sub_5027C3(PlayerProfile *const, char const *, bool);
void PlayerProfile::SetCampaignStarted(char const *, bool) // 0x5027C3
{
    mangled_assert("?SetCampaignStarted@PlayerProfile@@QAEXPBD_N@Z");
    todo("implement");
    _sub_5027C3(this, arg, arg);
}

_extern __int32 _sub_501B90(PlayerProfile *const);
__int32 PlayerProfile::GetTaskbarPhase() // 0x501B90
{
    mangled_assert("?GetTaskbarPhase@PlayerProfile@@QAEHXZ");
    todo("implement");
    __int32 __result = _sub_501B90(this);
    return __result;
}

_extern void _sub_502C12(PlayerProfile *const, __int32);
void PlayerProfile::SetTaskbarPhase(__int32) // 0x502C12
{
    mangled_assert("?SetTaskbarPhase@PlayerProfile@@QAEXH@Z");
    todo("implement");
    _sub_502C12(this, arg);
}

_extern bool _sub_501A84(PlayerProfile *const);
bool PlayerProfile::GetRecordGame() // 0x501A84
{
    mangled_assert("?GetRecordGame@PlayerProfile@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_501A84(this);
    return __result;
}

_extern void _sub_502B3B(PlayerProfile *const, bool);
void PlayerProfile::SetRecordGame(bool) // 0x502B3B
{
    mangled_assert("?SetRecordGame@PlayerProfile@@QAEX_N@Z");
    todo("implement");
    _sub_502B3B(this, arg);
}

_extern void _sub_502DB7(PlayerProfile *const, char const *);
void PlayerProfile::UnlockAnimatic(char const *) // 0x502DB7
{
    mangled_assert("?UnlockAnimatic@PlayerProfile@@QAEXPBD@Z");
    todo("implement");
    _sub_502DB7(this, arg);
}

_extern bool _sub_501C89(PlayerProfile *const, char const *);
bool PlayerProfile::IsAnimaticUnlocked(char const *) // 0x501C89
{
    mangled_assert("?IsAnimaticUnlocked@PlayerProfile@@QAE_NPBD@Z");
    todo("implement");
    bool __result = _sub_501C89(this, arg);
    return __result;
}

_extern void _sub_5011CB(PlayerProfile *const, char const *);
void PlayerProfile::DontShowErrorMessageAgain(char const *) // 0x5011CB
{
    mangled_assert("?DontShowErrorMessageAgain@PlayerProfile@@QAEXPBD@Z");
    todo("implement");
    _sub_5011CB(this, arg);
}

_extern bool _sub_502D01(PlayerProfile *const, char const *);
bool PlayerProfile::ShouldShowErrorMessageAgain(char const *) // 0x502D01
{
    mangled_assert("?ShouldShowErrorMessageAgain@PlayerProfile@@QAE_NPBD@Z");
    todo("implement");
    bool __result = _sub_502D01(this, arg);
    return __result;
}

_extern __int32 _sub_501A65(PlayerProfile *const);
__int32 PlayerProfile::GetProfileVersion() // 0x501A65
{
    mangled_assert("?GetProfileVersion@PlayerProfile@@QAEHXZ");
    todo("implement");
    __int32 __result = _sub_501A65(this);
    return __result;
}

/* ---------- private code */
#endif
