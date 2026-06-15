#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\utf8.h>
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <isteammusicremote.h>
#include <FrontEnd\LobbySteam.h>
#include <steam_api.h>
#include <isteamclient.h>
#include <FrontEnd\LobbySessionDesc.h>
#include <new>
#include <steamtypes.h>
#include <xstddef>
#include <FrontEnd\LobbyPlayerDesc.h>
#include <type_traits>
#include <steamlobby\steamlobbyplayerdesc.h>
#include <isteamuser.h>
#include <isteamhtmlsurface.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <isteammusic.h>
#include <fileio\fileioexports.h>
#include <isteamuserstats.h>
#include <isteamugc.h>
#include <FrontEnd\lobbyroomdesc.h>
#include <isteamremotestorage.h>
#include <steamlobby\steamlobbydefines.h>
#include <isteamapplist.h>
#include <isteamhttp.h>
#include <steamhttpenums.h>
#include <steamlobby\steamlobbyroomdesc.h>
#include <App\AppObj.h>
#include <boost\scoped_ptr.hpp>
#include <steamclientpublic.h>
#include <platform\appinterface.h>
#include <steamuniverse.h>
#include <isteamnetworking.h>
#include <steamlobby\steampeer.h>
#include <util\types.h>
#include <steamlobby\steamlobbyexport.h>
#include <isteamutils.h>
#include <steamlobby\steamevent.h>
#include <App\GameSpyID.h>
#include <isteammatchmaking.h>
#include <matchmakingtypes.h>
#include <isteamunifiedmessages.h>
#include <isteamapps.h>
#include <assist\typemagic.h>
#include <fileio\ramstream.h>
#include <localizer\localizer.h>
#include <FrontEnd\lobbynetwork.h>
#include <isteamscreenshots.h>
#include <SteamFuncs.h>
#include <isteamfriends.h>
#include <util\buffermessage.h>
#include <FrontEnd\Lobby.h>
#include <FrontEnd\lobbydefines.h>
#include <wchar.h>
#include <isteamcontroller.h>
#include <steamcontrollerpublic.h>
#include <steamlobby\steamlobbysessiondesc.h>

/* ---------- constants */

/* ---------- definitions */

typedef void *HServerListRequest;

/* ---------- prototypes */

extern void SteamSplitCombinedOption(char const *option, char *name, unsigned __int32 nameSize, char *value, unsigned __int32 valueSize);

_static std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > StringSteamToHW2(char const *input);
_static std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > StringSteamToHW2(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &input);
_static std::basic_string<char,std::char_traits<char>,std::allocator<char> > StringHW2ToSteam(wchar_t const *input);
_static void ConvertSteamDescToDesc(SteamLobbySessionDesc const &steamdesc, LobbySessionDesc &desc);
_static void ConvertDescToSteamDesc(LobbySessionDesc const &desc, SteamLobbySessionDesc &steamdesc);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_inline LobbySteam::Dispatch::Dispatch(LobbySteam *) // 0x44AEF4
{
    mangled_assert("??0Dispatch@LobbySteam@@QAE@PAV1@@Z");
    todo("implement");
}

