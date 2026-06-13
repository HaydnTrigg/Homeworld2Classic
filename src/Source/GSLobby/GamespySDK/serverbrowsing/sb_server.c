#if 0
/* ---------- headers */

#include "decomp.h"
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
#include <GSLobby\GamespySDK\serverbrowsing\sb_internal.h>
#include <driverspecs.h>
#include <GSLobby\GamespySDK\darray.h>
#include <sdv_driverspecs.h>
#include <inaddr.h>
#include <stralign.h>
#include <GSLobby\GamespySDK\hashtable.h>
#include <namespaceapi.h>
#include <winsvc.h>
#include <errhandlingapi.h>
#include <winerror.h>
#include <securitybaseapi.h>
#include <winreg.h>
#include <swprintf.inl>
#include <reason.h>
#include <consoleapi.h>
#include <wingdi.h>
#include <pshpack8.h>
#include <timezoneapi.h>
#include <ioapiset.h>
#include <memoryapi.h>
#include <winnt.h>
#include <ctype.h>
#include <apiset.h>
#include <processthreadsapi.h>
#include <profileapi.h>
#include <systemtopologyapi.h>
#include <stdio.h>
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
#include <wincon.h>
#include <fileapi.h>
#include <jobapi.h>
#include <pshpack2.h>
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
#include <ime_cmodes.h>
#include <GSLobby\GamespySDK\qr2\qr2regkeys.h>
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
#include <stdlib.h>
#include <GSLobby\GamespySDK\serverbrowsing\sb_crypt.h>
#include <libloaderapi.h>
#include <limits.h>

/* ---------- constants */

/* ---------- definitions */

struct SBServerEnumData
{
    void (*EnumFn)(char *, char *, void *); // 0x0
    void *instance; // 0x4
};
static_assert(sizeof(SBServerEnumData) == 8, "Invalid SBServerEnumData size");

typedef void (*SBServerKeyEnumFn)(char *, char *, void *);
typedef _SBKeyValuePair SBKeyValuePair;

/* ---------- prototypes */

extern HashImplementation *SBRefStrHash(...);
extern void SBRefStrHashCleanup(...);
extern void SBServerFree(void *elem);
extern void SBServerAddKeyValue(_SBServer *server, char const *keyname, char const *value);
extern void SBServerAddIntKeyValue(_SBServer *server, char const *keyname, __int32 value);
extern char const *SBServerGetStringValue(_SBServer *server, char *keyname, char *def);
extern __int32 SBServerGetIntValue(_SBServer *server, char *key, __int32 idefault);
extern SBBool SBServerHasBasicKeys(_SBServer *server);
extern SBBool SBServerHasFullKeys(_SBServer *server);
extern char *SBServerGetPublicAddress(_SBServer *server);
extern unsigned __int32 SBServerGetPublicInetAddress(_SBServer *server);
extern unsigned short SBServerGetPublicQueryPortNBO(_SBServer *server);
extern char *SBServerGetPrivateAddress(_SBServer *server);
extern unsigned __int32 SBServerGetPrivateInetAddress(_SBServer *server);
extern void SBServerSetNext(_SBServer *server, _SBServer *next);
extern _SBServer *SBServerGetNext(_SBServer *server);
extern void SBServerParseKeyVals(_SBServer *server, char *keyvals);
extern void SBServerParseQR2FullKeys(_SBServer *server, char *data, __int32 len);
extern __int32 SBServerGetPing(_SBServer *server);
extern _SBServer *SBAllocServer(...);
extern void SBServerSetFlags(_SBServer *server, unsigned char flags);
extern void SBServerSetPublicAddr(_SBServer *server, unsigned __int32 ip, unsigned short port);
extern void SBServerSetPrivateAddr(_SBServer *server, unsigned __int32 ip, unsigned short port);
extern void SBServerSetICMPIP(_SBServer *server, unsigned __int32 icmpip);
extern void SBServerSetState(_SBServer *server, unsigned char state);
extern unsigned char SBServerGetState(_SBServer *server);

_static __int32 KeyValCompareKey(void const *entry1, void const *entry2);
_static void RefStringFree(void *elem);
_static char *mytok(char *instr, char delim);
_static __int32 StringHash(char const *s, __int32 numbuckets);
_static void KeyValFree(void *elem);
_static __int32 KeyValHashKey(void const *elem, __int32 numbuckets);

/* ---------- globals */

extern HashImplementation *g_SBRefStrList; // 0x1001FB50

/* ---------- private variables */

/* ---------- public code */

_extern HashImplementation *_sub_1000ECD7(...);
HashImplementation *SBRefStrHash(...) // 0x1000ECD7
{
    mangled_assert("_SBRefStrHash@0");
    todo("implement");
    HashImplementation * __result = _sub_1000ECD7(arg);
    return __result;
}

