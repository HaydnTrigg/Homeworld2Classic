#if 0
/* ---------- headers */

#include "decomp.h"
#include <winver.h>
#include <winnetwk.h>
#include <verrsrc.h>
#include <realtimeapiset.h>
#include <processenv.h>
#include <wnnc.h>
#include <wow64apiset.h>
#include <utilapiset.h>
#include <winuser.h>
#include <ime_cmodes.h>
#include <GSLobby\GamespySDK\serverbrowsing\sb_internal.h>
#include <winsock.h>
#include <sysinfoapi.h>
#include <windows.h>
#include <GSLobby\GamespySDK\darray.h>
#include <winapifamily.h>
#include <time.h>
#include <threadpoolapiset.h>
#include <sdkddkver.h>
#include <time.inl>
#include <excpt.h>
#include <stringapiset.h>
#include <stdlib.h>
#include <libloaderapi.h>
#include <limits.h>
#include <GSLobby\GamespySDK\hashtable.h>
#include <tvout.h>
#include <interlockedapi.h>
#include <winbase.h>
#include <GSLobby\GamespySDK\serverbrowsing\sb_serverbrowsing.h>
#include <handleapi.h>
#include <apisetcconv.h>
#include <GSLobby\GamespySDK\nonport.h>
#include <imm.h>
#include <minwinbase.h>
#include <string.h>
#include <crtdefs.h>
#include <sal.h>
#include <concurrencysal.h>
#include <synchapi.h>
#include <vadefs.h>
#include <poppack.h>
#include <guiddef.h>
#include <stdarg.h>
#include <windef.h>
#include <minwindef.h>
#include <specstrings.h>
#include <specstrings_strict.h>
#include <specstrings_undef.h>
#include <driverspecs.h>
#include <sdv_driverspecs.h>
#include <swprintf.inl>
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
#include <timezoneapi.h>
#include <ioapiset.h>
#include <stdio.h>
#include <memoryapi.h>
#include <winnt.h>
#include <ctype.h>
#include <apiset.h>
#include <processthreadsapi.h>
#include <profileapi.h>
#include <systemtopologyapi.h>
#include <heapapi.h>
#include <bemapiset.h>
#include <threadpoollegacyapiset.h>
#include <processtopologyapi.h>
#include <assert.h>
#include <debugapi.h>
#include <fibersapi.h>
#include <kernelspecs.h>
#include <basetsd.h>
#include <mcx.h>
#include <pshpack1.h>
#include <winnls.h>
#include <datetimeapi.h>
#include <namedpipeapi.h>
#include <securityappcontainer.h>
#include <GSLobby\GamespySDK\qr2\qr2regkeys.h>
#include <wincon.h>
#include <fileapi.h>
#include <jobapi.h>
#include <pshpack2.h>
#include <GSLobby\GamespySDK\serverbrowsing\sb_crypt.h>
#include <wtime.inl>
#include <ktmtypes.h>
#include <pshpack4.h>

/* ---------- constants */

/* ---------- definitions */

typedef _SBRefString SBRefString;
typedef _KeyInfo KeyInfo;
typedef _ServerBrowser *ServerBrowser;
typedef void (*ServerBrowserCallback)(_ServerBrowser *, SBCallbackReason, _SBServer *, void *);

/* ---------- prototypes */

extern __int32 NTSLengthSB(char *buf, __int32 len);
extern char const *SBRefStr(char const *str);
extern void SBReleaseStr(char const *str);
extern void SBServerListInit(_SBServerList *slist, char const *queryForGamename, char const *queryFromGamename, char const *queryFromKey, __int32 queryFromVersion, void (*callback)(_SBServerList *, SBListCallbackReason, _SBServer *, void *), void *instance);
extern SBError SBServerListConnectAndQuery(_SBServerList *slist, char const *fieldList, char const *serverFilter, __int32 options);
extern void SBServerListDisconnect(_SBServerList *slist);
extern void SBServerListCleanup(_SBServerList *slist);
extern void SBServerListClear(_SBServerList *slist);
extern void SBServerListAppendServer(_SBServerList *slist, _SBServer *server);
extern __int32 SBServerListFindServerByIP(_SBServerList *slist, unsigned __int32 ip, unsigned short port);
extern void SBServerListRemoveAt(_SBServerList *slist, __int32 index);
extern __int32 SBServerListCount(_SBServerList *slist);
extern SBError SBGetServerRulesFromMaster(_SBServerList *slist, unsigned __int32 ip, unsigned short port);
extern SBError ProcessLanData(_SBServerList *slist);
extern SBError SBListThink(_SBServerList *slist);

