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

_extern __int32 _sub_1000F43E(char *, __int32);
__int32 NTSLengthSB(char *buf, __int32 len) // 0x1000F43E
{
    mangled_assert("_NTSLengthSB@8");
    todo("implement");
    __int32 __result = _sub_1000F43E(buf, len);
    return __result;
}

_extern char const *_sub_1000FE3D(char const *);
char const *SBRefStr(char const *str) // 0x1000FE3D
{
    mangled_assert("_SBRefStr@4");
    todo("implement");
    char const * __result = _sub_1000FE3D(str);
    return __result;
}

_extern void _sub_1000FE8A(char const *);
void SBReleaseStr(char const *str) // 0x1000FE8A
{
    mangled_assert("_SBReleaseStr@4");
    todo("implement");
    _sub_1000FE8A(str);
}

_extern void _sub_10010205(_SBServerList *, char const *, char const *, char const *, __int32, void (*)(_SBServerList *, SBListCallbackReason, _SBServer *, void *), void *);
void SBServerListInit(_SBServerList *slist, char const *queryForGamename, char const *queryFromGamename, char const *queryFromKey, __int32 queryFromVersion, void (*callback)(_SBServerList *, SBListCallbackReason, _SBServer *, void *), void *instance) // 0x10010205
{
    mangled_assert("_SBServerListInit@28");
    todo("implement");
    _sub_10010205(slist, queryForGamename, queryFromGamename, queryFromKey, queryFromVersion, callback, instance);
}

_extern SBError _sub_1000FF56(_SBServerList *, char const *, char const *, __int32);
SBError SBServerListConnectAndQuery(_SBServerList *slist, char const *fieldList, char const *serverFilter, __int32 options) // 0x1000FF56
{
    mangled_assert("_SBServerListConnectAndQuery@16");
    todo("implement");
    SBError __result = _sub_1000FF56(slist, fieldList, serverFilter, options);
    return __result;
}

_extern void _sub_10010134(_SBServerList *);
void SBServerListDisconnect(_SBServerList *slist) // 0x10010134
{
    mangled_assert("_SBServerListDisconnect@4");
    todo("implement");
    _sub_10010134(slist);
}

_extern void _sub_1000FEE9(_SBServerList *);
void SBServerListCleanup(_SBServerList *slist) // 0x1000FEE9
{
    mangled_assert("_SBServerListCleanup@4");
    todo("implement");
    _sub_1000FEE9(slist);
}

_extern void _sub_1000FF15(_SBServerList *);
void SBServerListClear(_SBServerList *slist) // 0x1000FF15
{
    mangled_assert("_SBServerListClear@4");
    todo("implement");
    _sub_1000FF15(slist);
}

_extern void _sub_1000FEC0(_SBServerList *, _SBServer *);
void SBServerListAppendServer(_SBServerList *slist, _SBServer *server) // 0x1000FEC0
{
    mangled_assert("_SBServerListAppendServer@8");
    todo("implement");
    _sub_1000FEC0(slist, server);
}

_extern __int32 _sub_100101B6(_SBServerList *, unsigned __int32, unsigned short);
__int32 SBServerListFindServerByIP(_SBServerList *slist, unsigned __int32 ip, unsigned short port) // 0x100101B6
{
    mangled_assert("_SBServerListFindServerByIP@12");
    todo("implement");
    __int32 __result = _sub_100101B6(slist, ip, port);
    return __result;
}

_extern void _sub_100102C1(_SBServerList *, __int32);
void SBServerListRemoveAt(_SBServerList *slist, __int32 index) // 0x100102C1
{
    mangled_assert("_SBServerListRemoveAt@8");
    todo("implement");
    _sub_100102C1(slist, index);
}

_extern __int32 _sub_10010125(_SBServerList *);
__int32 SBServerListCount(_SBServerList *slist) // 0x10010125
{
    mangled_assert("_SBServerListCount@4");
    todo("implement");
    __int32 __result = _sub_10010125(slist);
    return __result;
}

_extern SBError _sub_1000FD97(_SBServerList *, unsigned __int32, unsigned short);
SBError SBGetServerRulesFromMaster(_SBServerList *slist, unsigned __int32 ip, unsigned short port) // 0x1000FD97
{
    mangled_assert("_SBGetServerRulesFromMaster@12");
    todo("implement");
    SBError __result = _sub_1000FD97(slist, ip, port);
    return __result;
}

_extern SBError _sub_1000F864(_SBServerList *);
SBError ProcessLanData(_SBServerList *slist) // 0x1000F864
{
    mangled_assert("_ProcessLanData@4");
    todo("implement");
    SBError __result = _sub_1000F864(slist);
    return __result;
}

_extern SBError _sub_1000FE0E(_SBServerList *);
SBError SBListThink(_SBServerList *slist) // 0x1000FE0E
{
    mangled_assert("_SBListThink@4");
    todo("implement");
    SBError __result = _sub_1000FE0E(slist);
    return __result;
}

/* ---------- private code */

_extern void _sub_1000F14D(_SBServerList *, _SBServer *);
_static void AddServerToDeadlist(_SBServerList *slist, _SBServer *server) // 0x1000F14D
{
    mangled_assert("AddServerToDeadlist");
    todo("implement");
    _sub_1000F14D(slist, server);
}

_extern void _sub_1000F270(_SBServerList *);
_static void FreeDeadList(_SBServerList *slist) // 0x1000F270
{
    mangled_assert("FreeDeadList");
    todo("implement");
    _sub_1000F270(slist);
}

