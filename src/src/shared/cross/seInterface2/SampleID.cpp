#if 0
/* ---------- headers */

#include "decomp.h"
#include <new>
#include <xmemory0>
#include <xstddef>
#include <type_traits>
#include <xstring>
#include <seInterface2\SEInterface.h>
#include <seInterface2\seinterfacefunc.h>
#include <iosfwd>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <seInterface2\sedefinesshared.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Src\Shared\PC\seInterface2\pch.h"
#include <seInterface2\SampleID.h>
#include <seInterface2\SampleBase.h>

/* ---------- constants */

/* ---------- definitions */

typedef std::vector<seDeviceInfo *,std::allocator<seDeviceInfo *> > seDeviceList;
typedef std::vector<PatchID::Info *,std::allocator<PatchID::Info *> > PatchInfos;

/* ---------- prototypes */

/* ---------- globals */

extern SampleID SampleID::ID_Invalid; // 0x83F884

/* ---------- private variables */

/* ---------- public code */

_extern _sub_6C1571(SampleID::Info *const);
_inline SampleID::Info::Info() // 0x6C1571
{
    mangled_assert("??0Info@SampleID@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6C1571(this);
}

_extern _sub_6C1618(SampleID *const);
SampleID::SampleID() // 0x6C1618
{
    mangled_assert("??0SampleID@@QAE@XZ");
    todo("implement");
    _sub_6C1618(this);
}

_extern _sub_6C1583(SampleID *const, SampleID const &);
SampleID::SampleID(SampleID const &) // 0x6C1583
{
    mangled_assert("??0SampleID@@QAE@ABV0@@Z");
    todo("implement");
    _sub_6C1583(this, arg);
}

_extern _sub_6C15B1(SampleID *const, char const *, SampleBase *);
SampleID::SampleID(char const *, SampleBase *) // 0x6C15B1
{
    mangled_assert("??0SampleID@@QAE@PBDPAVSampleBase@@@Z");
    todo("implement");
    _sub_6C15B1(this, arg, arg);
}

_extern void _sub_6C162C(SampleID *const);
SampleID::~SampleID() // 0x6C162C
{
    mangled_assert("??1SampleID@@QAE@XZ");
    todo("implement");
    _sub_6C162C(this);
}

_extern SampleID &_sub_6C1631(SampleID *const, SampleID const &);
SampleID &SampleID::operator=(SampleID const &) // 0x6C1631
{
    mangled_assert("??4SampleID@@QAEAAV0@ABV0@@Z");
    todo("implement");
    SampleID & __result = _sub_6C1631(this, arg);
    return __result;
}

_extern SampleBase *_sub_6C168A(SampleID *const);
SampleBase *SampleID::operator->() // 0x6C168A
{
    mangled_assert("??CSampleID@@QAEPAVSampleBase@@XZ");
    todo("implement");
    SampleBase * __result = _sub_6C168A(this);
    return __result;
}

_extern SampleBase const *_sub_6C1695(SampleID const *const);
SampleBase const *SampleID::operator->() const // 0x6C1695
{
    mangled_assert("??CSampleID@@QBEPBVSampleBase@@XZ");
    todo("implement");
    SampleBase const * __result = _sub_6C1695(this);
    return __result;
}

_extern char const *_sub_6C16A8(SampleID const *const);
char const *SampleID::GetFileName() const // 0x6C16A8
{
    mangled_assert("?GetFileName@SampleID@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_6C16A8(this);
    return __result;
}

_extern bool _sub_6C166A(SampleID const *const, SampleID const &);
bool SampleID::operator==(SampleID const &) const // 0x6C166A
{
    mangled_assert("??8SampleID@@QBE_NABV0@@Z");
    todo("implement");
    bool __result = _sub_6C166A(this, arg);
    return __result;
}

_extern bool _sub_6C167A(SampleID const *const, SampleID const &);
bool SampleID::operator!=(SampleID const &) const // 0x6C167A
{
    mangled_assert("??9SampleID@@QBE_NABV0@@Z");
    todo("implement");
    bool __result = _sub_6C167A(this, arg);
    return __result;
}

_extern void _sub_6C16A0(SampleID *const, __int32);
void SampleID::operator++(__int32) // 0x6C16A0
{
    mangled_assert("??ESampleID@@IAEXH@Z");
    todo("implement");
    _sub_6C16A0(this, arg);
}

_extern void _sub_6C16F8(SampleID *const, char const *);
void SampleID::Save(char const *) // 0x6C16F8
{
    mangled_assert("?Save@SampleID@@QAEXPBD@Z");
    todo("implement");
    _sub_6C16F8(this, arg);
}

_extern void _sub_6C16B6(SampleID *const, char const *, long, bool, long *, short *, short *, long *);
void SampleID::Load(char const *, long, bool, long *, short *, short *, long *) // 0x6C16B6
{
    mangled_assert("?Load@SampleID@@QAEXPBDJ_NPAJPAF32@Z");
    todo("implement");
    _sub_6C16B6(this, arg, arg, arg, arg, arg, arg, arg);
}

_extern void _sub_6C16DE(SampleID *const);
void SampleID::New() // 0x6C16DE
{
    mangled_assert("?New@SampleID@@QAEXXZ");
    todo("implement");
    _sub_6C16DE(this);
}

_extern void _sub_6C16EB(SampleID *const);
void SampleID::Reset() // 0x6C16EB
{
    mangled_assert("?Reset@SampleID@@AAEXXZ");
    todo("implement");
    _sub_6C16EB(this);
}

/* ---------- private code */
#endif