_extern void _sub_1000ED03(...);
void SBRefStrHashCleanup(...) // 0x1000ED03
{
    mangled_assert("_SBRefStrHashCleanup@0");
    todo("implement");
    _sub_1000ED03(arg);
}

_extern void _sub_1000ED85(void *);
void SBServerFree(void *elem) // 0x1000ED85
{
    mangled_assert("_SBServerFree@4");
    todo("implement");
    _sub_1000ED85(elem);
}

_extern void _sub_1000ED57(_SBServer *, char const *, char const *);
void SBServerAddKeyValue(_SBServer *server, char const *keyname, char const *value) // 0x1000ED57
{
    mangled_assert("_SBServerAddKeyValue@12");
    todo("implement");
    _sub_1000ED57(server, keyname, value);
}

_extern void _sub_1000ED29(_SBServer *, char const *, __int32);
void SBServerAddIntKeyValue(_SBServer *server, char const *keyname, __int32 value) // 0x1000ED29
{
    mangled_assert("_SBServerAddIntKeyValue@12");
    todo("implement");
    _sub_1000ED29(server, keyname, value);
}

_extern char const *_sub_1000EE3D(_SBServer *, char *, char *);
char const *SBServerGetStringValue(_SBServer *server, char *keyname, char *def) // 0x1000EE3D
{
    mangled_assert("_SBServerGetStringValue@12");
    todo("implement");
    char const * __result = _sub_1000EE3D(server, keyname, def);
    return __result;
}

_extern __int32 _sub_1000EDA4(_SBServer *, char *, __int32);
__int32 SBServerGetIntValue(_SBServer *server, char *key, __int32 idefault) // 0x1000EDA4
{
    mangled_assert("_SBServerGetIntValue@12");
    todo("implement");
    __int32 __result = _sub_1000EDA4(server, key, idefault);
    return __result;
}

_extern SBBool _sub_1000EE67(_SBServer *);
SBBool SBServerHasBasicKeys(_SBServer *server) // 0x1000EE67
{
    mangled_assert("_SBServerHasBasicKeys@4");
    todo("implement");
    SBBool __result = _sub_1000EE67(server);
    return __result;
}

_extern SBBool _sub_1000EE75(_SBServer *);
SBBool SBServerHasFullKeys(_SBServer *server) // 0x1000EE75
{
    mangled_assert("_SBServerHasFullKeys@4");
    todo("implement");
    SBBool __result = _sub_1000EE75(server);
    return __result;
}

_extern char *_sub_1000EE11(_SBServer *);
char *SBServerGetPublicAddress(_SBServer *server) // 0x1000EE11
{
    mangled_assert("_SBServerGetPublicAddress@4");
    todo("implement");
    char * __result = _sub_1000EE11(server);
    return __result;
}

_extern unsigned __int32 _sub_1000EE1F(_SBServer *);
unsigned __int32 SBServerGetPublicInetAddress(_SBServer *server) // 0x1000EE1F
{
    mangled_assert("_ArrayLength@4");
    todo("implement");
    unsigned __int32 __result = _sub_1000EE1F(server);
    return __result;
}

_extern unsigned short _sub_1000EE28(_SBServer *);
unsigned short SBServerGetPublicQueryPortNBO(_SBServer *server) // 0x1000EE28
{
    mangled_assert("_SBServerGetPublicQueryPortNBO@4");
    todo("implement");
    unsigned short __result = _sub_1000EE28(server);
    return __result;
}

_extern char *_sub_1000EDF8(_SBServer *);
char *SBServerGetPrivateAddress(_SBServer *server) // 0x1000EDF8
{
    mangled_assert("_SBServerGetPrivateAddress@4");
    todo("implement");
    char * __result = _sub_1000EDF8(server);
    return __result;
}

_extern unsigned __int32 _sub_1000EE07(_SBServer *);
unsigned __int32 SBServerGetPrivateInetAddress(_SBServer *server) // 0x1000EE07
{
    mangled_assert("_SBServerGetPrivateInetAddress@4");
    todo("implement");
    unsigned __int32 __result = _sub_1000EE07(server);
    return __result;
}

_extern void _sub_1000F086(_SBServer *, _SBServer *);
void SBServerSetNext(_SBServer *server, _SBServer *next) // 0x1000F086
{
    mangled_assert("_SBServerSetNext@8");
    todo("implement");
    _sub_1000F086(server, next);
}

_extern _SBServer *_sub_1000EDE4(_SBServer *);
_SBServer *SBServerGetNext(_SBServer *server) // 0x1000EDE4
{
    mangled_assert("_SBServerGetNext@4");
    todo("implement");
    _SBServer * __result = _sub_1000EDE4(server);
    return __result;
}

