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

/* ---------- prototypes */

extern void SBQueryEngineInit(_SBQueryEngine *engine, __int32 maxupdates, __int32 queryversion, void (*callback)(_SBQueryEngine *, SBQueryEngineCallbackReason, _SBServer *, void *), void *instance);
extern void SBQueryEngineSetPublicIP(_SBQueryEngine *engine, unsigned __int32 mypublicip);
extern void SBEngineHaltUpdates(_SBQueryEngine *engine);
extern void SBEngineCleanup(_SBQueryEngine *engine);
extern void SBQueryEngineUpdateServer(_SBQueryEngine *engine, _SBServer *server, __int32 addfront, __int32 querytype);
extern void SBQueryEngineThink(_SBQueryEngine *engine);
extern void SBQueryEngineAddQueryKey(_SBQueryEngine *engine, unsigned char keyid);
extern void SBQueryEngineRemoveServerFromFIFOs(_SBQueryEngine *engine, _SBServer *server);

_static void FIFOAddRear(_SBServerFIFO *fifo, _SBServer *server);
_static _SBServer *FIFOGetFirst(_SBServerFIFO *fifo);
_static SBBool FIFORemove(_SBServerFIFO *fifo, _SBServer *server);
_static void QEStartQuery(_SBQueryEngine *engine, _SBServer *server);
_static void ParseSingleQR2Reply(_SBQueryEngine *engine, _SBServer *server, char *data, __int32 len);
_static void ParseSingleGOAReply(_SBQueryEngine *engine, _SBServer *server, char *data, __int32 len);
_static void ProcessIncomingReplies(_SBQueryEngine *engine);
_static void TimeoutOldQueries(_SBQueryEngine *engine);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_1000EAB7(_SBQueryEngine *, __int32, __int32, void (*)(_SBQueryEngine *, SBQueryEngineCallbackReason, _SBServer *, void *), void *);
void SBQueryEngineInit(_SBQueryEngine *engine, __int32 maxupdates, __int32 queryversion, void (*callback)(_SBQueryEngine *, SBQueryEngineCallbackReason, _SBServer *, void *), void *instance) // 0x1000EAB7
{
    mangled_assert("_SBQueryEngineInit@20");
    todo("implement");
    _sub_1000EAB7(engine, maxupdates, queryversion, callback, instance);
}

_extern void _sub_1000EB30(_SBQueryEngine *, unsigned __int32);
void SBQueryEngineSetPublicIP(_SBQueryEngine *engine, unsigned __int32 mypublicip) // 0x1000EB30
{
    mangled_assert("_SBQueryEngineSetPublicIP@8");
    todo("implement");
    _sub_1000EB30(engine, mypublicip);
}

_extern void _sub_1000EA82(_SBQueryEngine *);
void SBEngineHaltUpdates(_SBQueryEngine *engine) // 0x1000EA82
{
    mangled_assert("_SBEngineHaltUpdates@4");
    todo("implement");
    _sub_1000EA82(engine);
}

_extern void _sub_1000EA59(_SBQueryEngine *);
void SBEngineCleanup(_SBQueryEngine *engine) // 0x1000EA59
{
    mangled_assert("_SBEngineCleanup@4");
    todo("implement");
    _sub_1000EA59(engine);
}

_extern void _sub_1000EB8F(_SBQueryEngine *, _SBServer *, __int32, __int32);
void SBQueryEngineUpdateServer(_SBQueryEngine *engine, _SBServer *server, __int32 addfront, __int32 querytype) // 0x1000EB8F
{
    mangled_assert("_SBQueryEngineUpdateServer@16");
    todo("implement");
    _sub_1000EB8F(engine, server, addfront, querytype);
}

_extern void _sub_1000EB3E(_SBQueryEngine *);
void SBQueryEngineThink(_SBQueryEngine *engine) // 0x1000EB3E
{
    mangled_assert("_SBQueryEngineThink@4");
    todo("implement");
    _sub_1000EB3E(engine);
}

_extern void _sub_1000EA9D(_SBQueryEngine *, unsigned char);
void SBQueryEngineAddQueryKey(_SBQueryEngine *engine, unsigned char keyid) // 0x1000EA9D
{
    mangled_assert("_SBQueryEngineAddQueryKey@8");
    todo("implement");
    _sub_1000EA9D(engine, keyid);
}

_extern void _sub_1000EB09(_SBQueryEngine *, _SBServer *);
void SBQueryEngineRemoveServerFromFIFOs(_SBQueryEngine *engine, _SBServer *server) // 0x1000EB09
{
    mangled_assert("_SBQueryEngineRemoveServerFromFIFOs@8");
    todo("implement");
    _sub_1000EB09(engine, server);
}

/* ---------- private code */

_extern void _sub_1000E6F5(_SBServerFIFO *, _SBServer *);
_static void FIFOAddRear(_SBServerFIFO *fifo, _SBServer *server) // 0x1000E6F5
{
    mangled_assert("FIFOAddRear");
    todo("implement");
    _sub_1000E6F5(fifo, server);
}

_extern _SBServer *_sub_1000E71B(_SBServerFIFO *);
_static _SBServer *FIFOGetFirst(_SBServerFIFO *fifo) // 0x1000E71B
{
    mangled_assert("FIFOGetFirst");
    todo("implement");
    _SBServer * __result = _sub_1000E71B(fifo);
    return __result;
}

_extern SBBool _sub_1000E739(_SBServerFIFO *, _SBServer *);
_static SBBool FIFORemove(_SBServerFIFO *fifo, _SBServer *server) // 0x1000E739
{
    mangled_assert("FIFORemove");
    todo("implement");
    SBBool __result = _sub_1000E739(fifo, server);
    return __result;
}

_extern void _sub_1000E94B(_SBQueryEngine *, _SBServer *);
_static void QEStartQuery(_SBQueryEngine *engine, _SBServer *server) // 0x1000E94B
{
    mangled_assert("QEStartQuery");
    todo("implement");
    _sub_1000E94B(engine, server);
}

_extern void _sub_1000E7E3(_SBQueryEngine *, _SBServer *, char *, __int32);
_static void ParseSingleQR2Reply(_SBQueryEngine *engine, _SBServer *server, char *data, __int32 len) // 0x1000E7E3
{
    mangled_assert("ParseSingleQR2Reply");
    todo("implement");
    _sub_1000E7E3(engine, server, data, len);
}

_extern void _sub_1000E77C(_SBQueryEngine *, _SBServer *, char *, __int32);
_static void ParseSingleGOAReply(_SBQueryEngine *engine, _SBServer *server, char *data, __int32 len) // 0x1000E77C
{
    mangled_assert("ParseSingleGOAReply");
    todo("implement");
    _sub_1000E77C(engine, server, data, len);
}

_extern void _sub_1000E88F(_SBQueryEngine *);
_static void ProcessIncomingReplies(_SBQueryEngine *engine) // 0x1000E88F
{
    mangled_assert("ProcessIncomingReplies");
    todo("implement");
    _sub_1000E88F(engine);
}

_extern void _sub_1000EBF0(_SBQueryEngine *);
_static void TimeoutOldQueries(_SBQueryEngine *engine) // 0x1000EBF0
{
    mangled_assert("TimeoutOldQueries");
    todo("implement");
    _sub_1000EBF0(engine);
}
#endif
