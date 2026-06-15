#if 0
/* ---------- headers */

#include "decomp.h"
#include <GSLobby\GamespySDK\chat\chatHandlers.h>
#include <util\types.h>
#include <securityappcontainer.h>
#include <crtdefs.h>
#include <fibersapi.h>
#include <GSLobby\GamespySDK\serverbrowsing\sb_serverbrowsing.h>
#include <winver.h>
#include <verrsrc.h>
#include <realtimeapiset.h>
#include <tvout.h>
#include <winuser.h>
#include <xmemory>
#include <GSLobby\GSLobbyPlayerDesc.h>
#include <xmemory0>
#include <platform\timer.h>
#include <ime_cmodes.h>
#include <platform\platformexports.h>
#include <consoleapi.h>
#include <winsock.h>
#include <new>
#include <namedpipeapi.h>
#include <ioapiset.h>
#include <xstddef>
#include <memoryapi.h>
#include <string>
#include <wingdi.h>
#include <type_traits>
#include <pshpack4.h>
#include <winerror.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <interlockedapi.h>
#include <timezoneapi.h>
#include <stringapiset.h>
#include <reason.h>
#include <GSLobby\gslobbyroomdesc.h>
#include <GSLobby\GamespySDK\chat\chatMain.h>
#include <GSLobby\GamespySDK\chat\chatSocket.h>
#include <GSLobby\GamespySDK\chat\chatCrypt.h>
#include <securitybaseapi.h>
#include <vector>
#include <imm.h>
#include <assist\typemagic.h>
#include <debugapi.h>
#include <fileapi.h>
#include <stralign.h>
#include <assert.h>
#include <GSLobby\GamespySDK\peer\peer.h>
#include <GSLobby\GamespySDK\nonport.h>
#include <windows.h>
#include <threadpoollegacyapiset.h>
#include <winsvc.h>
#include <winapifamily.h>
#include <xstring>
#include <sdkddkver.h>
#include <excpt.h>
#include <poppack.h>
#include <GSLobby\gsevent.h>
#include <profileapi.h>
#include <pch.h>
#include <GSLobby\GSPeer.h>
#include <GSLobby\gslobbyexport.h>
#include <synchapi.h>
#include <GSLobby\gslobbydefines.h>
#include <utilapiset.h>
#include <heapapi.h>
#include <processthreadsapi.h>
#include <GSLobby\GamespySDK\hashtable.h>
#include <pshpack8.h>
#include <winnetwk.h>
#include <wnnc.h>
#include <assist\stlexmap.h>
#include <stdarg.h>
#include <bemapiset.h>
#include <windef.h>
#include <GSLobby\GamespySDK\serverbrowsing\sb_crypt.h>
#include <minwindef.h>
#include <specstrings.h>
#include <handleapi.h>
#include <specstrings_strict.h>
#include <specstrings_undef.h>
#include <GSLobby\GamespySDK\chat\chat.h>
#include <driverspecs.h>
#include <sdv_driverspecs.h>
#include <threadpoolapiset.h>
#include <inaddr.h>
#include <namespaceapi.h>
#include <ktmtypes.h>
#include <winbase.h>
#include <wincon.h>
#include <apisetcconv.h>
#include <minwinbase.h>
#include <GSLobby\GamespySDK\qr2\qr2.h>
#include <GSLobby\GamespySDK\qr2\qr2regkeys.h>
#include <errhandlingapi.h>
#include <processenv.h>
#include <guiddef.h>
#include <jobapi.h>
#include <apiset.h>
#include <map>
#include <xtree>
#include <systemtopologyapi.h>
#include <pshpack1.h>
#include <wow64apiset.h>
#include <winnls.h>
#include <datetimeapi.h>
#include <processtopologyapi.h>
#include <GSLobby\GSLobbySessionDesc.h>
#include <winnt.h>
#include <pshpack2.h>
#include <GSLobby\GamespySDK\serverbrowsing\sb_internal.h>
#include <kernelspecs.h>
#include <libloaderapi.h>
#include <GSLobby\GamespySDK\darray.h>
#include <basetsd.h>
#include <sysinfoapi.h>
#include <mcx.h>
#include <winreg.h>

