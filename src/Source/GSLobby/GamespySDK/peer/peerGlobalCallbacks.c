#if 0
/* ---------- headers */

#include "decomp.h"
#include <GSLobby\GamespySDK\peer\peerCallbacks.h>
#include <systemtopologyapi.h>
#include <heapapi.h>
#include <bemapiset.h>
#include <GSLobby\GamespySDK\peer\peerMangle.h>
#include <stdio.h>
#include <threadpoollegacyapiset.h>
#include <processtopologyapi.h>
#include <stdlib.h>
#include <limits.h>
#include <assert.h>
#include <debugapi.h>
#include <fibersapi.h>
#include <string.h>
#include <crtdefs.h>
#include <sal.h>
#include <concurrencysal.h>
#include <vadefs.h>
#include <kernelspecs.h>
#include <basetsd.h>
#include <mcx.h>
#include <pshpack1.h>
#include <winnls.h>
#include <datetimeapi.h>
#include <namedpipeapi.h>
#include <GSLobby\GamespySDK\peer\peerOperations.h>
#include <securityappcontainer.h>
#include <wincon.h>
#include <fileapi.h>
#include <jobapi.h>
#include <pshpack2.h>
#include <GSLobby\GamespySDK\peer\peerKeys.h>
#include <wtime.inl>
#include <ktmtypes.h>
#include <pshpack4.h>
#include <winver.h>
#include <winnetwk.h>
#include <verrsrc.h>
#include <realtimeapiset.h>
#include <processenv.h>
#include <wnnc.h>
#include <wow64apiset.h>
#include <utilapiset.h>
#include <winuser.h>
#include <GSLobby\GamespySDK\peer\peer.h>
#include <GSLobby\GamespySDK\serverbrowsing\sb_serverbrowsing.h>
#include <ime_cmodes.h>
#include <GSLobby\GamespySDK\nonport.h>
#include <winsock.h>
#include <sysinfoapi.h>
#include <windows.h>
#include <winapifamily.h>
#include <time.h>
#include <threadpoolapiset.h>
#include <sdkddkver.h>
#include <time.inl>
#include <excpt.h>
#include <stringapiset.h>
#include <GSLobby\GamespySDK\peer\peerRooms.h>
#include <libloaderapi.h>
#include <tvout.h>
#include <interlockedapi.h>
#include <winbase.h>
#include <handleapi.h>
#include <apisetcconv.h>
#include <imm.h>
#include <minwinbase.h>
#include <GSLobby\GamespySDK\serverbrowsing\sb_internal.h>
#include <GSLobby\GamespySDK\darray.h>
#include <synchapi.h>
#include <poppack.h>
#include <guiddef.h>
#include <GSLobby\GamespySDK\hashtable.h>
#include <stdarg.h>
#include <windef.h>
#include <minwindef.h>
#include <specstrings.h>
#include <GSLobby\GamespySDK\peer\peerMain.h>
#include <specstrings_strict.h>
#include <GSLobby\GamespySDK\peer\peerPing.h>
#include <GSLobby\GamespySDK\pinger\pinger.h>
#include <specstrings_undef.h>
#include <driverspecs.h>
#include <sdv_driverspecs.h>
#include <inaddr.h>
#include <stralign.h>
#include <namespaceapi.h>
#include <winsvc.h>
#include <errhandlingapi.h>
#include <winerror.h>
#include <securitybaseapi.h>
#include <winreg.h>
#include <reason.h>
#include <consoleapi.h>
#include <wingdi.h>
#include <pshpack8.h>
#include <swprintf.inl>
#include <timezoneapi.h>
#include <ioapiset.h>
#include <memoryapi.h>
#include <GSLobby\GamespySDK\qr2\qr2.h>
#include <GSLobby\GamespySDK\qr2\qr2regkeys.h>
#include <GSLobby\GamespySDK\peer\peerGlobalCallbacks.h>
#include <GSLobby\GamespySDK\chat\chat.h>
#include <winnt.h>
#include <ctype.h>
#include <apiset.h>
#include <GSLobby\GamespySDK\serverbrowsing\sb_crypt.h>
#include <processthreadsapi.h>
#include <profileapi.h>
#include <GSLobby\GamespySDK\peer\peerPlayers.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void piChatDisconnected(void *chat, char const *reason, void *peer);
extern void piChatPrivateMessage(void *chat, char const *user, char const *message, __int32 type, void *peer);
extern void piChannelMessage(void *chat, char const *channel, char const *user, char const *message, __int32 type, void *peer);
extern void piChannelKicked(void *chat, char const *channel, char const *user, char const *reason, void *peer);
extern void piChannelUserJoined(void *chat, char const *channel, char const *user, __int32 mode, void *peer);
extern void piChannelUserParted(void *chat, char const *channel, char const *user, __int32 why, char const *reason, char const *kicker, void *peer);
extern void piChannelUserChangedNick(void *chat, char const *channel, char const *oldNick, char const *newNick, void *peer);
extern void piChannelTopicChanged(void *chat, char const *channel, char const *topic, void *peer);
extern void piChannelNewUserList(void *chat, char const *channel, __int32 num, char const **users, __int32 *modes, void *peer);
extern void piBroadcastKeyChanged(void *chat, char const *channel, char const *user, char const *key, char const *value, void *peer);
extern void piUserModeChanged(void *chat, char const *channel, char const *user, __int32 mode, void *peer);
extern void piChannelModeChanged(void *chat, char const *channel, CHATChannelMode *mode, void *peer);
extern void piSetChannelCallbacks(void *peer, chatChannelCallbacks *channelCallbacks);
extern void piQRServerKeyCallback(__int32 key, qr2_buffer_s *buffer, void *peer);
extern void piQRPlayerKeyCallback(__int32 key, __int32 index, qr2_buffer_s *buffer, void *peer);
extern void piQRTeamKeyCallback(__int32 key, __int32 index, qr2_buffer_s *buffer, void *peer);
extern void piQRKeyListCallback(qr2_key_type type, qr2_keybuffer_s *keyBuffer, void *peer);
extern __int32 piQRCountCallback(qr2_key_type type, void *peer);
extern void piQRAddErrorCallback(qr2_error_t error, char *errorString, void *peer);
extern void piQRNatNegotiateCallback(__int32 cookie, void *peer);

