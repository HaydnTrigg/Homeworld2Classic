#if 0
/* ---------- headers */

#include "decomp.h"
#include <Memory\Memorylib.h>
#include <new>
#include <Memory\mmCRT.h>
#include <debug\ctassert.h>
#include <.h>
#include <Memory\mmPoolVM.h>
#include <Memory\mmPool.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern unsigned long const MMPoolVM::MAGIC; // 0x100084B0
extern MMPoolVM::Internals *MMPoolVM::Internals::s_instance; // 0x1000B2A4

/* ---------- private variables */

_static
{
    extern void *s_REGIONHEAP; // 0x1000B2A8
}

/* ---------- public code */

_extern _sub_100055D0(MMPoolVM *const, char const *);
MMPoolVM::MMPoolVM(char const *) // 0x100055D0
{
    mangled_assert("??0MMPoolVM@@AAE@PBD@Z");
    todo("implement");
    _sub_100055D0(this, arg);
}

_extern void _sub_10005660(MMPoolVM *const);
MMPoolVM::~MMPoolVM() // 0x10005660
{
    mangled_assert("??1MMPoolVM@@EAE@XZ");
    todo("implement");
    _sub_10005660(this);
}

_extern void _sub_100057B0();
void MMPoolVM::ClassInitialize() // 0x100057B0
{
    mangled_assert("?ClassInitialize@MMPoolVM@@SGXXZ");
    todo("implement");
    _sub_100057B0();
}

_extern void _sub_10005820();
void MMPoolVM::ClassShutdown() // 0x10005820
{
    mangled_assert("?ClassShutdown@MMPoolVM@@SGXXZ");
    todo("implement");
    _sub_10005820();
}

_extern MMPoolVM *_sub_10005880(char const *, unsigned __int32);
MMPoolVM *MMPoolVM::Create(char const *name, unsigned __int32 p) // 0x10005880
{
    mangled_assert("?Create@MMPoolVM@@SGPAV1@PBDI@Z");
    todo("implement");
    MMPoolVM * __result = _sub_10005880(name, p);
    return __result;
}

_extern MMPoolVM *_sub_10005860(void *);
MMPoolVM *MMPoolVM::ConvertTo(void *p) // 0x10005860
{
    mangled_assert("?ConvertTo@MMPoolVM@@SGPAV1@PAX@Z");
    todo("implement");
    MMPoolVM * __result = _sub_10005860(p);
    return __result;
}