_inline ISteamMatchmakingServerListResponse::ISteamMatchmakingServerListResponse(ISteamMatchmakingServerListResponse const &) // 0x44AF06
{
    mangled_assert("??0ISteamMatchmakingServerListResponse@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline LobbyNetwork::LobbyNetwork() // 0x44AF11
{
    mangled_assert("??0LobbyNetwork@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline CCallResult<SteamPeer,LobbyCreated_t>::CCallResult<SteamPeer,LobbyCreated_t>(CCallResult<SteamPeer,LobbyCreated_t> const &) // 0x44AC25
{
    mangled_assert("??0?$CCallResult@VSteamPeer@@ULobbyCreated_t@@@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline CCallResult<SteamPeer,LobbyEnter_t>::CCallResult<SteamPeer,LobbyEnter_t>(CCallResult<SteamPeer,LobbyEnter_t> const &) // 0x44AC5E
{
    mangled_assert("??0?$CCallResult@VSteamPeer@@ULobbyEnter_t@@@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline CCallback<SteamPeer,LobbyChatMsg_t,0>::CCallback<SteamPeer,LobbyChatMsg_t,0>(CCallback<SteamPeer,LobbyChatMsg_t,0> const &) // 0x44AC97
{
    mangled_assert("??0?$CCallback@VSteamPeer@@ULobbyChatMsg_t@@$0A@@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline CCallback<SteamPeer,LobbyDataUpdate_t,0>::CCallback<SteamPeer,LobbyDataUpdate_t,0>(CCallback<SteamPeer,LobbyDataUpdate_t,0> const &) // 0x44ACC4
{
    mangled_assert("??0?$CCallback@VSteamPeer@@ULobbyDataUpdate_t@@$0A@@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline CCallbackBase::CCallbackBase(CCallbackBase const &) // 0x44AEC7
{
    mangled_assert("??0CCallbackBase@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

LobbySteam::LobbySteam() // 0x44AF1A
{
    mangled_assert("??0LobbySteam@@QAE@XZ");
    todo("implement");
}

_inline SteamLobbySessionDesc::Param::Param(SteamLobbySessionDesc::Param const &) // 0x44AFB6
{
    mangled_assert("??0Param@SteamLobbySessionDesc@@QAE@ABU01@@Z");
    compiler_generated();
    todo("implement");
}

_inline ServerMatchmakingManager::ServerMatchmakingManager(ServerMatchmakingManager const &) // 0x44AFF3
{
    mangled_assert("??0ServerMatchmakingManager@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline SteamEvent::SteamEvent() // 0x44B00E
{
    mangled_assert("??0SteamEvent@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline SteamLobbyPlayerDesc::SteamLobbyPlayerDesc(SteamLobbyPlayerDesc const &) // 0x44B017
{
    mangled_assert("??0SteamLobbyPlayerDesc@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline SteamLobbySessionDesc::SteamLobbySessionDesc(SteamLobbySessionDesc const &) // 0x44B05A
{
    mangled_assert("??0SteamLobbySessionDesc@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline SteamPeer::SteamPeer(SteamPeer const &) // 0x44B075
{
    mangled_assert("??0SteamPeer@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline LobbySteam::Dispatch::~Dispatch() // 0x44B120
{
    mangled_assert("??1Dispatch@LobbySteam@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

LobbySteam::~LobbySteam() // 0x44B12E
{
    mangled_assert("??1LobbySteam@@UAE@XZ");
    todo("implement");
}

_inline SteamLobbySessionDesc::Param::~Param() // 0x44B188
{
    mangled_assert("??1Param@SteamLobbySessionDesc@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline SteamLobbyPlayerDesc::~SteamLobbyPlayerDesc() // 0x44B1A2
{
    mangled_assert("??1SteamLobbyPlayerDesc@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline SteamLobbySessionDesc::~SteamLobbySessionDesc() // 0x44B1B5
{
    mangled_assert("??1SteamLobbySessionDesc@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline CCallResult<SteamPeer,LobbyCreated_t> &CCallResult<SteamPeer,LobbyCreated_t>::operator=(CCallResult<SteamPeer,LobbyCreated_t> const &) // 0x44B1BA
{
    mangled_assert("??4?$CCallResult@VSteamPeer@@ULobbyCreated_t@@@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline CCallResult<SteamPeer,LobbyEnter_t> &CCallResult<SteamPeer,LobbyEnter_t>::operator=(CCallResult<SteamPeer,LobbyEnter_t> const &) // 0x44B1E7
{
    mangled_assert("??4?$CCallResult@VSteamPeer@@ULobbyEnter_t@@@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline CCallback<SteamPeer,LobbyChatMsg_t,0> &CCallback<SteamPeer,LobbyChatMsg_t,0>::operator=(CCallback<SteamPeer,LobbyChatMsg_t,0> const &) // 0x44B214
{
    mangled_assert("??4?$CCallback@VSteamPeer@@ULobbyChatMsg_t@@$0A@@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline CCallback<SteamPeer,LobbyDataUpdate_t,0> &CCallback<SteamPeer,LobbyDataUpdate_t,0>::operator=(CCallback<SteamPeer,LobbyDataUpdate_t,0> const &) // 0x44B235
{
    mangled_assert("??4?$CCallback@VSteamPeer@@ULobbyDataUpdate_t@@$0A@@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline CCallbackBase &CCallbackBase::operator=(CCallbackBase const &) // 0x44B3EE
{
    mangled_assert("??4CCallbackBase@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline ISteamMatchmakingServerListResponse &ISteamMatchmakingServerListResponse::operator=(ISteamMatchmakingServerListResponse const &) // 0x44B403
{
    mangled_assert("??4ISteamMatchmakingServerListResponse@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline SteamLobbySessionDesc::Param &SteamLobbySessionDesc::Param::operator=(SteamLobbySessionDesc::Param const &) // 0x44B408
{
    mangled_assert("??4Param@SteamLobbySessionDesc@@QAEAAU01@ABU01@@Z");
    compiler_generated();
    todo("implement");
}

_inline ServerMatchmakingManager &ServerMatchmakingManager::operator=(ServerMatchmakingManager const &) // 0x44B429
{
    mangled_assert("??4ServerMatchmakingManager@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline SteamLobbyPlayerDesc &SteamLobbyPlayerDesc::operator=(SteamLobbyPlayerDesc const &) // 0x44B43E
{
    mangled_assert("??4SteamLobbyPlayerDesc@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline SteamLobbySessionDesc &SteamLobbySessionDesc::operator=(SteamLobbySessionDesc const &) // 0x44B465
{
    mangled_assert("??4SteamLobbySessionDesc@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

void LobbySteam::Think() // 0x44C157
{
    mangled_assert("?Think@LobbySteam@@UAEXXZ");
    todo("implement");
}

_inline SteamPeer &SteamPeer::operator=(SteamPeer const &) // 0x44B480
{
    mangled_assert("??4SteamPeer@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

bool LobbySteam::GetMessage(BufferMessage &) // 0x44BA66
{
    mangled_assert("?GetMessage@LobbySteam@@UAE_NAAVBufferMessage@@@Z");
    todo("implement");
}

void SteamSplitCombinedOption(char const *option, char *name, unsigned __int32 nameSize, char *value, unsigned __int32 valueSize) // 0x44C04C
{
    mangled_assert("?SteamSplitCombinedOption@@YGXPBDPADI1I@Z");
    todo("implement");
}

bool LobbySteam::SessionGetDescription(unsigned long long, LobbySessionDesc &) const // 0x44BED0
{
    mangled_assert("?SessionGetDescription@LobbySteam@@UBE_N_KAAVLobbySessionDesc@@@Z");
    todo("implement");
}

bool LobbySteam::SessionUpdate(unsigned long long) const // 0x44C015
{
    mangled_assert("?SessionUpdate@LobbySteam@@UBE_N_K@Z");
    todo("implement");
}

void LobbySteam::SessionList() // 0x44BFEB
{
    mangled_assert("?SessionList@LobbySteam@@UAEXXZ");
    todo("implement");
}

void LobbySteam::SessionListStop() // 0x44BFF9
{
    mangled_assert("?SessionListStop@LobbySteam@@UAEXXZ");
    todo("implement");
}

void LobbySteam::SessionJoin(wchar_t const *) // 0x44BF96
{
    mangled_assert("?SessionJoin@LobbySteam@@UAEXPB_W@Z");
    todo("implement");
}

void LobbySteam::SessionHost(LobbySessionDesc const &, Net::Session *) // 0x44BF3D
{
    mangled_assert("?SessionHost@LobbySteam@@UAEXABVLobbySessionDesc@@PAVSession@Net@@@Z");
    todo("implement");
}

void LobbySteam::SessionCancel() // 0x44BE63
{
    mangled_assert("?SessionCancel@LobbySteam@@UAEXXZ");
    todo("implement");
}

void LobbySteam::SessionStarted() // 0x44C007
{
    mangled_assert("?SessionStarted@LobbySteam@@UAEXXZ");
    todo("implement");
}

void LobbySteam::SessionEnableJoin(bool) // 0x44BECD
{
    mangled_assert("?SessionEnableJoin@LobbySteam@@UAEX_N@Z");
    todo("implement");
}

void LobbySteam::SessionChangeSettings(LobbySessionDesc const &, Net::Session *) // 0x44BE71
{
    mangled_assert("?SessionChangeSettings@LobbySteam@@UAEXABVLobbySessionDesc@@PAVSession@Net@@@Z");
    todo("implement");
}

bool LobbySteam::SessionCreateVisible() const // 0x44BECA
{
    mangled_assert("?SessionCreateVisible@LobbySteam@@UBE_NXZ");
    todo("implement");
}

void LobbySteam::PlayerUpdateList() // 0x44BD89
{
    mangled_assert("?PlayerUpdateList@LobbySteam@@UAEXXZ");
    todo("implement");
}

void LobbySteam::PlayerGetList(std::vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > &) // 0x44BC6C
{
    mangled_assert("?PlayerGetList@LobbySteam@@UAEXAAV?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@@Z");
    todo("implement");
}

bool LobbySteam::PlayerGetDescription(wchar_t const *, LobbyPlayerDesc &) // 0x44BB9B
{
    mangled_assert("?PlayerGetDescription@LobbySteam@@UAE_NPB_WAAVLobbyPlayerDesc@@@Z");
    todo("implement");
}

void LobbySteam::PlayerGetName(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &) // 0x44BCF7
{
    mangled_assert("?PlayerGetName@LobbySteam@@UAEXAAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z");
    todo("implement");
}

void LobbySteam::PlayerChangeSettings() // 0x44BB9A
{
    mangled_assert("?PlayerChangeSettings@LobbySteam@@UAEXXZ");
    todo("implement");
}

void LobbySteam::PlayerSetViewingRoom(LobbyRoomType) // 0x44BD86
{
    mangled_assert("?PlayerSetViewingRoom@LobbySteam@@UAEXW4LobbyRoomType@@@Z");
    todo("implement");
}

bool LobbySteam::RoomLeave() // 0x44BDA4
{
    mangled_assert("?RoomLeave@LobbySteam@@UAE_NXZ");
    todo("implement");
}

void LobbySteam::PlayerSetPlaying(bool) // 0x44BD76
{
    mangled_assert("?PlayerSetPlaying@LobbySteam@@UAEX_N@Z");
    todo("implement");
}

LobbyChatStatus LobbySteam::ChatGetStatus() // 0x44B717
{
    mangled_assert("?ChatGetStatus@LobbySteam@@UAE?AW4LobbyChatStatus@@XZ");
    todo("implement");
}

void LobbySteam::ChatConnect(char const *) // 0x44B6E6
{
    mangled_assert("?ChatConnect@LobbySteam@@UAEXPBD@Z");
    todo("implement");
}

void LobbySteam::ChatDisconnect() // 0x44B709
{
    mangled_assert("?ChatDisconnect@LobbySteam@@UAEXXZ");
    todo("implement");
}

void LobbySteam::ChatSend(LobbyChatType, wchar_t const *, wchar_t const *) // 0x44B71E
{
    mangled_assert("?ChatSend@LobbySteam@@UAEXW4LobbyChatType@@PB_W1@Z");
    todo("implement");
}

unsigned long long LobbySteam::GetLobbyID() // 0x44BA5C
{
    mangled_assert("?GetLobbyID@LobbySteam@@UAE_KXZ");
    todo("implement");
}

bool LobbySteam::CDAuthenticate(char const *) // 0x44B697
{
    mangled_assert("?CDAuthenticate@LobbySteam@@UAE_NPBD@Z");
    todo("implement");
}

void LobbySteam::Dispatch::OnServerAdded(unsigned long long) // 0x44BB56
{
    mangled_assert("?OnServerAdded@Dispatch@LobbySteam@@UAEX_K@Z");
    todo("implement");
}

void LobbySteam::Dispatch::OnServerUpdated(unsigned long long) // 0x44BB78
{
    mangled_assert("?OnServerUpdated@Dispatch@LobbySteam@@UAEX_K@Z");
    todo("implement");
}

void LobbySteam::Dispatch::OnChat(SteamLobbyChatType, char const *, char const *) // 0x44BA6F
{
    mangled_assert("?OnChat@Dispatch@LobbySteam@@UAEXW4SteamLobbyChatType@@PBD1@Z");
    todo("implement");
}

/* ---------- private code */

_static std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > StringSteamToHW2(char const *input) // 0x44C120
{
    mangled_assert("StringSteamToHW2");
    todo("implement");
}

_static std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > StringSteamToHW2(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &input) // 0x44C0E0
{
    mangled_assert("StringSteamToHW2");
    todo("implement");
}

_static std::basic_string<char,std::char_traits<char>,std::allocator<char> > StringHW2ToSteam(wchar_t const *input) // 0x44C0A9
{
    mangled_assert("StringHW2ToSteam");
    todo("implement");
}

_static void ConvertSteamDescToDesc(SteamLobbySessionDesc const &steamdesc, LobbySessionDesc &desc) // 0x44B90F
{
    mangled_assert("ConvertSteamDescToDesc");
    todo("implement");
}

_static void ConvertDescToSteamDesc(LobbySessionDesc const &desc, SteamLobbySessionDesc &steamdesc) // 0x44B7F2
{
    mangled_assert("ConvertDescToSteamDesc");
    todo("implement");
}
#endif
