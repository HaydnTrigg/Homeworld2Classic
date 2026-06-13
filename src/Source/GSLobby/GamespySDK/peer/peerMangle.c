#if 0
/* ---------- headers */

#include "decomp.h"
#include <systemtopologyapi.h>
#include <heapapi.h>
#include <bemapiset.h>
#include <threadpoollegacyapiset.h>
#include <stdlib.h>
#include <limits.h>
#include <processtopologyapi.h>
#include <assert.h>
#include <debugapi.h>
#include <stdio.h>
#include <fibersapi.h>
#include <crtdefs.h>
#include <sal.h>
#include <concurrencysal.h>
#include <vadefs.h>
#include <winnt.h>
#include <kernelspecs.h>
#include <basetsd.h>
#include <mcx.h>
#include <pshpack1.h>
#include <GSLobby\GamespySDK\peer\peerMain.h>
#include <GSLobby\GamespySDK\peer\peer.h>
#include <winnls.h>
#include <datetimeapi.h>
#include <GSLobby\GamespySDK\nonport.h>
#include <namedpipeapi.h>
#include <string.h>
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
#include <GSLobby\GamespySDK\serverbrowsing\sb_serverbrowsing.h>
#include <ime_cmodes.h>
#include <winsock.h>
#include <sysinfoapi.h>
#include <time.h>
#include <threadpoolapiset.h>
#include <time.inl>
#include <swprintf.inl>
#include <stringapiset.h>
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
#include <GSLobby\GamespySDK\pinger\pinger.h>
#include <inaddr.h>
#include <stralign.h>
#include <windows.h>
#include <winapifamily.h>
#include <sdkddkver.h>
#include <excpt.h>
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
#include <memoryapi.h>
#include <GSLobby\GamespySDK\qr2\qr2.h>
#include <GSLobby\GamespySDK\qr2\qr2regkeys.h>
#include <GSLobby\GamespySDK\peer\peerMangle.h>
#include <stdarg.h>
#include <GSLobby\GamespySDK\chat\chat.h>
#include <windef.h>
#include <minwindef.h>
#include <apiset.h>
#include <specstrings.h>
#include <specstrings_strict.h>
#include <GSLobby\GamespySDK\serverbrowsing\sb_crypt.h>
#include <specstrings_undef.h>
#include <driverspecs.h>
#include <processthreadsapi.h>
#include <profileapi.h>
#include <sdv_driverspecs.h>
#include <ctype.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void piMangleTitleRoom(char *buffer, char const *title);
extern void piMangleGroupRoom(char *buffer, __int32 groupID);
extern void piMangleUser(char *buffer, unsigned __int32 IP, __int32 profileID);
extern PEERBool piDemangleUser(char const *buffer, unsigned __int32 *IP, __int32 *profileID);
extern void piMangleIP(char *buffer, unsigned __int32 IP);
extern unsigned __int32 piDemangleIP(char const *buffer);

_static char const *EncodeIPAddr(unsigned __int32 ulIPAddr, char *lpszEncodedAddr);
_static unsigned __int32 DecodeIPAddr(char const *lpszEncodedAddr);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern char const digits_hex[17]; // 0x1001B248
    extern char const digits_crypt[17]; // 0x1001B25C
    extern unsigned __int32 const ip_xormask; // 0x1001B270
    extern char ip_cryptbuffer[32]; // 0x1001FD74
}

/* ---------- public code */

_extern void _sub_10013ACD(char *, char const *);
void piMangleTitleRoom(char *buffer, char const *title) // 0x10013ACD
{
    mangled_assert("_piMangleTitleRoom@8");
    todo("implement");
    _sub_10013ACD(buffer, title);
}

_extern void _sub_10013AA4(char *, __int32);
void piMangleGroupRoom(char *buffer, __int32 groupID) // 0x10013AA4
{
    mangled_assert("_piMangleGroupRoom@8");
    todo("implement");
    _sub_10013AA4(buffer, groupID);
}

_extern void _sub_10013AE6(char *, unsigned __int32, __int32);
void piMangleUser(char *buffer, unsigned __int32 IP, __int32 profileID) // 0x10013AE6
{
    mangled_assert("_piMangleUser@12");
    todo("implement");
    _sub_10013AE6(buffer, IP, profileID);
}

_extern PEERBool _sub_10013A44(char const *, unsigned __int32 *, __int32 *);
PEERBool piDemangleUser(char const *buffer, unsigned __int32 *IP, __int32 *profileID) // 0x10013A44
{
    mangled_assert("_piDemangleUser@12");
    todo("implement");
    PEERBool __result = _sub_10013A44(buffer, IP, profileID);
    return __result;
}

_extern void _sub_10013ABD(char *, unsigned __int32);
void piMangleIP(char *buffer, unsigned __int32 IP) // 0x10013ABD
{
    mangled_assert("_piMangleIP@8");
    todo("implement");
    _sub_10013ABD(buffer, IP);
}

_extern unsigned __int32 _sub_10013A33(char const *);
unsigned __int32 piDemangleIP(char const *buffer) // 0x10013A33
{
    mangled_assert("_piDemangleIP@4");
    todo("implement");
    unsigned __int32 __result = _sub_10013A33(buffer);
    return __result;
}

/* ---------- private code */

_extern char const *_sub_100139B4(unsigned __int32, char *);
_static char const *EncodeIPAddr(unsigned __int32 ulIPAddr, char *lpszEncodedAddr) // 0x100139B4
{
    mangled_assert("EncodeIPAddr");
    todo("implement");
    char const * __result = _sub_100139B4(ulIPAddr, lpszEncodedAddr);
    return __result;
}

_extern unsigned __int32 _sub_1001392D(char const *);
_static unsigned __int32 DecodeIPAddr(char const *lpszEncodedAddr) // 0x1001392D
{
    mangled_assert("DecodeIPAddr");
    todo("implement");
    unsigned __int32 __result = _sub_1001392D(lpszEncodedAddr);
    return __result;
}
#endif
