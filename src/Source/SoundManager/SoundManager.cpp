#if 0
/* ---------- headers */

#include "decomp.h"
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <memory\memorylib.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <assist\typemagic.h>
#include <boost\smart_ptr.hpp>
#include <luaconfig\luaconfig.h>
#include <boost\scoped_ptr.hpp>
#include <lua\lua.h>
#include <seInterface2\sedefinesshared.h>
#include <new>
#include <xmemory0>
#include <xstddef>
#include <type_traits>
#include <xstring>
#include <seInterface2\sedefines.h>
#include <fileio\filepath.h>
#include <fileio\fileioexports.h>
#include <xutility>
#include <fileio\bytestream.h>
#include <debug\ctassert.h>
#include <utility>
#include <iosfwd>
#include <list>
#include <debug\db.h>
#include <boost\scoped_array.hpp>
#include <algorithm>
#include <Engine\random.h>
#include <assist\gbitset.h>
#include <SoundManager\pch.h>
#include <SoundManager\SoundManager.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\seinterfacefunc.h>
#include <seInterface2\SoundParamManager.h>
#include <boost\shared_ptr.hpp>
#include <bitset>
#include <wchar.h>
#include <SoundManager\SoundEntityHandle.h>
#include <math.h>
#include <map>
#include <xtree>
#include <fileio\filestream.h>
#include <SoundManager\soundmandata.h>
#include <SoundManager\SoundEntity.h>
#include <assist\fixedstring.h>
#include <profile\profile.h>
#include <assist\stlexstring.h>
#include <iostream>
#include <Mathlib\vector3.h>
#include <util\types.h>
#include <SoundManager\SoundManager.pch>
#include <boost\shared_array.hpp>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SampleID.h>
#include <seInterface2\SoundParams.h>
#include <seInterface2\SampleBase.h>
#include <boost\noncopyable.hpp>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const *SoundManager::HWSupportedDrivers[7]; // 0x84CB10
extern char const *SoundManager::HWDriverNames[7]; // 0x83FD24
extern char const *SoundManager::HWDriverDesc[7]; // 0x83FD40
extern long const SoundManager::m_MaxDriverChannels[7]; // 0x7BB848

/* ---------- private variables */

/* ---------- public code */

void SoundManager::Reload() // 0x6CC905
{
    mangled_assert("?Reload@SoundManager@@QAEXXZ");
    todo("implement");
}

void SoundManager::StopAll(float) // 0x6CCBDE
{
    mangled_assert("?StopAll@SoundManager@@QAEXM@Z");
    todo("implement");
}

void SoundManager::SetSubtitlePath(char const *) // 0x6CCA88
{
    mangled_assert("?SetSubtitlePath@SoundManager@@QAEXPBD@Z");
    todo("implement");
}

char const *SoundManager::GetSubtitlePath() const // 0x6CC533
{
    mangled_assert("?GetSubtitlePath@SoundManager@@QBEPBDXZ");
    todo("implement");
}

void SoundManager::Build3DdestinationList() // 0x6CC0E0
{
    mangled_assert("?Build3DdestinationList@SoundManager@@AAEXXZ");
    todo("implement");
}

void SoundManager::NISstart() // 0x6CC57D
{
    mangled_assert("?NISstart@SoundManager@@QAEXXZ");
    todo("implement");
}

void SoundManager::NISend() // 0x6CC576
{
    mangled_assert("?NISend@SoundManager@@QAEXXZ");
    todo("implement");
}

void SoundManager::setInSensorsManager(bool) // 0x6CCF4B
{
    mangled_assert("?setInSensorsManager@SoundManager@@QAEX_N@Z");
    todo("implement");
}

bool SoundManager::EnterGame() // 0x6CC456
{
    mangled_assert("?EnterGame@SoundManager@@QAE_NXZ");
    todo("implement");
}

bool SoundManager::LeaveGame() // 0x6CC541
{
    mangled_assert("?LeaveGame@SoundManager@@QAE_NXZ");
    todo("implement");
}

void SoundManager::SetQuality(SoundManager::AudioQuality) // 0x6CCA34
{
    mangled_assert("?SetQuality@SoundManager@@QAEXW4AudioQuality@1@@Z");
    todo("implement");
}

SoundManager::AudioQuality SoundManager::GetQuality() // 0x6CC51A
{
    mangled_assert("?GetQuality@SoundManager@@QAE?AW4AudioQuality@1@XZ");
    todo("implement");
}

