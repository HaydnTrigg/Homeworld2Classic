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

PlayerProfile::PlayerProfile(wchar_t const *) // 0x501062
{
    mangled_assert("??0PlayerProfile@@QAE@PB_W@Z");
    todo("implement");
}

PlayerProfile::~PlayerProfile() // 0x5010DB
{
    mangled_assert("??1PlayerProfile@@QAE@XZ");
    todo("implement");
}

wchar_t const *PlayerProfile::GetPlayerName() const // 0x501992
{
    mangled_assert("?GetPlayerName@PlayerProfile@@QBEPB_WXZ");
    todo("implement");
}

void PlayerProfile::Load() // 0x501D3F
{
    mangled_assert("?Load@PlayerProfile@@QAEXXZ");
    todo("implement");
}

void PlayerProfile::Save() // 0x5024C0
{
    mangled_assert("?Save@PlayerProfile@@QAEXXZ");
    todo("implement");
}

LuaConfig &PlayerProfile::GetFields() // 0x50178A
{
    mangled_assert("?GetFields@PlayerProfile@@QAEAAVLuaConfig@@XZ");
    todo("implement");
}

bool PlayerProfile::GetChatName(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &) // 0x501643
{
    mangled_assert("?GetChatName@PlayerProfile@@QAE_NAAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z");
    todo("implement");
}

void PlayerProfile::RestorePlayerSetup() // 0x50229A
{
    mangled_assert("?RestorePlayerSetup@PlayerProfile@@QAEXXZ");
    todo("implement");
}

void PlayerProfile::RestoreDefaultGameOptions() // 0x502227
{
    mangled_assert("?RestoreDefaultGameOptions@PlayerProfile@@QAEXXZ");
    todo("implement");
}

bool PlayerProfile::RestoreCPUPlayer(__int32) // 0x50205B
{
    mangled_assert("?RestoreCPUPlayer@PlayerProfile@@QAE_NH@Z");
    todo("implement");
}

void PlayerProfile::SetChatName(wchar_t const *) // 0x502807
{
    mangled_assert("?SetChatName@PlayerProfile@@QAEXPB_W@Z");
    todo("implement");
}

bool PlayerProfile::GetTeamColours(Color_4b &, Color_4b &) // 0x501BDC
{
    mangled_assert("?GetTeamColours@PlayerProfile@@QAE_NAAUColor_4b@@0@Z");
    todo("implement");
}

void PlayerProfile::SetTeamColours(Color_4b const &, Color_4b const &) // 0x502C4D
{
    mangled_assert("?SetTeamColours@PlayerProfile@@QAEXABUColor_4b@@0@Z");
    todo("implement");
}

bool PlayerProfile::GetCPUColours(unsigned __int32, Color_4b &, Color_4b &, bool) // 0x5012CE
{
    mangled_assert("?GetCPUColours@PlayerProfile@@QAE_NIAAUColor_4b@@0_N@Z");
    todo("implement");
}

void PlayerProfile::SetCPUColours(unsigned __int32, Color_4b const &, Color_4b const &) // 0x502688
{
    mangled_assert("?SetCPUColours@PlayerProfile@@QAEXIABUColor_4b@@0@Z");
    todo("implement");
}

