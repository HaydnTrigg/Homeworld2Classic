#if 0
/* ---------- headers */

#include "decomp.h"
#include <seInterface2\SoundParamManager.h>
#include <bitset>
#include <crtdefs.h>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SampleID.h>
#include <seInterface2\SoundParams.h>
#include <seInterface2\SampleBase.h>
#include <boost\shared_ptr.hpp>
#include <boost\throw_exception.hpp>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lightweight_mutex.hpp>
#include <vector>
#include <new>
#include <boost\detail\lwm_win32.hpp>
#include <xmemory>
#include <xmemory0>
#include <boost\smart_ptr.hpp>
#include <xstddef>
#include <boost\scoped_ptr.hpp>
#include <boost\assert.hpp>
#include <assert.h>
#include <seInterface2\sePatchInfoList.h>
#include <boost\checked_delete.hpp>
#include <type_traits>
#include <xstring>
#include <seInterface2\sedefinesshared.h>
#include <xutility>
#include <xatomic0.h>
#include <iosfwd>
#include <memory>
#include <stdint.h>
#include <seInterface2\sedefines.h>
#include <seInterface2\seiff.h>
#include <boost\detail\workaround.hpp>
#include <algorithm>
#include <boost\scoped_array.hpp>
#include <boost\config.hpp>
#include <boost\config\user.hpp>
#include <boost\config\select_compiler_config.hpp>
#include <boost\config\compiler\visualc.hpp>
#include <boost\config\select_stdlib_config.hpp>
#include <boost\config\stdlib\dinkumware.hpp>
#include <boost\config\select_platform_config.hpp>
#include <boost\config\platform\win32.hpp>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Src\Shared\PC\seInterface2\pch.h"
#include <seInterface2\SEInterface.h>
#include <seInterface2\seinterfacefunc.h>
#include <seInterface2\seinclude.h>
#include <seInterface2\Channel.h>
#include <fileio\platform.h>
#include <fileio\fileioexports.h>
#include <seInterface2\sedevice.h>
#include <boost\config\suffix.hpp>
#include <assist\gbitset.h>
#include <boost\shared_array.hpp>

/* ---------- constants */

/* ---------- definitions */

class `anonymous-namespace'::IsNull
{
};
static_assert(sizeof(`anonymous-namespace'::IsNull) == 1, "Invalid `anonymous-namespace'::IsNull size");

