#if 0
/* ---------- headers */

#include "decomp.h"
#include <Memory\Memorylib.h>
#include <Memory\mmPeek.h>
#include <Memory\mmpeeksmall.h>
#include <debug\db.h>
#include <Memory\mmPoolVM.h>
#include <Memory\mmPool.h>
#include <.h>
#include <Memory\mmInit.h>
#include <Memory\mmCRT.h>
#include <Memory\mmThreadLock.h>
#include <Memory\mmWriteHeap.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void MemoryManagerInitialize();
extern void MemoryManagerShutdown();
extern _HMEMPOOL *MemPoolCreate(char const *poolName, unsigned __int32 initialSize);
extern void MemPoolDestroy(_HMEMPOOL *handle);
extern char const *MemPoolName(_HMEMPOOL *handle);
extern void *MemPoolAlloc(_HMEMPOOL *handle, unsigned __int32 size);
extern void MemPoolFree(_HMEMPOOL *handle, void *pointer);
extern void MemPoolLock(_HMEMPOOL *handle);
extern void MemPoolUnlock(_HMEMPOOL *handle);
extern void MemPoolValidate(_HMEMPOOL *handle);
extern void MemPoolSize(_HMEMPOOL *handle, unsigned __int32 &allocInUse, unsigned __int32 &allocMax);
extern unsigned __int32 MemPoolCount();
extern unsigned __int32 MemPoolList(_HMEMPOOL **pools, unsigned __int32 maxlen);
extern _HMEMPOOL *MemPoolDefault();
extern void MemSize(unsigned __int32 &allocInUse, unsigned __int32 &allocMax);
extern _HMEMPOOLSHOT *MemPoolSnapshot(_HMEMPOOL *handle);
extern void MemPoolSnapshotDestroy(_HMEMPOOLSHOT *handle);
extern _HMEMPOOLWALK *MemPoolWalkFirst(_HMEMPOOLSHOT *handle, MEMBLOCKINFO &info);
extern bool MemPoolWalkNext(_HMEMPOOLWALK *handle, MEMBLOCKINFO &info);
extern void MemPoolWalkDestroy(_HMEMPOOLWALK *handle);
extern void MemCBAlloc(void (*user)(_HMEMPOOL *const &, MEMBLOCKINFO const &));
extern void *MemCRTAlloc(unsigned __int32 size, __int32 type);
extern void MemCRTFree(void *pointer, __int32 type);
extern void *MemStringAlloc(unsigned __int32 size, unsigned __int32 sizeOfOne);
extern void MemStringFree(void *pointer);
extern MEMCONVERTADDRESSRESULT MemConvertAddress(long const codeAddress, char *str);
extern void MemAddIgnoreFileLine(char const *file, unsigned long codeLine);
extern void MemRemIgnoreFileLine(char const *file, unsigned long codeLine);
extern void MemWriteLeakFile(char const *logfile);
extern void MemVMShrink();
extern __int32 MemVMMap(char const *folder);
extern void MemVMDumpPool(char const *file, char const *poolname);

_static _inline MMPoolBase *CreateMemoryPool(char const *name, unsigned __int32 initialSize);
_static _inline MMPoolBase *ConvertMemoryPool(void *p);

/* ---------- globals */

extern void (*s_usercbAlloc)(_HMEMPOOL *const &, MEMBLOCKINFO const &); // 0x1000B164

/* ---------- private variables */

_static
{
    extern MMPoolBase *s_pools; // 0x1000B158
    extern MMPoolBase *s_default; // 0x1000B15C
    extern MMPoolBase *s_string; // 0x1000B160
    extern char s_writeLeakFile[260]; // 0x1000B168
}

/* ---------- public code */

_extern void _sub_10001E90();
void MemoryManagerInitialize() // 0x10001E90
{
    mangled_assert("?MemoryManagerInitialize@@YGXXZ");
    todo("implement");
    _sub_10001E90();
}

