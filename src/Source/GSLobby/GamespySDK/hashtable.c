#if 0
/* ---------- headers */

#include "decomp.h"
#include <winbase.h>
#include <handleapi.h>
#include <apisetcconv.h>
#include <imm.h>
#include <minwinbase.h>
#include <GSLobby\GamespySDK\darray.h>
#include <synchapi.h>
#include <poppack.h>
#include <guiddef.h>
#include <stdarg.h>
#include <GSLobby\GamespySDK\hashtable.h>
#include <windef.h>
#include <minwindef.h>
#include <specstrings.h>
#include <specstrings_strict.h>
#include <specstrings_undef.h>
#include <driverspecs.h>
#include <sdv_driverspecs.h>
#include <stdlib.h>
#include <crtdefs.h>
#include <sal.h>
#include <concurrencysal.h>
#include <vadefs.h>
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
#include <string.h>
#include <fibersapi.h>
#include <limits.h>
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
#include <libloaderapi.h>
#include <tvout.h>
#include <interlockedapi.h>

/* ---------- constants */

/* ---------- definitions */

struct HashImplementation
{
    DArrayImplementation **buckets; // 0x0
    __int32 nbuckets; // 0x4
    void (*freefn)(void *); // 0x8
    __int32 (*hashfn)(void const *, __int32); // 0xC
    __int32 (*compfn)(void const *, void const *); // 0x10
};
static_assert(sizeof(HashImplementation) == 20, "Invalid HashImplementation size");

/* ---------- prototypes */

extern HashImplementation *TableNew(__int32 elemSize, __int32 nBuckets, __int32 (*hashFn)(void const *, __int32), __int32 (*compFn)(void const *, void const *), void (*freeFn)(void *));
extern HashImplementation *TableNew2(__int32 elemSize, __int32 nBuckets, __int32 nChains, __int32 (*hashFn)(void const *, __int32), __int32 (*compFn)(void const *, void const *), void (*freeFn)(void *));
extern void TableFree(HashImplementation *table);
extern __int32 TableCount(HashImplementation *table);
extern void TableEnter(HashImplementation *table, void const *newElem);
extern __int32 TableRemove(HashImplementation *table, void const *delElem);
extern void *TableLookup(HashImplementation *table, void const *elemKey);
extern void TableMap(HashImplementation *table, void (*fn)(void *, void *), void *clientData);
extern void TableMapSafe(HashImplementation *table, void (*fn)(void *, void *), void *clientData);
extern void *TableMap2(HashImplementation *table, __int32 (*fn)(void *, void *), void *clientData);
extern void TableClear(HashImplementation *table);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern HashImplementation *_sub_10005E48(__int32, __int32, __int32 (*)(void const *, __int32), __int32 (*)(void const *, void const *), void (*)(void *));
HashImplementation *TableNew(__int32 elemSize, __int32 nBuckets, __int32 (*hashFn)(void const *, __int32), __int32 (*compFn)(void const *, void const *), void (*freeFn)(void *)) // 0x10005E48
{
    mangled_assert("_TableNew@20");
    todo("implement");
    HashImplementation * __result = _sub_10005E48(elemSize, nBuckets, hashFn, compFn, freeFn);
    return __result;
}

_extern HashImplementation *_sub_10005DDF(__int32, __int32, __int32, __int32 (*)(void const *, __int32), __int32 (*)(void const *, void const *), void (*)(void *));
HashImplementation *TableNew2(__int32 elemSize, __int32 nBuckets, __int32 nChains, __int32 (*hashFn)(void const *, __int32), __int32 (*compFn)(void const *, void const *), void (*freeFn)(void *)) // 0x10005DDF
{
    mangled_assert("_TableNew2@24");
    todo("implement");
    HashImplementation * __result = _sub_10005DDF(elemSize, nBuckets, nChains, hashFn, compFn, freeFn);
    return __result;
}

_extern void _sub_10005CEA(HashImplementation *);
void TableFree(HashImplementation *table) // 0x10005CEA
{
    mangled_assert("_TableFree@4");
    todo("implement");
    _sub_10005CEA(table);
}

_extern __int32 _sub_10005C71(HashImplementation *);
__int32 TableCount(HashImplementation *table) // 0x10005C71
{
    mangled_assert("_TableCount@4");
    todo("implement");
    __int32 __result = _sub_10005C71(table);
    return __result;
}

_extern void _sub_10005C9B(HashImplementation *, void const *);
void TableEnter(HashImplementation *table, void const *newElem) // 0x10005C9B
{
    mangled_assert("_TableEnter@8");
    todo("implement");
    _sub_10005C9B(table, newElem);
}

_extern __int32 _sub_10005E65(HashImplementation *, void const *);
__int32 TableRemove(HashImplementation *table, void const *delElem) // 0x10005E65
{
    mangled_assert("_TableRemove@8");
    todo("implement");
    __int32 __result = _sub_10005E65(table, delElem);
    return __result;
}

_extern void *_sub_10005D1B(HashImplementation *, void const *);
void *TableLookup(HashImplementation *table, void const *elemKey) // 0x10005D1B
{
    mangled_assert("_TableLookup@8");
    todo("implement");
    void * __result = _sub_10005D1B(table, elemKey);
    return __result;
}

_extern void _sub_10005D8B(HashImplementation *, void (*)(void *, void *), void *);
void TableMap(HashImplementation *table, void (*fn)(void *, void *), void *clientData) // 0x10005D8B
{
    mangled_assert("_TableMap@12");
    todo("implement");
    _sub_10005D8B(table, fn, clientData);
}

_extern void _sub_10005DB5(HashImplementation *, void (*)(void *, void *), void *);
void TableMapSafe(HashImplementation *table, void (*fn)(void *, void *), void *clientData) // 0x10005DB5
{
    mangled_assert("_TableMapSafe@12");
    todo("implement");
    _sub_10005DB5(table, fn, clientData);
}

_extern void *_sub_10005D5B(HashImplementation *, __int32 (*)(void *, void *), void *);
void *TableMap2(HashImplementation *table, __int32 (*fn)(void *, void *), void *clientData) // 0x10005D5B
{
    mangled_assert("_TableMap2@12");
    todo("implement");
    void * __result = _sub_10005D5B(table, fn, clientData);
    return __result;
}

_extern void _sub_10005C4F(HashImplementation *);
void TableClear(HashImplementation *table) // 0x10005C4F
{
    mangled_assert("_TableClear@4");
    todo("implement");
    _sub_10005C4F(table);
}

/* ---------- private code */
#endif
