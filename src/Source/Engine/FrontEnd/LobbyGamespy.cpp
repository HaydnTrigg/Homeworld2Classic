#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <localizer\localizer.h>
#include <new>
#include <gslobby\gslobbysessiondesc.h>
#include <xstddef>
#include <FrontEnd\lobbynetwork.h>
#include <type_traits>
#include <gslobby\gslobbydefines.h>
#include <util\buffermessage.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <list>
#include <gslobby\gslobbyplayerdesc.h>
#include <gslobby\gspeer.h>
#include <assist\utf8.h>
#include <gslobby\gslobbyexport.h>
#include <boost\scoped_ptr.hpp>
#include <util\types.h>
#include <gslobby\gslobbyroomdesc.h>
#include <FrontEnd\LobbySessionDesc.h>
#include <FrontEnd\LobbyPlayerDesc.h>
#include <assist\typemagic.h>
#include <gslobby\gsevent.h>
#include <FrontEnd\lobbyroomdesc.h>
#include <App\AppObj.h>
#include <platform\appinterface.h>
#include <FrontEnd\LobbyGamespy.h>
#include <FrontEnd\lobbydefines.h>
#include <wchar.h>
#include <queue>
#include <App\GameSpyID.h>
#include <fileio\ramstream.h>

/* ---------- constants */

/* ---------- definitions */

typedef std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > PlayerCont;

/* ---------- prototypes */

extern void SplitCombinedOption(char const *option, char *name, unsigned __int32 nameSize, char *value, unsigned __int32 valueSize);

_static std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > StringGameSpyToHW2(char const *input);
_static std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > StringGameSpyToHW2(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &input);
_static std::basic_string<char,std::char_traits<char>,std::allocator<char> > StringHW2ToGameSpy(wchar_t const *input);
_static void ConvertGSDescToDesc(GSLobbySessionDesc const &gsdesc, LobbySessionDesc &desc);
_static void ConvertDescToGSDesc(LobbySessionDesc const &desc, GSLobbySessionDesc &gsdesc);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_inline LobbyGamespy::Dispatch::Dispatch(LobbyGamespy *) // 0x46F104
{
    mangled_assert("??0Dispatch@LobbyGamespy@@QAE@PAV1@@Z");
    todo("implement");
}

