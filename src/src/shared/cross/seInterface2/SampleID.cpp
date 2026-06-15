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
#include "src\Src\Shared\PC\seInterface2\pch.h"
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

_inline SampleID::Info::Info() // 0x6C1571
{
    mangled_assert("??0Info@SampleID@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

SampleID::SampleID() // 0x6C1618
{
    mangled_assert("??0SampleID@@QAE@XZ");
    todo("implement");
}

SampleID::SampleID(SampleID const &) // 0x6C1583
{
    mangled_assert("??0SampleID@@QAE@ABV0@@Z");
    todo("implement");
}

SampleID::SampleID(char const *, SampleBase *) // 0x6C15B1
{
    mangled_assert("??0SampleID@@QAE@PBDPAVSampleBase@@@Z");
    todo("implement");
}

SampleID::~SampleID() // 0x6C162C
{
    mangled_assert("??1SampleID@@QAE@XZ");
    todo("implement");
}

SampleID &SampleID::operator=(SampleID const &) // 0x6C1631
{
    mangled_assert("??4SampleID@@QAEAAV0@ABV0@@Z");
    todo("implement");
}

SampleBase *SampleID::operator->() // 0x6C168A
{
    mangled_assert("??CSampleID@@QAEPAVSampleBase@@XZ");
    todo("implement");
}

SampleBase const *SampleID::operator->() const // 0x6C1695
{
    mangled_assert("??CSampleID@@QBEPBVSampleBase@@XZ");
    todo("implement");
}

char const *SampleID::GetFileName() const // 0x6C16A8
{
    mangled_assert("?GetFileName@SampleID@@QBEPBDXZ");
    todo("implement");
}

bool SampleID::operator==(SampleID const &) const // 0x6C166A
{
    mangled_assert("??8SampleID@@QBE_NABV0@@Z");
    todo("implement");
}

bool SampleID::operator!=(SampleID const &) const // 0x6C167A
{
    mangled_assert("??9SampleID@@QBE_NABV0@@Z");
    todo("implement");
}

void SampleID::operator++(__int32) // 0x6C16A0
{
    mangled_assert("??ESampleID@@IAEXH@Z");
    todo("implement");
}

void SampleID::Save(char const *) // 0x6C16F8
{
    mangled_assert("?Save@SampleID@@QAEXPBD@Z");
    todo("implement");
}

void SampleID::Load(char const *, long, bool, long *, short *, short *, long *) // 0x6C16B6
{
    mangled_assert("?Load@SampleID@@QAEXPBDJ_NPAJPAF32@Z");
    todo("implement");
}

void SampleID::New() // 0x6C16DE
{
    mangled_assert("?New@SampleID@@QAEXXZ");
    todo("implement");
}

void SampleID::Reset() // 0x6C16EB
{
    mangled_assert("?Reset@SampleID@@AAEXXZ");
    todo("implement");
}

/* ---------- private code */
#endif
