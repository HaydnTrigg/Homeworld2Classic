#if 0
/* ---------- headers */

#include "decomp.h"
#include <fileapi.h>
#include <jobapi.h>
#include <pshpack2.h>
#include <wtime.inl>
#include <ktmtypes.h>
#include <pshpack4.h>
#include <GSLobby\GamespySDK\darray.h>
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
#include <stdlib.h>
#include <libloaderapi.h>
#include <crtdefs.h>
#include <sal.h>
#include <concurrencysal.h>
#include <tvout.h>
#include <interlockedapi.h>
#include <vadefs.h>
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
#include <string.h>
#include <processthreadsapi.h>
#include <profileapi.h>
#include <limits.h>
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
#include <wincon.h>

/* ---------- constants */

/* ---------- definitions */

struct DArrayImplementation
{
    __int32 count; // 0x0
    __int32 capacity; // 0x4
    __int32 elemsize; // 0x8
    __int32 growby; // 0xC
    void (*elemfreefn)(void *); // 0x10
    void *list; // 0x14
};
static_assert(sizeof(DArrayImplementation) == 24, "Invalid DArrayImplementation size");

typedef __int32 (*ArrayMapFn2)(void *, void *);
typedef void (*ArrayMapFn)(void *, void *);

/* ---------- prototypes */

extern DArrayImplementation *ArrayNew(__int32 elemSize, __int32 numElemsToAllocate, void (*elemFreeFn)(void *));
extern void ArrayFree(DArrayImplementation *array);
extern __int32 ArrayLength(DArrayImplementation *const array);
extern void *ArrayNth(DArrayImplementation *array, __int32 n);
extern void ArrayAppend(DArrayImplementation *array, void const *newElem);
extern void ArrayInsertAt(DArrayImplementation *array, void const *newElem, __int32 n);
extern void ArrayRemoveAt(DArrayImplementation *array, __int32 n);
extern void ArrayDeleteAt(DArrayImplementation *array, __int32 n);
extern void ArrayReplaceAt(DArrayImplementation *array, void const *newElem, __int32 n);
extern __int32 ArraySearch(DArrayImplementation *array, void const *key, __int32 (*comparator)(void const *, void const *), __int32 fromIndex, __int32 isSorted);
extern void ArrayMap(DArrayImplementation *array, void (*fn)(void *, void *), void *clientData);
extern void ArrayMapBackwards(DArrayImplementation *array, void (*fn)(void *, void *), void *clientData);
extern void *ArrayMap2(DArrayImplementation *array, __int32 (*fn)(void *, void *), void *clientData);
extern void ArrayClear(DArrayImplementation *array);

_static void FreeElement(DArrayImplementation *array, __int32 n);
_static void SetElement(DArrayImplementation *array, void const *elem, __int32 pos);
_static void *mybsearch(void const *elem, void *base, __int32 num, __int32 elemsize, __int32 (*comparator)(void const *, void const *), __int32 *found);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern DArrayImplementation *_sub_10005A4C(__int32, __int32, void (*)(void *));
DArrayImplementation *ArrayNew(__int32 elemSize, __int32 numElemsToAllocate, void (*elemFreeFn)(void *)) // 0x10005A4C
{
    mangled_assert("_ArrayNew@12");
    todo("implement");
    DArrayImplementation * __result = _sub_10005A4C(elemSize, numElemsToAllocate, elemFreeFn);
    return __result;
}

_extern void _sub_10005932(DArrayImplementation *);
void ArrayFree(DArrayImplementation *array) // 0x10005932
{
    mangled_assert("_ArrayFree@4");
    todo("implement");
    _sub_10005932(array);
}

_extern __int32 _sub_1000EE1F(DArrayImplementation *const);
__int32 ArrayLength(DArrayImplementation *const array) // 0x1000EE1F
{
    __int32 __result = _sub_1000EE1F(array);
    return __result;
}

_extern void *_sub_10005A99(DArrayImplementation *, __int32);
void *ArrayNth(DArrayImplementation *array, __int32 n) // 0x10005A99
{
    mangled_assert("_ArrayNth@8");
    todo("implement");
    void * __result = _sub_10005A99(array, n);
    return __result;
}

_extern void _sub_100058F0(DArrayImplementation *, void const *);
void ArrayAppend(DArrayImplementation *array, void const *newElem) // 0x100058F0
{
    mangled_assert("_ArrayAppend@8");
    todo("implement");
    _sub_100058F0(array, newElem);
}

