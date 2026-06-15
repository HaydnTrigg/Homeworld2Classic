#if 0
/* ---------- headers */

#include "decomp.h"
#include <vector>
#include <new>
#include <xmemory>
#include <xmemory0>
#include <xstddef>
#include <seInterface2\sedefinesshared.h>
#include <type_traits>
#include <xstring>
#include <seInterface2\SampleID.h>
#include <seInterface2\SampleBase.h>
#include <xutility>
#include <iosfwd>
#include <seInterface2\SEInterface.h>
#include <seInterface2\seinterfacefunc.h>
#include "src\Src\Shared\PC\seInterface2\pch.h"
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <seInterface2\PatchID.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

PatchBase::PatchBase() // 0x6C0CFB
{
    mangled_assert("??0PatchBase@@QAE@XZ");
    todo("implement");
}

PatchBase::PatchBase(PatchBase *) // 0x6C0BC9
{
    mangled_assert("??0PatchBase@@QAE@PAV0@@Z");
    todo("implement");
}

PatchBase::~PatchBase() // 0x6C0E05
{
    mangled_assert("??1PatchBase@@UAE@XZ");
    todo("implement");
}

void PatchBase::SetName(char const *) // 0x6C14A6
{
    mangled_assert("?SetName@PatchBase@@QAEXPBD@Z");
    todo("implement");
}

void PatchBase::Reset() // 0x6C1436
{
    mangled_assert("?Reset@PatchBase@@SGXXZ");
    todo("implement");
}

SampleID PatchBase::AddSample(char const *, long, long, __int32, long *, short *, short *, long *) // 0x6C0E67
{
    mangled_assert("?AddSample@PatchBase@@QAE?AVSampleID@@PBDJJHPAJPAF21@Z");
    todo("implement");
}

SampleID PatchBase::ReplaceSample(char const *, long, long, __int32) // 0x6C1356
{
    mangled_assert("?ReplaceSample@PatchBase@@QAE?AVSampleID@@PBDJJH@Z");
    todo("implement");
}

void PatchBase::PushSample(SampleID &, long, long, __int32) // 0x6C1200
{
    mangled_assert("?PushSample@PatchBase@@QAEXAAVSampleID@@JJH@Z");
    todo("implement");
}

SampleID PatchBase::GetSample(SampleID) const // 0x6C1094
{
    mangled_assert("?GetSample@PatchBase@@QBE?AVSampleID@@V2@@Z");
    todo("implement");
}

SampleID PatchBase::GetSample(char const *) const // 0x6C0FE0
{
    mangled_assert("?GetSample@PatchBase@@QBE?AVSampleID@@PBD@Z");
    todo("implement");
}

SampleID PatchBase::GetSample(__int32) const // 0x6C0F35
{
    mangled_assert("?GetSample@PatchBase@@QBE?AVSampleID@@H@Z");
    todo("implement");
}

bool PatchBase::SampleGroupExist(long) // 0x6C1437
{
    mangled_assert("?SampleGroupExist@PatchBase@@QAE_NJ@Z");
    todo("implement");
}

SampleID *PatchBase::GetSamplePointer(__int32) // 0x6C1121
{
    mangled_assert("?GetSamplePointer@PatchBase@@QAEPAVSampleID@@H@Z");
    todo("implement");
}

bool PatchBase::RemoveSample(SampleID) // 0x6C12B4
{
    mangled_assert("?RemoveSample@PatchBase@@QAE_NVSampleID@@@Z");
    todo("implement");
}

bool PatchBase::RemoveSample(__int32) // 0x6C122E
{
    mangled_assert("?RemoveSample@PatchBase@@QAE_NH@Z");
    todo("implement");
}

long PatchBase::GetWeight(long) const // 0x6C1175
{
    mangled_assert("?GetWeight@PatchBase@@QBEJJ@Z");
    todo("implement");
}

long PatchBase::GetSampleTotal() const // 0x6C115F
{
    mangled_assert("?GetSampleTotal@PatchBase@@QBEJXZ");
    todo("implement");
}

/* ---------- private code */
#endif
