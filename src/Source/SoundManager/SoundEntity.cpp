#if 0
/* ---------- headers */

#include "decomp.h"
#include <memory\memorylib.h>
#include <crtdefs.h>
#include <boost\scoped_ptr.hpp>
#include <assert.h>
#include <vector>
#include <seInterface2\sedefinesshared.h>
#include <new>
#include <xmemory>
#include <xmemory0>
#include <assist\stlexvector.h>
#include <xstddef>
#include <memory\mmfixedpool.h>
#include <boost\static_assert.hpp>
#include <type_traits>
#include <xstring>
#include <xutility>
#include <iosfwd>
#include <boost\config.hpp>
#include <algorithm>
#include <SoundManager\pch.h>
#include <SoundManager\SoundEntity.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\seinterfacefunc.h>
#include <Mathlib\vector3.h>
#include <util\types.h>
#include <math.h>
#include <boost\checked_delete.hpp>
#include <SoundManager\SoundEntityHandle.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SampleID.h>
#include <seInterface2\SoundParams.h>
#include <seInterface2\SampleBase.h>
#include <boost\noncopyable.hpp>
#include <SoundManager\HW2Patch.h>

/* ---------- constants */

/* ---------- definitions */

struct SoundEntityListEntryLess :
    public std::binary_function<SoundEntityList::Entry *,SoundEntityList::Entry *,bool>
{
    bool operator()(SoundEntityList::Entry const *, SoundEntityList::Entry const *) const;
};
static_assert(sizeof(SoundEntityListEntryLess) == 1, "Invalid SoundEntityListEntryLess size");

typedef std::vector<SoundEntityList::Entry *,std::allocator<SoundEntityList::Entry *> > SEList;

/* ---------- prototypes */

extern _inline float IsValidPos(vector3 const &pos);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern FixedSizeObjAllocator<SoundEntityList::Entry,64> s_SoundEntityListEntryAllocator; // 0x84CB3C
}

/* ---------- public code */

_extern bool _sub_6CF491(SoundEntityListEntryLess const *const, SoundEntityList::Entry const *, SoundEntityList::Entry const *);
_inline bool SoundEntityListEntryLess::operator()(SoundEntityList::Entry const *, SoundEntityList::Entry const *) const // 0x6CF491
{
    mangled_assert("??RSoundEntityListEntryLess@@QBE_NPBUEntry@SoundEntityList@@0@Z");
    todo("implement");
    bool __result = _sub_6CF491(this, arg, arg);
    return __result;
}

_extern void *_sub_6CF408(unsigned __int32);
void *SoundEntityList::Entry::operator new(unsigned __int32 size) // 0x6CF408
{
    mangled_assert("??2Entry@SoundEntityList@@SGPAXI@Z");
    todo("implement");
    void * __result = _sub_6CF408(size);
    return __result;
}

_extern void _sub_6CF415(void *, unsigned __int32);
void SoundEntityList::Entry::operator delete(void *p, unsigned __int32 size) // 0x6CF415
{
    mangled_assert("??3Entry@SoundEntityList@@SGXPAXI@Z");
    todo("implement");
    _sub_6CF415(p, size);
}

_extern float _sub_6CF7D2(vector3 const &);
_inline float IsValidPos(vector3 const &pos) // 0x6CF7D2
{
    mangled_assert("?IsValidPos@@YGMABVvector3@@@Z");
    todo("implement");
    float __result = _sub_6CF7D2(pos);
    return __result;
}