typedef `anonymous-namespace'::IsNull ?A0x1958f872::IsNull;

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_6BE16F(PatchID::Info *const);
_inline PatchID::Info::~Info() // 0x6BE16F
{
    mangled_assert("??1Info@PatchID@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6BE16F(this);
}

_extern void _sub_6BE174(SampleID::Info *const);
_inline SampleID::Info::~Info() // 0x6BE174
{
    mangled_assert("??1Info@SampleID@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6BE174(this);
}

_extern void _sub_6BE49B(seInterface *const, PatchID &, char const *);
void seInterface::LoadPatchID(PatchID &, char const *) // 0x6BE49B
{
    mangled_assert("?LoadPatchID@seInterface@@QAEXAAVPatchID@@PBD@Z");
    todo("implement");
    _sub_6BE49B(this, arg, arg);
}

_extern void _sub_6BE673(seInterface *const, PatchID &);
void seInterface::NewPatchID(PatchID &) // 0x6BE673
{
    mangled_assert("?NewPatchID@seInterface@@QAEXAAVPatchID@@@Z");
    todo("implement");
    _sub_6BE673(this, arg);
}

_extern void _sub_6BEC1D(seInterface *const, PatchID &, char const *);
void seInterface::SavePatchID(PatchID &, char const *) // 0x6BEC1D
{
    mangled_assert("?SavePatchID@seInterface@@QAEXAAVPatchID@@PBD@Z");
    todo("implement");
    _sub_6BEC1D(this, arg, arg);
}

_extern void _sub_6BE270(seInterface *const, PatchID &, char const *);
void seInterface::FindPatchID(PatchID &, char const *) // 0x6BE270
{
    mangled_assert("?FindPatchID@seInterface@@QAEXAAVPatchID@@PBD@Z");
    todo("implement");
    _sub_6BE270(this, arg, arg);
}

_extern void _sub_6BE531(seInterface *const, SampleID &, char const *, long, bool, long *, short *, short *, long *);
void seInterface::LoadSampleID(SampleID &, char const *, long, bool, long *, short *, short *, long *) // 0x6BE531
{
    mangled_assert("?LoadSampleID@seInterface@@QAEXAAVSampleID@@PBDJ_NPAJPAF43@Z");
    todo("implement");
    _sub_6BE531(this, arg, arg, arg, arg, arg, arg, arg, arg);
}

_extern void _sub_6BE6D1(seInterface *const, SampleID &);
void seInterface::NewSampleID(SampleID &) // 0x6BE6D1
{
    mangled_assert("?NewSampleID@seInterface@@QAEXAAVSampleID@@@Z");
    todo("implement");
    _sub_6BE6D1(this, arg);
}

_extern void _sub_6BEC35(seInterface *const, SampleID &, char const *);
void seInterface::SaveSampleID(SampleID &, char const *) // 0x6BEC35
{
    mangled_assert("?SaveSampleID@seInterface@@QAEXAAVSampleID@@PBD@Z");
    todo("implement");
    _sub_6BEC35(this, arg, arg);
}

_extern void _sub_6BE2B7(seInterface *const, SampleID &, char const *);
void seInterface::FindSampleID(SampleID &, char const *) // 0x6BE2B7
{
    mangled_assert("?FindSampleID@seInterface@@QAEXAAVSampleID@@PBD@Z");
    todo("implement");
    _sub_6BE2B7(this, arg, arg);
}

_extern SampleID _sub_6BE72F(PatchID const &, __int32, long);
SampleID seInterface::PatchSelectSample(PatchID const &pID, __int32 index, long group) // 0x6BE72F
{
    mangled_assert("?PatchSelectSample@seInterface@@CG?AVSampleID@@ABVPatchID@@HJ@Z");
    todo("implement");
    SampleID __result = _sub_6BE72F(pID, index, group);
    return __result;
}

_extern void _sub_6BE324(seInterface *const);
void seInterface::Flush() // 0x6BE324
{
    mangled_assert("?Flush@seInterface@@QAEXXZ");
    todo("implement");
    _sub_6BE324(this);
}

_extern void _sub_6BEA3A(seInterface *const);
void seInterface::Reload() // 0x6BEA3A
{
    mangled_assert("?Reload@seInterface@@QAEXXZ");
    todo("implement");
    _sub_6BEA3A(this);
}

_extern long _sub_6BEB3D(seInterface *const, char const *, void **, bool, long *, long *, short *, short *, long *, long *, long *, long *, long *);
long seInterface::SampleLoadWAV(char const *, void **, bool, long *, long *, short *, short *, long *, long *, long *, long *, long *) // 0x6BEB3D
{
    mangled_assert("?SampleLoadWAV@seInterface@@QAEJPBDPAPAX_NPAJ3PAF433333@Z");
    todo("implement");
    long __result = _sub_6BEB3D(this, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg);
    return __result;
}

_extern seInterface::SampleType _sub_6BE430(seInterface *const, char const *, long *, short *, short *, long *, long *, short *, long *, long *);
seInterface::SampleType seInterface::GetHeaderWAVE(char const *, long *, short *, short *, long *, long *, short *, long *, long *) // 0x6BE430
{
    mangled_assert("?GetHeaderWAVE@seInterface@@QAE?AW4SampleType@1@PBDPAJPAF211211@Z");
    todo("implement");
    seInterface::SampleType __result = _sub_6BE430(this, arg, arg, arg, arg, arg, arg, arg, arg, arg);
    return __result;
}

/* ---------- private code */
#endif
