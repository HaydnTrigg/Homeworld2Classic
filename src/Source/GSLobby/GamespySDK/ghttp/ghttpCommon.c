#if 0
/* ---------- headers */

#include "decomp.h"
#include <stdio.h>
#include <stdarg.h>
#include <windef.h>
#include <minwindef.h>
#include <specstrings.h>
#include <specstrings_strict.h>
#include <specstrings_undef.h>
#include <driverspecs.h>
#include <sdv_driverspecs.h>
#include <inaddr.h>
#include <stralign.h>
#include <GSLobby\GamespySDK\ghttp\ghttpCommon.h>
#include <namespaceapi.h>
#include <GSLobby\GamespySDK\ghttp\ghttp.h>
#include <winsvc.h>
#include <stdlib.h>
#include <errhandlingapi.h>
#include <crtdefs.h>
#include <winerror.h>
#include <sal.h>
#include <securitybaseapi.h>
#include <concurrencysal.h>
#include <winreg.h>
#include <vadefs.h>
#include <reason.h>
#include <consoleapi.h>
#include <wingdi.h>
#include <pshpack8.h>
#include <timezoneapi.h>
#include <ioapiset.h>
#include <memoryapi.h>
#include <GSLobby\GamespySDK\ghttp\ghttpBuffer.h>
#include <winnt.h>
#include <ctype.h>
#include <apiset.h>
#include <processthreadsapi.h>
#include <profileapi.h>
#include <GSLobby\GamespySDK\nonport.h>
#include <string.h>
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
#include <limits.h>
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
#include <swprintf.inl>
#include <GSLobby\GamespySDK\ghttp\ghttpPost.h>
#include <ime_cmodes.h>
#include <GSLobby\GamespySDK\darray.h>
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
#include <libloaderapi.h>
#include <tvout.h>
#include <interlockedapi.h>
#include <winbase.h>
#include <handleapi.h>
#include <apisetcconv.h>
#include <imm.h>
#include <minwinbase.h>
#include <synchapi.h>
#include <poppack.h>
#include <GSLobby\GamespySDK\ghttp\ghttpConnection.h>
#include <guiddef.h>
#include <GSLobby\GamespySDK\ghttp\ghttpMain.h>

/* ---------- constants */

/* ---------- definitions */

typedef unsigned short USHORT;
typedef unsigned char UCHAR;
typedef unsigned __int32 UINT_PTR;
typedef unsigned long ULONG;
typedef long long LONGLONG;
typedef long LONG_PTR;
typedef unsigned long SIZE_T;
typedef hostent HOSTENT;
typedef sockaddr_in SOCKADDR_IN;
typedef unsigned long long ULONGLONG;
typedef GHTTPBool (*ghttpCompletedCallback)(__int32, GHTTPResult, char *, __int32, void *);
typedef DArrayImplementation *DArray;
typedef unsigned short wchar_t;
typedef short *PSHORT;
typedef char *PCHAR;
typedef _TP_CALLBACK_INSTANCE *PTP_CALLBACK_INSTANCE;
typedef wchar_t const *PCUWSTR;
typedef unsigned long TP_VERSION;
typedef void (*ghttpPostCallback)(__int32, __int32, __int32, __int32, __int32, void *);
typedef void *PVOID;
typedef _TP_CALLBACK_ENVIRON_V3 TP_CALLBACK_ENVIRON_V3;
typedef _TP_CALLBACK_PRIORITY TP_CALLBACK_PRIORITY;
typedef void (*ghttpProgressCallback)(__int32, GHTTPState, char const *, __int32, __int32, __int32, void *);
typedef unsigned long DWORD;
typedef unsigned short WORD;
typedef unsigned __int32 SOCKET;
typedef unsigned char BYTE;
typedef _TP_POOL *PTP_POOL;
typedef unsigned short u_short;
typedef unsigned long long DWORD64;
typedef wchar_t WCHAR;
typedef short SHORT;
typedef long LONG;
typedef long *PLONG;
typedef unsigned short *PUWSTR;
typedef long long LONG64;
typedef long long *PLONG64;
typedef __int32 GHTTPRequest;
typedef GHIPost *GHTTPPost;
typedef void (*PTP_SIMPLE_CALLBACK)(_TP_CALLBACK_INSTANCE *, void *);
typedef void (*PTP_CLEANUP_GROUP_CANCEL_CALLBACK)(void *, void *);
typedef _TP_CALLBACK_ENVIRON_V3 *PTP_CALLBACK_ENVIRON;
typedef _TP_CLEANUP_GROUP *PTP_CLEANUP_GROUP;
typedef sockaddr SOCKADDR;
typedef char CHAR;
typedef unsigned long ULONG_PTR;
typedef long HRESULT;
typedef _RTL_CRITICAL_SECTION *PRTL_CRITICAL_SECTION;
typedef _RTL_CRITICAL_SECTION *LPCRITICAL_SECTION;
typedef unsigned __int32 u_int;
typedef _LIST_ENTRY LIST_ENTRY;
typedef _RTL_CRITICAL_SECTION RTL_CRITICAL_SECTION;
typedef void *GLock;
typedef _RTL_CRITICAL_SECTION_DEBUG *PRTL_CRITICAL_SECTION_DEBUG;
typedef void *HANDLE;
typedef _RTL_CRITICAL_SECTION CRITICAL_SECTION;

