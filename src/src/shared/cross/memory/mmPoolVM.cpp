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

MMPoolVM::MMPoolVM(char const *) // 0x100055D0
{
    mangled_assert("??0MMPoolVM@@AAE@PBD@Z");
    todo("implement");
}

MMPoolVM::~MMPoolVM() // 0x10005660
{
    mangled_assert("??1MMPoolVM@@EAE@XZ");
    todo("implement");
}

void MMPoolVM::ClassInitialize() // 0x100057B0
{
    mangled_assert("?ClassInitialize@MMPoolVM@@SGXXZ");
    todo("implement");
}

void MMPoolVM::ClassShutdown() // 0x10005820
{
    mangled_assert("?ClassShutdown@MMPoolVM@@SGXXZ");
    todo("implement");
}

MMPoolVM *MMPoolVM::Create(char const *name, unsigned __int32 p) // 0x10005880
{
    mangled_assert("?Create@MMPoolVM@@SGPAV1@PBDI@Z");
    todo("implement");
}

MMPoolVM *MMPoolVM::ConvertTo(void *p) // 0x10005860
{
    mangled_assert("?ConvertTo@MMPoolVM@@SGPAV1@PAX@Z");
    todo("implement");
}

unsigned __int32 MMPoolVM::GetMemorySize() const // 0x100059F0
{
    mangled_assert("?GetMemorySize@MMPoolVM@@UBEIXZ");
    todo("implement");
}

unsigned __int32 MMPoolVM::GetMemorySizeMax() const // 0x10005A00
{
    mangled_assert("?GetMemorySizeMax@MMPoolVM@@UBEIXZ");
    todo("implement");
}

unsigned __int32 MMPoolVM::GetAlloc() const // 0x100059D0
{
    mangled_assert("?GetAlloc@MMPoolVM@@UBEIXZ");
    todo("implement");
}

unsigned __int32 MMPoolVM::GetAllocMax() const // 0x100059E0
{
    mangled_assert("?GetAllocMax@MMPoolVM@@UBEIXZ");
    todo("implement");
}

void MMPoolVM::Lock() // 0x10005CB0
{
    mangled_assert("?Lock@MMPoolVM@@UAEXXZ");
    todo("implement");
}

void MMPoolVM::Unlock() // 0x10006130
{
    mangled_assert("?Unlock@MMPoolVM@@UAEXXZ");
    todo("implement");
}

void MMPoolVM::Validate() // 0x10006140
{
    mangled_assert("?Validate@MMPoolVM@@UAEXXZ");
    todo("implement");
}

void *MMPoolVM::Alloc(unsigned __int32, MEMBLOCKTYPE, void (*)(_HMEMPOOL *const &, MEMBLOCKINFO const &)) // 0x10005780
{
    mangled_assert("?Alloc@MMPoolVM@@UAEPAXIW4MEMBLOCKTYPE@@P6GXABQAU_HMEMPOOL@@ABUMEMBLOCKINFO@@@Z@Z");
    todo("implement");
}

void MMPoolVM::Free(void *, MEMFREETYPE) // 0x100059B0
{
    mangled_assert("?Free@MMPoolVM@@UAEXPAXW4MEMFREETYPE@@@Z");
    todo("implement");
}

bool MMPoolVM::AllocExist(MEMBLOCKINFO const &) // 0x100057A0
{
    mangled_assert("?AllocExist@MMPoolVM@@UAE_NABUMEMBLOCKINFO@@@Z");
    todo("implement");
}

void MMPoolVM::Destroy() // 0x10005910
{
    mangled_assert("?Destroy@MMPoolVM@@UAEXXZ");
    todo("implement");
}

MMPoolVM::Internals::Internals() // 0x10005580
{
    mangled_assert("??0Internals@MMPoolVM@@AAE@XZ");
    todo("implement");
}

MMPoolVM::Internals::~Internals() // 0x10005610
{
    mangled_assert("??1Internals@MMPoolVM@@AAE@XZ");
    todo("implement");
}

void *MMPoolVM::Internals::Alloc(unsigned __int32, MEMBLOCKTYPE, void (*)(_HMEMPOOL *const &, MEMBLOCKINFO const &)) // 0x100056D0
{
    mangled_assert("?Alloc@Internals@MMPoolVM@@QAEPAXIW4MEMBLOCKTYPE@@P6GXABQAU_HMEMPOOL@@ABUMEMBLOCKINFO@@@Z@Z");
    todo("implement");
}

void *MMPoolVM::Internals::LargeAlloc(unsigned __int32, MEMBLOCKTYPE) // 0x10005A60
{
    mangled_assert("?LargeAlloc@Internals@MMPoolVM@@AAEPAXIW4MEMBLOCKTYPE@@@Z");
    todo("implement");
}

void MMPoolVM::Internals::Free(void *, MEMFREETYPE) // 0x10005930
{
    mangled_assert("?Free@Internals@MMPoolVM@@QAEXPAXW4MEMFREETYPE@@@Z");
    todo("implement");
}

void MMPoolVM::Internals::LargeFree(void *, MMPoolVM::Internals::Header *, MEMFREETYPE) // 0x10005B40
{
    mangled_assert("?LargeFree@Internals@MMPoolVM@@AAEXPAXPAUHeader@12@W4MEMFREETYPE@@@Z");
    todo("implement");
}

void MMPoolVM::Internals::SmallNewRegion() // 0x10005EB0
{
    mangled_assert("?SmallNewRegion@Internals@MMPoolVM@@AAEXXZ");
    todo("implement");
}

