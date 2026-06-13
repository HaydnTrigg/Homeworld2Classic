#if 0
/* ---------- headers */

#include "decomp.h"
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SampleID.h>
#include <seInterface2\SoundParams.h>
#include <seInterface2\SampleBase.h>
#include <vector>
#include <new>
#include <xmemory0>
#include <xstddef>
#include <seInterface2\sedefines.h>
#include <seInterface2\seinclude.h>
#include <seInterface2\sePatchInfoList.h>
#include <type_traits>
#include <xstring>
#include <xutility>
#include <seInterface2\sedefinesshared.h>
#include <iosfwd>
#include <seInterface2\sedevice.h>
#include <seInterface2\senull.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Src\Shared\PC\seInterface2\pch.h"
#include <seInterface2\Channel.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\seinterfacefunc.h>
#include <fileio\platform.h>
#include <fileio\fileioexports.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_6C686E(seInterface::Channel *const, long, seDevice *, long, unsigned __int32);
seInterface::Channel::Channel(long, seDevice *, long, unsigned __int32) // 0x6C686E
{
    mangled_assert("??0Channel@seInterface@@QAE@JPAVseDevice@@JI@Z");
    todo("implement");
    _sub_6C686E(this, arg, arg, arg, arg);
}

_extern _sub_6C68F0(seInterface::Channel::EventData *const);
_inline seInterface::Channel::EventData::EventData() // 0x6C68F0
{
    mangled_assert("??0EventData@Channel@seInterface@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6C68F0(this);
}

_extern void _sub_6C6924(seInterface::Channel *const);
seInterface::Channel::~Channel() // 0x6C6924
{
    mangled_assert("??1Channel@seInterface@@UAE@XZ");
    todo("implement");
    _sub_6C6924(this);
}

_extern void _sub_6C6988(seInterface::Channel::EventData *const);
_inline seInterface::Channel::EventData::~EventData() // 0x6C6988
{
    mangled_assert("??1EventData@Channel@seInterface@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6C6988(this);
}

_extern long _sub_6C6B77(seInterface::Channel *const);
long seInterface::Channel::Initialize() // 0x6C6B77
{
    mangled_assert("?Initialize@Channel@seInterface@@QAEJXZ");
    todo("implement");
    long __result = _sub_6C6B77(this);
    return __result;
}

_extern void _sub_6C76EB(seInterface::Channel *const, float);
void seInterface::Channel::Update(float) // 0x6C76EB
{
    mangled_assert("?Update@Channel@seInterface@@QAEXM@Z");
    todo("implement");
    _sub_6C76EB(this, arg);
}

_extern long _sub_6C6CAC(seInterface::Channel *const, PatchID, SampleID, float, float, float, float, float, __int32, long, float, bool);
long seInterface::Channel::Play(PatchID, SampleID, float, float, float, float, float, __int32, long, float, bool) // 0x6C6CAC
{
    mangled_assert("?Play@Channel@seInterface@@QAEJVPatchID@@VSampleID@@MMMMMHJM_N@Z");
    todo("implement");
    long __result = _sub_6C6CAC(this, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg);
    return __result;
}

_extern long _sub_6C7669(seInterface::Channel *const, float, bool);
long seInterface::Channel::Stop(float, bool) // 0x6C7669
{
    mangled_assert("?Stop@Channel@seInterface@@QAEJM_N@Z");
    todo("implement");
    long __result = _sub_6C7669(this, arg, arg);
    return __result;
}

_extern long _sub_6C6C42(seInterface::Channel *const, float);
long seInterface::Channel::Pause(float) // 0x6C6C42
{
    mangled_assert("?Pause@Channel@seInterface@@QAEJM@Z");
    todo("implement");
    long __result = _sub_6C6C42(this, arg);
    return __result;
}

_extern long _sub_6C6E2C(seInterface::Channel *const, float);
long seInterface::Channel::Resume(float) // 0x6C6E2C
{
    mangled_assert("?Resume@Channel@seInterface@@QAEJM@Z");
    todo("implement");
    long __result = _sub_6C6E2C(this, arg);
    return __result;
}

_extern long _sub_6C75F9(seInterface::Channel *const, float, float);
long seInterface::Channel::SetVolume(float, float) // 0x6C75F9
{
    mangled_assert("?SetVolume@Channel@seInterface@@QAEJMM@Z");
    todo("implement");
    long __result = _sub_6C75F9(this, arg, arg);
    return __result;
}

_extern bool _sub_6C6B93(seInterface::Channel const *const);
bool seInterface::Channel::IsFree() const // 0x6C6B93
{
    mangled_assert("?IsFree@Channel@seInterface@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_6C6B93(this);
    return __result;
}

_extern bool _sub_6C6C2F(seInterface::Channel const *const);
bool seInterface::Channel::IsStopping() const // 0x6C6C2F
{
    mangled_assert("?IsStopping@Channel@seInterface@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_6C6C2F(this);
    return __result;
}

_extern bool _sub_6C6C1B(seInterface::Channel const *const);
bool seInterface::Channel::IsPaused() const // 0x6C6C1B
{
    mangled_assert("?IsPaused@Channel@seInterface@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_6C6C1B(this);
    return __result;
}

_extern bool _sub_6C6C25(seInterface::Channel const *const);
bool seInterface::Channel::IsPlaying() const // 0x6C6C25
{
    mangled_assert("?IsPlaying@Channel@seInterface@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_6C6C25(this);
    return __result;
}

_extern bool _sub_6C6B9C(seInterface::Channel *const);
bool seInterface::Channel::IsLooping() // 0x6C6B9C
{
    mangled_assert("?IsLooping@Channel@seInterface@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_6C6B9C(this);
    return __result;
}

_extern bool _sub_6C6BB1(seInterface::Channel *const, PatchID, float);
bool seInterface::Channel::IsPatchCloser(PatchID, float) // 0x6C6BB1
{
    mangled_assert("?IsPatchCloser@Channel@seInterface@@QAE_NVPatchID@@M@Z");
    todo("implement");
    bool __result = _sub_6C6BB1(this, arg, arg);
    return __result;
}

_extern long _sub_6C738C(seInterface::Channel *const, float);
long seInterface::Channel::SetPan(float) // 0x6C738C
{
    mangled_assert("?SetPan@Channel@seInterface@@QAEJM@Z");
    todo("implement");
    long __result = _sub_6C738C(this, arg);
    return __result;
}

_extern long _sub_6C73EF(seInterface::Channel *const, float);
long seInterface::Channel::SetPitch(float) // 0x6C73EF
{
    mangled_assert("?SetPitch@Channel@seInterface@@QAEJM@Z");
    todo("implement");
    long __result = _sub_6C73EF(this, arg);
    return __result;
}

_extern long _sub_6C745D(seInterface::Channel *const, float, float, float, float);
long seInterface::Channel::SetPosition(float, float, float, float) // 0x6C745D
{
    mangled_assert("?SetPosition@Channel@seInterface@@QAEJMMMM@Z");
    todo("implement");
    long __result = _sub_6C745D(this, arg, arg, arg, arg);
    return __result;
}

_extern long _sub_6C7566(seInterface::Channel *const, float, float, float);
long seInterface::Channel::SetVelocity(float, float, float) // 0x6C7566
{
    mangled_assert("?SetVelocity@Channel@seInterface@@QAEJMMM@Z");
    todo("implement");
    long __result = _sub_6C7566(this, arg, arg, arg);
    return __result;
}

_extern long _sub_6C7119(seInterface::Channel *const, float, float, float);
long seInterface::Channel::SetHeading(float, float, float) // 0x6C7119
{
    mangled_assert("?SetHeading@Channel@seInterface@@QAEJMMM@Z");
    todo("implement");
    long __result = _sub_6C7119(this, arg, arg, arg);
    return __result;
}

_extern long _sub_6C722A(seInterface::Channel *const, float);
long seInterface::Channel::SetObstruction(float) // 0x6C722A
{
    mangled_assert("?SetObstruction@Channel@seInterface@@QAEJM@Z");
    todo("implement");
    long __result = _sub_6C722A(this, arg);
    return __result;
}

_extern long _sub_6C728D(seInterface::Channel *const, float);
long seInterface::Channel::SetOcclusion(float) // 0x6C728D
{
    mangled_assert("?SetOcclusion@Channel@seInterface@@QAEJM@Z");
    todo("implement");
    long __result = _sub_6C728D(this, arg);
    return __result;
}

_extern long _sub_6C72F0(seInterface::Channel *const, float, float, float, float, float, float);
long seInterface::Channel::SetOrientation(float, float, float, float, float, float) // 0x6C72F0
{
    mangled_assert("?SetOrientation@Channel@seInterface@@QAEJMMMMMM@Z");
    todo("implement");
    long __result = _sub_6C72F0(this, arg, arg, arg, arg, arg, arg);
    return __result;
}

_extern long _sub_6C7503(seInterface::Channel *const, float);
long seInterface::Channel::SetReverb(float) // 0x6C7503
{
    mangled_assert("?SetReverb@Channel@seInterface@@QAEJM@Z");
    todo("implement");
    long __result = _sub_6C7503(this, arg);
    return __result;
}

_extern long _sub_6C71C9(seInterface::Channel *const, long, long, long);
long seInterface::Channel::SetLoop(long, long, long) // 0x6C71C9
{
    mangled_assert("?SetLoop@Channel@seInterface@@QAEJJJJ@Z");
    todo("implement");
    long __result = _sub_6C71C9(this, arg, arg, arg);
    return __result;
}

_extern long _sub_6C6AEA(seInterface::Channel *const);
long seInterface::Channel::GetMSPosition() // 0x6C6AEA
{
    mangled_assert("?GetMSPosition@Channel@seInterface@@QAEJXZ");
    todo("implement");
    long __result = _sub_6C6AEA(this);
    return __result;
}

_extern long _sub_6C69F3(seInterface::Channel *const);
long seInterface::Channel::GetBytePosition() // 0x6C69F3
{
    mangled_assert("?GetBytePosition@Channel@seInterface@@QAEJXZ");
    todo("implement");
    long __result = _sub_6C69F3(this);
    return __result;
}

_extern long _sub_6C6A94(seInterface::Channel *const);
long seInterface::Channel::GetMSLength() // 0x6C6A94
{
    mangled_assert("?GetMSLength@Channel@seInterface@@QAEJXZ");
    todo("implement");
    long __result = _sub_6C6A94(this);
    return __result;
}

_extern long _sub_6C6D87(seInterface::Channel *const, seInterface::Channel::EventData const &);
long seInterface::Channel::Process(seInterface::Channel::EventData const &) // 0x6C6D87
{
    mangled_assert("?Process@Channel@seInterface@@AAEJABUEventData@12@@Z");
    todo("implement");
    long __result = _sub_6C6D87(this, arg);
    return __result;
}

_extern long _sub_6C6E92(seInterface::Channel *const, seInterface::Channel::EventData const &);
long seInterface::Channel::ST_Free(seInterface::Channel::EventData const &) // 0x6C6E92
{
    mangled_assert("?ST_Free@Channel@seInterface@@AAEJABUEventData@12@@Z");
    todo("implement");
    long __result = _sub_6C6E92(this, arg);
    return __result;
}

_extern long _sub_6C6F66(seInterface::Channel *const, seInterface::Channel::EventData const &);
long seInterface::Channel::ST_Playing(seInterface::Channel::EventData const &) // 0x6C6F66
{
    mangled_assert("?ST_Playing@Channel@seInterface@@AAEJABUEventData@12@@Z");
    todo("implement");
    long __result = _sub_6C6F66(this, arg);
    return __result;
}

_extern long _sub_6C6EBC(seInterface::Channel *const, seInterface::Channel::EventData const &);
long seInterface::Channel::ST_Paused(seInterface::Channel::EventData const &) // 0x6C6EBC
{
    mangled_assert("?ST_Paused@Channel@seInterface@@AAEJABUEventData@12@@Z");
    todo("implement");
    long __result = _sub_6C6EBC(this, arg);
    return __result;
}

_extern long _sub_6C7073(seInterface::Channel *const, seInterface::Channel::EventData const &);
long seInterface::Channel::ST_Stopping(seInterface::Channel::EventData const &) // 0x6C7073
{
    mangled_assert("?ST_Stopping@Channel@seInterface@@AAEJABUEventData@12@@Z");
    todo("implement");
    long __result = _sub_6C7073(this, arg);
    return __result;
}

_extern long _sub_6C7017(seInterface::Channel *const, seInterface::Channel::EventData const &);
long seInterface::Channel::ST_Stopped(seInterface::Channel::EventData const &) // 0x6C7017
{
    mangled_assert("?ST_Stopped@Channel@seInterface@@AAEJABUEventData@12@@Z");
    todo("implement");
    long __result = _sub_6C7017(this, arg);
    return __result;
}

_extern long _sub_6C6FC6(seInterface::Channel *const, seInterface::Channel::EventData const &);
long seInterface::Channel::ST_Silent(seInterface::Channel::EventData const &) // 0x6C6FC6
{
    mangled_assert("?ST_Silent@Channel@seInterface@@AAEJABUEventData@12@@Z");
    todo("implement");
    long __result = _sub_6C6FC6(this, arg);
    return __result;
}

_extern long _sub_6C8179(seInterface::Channel *const, seInterface::Channel::EventData const &);
long seInterface::Channel::internalChanUpdatePlaying(seInterface::Channel::EventData const &) // 0x6C8179
{
    mangled_assert("?internalChanUpdatePlaying@Channel@seInterface@@AAEJABUEventData@12@@Z");
    todo("implement");
    long __result = _sub_6C8179(this, arg);
    return __result;
}

_extern long _sub_6C8154(seInterface::Channel *const, seInterface::Channel::EventData const &);
long seInterface::Channel::internalChanUpdatePaused(seInterface::Channel::EventData const &) // 0x6C8154
{
    mangled_assert("?internalChanUpdatePaused@Channel@seInterface@@AAEJABUEventData@12@@Z");
    todo("implement");
    long __result = _sub_6C8154(this, arg);
    return __result;
}

_extern long _sub_6C81D7(seInterface::Channel *const, seInterface::Channel::EventData const &);
long seInterface::Channel::internalChanUpdateStopping(seInterface::Channel::EventData const &) // 0x6C81D7
{
    mangled_assert("?internalChanUpdateStopping@Channel@seInterface@@AAEJABUEventData@12@@Z");
    todo("implement");
    long __result = _sub_6C81D7(this, arg);
    return __result;
}

_extern long _sub_6C7A77(seInterface::Channel *const, seInterface::Channel::EventData const &);
long seInterface::Channel::internalChanPlay(seInterface::Channel::EventData const &) // 0x6C7A77
{
    mangled_assert("?internalChanPlay@Channel@seInterface@@AAEJABUEventData@12@@Z");
    todo("implement");
    long __result = _sub_6C7A77(this, arg);
    return __result;
}

_extern long _sub_6C79F7(seInterface::Channel *const, seInterface::Channel::EventData const &);
long seInterface::Channel::internalChanPause(seInterface::Channel::EventData const &) // 0x6C79F7
{
    mangled_assert("?internalChanPause@Channel@seInterface@@AAEJABUEventData@12@@Z");
    todo("implement");
    long __result = _sub_6C79F7(this, arg);
    return __result;
}

_extern long _sub_6C80A6(seInterface::Channel *const, seInterface::Channel::EventData const &);
long seInterface::Channel::internalChanStop(seInterface::Channel::EventData const &) // 0x6C80A6
{
    mangled_assert("?internalChanStop@Channel@seInterface@@AAEJABUEventData@12@@Z");
    todo("implement");
    long __result = _sub_6C80A6(this, arg);
    return __result;
}

_extern long _sub_6C7F72(seInterface::Channel *const, seInterface::Channel::EventData const &);
long seInterface::Channel::internalChanResume(seInterface::Channel::EventData const &) // 0x6C7F72
{
    mangled_assert("?internalChanResume@Channel@seInterface@@AAEJABUEventData@12@@Z");
    todo("implement");
    long __result = _sub_6C7F72(this, arg);
    return __result;
}

_extern long _sub_6C7FFC(seInterface::Channel *const, seInterface::Channel::EventData const &);
long seInterface::Channel::internalChanSetVol(seInterface::Channel::EventData const &) // 0x6C7FFC
{
    mangled_assert("?internalChanSetVol@Channel@seInterface@@AAEJABUEventData@12@@Z");
    todo("implement");
    long __result = _sub_6C7FFC(this, arg);
    return __result;
}

_extern long _sub_6C80A1(seInterface::Channel *const, seInterface::Channel::EventData const &);
long seInterface::Channel::internalChanSilent(seInterface::Channel::EventData const &) // 0x6C80A1
{
    mangled_assert("?internalChanSilent@Channel@seInterface@@AAEJABUEventData@12@@Z");
    todo("implement");
    long __result = _sub_6C80A1(this, arg);
    return __result;
}

_extern void _sub_6C774D(seInterface::Channel *const);
void seInterface::Channel::internalChanClear() // 0x6C774D
{
    mangled_assert("?internalChanClear@Channel@seInterface@@AAEXXZ");
    todo("implement");
    _sub_6C774D(this);
}

_extern long _sub_6C780D(seInterface::Channel *const);
long seInterface::Channel::internalChanFade() // 0x6C780D
{
    mangled_assert("?internalChanFade@Channel@seInterface@@AAEJXZ");
    todo("implement");
    long __result = _sub_6C780D(this);
    return __result;
}

_extern long _sub_6C78FA(seInterface::Channel *const);
long seInterface::Channel::internalChanFadePitch() // 0x6C78FA
{
    mangled_assert("?internalChanFadePitch@Channel@seInterface@@AAEJXZ");
    todo("implement");
    long __result = _sub_6C78FA(this);
    return __result;
}

_extern long _sub_6C81DF(seInterface::Channel *const);
long seInterface::Channel::internalPlaylistNext() // 0x6C81DF
{
    mangled_assert("?internalPlaylistNext@Channel@seInterface@@AAEJXZ");
    todo("implement");
    long __result = _sub_6C81DF(this);
    return __result;
}

/* ---------- private code */
#endif
