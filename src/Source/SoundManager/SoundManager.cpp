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

_extern void _sub_6CC905(SoundManager *const);
void SoundManager::Reload() // 0x6CC905
{
    mangled_assert("?Reload@SoundManager@@QAEXXZ");
    todo("implement");
    _sub_6CC905(this);
}

_extern void _sub_6CCBDE(SoundManager *const, float);
void SoundManager::StopAll(float) // 0x6CCBDE
{
    mangled_assert("?StopAll@SoundManager@@QAEXM@Z");
    todo("implement");
    _sub_6CCBDE(this, arg);
}

_extern void _sub_6CCA88(SoundManager *const, char const *);
void SoundManager::SetSubtitlePath(char const *) // 0x6CCA88
{
    mangled_assert("?SetSubtitlePath@SoundManager@@QAEXPBD@Z");
    todo("implement");
    _sub_6CCA88(this, arg);
}

_extern char const *_sub_6CC533(SoundManager const *const);
char const *SoundManager::GetSubtitlePath() const // 0x6CC533
{
    mangled_assert("?GetSubtitlePath@SoundManager@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_6CC533(this);
    return __result;
}

_extern void _sub_6CC0E0(SoundManager *const);
void SoundManager::Build3DdestinationList() // 0x6CC0E0
{
    mangled_assert("?Build3DdestinationList@SoundManager@@AAEXXZ");
    todo("implement");
    _sub_6CC0E0(this);
}

_extern void _sub_6CC57D(SoundManager *const);
void SoundManager::NISstart() // 0x6CC57D
{
    mangled_assert("?NISstart@SoundManager@@QAEXXZ");
    todo("implement");
    _sub_6CC57D(this);
}

_extern void _sub_6CC576(SoundManager *const);
void SoundManager::NISend() // 0x6CC576
{
    mangled_assert("?NISend@SoundManager@@QAEXXZ");
    todo("implement");
    _sub_6CC576(this);
}

_extern void _sub_6CCF4B(SoundManager *const, bool);
void SoundManager::setInSensorsManager(bool) // 0x6CCF4B
{
    mangled_assert("?setInSensorsManager@SoundManager@@QAEX_N@Z");
    todo("implement");
    _sub_6CCF4B(this, arg);
}

_extern bool _sub_6CC456(SoundManager *const);
bool SoundManager::EnterGame() // 0x6CC456
{
    mangled_assert("?EnterGame@SoundManager@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_6CC456(this);
    return __result;
}

_extern bool _sub_6CC541(SoundManager *const);
bool SoundManager::LeaveGame() // 0x6CC541
{
    mangled_assert("?LeaveGame@SoundManager@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_6CC541(this);
    return __result;
}

_extern void _sub_6CCA34(SoundManager *const, SoundManager::AudioQuality);
void SoundManager::SetQuality(SoundManager::AudioQuality) // 0x6CCA34
{
    mangled_assert("?SetQuality@SoundManager@@QAEXW4AudioQuality@1@@Z");
    todo("implement");
    _sub_6CCA34(this, arg);
}

_extern SoundManager::AudioQuality _sub_6CC51A(SoundManager *const);
SoundManager::AudioQuality SoundManager::GetQuality() // 0x6CC51A
{
    mangled_assert("?GetQuality@SoundManager@@QAE?AW4AudioQuality@1@XZ");
    todo("implement");
    SoundManager::AudioQuality __result = _sub_6CC51A(this);
    return __result;
}

_extern void _sub_6CC978(SoundManager *const, long);
void SoundManager::SetChannels(long) // 0x6CC978
{
    mangled_assert("?SetChannels@SoundManager@@QAEXJ@Z");
    todo("implement");
    _sub_6CC978(this, arg);
}

_extern long _sub_6CC47D(SoundManager *const);
long SoundManager::GetChannels() // 0x6CC47D
{
    mangled_assert("?GetChannels@SoundManager@@QAEJXZ");
    todo("implement");
    long __result = _sub_6CC47D(this);
    return __result;
}

_extern void _sub_6CC9F7(SoundManager *const, bool);
void SoundManager::SetEnableWorldAmbient(bool) // 0x6CC9F7
{
    mangled_assert("?SetEnableWorldAmbient@SoundManager@@QAEX_N@Z");
    todo("implement");
    _sub_6CC9F7(this, arg);
}

_extern bool _sub_6CC50B(SoundManager *const);
bool SoundManager::GetEnableAmbientWorld() // 0x6CC50B
{
    mangled_assert("?GetEnableAmbientWorld@SoundManager@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_6CC50B(this);
    return __result;
}

_extern void _sub_6CC9E4(SoundManager *const, SoundManager::HWDriver);
void SoundManager::SetDriver(SoundManager::HWDriver) // 0x6CC9E4
{
    mangled_assert("?SetDriver@SoundManager@@QAEXW4HWDriver@1@@Z");
    todo("implement");
    _sub_6CC9E4(this, arg);
}

_extern SoundManager::HWDriver _sub_6CC4C3(SoundManager *const);
SoundManager::HWDriver SoundManager::GetDriver() // 0x6CC4C3
{
    mangled_assert("?GetDriver@SoundManager@@QAE?AW4HWDriver@1@XZ");
    todo("implement");
    SoundManager::HWDriver __result = _sub_6CC4C3(this);
    return __result;
}

_extern SoundManager::HWDriver _sub_6CC500(SoundManager *const, long);
SoundManager::HWDriver SoundManager::GetDriverValue(long) // 0x6CC500
{
    mangled_assert("?GetDriverValue@SoundManager@@QAE?AW4HWDriver@1@J@Z");
    todo("implement");
    SoundManager::HWDriver __result = _sub_6CC500(this, arg);
    return __result;
}

_extern long _sub_6CC4E4(SoundManager *const, SoundManager::HWDriver);
long SoundManager::GetDriverIndex(SoundManager::HWDriver) // 0x6CC4E4
{
    mangled_assert("?GetDriverIndex@SoundManager@@QAEJW4HWDriver@1@@Z");
    todo("implement");
    long __result = _sub_6CC4E4(this, arg);
    return __result;
}

_extern bool _sub_6CC422(SoundManager *const);
bool SoundManager::EnableRandomSamples() // 0x6CC422
{
    mangled_assert("?EnableRandomSamples@SoundManager@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_6CC422(this);
    return __result;
}

_extern void _sub_6CC952(SoundManager *const, float);
void SoundManager::SFXSetVolume(float) // 0x6CC952
{
    mangled_assert("?SFXSetVolume@SoundManager@@QAEXM@Z");
    todo("implement");
    _sub_6CC952(this, arg);
}

_extern float _sub_6CC94C(SoundManager *const);
float SoundManager::SFXGetVolume() // 0x6CC94C
{
    mangled_assert("?SFXGetVolume@SoundManager@@QAEMXZ");
    todo("implement");
    float __result = _sub_6CC94C(this);
    return __result;
}

_extern void _sub_6CCA16(SoundManager *const, char const *);
void SoundManager::SetMuteActor(char const *) // 0x6CCA16
{
    mangled_assert("?SetMuteActor@SoundManager@@QAEXPBD@Z");
    todo("implement");
    _sub_6CCA16(this, arg);
}

_extern bool _sub_6CCA5A(SoundManager *const, char const *);
bool SoundManager::SetRootPath(char const *) // 0x6CCA5A
{
    mangled_assert("?SetRootPath@SoundManager@@QAE_NPBD@Z");
    todo("implement");
    bool __result = _sub_6CCA5A(this, arg);
    return __result;
}

_extern char const *_sub_6CC523(SoundManager const *const);
char const *SoundManager::GetRootPath() const // 0x6CC523
{
    mangled_assert("?GetRootPath@SoundManager@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_6CC523(this);
    return __result;
}

_extern bool _sub_6CCAA6(SoundManager *const);
bool SoundManager::SoundEnabled() // 0x6CCAA6
{
    mangled_assert("?SoundEnabled@SoundManager@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_6CCAA6(this);
    return __result;
}

_extern void _sub_6CCBBA(long);
void SoundManager::StingerOver(long handle) // 0x6CCBBA
{
    mangled_assert("?StingerOver@SoundManager@@CGXJ@Z");
    todo("implement");
    _sub_6CCBBA(handle);
}

_extern void _sub_6CCA06(SoundManager *const, float);
void SoundManager::SetFEMusicVol(float) // 0x6CCA06
{
    mangled_assert("?SetFEMusicVol@SoundManager@@QAEXM@Z");
    todo("implement");
    _sub_6CCA06(this, arg);
}

_extern float _sub_6CC514(SoundManager *const);
float SoundManager::GetFEMusicVol() // 0x6CC514
{
    mangled_assert("?GetFEMusicVol@SoundManager@@QAEMXZ");
    todo("implement");
    float __result = _sub_6CC514(this);
    return __result;
}

_extern void _sub_6CC42B(SoundManager *const, bool);
void SoundManager::EnableSound(bool) // 0x6CC42B
{
    mangled_assert("?EnableSound@SoundManager@@QAEX_N@Z");
    todo("implement");
    _sub_6CC42B(this, arg);
}

_extern void _sub_6CCC4C(SoundManager *const);
void SoundManager::ToggleAmbientSound() // 0x6CCC4C
{
    mangled_assert("?ToggleAmbientSound@SoundManager@@QAEXXZ");
    todo("implement");
    _sub_6CCC4C(this);
}

_extern void _sub_6CC33C(SoundManager *const, bool);
void SoundManager::EnableAmbientSound(bool) // 0x6CC33C
{
    mangled_assert("?EnableAmbientSound@SoundManager@@QAEX_N@Z");
    todo("implement");
    _sub_6CC33C(this, arg);
}

_extern void _sub_6CCC72(SoundManager *const);
void SoundManager::ToggleMusic() // 0x6CCC72
{
    mangled_assert("?ToggleMusic@SoundManager@@QAEXXZ");
    todo("implement");
    _sub_6CCC72(this);
}

_extern void _sub_6CCC5F(SoundManager *const);
void SoundManager::ToggleCameraMode() // 0x6CCC5F
{
    mangled_assert("?ToggleCameraMode@SoundManager@@QAEXXZ");
    todo("implement");
    _sub_6CCC5F(this);
}

_extern void _sub_6CCC85(SoundManager *const);
void SoundManager::ToggleSpeech() // 0x6CCC85
{
    mangled_assert("?ToggleSpeech@SoundManager@@QAEXXZ");
    todo("implement");
    _sub_6CCC85(this);
}

_extern void _sub_6CC43D(SoundManager *const, bool);
void SoundManager::EnableSpeech(bool) // 0x6CC43D
{
    mangled_assert("?EnableSpeech@SoundManager@@QAEX_N@Z");
    todo("implement");
    _sub_6CC43D(this, arg);
}

_extern bool _sub_6CC52D(SoundManager const *const);
bool SoundManager::GetSpeechEnabled() const // 0x6CC52D
{
    mangled_assert("?GetSpeechEnabled@SoundManager@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_6CC52D(this);
    return __result;
}

_extern void _sub_6CC365(SoundManager *const, bool);
void SoundManager::EnableMusic(bool) // 0x6CC365
{
    mangled_assert("?EnableMusic@SoundManager@@QAEX_N@Z");
    todo("implement");
    _sub_6CC365(this, arg);
}

_extern void _sub_6CCAEE(SoundManager *const, bool, float);
void SoundManager::SoundPause(bool, float) // 0x6CCAEE
{
    mangled_assert("?SoundPause@SoundManager@@QAEX_NM@Z");
    todo("implement");
    _sub_6CCAEE(this, arg, arg);
}

_extern void _sub_6CCAAC(SoundManager *const, bool, float);
void SoundManager::SoundLostFocus(bool, float) // 0x6CCAAC
{
    mangled_assert("?SoundLostFocus@SoundManager@@QAEX_NM@Z");
    todo("implement");
    _sub_6CCAAC(this, arg, arg);
}

_extern float _sub_6CC1E0(SoundManager *const, long);
float SoundManager::ChannelGetPosition(long) // 0x6CC1E0
{
    mangled_assert("?ChannelGetPosition@SoundManager@@QAEMJ@Z");
    todo("implement");
    float __result = _sub_6CC1E0(this, arg);
    return __result;
}

_extern long _sub_6CC1A9(SoundManager *const, long);
long SoundManager::ChannelGetBytePosition(long) // 0x6CC1A9
{
    mangled_assert("?ChannelGetBytePosition@SoundManager@@QAEJJ@Z");
    todo("implement");
    long __result = _sub_6CC1A9(this, arg);
    return __result;
}

_extern float _sub_6CC1B4(SoundManager *const, long);
float SoundManager::ChannelGetLength(long) // 0x6CC1B4
{
    mangled_assert("?ChannelGetLength@SoundManager@@QAEMJ@Z");
    todo("implement");
    float __result = _sub_6CC1B4(this, arg);
    return __result;
}

_extern bool _sub_6CC20C(SoundManager *const, long);
bool SoundManager::ChannelIsLooping(long) // 0x6CC20C
{
    mangled_assert("?ChannelIsLooping@SoundManager@@QAE_NJ@Z");
    todo("implement");
    bool __result = _sub_6CC20C(this, arg);
    return __result;
}

_extern void _sub_6CCC98(SoundManager *const, float, bool);
void SoundManager::Update(float, bool) // 0x6CCC98
{
    mangled_assert("?Update@SoundManager@@QAEXM_N@Z");
    todo("implement");
    _sub_6CCC98(this, arg, arg);
}

_extern long _sub_6CC584(SoundManager *const, PatchID const &, __int32, void (*)(long), long, float);
long SoundManager::PlayPatch(PatchID const &, __int32, void (*)(long), long, float) // 0x6CC584
{
    mangled_assert("?PlayPatch@SoundManager@@QAEJABVPatchID@@HP6GXJ@ZJM@Z");
    todo("implement");
    long __result = _sub_6CC584(this, arg, arg, arg, arg, arg);
    return __result;
}

_extern void _sub_6CC217(SoundManager *const);
void SoundManager::Clear() // 0x6CC217
{
    mangled_assert("?Clear@SoundManager@@QAEXXZ");
    todo("implement");
    _sub_6CC217(this);
}

_extern long _sub_6CC666(SoundManager *const, char const *, float);
long SoundManager::PlaySound(char const *, float) // 0x6CC666
{
    mangled_assert("?PlaySound@SoundManager@@QAEJPBDM@Z");
    todo("implement");
    long __result = _sub_6CC666(this, arg, arg);
    return __result;
}

_extern void _sub_6CCA64(SoundManager *const, long, float);
void SoundManager::SetSoundVolume(long, float) // 0x6CCA64
{
    mangled_assert("?SetSoundVolume@SoundManager@@QAEXJM@Z");
    todo("implement");
    _sub_6CCA64(this, arg, arg);
}

_extern bool _sub_6CCBAF(SoundManager *const, long);
bool SoundManager::SoundPlaying(long) // 0x6CCBAF
{
    mangled_assert("?SoundPlaying@SoundManager@@QAE_NJ@Z");
    todo("implement");
    bool __result = _sub_6CCBAF(this, arg);
    return __result;
}

_extern void _sub_6CC6FC(SoundManager *const, char const *, long, __int32);
void SoundManager::PlaySound(char const *, long, __int32) // 0x6CC6FC
{
    mangled_assert("?PlaySound@SoundManager@@QAEXPBDJH@Z");
    todo("implement");
    _sub_6CC6FC(this, arg, arg, arg);
}

_extern void _sub_6CC790(SoundManager *const, char const *, vector3 const &, long, __int32);
void SoundManager::PlaySoundAt(char const *, vector3 const &, long, __int32) // 0x6CC790
{
    mangled_assert("?PlaySoundAt@SoundManager@@QAEXPBDABVvector3@@JH@Z");
    todo("implement");
    _sub_6CC790(this, arg, arg, arg, arg);
}

_extern void _sub_6CC83C(SoundManager *const, char const *, float, __int32);
void SoundManager::PlaySpeech(char const *, float, __int32) // 0x6CC83C
{
    mangled_assert("?PlaySpeech@SoundManager@@QAEXPBDMH@Z");
    todo("implement");
    _sub_6CC83C(this, arg, arg, arg);
}

_extern void _sub_6CC8AF(SoundManager *const, char const *);
void SoundManager::PlayStinger(char const *) // 0x6CC8AF
{
    mangled_assert("?PlayStinger@SoundManager@@QAEXPBD@Z");
    todo("implement");
    _sub_6CC8AF(this, arg);
}

_extern void *_sub_6CC60B(char const *, __int32, __int32);
void *SoundManager::PlayRawWAVE(char const *file, __int32 vol, __int32 pan) // 0x6CC60B
{
    mangled_assert("?PlayRawWAVE@SoundManager@@SGPAXPBDHH@Z");
    todo("implement");
    void * __result = _sub_6CC60B(file, vol, pan);
    return __result;
}

_extern void _sub_6CCC41(void *);
void SoundManager::StopRawWAVE(void *handle) // 0x6CCC41
{
    mangled_assert("?StopRawWAVE@SoundManager@@SGXPAX@Z");
    todo("implement");
    _sub_6CCC41(handle);
}

_extern bool _sub_6CC486(SoundManager *const, long);
bool SoundManager::GetDestinationQuality(long) // 0x6CC486
{
    mangled_assert("?GetDestinationQuality@SoundManager@@AAE_NJ@Z");
    todo("implement");
    bool __result = _sub_6CC486(this, arg);
    return __result;
}

/* ---------- private code */
#endif