_inline GSEvent::GSEvent() // 0x46F14C
{
    mangled_assert("??0GSEvent@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline GSLobbyPlayerDesc::GSLobbyPlayerDesc(GSLobbyPlayerDesc const &) // 0x46F155
{
    mangled_assert("??0GSLobbyPlayerDesc@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline GSLobbyRoomDesc::GSLobbyRoomDesc() // 0x46F198
{
    mangled_assert("??0GSLobbyRoomDesc@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline GSLobbySessionDesc::GSLobbySessionDesc(GSLobbySessionDesc const &) // 0x46F1A9
{
    mangled_assert("??0GSLobbySessionDesc@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline BufferMessage::BufferMessage(BufferMessage const &) // 0x46F0BA
{
    mangled_assert("??0BufferMessage@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

LobbyGamespy::LobbyGamespy() // 0x46F1C4
{
    mangled_assert("??0LobbyGamespy@@QAE@XZ");
    todo("implement");
}

_inline GSLobbySessionDesc::Param::Param(GSLobbySessionDesc::Param const &) // 0x46F284
{
    mangled_assert("??0Param@GSLobbySessionDesc@@QAE@ABU01@@Z");
    compiler_generated();
    todo("implement");
}

_inline std::_List_buy<BufferMessage,std::allocator<BufferMessage> >::~_List_buy<BufferMessage,std::allocator<BufferMessage> >() // 0x46F2CA
{
    mangled_assert("??1?$_List_buy@VBufferMessage@@V?$allocator@VBufferMessage@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::queue<BufferMessage,std::list<BufferMessage,std::allocator<BufferMessage> > >::~queue<BufferMessage,std::list<BufferMessage,std::allocator<BufferMessage> > >() // 0x46F2E5
{
    mangled_assert("??1?$queue@VBufferMessage@@V?$list@VBufferMessage@@V?$allocator@VBufferMessage@@@std@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LobbyGamespy::Dispatch::~Dispatch() // 0x46F2FC
{
    mangled_assert("??1Dispatch@LobbyGamespy@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline GSLobbyPlayerDesc::~GSLobbyPlayerDesc() // 0x46F321
{
    mangled_assert("??1GSLobbyPlayerDesc@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline GSLobbyRoomDesc::~GSLobbyRoomDesc() // 0x46F334
{
    mangled_assert("??1GSLobbyRoomDesc@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline GSLobbySessionDesc::~GSLobbySessionDesc() // 0x46F339
{
    mangled_assert("??1GSLobbySessionDesc@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

LobbyGamespy::~LobbyGamespy() // 0x46F33E
{
    mangled_assert("??1LobbyGamespy@@UAE@XZ");
    todo("implement");
}

_inline GSLobbySessionDesc::Param::~Param() // 0x46F398
{
    mangled_assert("??1Param@GSLobbySessionDesc@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline BufferMessage &BufferMessage::operator=(BufferMessage const &) // 0x46F579
{
    mangled_assert("??4BufferMessage@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline GSLobbyPlayerDesc &GSLobbyPlayerDesc::operator=(GSLobbyPlayerDesc const &) // 0x46F596
{
    mangled_assert("??4GSLobbyPlayerDesc@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline GSLobbySessionDesc &GSLobbySessionDesc::operator=(GSLobbySessionDesc const &) // 0x46F5BD
{
    mangled_assert("??4GSLobbySessionDesc@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline GSPeer &GSPeer::operator=(GSPeer const &) // 0x46F5D8
{
    mangled_assert("??4GSPeer@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline GSLobbySessionDesc::Param &GSLobbySessionDesc::Param::operator=(GSLobbySessionDesc::Param const &) // 0x46F5EB
{
    mangled_assert("??4Param@GSLobbySessionDesc@@QAEAAU01@ABU01@@Z");
    compiler_generated();
    todo("implement");
}

void LobbyGamespy::Think() // 0x4709E7
{
    mangled_assert("?Think@LobbyGamespy@@UAEXXZ");
    todo("implement");
}

bool LobbyGamespy::GetMessage(BufferMessage &) // 0x46FA9D
{
    mangled_assert("?GetMessage@LobbyGamespy@@UAE_NAAVBufferMessage@@@Z");
    todo("implement");
}

void SplitCombinedOption(char const *option, char *name, unsigned __int32 nameSize, char *value, unsigned __int32 valueSize) // 0x4708DC
{
    mangled_assert("?SplitCombinedOption@@YGXPBDPADI1I@Z");
    todo("implement");
}

bool LobbyGamespy::SessionGetDescription(unsigned long long, LobbySessionDesc &) const // 0x470770
{
    mangled_assert("?SessionGetDescription@LobbyGamespy@@UBE_N_KAAVLobbySessionDesc@@@Z");
    todo("implement");
}

bool LobbyGamespy::SessionUpdate(unsigned long long) const // 0x4708B5
{
    mangled_assert("?SessionUpdate@LobbyGamespy@@UBE_N_K@Z");
    todo("implement");
}

void LobbyGamespy::SessionList() // 0x47088B
{
    mangled_assert("?SessionList@LobbyGamespy@@UAEXXZ");
    todo("implement");
}

void LobbyGamespy::SessionListStop() // 0x470899
{
    mangled_assert("?SessionListStop@LobbyGamespy@@UAEXXZ");
    todo("implement");
}

void LobbyGamespy::SessionJoin(wchar_t const *) // 0x470836
{
    mangled_assert("?SessionJoin@LobbyGamespy@@UAEXPB_W@Z");
    todo("implement");
}

void LobbyGamespy::SessionHost(LobbySessionDesc const &, Net::Session *) // 0x4707DD
{
    mangled_assert("?SessionHost@LobbyGamespy@@UAEXABVLobbySessionDesc@@PAVSession@Net@@@Z");
    todo("implement");
}

void LobbyGamespy::SessionCancel() // 0x470703
{
    mangled_assert("?SessionCancel@LobbyGamespy@@UAEXXZ");
    todo("implement");
}

void LobbyGamespy::SessionStarted() // 0x4708A7
{
    mangled_assert("?SessionStarted@LobbyGamespy@@UAEXXZ");
    todo("implement");
}

void LobbyGamespy::SessionEnableJoin(bool) // 0x47076D
{
    mangled_assert("?SessionEnableJoin@LobbyGamespy@@UAEX_N@Z");
    todo("implement");
}

void LobbyGamespy::SessionChangeSettings(LobbySessionDesc const &, Net::Session *) // 0x470711
{
    mangled_assert("?SessionChangeSettings@LobbyGamespy@@UAEXABVLobbySessionDesc@@PAVSession@Net@@@Z");
    todo("implement");
}

bool LobbyGamespy::SessionCreateVisible() const // 0x47076A
{
    mangled_assert("?SessionCreateVisible@LobbyGamespy@@UBE_NXZ");
    todo("implement");
}

void LobbyGamespy::RoomList() // 0x4706F5
{
    mangled_assert("?RoomList@LobbyGamespy@@UAEXXZ");
    todo("implement");
}

bool LobbyGamespy::RoomGetDescription(unsigned __int32, LobbyRoomDesc &) const // 0x470614
{
    mangled_assert("?RoomGetDescription@LobbyGamespy@@UBE_NIAAVLobbyRoomDesc@@@Z");
    todo("implement");
}

bool LobbyGamespy::RoomJoinTitle() // 0x4706C2
{
    mangled_assert("?RoomJoinTitle@LobbyGamespy@@UAE_NXZ");
    todo("implement");
}

bool LobbyGamespy::RoomJoin(unsigned __int32) // 0x4706AF
{
    mangled_assert("?RoomJoin@LobbyGamespy@@UAE_NI@Z");
    todo("implement");
}

bool LobbyGamespy::RoomLeave() // 0x4706D3
{
    mangled_assert("?RoomLeave@LobbyGamespy@@UAE_NXZ");
    todo("implement");
}

bool LobbyGamespy::RoomLeaveTitle() // 0x4706E4
{
    mangled_assert("?RoomLeaveTitle@LobbyGamespy@@UAE_NXZ");
    todo("implement");
}

void LobbyGamespy::PlayerUpdateList() // 0x470606
{
    mangled_assert("?PlayerUpdateList@LobbyGamespy@@UAEXXZ");
    todo("implement");
}

void LobbyGamespy::PlayerGetList(std::vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > &) // 0x4704C0
{
    mangled_assert("?PlayerGetList@LobbyGamespy@@UAEXAAV?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@@Z");
    todo("implement");
}

bool LobbyGamespy::PlayerGetDescription(wchar_t const *, LobbyPlayerDesc &) // 0x4703EF
{
    mangled_assert("?PlayerGetDescription@LobbyGamespy@@UAE_NPB_WAAVLobbyPlayerDesc@@@Z");
    todo("implement");
}

void LobbyGamespy::PlayerGetName(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &) // 0x47054B
{
    mangled_assert("?PlayerGetName@LobbyGamespy@@UAEXAAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z");
    todo("implement");
}

void LobbyGamespy::PlayerChangeSettings() // 0x4703EE
{
    mangled_assert("?PlayerChangeSettings@LobbyGamespy@@UAEXXZ");
    todo("implement");
}

void LobbyGamespy::PlayerSetViewingRoom(LobbyRoomType) // 0x4705DA
{
    mangled_assert("?PlayerSetViewingRoom@LobbyGamespy@@UAEXW4LobbyRoomType@@@Z");
    todo("implement");
}

void LobbyGamespy::PlayerSetPlaying(bool) // 0x4705CA
{
    mangled_assert("?PlayerSetPlaying@LobbyGamespy@@UAEX_N@Z");
    todo("implement");
}

LobbyChatStatus LobbyGamespy::ChatGetStatus() // 0x46F765
{
    mangled_assert("?ChatGetStatus@LobbyGamespy@@UAE?AW4LobbyChatStatus@@XZ");
    todo("implement");
}

void LobbyGamespy::ChatConnect(char const *) // 0x46F747
{
    mangled_assert("?ChatConnect@LobbyGamespy@@UAEXPBD@Z");
    todo("implement");
}

void LobbyGamespy::ChatDisconnect() // 0x46F757
{
    mangled_assert("?ChatDisconnect@LobbyGamespy@@UAEXXZ");
    todo("implement");
}

void LobbyGamespy::ChatSend(LobbyChatType, wchar_t const *, wchar_t const *) // 0x46F76C
{
    mangled_assert("?ChatSend@LobbyGamespy@@UAEXW4LobbyChatType@@PB_W1@Z");
    todo("implement");
}

bool LobbyGamespy::CDAuthenticate(char const *) // 0x46F734
{
    mangled_assert("?CDAuthenticate@LobbyGamespy@@UAE_NPBD@Z");
    todo("implement");
}

void LobbyGamespy::Dispatch::OnServerAdded(unsigned __int32) // 0x4702CE
{
    mangled_assert("?OnServerAdded@Dispatch@LobbyGamespy@@UAEXI@Z");
    todo("implement");
}

void LobbyGamespy::Dispatch::OnServerUpdated(unsigned __int32) // 0x47038E
{
    mangled_assert("?OnServerUpdated@Dispatch@LobbyGamespy@@UAEXI@Z");
    todo("implement");
}

void LobbyGamespy::Dispatch::OnServerDeleted(unsigned __int32) // 0x47032E
{
    mangled_assert("?OnServerDeleted@Dispatch@LobbyGamespy@@UAEXI@Z");
    todo("implement");
}

void LobbyGamespy::Dispatch::OnRoomAdded(char const *, unsigned __int32) // 0x470186
{
    mangled_assert("?OnRoomAdded@Dispatch@LobbyGamespy@@UAEXPBDI@Z");
    todo("implement");
}

void LobbyGamespy::Dispatch::OnPlayerJoined(char const *, bool) // 0x46FFEE
{
    mangled_assert("?OnPlayerJoined@Dispatch@LobbyGamespy@@UAEXPBD_N@Z");
    todo("implement");
}

void LobbyGamespy::Dispatch::OnPlayerLeft(char const *) // 0x47010F
{
    mangled_assert("?OnPlayerLeft@Dispatch@LobbyGamespy@@UAEXPBD@Z");
    todo("implement");
}

void LobbyGamespy::Dispatch::OnPlayerChanged(char const *) // 0x46FF77
{
    mangled_assert("?OnPlayerChanged@Dispatch@LobbyGamespy@@UAEXPBD@Z");
    todo("implement");
}

void LobbyGamespy::Dispatch::OnChatConnect(bool, unsigned __int32) // 0x46FDEF
{
    mangled_assert("?OnChatConnect@Dispatch@LobbyGamespy@@UAEX_NI@Z");
    todo("implement");
}

void LobbyGamespy::Dispatch::OnChat(GSLobbyChatType, char const *, char const *) // 0x46FC41
{
    mangled_assert("?OnChat@Dispatch@LobbyGamespy@@UAEXW4GSLobbyChatType@@PBD1@Z");
    todo("implement");
}

void LobbyGamespy::Dispatch::OnRoomJoined(GSLobbyRoomType, __int32, bool) // 0x4701E6
{
    mangled_assert("?OnRoomJoined@Dispatch@LobbyGamespy@@UAEXW4GSLobbyRoomType@@H_N@Z");
    todo("implement");
}

void LobbyGamespy::Dispatch::OnCDAuthenticate(bool, char const *) // 0x46FB20
{
    mangled_assert("?OnCDAuthenticate@Dispatch@LobbyGamespy@@UAEX_NPBD@Z");
    todo("implement");
}

void LobbyGamespy::Dispatch::OnDisconnected(char const *) // 0x46FED4
{
    mangled_assert("?OnDisconnected@Dispatch@LobbyGamespy@@UAEXPBD@Z");
    todo("implement");
}

/* ---------- private code */

_static std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > StringGameSpyToHW2(char const *input) // 0x470979
{
    mangled_assert("StringGameSpyToHW2");
    todo("implement");
}

_static std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > StringGameSpyToHW2(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &input) // 0x470939
{
    mangled_assert("StringGameSpyToHW2");
    todo("implement");
}

_static std::basic_string<char,std::char_traits<char>,std::allocator<char> > StringHW2ToGameSpy(wchar_t const *input) // 0x4709B0
{
    mangled_assert("StringHW2ToGameSpy");
    todo("implement");
}

_static void ConvertGSDescToDesc(GSLobbySessionDesc const &gsdesc, LobbySessionDesc &desc) // 0x46F95B
{
    mangled_assert("ConvertGSDescToDesc");
    todo("implement");
}

_static void ConvertDescToGSDesc(LobbySessionDesc const &desc, GSLobbySessionDesc &gsdesc) // 0x46F83E
{
    mangled_assert("ConvertDescToGSDesc");
    todo("implement");
}
#endif