_extern void _sub_1000595F(DArrayImplementation *, void const *, __int32);
void ArrayInsertAt(DArrayImplementation *array, void const *newElem, __int32 n) // 0x1000595F
{
    mangled_assert("_ArrayInsertAt@12");
    todo("implement");
    _sub_1000595F(array, newElem, n);
}

_extern void _sub_10005AAB(DArrayImplementation *, __int32);
void ArrayRemoveAt(DArrayImplementation *array, __int32 n) // 0x10005AAB
{
    mangled_assert("_ArrayRemoveAt@8");
    todo("implement");
    _sub_10005AAB(array, n);
}

_extern void _sub_10005920(DArrayImplementation *, __int32);
void ArrayDeleteAt(DArrayImplementation *array, __int32 n) // 0x10005920
{
    mangled_assert("_ArrayDeleteAt@8");
    todo("implement");
    _sub_10005920(array, n);
}

_extern void _sub_10005AE9(DArrayImplementation *, void const *, __int32);
void ArrayReplaceAt(DArrayImplementation *array, void const *newElem, __int32 n) // 0x10005AE9
{
    mangled_assert("_ArrayReplaceAt@12");
    todo("implement");
    _sub_10005AE9(array, newElem, n);
}

_extern __int32 _sub_10005AFD(DArrayImplementation *, void const *, __int32 (*)(void const *, void const *), __int32, __int32);
__int32 ArraySearch(DArrayImplementation *array, void const *key, __int32 (*comparator)(void const *, void const *), __int32 fromIndex, __int32 isSorted) // 0x10005AFD
{
    mangled_assert("_ArraySearch@20");
    todo("implement");
    __int32 __result = _sub_10005AFD(array, key, comparator, fromIndex, isSorted);
    return __result;
}

_extern void _sub_10005A00(DArrayImplementation *, void (*)(void *, void *), void *);
void ArrayMap(DArrayImplementation *array, void (*fn)(void *, void *), void *clientData) // 0x10005A00
{
    mangled_assert("_ArrayMap@12");
    todo("implement");
    _sub_10005A00(array, fn, clientData);
}

_extern void _sub_10005A28(DArrayImplementation *, void (*)(void *, void *), void *);
void ArrayMapBackwards(DArrayImplementation *array, void (*fn)(void *, void *), void *clientData) // 0x10005A28
{
    mangled_assert("_ArrayMapBackwards@12");
    todo("implement");
    _sub_10005A28(array, fn, clientData);
}

_extern void *_sub_100059CC(DArrayImplementation *, __int32 (*)(void *, void *), void *);
void *ArrayMap2(DArrayImplementation *array, __int32 (*fn)(void *, void *), void *clientData) // 0x100059CC
{
    mangled_assert("_ArrayMap2@12");
    todo("implement");
    void * __result = _sub_100059CC(array, fn, clientData);
    return __result;
}

_extern void _sub_10005907(DArrayImplementation *);
void ArrayClear(DArrayImplementation *array) // 0x10005907
{
    mangled_assert("_ArrayClear@4");
    todo("implement");
    _sub_10005907(array);
}

/* ---------- private code */

_extern void _sub_10005BB9(DArrayImplementation *, __int32);
_static void FreeElement(DArrayImplementation *array, __int32 n) // 0x10005BB9
{
    mangled_assert("FreeElement");
    todo("implement");
    _sub_10005BB9(array, n);
}

_extern void _sub_10005BD5(DArrayImplementation *, void const *, __int32);
_static void SetElement(DArrayImplementation *array, void const *elem, __int32 pos) // 0x10005BD5
{
    mangled_assert("SetElement");
    todo("implement");
    _sub_10005BD5(array, elem, pos);
}

_extern void *_sub_10005BF5(void const *, void *, __int32, __int32, __int32 (*)(void const *, void const *), __int32 *);
_static void *mybsearch(void const *elem, void *base, __int32 num, __int32 elemsize, __int32 (*comparator)(void const *, void const *), __int32 *found) // 0x10005BF5
{
    mangled_assert("mybsearch");
    todo("implement");
    void * __result = _sub_10005BF5(elem, base, num, elemsize, comparator, found);
    return __result;
}
#endif