void *MMPoolVM::Internals::SmallAlloc(unsigned __int32, MEMBLOCKTYPE) // 0x10005CC0
{
    mangled_assert("?SmallAlloc@Internals@MMPoolVM@@AAEPAXIW4MEMBLOCKTYPE@@@Z");
    todo("implement");
}

void MMPoolVM::Internals::SmallFree(void *, MMPoolVM::Internals::Header *, MEMFREETYPE) // 0x10005E20
{
    mangled_assert("?SmallFree@Internals@MMPoolVM@@AAEXPAXPAUHeader@12@W4MEMFREETYPE@@@Z");
    todo("implement");
}

unsigned __int32 MMPoolVM::Internals::LargeORaw(unsigned __int32, MMPoolVM::Internals::HeaderLarge *&, void *&) // 0x10005BA0
{
    mangled_assert("?LargeORaw@Internals@MMPoolVM@@AAEIIAAPAUHeaderLarge@12@AAPAX@Z");
    todo("implement");
}

unsigned __int32 MMPoolVM::Internals::LargeURaw(unsigned __int32, MMPoolVM::Internals::HeaderLarge *&, void *&) // 0x10005C40
{
    mangled_assert("?LargeURaw@Internals@MMPoolVM@@AAEIIAAPAUHeaderLarge@12@AAPAX@Z");
    todo("implement");
}

void MMPoolVM::Internals::LargeOLock(MMPoolVM::Internals::HeaderLarge *, void *) // 0x10005B70
{
    mangled_assert("?LargeOLock@Internals@MMPoolVM@@AAEXPAUHeaderLarge@12@PAX@Z");
    todo("implement");
}

void MMPoolVM::Internals::LargeULock(MMPoolVM::Internals::HeaderLarge *, void *) // 0x10005C10
{
    mangled_assert("?LargeULock@Internals@MMPoolVM@@AAEXPAUHeaderLarge@12@PAX@Z");
    todo("implement");
}

void MMPoolVM::Internals::GetOType(MMPoolVM::Internals::Header *&, void *) // 0x10005A10
{
    mangled_assert("?GetOType@Internals@MMPoolVM@@AAEXAAPAUHeader@12@PAX@Z");
    todo("implement");
}

void MMPoolVM::Internals::GetUType(MMPoolVM::Internals::Header *&, void *) // 0x10005A40
{
    mangled_assert("?GetUType@Internals@MMPoolVM@@AAEXAAPAUHeader@12@PAX@Z");
    todo("implement");
}

void MMPoolVM::Internals::LargeORel(void *, MMPoolVM::Internals::HeaderLarge *) // 0x10005BF0
{
    mangled_assert("?LargeORel@Internals@MMPoolVM@@AAEXPAXPAUHeaderLarge@12@@Z");
    todo("implement");
}

void MMPoolVM::Internals::LargeURel(void *, MMPoolVM::Internals::HeaderLarge *) // 0x10005C90
{
    mangled_assert("?LargeURel@Internals@MMPoolVM@@AAEXPAXPAUHeaderLarge@12@@Z");
    todo("implement");
}

void MMPoolVM::Internals::SmallORel(MMPoolVM::Internals::HeaderSmallFree *&, void *, MMPoolVM::Internals::HeaderSmallInUse *) // 0x10006080
{
    mangled_assert("?SmallORel@Internals@MMPoolVM@@AAEXAAPAUHeaderSmallFree@12@PAXPAUHeaderSmallInUse@12@@Z");
    todo("implement");
}

void MMPoolVM::Internals::SmallURel(MMPoolVM::Internals::HeaderSmallFree *&, void *, MMPoolVM::Internals::HeaderSmallInUse *) // 0x10006100
{
    mangled_assert("?SmallURel@Internals@MMPoolVM@@AAEXAAPAUHeaderSmallFree@12@PAXPAUHeaderSmallInUse@12@@Z");
    todo("implement");
}

void MMPoolVM::Internals::SmallORaw(MMPoolVM::Internals::HeaderSmallFree *, unsigned __int32, MMPoolVM::Internals::HeaderSmallInUse *&, void *&) // 0x10006040
{
    mangled_assert("?SmallORaw@Internals@MMPoolVM@@AAEXPAUHeaderSmallFree@12@IAAPAUHeaderSmallInUse@12@AAPAX@Z");
    todo("implement");
}

void MMPoolVM::Internals::SmallURaw(MMPoolVM::Internals::HeaderSmallFree *, unsigned __int32, MMPoolVM::Internals::HeaderSmallInUse *&, void *&) // 0x100060C0
{
    mangled_assert("?SmallURaw@Internals@MMPoolVM@@AAEXPAUHeaderSmallFree@12@IAAPAUHeaderSmallInUse@12@AAPAX@Z");
    todo("implement");
}

void MMPoolVM::Internals::SmallOLock(MMPoolVM::Internals::HeaderSmallInUse *, void *) // 0x10006010
{
    mangled_assert("?SmallOLock@Internals@MMPoolVM@@AAEXPAUHeaderSmallInUse@12@PAX@Z");
    todo("implement");
}

void MMPoolVM::Internals::SmallULock(MMPoolVM::Internals::HeaderSmallInUse *, void *) // 0x10006090
{
    mangled_assert("?SmallULock@Internals@MMPoolVM@@AAEXPAUHeaderSmallInUse@12@PAX@Z");
    todo("implement");
}

/* ---------- private code */
#endif
