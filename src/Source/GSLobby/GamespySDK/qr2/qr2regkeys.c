#if 0
/* ---------- headers */

#include "decomp.h"
#include <GSLobby\GamespySDK\qr2\qr2regkeys.h>

/* ---------- constants */

/* ---------- definitions */

typedef void (*qr2_serverkeycallback_t)(__int32, qr2_buffer_s *, void *);
typedef void (*peerGlobalKeyChangedCallback)(void *, char const *, char const *, char const *, void *);
typedef void (*peerReadyChangedCallback)(void *, char const *, PEERBool, void *);
typedef void (*peerPlayerJoinedCallback)(void *, RoomType, char const *, void *);
typedef void (*peerGameStartedCallback)(void *, unsigned __int32, char const *, void *);
typedef void (*qr2_playerteamkeycallback_t)(__int32, __int32, qr2_buffer_s *, void *);
typedef void (*peerKickedCallback)(void *, RoomType, char const *, char const *, void *);
typedef void (*peerPlayerUTMCallback)(void *, char const *, char const *, char const *, PEERBool, void *);
typedef void (*qr2_natnegcallback_t)(__int32, void *);
typedef qr2_buffer_s *qr2_buffer_t;
typedef void (*cdkey_process_t)(char *, __int32, sockaddr *);
typedef void (*peerPlayerChangedNickCallback)(void *, RoomType, char const *, char const *, void *);
typedef void (*peerPlayerFlagsChangedCallback)(void *, RoomType, char const *, __int32, __int32, void *);
typedef unsigned __int32 goa_uint32;
typedef qr2_keybuffer_s *qr2_keybuffer_t;
typedef void (*peerQRAddErrorCallback)(void *, qr2_error_t, char *, void *);
typedef void (*peerNewPlayerListCallback)(void *, RoomType, void *);
typedef void (*peerNickErrorCallback)(void *, __int32, char const *, void *);
typedef void (*peerQRTeamKeyCallback)(void *, __int32, __int32, qr2_buffer_s *, void *);
typedef void (*qr2_keylistcallback_t)(qr2_key_type, qr2_keybuffer_s *, void *);
typedef __int32 (*peerQRCountCallback)(void *, qr2_key_type, void *);
typedef void *PEER;
typedef void (*peerPingCallback)(void *, char const *, __int32, void *);
typedef _SBQueryEngine SBQueryEngine;
typedef void (*peerListGroupRoomsCallback)(void *, PEERBool, __int32, _SBServer *, char const *, __int32, __int32, __int32, __int32, void *);
typedef void (*peerPlayerInfoCallback)(void *, RoomType, char const *, unsigned __int32, __int32, void *);
typedef void (*peerRoomKeyChangedCallback)(void *, RoomType, char const *, char const *, char const *, void *);
typedef void (*peerRoomUTMCallback)(void *, RoomType, char const *, char const *, char const *, PEERBool, void *);
typedef void *CHAT;
typedef qr2_implementation_s *qr2_t;
typedef void (*peerQRNatNegotiateCallback)(void *, __int32, void *);
typedef void (*peerRoomMessageCallback)(void *, RoomType, char const *, char const *, MessageType, void *);
typedef void (*peerDisconnectedCallback)(void *, char const *, void *);
typedef void (*peerPlayerLeftCallback)(void *, RoomType, char const *, char const *, void *);
typedef void (*peerQRServerKeyCallback)(void *, __int32, qr2_buffer_s *, void *);
typedef void (*peerListingGamesCallback)(void *, PEERBool, char const *, _SBServer *, PEERBool, __int32, __int32, void *);
typedef _SBServerList SBServerList;
typedef void (*qr2_clientmessagecallback_t)(char *, __int32, void *);
typedef void (*peerPlayerMessageCallback)(void *, char const *, char const *, MessageType, void *);
typedef _GOACryptState GOACryptState;
typedef HashImplementation *HashTable;
typedef void (*peerQRPlayerKeyCallback)(void *, __int32, __int32, qr2_buffer_s *, void *);
typedef void (*peerRoomModeChangedCallback)(void *, RoomType, CHATChannelMode *, void *);
typedef void (*peerRoomNameChangedCallback)(void *, RoomType, void *);
typedef void (*peerQRKeyListCallback)(void *, qr2_key_type, qr2_keybuffer_s *, void *);
typedef _SBServerList *SBServerListPtr;
typedef void (*qr2_adderrorcallback_t)(qr2_error_t, char *, void *);
typedef _SBServerFIFO SBServerFIFO;
typedef _SBServer *SBServer;
typedef __int32 (*qr2_countcallback_t)(qr2_key_type, void *);
typedef void (*peerCrossPingCallback)(void *, char const *, char const *, __int32, void *);
typedef void (*SBEngineCallbackFn)(_SBQueryEngine *, SBQueryEngineCallbackReason, _SBServer *, void *);
typedef void (*SBListCallBackFn)(_SBServerList *, SBListCallbackReason, _SBServer *, void *);
typedef _SBQueryEngine *SBQueryEnginePtr;

/* ---------- prototypes */

extern void qr2_register_key(__int32 keyid, char const *key);

/* ---------- globals */

extern char const *qr2_registered_key_list[0]; // 0x1001E190

/* ---------- private variables */

/* ---------- public code */

void qr2_register_key(__int32 keyid, char const *key) // 0x10007CEF
{
    mangled_assert("_qr2_register_key@8");
    todo("implement");
}

/* ---------- private code */
#endif
