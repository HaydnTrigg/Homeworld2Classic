#if 0
/* ---------- headers */

#include "decomp.h"
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Src\Foreign\libwebm\mkvparser.hpp"
#include <cstdlib>
#include <yvals.h>
#include <xkeycheck.h>
#include <crtdefs.h>
#include <sal.h>
#include <concurrencysal.h>
#include <vadefs.h>
#include <stdlib.h>
#include <limits.h>
#include <cstddef>
#include <stddef.h>
#include <swprintf.inl>
#include <cassert>
#include <assert.h>
#include <cstring>
#include <string.h>
#include <new>
#include <exception>
#include <xstddef>
#include <climits>
#include <xtr1common>
#include <eh.h>
#include <use_ansi.h>
#include <malloc.h>
#include <cstdio>
#include <stdio.h>

/* ---------- constants */

/* ---------- definitions */

union mkvparser::UnserializeFloat::__l9::<unnamed-type-$S1>
{
    float f; // 0x0
    unsigned long ff; // 0x0
};
static_assert(sizeof(mkvparser::UnserializeFloat::__l9::<unnamed-type-$S1>) == 4, "Invalid mkvparser::UnserializeFloat::__l9::<unnamed-type-$S1> size");

union mkvparser::UnserializeFloat::__l15::<unnamed-type-$S2>
{
    double d; // 0x0
    unsigned long long dd; // 0x0
};
static_assert(sizeof(mkvparser::UnserializeFloat::__l15::<unnamed-type-$S2>) == 8, "Invalid mkvparser::UnserializeFloat::__l15::<unnamed-type-$S2> size");

/* ---------- prototypes */

extern void mkvparser::GetVersion(__int32 &major, __int32 &minor, __int32 &build, __int32 &revision);
extern long long mkvparser::ReadUInt(mkvparser::IMkvReader *pReader, long long pos, long &len);
extern long long mkvparser::GetUIntLength(mkvparser::IMkvReader *pReader, long long pos, long &len);
extern long long mkvparser::UnserializeUInt(mkvparser::IMkvReader *pReader, long long pos, long long size);
extern long mkvparser::UnserializeFloat(mkvparser::IMkvReader *pReader, long long pos, long long size_, double &result);
extern long mkvparser::UnserializeInt(mkvparser::IMkvReader *pReader, long long pos, long size, long long &result);
extern long mkvparser::UnserializeString(mkvparser::IMkvReader *pReader, long long pos, long long size_, char *&str);
extern long mkvparser::ParseElementHeader(mkvparser::IMkvReader *pReader, long long &pos, long long stop, long long &id, long long &size);
extern bool mkvparser::Match(mkvparser::IMkvReader *pReader, long long &pos, unsigned long id_, long long &val);
extern bool mkvparser::Match(mkvparser::IMkvReader *pReader, long long &pos, unsigned long id_, unsigned char *&buf, unsigned __int32 &buflen);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_72E780(mkvparser::IMkvReader *const);
mkvparser::IMkvReader::~IMkvReader() // 0x72E780
{
    mangled_assert("??1IMkvReader@mkvparser@@MAE@XZ");
    todo("implement");
    _sub_72E780(this);
}

_extern void _sub_732020(__int32 &, __int32 &, __int32 &, __int32 &);
void mkvparser::GetVersion(__int32 &major, __int32 &minor, __int32 &build, __int32 &revision) // 0x732020
{
    mangled_assert("?GetVersion@mkvparser@@YGXAAH000@Z");
    todo("implement");
    _sub_732020(major, minor, build, revision);
}

_extern long long _sub_7380A0(mkvparser::IMkvReader *, long long, long &);
long long mkvparser::ReadUInt(mkvparser::IMkvReader *pReader, long long pos, long &len) // 0x7380A0
{
    mangled_assert("?ReadUInt@mkvparser@@YG_JPAVIMkvReader@1@_JAAJ@Z");
    todo("implement");
    long long __result = _sub_7380A0(pReader, pos, len);
    return __result;
}

_extern long long _sub_731F70(mkvparser::IMkvReader *, long long, long &);
long long mkvparser::GetUIntLength(mkvparser::IMkvReader *pReader, long long pos, long &len) // 0x731F70
{
    mangled_assert("?GetUIntLength@mkvparser@@YG_JPAVIMkvReader@1@_JAAJ@Z");
    todo("implement");
    long long __result = _sub_731F70(pReader, pos, len);
    return __result;
}

_extern long long _sub_738700(mkvparser::IMkvReader *, long long, long long);
long long mkvparser::UnserializeUInt(mkvparser::IMkvReader *pReader, long long pos, long long size) // 0x738700
{
    mangled_assert("?UnserializeUInt@mkvparser@@YG_JPAVIMkvReader@1@_J1@Z");
    todo("implement");
    long long __result = _sub_738700(pReader, pos, size);
    return __result;
}

_extern long _sub_7384D0(mkvparser::IMkvReader *, long long, long long, double &);
long mkvparser::UnserializeFloat(mkvparser::IMkvReader *pReader, long long pos, long long size_, double &result) // 0x7384D0
{
    mangled_assert("?UnserializeFloat@mkvparser@@YGJPAVIMkvReader@1@_J1AAN@Z");
    todo("implement");
    long __result = _sub_7384D0(pReader, pos, size_, result);
    return __result;
}

_extern long _sub_7385D0(mkvparser::IMkvReader *, long long, long, long long &);
long mkvparser::UnserializeInt(mkvparser::IMkvReader *pReader, long long pos, long size, long long &result) // 0x7385D0
{
    mangled_assert("?UnserializeInt@mkvparser@@YGJPAVIMkvReader@1@_JJAA_J@Z");
    todo("implement");
    long __result = _sub_7385D0(pReader, pos, size, result);
    return __result;
}

_extern long _sub_738660(mkvparser::IMkvReader *, long long, long long, char *&);
long mkvparser::UnserializeString(mkvparser::IMkvReader *pReader, long long pos, long long size_, char *&str) // 0x738660
{
    mangled_assert("?UnserializeString@mkvparser@@YGJPAVIMkvReader@1@_J1AAPAD@Z");
    todo("implement");
    long __result = _sub_738660(pReader, pos, size_, str);
    return __result;
}

_extern long _sub_736610(mkvparser::IMkvReader *, long long &, long long, long long &, long long &);
long mkvparser::ParseElementHeader(mkvparser::IMkvReader *pReader, long long &pos, long long stop, long long &id, long long &size) // 0x736610
{
    mangled_assert("?ParseElementHeader@mkvparser@@YGJPAVIMkvReader@1@AA_J_J11@Z");
    todo("implement");
    long __result = _sub_736610(pReader, pos, stop, id, size);
    return __result;
}

_extern bool _sub_733340(mkvparser::IMkvReader *, long long &, unsigned long, long long &);
bool mkvparser::Match(mkvparser::IMkvReader *pReader, long long &pos, unsigned long id_, long long &val) // 0x733340
{
    mangled_assert("?Match@mkvparser@@YG_NPAVIMkvReader@1@AA_JK1@Z");
    todo("implement");
    bool __result = _sub_733340(pReader, pos, id_, val);
    return __result;
}

_extern bool _sub_7333D0(mkvparser::IMkvReader *, long long &, unsigned long, unsigned char *&, unsigned __int32 &);
bool mkvparser::Match(mkvparser::IMkvReader *pReader, long long &pos, unsigned long id_, unsigned char *&buf, unsigned __int32 &buflen) // 0x7333D0
{
    mangled_assert("?Match@mkvparser@@YG_NPAVIMkvReader@1@AA_JKAAPAEAAI@Z");
    todo("implement");
    bool __result = _sub_7333D0(pReader, pos, id_, buf, buflen);
    return __result;
}

_extern _sub_72E260(mkvparser::EBMLHeader *const);
mkvparser::EBMLHeader::EBMLHeader() // 0x72E260
{
    mangled_assert("??0EBMLHeader@mkvparser@@QAE@XZ");
    todo("implement");
    _sub_72E260(this);
}

_extern void _sub_72E750(mkvparser::EBMLHeader *const);
mkvparser::EBMLHeader::~EBMLHeader() // 0x72E750
{
    mangled_assert("??1EBMLHeader@mkvparser@@QAE@XZ");
    todo("implement");
    _sub_72E750(this);
}