_extern void _sub_10001ED0();
void MemoryManagerShutdown() // 0x10001ED0
{
    mangled_assert("?MemoryManagerShutdown@@YGXXZ");
    todo("implement");
    _sub_10001ED0();
}

_extern _HMEMPOOL *_sub_100012D0(char const *, unsigned __int32);
_HMEMPOOL *MemPoolCreate(char const *poolName, unsigned __int32 initialSize) // 0x100012D0
{
    mangled_assert("?MemPoolCreate@@YGPAU_HMEMPOOL@@PBDI@Z");
    todo("implement");
    _HMEMPOOL * __result = _sub_100012D0(poolName, initialSize);
    return __result;
}

_extern void _sub_10001380(_HMEMPOOL *);
void MemPoolDestroy(_HMEMPOOL *handle) // 0x10001380
{
    mangled_assert("?MemPoolDestroy@@YGXPAU_HMEMPOOL@@@Z");
    todo("implement");
    _sub_10001380(handle);
}

_extern char const *_sub_100015A0(_HMEMPOOL *);
char const *MemPoolName(_HMEMPOOL *handle) // 0x100015A0
{
    mangled_assert("?MemPoolName@@YGPBDPAU_HMEMPOOL@@@Z");
    todo("implement");
    char const * __result = _sub_100015A0(handle);
    return __result;
}

_extern void *_sub_10001200(_HMEMPOOL *, unsigned __int32);
void *MemPoolAlloc(_HMEMPOOL *handle, unsigned __int32 size) // 0x10001200
{
    mangled_assert("?MemPoolAlloc@@YGPAXPAU_HMEMPOOL@@I@Z");
    todo("implement");
    void * __result = _sub_10001200(handle, size);
    return __result;
}

_extern void _sub_10001450(_HMEMPOOL *, void *);
void MemPoolFree(_HMEMPOOL *handle, void *pointer) // 0x10001450
{
    mangled_assert("?MemPoolFree@@YGXPAU_HMEMPOOL@@PAX@Z");
    todo("implement");
    _sub_10001450(handle, pointer);
}

_extern void _sub_10001530(_HMEMPOOL *);
void MemPoolLock(_HMEMPOOL *handle) // 0x10001530
{
    mangled_assert("?MemPoolLock@@YGXPAU_HMEMPOOL@@@Z");
    todo("implement");
    _sub_10001530(handle);
}

_extern void _sub_100017C0(_HMEMPOOL *);
void MemPoolUnlock(_HMEMPOOL *handle) // 0x100017C0
{
    mangled_assert("?MemPoolUnlock@@YGXPAU_HMEMPOOL@@@Z");
    todo("implement");
    _sub_100017C0(handle);
}

_extern void _sub_10001830(_HMEMPOOL *);
void MemPoolValidate(_HMEMPOOL *handle) // 0x10001830
{
    mangled_assert("?MemPoolValidate@@YGXPAU_HMEMPOOL@@@Z");
    todo("implement");
    _sub_10001830(handle);
}

_extern void _sub_10001620(_HMEMPOOL *, unsigned __int32 &, unsigned __int32 &);
void MemPoolSize(_HMEMPOOL *handle, unsigned __int32 &allocInUse, unsigned __int32 &allocMax) // 0x10001620
{
    mangled_assert("?MemPoolSize@@YGXPAU_HMEMPOOL@@AAI1@Z");
    todo("implement");
    _sub_10001620(handle, allocInUse, allocMax);
}