_static PEERBool piIsOldUTM(char const *message);
_static PEERBool piParseUTM(char const *message);
_static void piProcessUTM(void *peer, piPlayer *player, PEERBool inRoom, RoomType roomType);
_static void piHandleOldNFO(void *peer, piPlayer *player, char const *message);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern char piUTMCommand[8]; // 0x1001FB60
    extern char piUTMParameters[512]; // 0x1001FB68
}

/* ---------- public code */

void piChatDisconnected(void *chat, char const *reason, void *peer) // 0x10011D09
{
    mangled_assert("_piChatDisconnected@12");
    todo("implement");
}

void piChatPrivateMessage(void *chat, char const *user, char const *message, __int32 type, void *peer) // 0x10011D24
{
    mangled_assert("_piChatPrivateMessage@20");
    todo("implement");
}

void piChannelMessage(void *chat, char const *channel, char const *user, char const *message, __int32 type, void *peer) // 0x100119B7
{
    mangled_assert("_piChannelMessage@24");
    todo("implement");
}

void piChannelKicked(void *chat, char const *channel, char const *user, char const *reason, void *peer) // 0x1001197E
{
    mangled_assert("_piChannelKicked@20");
    todo("implement");
}

void piChannelUserJoined(void *chat, char const *channel, char const *user, __int32 mode, void *peer) // 0x10011C10
{
    mangled_assert("_piChannelUserJoined@20");
    todo("implement");
}