void SoundManager::SetChannels(long) // 0x6CC978
{
    mangled_assert("?SetChannels@SoundManager@@QAEXJ@Z");
    todo("implement");
}

long SoundManager::GetChannels() // 0x6CC47D
{
    mangled_assert("?GetChannels@SoundManager@@QAEJXZ");
    todo("implement");
}

void SoundManager::SetEnableWorldAmbient(bool) // 0x6CC9F7
{
    mangled_assert("?SetEnableWorldAmbient@SoundManager@@QAEX_N@Z");
    todo("implement");
}

bool SoundManager::GetEnableAmbientWorld() // 0x6CC50B
{
    mangled_assert("?GetEnableAmbientWorld@SoundManager@@QAE_NXZ");
    todo("implement");
}

void SoundManager::SetDriver(SoundManager::HWDriver) // 0x6CC9E4
{
    mangled_assert("?SetDriver@SoundManager@@QAEXW4HWDriver@1@@Z");
    todo("implement");
}

SoundManager::HWDriver SoundManager::GetDriver() // 0x6CC4C3
{
    mangled_assert("?GetDriver@SoundManager@@QAE?AW4HWDriver@1@XZ");
    todo("implement");
}

SoundManager::HWDriver SoundManager::GetDriverValue(long) // 0x6CC500
{
    mangled_assert("?GetDriverValue@SoundManager@@QAE?AW4HWDriver@1@J@Z");
    todo("implement");
}

long SoundManager::GetDriverIndex(SoundManager::HWDriver) // 0x6CC4E4
{
    mangled_assert("?GetDriverIndex@SoundManager@@QAEJW4HWDriver@1@@Z");
    todo("implement");
}

bool SoundManager::EnableRandomSamples() // 0x6CC422
{
    mangled_assert("?EnableRandomSamples@SoundManager@@QAE_NXZ");
    todo("implement");
}

void SoundManager::SFXSetVolume(float) // 0x6CC952
{
    mangled_assert("?SFXSetVolume@SoundManager@@QAEXM@Z");
    todo("implement");
}

float SoundManager::SFXGetVolume() // 0x6CC94C
{
    mangled_assert("?SFXGetVolume@SoundManager@@QAEMXZ");
    todo("implement");
}

void SoundManager::SetMuteActor(char const *) // 0x6CCA16
{
    mangled_assert("?SetMuteActor@SoundManager@@QAEXPBD@Z");
    todo("implement");
}

bool SoundManager::SetRootPath(char const *) // 0x6CCA5A
{
    mangled_assert("?SetRootPath@SoundManager@@QAE_NPBD@Z");
    todo("implement");
}

char const *SoundManager::GetRootPath() const // 0x6CC523
{
    mangled_assert("?GetRootPath@SoundManager@@QBEPBDXZ");
    todo("implement");
}

bool SoundManager::SoundEnabled() // 0x6CCAA6
{
    mangled_assert("?SoundEnabled@SoundManager@@QAE_NXZ");
    todo("implement");
}

void SoundManager::StingerOver(long handle) // 0x6CCBBA
{
    mangled_assert("?StingerOver@SoundManager@@CGXJ@Z");
    todo("implement");
}

void SoundManager::SetFEMusicVol(float) // 0x6CCA06
{
    mangled_assert("?SetFEMusicVol@SoundManager@@QAEXM@Z");
    todo("implement");
}

float SoundManager::GetFEMusicVol() // 0x6CC514
{
    mangled_assert("?GetFEMusicVol@SoundManager@@QAEMXZ");
    todo("implement");
}

void SoundManager::EnableSound(bool) // 0x6CC42B
{
    mangled_assert("?EnableSound@SoundManager@@QAEX_N@Z");
    todo("implement");
}

void SoundManager::ToggleAmbientSound() // 0x6CCC4C
{
    mangled_assert("?ToggleAmbientSound@SoundManager@@QAEXXZ");
    todo("implement");
}

void SoundManager::EnableAmbientSound(bool) // 0x6CC33C
{
    mangled_assert("?EnableAmbientSound@SoundManager@@QAEX_N@Z");
    todo("implement");
}

void SoundManager::ToggleMusic() // 0x6CCC72
{
    mangled_assert("?ToggleMusic@SoundManager@@QAEXXZ");
    todo("implement");
}

void SoundManager::ToggleCameraMode() // 0x6CCC5F
{
    mangled_assert("?ToggleCameraMode@SoundManager@@QAEXXZ");
    todo("implement");
}

void SoundManager::ToggleSpeech() // 0x6CCC85
{
    mangled_assert("?ToggleSpeech@SoundManager@@QAEXXZ");
    todo("implement");
}

