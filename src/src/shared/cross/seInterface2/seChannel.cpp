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
#include <xmemory>
#include <xmemory0>
#include <xstddef>
#include <seInterface2\sePatchInfoList.h>
#include <type_traits>
#include <xstring>
#include <seInterface2\sedefinesshared.h>
#include <xutility>
#include <iosfwd>
#include <seInterface2\sedefines.h>
#include <seInterface2\sedevice.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Src\Shared\PC\seInterface2\pch.h"
#include <seInterface2\SEInterface.h>
#include <seInterface2\seinterfacefunc.h>
#include <seInterface2\seinclude.h>
#include <seInterface2\Channel.h>
#include <fileio\platform.h>
#include <fileio\fileioexports.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

long seInterface::ChannelPlay(PatchID const &, float, float, float, float, float, __int32, void (*)(long), long, float, bool) // 0x73A6F4
{
    mangled_assert("?ChannelPlay@seInterface@@QAEJABVPatchID@@MMMMMHP6GXJ@ZJM_N@Z");
    todo("implement");
}

long seInterface::ChannelSetPosition(long, float, float, float, float) // 0x73AAF3
{
    mangled_assert("?ChannelSetPosition@seInterface@@QAEJJMMMM@Z");
    todo("implement");
}

long seInterface::ChannelSetVelocity(long, float, float, float) // 0x73AB62
{
    mangled_assert("?ChannelSetVelocity@seInterface@@QAEJJMMM@Z");
    todo("implement");
}

long seInterface::ChannelSetHeading(long, float, float, float) // 0x73A99B
{
    mangled_assert("?ChannelSetHeading@seInterface@@QAEJJMMM@Z");
    todo("implement");
}

bool seInterface::ChannelIsPlaying(long) // 0x73A646
{
    mangled_assert("?ChannelIsPlaying@seInterface@@QAE_NJ@Z");
    todo("implement");
}

bool seInterface::ChannelIsPaused(long) // 0x73A62B
{
    mangled_assert("?ChannelIsPaused@seInterface@@QAE_NJ@Z");
    todo("implement");
}

bool seInterface::ChannelIsLooping(long) // 0x73A610
{
    mangled_assert("?ChannelIsLooping@seInterface@@QAE_NJ@Z");
    todo("implement");
}

long seInterface::ChannelSetVolume(long, float, float) // 0x73ABA1
{
    mangled_assert("?ChannelSetVolume@seInterface@@QAEJJMM@Z");
    todo("implement");
}

long seInterface::ChannelSetPitch(long, float, float) // 0x73AACE
{
    mangled_assert("?ChannelSetPitch@seInterface@@QAEJJMM@Z");
    todo("implement");
}

long seInterface::ChannelSetLoop(long, long, long, long) // 0x73A9DA
{
    mangled_assert("?ChannelSetLoop@seInterface@@QAEJJJJJ@Z");
    todo("implement");
}

long seInterface::ChannelStop(long, float, bool) // 0x73ABD3
{
    mangled_assert("?ChannelStop@seInterface@@QAEJJM_N@Z");
    todo("implement");
}

long seInterface::ChannelPause(long, float) // 0x73A661
{
    mangled_assert("?ChannelPause@seInterface@@QAEJJM@Z");
    todo("implement");
}

void seInterface::ChannelStopAll(float) // 0x73ABFC
{
    mangled_assert("?ChannelStopAll@seInterface@@QAEXM@Z");
    todo("implement");
}

void seInterface::ChannelPauseAll(float) // 0x73A686
{
    mangled_assert("?ChannelPauseAll@seInterface@@QAEXM@Z");
    todo("implement");
}

void seInterface::ChannelPauseDestination(long, float) // 0x73A6BA
{
    mangled_assert("?ChannelPauseDestination@seInterface@@QAEXJM@Z");
    todo("implement");
}

long seInterface::ChannelResume(long, float) // 0x73A908
{
    mangled_assert("?ChannelResume@seInterface@@QAEJJM@Z");
    todo("implement");
}

void seInterface::ChannelResumeAll(float) // 0x73A92D
{
    mangled_assert("?ChannelResumeAll@seInterface@@QAEXM@Z");
    todo("implement");
}

void seInterface::ChannelResumeDestination(long, float) // 0x73A961
{
    mangled_assert("?ChannelResumeDestination@seInterface@@QAEXJM@Z");
    todo("implement");
}

long seInterface::ChannelSetObstruction(long, float) // 0x73A9FF
{
    mangled_assert("?ChannelSetObstruction@seInterface@@QAEJJM@Z");
    todo("implement");
}

long seInterface::ChannelSetOcclusion(long, float) // 0x73AA24
{
    mangled_assert("?ChannelSetOcclusion@seInterface@@QAEJJM@Z");
    todo("implement");
}

long seInterface::ChannelSetPan(long, float) // 0x73AAA9
{
    mangled_assert("?ChannelSetPan@seInterface@@QAEJJM@Z");
    todo("implement");
}

long seInterface::ChannelSetOrientation(long, float, float, float, float, float, float) // 0x73AA49
{
    mangled_assert("?ChannelSetOrientation@seInterface@@QAEJJMMMMMM@Z");
    todo("implement");
}

long seInterface::ChannelSetReverb(long, float) // 0x73AB3D
{
    mangled_assert("?ChannelSetReverb@seInterface@@QAEJJM@Z");
    todo("implement");
}

long seInterface::ChannelGetMSPosition(long) // 0x73A5F4
{
    mangled_assert("?ChannelGetMSPosition@seInterface@@QAEJJ@Z");
    todo("implement");
}

long seInterface::ChannelGetBytePosition(long) // 0x73A5BC
{
    mangled_assert("?ChannelGetBytePosition@seInterface@@QAEJJ@Z");
    todo("implement");
}

long seInterface::ChannelGetMSLength(long) // 0x73A5D8
{
    mangled_assert("?ChannelGetMSLength@seInterface@@QAEJJ@Z");
    todo("implement");
}

seInterface::Channel *seInterface::ChanTranslate(long) // 0x73A585
{
    mangled_assert("?ChanTranslate@seInterface@@AAEPAVChannel@1@J@Z");
    todo("implement");
}

long seInterface::GroupFunc(long, long, long, long, float, float) // 0x73AC47
{
    mangled_assert("?GroupFunc@seInterface@@QAEJJJJJMM@Z");
    todo("implement");
}

/* ---------- private code */
#endif