/* ---------- constants */

enum `anonymous-namespace'::CustomKeyID
{
    CK_NumPlayers = 50, // 0x0032 '2'
    CK_MaxPlayers = 51, // 0x0033 '3'
    CK_GameTypeOptionsBase = 52, // 0x0034 '4'
    CK_GameTypeOptionsEnd = 84, // 0x0054 'T'
};

enum `anonymous-namespace'::ConnectionStatus
{
    CS_Unconnected = 0,
    CS_Connected,
};

enum `anonymous-namespace'::AuthenticationStatus
{
    AS_Invalid = 0,
    AS_Authenticated,
    AS_Denied,
};

/* ---------- definitions */

struct `anonymous-namespace'::CustomKey
{
    __int32 id; // 0x0
    char const *name; // 0x4
    char const *defaultValue; // 0x8
};
static_assert(sizeof(`anonymous-namespace'::CustomKey) == 12, "Invalid `anonymous-namespace'::CustomKey size");

typedef void (*chatUserModeChanged)(void *, char const *, char const *, __int32, void *);
typedef void (*chatNewUserList)(void *, char const *, __int32, char const **, __int32 *, void *);
typedef void (*chatRaw)(void *, char const *, void *);
typedef void (*chatChangeNickCallback)(void *, CHATBool, char const *, char const *, void *);
typedef void (*peerConnectCallback)(void *, PEERBool, void *);
typedef void (*peerGetPlayerIPCallback)(void *, PEERBool, char const *, unsigned __int32, void *);
typedef void (*peerJoinRoomCallback)(void *, PEERBool, PEERJoinResult, RoomType, void *);
typedef void (*chatConnectCallback)(void *, CHATBool, void *);
typedef void (*peerGetPlayerProfileIDCallback)(void *, PEERBool, char const *, __int32, void *);
typedef void (*chatAuthenticateCDKeyCallback)(void *, __int32, char const *, void *);
typedef void (*chatPrivateMessage)(void *, char const *, char const *, __int32, void *);
typedef void (*chatUserListUpdated)(void *, char const *, void *);
typedef void (*chatDisconnected)(void *, char const *, void *);
typedef void (*chatGetBasicUserInfoCallback)(void *, CHATBool, char const *, char const *, char const *, void *);
typedef void (*chatUserJoined)(void *, char const *, char const *, __int32, void *);
typedef void (*chatChannelMessage)(void *, char const *, char const *, char const *, __int32, void *);
typedef void (*chatBroadcastKeyChanged)(void *, char const *, char const *, char const *, char const *, void *);
typedef void (*chatTopicChanged)(void *, char const *, char const *, void *);
typedef void (*chatEnterChannelCallback)(void *, CHATBool, CHATEnterResult, char const *, void *);
typedef void (*chatChannelModeChanged)(void *, char const *, CHATChannelMode *, void *);
typedef void (*chatInvited)(void *, char const *, char const *, void *);
typedef void (*peerAuthenticateCDKeyCallback)(void *, __int32, char const *, void *);
typedef void (*peerChangeNickCallback)(void *, PEERBool, char const *, char const *, void *);
typedef void (*peerGetGlobalKeysCallback)(void *, PEERBool, char const *, __int32, char const **, char const **, void *);
typedef void (*chatNickErrorCallback)(void *, __int32, char const *, void *);
typedef void (*chatUserParted)(void *, char const *, char const *, __int32, char const *, char const *, void *);
typedef void (*chatKicked)(void *, char const *, char const *, char const *, void *);
typedef void (*chatGetGlobalKeysCallback)(void *, CHATBool, char const *, __int32, char const **, char const **, void *);
typedef void (*chatEnumUsersCallback)(void *, CHATBool, char const *, __int32, char const **, __int32 *, void *);
typedef void (*chatGetChannelKeysCallback)(void *, CHATBool, char const *, char const *, __int32, char const **, char const **, void *);
typedef void (*chatFillInUserCallback)(void *, unsigned __int32, char *, void *);
typedef void (*chatUserChangedNick)(void *, char const *, char const *, char const *, void *);
typedef void (*peerGetRoomKeysCallback)(void *, PEERBool, RoomType, char const *, __int32, char **, char **, void *);
typedef std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > PlayerCont;
typedef std::vector<GSLobbySessionDesc::Param,std::allocator<GSLobbySessionDesc::Param> > ParamCont;
typedef GSLobbySessionDesc::Param value_type;
typedef unsigned __int32 size_type;
typedef __int32 difference_type;
typedef GSLobbySessionDesc::Param *pointer;
typedef GSLobbySessionDesc::Param const *const_pointer;
typedef GSLobbySessionDesc::Param &reference;
typedef GSLobbySessionDesc::Param const &const_reference;
typedef std::allocator<GSLobbySessionDesc::Param> _Alloc;
typedef std::_Wrap_alloc<std::allocator<GSLobbySessionDesc::Param> > other;
typedef std::_Wrap_alloc<std::allocator<GSLobbySessionDesc::Param> > _Alty;
typedef std::_Vector_alloc<0,std::_Vec_base_types<GSLobbySessionDesc::Param,std::allocator<GSLobbySessionDesc::Param> > > _Myt;
typedef std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<GSLobbySessionDesc::Param> > > const_iterator;
typedef char _Elem;
typedef char *type;
typedef long long timerVal;
typedef std::map<unsigned __int64,GSLobbySessionDesc,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,GSLobbySessionDesc> > > SessionMap;
typedef std::map<int,GSLobbyRoomDesc,std::less<int>,std::allocator<std::pair<int const ,GSLobbyRoomDesc> > > GroupRoomMap;
typedef std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,GSLobbyPlayerDesc,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,GSLobbyPlayerDesc> > > PlayerDataCont;
typedef `anonymous-namespace'::CustomKeyID ?A0xc5b713ac::CustomKeyID;
typedef `anonymous-namespace'::CustomKey ?A0xc5b713ac::CustomKey;
typedef void const *const_void_pointer;
typedef std::allocator<char> _Mybase;
typedef std::integral_constant<bool,0> propagate_on_container_swap;
typedef std::integral_constant<bool,0> propagate_on_container_move_assignment;
typedef std::integral_constant<bool,0> propagate_on_container_copy_assignment;
typedef void *void_pointer;
typedef std::_Tree_node<std::pair<unsigned __int64 const ,GSLobbySessionDesc>,void *> *_Nodeptr;
typedef std::_Tree_node<std::pair<unsigned __int64 const ,GSLobbySessionDesc>,void *> _Node;
typedef std::_Tree_node<std::pair<unsigned __int64 const ,GSLobbySessionDesc>,void *> *&_Nodepref;
typedef std::_Wrap_alloc<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const ,GSLobbySessionDesc>,void *> > > _Alnod_type;
typedef std::allocator<std::pair<unsigned __int64 const ,GSLobbySessionDesc> > allocator_type;
typedef std::less<unsigned __int64> key_compare;
typedef unsigned long long key_type;
typedef std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const ,GSLobbySessionDesc> > > > iterator;
typedef std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const ,GSLobbySessionDesc> > > >,bool> _Pairib;
typedef GSLobbySessionDesc mapped_type;
typedef `anonymous-namespace'::ConnectionStatus ?A0xc5b713ac::ConnectionStatus;
typedef `anonymous-namespace'::AuthenticationStatus ?A0xc5b713ac::AuthenticationStatus;
typedef std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const ,GSLobbySessionDesc> > >,std::_Iterator_base0> _Myiter;
typedef std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const ,GSLobbySessionDesc> > >,std::_Iterator_base0> _Unchecked_type;
typedef `anonymous-namespace'::FindServer ?A0xc5b713ac::FindServer;
typedef `anonymous-namespace'::FindPlayer ?A0xc5b713ac::FindPlayer;
typedef GSLobbySessionDesc::Param *_Tptr;
typedef std::pair<unsigned __int64 const ,GSLobbySessionDesc> const &_Reftype;

class `anonymous-namespace'::FindServer
{
public:
    FindServer(_SBServer *);
    bool operator()(std::pair<unsigned int,GSLobbySessionDesc> const &) const;
private:
    _SBServer *m_server; // 0x0
};
static_assert(sizeof(`anonymous-namespace'::FindServer) == 4, "Invalid `anonymous-namespace'::FindServer size");

class `anonymous-namespace'::FindPlayer
{
public:
    FindPlayer(char const *);
    bool operator()(GSLobbyPlayerDesc const &);
private:
    char const *m_nick; // 0x0
};
static_assert(sizeof(`anonymous-namespace'::FindPlayer) == 4, "Invalid `anonymous-namespace'::FindPlayer size");

/* ---------- prototypes */

extern void PlayerJoinedCallback(void *peer, RoomType roomType, char const *nick, void *param);
extern void PlayerLeftCallback(void *peer, RoomType roomType, char const *nick, char const *reason, void *param);
extern void PlayerFlagsChangedCallback(void *peer, RoomType roomType, char const *nick, __int32 oldFlags, __int32 newFlags, void *param);
extern void QRServerKeyCallback(void *peer, __int32 key, qr2_buffer_s *buffer, void *param);
extern void QRPlayerKeyCallback(void *peer, __int32 key, __int32 index, qr2_buffer_s *buffer, void *param);
extern __int32 QRCountCallback(void *peer, qr2_key_type type, void *param);
extern void QRKeyListCallback(void *peer, qr2_key_type type, qr2_keybuffer_s *keyBuffer, void *param);
extern void RoomKeyChangedCallback(void *peer, RoomType roomType, char const *nick, char const *key, char const *value, void *param);
extern void DisconnectedCallback(void *peer, char const *reason, void *param);
extern void PingCallback(void *peer, char const *nick, __int32 ping, void *param);
extern void EnumPlayersCallback(void *peer, PEERBool success, RoomType roomType, __int32 index, char const *nick, __int32 flags, void *param);
extern void GetRoomKeysCallback(void *peer, PEERBool success, RoomType roomType, char const *nick, __int32 num, char **keys, char **values, void *param);

_static bool MakeNiceNick(char const *wanted, char *output, unsigned __int32 len);
_static void NickErrorCallback(void *peer, __int32 type, char const *nick, void *param);
_static void ConnectCallback(void *peer, PEERBool success, void *param);
_static void JoinRoomCallback(void *peer, PEERBool success, PEERJoinResult result, RoomType roomType, void *param);
_static void RoomMessageCallback(void *peer, RoomType roomType, char const *nick, char const *message, MessageType messageType, void *param);
_static void PlayerMessageCallback(void *peer, char const *nick, char const *message, MessageType messageType, void *param);
_static void ListingGamesCallback(void *peer, PEERBool success, char const *name, _SBServer *server, PEERBool staging, __int32 msg, __int32 progress, void *param);
_static void ListGroupRoomsCallback(void *peer, PEERBool success, __int32 groupID, _SBServer *server, char const *name, __int32 numWaiting, __int32 maxWaiting, __int32 numGames, __int32 numPlaying, void *param);
_static void AuthenticateCDKeyCallback(void *peer, __int32 result, char const *message, void *param);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern unsigned char const k_PartialServerKeys[8]; // 0x1001A640
    extern unsigned char const k_FullServerKeys[8]; // 0x1001A648
    extern unsigned char const k_FullPlayerKeys[1]; // 0x1001A650
    extern char const *k_SetupRoomKey; // 0x1001E018
    extern char const *k_InSetupValue; // 0x1001E01C
    extern char const *k_NotInSetupValue; // 0x1001E020
    extern char const *k_ViewingRoomKey; // 0x1001E024
    extern char const *k_TitleRoomValue; // 0x1001E028
    extern char const *k_GroupRoomValue; // 0x1001E02C
    extern char const *k_StagingRoomValue; // 0x1001E030
    extern float const k_MinStateChangeTime; // 0x1001A654
}

/* ---------- public code */

_inline GSPeer::Data::Data() // 0x10003237
{
    mangled_assert("??0Data@GSPeer@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline GSPeer::Dispatch::Dispatch(GSPeer *) // 0x1000326E
{
    mangled_assert("??0Dispatch@GSPeer@@QAE@PAV1@@Z");
    todo("implement");
}

_inline GSLobbyRoomDesc::GSLobbyRoomDesc(GSLobbyRoomDesc const &) // 0x100032ED
{
    mangled_assert("??0GSLobbyRoomDesc@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

GSPeer::GSPeer() // 0x10003326
{
    mangled_assert("??0GSPeer@@QAE@XZ");
    todo("implement");
}

_inline std::map<int,GSLobbyRoomDesc,std::less<int>,std::allocator<std::pair<int const ,GSLobbyRoomDesc> > >::~map<int,GSLobbyRoomDesc,std::less<int>,std::allocator<std::pair<int const ,GSLobbyRoomDesc> > >() // 0x10003434
{
    mangled_assert("??1?$map@HVGSLobbyRoomDesc@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHVGSLobbyRoomDesc@@@std@@@3@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::map<unsigned __int64,GSLobbySessionDesc,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,GSLobbySessionDesc> > >::~map<unsigned __int64,GSLobbySessionDesc,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,GSLobbySessionDesc> > >() // 0x10003439
{
    mangled_assert("??1?$map@_KVGSLobbySessionDesc@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KVGSLobbySessionDesc@@@std@@@3@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,GSLobbyPlayerDesc>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,GSLobbyPlayerDesc>() // 0x1000343E
{
    mangled_assert("??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VGSLobbyPlayerDesc@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<int,GSLobbyRoomDesc>::~pair<int,GSLobbyRoomDesc>() // 0x10001A9F
{
}

_inline std::pair<unsigned __int64,GSLobbySessionDesc>::~pair<unsigned __int64,GSLobbySessionDesc>() // 0x1000345B
{
    mangled_assert("??1?$pair@_KVGSLobbySessionDesc@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline GSPeer::Dispatch::~Dispatch() // 0x10003463
{
    mangled_assert("??1Dispatch@GSPeer@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline GSLobbyRoomDesc::~GSLobbyRoomDesc() // 0x1000348F
{
    mangled_assert("??1GSLobbyRoomDesc@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

GSPeer::~GSPeer() // 0x10003494
{
    mangled_assert("??1GSPeer@@QAE@XZ");
    todo("implement");
}

_inline GSLobbyRoomDesc &GSLobbyRoomDesc::operator=(GSLobbyRoomDesc const &) // 0x100034D1
{
    mangled_assert("??4GSLobbyRoomDesc@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline GSPeer &GSPeer::operator=(GSPeer const &) // 0x1000350A
{
    mangled_assert("??4GSPeer@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

GSLobbySessionDesc const &GSPeer::GetLocalSession() const // 0x100039B2
{
    mangled_assert("?GetLocalSession@GSPeer@@QBEABVGSLobbySessionDesc@@XZ");
    todo("implement");
}

bool GSPeer::SessionGetDesc(unsigned long long, GSLobbySessionDesc &) const // 0x10004971
{
    mangled_assert("?SessionGetDesc@GSPeer@@QBE_N_KAAVGSLobbySessionDesc@@@Z");
    todo("implement");
}

bool GSPeer::SessionUpdate(unsigned long long) const // 0x10004A25
{
    mangled_assert("?SessionUpdate@GSPeer@@QBE_N_K@Z");
    todo("implement");
}

void PlayerJoinedCallback(void *peer, RoomType roomType, char const *nick, void *param) // 0x10004494
{
    mangled_assert("?PlayerJoinedCallback@@YGXPAXW4RoomType@@PBD0@Z");
    todo("implement");
}

void PlayerLeftCallback(void *peer, RoomType roomType, char const *nick, char const *reason, void *param) // 0x100044AD
{
    mangled_assert("?PlayerLeftCallback@@YGXPAXW4RoomType@@PBD20@Z");
    todo("implement");
}

void PlayerFlagsChangedCallback(void *peer, RoomType roomType, char const *nick, __int32 oldFlags, __int32 newFlags, void *param) // 0x100043F9
{
    mangled_assert("?PlayerFlagsChangedCallback@@YGXPAXW4RoomType@@PBDHH0@Z");
    todo("implement");
}

void QRServerKeyCallback(void *peer, __int32 key, qr2_buffer_s *buffer, void *param) // 0x1000465E
{
    mangled_assert("?QRServerKeyCallback@@YGXPAXHPAUqr2_buffer_s@@0@Z");
    todo("implement");
}

void QRPlayerKeyCallback(void *peer, __int32 key, __int32 index, qr2_buffer_s *buffer, void *param) // 0x1000465B
{
    mangled_assert("?QRPlayerKeyCallback@@YGXPAXHHPAUqr2_buffer_s@@0@Z");
    todo("implement");
}

__int32 QRCountCallback(void *peer, qr2_key_type type, void *param) // 0x100045FC
{
    mangled_assert("?QRCountCallback@@YGHPAXW4qr2_key_type@@0@Z");
    todo("implement");
}

void QRKeyListCallback(void *peer, qr2_key_type type, qr2_keybuffer_s *keyBuffer, void *param) // 0x10004612
{
    mangled_assert("?QRKeyListCallback@@YGXPAXW4qr2_key_type@@PAUqr2_keybuffer_s@@0@Z");
    todo("implement");
}

void RoomKeyChangedCallback(void *peer, RoomType roomType, char const *nick, char const *key, char const *value, void *param) // 0x1000489E
{
    mangled_assert("?RoomKeyChangedCallback@@YGXPAXW4RoomType@@PBD220@Z");
    todo("implement");
}

void DisconnectedCallback(void *peer, char const *reason, void *param) // 0x1000390E
{
    mangled_assert("?DisconnectedCallback@@YGXPAXPBD0@Z");
    todo("implement");
}

void PingCallback(void *peer, char const *nick, __int32 ping, void *param) // 0x100043F6
{
    mangled_assert("?PingCallback@@YGXPAXPBDH0@Z");
    todo("implement");
}

bool GSPeer::Initialize(char const *, char const *, GSEvent *) // 0x100039F7
{
    mangled_assert("?Initialize@GSPeer@@QAE_NPBD0PAVGSEvent@@@Z");
    todo("implement");
}

void GSPeer::Release() // 0x10004788
{
    mangled_assert("?Release@GSPeer@@QAEXXZ");
    todo("implement");
}

char const *GSPeer::GetActualNickname() const // 0x100039E9
{
    mangled_assert("?GetActualNickname@GSPeer@@QBEPBDXZ");
    todo("implement");
}

void GSPeer::Think() // 0x10004A6E
{
    mangled_assert("?Think@GSPeer@@QAEXXZ");
    todo("implement");
}

void GSPeer::SessionHost(GSLobbySessionDesc const &) // 0x100049FA
{
    mangled_assert("?SessionHost@GSPeer@@QAEXABVGSLobbySessionDesc@@@Z");
    todo("implement");
}

void GSPeer::SessionJoin(char const *) // 0x100096FE
{
}

void GSPeer::SessionCancel() // 0x10004933
{
    mangled_assert("?SessionCancel@GSPeer@@QAEXXZ");
    todo("implement");
}

void GSPeer::SessionChangeSettings(GSLobbySessionDesc const &) // 0x10004949
{
    mangled_assert("?SessionChangeSettings@GSPeer@@QAEXABVGSLobbySessionDesc@@@Z");
    todo("implement");
}

void GSPeer::SessionGetList() // 0x100049B0
{
    mangled_assert("?SessionGetList@GSPeer@@QAEXXZ");
    todo("implement");
}

void GSPeer::SessionGetListStop() // 0x100049DD
{
    mangled_assert("?SessionGetListStop@GSPeer@@QAEXXZ");
    todo("implement");
}

void GSPeer::RoomGetList() // 0x100047D9
{
    mangled_assert("?RoomGetList@GSPeer@@QAEXXZ");
    todo("implement");
}

bool GSPeer::RoomGetDesc(unsigned __int32, GSLobbyRoomDesc &) const // 0x1000479D
{
    mangled_assert("?RoomGetDesc@GSPeer@@QBE_NIAAVGSLobbyRoomDesc@@@Z");
    todo("implement");
}

bool GSPeer::RoomJoinTitle() // 0x1000487D
{
    mangled_assert("?RoomJoinTitle@GSPeer@@QAE_NXZ");
    todo("implement");
}

bool GSPeer::RoomJoin(unsigned __int32) // 0x1000480E
{
    mangled_assert("?RoomJoin@GSPeer@@QAE_NI@Z");
    todo("implement");
}

bool GSPeer::RoomLeave() // 0x100048C8
{
    mangled_assert("?RoomLeave@GSPeer@@QAE_NXZ");
    todo("implement");
}

bool GSPeer::RoomLeaveTitle() // 0x100048EF
{
    mangled_assert("?RoomLeaveTitle@GSPeer@@QAE_NXZ");
    todo("implement");
}

void EnumPlayersCallback(void *peer, PEERBool success, RoomType roomType, __int32 index, char const *nick, __int32 flags, void *param) // 0x10003925
{
    mangled_assert("?EnumPlayersCallback@@YGXPAXW4PEERBool@@W4RoomType@@HPBDH0@Z");
    todo("implement");
}

void GetRoomKeysCallback(void *peer, PEERBool success, RoomType roomType, char const *nick, __int32 num, char **keys, char **values, void *param) // 0x100039B9
{
    mangled_assert("?GetRoomKeysCallback@@YGXPAXW4PEERBool@@W4RoomType@@PBDHPAPAD40@Z");
    todo("implement");
}

void GSPeer::PlayerUpdateList() // 0x100045A9
{
    mangled_assert("?PlayerUpdateList@GSPeer@@QAEXXZ");
    todo("implement");
}

void GSPeer::PlayerGetList(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &) // 0x1000444B
{
    mangled_assert("?PlayerGetList@GSPeer@@QAEXAAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z");
    todo("implement");
}

char const *GSPeer::PlayerGetName() const // 0x10004486
{
    mangled_assert("?PlayerGetName@GSPeer@@QBEPBDXZ");
    todo("implement");
}

bool GSPeer::PlayerGetDesc(char const *, GSLobbyPlayerDesc &) const // 0x100043FC
{
    mangled_assert("?PlayerGetDesc@GSPeer@@QBE_NPBDAAVGSLobbyPlayerDesc@@@Z");
    todo("implement");
}

void GSPeer::PlayerSetViewingRoom(GSLobbyRoomType) // 0x10004526
{
    mangled_assert("?PlayerSetViewingRoom@GSPeer@@QAEXW4GSLobbyRoomType@@@Z");
    todo("implement");
}

void GSPeer::PlayerSetPlaying(bool) // 0x100044DA
{
    mangled_assert("?PlayerSetPlaying@GSPeer@@QAEX_N@Z");
    todo("implement");
}

void GSPeer::ChatConnect(char const *) // 0x100037CA
{
    mangled_assert("?ChatConnect@GSPeer@@QAEXPBD@Z");
    todo("implement");
}

void GSPeer::ChatDisconnect() // 0x1000384D
{
    mangled_assert("?ChatDisconnect@GSPeer@@QAEXXZ");
    todo("implement");
}

void GSPeer::ChatMessage(GSLobbyChatType, char const *, char const *) // 0x10003895
{
    mangled_assert("?ChatMessage@GSPeer@@QAEXW4GSLobbyChatType@@PBD1@Z");
    todo("implement");
}

bool GSPeer::CDAuthenticate(char const *) // 0x1000378C
{
    mangled_assert("?CDAuthenticate@GSPeer@@QAE_NPBD@Z");
    todo("implement");
}

void GSPeer::Dispatch::OnServerAdded(_SBServer *) // 0x10003F9A
{
    mangled_assert("?OnServerAdded@Dispatch@GSPeer@@QAEXPAU_SBServer@@@Z");
    todo("implement");
}

void GSPeer::Dispatch::OnServerUpdated(_SBServer *) // 0x10004193
{
    mangled_assert("?OnServerUpdated@Dispatch@GSPeer@@QAEXPAU_SBServer@@@Z");
    todo("implement");
}

void GSPeer::Dispatch::OnServerDeleted(_SBServer *) // 0x10004123
{
    mangled_assert("?OnServerDeleted@Dispatch@GSPeer@@QAEXPAU_SBServer@@@Z");
    todo("implement");
}

void GSPeer::Dispatch::OnRoomAdded(char const *, __int32, __int32, __int32, __int32, __int32) // 0x10003ED8
{
    mangled_assert("?OnRoomAdded@Dispatch@GSPeer@@QAEXPBDHHHHH@Z");
    todo("implement");
}

void GSPeer::Dispatch::OnPlayerJoined(char const *, bool) // 0x10003D42
{
    mangled_assert("?OnPlayerJoined@Dispatch@GSPeer@@QAEXPBD_N@Z");
    todo("implement");
}

void GSPeer::Dispatch::OnPlayerLeft(char const *) // 0x10003E81
{
    mangled_assert("?OnPlayerLeft@Dispatch@GSPeer@@QAEXPBD@Z");
    todo("implement");
}

void GSPeer::Dispatch::OnPlayerKeyChanged(char const *, char const *, char const *) // 0x10003DEF
{
    mangled_assert("?OnPlayerKeyChanged@Dispatch@GSPeer@@QAEXPBD00@Z");
    todo("implement");
}

void GSPeer::Dispatch::OnChatConnect(bool, char const *) // 0x10003CE6
{
    mangled_assert("?OnChatConnect@Dispatch@GSPeer@@QAEX_NPBD@Z");
    todo("implement");
}

void GSPeer::Dispatch::OnCDAuthenticate(bool, char const *) // 0x10003CCA
{
    mangled_assert("?OnCDAuthenticate@Dispatch@GSPeer@@QAEX_NPBD@Z");
    todo("implement");
}

void GSPeer::Dispatch::OnRoomJoin(GSLobbyRoomType, bool) // 0x10003F78
{
    mangled_assert("?OnRoomJoin@Dispatch@GSPeer@@QAEXW4GSLobbyRoomType@@_N@Z");
    todo("implement");
}

/* ---------- private code */

_static bool MakeNiceNick(char const *wanted, char *output, unsigned __int32 len) // 0x10003BD1
{
    mangled_assert("MakeNiceNick");
    todo("implement");
}

_static void NickErrorCallback(void *peer, __int32 type, char const *nick, void *param) // 0x10003C22
{
    mangled_assert("NickErrorCallback");
    todo("implement");
}

_static void ConnectCallback(void *peer, PEERBool success, void *param) // 0x100038E4
{
    mangled_assert("ConnectCallback");
    todo("implement");
}

_static void JoinRoomCallback(void *peer, PEERBool success, PEERJoinResult result, RoomType roomType, void *param) // 0x10003B29
{
    mangled_assert("JoinRoomCallback");
    todo("implement");
}

_static void RoomMessageCallback(void *peer, RoomType roomType, char const *nick, char const *message, MessageType messageType, void *param) // 0x10004916
{
    mangled_assert("RoomMessageCallback");
    todo("implement");
}

_static void PlayerMessageCallback(void *peer, char const *nick, char const *message, MessageType messageType, void *param) // 0x100044BD
{
    mangled_assert("PlayerMessageCallback");
    todo("implement");
}

_static void ListingGamesCallback(void *peer, PEERBool success, char const *name, _SBServer *server, PEERBool staging, __int32 msg, __int32 progress, void *param) // 0x10003B81
{
    mangled_assert("ListingGamesCallback");
    todo("implement");
}

_static void ListGroupRoomsCallback(void *peer, PEERBool success, __int32 groupID, _SBServer *server, char const *name, __int32 numWaiting, __int32 maxWaiting, __int32 numGames, __int32 numPlaying, void *param) // 0x10003B5A
{
    mangled_assert("ListGroupRoomsCallback");
    todo("implement");
}

_static void AuthenticateCDKeyCallback(void *peer, __int32 result, char const *message, void *param) // 0x10003770
{
    mangled_assert("AuthenticateCDKeyCallback");
    todo("implement");
}
#endif