void SoundManager::EnableSpeech(bool) // 0x6CC43D
{
    mangled_assert("?EnableSpeech@SoundManager@@QAEX_N@Z");
    todo("implement");
}

bool SoundManager::GetSpeechEnabled() const // 0x6CC52D
{
    mangled_assert("?GetSpeechEnabled@SoundManager@@QBE_NXZ");
    todo("implement");
}

void SoundManager::EnableMusic(bool) // 0x6CC365
{
    mangled_assert("?EnableMusic@SoundManager@@QAEX_N@Z");
    todo("implement");
}

void SoundManager::SoundPause(bool, float) // 0x6CCAEE
{
    mangled_assert("?SoundPause@SoundManager@@QAEX_NM@Z");
    todo("implement");
}

void SoundManager::SoundLostFocus(bool, float) // 0x6CCAAC
{
    mangled_assert("?SoundLostFocus@SoundManager@@QAEX_NM@Z");
    todo("implement");
}

float SoundManager::ChannelGetPosition(long) // 0x6CC1E0
{
    mangled_assert("?ChannelGetPosition@SoundManager@@QAEMJ@Z");
    todo("implement");
}

long SoundManager::ChannelGetBytePosition(long) // 0x6CC1A9
{
    mangled_assert("?ChannelGetBytePosition@SoundManager@@QAEJJ@Z");
    todo("implement");
}

float SoundManager::ChannelGetLength(long) // 0x6CC1B4
{
    mangled_assert("?ChannelGetLength@SoundManager@@QAEMJ@Z");
    todo("implement");
}

bool SoundManager::ChannelIsLooping(long) // 0x6CC20C
{
    mangled_assert("?ChannelIsLooping@SoundManager@@QAE_NJ@Z");
    todo("implement");
}

void SoundManager::Update(float, bool) // 0x6CCC98
{
    mangled_assert("?Update@SoundManager@@QAEXM_N@Z");
    todo("implement");
}

long SoundManager::PlayPatch(PatchID const &, __int32, void (*)(long), long, float) // 0x6CC584
{
    mangled_assert("?PlayPatch@SoundManager@@QAEJABVPatchID@@HP6GXJ@ZJM@Z");
    todo("implement");
}

void SoundManager::Clear() // 0x6CC217
{
    mangled_assert("?Clear@SoundManager@@QAEXXZ");
    todo("implement");
}

long SoundManager::PlaySound(char const *, float) // 0x6CC666
{
    mangled_assert("?PlaySound@SoundManager@@QAEJPBDM@Z");
    todo("implement");
}

void SoundManager::SetSoundVolume(long, float) // 0x6CCA64
{
    mangled_assert("?SetSoundVolume@SoundManager@@QAEXJM@Z");
    todo("implement");
}

bool SoundManager::SoundPlaying(long) // 0x6CCBAF
{
    mangled_assert("?SoundPlaying@SoundManager@@QAE_NJ@Z");
    todo("implement");
}

void SoundManager::PlaySound(char const *, long, __int32) // 0x6CC6FC
{
    mangled_assert("?PlaySound@SoundManager@@QAEXPBDJH@Z");
    todo("implement");
}

void SoundManager::PlaySoundAt(char const *, vector3 const &, long, __int32) // 0x6CC790
{
    mangled_assert("?PlaySoundAt@SoundManager@@QAEXPBDABVvector3@@JH@Z");
    todo("implement");
}

void SoundManager::PlaySpeech(char const *, float, __int32) // 0x6CC83C
{
    mangled_assert("?PlaySpeech@SoundManager@@QAEXPBDMH@Z");
    todo("implement");
}

void SoundManager::PlayStinger(char const *) // 0x6CC8AF
{
    mangled_assert("?PlayStinger@SoundManager@@QAEXPBD@Z");
    todo("implement");
}

void *SoundManager::PlayRawWAVE(char const *file, __int32 vol, __int32 pan) // 0x6CC60B
{
    mangled_assert("?PlayRawWAVE@SoundManager@@SGPAXPBDHH@Z");
    todo("implement");
}

void SoundManager::StopRawWAVE(void *handle) // 0x6CCC41
{
    mangled_assert("?StopRawWAVE@SoundManager@@SGXPAX@Z");
    todo("implement");
}

bool SoundManager::GetDestinationQuality(long) // 0x6CC486
{
    mangled_assert("?GetDestinationQuality@SoundManager@@AAE_NJ@Z");
    todo("implement");
}

/* ---------- private code */
#endif