_static void AddServerToDeadlist(_SBServerList *slist, _SBServer *server);
_static void FreeDeadList(_SBServerList *slist);
_static void ErrorDisconnect(_SBServerList *slist);
_static SBError ServerListConnect(_SBServerList *slist);
_static void BufferAddNTS(char **buffer, char const *str, __int32 *len);
_static void BufferAddInt(char **buffer, __int32 ival, __int32 *len);
_static void SetupListChallenge(_SBServerList *slist);
_static SBError SendWithRetry(_SBServerList *slist, char *data, __int32 len);
_static void InitCryptKey(_SBServerList *slist, char *key, __int32 keylen);
_static __int32 FullRulesPresent(char *buf, __int32 len);
_static __int32 AllKeysPresent(_SBServerList *slist, char *buf, __int32 len);
_static __int32 ParseServer(_SBServerList *slist, _SBServer *server, char *buf, __int32 len, __int32 usepopularlist);
_static __int32 IncomingListParseServer(_SBServerList *slist, char *buf, __int32 len);
_static void KeyInfoFree(void *elem);
_static SBError ProcessMainListData(_SBServerList *slist);
_static SBError ProcessPushKeyList(_SBServerList *slist, char *buf, __int32 len);
_static SBError ProcessPushServer(_SBServerList *slist, char *buf, __int32 len);
_static SBError ProcessAdHocData(_SBServerList *slist);
_static SBError ProcessIncomingData(_SBServerList *slist);

/* ---------- globals */

extern char *SBOverrideMasterServer; // 0x1001FB58

/* ---------- private variables */

_static
{
    extern _SBServerList *g_sortserverlist; // 0x1001FB5C
}

/* ---------- public code */

__int32 NTSLengthSB(char *buf, __int32 len) // 0x1000F43E
{
    mangled_assert("_NTSLengthSB@8");
    todo("implement");
}

char const *SBRefStr(char const *str) // 0x1000FE3D
{
    mangled_assert("_SBRefStr@4");
    todo("implement");
}

void SBReleaseStr(char const *str) // 0x1000FE8A
{
    mangled_assert("_SBReleaseStr@4");
    todo("implement");
}

void SBServerListInit(_SBServerList *slist, char const *queryForGamename, char const *queryFromGamename, char const *queryFromKey, __int32 queryFromVersion, void (*callback)(_SBServerList *, SBListCallbackReason, _SBServer *, void *), void *instance) // 0x10010205
{
    mangled_assert("_SBServerListInit@28");
    todo("implement");
}

SBError SBServerListConnectAndQuery(_SBServerList *slist, char const *fieldList, char const *serverFilter, __int32 options) // 0x1000FF56
{
    mangled_assert("_SBServerListConnectAndQuery@16");
    todo("implement");
}

void SBServerListDisconnect(_SBServerList *slist) // 0x10010134
{
    mangled_assert("_SBServerListDisconnect@4");
    todo("implement");
}

void SBServerListCleanup(_SBServerList *slist) // 0x1000FEE9
{
    mangled_assert("_SBServerListCleanup@4");
    todo("implement");
}

void SBServerListClear(_SBServerList *slist) // 0x1000FF15
{
    mangled_assert("_SBServerListClear@4");
    todo("implement");
}

void SBServerListAppendServer(_SBServerList *slist, _SBServer *server) // 0x1000FEC0
{
    mangled_assert("_SBServerListAppendServer@8");
    todo("implement");
}

__int32 SBServerListFindServerByIP(_SBServerList *slist, unsigned __int32 ip, unsigned short port) // 0x100101B6
{
    mangled_assert("_SBServerListFindServerByIP@12");
    todo("implement");
}

