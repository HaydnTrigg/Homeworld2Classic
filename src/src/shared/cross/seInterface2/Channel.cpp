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
#include "src\Src\Shared\PC\seInterface2\pch.h"
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

seInterface::Channel::Channel(long, seDevice *, long, unsigned __int32) // 0x6C686E
{
    mangled_assert("??0Channel@seInterface@@QAE@JPAVseDevice@@JI@Z");
    todo("implement");
}

_inline seInterface::Channel::EventData::EventData() // 0x6C68F0
{
    mangled_assert("??0EventData@Channel@seInterface@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

seInterface::Channel::~Channel() // 0x6C6924
{
    mangled_assert("??1Channel@seInterface@@UAE@XZ");
    todo("implement");
}

_inline seInterface::Channel::EventData::~EventData() // 0x6C6988
{
    mangled_assert("??1EventData@Channel@seInterface@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

long seInterface::Channel::Initialize() // 0x6C6B77
{
    mangled_assert("?Initialize@Channel@seInterface@@QAEJXZ");
    todo("implement");
}

void seInterface::Channel::Update(float) // 0x6C76EB
{
    mangled_assert("?Update@Channel@seInterface@@QAEXM@Z");
    todo("implement");
}

long seInterface::Channel::Play(PatchID, SampleID, float, float, float, float, float, __int32, long, float, bool) // 0x6C6CAC
{
    mangled_assert("?Play@Channel@seInterface@@QAEJVPatchID@@VSampleID@@MMMMMHJM_N@Z");
    todo("implement");
}

long seInterface::Channel::Stop(float, bool) // 0x6C7669
{
    mangled_assert("?Stop@Channel@seInterface@@QAEJM_N@Z");
    todo("implement");
}

long seInterface::Channel::Pause(float) // 0x6C6C42
{
    mangled_assert("?Pause@Channel@seInterface@@QAEJM@Z");
    todo("implement");
}

long seInterface::Channel::Resume(float) // 0x6C6E2C
{
    mangled_assert("?Resume@Channel@seInterface@@QAEJM@Z");
    todo("implement");
}

long seInterface::Channel::SetVolume(float, float) // 0x6C75F9
{
    mangled_assert("?SetVolume@Channel@seInterface@@QAEJMM@Z");
    todo("implement");
}

bool seInterface::Channel::IsFree() const // 0x6C6B93
{
    mangled_assert("?IsFree@Channel@seInterface@@QBE_NXZ");
    todo("implement");
}

bool seInterface::Channel::IsStopping() const // 0x6C6C2F
{
    mangled_assert("?IsStopping@Channel@seInterface@@QBE_NXZ");
    todo("implement");
}

bool seInterface::Channel::IsPaused() const // 0x6C6C1B
{
    mangled_assert("?IsPaused@Channel@seInterface@@QBE_NXZ");
    todo("implement");
}

bool seInterface::Channel::IsPlaying() const // 0x6C6C25
{
    mangled_assert("?IsPlaying@Channel@seInterface@@QBE_NXZ");
    todo("implement");
}

bool seInterface::Channel::IsLooping() // 0x6C6B9C
{
    mangled_assert("?IsLooping@Channel@seInterface@@QAE_NXZ");
    todo("implement");
}

bool seInterface::Channel::IsPatchCloser(PatchID, float) // 0x6C6BB1
{
    mangled_assert("?IsPatchCloser@Channel@seInterface@@QAE_NVPatchID@@M@Z");
    todo("implement");
}

long seInterface::Channel::SetPan(float) // 0x6C738C
{
    mangled_assert("?SetPan@Channel@seInterface@@QAEJM@Z");
    todo("implement");
}

long seInterface::Channel::SetPitch(float) // 0x6C73EF
{
    mangled_assert("?SetPitch@Channel@seInterface@@QAEJM@Z");
    todo("implement");
}

long seInterface::Channel::SetPosition(float, float, float, float) // 0x6C745D
{
    mangled_assert("?SetPosition@Channel@seInterface@@QAEJMMMM@Z");
    todo("implement");
}

long seInterface::Channel::SetVelocity(float, float, float) // 0x6C7566
{
    mangled_assert("?SetVelocity@Channel@seInterface@@QAEJMMM@Z");
    todo("implement");
}

long seInterface::Channel::SetHeading(float, float, float) // 0x6C7119
{
    mangled_assert("?SetHeading@Channel@seInterface@@QAEJMMM@Z");
    todo("implement");
}

long seInterface::Channel::SetObstruction(float) // 0x6C722A
{
    mangled_assert("?SetObstruction@Channel@seInterface@@QAEJM@Z");
    todo("implement");
}

long seInterface::Channel::SetOcclusion(float) // 0x6C728D
{
    mangled_assert("?SetOcclusion@Channel@seInterface@@QAEJM@Z");
    todo("implement");
}

long seInterface::Channel::SetOrientation(float, float, float, float, float, float) // 0x6C72F0
{
    mangled_assert("?SetOrientation@Channel@seInterface@@QAEJMMMMMM@Z");
    todo("implement");
}

long seInterface::Channel::SetReverb(float) // 0x6C7503
{
    mangled_assert("?SetReverb@Channel@seInterface@@QAEJM@Z");
    todo("implement");
}

long seInterface::Channel::SetLoop(long, long, long) // 0x6C71C9
{
    mangled_assert("?SetLoop@Channel@seInterface@@QAEJJJJ@Z");
    todo("implement");
}

long seInterface::Channel::GetMSPosition() // 0x6C6AEA
{
    mangled_assert("?GetMSPosition@Channel@seInterface@@QAEJXZ");
    todo("implement");
}

long seInterface::Channel::GetBytePosition() // 0x6C69F3
{
    mangled_assert("?GetBytePosition@Channel@seInterface@@QAEJXZ");
    todo("implement");
}

long seInterface::Channel::GetMSLength() // 0x6C6A94
{
    mangled_assert("?GetMSLength@Channel@seInterface@@QAEJXZ");
    todo("implement");
}

long seInterface::Channel::Process(seInterface::Channel::EventData const &) // 0x6C6D87
{
    mangled_assert("?Process@Channel@seInterface@@AAEJABUEventData@12@@Z");
    todo("implement");
}

long seInterface::Channel::ST_Free(seInterface::Channel::EventData const &) // 0x6C6E92
{
    mangled_assert("?ST_Free@Channel@seInterface@@AAEJABUEventData@12@@Z");
    todo("implement");
}

long seInterface::Channel::ST_Playing(seInterface::Channel::EventData const &) // 0x6C6F66
{
    mangled_assert("?ST_Playing@Channel@seInterface@@AAEJABUEventData@12@@Z");
    todo("implement");
}

long seInterface::Channel::ST_Paused(seInterface::Channel::EventData const &) // 0x6C6EBC
{
    mangled_assert("?ST_Paused@Channel@seInterface@@AAEJABUEventData@12@@Z");
    todo("implement");
}

long seInterface::Channel::ST_Stopping(seInterface::Channel::EventData const &) // 0x6C7073
{
    mangled_assert("?ST_Stopping@Channel@seInterface@@AAEJABUEventData@12@@Z");
    todo("implement");
}

long seInterface::Channel::ST_Stopped(seInterface::Channel::EventData const &) // 0x6C7017
{
    mangled_assert("?ST_Stopped@Channel@seInterface@@AAEJABUEventData@12@@Z");
    todo("implement");
}

long seInterface::Channel::ST_Silent(seInterface::Channel::EventData const &) // 0x6C6FC6
{
    mangled_assert("?ST_Silent@Channel@seInterface@@AAEJABUEventData@12@@Z");
    todo("implement");
}

long seInterface::Channel::internalChanUpdatePlaying(seInterface::Channel::EventData const &) // 0x6C8179
{
    mangled_assert("?internalChanUpdatePlaying@Channel@seInterface@@AAEJABUEventData@12@@Z");
    todo("implement");
}

long seInterface::Channel::internalChanUpdatePaused(seInterface::Channel::EventData const &) // 0x6C8154
{
    mangled_assert("?internalChanUpdatePaused@Channel@seInterface@@AAEJABUEventData@12@@Z");
    todo("implement");
}

long seInterface::Channel::internalChanUpdateStopping(seInterface::Channel::EventData const &) // 0x6C81D7
{
    mangled_assert("?internalChanUpdateStopping@Channel@seInterface@@AAEJABUEventData@12@@Z");
    todo("implement");
}

long seInterface::Channel::internalChanPlay(seInterface::Channel::EventData const &) // 0x6C7A77
{
    mangled_assert("?internalChanPlay@Channel@seInterface@@AAEJABUEventData@12@@Z");
    todo("implement");
}

long seInterface::Channel::internalChanPause(seInterface::Channel::EventData const &) // 0x6C79F7
{
    mangled_assert("?internalChanPause@Channel@seInterface@@AAEJABUEventData@12@@Z");
    todo("implement");
}

long seInterface::Channel::internalChanStop(seInterface::Channel::EventData const &) // 0x6C80A6
{
    mangled_assert("?internalChanStop@Channel@seInterface@@AAEJABUEventData@12@@Z");
    todo("implement");
}

long seInterface::Channel::internalChanResume(seInterface::Channel::EventData const &) // 0x6C7F72
{
    mangled_assert("?internalChanResume@Channel@seInterface@@AAEJABUEventData@12@@Z");
    todo("implement");
}

long seInterface::Channel::internalChanSetVol(seInterface::Channel::EventData const &) // 0x6C7FFC
{
    mangled_assert("?internalChanSetVol@Channel@seInterface@@AAEJABUEventData@12@@Z");
    todo("implement");
}

long seInterface::Channel::internalChanSilent(seInterface::Channel::EventData const &) // 0x6C80A1
{
    mangled_assert("?internalChanSilent@Channel@seInterface@@AAEJABUEventData@12@@Z");
    todo("implement");
}

void seInterface::Channel::internalChanClear() // 0x6C774D
{
    mangled_assert("?internalChanClear@Channel@seInterface@@AAEXXZ");
    todo("implement");
}

long seInterface::Channel::internalChanFade() // 0x6C780D
{
    mangled_assert("?internalChanFade@Channel@seInterface@@AAEJXZ");
    todo("implement");
}

long seInterface::Channel::internalChanFadePitch() // 0x6C78FA
{
    mangled_assert("?internalChanFadePitch@Channel@seInterface@@AAEJXZ");
    todo("implement");
}

long seInterface::Channel::internalPlaylistNext() // 0x6C81DF
{
    mangled_assert("?internalPlaylistNext@Channel@seInterface@@AAEJXZ");
    todo("implement");
}

/* ---------- private code */
#endif
