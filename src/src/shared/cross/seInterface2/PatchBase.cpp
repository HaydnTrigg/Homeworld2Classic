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
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Src\Shared\PC\seInterface2\pch.h"
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <seInterface2\PatchID.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_6C0CFB(PatchBase *const);
PatchBase::PatchBase() // 0x6C0CFB
{
    mangled_assert("??0PatchBase@@QAE@XZ");
    todo("implement");
    _sub_6C0CFB(this);
}

_extern _sub_6C0BC9(PatchBase *const, PatchBase *);
PatchBase::PatchBase(PatchBase *) // 0x6C0BC9
{
    mangled_assert("??0PatchBase@@QAE@PAV0@@Z");
    todo("implement");
    _sub_6C0BC9(this, arg);
}

_extern void _sub_6C0E05(PatchBase *const);
PatchBase::~PatchBase() // 0x6C0E05
{
    mangled_assert("??1PatchBase@@UAE@XZ");
    todo("implement");
    _sub_6C0E05(this);
}

_extern void _sub_6C14A6(PatchBase *const, char const *);
void PatchBase::SetName(char const *) // 0x6C14A6
{
    mangled_assert("?SetName@PatchBase@@QAEXPBD@Z");
    todo("implement");
    _sub_6C14A6(this, arg);
}

_extern void _sub_6C1436();
void PatchBase::Reset() // 0x6C1436
{
    mangled_assert("?Reset@PatchBase@@SGXXZ");
    todo("implement");
    _sub_6C1436();
}

_extern SampleID _sub_6C0E67(PatchBase *const, char const *, long, long, __int32, long *, short *, short *, long *);
SampleID PatchBase::AddSample(char const *, long, long, __int32, long *, short *, short *, long *) // 0x6C0E67
{
    mangled_assert("?AddSample@PatchBase@@QAE?AVSampleID@@PBDJJHPAJPAF21@Z");
    todo("implement");
    SampleID __result = _sub_6C0E67(this, arg, arg, arg, arg, arg, arg, arg, arg);
    return __result;
}

_extern SampleID _sub_6C1356(PatchBase *const, char const *, long, long, __int32);
SampleID PatchBase::ReplaceSample(char const *, long, long, __int32) // 0x6C1356
{
    mangled_assert("?ReplaceSample@PatchBase@@QAE?AVSampleID@@PBDJJH@Z");
    todo("implement");
    SampleID __result = _sub_6C1356(this, arg, arg, arg, arg);
    return __result;
}

_extern void _sub_6C1200(PatchBase *const, SampleID &, long, long, __int32);
void PatchBase::PushSample(SampleID &, long, long, __int32) // 0x6C1200
{
    mangled_assert("?PushSample@PatchBase@@QAEXAAVSampleID@@JJH@Z");
    todo("implement");
    _sub_6C1200(this, arg, arg, arg, arg);
}

_extern SampleID _sub_6C1094(PatchBase const *const, SampleID);
SampleID PatchBase::GetSample(SampleID) const // 0x6C1094
{
    mangled_assert("?GetSample@PatchBase@@QBE?AVSampleID@@V2@@Z");
    todo("implement");
    SampleID __result = _sub_6C1094(this, arg);
    return __result;
}

_extern SampleID _sub_6C0FE0(PatchBase const *const, char const *);
SampleID PatchBase::GetSample(char const *) const // 0x6C0FE0
{
    mangled_assert("?GetSample@PatchBase@@QBE?AVSampleID@@PBD@Z");
    todo("implement");
    SampleID __result = _sub_6C0FE0(this, arg);
    return __result;
}

_extern SampleID _sub_6C0F35(PatchBase const *const, __int32);
SampleID PatchBase::GetSample(__int32) const // 0x6C0F35
{
    mangled_assert("?GetSample@PatchBase@@QBE?AVSampleID@@H@Z");
    todo("implement");
    SampleID __result = _sub_6C0F35(this, arg);
    return __result;
}

_extern bool _sub_6C1437(PatchBase *const, long);
bool PatchBase::SampleGroupExist(long) // 0x6C1437
{
    mangled_assert("?SampleGroupExist@PatchBase@@QAE_NJ@Z");
    todo("implement");
    bool __result = _sub_6C1437(this, arg);
    return __result;
}

_extern SampleID *_sub_6C1121(PatchBase *const, __int32);
SampleID *PatchBase::GetSamplePointer(__int32) // 0x6C1121
{
    mangled_assert("?GetSamplePointer@PatchBase@@QAEPAVSampleID@@H@Z");
    todo("implement");
    SampleID * __result = _sub_6C1121(this, arg);
    return __result;
}

_extern bool _sub_6C12B4(PatchBase *const, SampleID);
bool PatchBase::RemoveSample(SampleID) // 0x6C12B4
{
    mangled_assert("?RemoveSample@PatchBase@@QAE_NVSampleID@@@Z");
    todo("implement");
    bool __result = _sub_6C12B4(this, arg);
    return __result;
}

_extern bool _sub_6C122E(PatchBase *const, __int32);
bool PatchBase::RemoveSample(__int32) // 0x6C122E
{
    mangled_assert("?RemoveSample@PatchBase@@QAE_NH@Z");
    todo("implement");
    bool __result = _sub_6C122E(this, arg);
    return __result;
}

_extern long _sub_6C1175(PatchBase const *const, long);
long PatchBase::GetWeight(long) const // 0x6C1175
{
    mangled_assert("?GetWeight@PatchBase@@QBEJJ@Z");
    todo("implement");
    long __result = _sub_6C1175(this, arg);
    return __result;
}

_extern long _sub_6C115F(PatchBase const *const);
long PatchBase::GetSampleTotal() const // 0x6C115F
{
    mangled_assert("?GetSampleTotal@PatchBase@@QBEJXZ");
    todo("implement");
    long __result = _sub_6C115F(this);
    return __result;
}

/* ---------- private code */
#endif