_extern void _sub_1000EE83(_SBServer *, char *);
void SBServerParseKeyVals(_SBServer *server, char *keyvals) // 0x1000EE83
{
    mangled_assert("_SBServerParseKeyVals@8");
    todo("implement");
    _sub_1000EE83(server, keyvals);
}

_extern void _sub_1000EEF6(_SBServer *, char *, __int32);
void SBServerParseQR2FullKeys(_SBServer *server, char *data, __int32 len) // 0x1000EEF6
{
    mangled_assert("_SBServerParseQR2FullKeys@12");
    todo("implement");
    _sub_1000EEF6(server, data, len);
}

_extern __int32 _sub_1000EDEE(_SBServer *);
__int32 SBServerGetPing(_SBServer *server) // 0x1000EDEE
{
    mangled_assert("_SBServerGetPing@4");
    todo("implement");
    __int32 __result = _sub_1000EDEE(server);
    return __result;
}

_extern _SBServer *_sub_1000EC76(...);
_SBServer *SBAllocServer(...) // 0x1000EC76
{
    mangled_assert("_SBAllocServer@0");
    todo("implement");
    _SBServer * __result = _sub_1000EC76(arg);
    return __result;
}

_extern void _sub_1000F06A(_SBServer *, unsigned char);
void SBServerSetFlags(_SBServer *server, unsigned char flags) // 0x1000F06A
{
    mangled_assert("_SBServerSetFlags@8");
    todo("implement");
    _sub_1000F06A(server, flags);
}

_extern void _sub_1000F0AB(_SBServer *, unsigned __int32, unsigned short);
void SBServerSetPublicAddr(_SBServer *server, unsigned __int32 ip, unsigned short port) // 0x1000F0AB
{
    mangled_assert("_SBServerSetPublicAddr@12");
    todo("implement");
    _sub_1000F0AB(server, ip, port);
}

_extern void _sub_1000F094(_SBServer *, unsigned __int32, unsigned short);
void SBServerSetPrivateAddr(_SBServer *server, unsigned __int32 ip, unsigned short port) // 0x1000F094
{
    mangled_assert("_SBServerSetPrivateAddr@12");
    todo("implement");
    _sub_1000F094(server, ip, port);
}

_extern void _sub_1000F078(_SBServer *, unsigned __int32);
void SBServerSetICMPIP(_SBServer *server, unsigned __int32 icmpip) // 0x1000F078
{
    mangled_assert("_SBServerSetICMPIP@8");
    todo("implement");
    _sub_1000F078(server, icmpip);
}

_extern void _sub_1000F0C1(_SBServer *, unsigned char);
void SBServerSetState(_SBServer *server, unsigned char state) // 0x1000F0C1
{
    mangled_assert("_SBServerSetState@8");
    todo("implement");
    _sub_1000F0C1(server, state);
}

_extern unsigned char _sub_1000EE33(_SBServer *);
unsigned char SBServerGetState(_SBServer *server) // 0x1000EE33
{
    mangled_assert("_SBServerGetState@4");
    todo("implement");
    unsigned char __result = _sub_1000EE33(server);
    return __result;
}

/* ---------- private code */

_extern __int32 _sub_1000EC37(void const *, void const *);
_static __int32 KeyValCompareKey(void const *entry1, void const *entry2) // 0x1000EC37
{
    mangled_assert("KeyValCompareKey");
    todo("implement");
    __int32 __result = _sub_1000EC37(entry1, entry2);
    return __result;
}

_extern void _sub_10010774(void *);
_static void RefStringFree(void *elem) // 0x10010774
{
    mangled_assert("RefStringFree");
    todo("implement");
    _sub_10010774(elem);
}

_extern char *_sub_1000F104(char *, char);
_static char *mytok(char *instr, char delim) // 0x1000F104
{
    mangled_assert("mytok");
    todo("implement");
    char * __result = _sub_1000F104(instr, delim);
    return __result;
}

_extern __int32 _sub_1000F0CF(char const *, __int32);
_static __int32 StringHash(char const *s, __int32 numbuckets) // 0x1000F0CF
{
    mangled_assert("StringHash");
    todo("implement");
    __int32 __result = _sub_1000F0CF(s, numbuckets);
    return __result;
}

_extern void _sub_1000EC4C(void *);
_static void KeyValFree(void *elem) // 0x1000EC4C
{
    mangled_assert("KeyValFree");
    todo("implement");
    _sub_1000EC4C(elem);
}

_extern __int32 _sub_1000EC64(void const *, __int32);
_static __int32 KeyValHashKey(void const *elem, __int32 numbuckets) // 0x1000EC64
{
    mangled_assert("KeyValHashKey");
    todo("implement");
    __int32 __result = _sub_1000EC64(elem, numbuckets);
    return __result;
}
#endif
