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

_extern long _sub_73A6F4(seInterface *const, PatchID const &, float, float, float, float, float, __int32, void (*)(long), long, float, bool);
long seInterface::ChannelPlay(PatchID const &, float, float, float, float, float, __int32, void (*)(long), long, float, bool) // 0x73A6F4
{
    mangled_assert("?ChannelPlay@seInterface@@QAEJABVPatchID@@MMMMMHP6GXJ@ZJM_N@Z");
    todo("implement");
    long __result = _sub_73A6F4(this, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg);
    return __result;
}

_extern long _sub_73AAF3(seInterface *const, long, float, float, float, float);
long seInterface::ChannelSetPosition(long, float, float, float, float) // 0x73AAF3
{
    mangled_assert("?ChannelSetPosition@seInterface@@QAEJJMMMM@Z");
    todo("implement");
    long __result = _sub_73AAF3(this, arg, arg, arg, arg, arg);
    return __result;
}

_extern long _sub_73AB62(seInterface *const, long, float, float, float);
long seInterface::ChannelSetVelocity(long, float, float, float) // 0x73AB62
{
    mangled_assert("?ChannelSetVelocity@seInterface@@QAEJJMMM@Z");
    todo("implement");
    long __result = _sub_73AB62(this, arg, arg, arg, arg);
    return __result;
}

_extern long _sub_73A99B(seInterface *const, long, float, float, float);
long seInterface::ChannelSetHeading(long, float, float, float) // 0x73A99B
{
    mangled_assert("?ChannelSetHeading@seInterface@@QAEJJMMM@Z");
    todo("implement");
    long __result = _sub_73A99B(this, arg, arg, arg, arg);
    return __result;
}

_extern bool _sub_73A646(seInterface *const, long);
bool seInterface::ChannelIsPlaying(long) // 0x73A646
{
    mangled_assert("?ChannelIsPlaying@seInterface@@QAE_NJ@Z");
    todo("implement");
    bool __result = _sub_73A646(this, arg);
    return __result;
}

_extern bool _sub_73A62B(seInterface *const, long);
bool seInterface::ChannelIsPaused(long) // 0x73A62B
{
    mangled_assert("?ChannelIsPaused@seInterface@@QAE_NJ@Z");
    todo("implement");
    bool __result = _sub_73A62B(this, arg);
    return __result;
}

_extern bool _sub_73A610(seInterface *const, long);
bool seInterface::ChannelIsLooping(long) // 0x73A610
{
    mangled_assert("?ChannelIsLooping@seInterface@@QAE_NJ@Z");
    todo("implement");
    bool __result = _sub_73A610(this, arg);
    return __result;
}

_extern long _sub_73ABA1(seInterface *const, long, float, float);
long seInterface::ChannelSetVolume(long, float, float) // 0x73ABA1
{
    mangled_assert("?ChannelSetVolume@seInterface@@QAEJJMM@Z");
    todo("implement");
    long __result = _sub_73ABA1(this, arg, arg, arg);
    return __result;
}

_extern long _sub_73AACE(seInterface *const, long, float, float);
long seInterface::ChannelSetPitch(long, float, float) // 0x73AACE
{
    mangled_assert("?ChannelSetPitch@seInterface@@QAEJJMM@Z");
    todo("implement");
    long __result = _sub_73AACE(this, arg, arg, arg);
    return __result;
}

_extern long _sub_73A9DA(seInterface *const, long, long, long, long);
long seInterface::ChannelSetLoop(long, long, long, long) // 0x73A9DA
{
    mangled_assert("?ChannelSetLoop@seInterface@@QAEJJJJJ@Z");
    todo("implement");
    long __result = _sub_73A9DA(this, arg, arg, arg, arg);
    return __result;
}

_extern long _sub_73ABD3(seInterface *const, long, float, bool);
long seInterface::ChannelStop(long, float, bool) // 0x73ABD3
{
    mangled_assert("?ChannelStop@seInterface@@QAEJJM_N@Z");
    todo("implement");
    long __result = _sub_73ABD3(this, arg, arg, arg);
    return __result;
}

_extern long _sub_73A661(seInterface *const, long, float);
long seInterface::ChannelPause(long, float) // 0x73A661
{
    mangled_assert("?ChannelPause@seInterface@@QAEJJM@Z");
    todo("implement");
    long __result = _sub_73A661(this, arg, arg);
    return __result;
}

_extern void _sub_73ABFC(seInterface *const, float);
void seInterface::ChannelStopAll(float) // 0x73ABFC
{
    mangled_assert("?ChannelStopAll@seInterface@@QAEXM@Z");
    todo("implement");
    _sub_73ABFC(this, arg);
}

_extern void _sub_73A686(seInterface *const, float);
void seInterface::ChannelPauseAll(float) // 0x73A686
{
    mangled_assert("?ChannelPauseAll@seInterface@@QAEXM@Z");
    todo("implement");
    _sub_73A686(this, arg);
}