void SBServerListRemoveAt(_SBServerList *slist, __int32 index) // 0x100102C1
{
    mangled_assert("_SBServerListRemoveAt@8");
    todo("implement");
}

__int32 SBServerListCount(_SBServerList *slist) // 0x10010125
{
    mangled_assert("_SBServerListCount@4");
    todo("implement");
}

SBError SBGetServerRulesFromMaster(_SBServerList *slist, unsigned __int32 ip, unsigned short port) // 0x1000FD97
{
    mangled_assert("_SBGetServerRulesFromMaster@12");
    todo("implement");
}

SBError ProcessLanData(_SBServerList *slist) // 0x1000F864
{
    mangled_assert("_ProcessLanData@4");
    todo("implement");
}

SBError SBListThink(_SBServerList *slist) // 0x1000FE0E
{
    mangled_assert("_SBListThink@4");
    todo("implement");
}

/* ---------- private code */

_static void AddServerToDeadlist(_SBServerList *slist, _SBServer *server) // 0x1000F14D
{
    mangled_assert("AddServerToDeadlist");
    todo("implement");
}

_static void FreeDeadList(_SBServerList *slist) // 0x1000F270
{
    mangled_assert("FreeDeadList");
    todo("implement");
}

_static void ErrorDisconnect(_SBServerList *slist) // 0x1000F250
{
    mangled_assert("ErrorDisconnect");
    todo("implement");
}

_static SBError ServerListConnect(_SBServerList *slist) // 0x10010354
{
    mangled_assert("ServerListConnect");
    todo("implement");
}

_static void BufferAddNTS(char **buffer, char const *str, __int32 *len) // 0x1000F219
{
    mangled_assert("BufferAddNTS");
    todo("implement");
}

_static void BufferAddInt(char **buffer, __int32 ival, __int32 *len) // 0x1000F1F5
{
    mangled_assert("BufferAddInt");
    todo("implement");
}

_static void SetupListChallenge(_SBServerList *slist) // 0x10010471
{
    mangled_assert("SetupListChallenge");
    todo("implement");
}

_static SBError SendWithRetry(_SBServerList *slist, char *data, __int32 len) // 0x100102FD
{
    mangled_assert("SendWithRetry");
    todo("implement");
}

_static void InitCryptKey(_SBServerList *slist, char *key, __int32 keylen) // 0x1000F3B6
{
    mangled_assert("InitCryptKey");
    todo("implement");
}

_static __int32 FullRulesPresent(char *buf, __int32 len) // 0x1000F2A9
{
    mangled_assert("FullRulesPresent");
    todo("implement");
}

_static __int32 AllKeysPresent(_SBServerList *slist, char *buf, __int32 len) // 0x1000F176
{
    mangled_assert("AllKeysPresent");
    todo("implement");
}

_static __int32 ParseServer(_SBServerList *slist, _SBServer *server, char *buf, __int32 len, __int32 usepopularlist) // 0x1000F460
{
    mangled_assert("ParseServer");
    todo("implement");
}

_static __int32 IncomingListParseServer(_SBServerList *slist, char *buf, __int32 len) // 0x1000F2F0
{
    mangled_assert("IncomingListParseServer");
    todo("implement");
}

_static void KeyInfoFree(void *elem) // 0x1000F430
{
    mangled_assert("KeyInfoFree");
    todo("implement");
}

_static SBError ProcessMainListData(_SBServerList *slist) // 0x1000F91E
{
    mangled_assert("ProcessMainListData");
    todo("implement");
}

_static SBError ProcessPushKeyList(_SBServerList *slist, char *buf, __int32 len) // 0x1000FC26
{
    mangled_assert("ProcessPushKeyList");
    todo("implement");
}

_static SBError ProcessPushServer(_SBServerList *slist, char *buf, __int32 len) // 0x1000FCD3
{
    mangled_assert("ProcessPushServer");
    todo("implement");
}

_static SBError ProcessAdHocData(_SBServerList *slist) // 0x1000F6A2
{
    mangled_assert("ProcessAdHocData");
    todo("implement");
}

_static SBError ProcessIncomingData(_SBServerList *slist) // 0x1000F7C7
{
    mangled_assert("ProcessIncomingData");
    todo("implement");
}
#endif