_extern _sub_6CF260(SoundEntityList::Entry *const);
_inline SoundEntityList::Entry::Entry() // 0x6CF260
{
    mangled_assert("??0Entry@SoundEntityList@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6CF260(this);
}

_extern _sub_6CF26C(SoundEntityList::Memory *const);
SoundEntityList::Memory::Memory() // 0x6CF26C
{
    mangled_assert("??0Memory@SoundEntityList@@QAE@XZ");
    todo("implement");
    _sub_6CF26C(this);
}

_extern void _sub_6CF393(SoundEntityList::Memory *const);
SoundEntityList::Memory::~Memory() // 0x6CF393
{
    mangled_assert("??1Memory@SoundEntityList@@QAE@XZ");
    todo("implement");
    _sub_6CF393(this);
}

_extern SoundEntityList::Entry *_sub_6CF797(SoundEntityList::Memory *const, SoundEntityHandle const &);
_inline SoundEntityList::Entry *SoundEntityList::Memory::HandleToPtr(SoundEntityHandle const &) // 0x6CF797
{
    mangled_assert("?HandleToPtr@Memory@SoundEntityList@@QAEPAUEntry@2@ABVSoundEntityHandle@@@Z");
    todo("implement");
    SoundEntityList::Entry * __result = _sub_6CF797(this, arg);
    return __result;
}

_extern SoundEntityList::Entry *_sub_6CF7B4(SoundEntityList::Memory *const, SoundEntityHandle const &);
_inline SoundEntityList::Entry *SoundEntityList::Memory::HandleToPtrFast(SoundEntityHandle const &) // 0x6CF7B4
{
    mangled_assert("?HandleToPtrFast@Memory@SoundEntityList@@QAEPAUEntry@2@ABVSoundEntityHandle@@@Z");
    todo("implement");
    SoundEntityList::Entry * __result = _sub_6CF7B4(this, arg);
    return __result;
}

_extern SoundEntityHandle _sub_6CF5BC(SoundEntityList::Memory *const);
SoundEntityHandle SoundEntityList::Memory::Alloc() // 0x6CF5BC
{
    mangled_assert("?Alloc@Memory@SoundEntityList@@QAE?AVSoundEntityHandle@@XZ");
    todo("implement");
    SoundEntityHandle __result = _sub_6CF5BC(this);
    return __result;
}

_extern void _sub_6CF85D(SoundEntityList::Memory *const, SoundEntityHandle const &);
void SoundEntityList::Memory::Release(SoundEntityHandle const &) // 0x6CF85D
{
    mangled_assert("?Release@Memory@SoundEntityList@@QAEXABVSoundEntityHandle@@@Z");
    todo("implement");
    _sub_6CF85D(this, arg);
}

_extern bool _sub_6CF732(SoundEntityList::Memory const *const, SoundEntityHandle);
bool SoundEntityList::Memory::HandleInUse(SoundEntityHandle) const // 0x6CF732
{
    mangled_assert("?HandleInUse@Memory@SoundEntityList@@QBE_NVSoundEntityHandle@@@Z");
    todo("implement");
    bool __result = _sub_6CF732(this, arg);
    return __result;
}

_extern void _sub_6CF9CE(SoundEntity *const, vector3 const &);
void SoundEntity::SetPos(vector3 const &) // 0x6CF9CE
{
    mangled_assert("?SetPos@SoundEntity@@QAEXABVvector3@@@Z");
    todo("implement");
    _sub_6CF9CE(this, arg);
}

_extern void _sub_6CF97C(SoundEntity *const, vector3 const &);
void SoundEntity::SetLastPos(vector3 const &) // 0x6CF97C
{
    mangled_assert("?SetLastPos@SoundEntity@@QAEXABVvector3@@@Z");
    todo("implement");
    _sub_6CF97C(this, arg);
}

_extern _sub_6CF2BF(SoundEntityList *const);
SoundEntityList::SoundEntityList() // 0x6CF2BF
{
    mangled_assert("??0SoundEntityList@@QAE@XZ");
    todo("implement");
    _sub_6CF2BF(this);
}

_extern void _sub_6CF38B(SoundEntityList::Entry *const);
_inline SoundEntityList::Entry::~Entry() // 0x6CF38B
{
    mangled_assert("??1Entry@SoundEntityList@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6CF38B(this);
}

_extern void _sub_6CF3C7(SoundEntityList *const);
SoundEntityList::~SoundEntityList() // 0x6CF3C7
{
    mangled_assert("??1SoundEntityList@@QAE@XZ");
    todo("implement");
    _sub_6CF3C7(this);
}

_extern void _sub_6CF7D7(SoundEntityList *const, SoundEntityList::Entry &, float);
void SoundEntityList::Play(SoundEntityList::Entry &, float) // 0x6CF7D7
{
    mangled_assert("?Play@SoundEntityList@@AAEXAAUEntry@1@M@Z");
    todo("implement");
    _sub_6CF7D7(this, arg, arg);
}

_extern void _sub_6CFAC2(SoundEntityList *const, SoundEntityList::Entry &, bool);
void SoundEntityList::Stop(SoundEntityList::Entry &, bool) // 0x6CFAC2
{
    mangled_assert("?Stop@SoundEntityList@@AAEXAAUEntry@1@_N@Z");
    todo("implement");
    _sub_6CFAC2(this, arg, arg);
}

_extern long _sub_6CF9DF(SoundEntityList *const, SoundEntityHandle const &, vector3 const &);
long SoundEntityList::SetPosition(SoundEntityHandle const &, vector3 const &) // 0x6CF9DF
{
    mangled_assert("?SetPosition@SoundEntityList@@QAEJABVSoundEntityHandle@@ABVvector3@@@Z");
    todo("implement");
    long __result = _sub_6CF9DF(this, arg, arg);
    return __result;
}

_extern long _sub_6CFA64(SoundEntityList *const, SoundEntityHandle const &, vector3 const &);
long SoundEntityList::SetVelocity(SoundEntityHandle const &, vector3 const &) // 0x6CFA64
{
    mangled_assert("?SetVelocity@SoundEntityList@@QAEJABVSoundEntityHandle@@ABVvector3@@@Z");
    todo("implement");
    long __result = _sub_6CFA64(this, arg, arg);
    return __result;
}

_extern long _sub_6CF91E(SoundEntityList *const, SoundEntityHandle const &, vector3 const &);
long SoundEntityList::SetHeading(SoundEntityHandle const &, vector3 const &) // 0x6CF91E
{
    mangled_assert("?SetHeading@SoundEntityList@@QAEJABVSoundEntityHandle@@ABVvector3@@@Z");
    todo("implement");
    long __result = _sub_6CF91E(this, arg, arg);
    return __result;
}

_extern long _sub_6CF98D(SoundEntityList *const, SoundEntityHandle const &, bool);
long SoundEntityList::SetMute(SoundEntityHandle const &, bool) // 0x6CF98D
{
    mangled_assert("?SetMute@SoundEntityList@@QAEJABVSoundEntityHandle@@_N@Z");
    todo("implement");
    long __result = _sub_6CF98D(this, arg, arg);
    return __result;
}

_extern bool _sub_6CF7BD(SoundEntityList *const, SoundEntityHandle const &);
bool SoundEntityList::IsValid(SoundEntityHandle const &) // 0x6CF7BD
{
    mangled_assert("?IsValid@SoundEntityList@@QAE_NABVSoundEntityHandle@@@Z");
    todo("implement");
    bool __result = _sub_6CF7BD(this, arg);
    return __result;
}

_extern void _sub_6CFAF3(SoundEntityList *const);
void SoundEntityList::StopAll() // 0x6CFAF3
{
    mangled_assert("?StopAll@SoundEntityList@@QAEXXZ");
    todo("implement");
    _sub_6CFAF3(this);
}

_extern void _sub_6CF6E4(SoundEntityList *const);
void SoundEntityList::Clear() // 0x6CF6E4
{
    mangled_assert("?Clear@SoundEntityList@@QAEXXZ");
    todo("implement");
    _sub_6CF6E4(this);
}

_extern void _sub_6CF8AF(SoundEntityList *const, SoundEntityHandle const &, bool);
void SoundEntityList::RmvEntity(SoundEntityHandle const &, bool) // 0x6CF8AF
{
    mangled_assert("?RmvEntity@SoundEntityList@@QAEXABVSoundEntityHandle@@_N@Z");
    todo("implement");
    _sub_6CF8AF(this, arg, arg);
}

_extern SoundEntityHandle _sub_6CF52C(SoundEntityList *const, PatchID const &, vector3 const &);
SoundEntityHandle SoundEntityList::AddEntity(PatchID const &, vector3 const &) // 0x6CF52C
{
    mangled_assert("?AddEntity@SoundEntityList@@QAE?AVSoundEntityHandle@@ABVPatchID@@ABVvector3@@@Z");
    todo("implement");
    SoundEntityHandle __result = _sub_6CF52C(this, arg, arg);
    return __result;
}

_extern void _sub_6CFB1B(SoundEntityList *const, vector3 const &, unsigned __int32, float);
void SoundEntityList::UpdateCamera(vector3 const &, unsigned __int32, float) // 0x6CFB1B
{
    mangled_assert("?UpdateCamera@SoundEntityList@@QAEXABVvector3@@IM@Z");
    todo("implement");
    _sub_6CFB1B(this, arg, arg, arg);
}

/* ---------- private code */
#endif