/* ---------- prototypes */

extern void ghiCreateLock();
extern void ghiFreeLock();
extern void ghiLock();
extern void ghiUnlock();
extern GHTTPBool ghiSocketSelect(unsigned __int32 socket, GHTTPBool *readFlag, GHTTPBool *writeFlag, GHTTPBool *exceptFlag);
extern GHIRecvResult ghiDoReceive(GHIConnection *connection, char *buffer, __int32 *bufferLen);
extern __int32 ghiDoSend(GHIConnection *connection, char const *buffer, __int32 len);
extern GHITrySendResult ghiTrySendThenBuffer(GHIConnection *connection, char const *buffer, __int32 len);

/* ---------- globals */

extern __int32 ghiThrottleBufferSize; // 0x1001E728
extern __int32 ghiThrottleTimeDelay; // 0x1001E72C

/* ---------- private variables */

_static
{
    extern void *ghiGlobalLock; // 0x10020758
}

/* ---------- public code */

void ghiCreateLock() // 0x10016C49
{
    mangled_assert("_ghiCreateLock@0");
    todo("implement");
}

void ghiFreeLock() // 0x10016D61
{
    mangled_assert("_ghiFreeLock@0");
    todo("implement");
}

void ghiLock() // 0x10016D84
{
    mangled_assert("_ghiLock@0");
    todo("implement");
}

void ghiUnlock() // 0x10016F0A
{
    mangled_assert("_ghiUnlock@0");
    todo("implement");
}

GHTTPBool ghiSocketSelect(unsigned __int32 socket, GHTTPBool *readFlag, GHTTPBool *writeFlag, GHTTPBool *exceptFlag) // 0x10016D95
{
    mangled_assert("_ghiSocketSelect@16");
    todo("implement");
}

GHIRecvResult ghiDoReceive(GHIConnection *connection, char *buffer, __int32 *bufferLen) // 0x10016C68
{
    mangled_assert("_ghiDoReceive@12");
    todo("implement");
}

__int32 ghiDoSend(GHIConnection *connection, char const *buffer, __int32 len) // 0x10016D0C
{
    mangled_assert("_ghiDoSend@12");
    todo("implement");
}

GHITrySendResult ghiTrySendThenBuffer(GHIConnection *connection, char const *buffer, __int32 len) // 0x10016EBE
{
    mangled_assert("_ghiTrySendThenBuffer@12");
    todo("implement");
}

/* ---------- private code */
#endif