bool PlayerProfile::GetEmblem(std::basic_string<char,std::char_traits<char>,std::allocator<char> > &) // 0x5016F5
{
    mangled_assert("?GetEmblem@PlayerProfile@@QAE_NAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

void PlayerProfile::SetEmblem(char const *) // 0x502835
{
    mangled_assert("?SetEmblem@PlayerProfile@@QAEXPBD@Z");
    todo("implement");
}

bool PlayerProfile::GetCPUEmblem(unsigned __int32, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &, bool) // 0x5014A6
{
    mangled_assert("?GetCPUEmblem@PlayerProfile@@QAE_NIAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z");
    todo("implement");
}

void PlayerProfile::SetCPUEmblem(unsigned __int32, char const *) // 0x502765
{
    mangled_assert("?SetCPUEmblem@PlayerProfile@@QAEXIPBD@Z");
    todo("implement");
}

bool PlayerProfile::GetSwatchColour(__int32, Color_4b &) // 0x501ACC
{
    mangled_assert("?GetSwatchColour@PlayerProfile@@QAE_NHAAUColor_4b@@@Z");
    todo("implement");
}

void PlayerProfile::SetSwatchColour(__int32, Color_4b &) // 0x502B7D
{
    mangled_assert("?SetSwatchColour@PlayerProfile@@QAEXHAAUColor_4b@@@Z");
    todo("implement");
}

bool PlayerProfile::GetLastSPLevel(MD5Hash &) // 0x501877
{
    mangled_assert("?GetLastSPLevel@PlayerProfile@@QAE_NAAVMD5Hash@@@Z");
    todo("implement");
}

void PlayerProfile::SetLastSPLevel(MD5Hash const &) // 0x5028FE
{
    mangled_assert("?SetLastSPLevel@PlayerProfile@@QAEXABVMD5Hash@@@Z");
    todo("implement");
}

bool PlayerProfile::GetLastMPLevel(MD5Hash &) // 0x501834
{
    mangled_assert("?GetLastMPLevel@PlayerProfile@@QAE_NAAVMD5Hash@@@Z");
    todo("implement");
}

void PlayerProfile::SetLastMPLevel(MD5Hash const &) // 0x5028D0
{
    mangled_assert("?SetLastMPLevel@PlayerProfile@@QAEXABVMD5Hash@@@Z");
    todo("implement");
}

void PlayerProfile::ClearGameSettings() // 0x5011CA
{
    mangled_assert("?ClearGameSettings@PlayerProfile@@QAEXXZ");
    todo("implement");
}

void PlayerProfile::SetGameSetting(char const *, char const *, char const *) // 0x502863
{
    mangled_assert("?SetGameSetting@PlayerProfile@@QAEXPBD00@Z");
    todo("implement");
}

bool PlayerProfile::GetGameSetting(char const *, char const *, char *, __int32) // 0x50178E
{
    mangled_assert("?GetGameSetting@PlayerProfile@@QAE_NPBD0PADH@Z");
    todo("implement");
}

void PlayerProfile::SetPlayerSettings(__int32, bool, __int32, __int32, __int32, __int32) // 0x502A66
{
    mangled_assert("?SetPlayerSettings@PlayerProfile@@QAEXH_NHHHH@Z");
    todo("implement");
}

bool PlayerProfile::GetPlayerSettings(__int32, bool &, __int32 &, __int32 &, __int32 &, __int32 &) // 0x501995
{
    mangled_assert("?GetPlayerSettings@PlayerProfile@@QAE_NHAA_NAAH111@Z");
    todo("implement");
}

bool PlayerProfile::GetLastMPGameRules(MD5Hash &) // 0x5017F1
{
    mangled_assert("?GetLastMPGameRules@PlayerProfile@@QAE_NAAVMD5Hash@@@Z");
    todo("implement");
}

void PlayerProfile::SetLastMPGameRules(MD5Hash const &) // 0x5028A2
{
    mangled_assert("?SetLastMPGameRules@PlayerProfile@@QAEXABVMD5Hash@@@Z");
    todo("implement");
}

void PlayerProfile::SetMissionComplete(char const *, unsigned __int32, bool) // 0x502974
{
    mangled_assert("?SetMissionComplete@PlayerProfile@@QAEXPBDI_N@Z");
    todo("implement");
}

void PlayerProfile::SetMaxMission(char const *, unsigned __int32) // 0x50292C
{
    mangled_assert("?SetMaxMission@PlayerProfile@@QAEXPBDI@Z");
    todo("implement");
}

unsigned __int32 PlayerProfile::GetMaxMission(char const *) // 0x5018BA
{
    mangled_assert("?GetMaxMission@PlayerProfile@@QAEIPBD@Z");
    todo("implement");
}

bool PlayerProfile::GetMissionComplete(char const *, unsigned __int32) // 0x501904
{
    mangled_assert("?GetMissionComplete@PlayerProfile@@QAE_NPBDI@Z");
    todo("implement");
}

bool PlayerProfile::CampaignStarted(char const *) // 0x501183
{
    mangled_assert("?CampaignStarted@PlayerProfile@@QAE_NPBD@Z");
    todo("implement");
}

void PlayerProfile::SetCampaignStarted(char const *, bool) // 0x5027C3
{
    mangled_assert("?SetCampaignStarted@PlayerProfile@@QAEXPBD_N@Z");
    todo("implement");
}

__int32 PlayerProfile::GetTaskbarPhase() // 0x501B90
{
    mangled_assert("?GetTaskbarPhase@PlayerProfile@@QAEHXZ");
    todo("implement");
}

void PlayerProfile::SetTaskbarPhase(__int32) // 0x502C12
{
    mangled_assert("?SetTaskbarPhase@PlayerProfile@@QAEXH@Z");
    todo("implement");
}

bool PlayerProfile::GetRecordGame() // 0x501A84
{
    mangled_assert("?GetRecordGame@PlayerProfile@@QAE_NXZ");
    todo("implement");
}

void PlayerProfile::SetRecordGame(bool) // 0x502B3B
{
    mangled_assert("?SetRecordGame@PlayerProfile@@QAEX_N@Z");
    todo("implement");
}

void PlayerProfile::UnlockAnimatic(char const *) // 0x502DB7
{
    mangled_assert("?UnlockAnimatic@PlayerProfile@@QAEXPBD@Z");
    todo("implement");
}

bool PlayerProfile::IsAnimaticUnlocked(char const *) // 0x501C89
{
    mangled_assert("?IsAnimaticUnlocked@PlayerProfile@@QAE_NPBD@Z");
    todo("implement");
}

void PlayerProfile::DontShowErrorMessageAgain(char const *) // 0x5011CB
{
    mangled_assert("?DontShowErrorMessageAgain@PlayerProfile@@QAEXPBD@Z");
    todo("implement");
}

bool PlayerProfile::ShouldShowErrorMessageAgain(char const *) // 0x502D01
{
    mangled_assert("?ShouldShowErrorMessageAgain@PlayerProfile@@QAE_NPBD@Z");
    todo("implement");
}

__int32 PlayerProfile::GetProfileVersion() // 0x501A65
{
    mangled_assert("?GetProfileVersion@PlayerProfile@@QAEHXZ");
    todo("implement");
}

/* ---------- private code */
#endif