_extern unsigned __int32 _sub_100059F0(MMPoolVM const *const);
unsigned __int32 MMPoolVM::GetMemorySize() const // 0x100059F0
{
    mangled_assert("?GetMemorySize@MMPoolVM@@UBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_100059F0(this);
    return __result;
}

_extern unsigned __int32 _sub_10005A00(MMPoolVM const *const);
unsigned __int32 MMPoolVM::GetMemorySizeMax() const // 0x10005A00
{
    mangled_assert("?GetMemorySizeMax@MMPoolVM@@UBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_10005A00(this);
    return __result;
}

_extern unsigned __int32 _sub_100059D0(MMPoolVM const *const);
unsigned __int32 MMPoolVM::GetAlloc() const // 0x100059D0
{
    mangled_assert("?GetAlloc@MMPoolVM@@UBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_100059D0(this);
    return __result;
}

_extern unsigned __int32 _sub_100059E0(MMPoolVM const *const);
unsigned __int32 MMPoolVM::GetAllocMax() const // 0x100059E0
{
    mangled_assert("?GetAllocMax@MMPoolVM@@UBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_100059E0(this);
    return __result;
}

_extern void _sub_10005CB0(MMPoolVM *const);
void MMPoolVM::Lock() // 0x10005CB0
{
    mangled_assert("?Lock@MMPoolVM@@UAEXXZ");
    todo("implement");
    _sub_10005CB0(this);
}

_extern void _sub_10006130(MMPoolVM *const);
void MMPoolVM::Unlock() // 0x10006130
{
    mangled_assert("?Unlock@MMPoolVM@@UAEXXZ");
    todo("implement");
    _sub_10006130(this);
}

_extern void _sub_10006140(MMPoolVM *const);
void MMPoolVM::Validate() // 0x10006140
{
    mangled_assert("?Validate@MMPoolVM@@UAEXXZ");
    todo("implement");
    _sub_10006140(this);
}

_extern void *_sub_10005780(MMPoolVM *const, unsigned __int32, MEMBLOCKTYPE, void (*)(_HMEMPOOL *const &, MEMBLOCKINFO const &));
void *MMPoolVM::Alloc(unsigned __int32, MEMBLOCKTYPE, void (*)(_HMEMPOOL *const &, MEMBLOCKINFO const &)) // 0x10005780
{
    mangled_assert("?Alloc@MMPoolVM@@UAEPAXIW4MEMBLOCKTYPE@@P6GXABQAU_HMEMPOOL@@ABUMEMBLOCKINFO@@@Z@Z");
    todo("implement");
    void * __result = _sub_10005780(this, arg, arg, arg);
    return __result;
}

_extern void _sub_100059B0(MMPoolVM *const, void *, MEMFREETYPE);
void MMPoolVM::Free(void *, MEMFREETYPE) // 0x100059B0
{
    mangled_assert("?Free@MMPoolVM@@UAEXPAXW4MEMFREETYPE@@@Z");
    todo("implement");
    _sub_100059B0(this, arg, arg);
}

_extern bool _sub_100057A0(MMPoolVM *const, MEMBLOCKINFO const &);
bool MMPoolVM::AllocExist(MEMBLOCKINFO const &) // 0x100057A0
{
    mangled_assert("?AllocExist@MMPoolVM@@UAE_NABUMEMBLOCKINFO@@@Z");
    todo("implement");
    bool __result = _sub_100057A0(this, arg);
    return __result;
}

_extern void _sub_10005910(MMPoolVM *const);
void MMPoolVM::Destroy() // 0x10005910
{
    mangled_assert("?Destroy@MMPoolVM@@UAEXXZ");
    todo("implement");
    _sub_10005910(this);
}

_extern _sub_10005580(MMPoolVM::Internals *const);
MMPoolVM::Internals::Internals() // 0x10005580
{
    mangled_assert("??0Internals@MMPoolVM@@AAE@XZ");
    todo("implement");
    _sub_10005580(this);
}

_extern void _sub_10005610(MMPoolVM::Internals *const);
MMPoolVM::Internals::~Internals() // 0x10005610
{
    mangled_assert("??1Internals@MMPoolVM@@AAE@XZ");
    todo("implement");
    _sub_10005610(this);
}

_extern void *_sub_100056D0(MMPoolVM::Internals *const, unsigned __int32, MEMBLOCKTYPE, void (*)(_HMEMPOOL *const &, MEMBLOCKINFO const &));
void *MMPoolVM::Internals::Alloc(unsigned __int32, MEMBLOCKTYPE, void (*)(_HMEMPOOL *const &, MEMBLOCKINFO const &)) // 0x100056D0
{
    mangled_assert("?Alloc@Internals@MMPoolVM@@QAEPAXIW4MEMBLOCKTYPE@@P6GXABQAU_HMEMPOOL@@ABUMEMBLOCKINFO@@@Z@Z");
    todo("implement");
    void * __result = _sub_100056D0(this, arg, arg, arg);
    return __result;
}

_extern void *_sub_10005A60(MMPoolVM::Internals *const, unsigned __int32, MEMBLOCKTYPE);
void *MMPoolVM::Internals::LargeAlloc(unsigned __int32, MEMBLOCKTYPE) // 0x10005A60
{
    mangled_assert("?LargeAlloc@Internals@MMPoolVM@@AAEPAXIW4MEMBLOCKTYPE@@@Z");
    todo("implement");
    void * __result = _sub_10005A60(this, arg, arg);
    return __result;
}

_extern void _sub_10005930(MMPoolVM::Internals *const, void *, MEMFREETYPE);
void MMPoolVM::Internals::Free(void *, MEMFREETYPE) // 0x10005930
{
    mangled_assert("?Free@Internals@MMPoolVM@@QAEXPAXW4MEMFREETYPE@@@Z");
    todo("implement");
    _sub_10005930(this, arg, arg);
}

_extern void _sub_10005B40(MMPoolVM::Internals *const, void *, MMPoolVM::Internals::Header *, MEMFREETYPE);
void MMPoolVM::Internals::LargeFree(void *, MMPoolVM::Internals::Header *, MEMFREETYPE) // 0x10005B40
{
    mangled_assert("?LargeFree@Internals@MMPoolVM@@AAEXPAXPAUHeader@12@W4MEMFREETYPE@@@Z");
    todo("implement");
    _sub_10005B40(this, arg, arg, arg);
}

_extern void _sub_10005EB0(MMPoolVM::Internals *const);
void MMPoolVM::Internals::SmallNewRegion() // 0x10005EB0
{
    mangled_assert("?SmallNewRegion@Internals@MMPoolVM@@AAEXXZ");
    todo("implement");
    _sub_10005EB0(this);
}

_extern void *_sub_10005CC0(MMPoolVM::Internals *const, unsigned __int32, MEMBLOCKTYPE);
void *MMPoolVM::Internals::SmallAlloc(unsigned __int32, MEMBLOCKTYPE) // 0x10005CC0
{
    mangled_assert("?SmallAlloc@Internals@MMPoolVM@@AAEPAXIW4MEMBLOCKTYPE@@@Z");
    todo("implement");
    void * __result = _sub_10005CC0(this, arg, arg);
    return __result;
}

_extern void _sub_10005E20(MMPoolVM::Internals *const, void *, MMPoolVM::Internals::Header *, MEMFREETYPE);
void MMPoolVM::Internals::SmallFree(void *, MMPoolVM::Internals::Header *, MEMFREETYPE) // 0x10005E20
{
    mangled_assert("?SmallFree@Internals@MMPoolVM@@AAEXPAXPAUHeader@12@W4MEMFREETYPE@@@Z");
    todo("implement");
    _sub_10005E20(this, arg, arg, arg);
}

_extern unsigned __int32 _sub_10005BA0(MMPoolVM::Internals *const, unsigned __int32, MMPoolVM::Internals::HeaderLarge *&, void *&);
unsigned __int32 MMPoolVM::Internals::LargeORaw(unsigned __int32, MMPoolVM::Internals::HeaderLarge *&, void *&) // 0x10005BA0
{
    mangled_assert("?LargeORaw@Internals@MMPoolVM@@AAEIIAAPAUHeaderLarge@12@AAPAX@Z");
    todo("implement");
    unsigned __int32 __result = _sub_10005BA0(this, arg, arg, arg);
    return __result;
}

_extern unsigned __int32 _sub_10005C40(MMPoolVM::Internals *const, unsigned __int32, MMPoolVM::Internals::HeaderLarge *&, void *&);
unsigned __int32 MMPoolVM::Internals::LargeURaw(unsigned __int32, MMPoolVM::Internals::HeaderLarge *&, void *&) // 0x10005C40
{
    mangled_assert("?LargeURaw@Internals@MMPoolVM@@AAEIIAAPAUHeaderLarge@12@AAPAX@Z");
    todo("implement");
    unsigned __int32 __result = _sub_10005C40(this, arg, arg, arg);
    return __result;
}

_extern void _sub_10005B70(MMPoolVM::Internals *const, MMPoolVM::Internals::HeaderLarge *, void *);
void MMPoolVM::Internals::LargeOLock(MMPoolVM::Internals::HeaderLarge *, void *) // 0x10005B70
{
    mangled_assert("?LargeOLock@Internals@MMPoolVM@@AAEXPAUHeaderLarge@12@PAX@Z");
    todo("implement");
    _sub_10005B70(this, arg, arg);
}

_extern void _sub_10005C10(MMPoolVM::Internals *const, MMPoolVM::Internals::HeaderLarge *, void *);
void MMPoolVM::Internals::LargeULock(MMPoolVM::Internals::HeaderLarge *, void *) // 0x10005C10
{
    mangled_assert("?LargeULock@Internals@MMPoolVM@@AAEXPAUHeaderLarge@12@PAX@Z");
    todo("implement");
    _sub_10005C10(this, arg, arg);
}

_extern void _sub_10005A10(MMPoolVM::Internals *const, MMPoolVM::Internals::Header *&, void *);
void MMPoolVM::Internals::GetOType(MMPoolVM::Internals::Header *&, void *) // 0x10005A10
{
    mangled_assert("?GetOType@Internals@MMPoolVM@@AAEXAAPAUHeader@12@PAX@Z");
    todo("implement");
    _sub_10005A10(this, arg, arg);
}

_extern void _sub_10005A40(MMPoolVM::Internals *const, MMPoolVM::Internals::Header *&, void *);
void MMPoolVM::Internals::GetUType(MMPoolVM::Internals::Header *&, void *) // 0x10005A40
{
    mangled_assert("?GetUType@Internals@MMPoolVM@@AAEXAAPAUHeader@12@PAX@Z");
    todo("implement");
    _sub_10005A40(this, arg, arg);
}

_extern void _sub_10005BF0(MMPoolVM::Internals *const, void *, MMPoolVM::Internals::HeaderLarge *);
void MMPoolVM::Internals::LargeORel(void *, MMPoolVM::Internals::HeaderLarge *) // 0x10005BF0
{
    mangled_assert("?LargeORel@Internals@MMPoolVM@@AAEXPAXPAUHeaderLarge@12@@Z");
    todo("implement");
    _sub_10005BF0(this, arg, arg);
}

_extern void _sub_10005C90(MMPoolVM::Internals *const, void *, MMPoolVM::Internals::HeaderLarge *);
void MMPoolVM::Internals::LargeURel(void *, MMPoolVM::Internals::HeaderLarge *) // 0x10005C90
{
    mangled_assert("?LargeURel@Internals@MMPoolVM@@AAEXPAXPAUHeaderLarge@12@@Z");
    todo("implement");
    _sub_10005C90(this, arg, arg);
}

_extern void _sub_10006080(MMPoolVM::Internals *const, MMPoolVM::Internals::HeaderSmallFree *&, void *, MMPoolVM::Internals::HeaderSmallInUse *);
void MMPoolVM::Internals::SmallORel(MMPoolVM::Internals::HeaderSmallFree *&, void *, MMPoolVM::Internals::HeaderSmallInUse *) // 0x10006080
{
    mangled_assert("?SmallORel@Internals@MMPoolVM@@AAEXAAPAUHeaderSmallFree@12@PAXPAUHeaderSmallInUse@12@@Z");
    todo("implement");
    _sub_10006080(this, arg, arg, arg);
}

_extern void _sub_10006100(MMPoolVM::Internals *const, MMPoolVM::Internals::HeaderSmallFree *&, void *, MMPoolVM::Internals::HeaderSmallInUse *);
void MMPoolVM::Internals::SmallURel(MMPoolVM::Internals::HeaderSmallFree *&, void *, MMPoolVM::Internals::HeaderSmallInUse *) // 0x10006100
{
    mangled_assert("?SmallURel@Internals@MMPoolVM@@AAEXAAPAUHeaderSmallFree@12@PAXPAUHeaderSmallInUse@12@@Z");
    todo("implement");
    _sub_10006100(this, arg, arg, arg);
}

_extern void _sub_10006040(MMPoolVM::Internals *const, MMPoolVM::Internals::HeaderSmallFree *, unsigned __int32, MMPoolVM::Internals::HeaderSmallInUse *&, void *&);
void MMPoolVM::Internals::SmallORaw(MMPoolVM::Internals::HeaderSmallFree *, unsigned __int32, MMPoolVM::Internals::HeaderSmallInUse *&, void *&) // 0x10006040
{
    mangled_assert("?SmallORaw@Internals@MMPoolVM@@AAEXPAUHeaderSmallFree@12@IAAPAUHeaderSmallInUse@12@AAPAX@Z");
    todo("implement");
    _sub_10006040(this, arg, arg, arg, arg);
}

_extern void _sub_100060C0(MMPoolVM::Internals *const, MMPoolVM::Internals::HeaderSmallFree *, unsigned __int32, MMPoolVM::Internals::HeaderSmallInUse *&, void *&);
void MMPoolVM::Internals::SmallURaw(MMPoolVM::Internals::HeaderSmallFree *, unsigned __int32, MMPoolVM::Internals::HeaderSmallInUse *&, void *&) // 0x100060C0
{
    mangled_assert("?SmallURaw@Internals@MMPoolVM@@AAEXPAUHeaderSmallFree@12@IAAPAUHeaderSmallInUse@12@AAPAX@Z");
    todo("implement");
    _sub_100060C0(this, arg, arg, arg, arg);
}

_extern void _sub_10006010(MMPoolVM::Internals *const, MMPoolVM::Internals::HeaderSmallInUse *, void *);
void MMPoolVM::Internals::SmallOLock(MMPoolVM::Internals::HeaderSmallInUse *, void *) // 0x10006010
{
    mangled_assert("?SmallOLock@Internals@MMPoolVM@@AAEXPAUHeaderSmallInUse@12@PAX@Z");
    todo("implement");
    _sub_10006010(this, arg, arg);
}

_extern void _sub_10006090(MMPoolVM::Internals *const, MMPoolVM::Internals::HeaderSmallInUse *, void *);
void MMPoolVM::Internals::SmallULock(MMPoolVM::Internals::HeaderSmallInUse *, void *) // 0x10006090
{
    mangled_assert("?SmallULock@Internals@MMPoolVM@@AAEXPAUHeaderSmallInUse@12@PAX@Z");
    todo("implement");
    _sub_10006090(this, arg, arg);
}

/* ---------- private code */
#endif