void piChannelUserParted(void *chat, char const *channel, char const *user, __int32 why, char const *reason, char const *kicker, void *peer) // 0x10011CB2
{
    mangled_assert("_piChannelUserParted@28");
    todo("implement");
}

void piChannelUserChangedNick(void *chat, char const *channel, char const *oldNick, char const *newNick, void *peer) // 0x10011BD6
{
    mangled_assert("_piChannelUserChangedNick@20");
    todo("implement");
}

void piChannelTopicChanged(void *chat, char const *channel, char const *topic, void *peer) // 0x10011B55
{
    mangled_assert("_piChannelTopicChanged@16");
    todo("implement");
}

void piChannelNewUserList(void *chat, char const *channel, __int32 num, char const **users, __int32 *modes, void *peer) // 0x10011AEC
{
    mangled_assert("_piChannelNewUserList@24");
    todo("implement");
}

void piBroadcastKeyChanged(void *chat, char const *channel, char const *user, char const *key, char const *value, void *peer) // 0x1001193B
{
    mangled_assert("_piBroadcastKeyChanged@24");
    todo("implement");
}

void piUserModeChanged(void *chat, char const *channel, char const *user, __int32 mode, void *peer) // 0x1001235A
{
    mangled_assert("_piUserModeChanged@20");
    todo("implement");
}

void piChannelModeChanged(void *chat, char const *channel, CHATChannelMode *mode, void *peer) // 0x10011AC3
{
    mangled_assert("_piChannelModeChanged@16");
    todo("implement");
}

void piSetChannelCallbacks(void *peer, chatChannelCallbacks *channelCallbacks) // 0x100122F8
{
    mangled_assert("_piSetChannelCallbacks@8");
    todo("implement");
}

void piQRServerKeyCallback(__int32 key, qr2_buffer_s *buffer, void *peer) // 0x1001222E
{
    mangled_assert("_piQRServerKeyCallback@12");
    todo("implement");
}

void piQRPlayerKeyCallback(__int32 key, __int32 index, qr2_buffer_s *buffer, void *peer) // 0x100121A5
{
    mangled_assert("_piQRPlayerKeyCallback@16");
    todo("implement");
}

void piQRTeamKeyCallback(__int32 key, __int32 index, qr2_buffer_s *buffer, void *peer) // 0x100122D2
{
    mangled_assert("_piQRTeamKeyCallback@16");
    todo("implement");
}

void piQRKeyListCallback(qr2_key_type type, qr2_keybuffer_s *keyBuffer, void *peer) // 0x100120FD
{
    mangled_assert("_piQRKeyListCallback@12");
    todo("implement");
}

__int32 piQRCountCallback(qr2_key_type type, void *peer) // 0x100120B1
{
    mangled_assert("_piQRCountCallback@8");
    todo("implement");
}

void piQRAddErrorCallback(qr2_error_t error, char *errorString, void *peer) // 0x1001208F
{
    mangled_assert("_piQRAddErrorCallback@12");
    todo("implement");
}

void piQRNatNegotiateCallback(__int32 cookie, void *peer) // 0x10012187
{
    mangled_assert("_piQRNatNegotiateCallback@8");
    todo("implement");
}

/* ---------- private code */

_static PEERBool piIsOldUTM(char const *message) // 0x10011E42
{
    mangled_assert("piIsOldUTM");
    todo("implement");
}

_static PEERBool piParseUTM(char const *message) // 0x10011E79
{
    mangled_assert("piParseUTM");
    todo("implement");
}

_static void piProcessUTM(void *peer, piPlayer *player, PEERBool inRoom, RoomType roomType) // 0x10011EEA
{
    mangled_assert("piProcessUTM");
    todo("implement");
}

_static void piHandleOldNFO(void *peer, piPlayer *player, char const *message) // 0x10011DDA
{
    mangled_assert("piHandleOldNFO");
    todo("implement");
}
#endif