_extern void _sub_72E760(mkvparser::Track::EOSBlock *const);
_inline mkvparser::Track::EOSBlock::~EOSBlock() // 0x72E760
{
    mangled_assert("??1EOSBlock@Track@mkvparser@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_72E760(this);
}

_extern void _sub_732840(mkvparser::EBMLHeader *const);
void mkvparser::EBMLHeader::Init() // 0x732840
{
    mangled_assert("?Init@EBMLHeader@mkvparser@@QAEXXZ");
    todo("implement");
    _sub_732840(this);
}

_extern long long _sub_7345F0(mkvparser::EBMLHeader *const, mkvparser::IMkvReader *, long long &);
long long mkvparser::EBMLHeader::Parse(mkvparser::IMkvReader *, long long &) // 0x7345F0
{
    mangled_assert("?Parse@EBMLHeader@mkvparser@@QAE_JPAVIMkvReader@2@AA_J@Z");
    todo("implement");
    long long __result = _sub_7345F0(this, arg, arg);
    return __result;
}

_extern _sub_72E340(mkvparser::Segment *const, mkvparser::IMkvReader *, long long, long long, long long);
mkvparser::Segment::Segment(mkvparser::IMkvReader *, long long, long long, long long) // 0x72E340
{
    mangled_assert("??0Segment@mkvparser@@AAE@PAVIMkvReader@1@_J11@Z");
    todo("implement");
    _sub_72E340(this, arg, arg, arg, arg);
}

_extern void _sub_72E7C0(mkvparser::Segment *const);
mkvparser::Segment::~Segment() // 0x72E7C0
{
    mangled_assert("??1Segment@mkvparser@@QAE@XZ");
    todo("implement");
    _sub_72E7C0(this);
}

_extern long long _sub_72F4C0(mkvparser::IMkvReader *, long long, mkvparser::Segment *&);
long long mkvparser::Segment::CreateInstance(mkvparser::IMkvReader *pReader, long long pos, mkvparser::Segment *&pSegment) // 0x72F4C0
{
    mangled_assert("?CreateInstance@Segment@mkvparser@@SG_JPAVIMkvReader@2@_JAAPAV12@@Z");
    todo("implement");
    long long __result = _sub_72F4C0(pReader, pos, pSegment);
    return __result;
}

_extern long long _sub_736C30(mkvparser::Segment *const);
long long mkvparser::Segment::ParseHeaders() // 0x736C30
{
    mangled_assert("?ParseHeaders@Segment@mkvparser@@QAE_JXZ");
    todo("implement");
    long long __result = _sub_736C30(this);
    return __result;
}

_extern long _sub_733200(mkvparser::Segment *const, long long &, long &);
long mkvparser::Segment::LoadCluster(long long &, long &) // 0x733200
{
    mangled_assert("?LoadCluster@Segment@mkvparser@@QAEJAA_JAAJ@Z");
    todo("implement");
    long __result = _sub_733200(this, arg, arg);
    return __result;
}

_extern long _sub_72F880(mkvparser::Segment *const, long long &, long &);
long mkvparser::Segment::DoLoadCluster(long long &, long &) // 0x72F880
{
    mangled_assert("?DoLoadCluster@Segment@mkvparser@@AAEJAA_JAAJ@Z");
    todo("implement");
    long __result = _sub_72F880(this, arg, arg);
    return __result;
}

_extern long _sub_72FE80(mkvparser::Segment *const, long long &, long &);
long mkvparser::Segment::DoLoadClusterUnknownSize(long long &, long &) // 0x72FE80
{
    mangled_assert("?DoLoadClusterUnknownSize@Segment@mkvparser@@AAEJAA_JAAJ@Z");
    todo("implement");
    long __result = _sub_72FE80(this, arg, arg);
    return __result;
}

_extern void _sub_72ED40(mkvparser::Segment *const, mkvparser::Cluster *);
void mkvparser::Segment::AppendCluster(mkvparser::Cluster *) // 0x72ED40
{
    mangled_assert("?AppendCluster@Segment@mkvparser@@AAEXPAVCluster@2@@Z");
    todo("implement");
    _sub_72ED40(this, arg);
}

_extern void _sub_737EF0(mkvparser::Segment *const, mkvparser::Cluster *, __int32);
void mkvparser::Segment::PreloadCluster(mkvparser::Cluster *, __int32) // 0x737EF0
{
    mangled_assert("?PreloadCluster@Segment@mkvparser@@AAEXPAVCluster@2@H@Z");
    todo("implement");
    _sub_737EF0(this, arg, arg);
}

_extern long _sub_733190(mkvparser::Segment *const);
long mkvparser::Segment::Load() // 0x733190
{
    mangled_assert("?Load@Segment@mkvparser@@QAEJXZ");
    todo("implement");
    long __result = _sub_733190(this);
    return __result;
}

_extern _sub_72E2E0(mkvparser::SeekHead *const, mkvparser::Segment *, long long, long long, long long, long long);
mkvparser::SeekHead::SeekHead(mkvparser::Segment *, long long, long long, long long, long long) // 0x72E2E0
{
    mangled_assert("??0SeekHead@mkvparser@@QAE@PAVSegment@1@_J111@Z");
    todo("implement");
    _sub_72E2E0(this, arg, arg, arg, arg, arg);
}

_extern void _sub_72E7A0(mkvparser::SeekHead *const);
mkvparser::SeekHead::~SeekHead() // 0x72E7A0
{
    mangled_assert("??1SeekHead@mkvparser@@QAE@XZ");
    todo("implement");
    _sub_72E7A0(this);
}

_extern long _sub_734B80(mkvparser::SeekHead *const);
long mkvparser::SeekHead::Parse() // 0x734B80
{
    mangled_assert("?Parse@SeekHead@mkvparser@@QAEJXZ");
    todo("implement");
    long __result = _sub_734B80(this);
    return __result;
}

_extern __int32 _sub_730FE0(mkvparser::SeekHead const *const);
__int32 mkvparser::SeekHead::GetCount() const // 0x730FE0
{
    mangled_assert("?GetCount@SeekHead@mkvparser@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_730FE0(this);
    return __result;
}

_extern mkvparser::SeekHead::Entry const *_sub_731450(mkvparser::SeekHead const *const, __int32);
mkvparser::SeekHead::Entry const *mkvparser::SeekHead::GetEntry(__int32) const // 0x731450
{
    mangled_assert("?GetEntry@SeekHead@mkvparser@@QBEPBUEntry@12@H@Z");
    todo("implement");
    mkvparser::SeekHead::Entry const * __result = _sub_731450(this, arg);
    return __result;
}

_extern __int32 _sub_732070(mkvparser::SeekHead const *const);
__int32 mkvparser::SeekHead::GetVoidElementCount() const // 0x732070
{
    mangled_assert("?GetVoidElementCount@SeekHead@mkvparser@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_732070(this);
    return __result;
}

_extern mkvparser::SeekHead::VoidElement const *_sub_732050(mkvparser::SeekHead const *const, __int32);
mkvparser::SeekHead::VoidElement const *mkvparser::SeekHead::GetVoidElement(__int32) const // 0x732050
{
    mangled_assert("?GetVoidElement@SeekHead@mkvparser@@QBEPBUVoidElement@12@H@Z");
    todo("implement");
    mkvparser::SeekHead::VoidElement const * __result = _sub_732050(this, arg);
    return __result;
}

_extern long _sub_736220(mkvparser::Segment *const, long long, long long &, long &);
long mkvparser::Segment::ParseCues(long long, long long &, long &) // 0x736220
{
    mangled_assert("?ParseCues@Segment@mkvparser@@QAEJ_JAA_JAAJ@Z");
    todo("implement");
    long __result = _sub_736220(this, arg, arg, arg);
    return __result;
}

_extern bool _sub_736A10(mkvparser::IMkvReader *, long long, long long, mkvparser::SeekHead::Entry *);
bool mkvparser::SeekHead::ParseEntry(mkvparser::IMkvReader *pReader, long long start, long long size_, mkvparser::SeekHead::Entry *pEntry) // 0x736A10
{
    mangled_assert("?ParseEntry@SeekHead@mkvparser@@CG_NPAVIMkvReader@2@_J1PAUEntry@12@@Z");
    todo("implement");
    bool __result = _sub_736A10(pReader, start, size_, pEntry);
    return __result;
}

_extern _sub_72E1F0(mkvparser::Cues *const, mkvparser::Segment *, long long, long long, long long, long long);
mkvparser::Cues::Cues(mkvparser::Segment *, long long, long long, long long, long long) // 0x72E1F0
{
    mangled_assert("??0Cues@mkvparser@@AAE@PAVSegment@1@_J111@Z");
    todo("implement");
    _sub_72E1F0(this, arg, arg, arg, arg, arg);
}

_extern void _sub_72E6F0(mkvparser::Cues *const);
mkvparser::Cues::~Cues() // 0x72E6F0
{
    mangled_assert("??1Cues@mkvparser@@AAE@XZ");
    todo("implement");
    _sub_72E6F0(this);
}

_extern long _sub_730FD0(mkvparser::Cues const *const);
long mkvparser::Cues::GetCount() const // 0x730FD0
{
    mangled_assert("?GetCount@Cues@mkvparser@@QBEJXZ");
    todo("implement");
    long __result = _sub_730FD0(this);
    return __result;
}

_extern bool _sub_730720(mkvparser::Cues const *const);
bool mkvparser::Cues::DoneParsing() const // 0x730720
{
    mangled_assert("?DoneParsing@Cues@mkvparser@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_730720(this);
    return __result;
}

_extern void _sub_732740(mkvparser::Cues const *const);
void mkvparser::Cues::Init() const // 0x732740
{
    mangled_assert("?Init@Cues@mkvparser@@ABEXXZ");
    todo("implement");
    _sub_732740(this);
}

_extern void _sub_737FC0(mkvparser::Cues const *const, long &, long long);
void mkvparser::Cues::PreloadCuePoint(long &, long long) const // 0x737FC0
{
    mangled_assert("?PreloadCuePoint@Cues@mkvparser@@ABEXAAJ_J@Z");
    todo("implement");
    _sub_737FC0(this, arg, arg);
}

_extern bool _sub_733250(mkvparser::Cues const *const);
bool mkvparser::Cues::LoadCuePoint() const // 0x733250
{
    mangled_assert("?LoadCuePoint@Cues@mkvparser@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_733250(this);
    return __result;
}

_extern bool _sub_730BA0(mkvparser::Cues const *const, long long, mkvparser::Track const *, mkvparser::CuePoint const *&, mkvparser::CuePoint::TrackPosition const *&);
bool mkvparser::Cues::Find(long long, mkvparser::Track const *, mkvparser::CuePoint const *&, mkvparser::CuePoint::TrackPosition const *&) const // 0x730BA0
{
    mangled_assert("?Find@Cues@mkvparser@@QBE_N_JPBVTrack@2@AAPBVCuePoint@2@AAPBUTrackPosition@42@@Z");
    todo("implement");
    bool __result = _sub_730BA0(this, arg, arg, arg, arg);
    return __result;
}

_extern mkvparser::CuePoint const *_sub_7314E0(mkvparser::Cues const *const);
mkvparser::CuePoint const *mkvparser::Cues::GetFirst() const // 0x7314E0
{
    mangled_assert("?GetFirst@Cues@mkvparser@@QBEPBVCuePoint@2@XZ");
    todo("implement");
    mkvparser::CuePoint const * __result = _sub_7314E0(this);
    return __result;
}

_extern mkvparser::CuePoint const *_sub_7317B0(mkvparser::Cues const *const);
mkvparser::CuePoint const *mkvparser::Cues::GetLast() const // 0x7317B0
{
    mangled_assert("?GetLast@Cues@mkvparser@@QBEPBVCuePoint@2@XZ");
    todo("implement");
    mkvparser::CuePoint const * __result = _sub_7317B0(this);
    return __result;
}

_extern mkvparser::CuePoint const *_sub_7318C0(mkvparser::Cues const *const, mkvparser::CuePoint const *);
mkvparser::CuePoint const *mkvparser::Cues::GetNext(mkvparser::CuePoint const *) const // 0x7318C0
{
    mangled_assert("?GetNext@Cues@mkvparser@@QBEPBVCuePoint@2@PBV32@@Z");
    todo("implement");
    mkvparser::CuePoint const * __result = _sub_7318C0(this, arg);
    return __result;
}

_extern mkvparser::BlockEntry const *_sub_730DF0(mkvparser::Cues const *const, mkvparser::CuePoint const *, mkvparser::CuePoint::TrackPosition const *);
mkvparser::BlockEntry const *mkvparser::Cues::GetBlock(mkvparser::CuePoint const *, mkvparser::CuePoint::TrackPosition const *) const // 0x730DF0
{
    mangled_assert("?GetBlock@Cues@mkvparser@@QBEPBVBlockEntry@2@PBVCuePoint@2@PBUTrackPosition@42@@Z");
    todo("implement");
    mkvparser::BlockEntry const * __result = _sub_730DF0(this, arg, arg);
    return __result;
}

_extern mkvparser::BlockEntry const *_sub_730E30(mkvparser::Segment *const, mkvparser::CuePoint const &, mkvparser::CuePoint::TrackPosition const &);
mkvparser::BlockEntry const *mkvparser::Segment::GetBlock(mkvparser::CuePoint const &, mkvparser::CuePoint::TrackPosition const &) // 0x730E30
{
    mangled_assert("?GetBlock@Segment@mkvparser@@AAEPBVBlockEntry@2@ABVCuePoint@2@ABUTrackPosition@42@@Z");
    todo("implement");
    mkvparser::BlockEntry const * __result = _sub_730E30(this, arg, arg);
    return __result;
}

_extern mkvparser::Cluster const *_sub_730CE0(mkvparser::Segment *const, long long);
mkvparser::Cluster const *mkvparser::Segment::FindOrPreloadCluster(long long) // 0x730CE0
{
    mangled_assert("?FindOrPreloadCluster@Segment@mkvparser@@QAEPBVCluster@2@_J@Z");
    todo("implement");
    mkvparser::Cluster const * __result = _sub_730CE0(this, arg);
    return __result;
}

_extern _sub_72E1A0(mkvparser::CuePoint *const, long, long long);
mkvparser::CuePoint::CuePoint(long, long long) // 0x72E1A0
{
    mangled_assert("??0CuePoint@mkvparser@@AAE@J_J@Z");
    todo("implement");
    _sub_72E1A0(this, arg, arg);
}

_extern void _sub_72E6E0(mkvparser::CuePoint *const);
mkvparser::CuePoint::~CuePoint() // 0x72E6E0
{
    mangled_assert("??1CuePoint@mkvparser@@AAE@XZ");
    todo("implement");
    _sub_72E6E0(this);
}

_extern void _sub_732F50(mkvparser::CuePoint *const, mkvparser::IMkvReader *);
void mkvparser::CuePoint::Load(mkvparser::IMkvReader *) // 0x732F50
{
    mangled_assert("?Load@CuePoint@mkvparser@@QAEXPAVIMkvReader@2@@Z");
    todo("implement");
    _sub_732F50(this, arg);
}

_extern void _sub_734F80(mkvparser::CuePoint::TrackPosition *const, mkvparser::IMkvReader *, long long, long long);
void mkvparser::CuePoint::TrackPosition::Parse(mkvparser::IMkvReader *, long long, long long) // 0x734F80
{
    mangled_assert("?Parse@TrackPosition@CuePoint@mkvparser@@QAEXPAVIMkvReader@3@_J1@Z");
    todo("implement");
    _sub_734F80(this, arg, arg, arg);
}

_extern mkvparser::CuePoint::TrackPosition const *_sub_730B60(mkvparser::CuePoint const *const, mkvparser::Track const *);
mkvparser::CuePoint::TrackPosition const *mkvparser::CuePoint::Find(mkvparser::Track const *) const // 0x730B60
{
    mangled_assert("?Find@CuePoint@mkvparser@@QBEPBUTrackPosition@12@PBVTrack@2@@Z");
    todo("implement");
    mkvparser::CuePoint::TrackPosition const * __result = _sub_730B60(this, arg);
    return __result;
}

_extern long long _sub_731E80(mkvparser::CuePoint const *const);
long long mkvparser::CuePoint::GetTimeCode() const // 0x731E80
{
    mangled_assert("?GetTimeCode@CuePoint@mkvparser@@QBE_JXZ");
    todo("implement");
    long long __result = _sub_731E80(this);
    return __result;
}

_extern long long _sub_731DF0(mkvparser::CuePoint const *const, mkvparser::Segment const *);
long long mkvparser::CuePoint::GetTime(mkvparser::Segment const *) const // 0x731DF0
{
    mangled_assert("?GetTime@CuePoint@mkvparser@@QBE_JPBVSegment@2@@Z");
    todo("implement");
    long long __result = _sub_731DF0(this, arg);
    return __result;
}

_extern bool _sub_730740(mkvparser::Segment const *const);
bool mkvparser::Segment::DoneParsing() const // 0x730740
{
    mangled_assert("?DoneParsing@Segment@mkvparser@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_730740(this);
    return __result;
}

_extern mkvparser::Cluster const *_sub_731500(mkvparser::Segment const *const);
mkvparser::Cluster const *mkvparser::Segment::GetFirst() const // 0x731500
{
    mangled_assert("?GetFirst@Segment@mkvparser@@QBEPBVCluster@2@XZ");
    todo("implement");
    mkvparser::Cluster const * __result = _sub_731500(this);
    return __result;
}

_extern mkvparser::Cluster const *_sub_7317D0(mkvparser::Segment const *const);
mkvparser::Cluster const *mkvparser::Segment::GetLast() const // 0x7317D0
{
    mangled_assert("?GetLast@Segment@mkvparser@@QBEPBVCluster@2@XZ");
    todo("implement");
    mkvparser::Cluster const * __result = _sub_7317D0(this);
    return __result;
}

_extern unsigned long _sub_730FF0(mkvparser::Segment const *const);
unsigned long mkvparser::Segment::GetCount() const // 0x730FF0
{
    mangled_assert("?GetCount@Segment@mkvparser@@QBEKXZ");
    todo("implement");
    unsigned long __result = _sub_730FF0(this);
    return __result;
}

_extern mkvparser::Cluster const *_sub_7318F0(mkvparser::Segment *const, mkvparser::Cluster const *);
mkvparser::Cluster const *mkvparser::Segment::GetNext(mkvparser::Cluster const *) // 0x7318F0
{
    mangled_assert("?GetNext@Segment@mkvparser@@QAEPBVCluster@2@PBV32@@Z");
    todo("implement");
    mkvparser::Cluster const * __result = _sub_7318F0(this, arg);
    return __result;
}

_extern long _sub_737190(mkvparser::Segment *const, mkvparser::Cluster const *, mkvparser::Cluster const *&, long long &, long &);
long mkvparser::Segment::ParseNext(mkvparser::Cluster const *, mkvparser::Cluster const *&, long long &, long &) // 0x737190
{
    mangled_assert("?ParseNext@Segment@mkvparser@@QAEJPBVCluster@2@AAPBV32@AA_JAAJ@Z");
    todo("implement");
    long __result = _sub_737190(this, arg, arg, arg, arg);
    return __result;
}

_extern long _sub_72FED0(mkvparser::Segment *const, mkvparser::Cluster const *&, long long &, long &);
long mkvparser::Segment::DoParseNext(mkvparser::Cluster const *&, long long &, long &) // 0x72FED0
{
    mangled_assert("?DoParseNext@Segment@mkvparser@@AAEJAAPBVCluster@2@AA_JAAJ@Z");
    todo("implement");
    long __result = _sub_72FED0(this, arg, arg, arg);
    return __result;
}

_extern mkvparser::Cluster const *_sub_730C50(mkvparser::Segment const *const, long long);
mkvparser::Cluster const *mkvparser::Segment::FindCluster(long long) const // 0x730C50
{
    mangled_assert("?FindCluster@Segment@mkvparser@@QBEPBVCluster@2@_J@Z");
    todo("implement");
    mkvparser::Cluster const * __result = _sub_730C50(this, arg);
    return __result;
}

_extern mkvparser::Tracks const *_sub_731F30(mkvparser::Segment const *const);
mkvparser::Tracks const *mkvparser::Segment::GetTracks() const // 0x731F30
{
    mangled_assert("?GetTracks@Segment@mkvparser@@QBEPBVTracks@2@XZ");
    todo("implement");
    mkvparser::Tracks const * __result = _sub_731F30(this);
    return __result;
}

_extern mkvparser::SegmentInfo const *_sub_7316B0(mkvparser::Segment const *const);
mkvparser::SegmentInfo const *mkvparser::Segment::GetInfo() const // 0x7316B0
{
    mangled_assert("?GetInfo@Segment@mkvparser@@QBEPBVSegmentInfo@2@XZ");
    todo("implement");
    mkvparser::SegmentInfo const * __result = _sub_7316B0(this);
    return __result;
}

_extern mkvparser::Cues const *_sub_731010(mkvparser::Segment const *const);
mkvparser::Cues const *mkvparser::Segment::GetCues() const // 0x731010
{
    mangled_assert("?GetCues@Segment@mkvparser@@QBEPBVCues@2@XZ");
    todo("implement");
    mkvparser::Cues const * __result = _sub_731010(this);
    return __result;
}

_extern mkvparser::Chapters const *_sub_730F20(mkvparser::Segment const *const);
mkvparser::Chapters const *mkvparser::Segment::GetChapters() const // 0x730F20
{
    mangled_assert("?GetChapters@Segment@mkvparser@@QBEPBVChapters@2@XZ");
    todo("implement");
    mkvparser::Chapters const * __result = _sub_730F20(this);
    return __result;
}

_extern mkvparser::SeekHead const *_sub_731CA0(mkvparser::Segment const *const);
mkvparser::SeekHead const *mkvparser::Segment::GetSeekHead() const // 0x731CA0
{
    mangled_assert("?GetSeekHead@Segment@mkvparser@@QBEPBVSeekHead@2@XZ");
    todo("implement");
    mkvparser::SeekHead const * __result = _sub_731CA0(this);
    return __result;
}

_extern long long _sub_731060(mkvparser::Segment const *const);
long long mkvparser::Segment::GetDuration() const // 0x731060
{
    mangled_assert("?GetDuration@Segment@mkvparser@@QBE_JXZ");
    todo("implement");
    long long __result = _sub_731060(this);
    return __result;
}

_extern _sub_72DF70(mkvparser::Chapters *const, mkvparser::Segment *, long long, long long, long long, long long);
mkvparser::Chapters::Chapters(mkvparser::Segment *, long long, long long, long long, long long) // 0x72DF70
{
    mangled_assert("??0Chapters@mkvparser@@QAE@PAVSegment@1@_J111@Z");
    todo("implement");
    _sub_72DF70(this, arg, arg, arg, arg, arg);
}

_extern void _sub_72E5C0(mkvparser::Chapters *const);
mkvparser::Chapters::~Chapters() // 0x72E5C0
{
    mangled_assert("??1Chapters@mkvparser@@QAE@XZ");
    todo("implement");
    _sub_72E5C0(this);
}

_extern long _sub_733EE0(mkvparser::Chapters *const);
long mkvparser::Chapters::Parse() // 0x733EE0
{
    mangled_assert("?Parse@Chapters@mkvparser@@QAEJXZ");
    todo("implement");
    long __result = _sub_733EE0(this);
    return __result;
}

_extern __int32 _sub_7310F0(mkvparser::Chapters const *const);
__int32 mkvparser::Chapters::GetEditionCount() const // 0x7310F0
{
    mangled_assert("?GetEditionCount@Chapters@mkvparser@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_7310F0(this);
    return __result;
}

_extern mkvparser::Chapters::Edition const *_sub_7310D0(mkvparser::Chapters const *const, __int32);
mkvparser::Chapters::Edition const *mkvparser::Chapters::GetEdition(__int32) const // 0x7310D0
{
    mangled_assert("?GetEdition@Chapters@mkvparser@@QBEPBVEdition@12@H@Z");
    todo("implement");
    mkvparser::Chapters::Edition const * __result = _sub_7310D0(this, arg);
    return __result;
}

_extern bool _sub_730A30(mkvparser::Chapters *const);
bool mkvparser::Chapters::ExpandEditionsArray() // 0x730A30
{
    mangled_assert("?ExpandEditionsArray@Chapters@mkvparser@@AAE_NXZ");
    todo("implement");
    bool __result = _sub_730A30(this);
    return __result;
}

_extern long _sub_7365C0(mkvparser::Chapters *const, long long, long long);
long mkvparser::Chapters::ParseEdition(long long, long long) // 0x7365C0
{
    mangled_assert("?ParseEdition@Chapters@mkvparser@@AAEJ_J0@Z");
    todo("implement");
    long __result = _sub_7365C0(this, arg, arg);
    return __result;
}

_extern _sub_72E2A0(mkvparser::Chapters::Edition *const);
mkvparser::Chapters::Edition::Edition() // 0x72E2A0
{
    mangled_assert("??0Edition@Chapters@mkvparser@@AAE@XZ");
    todo("implement");
    _sub_72E2A0(this);
}

_extern void _sub_72E770(mkvparser::Chapters::Edition *const);
mkvparser::Chapters::Edition::~Edition() // 0x72E770
{
    mangled_assert("??1Edition@Chapters@mkvparser@@AAE@XZ");
    todo("implement");
    _sub_72E770(this);
}

_extern __int32 _sub_730DC0(mkvparser::Chapters::Edition const *const);
__int32 mkvparser::Chapters::Edition::GetAtomCount() const // 0x730DC0
{
    mangled_assert("?GetAtomCount@Edition@Chapters@mkvparser@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_730DC0(this);
    return __result;
}

_extern mkvparser::Chapters::Atom const *_sub_730DA0(mkvparser::Chapters::Edition const *const, __int32);
mkvparser::Chapters::Atom const *mkvparser::Chapters::Edition::GetAtom(__int32) const // 0x730DA0
{
    mangled_assert("?GetAtom@Edition@Chapters@mkvparser@@QBEPBVAtom@23@H@Z");
    todo("implement");
    mkvparser::Chapters::Atom const * __result = _sub_730DA0(this, arg);
    return __result;
}

_extern void _sub_7328B0(mkvparser::Chapters::Edition *const);
void mkvparser::Chapters::Edition::Init() // 0x7328B0
{
    mangled_assert("?Init@Edition@Chapters@mkvparser@@AAEXXZ");
    todo("implement");
    _sub_7328B0(this);
}

_extern void _sub_7384B0(mkvparser::Chapters::Edition const *const, mkvparser::Chapters::Edition &);
void mkvparser::Chapters::Edition::ShallowCopy(mkvparser::Chapters::Edition &) const // 0x7384B0
{
    mangled_assert("?ShallowCopy@Edition@Chapters@mkvparser@@ABEXAAV123@@Z");
    todo("implement");
    _sub_7384B0(this, arg);
}

_extern void _sub_72EED0(mkvparser::Chapters::Edition *const);
void mkvparser::Chapters::Edition::Clear() // 0x72EED0
{
    mangled_assert("?Clear@Edition@Chapters@mkvparser@@AAEXXZ");
    todo("implement");
    _sub_72EED0(this);
}

_extern long _sub_734AC0(mkvparser::Chapters::Edition *const, mkvparser::IMkvReader *, long long, long long);
long mkvparser::Chapters::Edition::Parse(mkvparser::IMkvReader *, long long, long long) // 0x734AC0
{
    mangled_assert("?Parse@Edition@Chapters@mkvparser@@AAEJPAVIMkvReader@3@_J1@Z");
    todo("implement");
    long __result = _sub_734AC0(this, arg, arg, arg);
    return __result;
}

_extern long _sub_735510(mkvparser::Chapters::Edition *const, mkvparser::IMkvReader *, long long, long long);
long mkvparser::Chapters::Edition::ParseAtom(mkvparser::IMkvReader *, long long, long long) // 0x735510
{
    mangled_assert("?ParseAtom@Edition@Chapters@mkvparser@@AAEJPAVIMkvReader@3@_J1@Z");
    todo("implement");
    long __result = _sub_735510(this, arg, arg, arg);
    return __result;
}

_extern bool _sub_7307E0(mkvparser::Chapters::Edition *const);
bool mkvparser::Chapters::Edition::ExpandAtomsArray() // 0x7307E0
{
    mangled_assert("?ExpandAtomsArray@Edition@Chapters@mkvparser@@AAE_NXZ");
    todo("implement");
    bool __result = _sub_7307E0(this);
    return __result;
}

_extern _sub_72DE60(mkvparser::Chapters::Atom *const);
mkvparser::Chapters::Atom::Atom() // 0x72DE60
{
    mangled_assert("??0Atom@Chapters@mkvparser@@AAE@XZ");
    todo("implement");
    _sub_72DE60(this);
}

_extern void _sub_72E560(mkvparser::Chapters::Atom *const);
mkvparser::Chapters::Atom::~Atom() // 0x72E560
{
    mangled_assert("??1Atom@Chapters@mkvparser@@AAE@XZ");
    todo("implement");
    _sub_72E560(this);
}

_extern void _sub_72E570(mkvparser::AudioTrack *const);
_inline mkvparser::AudioTrack::~AudioTrack() // 0x72E570
{
    mangled_assert("??1AudioTrack@mkvparser@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_72E570(this);
}

_extern unsigned long long _sub_731F60(mkvparser::Chapters::Atom const *const);
unsigned long long mkvparser::Chapters::Atom::GetUID() const // 0x731F60
{
    mangled_assert("?GetUID@Atom@Chapters@mkvparser@@QBE_KXZ");
    todo("implement");
    unsigned long long __result = _sub_731F60(this);
    return __result;
}

_extern char const *_sub_731D20(mkvparser::Chapters::Atom const *const);
char const *mkvparser::Chapters::Atom::GetStringUID() const // 0x731D20
{
    mangled_assert("?GetStringUID@Atom@Chapters@mkvparser@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_731D20(this);
    return __result;
}

_extern long long _sub_731CD0(mkvparser::Chapters::Atom const *const);
long long mkvparser::Chapters::Atom::GetStartTimecode() const // 0x731CD0
{
    mangled_assert("?GetStartTimecode@Atom@Chapters@mkvparser@@QBE_JXZ");
    todo("implement");
    long long __result = _sub_731CD0(this);
    return __result;
}

_extern long long _sub_731D00(mkvparser::Chapters::Atom const *const);
long long mkvparser::Chapters::Atom::GetStopTimecode() const // 0x731D00
{
    mangled_assert("?GetStopTimecode@Atom@Chapters@mkvparser@@QBE_JXZ");
    todo("implement");
    long long __result = _sub_731D00(this);
    return __result;
}

_extern long long _sub_731CB0(mkvparser::Chapters::Atom const *const, mkvparser::Chapters const *);
long long mkvparser::Chapters::Atom::GetStartTime(mkvparser::Chapters const *) const // 0x731CB0
{
    mangled_assert("?GetStartTime@Atom@Chapters@mkvparser@@QBE_JPBV23@@Z");
    todo("implement");
    long long __result = _sub_731CB0(this, arg);
    return __result;
}

_extern long long _sub_731CE0(mkvparser::Chapters::Atom const *const, mkvparser::Chapters const *);
long long mkvparser::Chapters::Atom::GetStopTime(mkvparser::Chapters const *) const // 0x731CE0
{
    mangled_assert("?GetStopTime@Atom@Chapters@mkvparser@@QBE_JPBV23@@Z");
    todo("implement");
    long long __result = _sub_731CE0(this, arg);
    return __result;
}

_extern __int32 _sub_731050(mkvparser::Chapters::Atom const *const);
__int32 mkvparser::Chapters::Atom::GetDisplayCount() const // 0x731050
{
    mangled_assert("?GetDisplayCount@Atom@Chapters@mkvparser@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_731050(this);
    return __result;
}

_extern mkvparser::Chapters::Display const *_sub_731030(mkvparser::Chapters::Atom const *const, __int32);
mkvparser::Chapters::Display const *mkvparser::Chapters::Atom::GetDisplay(__int32) const // 0x731030
{
    mangled_assert("?GetDisplay@Atom@Chapters@mkvparser@@QBEPBVDisplay@23@H@Z");
    todo("implement");
    mkvparser::Chapters::Display const * __result = _sub_731030(this, arg);
    return __result;
}

_extern void _sub_7326F0(mkvparser::Chapters::Atom *const);
void mkvparser::Chapters::Atom::Init() // 0x7326F0
{
    mangled_assert("?Init@Atom@Chapters@mkvparser@@AAEXXZ");
    todo("implement");
    _sub_7326F0(this);
}

_extern void _sub_738440(mkvparser::Chapters::Atom const *const, mkvparser::Chapters::Atom &);
void mkvparser::Chapters::Atom::ShallowCopy(mkvparser::Chapters::Atom &) const // 0x738440
{
    mangled_assert("?ShallowCopy@Atom@Chapters@mkvparser@@ABEXAAV123@@Z");
    todo("implement");
    _sub_738440(this, arg);
}

_extern void _sub_72EE20(mkvparser::Chapters::Atom *const);
void mkvparser::Chapters::Atom::Clear() // 0x72EE20
{
    mangled_assert("?Clear@Atom@Chapters@mkvparser@@AAEXXZ");
    todo("implement");
    _sub_72EE20(this);
}

_extern long _sub_733480(mkvparser::Chapters::Atom *const, mkvparser::IMkvReader *, long long, long long);
long mkvparser::Chapters::Atom::Parse(mkvparser::IMkvReader *, long long, long long) // 0x733480
{
    mangled_assert("?Parse@Atom@Chapters@mkvparser@@AAEJPAVIMkvReader@3@_J1@Z");
    todo("implement");
    long __result = _sub_733480(this, arg, arg, arg);
    return __result;
}

_extern long long _sub_731D30(mkvparser::Chapters const *, long long);
long long mkvparser::Chapters::Atom::GetTime(mkvparser::Chapters const *pChapters, long long timecode) // 0x731D30
{
    mangled_assert("?GetTime@Atom@Chapters@mkvparser@@CG_JPBV23@_J@Z");
    todo("implement");
    long long __result = _sub_731D30(pChapters, timecode);
    return __result;
}

_extern long _sub_736570(mkvparser::Chapters::Atom *const, mkvparser::IMkvReader *, long long, long long);
long mkvparser::Chapters::Atom::ParseDisplay(mkvparser::IMkvReader *, long long, long long) // 0x736570
{
    mangled_assert("?ParseDisplay@Atom@Chapters@mkvparser@@AAEJPAVIMkvReader@3@_J1@Z");
    todo("implement");
    long __result = _sub_736570(this, arg, arg, arg);
    return __result;
}

_extern bool _sub_730900(mkvparser::Chapters::Atom *const);
bool mkvparser::Chapters::Atom::ExpandDisplaysArray() // 0x730900
{
    mangled_assert("?ExpandDisplaysArray@Atom@Chapters@mkvparser@@AAE_NXZ");
    todo("implement");
    bool __result = _sub_730900(this);
    return __result;
}

_extern _sub_72E250(mkvparser::Chapters::Display *const);
mkvparser::Chapters::Display::Display() // 0x72E250
{
    mangled_assert("??0Display@Chapters@mkvparser@@AAE@XZ");
    todo("implement");
    _sub_72E250(this);
}

_extern void _sub_72E740(mkvparser::Chapters::Display *const);
mkvparser::Chapters::Display::~Display() // 0x72E740
{
    mangled_assert("??1Display@Chapters@mkvparser@@AAE@XZ");
    todo("implement");
    _sub_72E740(this);
}

_extern char const *_sub_731D10(mkvparser::Chapters::Display const *const);
char const *mkvparser::Chapters::Display::GetString() const // 0x731D10
{
    mangled_assert("?GetString@Display@Chapters@mkvparser@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_731D10(this);
    return __result;
}

_extern char const *_sub_731710(mkvparser::Chapters::Display const *const);
char const *mkvparser::Chapters::Display::GetLanguage() const // 0x731710
{
    mangled_assert("?GetLanguage@Display@Chapters@mkvparser@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_731710(this);
    return __result;
}

_extern char const *_sub_731000(mkvparser::Chapters::Display const *const);
char const *mkvparser::Chapters::Display::GetCountry() const // 0x731000
{
    mangled_assert("?GetCountry@Display@Chapters@mkvparser@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_731000(this);
    return __result;
}

_extern void _sub_732820(mkvparser::Chapters::Display *const);
void mkvparser::Chapters::Display::Init() // 0x732820
{
    mangled_assert("?Init@Display@Chapters@mkvparser@@AAEXXZ");
    todo("implement");
    _sub_732820(this);
}

_extern void _sub_738490(mkvparser::Chapters::Display const *const, mkvparser::Chapters::Display &);
void mkvparser::Chapters::Display::ShallowCopy(mkvparser::Chapters::Display &) const // 0x738490
{
    mangled_assert("?ShallowCopy@Display@Chapters@mkvparser@@ABEXAAV123@@Z");
    todo("implement");
    _sub_738490(this, arg);
}

_extern void _sub_72EE90(mkvparser::Chapters::Display *const);
void mkvparser::Chapters::Display::Clear() // 0x72EE90
{
    mangled_assert("?Clear@Display@Chapters@mkvparser@@AAEXXZ");
    todo("implement");
    _sub_72EE90(this);
}

_extern long _sub_7344F0(mkvparser::Chapters::Display *const, mkvparser::IMkvReader *, long long, long long);
long mkvparser::Chapters::Display::Parse(mkvparser::IMkvReader *, long long, long long) // 0x7344F0
{
    mangled_assert("?Parse@Display@Chapters@mkvparser@@AAEJPAVIMkvReader@3@_J1@Z");
    todo("implement");
    long __result = _sub_7344F0(this, arg, arg, arg);
    return __result;
}

_extern _sub_72E3E0(mkvparser::SegmentInfo *const, mkvparser::Segment *, long long, long long, long long, long long);
mkvparser::SegmentInfo::SegmentInfo(mkvparser::Segment *, long long, long long, long long, long long) // 0x72E3E0
{
    mangled_assert("??0SegmentInfo@mkvparser@@QAE@PAVSegment@1@_J111@Z");
    todo("implement");
    _sub_72E3E0(this, arg, arg, arg, arg, arg);
}

_extern void _sub_72E8E0(mkvparser::SegmentInfo *const);
mkvparser::SegmentInfo::~SegmentInfo() // 0x72E8E0
{
    mangled_assert("??1SegmentInfo@mkvparser@@QAE@XZ");
    todo("implement");
    _sub_72E8E0(this);
}

_extern void _sub_72E920(mkvparser::SimpleBlock *const);
_inline mkvparser::SimpleBlock::~SimpleBlock() // 0x72E920
{
    mangled_assert("??1SimpleBlock@mkvparser@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_72E920(this);
}

_extern long _sub_734DD0(mkvparser::SegmentInfo *const);
long mkvparser::SegmentInfo::Parse() // 0x734DD0
{
    mangled_assert("?Parse@SegmentInfo@mkvparser@@QAEJXZ");
    todo("implement");
    long __result = _sub_734DD0(this);
    return __result;
}

_extern long long _sub_731E90(mkvparser::SegmentInfo const *const);
long long mkvparser::SegmentInfo::GetTimeCodeScale() const // 0x731E90
{
    mangled_assert("?GetTimeCodeScale@SegmentInfo@mkvparser@@QBE_JXZ");
    todo("implement");
    long long __result = _sub_731E90(this);
    return __result;
}

_extern long long _sub_731070(mkvparser::SegmentInfo const *const);
long long mkvparser::SegmentInfo::GetDuration() const // 0x731070
{
    mangled_assert("?GetDuration@SegmentInfo@mkvparser@@QBE_JXZ");
    todo("implement");
    long long __result = _sub_731070(this);
    return __result;
}

_extern char const *_sub_731830(mkvparser::SegmentInfo const *const);
char const *mkvparser::SegmentInfo::GetMuxingAppAsUTF8() const // 0x731830
{
    mangled_assert("?GetMuxingAppAsUTF8@SegmentInfo@mkvparser@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_731830(this);
    return __result;
}

_extern char const *_sub_732090(mkvparser::SegmentInfo const *const);
char const *mkvparser::SegmentInfo::GetWritingAppAsUTF8() const // 0x732090
{
    mangled_assert("?GetWritingAppAsUTF8@SegmentInfo@mkvparser@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_732090(this);
    return __result;
}

_extern char const *_sub_731EA0(mkvparser::SegmentInfo const *const);
char const *mkvparser::SegmentInfo::GetTitleAsUTF8() const // 0x731EA0
{
    mangled_assert("?GetTitleAsUTF8@SegmentInfo@mkvparser@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_731EA0(this);
    return __result;
}

_extern _sub_72E090(mkvparser::ContentEncoding::ContentCompression *const);
mkvparser::ContentEncoding::ContentCompression::ContentCompression() // 0x72E090
{
    mangled_assert("??0ContentCompression@ContentEncoding@mkvparser@@QAE@XZ");
    todo("implement");
    _sub_72E090(this);
}

_extern void _sub_72E630(mkvparser::ContentEncoding::ContentCompression *const);
mkvparser::ContentEncoding::ContentCompression::~ContentCompression() // 0x72E630
{
    mangled_assert("??1ContentCompression@ContentEncoding@mkvparser@@QAE@XZ");
    todo("implement");
    _sub_72E630(this);
}

_extern _sub_72E120(mkvparser::ContentEncoding::ContentEncryption *const);
mkvparser::ContentEncoding::ContentEncryption::ContentEncryption() // 0x72E120
{
    mangled_assert("??0ContentEncryption@ContentEncoding@mkvparser@@QAE@XZ");
    todo("implement");
    _sub_72E120(this);
}

_extern void _sub_72E6C0(mkvparser::ContentEncoding::ContentEncryption *const);
mkvparser::ContentEncoding::ContentEncryption::~ContentEncryption() // 0x72E6C0
{
    mangled_assert("??1ContentEncryption@ContentEncoding@mkvparser@@QAE@XZ");
    todo("implement");
    _sub_72E6C0(this);
}

_extern _sub_72E0D0(mkvparser::ContentEncoding *const);
mkvparser::ContentEncoding::ContentEncoding() // 0x72E0D0
{
    mangled_assert("??0ContentEncoding@mkvparser@@QAE@XZ");
    todo("implement");
    _sub_72E0D0(this);
}

_extern void _sub_72E650(mkvparser::ContentEncoding *const);
mkvparser::ContentEncoding::~ContentEncoding() // 0x72E650
{
    mangled_assert("??1ContentEncoding@mkvparser@@QAE@XZ");
    todo("implement");
    _sub_72E650(this);
}

_extern mkvparser::ContentEncoding::ContentCompression const *_sub_730F70(mkvparser::ContentEncoding const *const, unsigned long);
mkvparser::ContentEncoding::ContentCompression const *mkvparser::ContentEncoding::GetCompressionByIndex(unsigned long) const // 0x730F70
{
    mangled_assert("?GetCompressionByIndex@ContentEncoding@mkvparser@@QBEPBUContentCompression@12@K@Z");
    todo("implement");
    mkvparser::ContentEncoding::ContentCompression const * __result = _sub_730F70(this, arg);
    return __result;
}

_extern unsigned long _sub_730F90(mkvparser::ContentEncoding const *const);
unsigned long mkvparser::ContentEncoding::GetCompressionCount() const // 0x730F90
{
    mangled_assert("?GetCompressionCount@ContentEncoding@mkvparser@@QBEKXZ");
    todo("implement");
    unsigned long __result = _sub_730F90(this);
    return __result;
}

_extern mkvparser::ContentEncoding::ContentEncryption const *_sub_731110(mkvparser::ContentEncoding const *const, unsigned long);
mkvparser::ContentEncoding::ContentEncryption const *mkvparser::ContentEncoding::GetEncryptionByIndex(unsigned long) const // 0x731110
{
    mangled_assert("?GetEncryptionByIndex@ContentEncoding@mkvparser@@QBEPBUContentEncryption@12@K@Z");
    todo("implement");
    mkvparser::ContentEncoding::ContentEncryption const * __result = _sub_731110(this, arg);
    return __result;
}

_extern unsigned long _sub_731130(mkvparser::ContentEncoding const *const);
unsigned long mkvparser::ContentEncoding::GetEncryptionCount() const // 0x731130
{
    mangled_assert("?GetEncryptionCount@ContentEncoding@mkvparser@@QBEKXZ");
    todo("implement");
    unsigned long __result = _sub_731130(this);
    return __result;
}

_extern long _sub_735C30(mkvparser::ContentEncoding *const, long long, long long, mkvparser::IMkvReader *, mkvparser::ContentEncoding::ContentEncAESSettings *);
long mkvparser::ContentEncoding::ParseContentEncAESSettingsEntry(long long, long long, mkvparser::IMkvReader *, mkvparser::ContentEncoding::ContentEncAESSettings *) // 0x735C30
{
    mangled_assert("?ParseContentEncAESSettingsEntry@ContentEncoding@mkvparser@@QAEJ_J0PAVIMkvReader@2@PAUContentEncAESSettings@12@@Z");
    todo("implement");
    long __result = _sub_735C30(this, arg, arg, arg, arg);
    return __result;
}

_extern long _sub_735D00(mkvparser::ContentEncoding *const, long long, long long, mkvparser::IMkvReader *);
long mkvparser::ContentEncoding::ParseContentEncodingEntry(long long, long long, mkvparser::IMkvReader *) // 0x735D00
{
    mangled_assert("?ParseContentEncodingEntry@ContentEncoding@mkvparser@@QAEJ_J0PAVIMkvReader@2@@Z");
    todo("implement");
    long __result = _sub_735D00(this, arg, arg, arg);
    return __result;
}

_extern long _sub_735AA0(mkvparser::ContentEncoding *const, long long, long long, mkvparser::IMkvReader *, mkvparser::ContentEncoding::ContentCompression *);
long mkvparser::ContentEncoding::ParseCompressionEntry(long long, long long, mkvparser::IMkvReader *, mkvparser::ContentEncoding::ContentCompression *) // 0x735AA0
{
    mangled_assert("?ParseCompressionEntry@ContentEncoding@mkvparser@@QAEJ_J0PAVIMkvReader@2@PAUContentCompression@12@@Z");
    todo("implement");
    long __result = _sub_735AA0(this, arg, arg, arg, arg);
    return __result;
}

_extern long _sub_7366F0(mkvparser::ContentEncoding *const, long long, long long, mkvparser::IMkvReader *, mkvparser::ContentEncoding::ContentEncryption *);
long mkvparser::ContentEncoding::ParseEncryptionEntry(long long, long long, mkvparser::IMkvReader *, mkvparser::ContentEncoding::ContentEncryption *) // 0x7366F0
{
    mangled_assert("?ParseEncryptionEntry@ContentEncoding@mkvparser@@QAEJ_J0PAVIMkvReader@2@PAUContentEncryption@12@@Z");
    todo("implement");
    long __result = _sub_7366F0(this, arg, arg, arg, arg);
    return __result;
}

_extern _sub_72E480(mkvparser::Track *const, mkvparser::Segment *, long long, long long);
mkvparser::Track::Track(mkvparser::Segment *, long long, long long) // 0x72E480
{
    mangled_assert("??0Track@mkvparser@@IAE@PAVSegment@1@_J1@Z");
    todo("implement");
    _sub_72E480(this, arg, arg, arg);
}

_extern void _sub_72E940(mkvparser::Track *const);
mkvparser::Track::~Track() // 0x72E940
{
    mangled_assert("??1Track@mkvparser@@UAE@XZ");
    todo("implement");
    _sub_72E940(this);
}

_extern long _sub_72F120(mkvparser::Segment *, mkvparser::Track::Info const &, long long, long long, mkvparser::Track *&);
long mkvparser::Track::Create(mkvparser::Segment *pSegment, mkvparser::Track::Info const &info, long long element_start, long long element_size, mkvparser::Track *&pResult) // 0x72F120
{
    mangled_assert("?Create@Track@mkvparser@@SGJPAVSegment@2@ABVInfo@12@_J2AAPAV12@@Z");
    todo("implement");
    long __result = _sub_72F120(pSegment, info, element_start, element_size, pResult);
    return __result;
}

_extern _sub_72E2B0(mkvparser::Track::Info *const);
mkvparser::Track::Info::Info() // 0x72E2B0
{
    mangled_assert("??0Info@Track@mkvparser@@QAE@XZ");
    todo("implement");
    _sub_72E2B0(this);
}

_extern void _sub_72E790(mkvparser::Track::Info *const);
mkvparser::Track::Info::~Info() // 0x72E790
{
    mangled_assert("??1Info@Track@mkvparser@@QAE@XZ");
    todo("implement");
    _sub_72E790(this);
}

_extern void _sub_72EF30(mkvparser::Track::Info *const);
void mkvparser::Track::Info::Clear() // 0x72EF30
{
    mangled_assert("?Clear@Info@Track@mkvparser@@QAEXXZ");
    todo("implement");
    _sub_72EF30(this);
}

_extern __int32 _sub_72F070(mkvparser::Track::Info const *const, char **, mkvparser::Track::Info &);
__int32 mkvparser::Track::Info::CopyStr(char **, mkvparser::Track::Info &) const // 0x72F070
{
    mangled_assert("?CopyStr@Info@Track@mkvparser@@ABEHPQ123@PADAAV123@@Z");
    todo("implement");
    __int32 __result = _sub_72F070(this, arg, arg);
    return __result;
}

_extern __int32 _sub_72EF90(mkvparser::Track::Info const *const, mkvparser::Track::Info &);
__int32 mkvparser::Track::Info::Copy(mkvparser::Track::Info &) const // 0x72EF90
{
    mangled_assert("?Copy@Info@Track@mkvparser@@QBEHAAV123@@Z");
    todo("implement");
    __int32 __result = _sub_72EF90(this, arg);
    return __result;
}

_extern mkvparser::BlockEntry const *_sub_7310C0(mkvparser::Track const *const);
mkvparser::BlockEntry const *mkvparser::Track::GetEOS() const // 0x7310C0
{
    mangled_assert("?GetEOS@Track@mkvparser@@QBEPBVBlockEntry@2@XZ");
    todo("implement");
    mkvparser::BlockEntry const * __result = _sub_7310C0(this);
    return __result;
}

_extern long _sub_731F50(mkvparser::Track const *const);
long mkvparser::Track::GetType() const // 0x731F50
{
    mangled_assert("?GetType@Track@mkvparser@@QBEJXZ");
    todo("implement");
    long __result = _sub_731F50(this);
    return __result;
}

_extern long _sub_731C50(mkvparser::Track const *const);
long mkvparser::Track::GetNumber() const // 0x731C50
{
    mangled_assert("?GetNumber@Track@mkvparser@@QBEJXZ");
    todo("implement");
    long __result = _sub_731C50(this);
    return __result;
}

_extern unsigned long long _sub_732010(mkvparser::Track const *const);
unsigned long long mkvparser::Track::GetUid() const // 0x732010
{
    mangled_assert("?GetUid@Track@mkvparser@@QBE_KXZ");
    todo("implement");
    unsigned long long __result = _sub_732010(this);
    return __result;
}

_extern char const *_sub_731840(mkvparser::Track const *const);
char const *mkvparser::Track::GetNameAsUTF8() const // 0x731840
{
    mangled_assert("?GetNameAsUTF8@Track@mkvparser@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_731840(this);
    return __result;
}

_extern char const *_sub_731720(mkvparser::Track const *const);
char const *mkvparser::Track::GetLanguage() const // 0x731720
{
    mangled_assert("?GetLanguage@Track@mkvparser@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_731720(this);
    return __result;
}

_extern char const *_sub_730F50(mkvparser::Track const *const);
char const *mkvparser::Track::GetCodecNameAsUTF8() const // 0x730F50
{
    mangled_assert("?GetCodecNameAsUTF8@Track@mkvparser@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_730F50(this);
    return __result;
}

_extern char const *_sub_730F40(mkvparser::Track const *const);
char const *mkvparser::Track::GetCodecId() const // 0x730F40
{
    mangled_assert("?GetCodecId@Track@mkvparser@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_730F40(this);
    return __result;
}

_extern unsigned char const *_sub_730F60(mkvparser::Track const *const, unsigned __int32 &);
unsigned char const *mkvparser::Track::GetCodecPrivate(unsigned __int32 &) const // 0x730F60
{
    mangled_assert("?GetCodecPrivate@Track@mkvparser@@QBEPBEAAI@Z");
    todo("implement");
    unsigned char const * __result = _sub_730F60(this, arg);
    return __result;
}

_extern bool _sub_731700(mkvparser::Track const *const);
bool mkvparser::Track::GetLacing() const // 0x731700
{
    mangled_assert("?GetLacing@Track@mkvparser@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_731700(this);
    return __result;
}

_extern unsigned long long _sub_731020(mkvparser::Track const *const);
unsigned long long mkvparser::Track::GetDefaultDuration() const // 0x731020
{
    mangled_assert("?GetDefaultDuration@Track@mkvparser@@QBE_KXZ");
    todo("implement");
    unsigned long long __result = _sub_731020(this);
    return __result;
}

_extern long _sub_731520(mkvparser::Track const *const, mkvparser::BlockEntry const *&);
long mkvparser::Track::GetFirst(mkvparser::BlockEntry const *&) const // 0x731520
{
    mangled_assert("?GetFirst@Track@mkvparser@@QBEJAAPBVBlockEntry@2@@Z");
    todo("implement");
    long __result = _sub_731520(this, arg);
    return __result;
}

_extern long _sub_731B50(mkvparser::Track const *const, mkvparser::BlockEntry const *, mkvparser::BlockEntry const *&);
long mkvparser::Track::GetNext(mkvparser::BlockEntry const *, mkvparser::BlockEntry const *&) const // 0x731B50
{
    mangled_assert("?GetNext@Track@mkvparser@@QBEJPBVBlockEntry@2@AAPBV32@@Z");
    todo("implement");
    long __result = _sub_731B50(this, arg, arg);
    return __result;
}

_extern bool _sub_738810(mkvparser::Track const *const, mkvparser::BlockEntry const *);
bool mkvparser::Track::VetEntry(mkvparser::BlockEntry const *) const // 0x738810
{
    mangled_assert("?VetEntry@Track@mkvparser@@UBE_NPBVBlockEntry@2@@Z");
    todo("implement");
    bool __result = _sub_738810(this, arg);
    return __result;
}

_extern long _sub_7381C0(mkvparser::Track const *const, long long, mkvparser::BlockEntry const *&);
long mkvparser::Track::Seek(long long, mkvparser::BlockEntry const *&) const // 0x7381C0
{
    mangled_assert("?Seek@Track@mkvparser@@UBEJ_JAAPBVBlockEntry@2@@Z");
    todo("implement");
    long __result = _sub_7381C0(this, arg, arg);
    return __result;
}

_extern mkvparser::ContentEncoding const *_sub_730FA0(mkvparser::Track const *const, unsigned long);
mkvparser::ContentEncoding const *mkvparser::Track::GetContentEncodingByIndex(unsigned long) const // 0x730FA0
{
    mangled_assert("?GetContentEncodingByIndex@Track@mkvparser@@QBEPBVContentEncoding@2@K@Z");
    todo("implement");
    mkvparser::ContentEncoding const * __result = _sub_730FA0(this, arg);
    return __result;
}

_extern unsigned long _sub_730FC0(mkvparser::Track const *const);
unsigned long mkvparser::Track::GetContentEncodingCount() const // 0x730FC0
{
    mangled_assert("?GetContentEncodingCount@Track@mkvparser@@QBEKXZ");
    todo("implement");
    unsigned long __result = _sub_730FC0(this);
    return __result;
}

_extern long _sub_736040(mkvparser::Track *const, long long, long long);
long mkvparser::Track::ParseContentEncodingsEntry(long long, long long) // 0x736040
{
    mangled_assert("?ParseContentEncodingsEntry@Track@mkvparser@@QAEJ_J0@Z");
    todo("implement");
    long __result = _sub_736040(this, arg, arg);
    return __result;
}

_extern _sub_72E280(mkvparser::Track::EOSBlock *const);
mkvparser::Track::EOSBlock::EOSBlock() // 0x72E280
{
    mangled_assert("??0EOSBlock@Track@mkvparser@@QAE@XZ");
    todo("implement");
    _sub_72E280(this);
}

_extern mkvparser::BlockEntry::Kind _sub_7316D0(mkvparser::Track::EOSBlock const *const);
mkvparser::BlockEntry::Kind mkvparser::Track::EOSBlock::GetKind() const // 0x7316D0
{
    mangled_assert("?GetKind@EOSBlock@Track@mkvparser@@UBE?AW4Kind@BlockEntry@3@XZ");
    todo("implement");
    mkvparser::BlockEntry::Kind __result = _sub_7316D0(this);
    return __result;
}

_extern mkvparser::Block const *_sub_730E20(mkvparser::Track::EOSBlock const *const);
mkvparser::Block const *mkvparser::Track::EOSBlock::GetBlock() const // 0x730E20
{
    mangled_assert("?GetBlock@EOSBlock@Track@mkvparser@@UBEPBVBlock@3@XZ");
    todo("implement");
    mkvparser::Block const * __result = _sub_730E20(this);
    return __result;
}

_extern _sub_72E530(mkvparser::VideoTrack *const, mkvparser::Segment *, long long, long long);
mkvparser::VideoTrack::VideoTrack(mkvparser::Segment *, long long, long long) // 0x72E530
{
    mangled_assert("??0VideoTrack@mkvparser@@AAE@PAVSegment@1@_J1@Z");
    todo("implement");
    _sub_72E530(this, arg, arg, arg);
}

_extern long _sub_7352B0(mkvparser::Segment *, mkvparser::Track::Info const &, long long, long long, mkvparser::VideoTrack *&);
long mkvparser::VideoTrack::Parse(mkvparser::Segment *pSegment, mkvparser::Track::Info const &info, long long element_start, long long element_size, mkvparser::VideoTrack *&pResult) // 0x7352B0
{
    mangled_assert("?Parse@VideoTrack@mkvparser@@SGJPAVSegment@2@ABVInfo@Track@2@_J2AAPAV12@@Z");
    todo("implement");
    long __result = _sub_7352B0(pSegment, info, element_start, element_size, pResult);
    return __result;
}

_extern bool _sub_738820(mkvparser::VideoTrack const *const, mkvparser::BlockEntry const *);
bool mkvparser::VideoTrack::VetEntry(mkvparser::BlockEntry const *) const // 0x738820
{
    mangled_assert("?VetEntry@VideoTrack@mkvparser@@UBE_NPBVBlockEntry@2@@Z");
    todo("implement");
    bool __result = _sub_738820(this, arg);
    return __result;
}

_extern long _sub_7382F0(mkvparser::VideoTrack const *const, long long, mkvparser::BlockEntry const *&);
long mkvparser::VideoTrack::Seek(long long, mkvparser::BlockEntry const *&) const // 0x7382F0
{
    mangled_assert("?Seek@VideoTrack@mkvparser@@UBEJ_JAAPBVBlockEntry@2@@Z");
    todo("implement");
    long __result = _sub_7382F0(this, arg, arg);
    return __result;
}

_extern long long _sub_732080(mkvparser::VideoTrack const *const);
long long mkvparser::VideoTrack::GetWidth() const // 0x732080
{
    mangled_assert("?GetWidth@VideoTrack@mkvparser@@QBE_JXZ");
    todo("implement");
    long long __result = _sub_732080(this);
    return __result;
}

_extern long long _sub_731680(mkvparser::VideoTrack const *const);
long long mkvparser::VideoTrack::GetHeight() const // 0x731680
{
    mangled_assert("?GetHeight@VideoTrack@mkvparser@@QBE_JXZ");
    todo("implement");
    long long __result = _sub_731680(this);
    return __result;
}

_extern double _sub_731670(mkvparser::VideoTrack const *const);
double mkvparser::VideoTrack::GetFrameRate() const // 0x731670
{
    mangled_assert("?GetFrameRate@VideoTrack@mkvparser@@QBENXZ");
    todo("implement");
    double __result = _sub_731670(this);
    return __result;
}

_extern _sub_72DE70(mkvparser::AudioTrack *const, mkvparser::Segment *, long long, long long);
mkvparser::AudioTrack::AudioTrack(mkvparser::Segment *, long long, long long) // 0x72DE70
{
    mangled_assert("??0AudioTrack@mkvparser@@AAE@PAVSegment@1@_J1@Z");
    todo("implement");
    _sub_72DE70(this, arg, arg, arg);
}

_extern long _sub_733630(mkvparser::Segment *, mkvparser::Track::Info const &, long long, long long, mkvparser::AudioTrack *&);
long mkvparser::AudioTrack::Parse(mkvparser::Segment *pSegment, mkvparser::Track::Info const &info, long long element_start, long long element_size, mkvparser::AudioTrack *&pResult) // 0x733630
{
    mangled_assert("?Parse@AudioTrack@mkvparser@@SGJPAVSegment@2@ABVInfo@Track@2@_J2AAPAV12@@Z");
    todo("implement");
    long __result = _sub_733630(pSegment, info, element_start, element_size, pResult);
    return __result;
}

_extern double _sub_731C90(mkvparser::AudioTrack const *const);
double mkvparser::AudioTrack::GetSamplingRate() const // 0x731C90
{
    mangled_assert("?GetSamplingRate@AudioTrack@mkvparser@@QBENXZ");
    todo("implement");
    double __result = _sub_731C90(this);
    return __result;
}

_extern long long _sub_730F10(mkvparser::AudioTrack const *const);
long long mkvparser::AudioTrack::GetChannels() const // 0x730F10
{
    mangled_assert("?GetChannels@AudioTrack@mkvparser@@QBE_JXZ");
    todo("implement");
    long long __result = _sub_730F10(this);
    return __result;
}

_extern long long _sub_730DD0(mkvparser::AudioTrack const *const);
long long mkvparser::AudioTrack::GetBitDepth() const // 0x730DD0
{
    mangled_assert("?GetBitDepth@AudioTrack@mkvparser@@QBE_JXZ");
    todo("implement");
    long long __result = _sub_730DD0(this);
    return __result;
}

_extern _sub_72E4D0(mkvparser::Tracks *const, mkvparser::Segment *, long long, long long, long long, long long);
mkvparser::Tracks::Tracks(mkvparser::Segment *, long long, long long, long long, long long) // 0x72E4D0
{
    mangled_assert("??0Tracks@mkvparser@@QAE@PAVSegment@1@_J111@Z");
    todo("implement");
    _sub_72E4D0(this, arg, arg, arg, arg, arg);
}

_extern long _sub_7350C0(mkvparser::Tracks *const);
long mkvparser::Tracks::Parse() // 0x7350C0
{
    mangled_assert("?Parse@Tracks@mkvparser@@QAEJXZ");
    todo("implement");
    long __result = _sub_7350C0(this);
    return __result;
}

_extern unsigned long _sub_731F40(mkvparser::Tracks const *const);
unsigned long mkvparser::Tracks::GetTracksCount() const // 0x731F40
{
    mangled_assert("?GetTracksCount@Tracks@mkvparser@@QBEKXZ");
    todo("implement");
    unsigned long __result = _sub_731F40(this);
    return __result;
}

_extern long _sub_737700(mkvparser::Tracks const *const, long long, long long, long long, long long, mkvparser::Track *&);
long mkvparser::Tracks::ParseTrackEntry(long long, long long, long long, long long, mkvparser::Track *&) const // 0x737700
{
    mangled_assert("?ParseTrackEntry@Tracks@mkvparser@@ABEJ_J000AAPAVTrack@2@@Z");
    todo("implement");
    long __result = _sub_737700(this, arg, arg, arg, arg, arg);
    return __result;
}

_extern void _sub_72E9A0(mkvparser::Tracks *const);
mkvparser::Tracks::~Tracks() // 0x72E9A0
{
    mangled_assert("??1Tracks@mkvparser@@QAE@XZ");
    todo("implement");
    _sub_72E9A0(this);
}

_extern void _sub_72E9E0(mkvparser::VideoTrack *const);
_inline mkvparser::VideoTrack::~VideoTrack() // 0x72E9E0
{
    mangled_assert("??1VideoTrack@mkvparser@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_72E9E0(this);
}

_extern mkvparser::Track const *_sub_731ED0(mkvparser::Tracks const *const, long);
mkvparser::Track const *mkvparser::Tracks::GetTrackByNumber(long) const // 0x731ED0
{
    mangled_assert("?GetTrackByNumber@Tracks@mkvparser@@QBEPBVTrack@2@J@Z");
    todo("implement");
    mkvparser::Track const * __result = _sub_731ED0(this, arg);
    return __result;
}

_extern mkvparser::Track const *_sub_731EB0(mkvparser::Tracks const *const, unsigned long);
mkvparser::Track const *mkvparser::Tracks::GetTrackByIndex(unsigned long) const // 0x731EB0
{
    mangled_assert("?GetTrackByIndex@Tracks@mkvparser@@QBEPBVTrack@2@K@Z");
    todo("implement");
    mkvparser::Track const * __result = _sub_731EB0(this, arg);
    return __result;
}

_extern long _sub_7328F0(mkvparser::Cluster const *const, long long &, long &);
long mkvparser::Cluster::Load(long long &, long &) const // 0x7328F0
{
    mangled_assert("?Load@Cluster@mkvparser@@QBEJAA_JAAJ@Z");
    todo("implement");
    long __result = _sub_7328F0(this, arg, arg);
    return __result;
}

_extern long _sub_733FA0(mkvparser::Cluster const *const, long long &, long &);
long mkvparser::Cluster::Parse(long long &, long &) const // 0x733FA0
{
    mangled_assert("?Parse@Cluster@mkvparser@@QBEJAA_JAAJ@Z");
    todo("implement");
    long __result = _sub_733FA0(this, arg, arg);
    return __result;
}

_extern long _sub_7374C0(mkvparser::Cluster *const, long long, long long &, long &);
long mkvparser::Cluster::ParseSimpleBlock(long long, long long &, long &) // 0x7374C0
{
    mangled_assert("?ParseSimpleBlock@Cluster@mkvparser@@AAEJ_JAA_JAAJ@Z");
    todo("implement");
    long __result = _sub_7374C0(this, arg, arg, arg);
    return __result;
}

_extern long _sub_735560(mkvparser::Cluster *const, long long, long long &, long &);
long mkvparser::Cluster::ParseBlockGroup(long long, long long &, long &) // 0x735560
{
    mangled_assert("?ParseBlockGroup@Cluster@mkvparser@@AAEJ_JAA_JAAJ@Z");
    todo("implement");
    long __result = _sub_735560(this, arg, arg, arg);
    return __result;
}

_extern long _sub_731140(mkvparser::Cluster const *const, long, mkvparser::BlockEntry const *&);
long mkvparser::Cluster::GetEntry(long, mkvparser::BlockEntry const *&) const // 0x731140
{
    mangled_assert("?GetEntry@Cluster@mkvparser@@QBEJJAAPBVBlockEntry@2@@Z");
    todo("implement");
    long __result = _sub_731140(this, arg, arg);
    return __result;
}

_extern mkvparser::Cluster *_sub_72F0E0(mkvparser::Segment *, long, long long);
mkvparser::Cluster *mkvparser::Cluster::Create(mkvparser::Segment *pSegment, long idx, long long off) // 0x72F0E0
{
    mangled_assert("?Create@Cluster@mkvparser@@SGPAV12@PAVSegment@2@J_J@Z");
    todo("implement");
    mkvparser::Cluster * __result = _sub_72F0E0(pSegment, idx, off);
    return __result;
}

_extern _sub_72E030(mkvparser::Cluster *const);
mkvparser::Cluster::Cluster() // 0x72E030
{
    mangled_assert("??0Cluster@mkvparser@@QAE@XZ");
    todo("implement");
    _sub_72E030(this);
}

_extern _sub_72DFD0(mkvparser::Cluster *const, mkvparser::Segment *, long, long long);
mkvparser::Cluster::Cluster(mkvparser::Segment *, long, long long) // 0x72DFD0
{
    mangled_assert("??0Cluster@mkvparser@@IAE@PAVSegment@1@J_J@Z");
    todo("implement");
    _sub_72DFD0(this, arg, arg, arg);
}

_extern void _sub_72E5F0(mkvparser::Cluster *const);
mkvparser::Cluster::~Cluster() // 0x72E5F0
{
    mangled_assert("??1Cluster@mkvparser@@QAE@XZ");
    todo("implement");
    _sub_72E5F0(this);
}

_extern bool _sub_7307D0(mkvparser::Cluster const *const);
bool mkvparser::Cluster::EOS() const // 0x7307D0
{
    mangled_assert("?EOS@Cluster@mkvparser@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_7307D0(this);
    return __result;
}

_extern long _sub_7316A0(mkvparser::Cluster const *const);
long mkvparser::Cluster::GetIndex() const // 0x7316A0
{
    mangled_assert("?GetIndex@Cluster@mkvparser@@QBEJXZ");
    todo("implement");
    long __result = _sub_7316A0(this);
    return __result;
}

_extern long long _sub_731C60(mkvparser::Cluster const *const);
long long mkvparser::Cluster::GetPosition() const // 0x731C60
{
    mangled_assert("?GetPosition@Cluster@mkvparser@@QBE_JXZ");
    todo("implement");
    long long __result = _sub_731C60(this);
    return __result;
}

_extern long long _sub_731100(mkvparser::Cluster const *const);
long long mkvparser::Cluster::GetElementSize() const // 0x731100
{
    mangled_assert("?GetElementSize@Cluster@mkvparser@@QBE_JXZ");
    todo("implement");
    long long __result = _sub_731100(this);
    return __result;
}

_extern long _sub_7320A0(mkvparser::Segment const *, long long, long long &, long &);
long mkvparser::Cluster::HasBlockEntries(mkvparser::Segment const *pSegment, long long off, long long &pos, long &len) // 0x7320A0
{
    mangled_assert("?HasBlockEntries@Cluster@mkvparser@@SGJPBVSegment@2@_JAA_JAAJ@Z");
    todo("implement");
    long __result = _sub_7320A0(pSegment, off, pos, len);
    return __result;
}

_extern long long _sub_731E50(mkvparser::Cluster const *const);
long long mkvparser::Cluster::GetTimeCode() const // 0x731E50
{
    mangled_assert("?GetTimeCode@Cluster@mkvparser@@QBE_JXZ");
    todo("implement");
    long long __result = _sub_731E50(this);
    return __result;
}

_extern long long _sub_731DC0(mkvparser::Cluster const *const);
long long mkvparser::Cluster::GetTime() const // 0x731DC0
{
    mangled_assert("?GetTime@Cluster@mkvparser@@QBE_JXZ");
    todo("implement");
    long long __result = _sub_731DC0(this);
    return __result;
}

_extern long long _sub_731610(mkvparser::Cluster const *const);
long long mkvparser::Cluster::GetFirstTime() const // 0x731610
{
    mangled_assert("?GetFirstTime@Cluster@mkvparser@@QBE_JXZ");
    todo("implement");
    long long __result = _sub_731610(this);
    return __result;
}

_extern long long _sub_7317F0(mkvparser::Cluster const *const);
long long mkvparser::Cluster::GetLastTime() const // 0x7317F0
{
    mangled_assert("?GetLastTime@Cluster@mkvparser@@QBE_JXZ");
    todo("implement");
    long long __result = _sub_7317F0(this);
    return __result;
}

_extern long _sub_72F1A0(mkvparser::Cluster *const, long long, long long, long long);
long mkvparser::Cluster::CreateBlock(long long, long long, long long) // 0x72F1A0
{
    mangled_assert("?CreateBlock@Cluster@mkvparser@@AAEJ_J00@Z");
    todo("implement");
    long __result = _sub_72F1A0(this, arg, arg, arg);
    return __result;
}

_extern long _sub_72F280(mkvparser::Cluster *const, long long, long long);
long mkvparser::Cluster::CreateBlockGroup(long long, long long) // 0x72F280
{
    mangled_assert("?CreateBlockGroup@Cluster@mkvparser@@AAEJ_J0@Z");
    todo("implement");
    long __result = _sub_72F280(this, arg, arg);
    return __result;
}

_extern long _sub_72F800(mkvparser::Cluster *const, long long, long long);
long mkvparser::Cluster::CreateSimpleBlock(long long, long long) // 0x72F800
{
    mangled_assert("?CreateSimpleBlock@Cluster@mkvparser@@AAEJ_J0@Z");
    todo("implement");
    long __result = _sub_72F800(this, arg, arg);
    return __result;
}

_extern long _sub_731480(mkvparser::Cluster const *const, mkvparser::BlockEntry const *&);
long mkvparser::Cluster::GetFirst(mkvparser::BlockEntry const *&) const // 0x731480
{
    mangled_assert("?GetFirst@Cluster@mkvparser@@QBEJAAPBVBlockEntry@2@@Z");
    todo("implement");
    long __result = _sub_731480(this, arg);
    return __result;
}

_extern long _sub_731730(mkvparser::Cluster const *const, mkvparser::BlockEntry const *&);
long mkvparser::Cluster::GetLast(mkvparser::BlockEntry const *&) const // 0x731730
{
    mangled_assert("?GetLast@Cluster@mkvparser@@QBEJAAPBVBlockEntry@2@@Z");
    todo("implement");
    long __result = _sub_731730(this, arg);
    return __result;
}

_extern long _sub_731850(mkvparser::Cluster const *const, mkvparser::BlockEntry const *, mkvparser::BlockEntry const *&);
long mkvparser::Cluster::GetNext(mkvparser::BlockEntry const *, mkvparser::BlockEntry const *&) const // 0x731850
{
    mangled_assert("?GetNext@Cluster@mkvparser@@QBEJPBVBlockEntry@2@AAPBV32@@Z");
    todo("implement");
    long __result = _sub_731850(this, arg, arg);
    return __result;
}

_extern long _sub_731470(mkvparser::Cluster const *const);
long mkvparser::Cluster::GetEntryCount() const // 0x731470
{
    mangled_assert("?GetEntryCount@Cluster@mkvparser@@QBEJXZ");
    todo("implement");
    long __result = _sub_731470(this);
    return __result;
}

_extern mkvparser::BlockEntry const *_sub_731320(mkvparser::Cluster const *const, mkvparser::Track const *, long long);
mkvparser::BlockEntry const *mkvparser::Cluster::GetEntry(mkvparser::Track const *, long long) const // 0x731320
{
    mangled_assert("?GetEntry@Cluster@mkvparser@@QBEPBVBlockEntry@2@PBVTrack@2@_J@Z");
    todo("implement");
    mkvparser::BlockEntry const * __result = _sub_731320(this, arg, arg);
    return __result;
}

_extern mkvparser::BlockEntry const *_sub_7311B0(mkvparser::Cluster const *const, mkvparser::CuePoint const &, mkvparser::CuePoint::TrackPosition const &);
mkvparser::BlockEntry const *mkvparser::Cluster::GetEntry(mkvparser::CuePoint const &, mkvparser::CuePoint::TrackPosition const &) const // 0x7311B0
{
    mangled_assert("?GetEntry@Cluster@mkvparser@@QBEPBVBlockEntry@2@ABVCuePoint@2@ABUTrackPosition@42@@Z");
    todo("implement");
    mkvparser::BlockEntry const * __result = _sub_7311B0(this, arg, arg);
    return __result;
}

_extern _sub_72DEF0(mkvparser::BlockEntry *const, mkvparser::Cluster *, long);
mkvparser::BlockEntry::BlockEntry(mkvparser::Cluster *, long) // 0x72DEF0
{
    mangled_assert("??0BlockEntry@mkvparser@@IAE@PAVCluster@1@J@Z");
    todo("implement");
    _sub_72DEF0(this, arg, arg);
}

_extern void _sub_72E590(mkvparser::BlockEntry *const);
mkvparser::BlockEntry::~BlockEntry() // 0x72E590
{
    mangled_assert("??1BlockEntry@mkvparser@@UAE@XZ");
    todo("implement");
    _sub_72E590(this);
}

_extern void _sub_72E5A0(mkvparser::BlockGroup *const);
_inline mkvparser::BlockGroup::~BlockGroup() // 0x72E5A0
{
    mangled_assert("??1BlockGroup@mkvparser@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_72E5A0(this);
}

_extern bool _sub_7307C0(mkvparser::BlockEntry const *const);
bool mkvparser::BlockEntry::EOS() const // 0x7307C0
{
    mangled_assert("?EOS@BlockEntry@mkvparser@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_7307C0(this);
    return __result;
}

_extern mkvparser::Cluster const *_sub_730F30(mkvparser::BlockEntry const *const);
mkvparser::Cluster const *mkvparser::BlockEntry::GetCluster() const // 0x730F30
{
    mangled_assert("?GetCluster@BlockEntry@mkvparser@@QBEPBVCluster@2@XZ");
    todo("implement");
    mkvparser::Cluster const * __result = _sub_730F30(this);
    return __result;
}

_extern long _sub_731690(mkvparser::BlockEntry const *const);
long mkvparser::BlockEntry::GetIndex() const // 0x731690
{
    mangled_assert("?GetIndex@BlockEntry@mkvparser@@QBEJXZ");
    todo("implement");
    long __result = _sub_731690(this);
    return __result;
}

_extern _sub_72E440(mkvparser::SimpleBlock *const, mkvparser::Cluster *, long, long long, long long);
mkvparser::SimpleBlock::SimpleBlock(mkvparser::Cluster *, long, long long, long long) // 0x72E440
{
    mangled_assert("??0SimpleBlock@mkvparser@@QAE@PAVCluster@1@J_J1@Z");
    todo("implement");
    _sub_72E440(this, arg, arg, arg, arg);
}

_extern long _sub_734F70(mkvparser::SimpleBlock *const);
long mkvparser::SimpleBlock::Parse() // 0x734F70
{
    mangled_assert("?Parse@SimpleBlock@mkvparser@@QAEJXZ");
    todo("implement");
    long __result = _sub_734F70(this);
    return __result;
}

_extern mkvparser::BlockEntry::Kind _sub_7316E0(mkvparser::SimpleBlock const *const);
mkvparser::BlockEntry::Kind mkvparser::SimpleBlock::GetKind() const // 0x7316E0
{
    mangled_assert("?GetKind@SimpleBlock@mkvparser@@UBE?AW4Kind@BlockEntry@2@XZ");
    todo("implement");
    mkvparser::BlockEntry::Kind __result = _sub_7316E0(this);
    return __result;
}

_extern mkvparser::Block const *_sub_730F00(mkvparser::SimpleBlock const *const);
mkvparser::Block const *mkvparser::SimpleBlock::GetBlock() const // 0x730F00
{
    mangled_assert("?GetBlock@SimpleBlock@mkvparser@@UBEPBVBlock@2@XZ");
    todo("implement");
    mkvparser::Block const * __result = _sub_730F00(this);
    return __result;
}

_extern _sub_72DF10(mkvparser::BlockGroup *const, mkvparser::Cluster *, long, long long, long long, long long, long long, long long);
mkvparser::BlockGroup::BlockGroup(mkvparser::Cluster *, long, long long, long long, long long, long long, long long) // 0x72DF10
{
    mangled_assert("??0BlockGroup@mkvparser@@QAE@PAVCluster@1@J_J1111@Z");
    todo("implement");
    _sub_72DF10(this, arg, arg, arg, arg, arg, arg, arg);
}

_extern long _sub_733E90(mkvparser::BlockGroup *const);
long mkvparser::BlockGroup::Parse() // 0x733E90
{
    mangled_assert("?Parse@BlockGroup@mkvparser@@QAEJXZ");
    todo("implement");
    long __result = _sub_733E90(this);
    return __result;
}

_extern mkvparser::BlockEntry::Kind _sub_7316C0(mkvparser::BlockGroup const *const);
mkvparser::BlockEntry::Kind mkvparser::BlockGroup::GetKind() const // 0x7316C0
{
    mangled_assert("?GetKind@BlockGroup@mkvparser@@UBE?AW4Kind@BlockEntry@2@XZ");
    todo("implement");
    mkvparser::BlockEntry::Kind __result = _sub_7316C0(this);
    return __result;
}

_extern mkvparser::Block const *_sub_730DE0(mkvparser::BlockGroup const *const);
mkvparser::Block const *mkvparser::BlockGroup::GetBlock() const // 0x730DE0
{
    mangled_assert("?GetBlock@BlockGroup@mkvparser@@UBEPBVBlock@2@XZ");
    todo("implement");
    mkvparser::Block const * __result = _sub_730DE0(this);
    return __result;
}

_extern long long _sub_731C80(mkvparser::BlockGroup const *const);
long long mkvparser::BlockGroup::GetPrevTimeCode() const // 0x731C80
{
    mangled_assert("?GetPrevTimeCode@BlockGroup@mkvparser@@QBE_JXZ");
    todo("implement");
    long long __result = _sub_731C80(this);
    return __result;
}

_extern long long _sub_731C40(mkvparser::BlockGroup const *const);
long long mkvparser::BlockGroup::GetNextTimeCode() const // 0x731C40
{
    mangled_assert("?GetNextTimeCode@BlockGroup@mkvparser@@QBE_JXZ");
    todo("implement");
    long long __result = _sub_731C40(this);
    return __result;
}

_extern long long _sub_7310B0(mkvparser::BlockGroup const *const);
long long mkvparser::BlockGroup::GetDurationTimeCode() const // 0x7310B0
{
    mangled_assert("?GetDurationTimeCode@BlockGroup@mkvparser@@QBE_JXZ");
    todo("implement");
    long long __result = _sub_7310B0(this);
    return __result;
}

_extern _sub_72DEA0(mkvparser::Block *const, long long, long long);
mkvparser::Block::Block(long long, long long) // 0x72DEA0
{
    mangled_assert("??0Block@mkvparser@@QAE@_J0@Z");
    todo("implement");
    _sub_72DEA0(this, arg, arg);
}

_extern void _sub_72E580(mkvparser::Block *const);
mkvparser::Block::~Block() // 0x72E580
{
    mangled_assert("??1Block@mkvparser@@QAE@XZ");
    todo("implement");
    _sub_72E580(this);
}

_extern long _sub_733890(mkvparser::Block *const, mkvparser::Cluster const *);
long mkvparser::Block::Parse(mkvparser::Cluster const *) // 0x733890
{
    mangled_assert("?Parse@Block@mkvparser@@QAEJPBVCluster@2@@Z");
    todo("implement");
    long __result = _sub_733890(this, arg);
    return __result;
}

_extern long long _sub_731E20(mkvparser::Block const *const, mkvparser::Cluster const *);
long long mkvparser::Block::GetTimeCode(mkvparser::Cluster const *) const // 0x731E20
{
    mangled_assert("?GetTimeCode@Block@mkvparser@@QBE_JPBVCluster@2@@Z");
    todo("implement");
    long long __result = _sub_731E20(this, arg);
    return __result;
}

_extern long long _sub_731D90(mkvparser::Block const *const, mkvparser::Cluster const *);
long long mkvparser::Block::GetTime(mkvparser::Cluster const *) const // 0x731D90
{
    mangled_assert("?GetTime@Block@mkvparser@@QBE_JPBVCluster@2@@Z");
    todo("implement");
    long long __result = _sub_731D90(this, arg);
    return __result;
}

_extern long long _sub_731F20(mkvparser::Block const *const);
long long mkvparser::Block::GetTrackNumber() const // 0x731F20
{
    mangled_assert("?GetTrackNumber@Block@mkvparser@@QBE_JXZ");
    todo("implement");
    long long __result = _sub_731F20(this);
    return __result;
}

_extern bool _sub_7328E0(mkvparser::Block const *const);
bool mkvparser::Block::IsKey() const // 0x7328E0
{
    mangled_assert("?IsKey@Block@mkvparser@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_7328E0(this);
    return __result;
}

_extern void _sub_738420(mkvparser::Block *const, bool);
void mkvparser::Block::SetKey(bool) // 0x738420
{
    mangled_assert("?SetKey@Block@mkvparser@@QAEX_N@Z");
    todo("implement");
    _sub_738420(this, arg);
}

_extern bool _sub_7328D0(mkvparser::Block const *const);
bool mkvparser::Block::IsInvisible() const // 0x7328D0
{
    mangled_assert("?IsInvisible@Block@mkvparser@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_7328D0(this);
    return __result;
}

_extern mkvparser::Block::Lacing _sub_7316F0(mkvparser::Block const *const);
mkvparser::Block::Lacing mkvparser::Block::GetLacing() const // 0x7316F0
{
    mangled_assert("?GetLacing@Block@mkvparser@@QBE?AW4Lacing@12@XZ");
    todo("implement");
    mkvparser::Block::Lacing __result = _sub_7316F0(this);
    return __result;
}

_extern __int32 _sub_731660(mkvparser::Block const *const);
__int32 mkvparser::Block::GetFrameCount() const // 0x731660
{
    mangled_assert("?GetFrameCount@Block@mkvparser@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_731660(this);
    return __result;
}

_extern mkvparser::Block::Frame const &_sub_731650(mkvparser::Block const *const, __int32);
mkvparser::Block::Frame const &mkvparser::Block::GetFrame(__int32) const // 0x731650
{
    mangled_assert("?GetFrame@Block@mkvparser@@QBEABUFrame@12@H@Z");
    todo("implement");
    mkvparser::Block::Frame const & __result = _sub_731650(this, arg);
    return __result;
}

_extern long _sub_738080(mkvparser::Block::Frame const *const, mkvparser::IMkvReader *, unsigned char *);
long mkvparser::Block::Frame::Read(mkvparser::IMkvReader *, unsigned char *) const // 0x738080
{
    mangled_assert("?Read@Frame@Block@mkvparser@@QBEJPAVIMkvReader@3@PAE@Z");
    todo("implement");
    long __result = _sub_738080(this, arg, arg);
    return __result;
}

/* ---------- private code */
#endif