_extern void _sub_1000F250(_SBServerList *);
_static void ErrorDisconnect(_SBServerList *slist) // 0x1000F250
{
    mangled_assert("ErrorDisconnect");
    todo("implement");
    _sub_1000F250(slist);
}

_extern SBError _sub_10010354(_SBServerList *);
_static SBError ServerListConnect(_SBServerList *slist) // 0x10010354
{
    mangled_assert("ServerListConnect");
    todo("implement");
    SBError __result = _sub_10010354(slist);
    return __result;
}

_extern void _sub_1000F219(char **, char const *, __int32 *);
_static void BufferAddNTS(char **buffer, char const *str, __int32 *len) // 0x1000F219
{
    mangled_assert("BufferAddNTS");
    todo("implement");
    _sub_1000F219(buffer, str, len);
}

_extern void _sub_1000F1F5(char **, __int32, __int32 *);
_static void BufferAddInt(char **buffer, __int32 ival, __int32 *len) // 0x1000F1F5
{
    mangled_assert("BufferAddInt");
    todo("implement");
    _sub_1000F1F5(buffer, ival, len);
}

_extern void _sub_10010471(_SBServerList *);
_static void SetupListChallenge(_SBServerList *slist) // 0x10010471
{
    mangled_assert("SetupListChallenge");
    todo("implement");
    _sub_10010471(slist);
}

_extern SBError _sub_100102FD(_SBServerList *, char *, __int32);
_static SBError SendWithRetry(_SBServerList *slist, char *data, __int32 len) // 0x100102FD
{
    mangled_assert("SendWithRetry");
    todo("implement");
    SBError __result = _sub_100102FD(slist, data, len);
    return __result;
}

_extern void _sub_1000F3B6(_SBServerList *, char *, __int32);
_static void InitCryptKey(_SBServerList *slist, char *key, __int32 keylen) // 0x1000F3B6
{
    mangled_assert("InitCryptKey");
    todo("implement");
    _sub_1000F3B6(slist, key, keylen);
}

_extern __int32 _sub_1000F2A9(char *, __int32);
_static __int32 FullRulesPresent(char *buf, __int32 len) // 0x1000F2A9
{
    mangled_assert("FullRulesPresent");
    todo("implement");
    __int32 __result = _sub_1000F2A9(buf, len);
    return __result;
}

_extern __int32 _sub_1000F176(_SBServerList *, char *, __int32);
_static __int32 AllKeysPresent(_SBServerList *slist, char *buf, __int32 len) // 0x1000F176
{
    mangled_assert("AllKeysPresent");
    todo("implement");
    __int32 __result = _sub_1000F176(slist, buf, len);
    return __result;
}

_extern __int32 _sub_1000F460(_SBServerList *, _SBServer *, char *, __int32, __int32);
_static __int32 ParseServer(_SBServerList *slist, _SBServer *server, char *buf, __int32 len, __int32 usepopularlist) // 0x1000F460
{
    mangled_assert("ParseServer");
    todo("implement");
    __int32 __result = _sub_1000F460(slist, server, buf, len, usepopularlist);
    return __result;
}

_extern __int32 _sub_1000F2F0(_SBServerList *, char *, __int32);
_static __int32 IncomingListParseServer(_SBServerList *slist, char *buf, __int32 len) // 0x1000F2F0
{
    mangled_assert("IncomingListParseServer");
    todo("implement");
    __int32 __result = _sub_1000F2F0(slist, buf, len);
    return __result;
}

_extern void _sub_1000F430(void *);
_static void KeyInfoFree(void *elem) // 0x1000F430
{
    mangled_assert("KeyInfoFree");
    todo("implement");
    _sub_1000F430(elem);
}

_extern SBError _sub_1000F91E(_SBServerList *);
_static SBError ProcessMainListData(_SBServerList *slist) // 0x1000F91E
{
    mangled_assert("ProcessMainListData");
    todo("implement");
    SBError __result = _sub_1000F91E(slist);
    return __result;
}

_extern SBError _sub_1000FC26(_SBServerList *, char *, __int32);
_static SBError ProcessPushKeyList(_SBServerList *slist, char *buf, __int32 len) // 0x1000FC26
{
    mangled_assert("ProcessPushKeyList");
    todo("implement");
    SBError __result = _sub_1000FC26(slist, buf, len);
    return __result;
}

_extern SBError _sub_1000FCD3(_SBServerList *, char *, __int32);
_static SBError ProcessPushServer(_SBServerList *slist, char *buf, __int32 len) // 0x1000FCD3
{
    mangled_assert("ProcessPushServer");
    todo("implement");
    SBError __result = _sub_1000FCD3(slist, buf, len);
    return __result;
}

_extern SBError _sub_1000F6A2(_SBServerList *);
_static SBError ProcessAdHocData(_SBServerList *slist) // 0x1000F6A2
{
    mangled_assert("ProcessAdHocData");
    todo("implement");
    SBError __result = _sub_1000F6A2(slist);
    return __result;
}

_extern SBError _sub_1000F7C7(_SBServerList *);
_static SBError ProcessIncomingData(_SBServerList *slist) // 0x1000F7C7
{
    mangled_assert("ProcessIncomingData");
    todo("implement");
    SBError __result = _sub_1000F7C7(slist);
    return __result;
}
#endif
