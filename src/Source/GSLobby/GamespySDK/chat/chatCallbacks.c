#if 0
/* ---------- headers */

#include "decomp.h"
#include <errhandlingapi.h>
#include <winerror.h>
#include <securitybaseapi.h>
#include <winreg.h>
#include <GSLobby\GamespySDK\chat\chatMain.h>
#include <reason.h>
#include <consoleapi.h>
#include <GSLobby\GamespySDK\chat\chatSocket.h>
#include <stdio.h>
#include <GSLobby\GamespySDK\chat\chatCallbacks.h>
#include <wingdi.h>
#include <pshpack8.h>
#include <GSLobby\GamespySDK\chat\chat.h>
#include <timezoneapi.h>
#include <ioapiset.h>
#include <GSLobby\GamespySDK\darray.h>
#include <memoryapi.h>
#include <winnt.h>
#include <ctype.h>
#include <apiset.h>
#include <stdlib.h>
#include <crtdefs.h>
#include <sal.h>
#include <processthreadsapi.h>
#include <profileapi.h>
#include <concurrencysal.h>
#include <vadefs.h>
#include <systemtopologyapi.h>
#include <heapapi.h>
#include <bemapiset.h>
#include <threadpoollegacyapiset.h>
#include <GSLobby\GamespySDK\hashtable.h>
#include <processtopologyapi.h>
#include <assert.h>
#include <GSLobby\GamespySDK\chat\chatChannel.h>
#include <debugapi.h>
#include <fibersapi.h>
#include <kernelspecs.h>
#include <basetsd.h>
#include <GSLobby\GamespySDK\chat\chatCrypt.h>
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
#include <string.h>
#include <wnnc.h>
#include <wow64apiset.h>
#include <utilapiset.h>
#include <GSLobby\GamespySDK\chat\chatHandlers.h>
#include <winuser.h>
#include <ime_cmodes.h>
#include <GSLobby\GamespySDK\nonport.h>
#include <winsock.h>
#include <sysinfoapi.h>
#include <windows.h>
#include <winapifamily.h>
#include <limits.h>
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
#include <guiddef.h>
#include <stdarg.h>
#include <windef.h>
#include <swprintf.inl>
#include <minwindef.h>
#include <specstrings.h>
#include <specstrings_strict.h>
#include <specstrings_undef.h>
#include <driverspecs.h>
#include <sdv_driverspecs.h>
#include <inaddr.h>
#include <stralign.h>
#include <namespaceapi.h>
#include <winsvc.h>

/* ---------- constants */

/* ---------- definitions */

struct ciCallbackData
{
    __int32 type; // 0x0
    void *callback; // 0x4
    void *callbackParams; // 0x8
    void *param; // 0xC
    __int32 ID; // 0x10
    char *channel; // 0x14
};
static_assert(sizeof(ciCallbackData) == 24, "Invalid ciCallbackData size");

/* ---------- prototypes */

extern CHATBool ciInitCallbacks(ciConnection *connection);
extern void ciCleanupCallbacks(void *chat);
extern CHATBool ciAddCallback_(void *chat, __int32 type, void *callback, void *callbackParams, void *param, __int32 ID, char const *channel, unsigned __int32 callbackParamsSize);
extern void ciCallCallback(void *chat, ciCallbackData *data);
extern void ciCallCallbacks(void *chat, __int32 ID);
extern CHATBool ciCheckCallbacksForID(void *chat, __int32 ID);

_static void ciCallbacksArrayElementFreeFn(void *elem);
_static void ciFreeCallbackData(ciCallbackData *data);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

CHATBool ciInitCallbacks(ciConnection *connection) // 0x10008C96
{
    mangled_assert("_ciInitCallbacks@4");
    todo("implement");
}

void ciCleanupCallbacks(void *chat) // 0x1000897B
{
    mangled_assert("_ciCleanupCallbacks@4");
    todo("implement");
}

CHATBool ciAddCallback_(void *chat, __int32 type, void *callback, void *callbackParams, void *param, __int32 ID, char const *channel, unsigned __int32 callbackParamsSize) // 0x10007D0B
{
    mangled_assert("_ciAddCallback_@32");
    todo("implement");
}

void ciCallCallback(void *chat, ciCallbackData *data) // 0x100086E7
{
    mangled_assert("_ciCallCallback@8");
    todo("implement");
}

void ciCallCallbacks(void *chat, __int32 ID) // 0x10008867
{
    mangled_assert("_ciCallCallbacks@8");
    todo("implement");
}

CHATBool ciCheckCallbacksForID(void *chat, __int32 ID) // 0x10008934
{
    mangled_assert("_ciCheckCallbacksForID@8");
    todo("implement");
}

/* ---------- private code */

_static void ciCallbacksArrayElementFreeFn(void *elem) // 0x10008923
{
    mangled_assert("ciCallbacksArrayElementFreeFn");
    todo("implement");
}

_static void ciFreeCallbackData(ciCallbackData *data) // 0x100089C2
{
    mangled_assert("ciFreeCallbackData");
    todo("implement");
}
#endif