_extern unsigned __int32 _sub_10001290();
unsigned __int32 MemPoolCount() // 0x10001290
{
    mangled_assert("?MemPoolCount@@YGIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_10001290();
    return __result;
}

_extern unsigned __int32 _sub_100014D0(_HMEMPOOL **, unsigned __int32);
unsigned __int32 MemPoolList(_HMEMPOOL **pools, unsigned __int32 maxlen) // 0x100014D0
{
    mangled_assert("?MemPoolList@@YGIQAPAU_HMEMPOOL@@I@Z");
    todo("implement");
    unsigned __int32 __result = _sub_100014D0(pools, maxlen);
    return __result;
}

_extern _HMEMPOOL *_sub_10001370();
_HMEMPOOL *MemPoolDefault() // 0x10001370
{
    mangled_assert("?MemPoolDefault@@YGPAU_HMEMPOOL@@XZ");
    todo("implement");
    _HMEMPOOL * __result = _sub_10001370();
    return __result;
}

_extern void _sub_10001A60(unsigned __int32 &, unsigned __int32 &);
void MemSize(unsigned __int32 &allocInUse, unsigned __int32 &allocMax) // 0x10001A60
{
    mangled_assert("?MemSize@@YGXAAI0@Z");
    todo("implement");
    _sub_10001A60(allocInUse, allocMax);
}

_extern _HMEMPOOLSHOT *_sub_100016C0(_HMEMPOOL *);
_HMEMPOOLSHOT *MemPoolSnapshot(_HMEMPOOL *handle) // 0x100016C0
{
    mangled_assert("?MemPoolSnapshot@@YGPAU_HMEMPOOLSHOT@@PAU_HMEMPOOL@@@Z");
    todo("implement");
    _HMEMPOOLSHOT * __result = _sub_100016C0(handle);
    return __result;
}

_extern void _sub_10001750(_HMEMPOOLSHOT *);
void MemPoolSnapshotDestroy(_HMEMPOOLSHOT *handle) // 0x10001750
{
    mangled_assert("?MemPoolSnapshotDestroy@@YGXPAU_HMEMPOOLSHOT@@@Z");
    todo("implement");
    _sub_10001750(handle);
}

_extern _HMEMPOOLWALK *_sub_10001910(_HMEMPOOLSHOT *, MEMBLOCKINFO &);
_HMEMPOOLWALK *MemPoolWalkFirst(_HMEMPOOLSHOT *handle, MEMBLOCKINFO &info) // 0x10001910
{
    mangled_assert("?MemPoolWalkFirst@@YGPAU_HMEMPOOLWALK@@PAU_HMEMPOOLSHOT@@AAUMEMBLOCKINFO@@@Z");
    todo("implement");
    _HMEMPOOLWALK * __result = _sub_10001910(handle, info);
    return __result;
}

_extern bool _sub_100019B0(_HMEMPOOLWALK *, MEMBLOCKINFO &);
bool MemPoolWalkNext(_HMEMPOOLWALK *handle, MEMBLOCKINFO &info) // 0x100019B0
{
    mangled_assert("?MemPoolWalkNext@@YG_NPAU_HMEMPOOLWALK@@AAUMEMBLOCKINFO@@@Z");
    todo("implement");
    bool __result = _sub_100019B0(handle, info);
    return __result;
}

_extern void _sub_100018A0(_HMEMPOOLWALK *);
void MemPoolWalkDestroy(_HMEMPOOLWALK *handle) // 0x100018A0
{
    mangled_assert("?MemPoolWalkDestroy@@YGXPAU_HMEMPOOLWALK@@@Z");
    todo("implement");
    _sub_100018A0(handle);
}

_extern void _sub_100010A0(void (*)(_HMEMPOOL *const &, MEMBLOCKINFO const &));
void MemCBAlloc(void (*user)(_HMEMPOOL *const &, MEMBLOCKINFO const &)) // 0x100010A0
{
    mangled_assert("?MemCBAlloc@@YGXP6GXABQAU_HMEMPOOL@@ABUMEMBLOCKINFO@@@Z@Z");
    todo("implement");
    _sub_100010A0(user);
}

_extern void *_sub_100010D0(unsigned __int32, __int32);
void *MemCRTAlloc(unsigned __int32 size, __int32 type) // 0x100010D0
{
    mangled_assert("?MemCRTAlloc@@YGPAXIH@Z");
    todo("implement");
    void * __result = _sub_100010D0(size, type);
    return __result;
}

_extern void _sub_10001160(void *, __int32);
void MemCRTFree(void *pointer, __int32 type) // 0x10001160
{
    mangled_assert("?MemCRTFree@@YGXPAXH@Z");
    todo("implement");
    _sub_10001160(pointer, type);
}

_extern void *_sub_10001B20(unsigned __int32, unsigned __int32);
void *MemStringAlloc(unsigned __int32 size, unsigned __int32 sizeOfOne) // 0x10001B20
{
    mangled_assert("?MemStringAlloc@@YGPAXII@Z");
    todo("implement");
    void * __result = _sub_10001B20(size, sizeOfOne);
    return __result;
}

_extern void _sub_10001BB0(void *);
void MemStringFree(void *pointer) // 0x10001BB0
{
    mangled_assert("?MemStringFree@@YGXPAX@Z");
    todo("implement");
    _sub_10001BB0(pointer);
}

_extern MEMCONVERTADDRESSRESULT _sub_100011D0(long const, char *);
MEMCONVERTADDRESSRESULT MemConvertAddress(long const codeAddress, char *str) // 0x100011D0
{
    mangled_assert("?MemConvertAddress@@YG?AW4MEMCONVERTADDRESSRESULT@@JQAD@Z");
    todo("implement");
    MEMCONVERTADDRESSRESULT __result = _sub_100011D0(codeAddress, str);
    return __result;
}

_extern void _sub_10001090(char const *, unsigned long);
void MemAddIgnoreFileLine(char const *file, unsigned long codeLine) // 0x10001090
{
    mangled_assert("?MemAddIgnoreFileLine@@YGXPBDK@Z");
    todo("implement");
    _sub_10001090(file, codeLine);
}

_extern void _sub_10001A50(char const *, unsigned long);
void MemRemIgnoreFileLine(char const *file, unsigned long codeLine) // 0x10001A50
{
    mangled_assert("?MemRemIgnoreFileLine@@YGXPBDK@Z");
    todo("implement");
    _sub_10001A50(file, codeLine);
}

_extern void _sub_10001E40(char const *);
void MemWriteLeakFile(char const *logfile) // 0x10001E40
{
    mangled_assert("?MemWriteLeakFile@@YGXPBD@Z");
    todo("implement");
    _sub_10001E40(logfile);
}

_extern void _sub_10001E30();
void MemVMShrink() // 0x10001E30
{
    mangled_assert("?MemVMShrink@@YGXXZ");
    todo("implement");
    _sub_10001E30();
}

_extern __int32 _sub_10001CF0(char const *);
__int32 MemVMMap(char const *folder) // 0x10001CF0
{
    mangled_assert("?MemVMMap@@YGHPBD@Z");
    todo("implement");
    __int32 __result = _sub_10001CF0(folder);
    return __result;
}

_extern void _sub_10001C20(char const *, char const *);
void MemVMDumpPool(char const *file, char const *poolname) // 0x10001C20
{
    mangled_assert("?MemVMDumpPool@@YGXPBD0@Z");
    todo("implement");
    _sub_10001C20(file, poolname);
}

/* ---------- private code */

_extern MMPoolBase *_sub_10001060(char const *, unsigned __int32);
_static _inline MMPoolBase *CreateMemoryPool(char const *name, unsigned __int32 initialSize) // 0x10001060
{
    mangled_assert("CreateMemoryPool");
    todo("implement");
    MMPoolBase * __result = _sub_10001060(name, initialSize);
    return __result;
}

_extern MMPoolBase *_sub_10001040(void *);
_static _inline MMPoolBase *ConvertMemoryPool(void *p) // 0x10001040
{
    mangled_assert("ConvertMemoryPool");
    todo("implement");
    MMPoolBase * __result = _sub_10001040(p);
    return __result;
}
#endif