_extern void _sub_73A6BA(seInterface *const, long, float);
void seInterface::ChannelPauseDestination(long, float) // 0x73A6BA
{
    mangled_assert("?ChannelPauseDestination@seInterface@@QAEXJM@Z");
    todo("implement");
    _sub_73A6BA(this, arg, arg);
}

_extern long _sub_73A908(seInterface *const, long, float);
long seInterface::ChannelResume(long, float) // 0x73A908
{
    mangled_assert("?ChannelResume@seInterface@@QAEJJM@Z");
    todo("implement");
    long __result = _sub_73A908(this, arg, arg);
    return __result;
}

_extern void _sub_73A92D(seInterface *const, float);
void seInterface::ChannelResumeAll(float) // 0x73A92D
{
    mangled_assert("?ChannelResumeAll@seInterface@@QAEXM@Z");
    todo("implement");
    _sub_73A92D(this, arg);
}

_extern void _sub_73A961(seInterface *const, long, float);
void seInterface::ChannelResumeDestination(long, float) // 0x73A961
{
    mangled_assert("?ChannelResumeDestination@seInterface@@QAEXJM@Z");
    todo("implement");
    _sub_73A961(this, arg, arg);
}

_extern long _sub_73A9FF(seInterface *const, long, float);
long seInterface::ChannelSetObstruction(long, float) // 0x73A9FF
{
    mangled_assert("?ChannelSetObstruction@seInterface@@QAEJJM@Z");
    todo("implement");
    long __result = _sub_73A9FF(this, arg, arg);
    return __result;
}

_extern long _sub_73AA24(seInterface *const, long, float);
long seInterface::ChannelSetOcclusion(long, float) // 0x73AA24
{
    mangled_assert("?ChannelSetOcclusion@seInterface@@QAEJJM@Z");
    todo("implement");
    long __result = _sub_73AA24(this, arg, arg);
    return __result;
}

_extern long _sub_73AAA9(seInterface *const, long, float);
long seInterface::ChannelSetPan(long, float) // 0x73AAA9
{
    mangled_assert("?ChannelSetPan@seInterface@@QAEJJM@Z");
    todo("implement");
    long __result = _sub_73AAA9(this, arg, arg);
    return __result;
}

_extern long _sub_73AA49(seInterface *const, long, float, float, float, float, float, float);
long seInterface::ChannelSetOrientation(long, float, float, float, float, float, float) // 0x73AA49
{
    mangled_assert("?ChannelSetOrientation@seInterface@@QAEJJMMMMMM@Z");
    todo("implement");
    long __result = _sub_73AA49(this, arg, arg, arg, arg, arg, arg, arg);
    return __result;
}

_extern long _sub_73AB3D(seInterface *const, long, float);
long seInterface::ChannelSetReverb(long, float) // 0x73AB3D
{
    mangled_assert("?ChannelSetReverb@seInterface@@QAEJJM@Z");
    todo("implement");
    long __result = _sub_73AB3D(this, arg, arg);
    return __result;
}

_extern long _sub_73A5F4(seInterface *const, long);
long seInterface::ChannelGetMSPosition(long) // 0x73A5F4
{
    mangled_assert("?ChannelGetMSPosition@seInterface@@QAEJJ@Z");
    todo("implement");
    long __result = _sub_73A5F4(this, arg);
    return __result;
}

_extern long _sub_73A5BC(seInterface *const, long);
long seInterface::ChannelGetBytePosition(long) // 0x73A5BC
{
    mangled_assert("?ChannelGetBytePosition@seInterface@@QAEJJ@Z");
    todo("implement");
    long __result = _sub_73A5BC(this, arg);
    return __result;
}

_extern long _sub_73A5D8(seInterface *const, long);
long seInterface::ChannelGetMSLength(long) // 0x73A5D8
{
    mangled_assert("?ChannelGetMSLength@seInterface@@QAEJJ@Z");
    todo("implement");
    long __result = _sub_73A5D8(this, arg);
    return __result;
}

_extern seInterface::Channel *_sub_73A585(seInterface *const, long);
seInterface::Channel *seInterface::ChanTranslate(long) // 0x73A585
{
    mangled_assert("?ChanTranslate@seInterface@@AAEPAVChannel@1@J@Z");
    todo("implement");
    seInterface::Channel * __result = _sub_73A585(this, arg);
    return __result;
}

_extern long _sub_73AC47(seInterface *const, long, long, long, long, float, float);
long seInterface::GroupFunc(long, long, long, long, float, float) // 0x73AC47
{
    mangled_assert("?GroupFunc@seInterface@@QAEJJJJJMM@Z");
    todo("implement");
    long __result = _sub_73AC47(this, arg, arg, arg, arg, arg, arg);
    return __result;
}

/* ---------- private code */
#endif
