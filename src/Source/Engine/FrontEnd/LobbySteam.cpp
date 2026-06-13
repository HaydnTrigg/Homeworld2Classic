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

_extern _sub_44AEF4(LobbySteam::Dispatch *const, LobbySteam *);
_inline LobbySteam::Dispatch::Dispatch(LobbySteam *) // 0x44AEF4
{
    mangled_assert("??0Dispatch@LobbySteam@@QAE@PAV1@@Z");
    todo("implement");
    _sub_44AEF4(this, arg);
}

_extern _sub_44AF06(ISteamMatchmakingServerListResponse *const, ISteamMatchmakingServerListResponse const &);
_inline ISteamMatchmakingServerListResponse::ISteamMatchmakingServerListResponse(ISteamMatchmakingServerListResponse const &) // 0x44AF06
{
    mangled_assert("??0ISteamMatchmakingServerListResponse@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_44AF06(this, arg);
}

_extern _sub_44AF11(LobbyNetwork *const);
_inline LobbyNetwork::LobbyNetwork() // 0x44AF11
{
    mangled_assert("??0LobbyNetwork@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_44AF11(this);
}

_extern _sub_44AC25(CCallResult<SteamPeer,LobbyCreated_t> *const, CCallResult<SteamPeer,LobbyCreated_t> const &);
_inline CCallResult<SteamPeer,LobbyCreated_t>::CCallResult<SteamPeer,LobbyCreated_t>(CCallResult<SteamPeer,LobbyCreated_t> const &) // 0x44AC25
{
    mangled_assert("??0?$CCallResult@VSteamPeer@@ULobbyCreated_t@@@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_44AC25(this, arg);
}

_extern _sub_44AC5E(CCallResult<SteamPeer,LobbyEnter_t> *const, CCallResult<SteamPeer,LobbyEnter_t> const &);
_inline CCallResult<SteamPeer,LobbyEnter_t>::CCallResult<SteamPeer,LobbyEnter_t>(CCallResult<SteamPeer,LobbyEnter_t> const &) // 0x44AC5E
{
    mangled_assert("??0?$CCallResult@VSteamPeer@@ULobbyEnter_t@@@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_44AC5E(this, arg);
}

_extern _sub_44AC97(CCallback<SteamPeer,LobbyChatMsg_t,0> *const, CCallback<SteamPeer,LobbyChatMsg_t,0> const &);
_inline CCallback<SteamPeer,LobbyChatMsg_t,0>::CCallback<SteamPeer,LobbyChatMsg_t,0>(CCallback<SteamPeer,LobbyChatMsg_t,0> const &) // 0x44AC97
{
    mangled_assert("??0?$CCallback@VSteamPeer@@ULobbyChatMsg_t@@$0A@@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_44AC97(this, arg);
}

_extern _sub_44ACC4(CCallback<SteamPeer,LobbyDataUpdate_t,0> *const, CCallback<SteamPeer,LobbyDataUpdate_t,0> const &);
_inline CCallback<SteamPeer,LobbyDataUpdate_t,0>::CCallback<SteamPeer,LobbyDataUpdate_t,0>(CCallback<SteamPeer,LobbyDataUpdate_t,0> const &) // 0x44ACC4
{
    mangled_assert("??0?$CCallback@VSteamPeer@@ULobbyDataUpdate_t@@$0A@@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_44ACC4(this, arg);
}

_extern _sub_44AEC7(CCallbackBase *const, CCallbackBase const &);
_inline CCallbackBase::CCallbackBase(CCallbackBase const &) // 0x44AEC7
{
    mangled_assert("??0CCallbackBase@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_44AEC7(this, arg);
}

_extern _sub_44AF1A(LobbySteam *const);
LobbySteam::LobbySteam() // 0x44AF1A
{
    mangled_assert("??0LobbySteam@@QAE@XZ");
    todo("implement");
    _sub_44AF1A(this);
}

_extern _sub_44AFB6(SteamLobbySessionDesc::Param *const, SteamLobbySessionDesc::Param const &);
_inline SteamLobbySessionDesc::Param::Param(SteamLobbySessionDesc::Param const &) // 0x44AFB6
{
    mangled_assert("??0Param@SteamLobbySessionDesc@@QAE@ABU01@@Z");
    compiler_generated();
    todo("implement");
    _sub_44AFB6(this, arg);
}

_extern _sub_44AFF3(ServerMatchmakingManager *const, ServerMatchmakingManager const &);
_inline ServerMatchmakingManager::ServerMatchmakingManager(ServerMatchmakingManager const &) // 0x44AFF3
{
    mangled_assert("??0ServerMatchmakingManager@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_44AFF3(this, arg);
}

_extern _sub_44B00E(SteamEvent *const);
_inline SteamEvent::SteamEvent() // 0x44B00E
{
    mangled_assert("??0SteamEvent@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_44B00E(this);
}

_extern _sub_44B017(SteamLobbyPlayerDesc *const, SteamLobbyPlayerDesc const &);
_inline SteamLobbyPlayerDesc::SteamLobbyPlayerDesc(SteamLobbyPlayerDesc const &) // 0x44B017
{
    mangled_assert("??0SteamLobbyPlayerDesc@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_44B017(this, arg);
}

_extern _sub_44B05A(SteamLobbySessionDesc *const, SteamLobbySessionDesc const &);
_inline SteamLobbySessionDesc::SteamLobbySessionDesc(SteamLobbySessionDesc const &) // 0x44B05A
{
    mangled_assert("??0SteamLobbySessionDesc@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_44B05A(this, arg);
}

_extern _sub_44B075(SteamPeer *const, SteamPeer const &);
_inline SteamPeer::SteamPeer(SteamPeer const &) // 0x44B075
{
    mangled_assert("??0SteamPeer@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_44B075(this, arg);
}

_extern void _sub_44B120(LobbySteam::Dispatch *const);
_inline LobbySteam::Dispatch::~Dispatch() // 0x44B120
{
    mangled_assert("??1Dispatch@LobbySteam@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_44B120(this);
}

_extern void _sub_44B12E(LobbySteam *const);
LobbySteam::~LobbySteam() // 0x44B12E
{
    mangled_assert("??1LobbySteam@@UAE@XZ");
    todo("implement");
    _sub_44B12E(this);
}

_extern void _sub_44B188(SteamLobbySessionDesc::Param *const);
_inline SteamLobbySessionDesc::Param::~Param() // 0x44B188
{
    mangled_assert("??1Param@SteamLobbySessionDesc@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_44B188(this);
}

_extern void _sub_44B1A2(SteamLobbyPlayerDesc *const);
_inline SteamLobbyPlayerDesc::~SteamLobbyPlayerDesc() // 0x44B1A2
{
    mangled_assert("??1SteamLobbyPlayerDesc@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_44B1A2(this);
}

_extern void _sub_44B1B5(SteamLobbySessionDesc *const);
_inline SteamLobbySessionDesc::~SteamLobbySessionDesc() // 0x44B1B5
{
    mangled_assert("??1SteamLobbySessionDesc@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_44B1B5(this);
}

_extern CCallResult<SteamPeer,LobbyCreated_t> &_sub_44B1BA(CCallResult<SteamPeer,LobbyCreated_t> *const, CCallResult<SteamPeer,LobbyCreated_t> const &);
_inline CCallResult<SteamPeer,LobbyCreated_t> &CCallResult<SteamPeer,LobbyCreated_t>::operator=(CCallResult<SteamPeer,LobbyCreated_t> const &) // 0x44B1BA
{
    mangled_assert("??4?$CCallResult@VSteamPeer@@ULobbyCreated_t@@@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    CCallResult<SteamPeer,LobbyCreated_t> & __result = _sub_44B1BA(this, arg);
    return __result;
}

_extern CCallResult<SteamPeer,LobbyEnter_t> &_sub_44B1E7(CCallResult<SteamPeer,LobbyEnter_t> *const, CCallResult<SteamPeer,LobbyEnter_t> const &);
_inline CCallResult<SteamPeer,LobbyEnter_t> &CCallResult<SteamPeer,LobbyEnter_t>::operator=(CCallResult<SteamPeer,LobbyEnter_t> const &) // 0x44B1E7
{
    mangled_assert("??4?$CCallResult@VSteamPeer@@ULobbyEnter_t@@@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    CCallResult<SteamPeer,LobbyEnter_t> & __result = _sub_44B1E7(this, arg);
    return __result;
}

_extern CCallback<SteamPeer,LobbyChatMsg_t,0> &_sub_44B214(CCallback<SteamPeer,LobbyChatMsg_t,0> *const, CCallback<SteamPeer,LobbyChatMsg_t,0> const &);
_inline CCallback<SteamPeer,LobbyChatMsg_t,0> &CCallback<SteamPeer,LobbyChatMsg_t,0>::operator=(CCallback<SteamPeer,LobbyChatMsg_t,0> const &) // 0x44B214
{
    mangled_assert("??4?$CCallback@VSteamPeer@@ULobbyChatMsg_t@@$0A@@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    CCallback<SteamPeer,LobbyChatMsg_t,0> & __result = _sub_44B214(this, arg);
    return __result;
}

_extern CCallback<SteamPeer,LobbyDataUpdate_t,0> &_sub_44B235(CCallback<SteamPeer,LobbyDataUpdate_t,0> *const, CCallback<SteamPeer,LobbyDataUpdate_t,0> const &);
_inline CCallback<SteamPeer,LobbyDataUpdate_t,0> &CCallback<SteamPeer,LobbyDataUpdate_t,0>::operator=(CCallback<SteamPeer,LobbyDataUpdate_t,0> const &) // 0x44B235
{
    mangled_assert("??4?$CCallback@VSteamPeer@@ULobbyDataUpdate_t@@$0A@@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    CCallback<SteamPeer,LobbyDataUpdate_t,0> & __result = _sub_44B235(this, arg);
    return __result;
}

_extern CCallbackBase &_sub_44B3EE(CCallbackBase *const, CCallbackBase const &);
_inline CCallbackBase &CCallbackBase::operator=(CCallbackBase const &) // 0x44B3EE
{
    mangled_assert("??4CCallbackBase@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    CCallbackBase & __result = _sub_44B3EE(this, arg);
    return __result;
}

_extern ISteamMatchmakingServerListResponse &_sub_44B403(ISteamMatchmakingServerListResponse *const, ISteamMatchmakingServerListResponse const &);
_inline ISteamMatchmakingServerListResponse &ISteamMatchmakingServerListResponse::operator=(ISteamMatchmakingServerListResponse const &) // 0x44B403
{
    mangled_assert("??4ISteamMatchmakingServerListResponse@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    ISteamMatchmakingServerListResponse & __result = _sub_44B403(this, arg);
    return __result;
}

_extern SteamLobbySessionDesc::Param &_sub_44B408(SteamLobbySessionDesc::Param *const, SteamLobbySessionDesc::Param const &);
_inline SteamLobbySessionDesc::Param &SteamLobbySessionDesc::Param::operator=(SteamLobbySessionDesc::Param const &) // 0x44B408
{
    mangled_assert("??4Param@SteamLobbySessionDesc@@QAEAAU01@ABU01@@Z");
    compiler_generated();
    todo("implement");
    SteamLobbySessionDesc::Param & __result = _sub_44B408(this, arg);
    return __result;
}

_extern ServerMatchmakingManager &_sub_44B429(ServerMatchmakingManager *const, ServerMatchmakingManager const &);
_inline ServerMatchmakingManager &ServerMatchmakingManager::operator=(ServerMatchmakingManager const &) // 0x44B429
{
    mangled_assert("??4ServerMatchmakingManager@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    ServerMatchmakingManager & __result = _sub_44B429(this, arg);
    return __result;
}

_extern SteamLobbyPlayerDesc &_sub_44B43E(SteamLobbyPlayerDesc *const, SteamLobbyPlayerDesc const &);
_inline SteamLobbyPlayerDesc &SteamLobbyPlayerDesc::operator=(SteamLobbyPlayerDesc const &) // 0x44B43E
{
    mangled_assert("??4SteamLobbyPlayerDesc@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    SteamLobbyPlayerDesc & __result = _sub_44B43E(this, arg);
    return __result;
}

_extern SteamLobbySessionDesc &_sub_44B465(SteamLobbySessionDesc *const, SteamLobbySessionDesc const &);
_inline SteamLobbySessionDesc &SteamLobbySessionDesc::operator=(SteamLobbySessionDesc const &) // 0x44B465
{
    mangled_assert("??4SteamLobbySessionDesc@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    SteamLobbySessionDesc & __result = _sub_44B465(this, arg);
    return __result;
}

_extern void _sub_44C157(LobbySteam *const);
void LobbySteam::Think() // 0x44C157
{
    mangled_assert("?Think@LobbySteam@@UAEXXZ");
    todo("implement");
    _sub_44C157(this);
}

_extern SteamPeer &_sub_44B480(SteamPeer *const, SteamPeer const &);
_inline SteamPeer &SteamPeer::operator=(SteamPeer const &) // 0x44B480
{
    mangled_assert("??4SteamPeer@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    SteamPeer & __result = _sub_44B480(this, arg);
    return __result;
}

_extern bool _sub_44BA66(LobbySteam *const, BufferMessage &);
bool LobbySteam::GetMessage(BufferMessage &) // 0x44BA66
{
    mangled_assert("?GetMessage@LobbySteam@@UAE_NAAVBufferMessage@@@Z");
    todo("implement");
    bool __result = _sub_44BA66(this, arg);
    return __result;
}

_extern void _sub_44C04C(char const *, char *, unsigned __int32, char *, unsigned __int32);
void SteamSplitCombinedOption(char const *option, char *name, unsigned __int32 nameSize, char *value, unsigned __int32 valueSize) // 0x44C04C
{
    mangled_assert("?SteamSplitCombinedOption@@YGXPBDPADI1I@Z");
    todo("implement");
    _sub_44C04C(option, name, nameSize, value, valueSize);
}

_extern bool _sub_44BED0(LobbySteam const *const, unsigned long long, LobbySessionDesc &);
bool LobbySteam::SessionGetDescription(unsigned long long, LobbySessionDesc &) const // 0x44BED0
{
    mangled_assert("?SessionGetDescription@LobbySteam@@UBE_N_KAAVLobbySessionDesc@@@Z");
    todo("implement");
    bool __result = _sub_44BED0(this, arg, arg);
    return __result;
}

_extern bool _sub_44C015(LobbySteam const *const, unsigned long long);
bool LobbySteam::SessionUpdate(unsigned long long) const // 0x44C015
{
    mangled_assert("?SessionUpdate@LobbySteam@@UBE_N_K@Z");
    todo("implement");
    bool __result = _sub_44C015(this, arg);
    return __result;
}

_extern void _sub_44BFEB(LobbySteam *const);
void LobbySteam::SessionList() // 0x44BFEB
{
    mangled_assert("?SessionList@LobbySteam@@UAEXXZ");
    todo("implement");
    _sub_44BFEB(this);
}

_extern void _sub_44BFF9(LobbySteam *const);
void LobbySteam::SessionListStop() // 0x44BFF9
{
    mangled_assert("?SessionListStop@LobbySteam@@UAEXXZ");
    todo("implement");
    _sub_44BFF9(this);
}

_extern void _sub_44BF96(LobbySteam *const, wchar_t const *);
void LobbySteam::SessionJoin(wchar_t const *) // 0x44BF96
{
    mangled_assert("?SessionJoin@LobbySteam@@UAEXPB_W@Z");
    todo("implement");
    _sub_44BF96(this, arg);
}

_extern void _sub_44BF3D(LobbySteam *const, LobbySessionDesc const &, Net::Session *);
void LobbySteam::SessionHost(LobbySessionDesc const &, Net::Session *) // 0x44BF3D
{
    mangled_assert("?SessionHost@LobbySteam@@UAEXABVLobbySessionDesc@@PAVSession@Net@@@Z");
    todo("implement");
    _sub_44BF3D(this, arg, arg);
}

_extern void _sub_44BE63(LobbySteam *const);
void LobbySteam::SessionCancel() // 0x44BE63
{
    mangled_assert("?SessionCancel@LobbySteam@@UAEXXZ");
    todo("implement");
    _sub_44BE63(this);
}

_extern void _sub_44C007(LobbySteam *const);
void LobbySteam::SessionStarted() // 0x44C007
{
    mangled_assert("?SessionStarted@LobbySteam@@UAEXXZ");
    todo("implement");
    _sub_44C007(this);
}

_extern void _sub_44BECD(LobbySteam *const, bool);
void LobbySteam::SessionEnableJoin(bool) // 0x44BECD
{
    mangled_assert("?SessionEnableJoin@LobbySteam@@UAEX_N@Z");
    todo("implement");
    _sub_44BECD(this, arg);
}

_extern void _sub_44BE71(LobbySteam *const, LobbySessionDesc const &, Net::Session *);
void LobbySteam::SessionChangeSettings(LobbySessionDesc const &, Net::Session *) // 0x44BE71
{
    mangled_assert("?SessionChangeSettings@LobbySteam@@UAEXABVLobbySessionDesc@@PAVSession@Net@@@Z");
    todo("implement");
    _sub_44BE71(this, arg, arg);
}

_extern bool _sub_44BECA(LobbySteam const *const);
bool LobbySteam::SessionCreateVisible() const // 0x44BECA
{
    mangled_assert("?SessionCreateVisible@LobbySteam@@UBE_NXZ");
    todo("implement");
    bool __result = _sub_44BECA(this);
    return __result;
}

_extern void _sub_44BD89(LobbySteam *const);
void LobbySteam::PlayerUpdateList() // 0x44BD89
{
    mangled_assert("?PlayerUpdateList@LobbySteam@@UAEXXZ");
    todo("implement");
    _sub_44BD89(this);
}

_extern void _sub_44BC6C(LobbySteam *const, std::vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > &);
void LobbySteam::PlayerGetList(std::vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > &) // 0x44BC6C
{
    mangled_assert("?PlayerGetList@LobbySteam@@UAEXAAV?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@@Z");
    todo("implement");
    _sub_44BC6C(this, arg);
}

_extern bool _sub_44BB9B(LobbySteam *const, wchar_t const *, LobbyPlayerDesc &);
bool LobbySteam::PlayerGetDescription(wchar_t const *, LobbyPlayerDesc &) // 0x44BB9B
{
    mangled_assert("?PlayerGetDescription@LobbySteam@@UAE_NPB_WAAVLobbyPlayerDesc@@@Z");
    todo("implement");
    bool __result = _sub_44BB9B(this, arg, arg);
    return __result;
}

_extern void _sub_44BCF7(LobbySteam *const, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &);
void LobbySteam::PlayerGetName(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &) // 0x44BCF7
{
    mangled_assert("?PlayerGetName@LobbySteam@@UAEXAAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z");
    todo("implement");
    _sub_44BCF7(this, arg);
}

_extern void _sub_44BB9A(LobbySteam *const);
void LobbySteam::PlayerChangeSettings() // 0x44BB9A
{
    mangled_assert("?PlayerChangeSettings@LobbySteam@@UAEXXZ");
    todo("implement");
    _sub_44BB9A(this);
}

_extern void _sub_44BD86(LobbySteam *const, LobbyRoomType);
void LobbySteam::PlayerSetViewingRoom(LobbyRoomType) // 0x44BD86
{
    mangled_assert("?PlayerSetViewingRoom@LobbySteam@@UAEXW4LobbyRoomType@@@Z");
    todo("implement");
    _sub_44BD86(this, arg);
}

_extern bool _sub_44BDA4(LobbySteam *const);
bool LobbySteam::RoomLeave() // 0x44BDA4
{
    mangled_assert("?RoomLeave@LobbySteam@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_44BDA4(this);
    return __result;
}

_extern void _sub_44BD76(LobbySteam *const, bool);
void LobbySteam::PlayerSetPlaying(bool) // 0x44BD76
{
    mangled_assert("?PlayerSetPlaying@LobbySteam@@UAEX_N@Z");
    todo("implement");
    _sub_44BD76(this, arg);
}

_extern LobbyChatStatus _sub_44B717(LobbySteam *const);
LobbyChatStatus LobbySteam::ChatGetStatus() // 0x44B717
{
    mangled_assert("?ChatGetStatus@LobbySteam@@UAE?AW4LobbyChatStatus@@XZ");
    todo("implement");
    LobbyChatStatus __result = _sub_44B717(this);
    return __result;
}

_extern void _sub_44B6E6(LobbySteam *const, char const *);
void LobbySteam::ChatConnect(char const *) // 0x44B6E6
{
    mangled_assert("?ChatConnect@LobbySteam@@UAEXPBD@Z");
    todo("implement");
    _sub_44B6E6(this, arg);
}

_extern void _sub_44B709(LobbySteam *const);
void LobbySteam::ChatDisconnect() // 0x44B709
{
    mangled_assert("?ChatDisconnect@LobbySteam@@UAEXXZ");
    todo("implement");
    _sub_44B709(this);
}

_extern void _sub_44B71E(LobbySteam *const, LobbyChatType, wchar_t const *, wchar_t const *);
void LobbySteam::ChatSend(LobbyChatType, wchar_t const *, wchar_t const *) // 0x44B71E
{
    mangled_assert("?ChatSend@LobbySteam@@UAEXW4LobbyChatType@@PB_W1@Z");
    todo("implement");
    _sub_44B71E(this, arg, arg, arg);
}

_extern unsigned long long _sub_44BA5C(LobbySteam *const);
unsigned long long LobbySteam::GetLobbyID() // 0x44BA5C
{
    mangled_assert("?GetLobbyID@LobbySteam@@UAE_KXZ");
    todo("implement");
    unsigned long long __result = _sub_44BA5C(this);
    return __result;
}

_extern bool _sub_44B697(LobbySteam *const, char const *);
bool LobbySteam::CDAuthenticate(char const *) // 0x44B697
{
    mangled_assert("?CDAuthenticate@LobbySteam@@UAE_NPBD@Z");
    todo("implement");
    bool __result = _sub_44B697(this, arg);
    return __result;
}

_extern void _sub_44BB56(LobbySteam::Dispatch *const, unsigned long long);
void LobbySteam::Dispatch::OnServerAdded(unsigned long long) // 0x44BB56
{
    mangled_assert("?OnServerAdded@Dispatch@LobbySteam@@UAEX_K@Z");
    todo("implement");
    _sub_44BB56(this, arg);
}

_extern void _sub_44BB78(LobbySteam::Dispatch *const, unsigned long long);
void LobbySteam::Dispatch::OnServerUpdated(unsigned long long) // 0x44BB78
{
    mangled_assert("?OnServerUpdated@Dispatch@LobbySteam@@UAEX_K@Z");
    todo("implement");
    _sub_44BB78(this, arg);
}

_extern void _sub_44BA6F(LobbySteam::Dispatch *const, SteamLobbyChatType, char const *, char const *);
void LobbySteam::Dispatch::OnChat(SteamLobbyChatType, char const *, char const *) // 0x44BA6F
{
    mangled_assert("?OnChat@Dispatch@LobbySteam@@UAEXW4SteamLobbyChatType@@PBD1@Z");
    todo("implement");
    _sub_44BA6F(this, arg, arg, arg);
}

/* ---------- private code */

_extern std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > _sub_44C120(char const *);
_static std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > StringSteamToHW2(char const *input) // 0x44C120
{
    mangled_assert("StringSteamToHW2");
    todo("implement");
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > __result = _sub_44C120(input);
    return __result;
}

_extern std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > _sub_44C0E0(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
_static std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > StringSteamToHW2(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &input) // 0x44C0E0
{
    mangled_assert("StringSteamToHW2");
    todo("implement");
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > __result = _sub_44C0E0(input);
    return __result;
}

_extern std::basic_string<char,std::char_traits<char>,std::allocator<char> > _sub_44C0A9(wchar_t const *);
_static std::basic_string<char,std::char_traits<char>,std::allocator<char> > StringHW2ToSteam(wchar_t const *input) // 0x44C0A9
{
    mangled_assert("StringHW2ToSteam");
    todo("implement");
    std::string __result = _sub_44C0A9(input);
    return __result;
}

_extern void _sub_44B90F(SteamLobbySessionDesc const &, LobbySessionDesc &);
_static void ConvertSteamDescToDesc(SteamLobbySessionDesc const &steamdesc, LobbySessionDesc &desc) // 0x44B90F
{
    mangled_assert("ConvertSteamDescToDesc");
    todo("implement");
    _sub_44B90F(steamdesc, desc);
}

_extern void _sub_44B7F2(LobbySessionDesc const &, SteamLobbySessionDesc &);
_static void ConvertDescToSteamDesc(LobbySessionDesc const &desc, SteamLobbySessionDesc &steamdesc) // 0x44B7F2
{
    mangled_assert("ConvertDescToSteamDesc");
    todo("implement");
    _sub_44B7F2(desc, steamdesc);
}
#endif
