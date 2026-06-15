#if 0
/* ---------- headers */

#include "decomp.h"
#include <securitybaseapi.h>
#include <winreg.h>
#include <reason.h>
#include <consoleapi.h>
#include <wingdi.h>
#include <pshpack8.h>
#include <timezoneapi.h>
#include <ioapiset.h>
#include <memoryapi.h>
#include <stdarg.h>
#include <string.h>
#include <winnt.h>
#include <ctype.h>
#include <apiset.h>
#include <stdio.h>
#include <processthreadsapi.h>
#include <profileapi.h>
#include <crtdefs.h>
#include <sal.h>
#include <concurrencysal.h>
#include <vadefs.h>
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
#include <GSLobby\GamespySDK\chat\chatCrypt.h>
#include <GSLobby\GamespySDK\chat\chatSocket.h>
#include <GSLobby\GamespySDK\chat\chat.h>
#include <winnls.h>
#include <datetimeapi.h>
#include <namedpipeapi.h>
#include <swprintf.inl>
#include <securityappcontainer.h>
#include <wincon.h>
#include <fileapi.h>
#include <jobapi.h>
#include <limits.h>
#include <pshpack2.h>
#include <stdlib.h>
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
#include <winsock.h>
#include <sysinfoapi.h>
#include <GSLobby\GamespySDK\nonport.h>
#include <windows.h>
#include <time.h>
#include <threadpoolapiset.h>
#include <winapifamily.h>
#include <time.inl>
#include <sdkddkver.h>
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
#include <windef.h>
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
#include <errhandlingapi.h>
#include <winerror.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern CHATBool ciSocketInit(ciSocket *sock);
extern CHATBool ciSocketConnect(ciSocket *sock, char const *serverAddress, __int32 port);
extern void ciSocketDisconnect(ciSocket *sock);
extern void ciSocketThink(ciSocket *sock);
extern CHATBool ciSocketSend(ciSocket *sock, char const *buffer);
extern CHATBool ciSocketSendf(ciSocket *sock, char const *format, ...);
extern CHATBool ciParseParam(char const *pText, ciServerMessage *message);
extern ciServerMessage *ciSocketRecv(ciSocket *sock);

_static CHATBool ciBufferInit(ciBuffer *buffer);
_static CHATBool ciBufferPreAppend(ciBuffer *buffer, __int32 len);
_static void ciBufferClipFront(ciBuffer *buffer, __int32 len);
_static void ciSocketSelect(unsigned __int32 sock, CHATBool *readFlag, CHATBool *writeFlag, CHATBool *exceptFlag);
_static void ciSocketThinkSend(ciSocket *sock);
_static void ciSocketThinkRecv(ciSocket *sock);
_static CHATBool ciParseUser(char const *pText, ciServerMessage *message);
_static CHATBool ciAddParam(char const *param, ciServerMessage *message);
_static CHATBool ciParseMessage(ciSocket *sock, char const *sText);
_static CHATBool ciParseInput(ciSocket *sock);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

CHATBool ciSocketInit(ciSocket *sock) // 0x1000E0EC
{
    mangled_assert("_ciSocketInit@4");
    todo("implement");
}

CHATBool ciSocketConnect(ciSocket *sock, char const *serverAddress, __int32 port) // 0x1000DF87
{
    mangled_assert("_ciSocketConnect@12");
    todo("implement");
}

void ciSocketDisconnect(ciSocket *sock) // 0x1000E044
{
    mangled_assert("_ciSocketDisconnect@4");
    todo("implement");
}

void ciSocketThink(ciSocket *sock) // 0x1000E367
{
    mangled_assert("_ciSocketThink@4");
    todo("implement");
}

CHATBool ciSocketSend(ciSocket *sock, char const *buffer) // 0x1000E27F
{
    mangled_assert("_ciSocketSend@8");
    todo("implement");
}

CHATBool ciSocketSendf(ciSocket *sock, char const *format, ...) // 0x1000E31F
{
    mangled_assert("_ciSocketSendf");
    todo("implement");
}

CHATBool ciParseParam(char const *pText, ciServerMessage *message) // 0x1000DDD4
{
    mangled_assert("_ciParseParam@8");
    todo("implement");
}

ciServerMessage *ciSocketRecv(ciSocket *sock) // 0x1000E13C
{
    mangled_assert("_ciSocketRecv@4");
    todo("implement");
}

/* ---------- private code */

_static CHATBool ciBufferInit(ciBuffer *buffer) // 0x1000D8F8
{
    mangled_assert("ciBufferInit");
    todo("implement");
}

_static CHATBool ciBufferPreAppend(ciBuffer *buffer, __int32 len) // 0x1000D924
{
    mangled_assert("ciBufferPreAppend");
    todo("implement");
}

_static void ciBufferClipFront(ciBuffer *buffer, __int32 len) // 0x1000D8CD
{
    mangled_assert("ciBufferClipFront");
    todo("implement");
}

_static void ciSocketSelect(unsigned __int32 sock, CHATBool *readFlag, CHATBool *writeFlag, CHATBool *exceptFlag) // 0x1000E162
{
    mangled_assert("ciSocketSelect");
    todo("implement");
}

_static void ciSocketThinkSend(ciSocket *sock) // 0x1000E42E
{
    mangled_assert("ciSocketThinkSend");
    todo("implement");
}

_static void ciSocketThinkRecv(ciSocket *sock) // 0x1000E382
{
    mangled_assert("ciSocketThinkRecv");
    todo("implement");
}

_static CHATBool ciParseUser(char const *pText, ciServerMessage *message) // 0x1000DE7B
{
    mangled_assert("ciParseUser");
    todo("implement");
}

_static CHATBool ciAddParam(char const *param, ciServerMessage *message) // 0x1000D871
{
    mangled_assert("ciAddParam");
    todo("implement");
}

_static CHATBool ciParseMessage(ciSocket *sock, char const *sText) // 0x1000DB2D
{
    mangled_assert("ciParseMessage");
    todo("implement");
}

_static CHATBool ciParseInput(ciSocket *sock) // 0x1000D96D
{
    mangled_assert("ciParseInput");
    todo("implement");
}
#endif
