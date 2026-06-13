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

_extern _sub_46F104(LobbyGamespy::Dispatch *const, LobbyGamespy *);
_inline LobbyGamespy::Dispatch::Dispatch(LobbyGamespy *) // 0x46F104
{
    mangled_assert("??0Dispatch@LobbyGamespy@@QAE@PAV1@@Z");
    todo("implement");
    _sub_46F104(this, arg);
}

_extern _sub_46F14C(GSEvent *const);
_inline GSEvent::GSEvent() // 0x46F14C
{
    mangled_assert("??0GSEvent@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_46F14C(this);
}

_extern _sub_46F155(GSLobbyPlayerDesc *const, GSLobbyPlayerDesc const &);
_inline GSLobbyPlayerDesc::GSLobbyPlayerDesc(GSLobbyPlayerDesc const &) // 0x46F155
{
    mangled_assert("??0GSLobbyPlayerDesc@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_46F155(this, arg);
}

_extern _sub_46F198(GSLobbyRoomDesc *const);
_inline GSLobbyRoomDesc::GSLobbyRoomDesc() // 0x46F198
{
    mangled_assert("??0GSLobbyRoomDesc@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_46F198(this);
}

_extern _sub_46F1A9(GSLobbySessionDesc *const, GSLobbySessionDesc const &);
_inline GSLobbySessionDesc::GSLobbySessionDesc(GSLobbySessionDesc const &) // 0x46F1A9
{
    mangled_assert("??0GSLobbySessionDesc@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_46F1A9(this, arg);
}

_extern _sub_46F0BA(BufferMessage *const, BufferMessage const &);
_inline BufferMessage::BufferMessage(BufferMessage const &) // 0x46F0BA
{
    mangled_assert("??0BufferMessage@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_46F0BA(this, arg);
}

_extern _sub_46F1C4(LobbyGamespy *const);
LobbyGamespy::LobbyGamespy() // 0x46F1C4
{
    mangled_assert("??0LobbyGamespy@@QAE@XZ");
    todo("implement");
    _sub_46F1C4(this);
}

_extern _sub_46F284(GSLobbySessionDesc::Param *const, GSLobbySessionDesc::Param const &);
_inline GSLobbySessionDesc::Param::Param(GSLobbySessionDesc::Param const &) // 0x46F284
{
    mangled_assert("??0Param@GSLobbySessionDesc@@QAE@ABU01@@Z");
    compiler_generated();
    todo("implement");
    _sub_46F284(this, arg);
}

_extern void _sub_46F2CA(std::_List_buy<BufferMessage,std::allocator<BufferMessage> > *const);
_inline std::_List_buy<BufferMessage,std::allocator<BufferMessage> >::~_List_buy<BufferMessage,std::allocator<BufferMessage> >() // 0x46F2CA
{
    mangled_assert("??1?$_List_buy@VBufferMessage@@V?$allocator@VBufferMessage@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_46F2CA(this);
}

_extern void _sub_46F2E5(std::queue<BufferMessage,std::list<BufferMessage,std::allocator<BufferMessage> > > *const);
_inline std::queue<BufferMessage,std::list<BufferMessage,std::allocator<BufferMessage> > >::~queue<BufferMessage,std::list<BufferMessage,std::allocator<BufferMessage> > >() // 0x46F2E5
{
    mangled_assert("??1?$queue@VBufferMessage@@V?$list@VBufferMessage@@V?$allocator@VBufferMessage@@@std@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_46F2E5(this);
}

_extern void _sub_46F2FC(LobbyGamespy::Dispatch *const);
_inline LobbyGamespy::Dispatch::~Dispatch() // 0x46F2FC
{
    mangled_assert("??1Dispatch@LobbyGamespy@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_46F2FC(this);
}

_extern void _sub_46F321(GSLobbyPlayerDesc *const);
_inline GSLobbyPlayerDesc::~GSLobbyPlayerDesc() // 0x46F321
{
    mangled_assert("??1GSLobbyPlayerDesc@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_46F321(this);
}

_extern void _sub_46F334(GSLobbyRoomDesc *const);
_inline GSLobbyRoomDesc::~GSLobbyRoomDesc() // 0x46F334
{
    mangled_assert("??1GSLobbyRoomDesc@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_46F334(this);
}

_extern void _sub_46F339(GSLobbySessionDesc *const);
_inline GSLobbySessionDesc::~GSLobbySessionDesc() // 0x46F339
{
    mangled_assert("??1GSLobbySessionDesc@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_46F339(this);
}

_extern void _sub_46F33E(LobbyGamespy *const);
LobbyGamespy::~LobbyGamespy() // 0x46F33E
{
    mangled_assert("??1LobbyGamespy@@UAE@XZ");
    todo("implement");
    _sub_46F33E(this);
}

_extern void _sub_46F398(GSLobbySessionDesc::Param *const);
_inline GSLobbySessionDesc::Param::~Param() // 0x46F398
{
    mangled_assert("??1Param@GSLobbySessionDesc@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_46F398(this);
}

_extern BufferMessage &_sub_46F579(BufferMessage *const, BufferMessage const &);
_inline BufferMessage &BufferMessage::operator=(BufferMessage const &) // 0x46F579
{
    mangled_assert("??4BufferMessage@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    BufferMessage & __result = _sub_46F579(this, arg);
    return __result;
}

_extern GSLobbyPlayerDesc &_sub_46F596(GSLobbyPlayerDesc *const, GSLobbyPlayerDesc const &);
_inline GSLobbyPlayerDesc &GSLobbyPlayerDesc::operator=(GSLobbyPlayerDesc const &) // 0x46F596
{
    mangled_assert("??4GSLobbyPlayerDesc@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    GSLobbyPlayerDesc & __result = _sub_46F596(this, arg);
    return __result;
}

_extern GSLobbySessionDesc &_sub_46F5BD(GSLobbySessionDesc *const, GSLobbySessionDesc const &);
_inline GSLobbySessionDesc &GSLobbySessionDesc::operator=(GSLobbySessionDesc const &) // 0x46F5BD
{
    mangled_assert("??4GSLobbySessionDesc@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    GSLobbySessionDesc & __result = _sub_46F5BD(this, arg);
    return __result;
}

_extern GSPeer &_sub_46F5D8(GSPeer *const, GSPeer const &);
_inline GSPeer &GSPeer::operator=(GSPeer const &) // 0x46F5D8
{
    mangled_assert("??4GSPeer@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    GSPeer & __result = _sub_46F5D8(this, arg);
    return __result;
}

_extern GSLobbySessionDesc::Param &_sub_46F5EB(GSLobbySessionDesc::Param *const, GSLobbySessionDesc::Param const &);
_inline GSLobbySessionDesc::Param &GSLobbySessionDesc::Param::operator=(GSLobbySessionDesc::Param const &) // 0x46F5EB
{
    mangled_assert("??4Param@GSLobbySessionDesc@@QAEAAU01@ABU01@@Z");
    compiler_generated();
    todo("implement");
    GSLobbySessionDesc::Param & __result = _sub_46F5EB(this, arg);
    return __result;
}

_extern void _sub_4709E7(LobbyGamespy *const);
void LobbyGamespy::Think() // 0x4709E7
{
    mangled_assert("?Think@LobbyGamespy@@UAEXXZ");
    todo("implement");
    _sub_4709E7(this);
}

_extern bool _sub_46FA9D(LobbyGamespy *const, BufferMessage &);
bool LobbyGamespy::GetMessage(BufferMessage &) // 0x46FA9D
{
    mangled_assert("?GetMessage@LobbyGamespy@@UAE_NAAVBufferMessage@@@Z");
    todo("implement");
    bool __result = _sub_46FA9D(this, arg);
    return __result;
}

_extern void _sub_4708DC(char const *, char *, unsigned __int32, char *, unsigned __int32);
void SplitCombinedOption(char const *option, char *name, unsigned __int32 nameSize, char *value, unsigned __int32 valueSize) // 0x4708DC
{
    mangled_assert("?SplitCombinedOption@@YGXPBDPADI1I@Z");
    todo("implement");
    _sub_4708DC(option, name, nameSize, value, valueSize);
}

_extern bool _sub_470770(LobbyGamespy const *const, unsigned long long, LobbySessionDesc &);
bool LobbyGamespy::SessionGetDescription(unsigned long long, LobbySessionDesc &) const // 0x470770
{
    mangled_assert("?SessionGetDescription@LobbyGamespy@@UBE_N_KAAVLobbySessionDesc@@@Z");
    todo("implement");
    bool __result = _sub_470770(this, arg, arg);
    return __result;
}

_extern bool _sub_4708B5(LobbyGamespy const *const, unsigned long long);
bool LobbyGamespy::SessionUpdate(unsigned long long) const // 0x4708B5
{
    mangled_assert("?SessionUpdate@LobbyGamespy@@UBE_N_K@Z");
    todo("implement");
    bool __result = _sub_4708B5(this, arg);
    return __result;
}

_extern void _sub_47088B(LobbyGamespy *const);
void LobbyGamespy::SessionList() // 0x47088B
{
    mangled_assert("?SessionList@LobbyGamespy@@UAEXXZ");
    todo("implement");
    _sub_47088B(this);
}

_extern void _sub_470899(LobbyGamespy *const);
void LobbyGamespy::SessionListStop() // 0x470899
{
    mangled_assert("?SessionListStop@LobbyGamespy@@UAEXXZ");
    todo("implement");
    _sub_470899(this);
}

_extern void _sub_470836(LobbyGamespy *const, wchar_t const *);
void LobbyGamespy::SessionJoin(wchar_t const *) // 0x470836
{
    mangled_assert("?SessionJoin@LobbyGamespy@@UAEXPB_W@Z");
    todo("implement");
    _sub_470836(this, arg);
}

_extern void _sub_4707DD(LobbyGamespy *const, LobbySessionDesc const &, Net::Session *);
void LobbyGamespy::SessionHost(LobbySessionDesc const &, Net::Session *) // 0x4707DD
{
    mangled_assert("?SessionHost@LobbyGamespy@@UAEXABVLobbySessionDesc@@PAVSession@Net@@@Z");
    todo("implement");
    _sub_4707DD(this, arg, arg);
}

_extern void _sub_470703(LobbyGamespy *const);
void LobbyGamespy::SessionCancel() // 0x470703
{
    mangled_assert("?SessionCancel@LobbyGamespy@@UAEXXZ");
    todo("implement");
    _sub_470703(this);
}

_extern void _sub_4708A7(LobbyGamespy *const);
void LobbyGamespy::SessionStarted() // 0x4708A7
{
    mangled_assert("?SessionStarted@LobbyGamespy@@UAEXXZ");
    todo("implement");
    _sub_4708A7(this);
}

_extern void _sub_47076D(LobbyGamespy *const, bool);
void LobbyGamespy::SessionEnableJoin(bool) // 0x47076D
{
    mangled_assert("?SessionEnableJoin@LobbyGamespy@@UAEX_N@Z");
    todo("implement");
    _sub_47076D(this, arg);
}

_extern void _sub_470711(LobbyGamespy *const, LobbySessionDesc const &, Net::Session *);
void LobbyGamespy::SessionChangeSettings(LobbySessionDesc const &, Net::Session *) // 0x470711
{
    mangled_assert("?SessionChangeSettings@LobbyGamespy@@UAEXABVLobbySessionDesc@@PAVSession@Net@@@Z");
    todo("implement");
    _sub_470711(this, arg, arg);
}

_extern bool _sub_47076A(LobbyGamespy const *const);
bool LobbyGamespy::SessionCreateVisible() const // 0x47076A
{
    mangled_assert("?SessionCreateVisible@LobbyGamespy@@UBE_NXZ");
    todo("implement");
    bool __result = _sub_47076A(this);
    return __result;
}

_extern void _sub_4706F5(LobbyGamespy *const);
void LobbyGamespy::RoomList() // 0x4706F5
{
    mangled_assert("?RoomList@LobbyGamespy@@UAEXXZ");
    todo("implement");
    _sub_4706F5(this);
}

_extern bool _sub_470614(LobbyGamespy const *const, unsigned __int32, LobbyRoomDesc &);
bool LobbyGamespy::RoomGetDescription(unsigned __int32, LobbyRoomDesc &) const // 0x470614
{
    mangled_assert("?RoomGetDescription@LobbyGamespy@@UBE_NIAAVLobbyRoomDesc@@@Z");
    todo("implement");
    bool __result = _sub_470614(this, arg, arg);
    return __result;
}

_extern bool _sub_4706C2(LobbyGamespy *const);
bool LobbyGamespy::RoomJoinTitle() // 0x4706C2
{
    mangled_assert("?RoomJoinTitle@LobbyGamespy@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_4706C2(this);
    return __result;
}

_extern bool _sub_4706AF(LobbyGamespy *const, unsigned __int32);
bool LobbyGamespy::RoomJoin(unsigned __int32) // 0x4706AF
{
    mangled_assert("?RoomJoin@LobbyGamespy@@UAE_NI@Z");
    todo("implement");
    bool __result = _sub_4706AF(this, arg);
    return __result;
}

_extern bool _sub_4706D3(LobbyGamespy *const);
bool LobbyGamespy::RoomLeave() // 0x4706D3
{
    mangled_assert("?RoomLeave@LobbyGamespy@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_4706D3(this);
    return __result;
}

_extern bool _sub_4706E4(LobbyGamespy *const);
bool LobbyGamespy::RoomLeaveTitle() // 0x4706E4
{
    mangled_assert("?RoomLeaveTitle@LobbyGamespy@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_4706E4(this);
    return __result;
}

_extern void _sub_470606(LobbyGamespy *const);
void LobbyGamespy::PlayerUpdateList() // 0x470606
{
    mangled_assert("?PlayerUpdateList@LobbyGamespy@@UAEXXZ");
    todo("implement");
    _sub_470606(this);
}

_extern void _sub_4704C0(LobbyGamespy *const, std::vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > &);
void LobbyGamespy::PlayerGetList(std::vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > &) // 0x4704C0
{
    mangled_assert("?PlayerGetList@LobbyGamespy@@UAEXAAV?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@@Z");
    todo("implement");
    _sub_4704C0(this, arg);
}

_extern bool _sub_4703EF(LobbyGamespy *const, wchar_t const *, LobbyPlayerDesc &);
bool LobbyGamespy::PlayerGetDescription(wchar_t const *, LobbyPlayerDesc &) // 0x4703EF
{
    mangled_assert("?PlayerGetDescription@LobbyGamespy@@UAE_NPB_WAAVLobbyPlayerDesc@@@Z");
    todo("implement");
    bool __result = _sub_4703EF(this, arg, arg);
    return __result;
}

_extern void _sub_47054B(LobbyGamespy *const, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &);
void LobbyGamespy::PlayerGetName(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &) // 0x47054B
{
    mangled_assert("?PlayerGetName@LobbyGamespy@@UAEXAAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z");
    todo("implement");
    _sub_47054B(this, arg);
}

_extern void _sub_4703EE(LobbyGamespy *const);
void LobbyGamespy::PlayerChangeSettings() // 0x4703EE
{
    mangled_assert("?PlayerChangeSettings@LobbyGamespy@@UAEXXZ");
    todo("implement");
    _sub_4703EE(this);
}

_extern void _sub_4705DA(LobbyGamespy *const, LobbyRoomType);
void LobbyGamespy::PlayerSetViewingRoom(LobbyRoomType) // 0x4705DA
{
    mangled_assert("?PlayerSetViewingRoom@LobbyGamespy@@UAEXW4LobbyRoomType@@@Z");
    todo("implement");
    _sub_4705DA(this, arg);
}

_extern void _sub_4705CA(LobbyGamespy *const, bool);
void LobbyGamespy::PlayerSetPlaying(bool) // 0x4705CA
{
    mangled_assert("?PlayerSetPlaying@LobbyGamespy@@UAEX_N@Z");
    todo("implement");
    _sub_4705CA(this, arg);
}

_extern LobbyChatStatus _sub_46F765(LobbyGamespy *const);
LobbyChatStatus LobbyGamespy::ChatGetStatus() // 0x46F765
{
    mangled_assert("?ChatGetStatus@LobbyGamespy@@UAE?AW4LobbyChatStatus@@XZ");
    todo("implement");
    LobbyChatStatus __result = _sub_46F765(this);
    return __result;
}

_extern void _sub_46F747(LobbyGamespy *const, char const *);
void LobbyGamespy::ChatConnect(char const *) // 0x46F747
{
    mangled_assert("?ChatConnect@LobbyGamespy@@UAEXPBD@Z");
    todo("implement");
    _sub_46F747(this, arg);
}

_extern void _sub_46F757(LobbyGamespy *const);
void LobbyGamespy::ChatDisconnect() // 0x46F757
{
    mangled_assert("?ChatDisconnect@LobbyGamespy@@UAEXXZ");
    todo("implement");
    _sub_46F757(this);
}

_extern void _sub_46F76C(LobbyGamespy *const, LobbyChatType, wchar_t const *, wchar_t const *);
void LobbyGamespy::ChatSend(LobbyChatType, wchar_t const *, wchar_t const *) // 0x46F76C
{
    mangled_assert("?ChatSend@LobbyGamespy@@UAEXW4LobbyChatType@@PB_W1@Z");
    todo("implement");
    _sub_46F76C(this, arg, arg, arg);
}

_extern bool _sub_46F734(LobbyGamespy *const, char const *);
bool LobbyGamespy::CDAuthenticate(char const *) // 0x46F734
{
    mangled_assert("?CDAuthenticate@LobbyGamespy@@UAE_NPBD@Z");
    todo("implement");
    bool __result = _sub_46F734(this, arg);
    return __result;
}

_extern void _sub_4702CE(LobbyGamespy::Dispatch *const, unsigned __int32);
void LobbyGamespy::Dispatch::OnServerAdded(unsigned __int32) // 0x4702CE
{
    mangled_assert("?OnServerAdded@Dispatch@LobbyGamespy@@UAEXI@Z");
    todo("implement");
    _sub_4702CE(this, arg);
}

_extern void _sub_47038E(LobbyGamespy::Dispatch *const, unsigned __int32);
void LobbyGamespy::Dispatch::OnServerUpdated(unsigned __int32) // 0x47038E
{
    mangled_assert("?OnServerUpdated@Dispatch@LobbyGamespy@@UAEXI@Z");
    todo("implement");
    _sub_47038E(this, arg);
}

_extern void _sub_47032E(LobbyGamespy::Dispatch *const, unsigned __int32);
void LobbyGamespy::Dispatch::OnServerDeleted(unsigned __int32) // 0x47032E
{
    mangled_assert("?OnServerDeleted@Dispatch@LobbyGamespy@@UAEXI@Z");
    todo("implement");
    _sub_47032E(this, arg);
}

_extern void _sub_470186(LobbyGamespy::Dispatch *const, char const *, unsigned __int32);
void LobbyGamespy::Dispatch::OnRoomAdded(char const *, unsigned __int32) // 0x470186
{
    mangled_assert("?OnRoomAdded@Dispatch@LobbyGamespy@@UAEXPBDI@Z");
    todo("implement");
    _sub_470186(this, arg, arg);
}

_extern void _sub_46FFEE(LobbyGamespy::Dispatch *const, char const *, bool);
void LobbyGamespy::Dispatch::OnPlayerJoined(char const *, bool) // 0x46FFEE
{
    mangled_assert("?OnPlayerJoined@Dispatch@LobbyGamespy@@UAEXPBD_N@Z");
    todo("implement");
    _sub_46FFEE(this, arg, arg);
}

_extern void _sub_47010F(LobbyGamespy::Dispatch *const, char const *);
void LobbyGamespy::Dispatch::OnPlayerLeft(char const *) // 0x47010F
{
    mangled_assert("?OnPlayerLeft@Dispatch@LobbyGamespy@@UAEXPBD@Z");
    todo("implement");
    _sub_47010F(this, arg);
}

_extern void _sub_46FF77(LobbyGamespy::Dispatch *const, char const *);
void LobbyGamespy::Dispatch::OnPlayerChanged(char const *) // 0x46FF77
{
    mangled_assert("?OnPlayerChanged@Dispatch@LobbyGamespy@@UAEXPBD@Z");
    todo("implement");
    _sub_46FF77(this, arg);
}

_extern void _sub_46FDEF(LobbyGamespy::Dispatch *const, bool, unsigned __int32);
void LobbyGamespy::Dispatch::OnChatConnect(bool, unsigned __int32) // 0x46FDEF
{
    mangled_assert("?OnChatConnect@Dispatch@LobbyGamespy@@UAEX_NI@Z");
    todo("implement");
    _sub_46FDEF(this, arg, arg);
}

_extern void _sub_46FC41(LobbyGamespy::Dispatch *const, GSLobbyChatType, char const *, char const *);
void LobbyGamespy::Dispatch::OnChat(GSLobbyChatType, char const *, char const *) // 0x46FC41
{
    mangled_assert("?OnChat@Dispatch@LobbyGamespy@@UAEXW4GSLobbyChatType@@PBD1@Z");
    todo("implement");
    _sub_46FC41(this, arg, arg, arg);
}

_extern void _sub_4701E6(LobbyGamespy::Dispatch *const, GSLobbyRoomType, __int32, bool);
void LobbyGamespy::Dispatch::OnRoomJoined(GSLobbyRoomType, __int32, bool) // 0x4701E6
{
    mangled_assert("?OnRoomJoined@Dispatch@LobbyGamespy@@UAEXW4GSLobbyRoomType@@H_N@Z");
    todo("implement");
    _sub_4701E6(this, arg, arg, arg);
}

_extern void _sub_46FB20(LobbyGamespy::Dispatch *const, bool, char const *);
void LobbyGamespy::Dispatch::OnCDAuthenticate(bool, char const *) // 0x46FB20
{
    mangled_assert("?OnCDAuthenticate@Dispatch@LobbyGamespy@@UAEX_NPBD@Z");
    todo("implement");
    _sub_46FB20(this, arg, arg);
}

_extern void _sub_46FED4(LobbyGamespy::Dispatch *const, char const *);
void LobbyGamespy::Dispatch::OnDisconnected(char const *) // 0x46FED4
{
    mangled_assert("?OnDisconnected@Dispatch@LobbyGamespy@@UAEXPBD@Z");
    todo("implement");
    _sub_46FED4(this, arg);
}

/* ---------- private code */

_extern std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > _sub_470979(char const *);
_static std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > StringGameSpyToHW2(char const *input) // 0x470979
{
    mangled_assert("StringGameSpyToHW2");
    todo("implement");
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > __result = _sub_470979(input);
    return __result;
}

_extern std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > _sub_470939(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
_static std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > StringGameSpyToHW2(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &input) // 0x470939
{
    mangled_assert("StringGameSpyToHW2");
    todo("implement");
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > __result = _sub_470939(input);
    return __result;
}

_extern std::basic_string<char,std::char_traits<char>,std::allocator<char> > _sub_4709B0(wchar_t const *);
_static std::basic_string<char,std::char_traits<char>,std::allocator<char> > StringHW2ToGameSpy(wchar_t const *input) // 0x4709B0
{
    mangled_assert("StringHW2ToGameSpy");
    todo("implement");
    std::string __result = _sub_4709B0(input);
    return __result;
}

_extern void _sub_46F95B(GSLobbySessionDesc const &, LobbySessionDesc &);
_static void ConvertGSDescToDesc(GSLobbySessionDesc const &gsdesc, LobbySessionDesc &desc) // 0x46F95B
{
    mangled_assert("ConvertGSDescToDesc");
    todo("implement");
    _sub_46F95B(gsdesc, desc);
}

_extern void _sub_46F83E(LobbySessionDesc const &, GSLobbySessionDesc &);
_static void ConvertDescToGSDesc(LobbySessionDesc const &desc, GSLobbySessionDesc &gsdesc) // 0x46F83E
{
    mangled_assert("ConvertDescToGSDesc");
    todo("implement");
    _sub_46F83E(desc, gsdesc);
}
#endif
