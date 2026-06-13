#if 0
#ifndef __SOUNDMANAGER_H__
#define __SOUNDMANAGER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SoundManager
{
public:
    enum HWDriver
    {
        HWD_EAX3 = 0, // 0x0000
        HWD_EAX2 = 1, // 0x0001
        HWD_EAX = 2, // 0x0002
        HWD_DS3DHard = 3, // 0x0003
        HWD_MSSFast = 4, // 0x0004
        HWD_A3D2 = 5, // 0x0005
        HWD_A3D = 6, // 0x0006
        HWD_Count = 7, // 0x0007
        HWD_Start = 0, // 0x0000
        HWD_ERR = -1, // 0xFF
    };
    enum AudioQuality
    {
        AQ_High = 0,
        AQ_Medium,
        AQ_Low,
        AQ_Count,
    };
    enum MusicType
    {
        MUS_Ambient = 0,
        MUS_Staging,
        MUS_Battle,
        MUS_Stinger,
        MUS_Count,
    };
    static char const *HWSupportedDrivers[7];
    unsigned __int32 GetDriverCount();
    typedef TypedBitSet<enum SoundParams::ParamType,30> OverrideMask;
    class SoundInfo
    {
    public:
        SoundInfo(SoundManager::SoundInfo const &); /* compiler_generated() */
        SoundInfo();
        SoundParams m_params; // 0x0
        TypedBitSet<enum SoundParams::ParamType,30> m_overrides; // 0x1D0
        bool m_bHasFile; // 0x1D4
        bool m_bInvalid; // 0x1D5
        SoundManager::SoundInfo &operator=(SoundManager::SoundInfo const &); /* compiler_generated() */
    };
    static_assert(sizeof(SoundInfo) == 472, "Invalid SoundInfo size");
private:
    SoundManager(SoundManager const &);
    SoundManager();
    ~SoundManager();
public:
    static SoundManager *i();
    static bool Initialize(char const *driverpath, bool loadLuaConfig, __int32 *hwnd);
    static bool IsInitialized();
    static bool Shutdown();
    bool SetRootPath(char const *);
    char const *GetRootPath() const;
    bool SoundEnabled();
    void SoundPause(bool, float);
    void SoundLostFocus(bool, float);
    void Update(float, bool);
    void Clear();
    void Flush();
    void Reload();
    void SaveSettings(LuaConfig &);
    void LoadSettings(LuaConfig &);
    void SetSubtitlePath(char const *);
    char const *GetSubtitlePath() const;
    void SFXSetVolume(float);
    float SFXGetVolume();
    void SetMuteActor(char const *);
    void SetQuality(SoundManager::AudioQuality);
    SoundManager::AudioQuality GetQuality();
    void SetDriver(SoundManager::HWDriver);
    SoundManager::HWDriver GetDriver();
    SoundManager::HWDriver GetDriverValue(long);
    long GetDriverIndex(SoundManager::HWDriver);
    void SetChannels(long);
    long GetChannels();
    void SetEnableWorldAmbient(bool);
    bool GetEnableAmbientWorld();
    float ChannelGetPosition(long);
    long ChannelGetBytePosition(long);
    float ChannelGetLength(long);
    bool ChannelIsLooping(long);
    bool EnterGame();
    bool LeaveGame();
    void setInSensorsManager(bool);
    void NISstart();
    void NISend();
    long PlayPatch(char const *, vector3 const &, long, __int32, bool);
    long PlayPatch(PatchID const &, vector3 const &, long, __int32, bool);
    long PlayPatch(PatchID const &, __int32, void (*)(long), long, float);
    SoundEntityHandle AddEmmiter(PatchID const &, vector3 const &);
    long EmmiterSetPosition(SoundEntityHandle const &, vector3 const &);
    long EmmiterSetVelocity(SoundEntityHandle const &, vector3 const &);
    long EmmiterSetHeading(SoundEntityHandle const &, vector3 const &);
    long EmmiterMute(SoundEntityHandle const &, bool);
    bool EmmiterIsValid(SoundEntityHandle const &);
    bool SetPatchPosition(long, vector3 const &);
    void RemoveEmmiter(SoundEntityHandle const &, bool);
    void SetCamera(vector3 const &, vector3 const &, vector3 const &, float);
    void SetCameraIC(vector3 const &, vector3 const &, vector3 const &, vector3 const &, float);
    void SetNearestEntity(float, bool);
    void StopPatch(long, float);
    void StopAll(float);
    long MusicPlayMovieTrack(PatchID const &);
    long MusicPlayNIS(PatchID const &, float);
    void MusicStartFE();
    void MusicStopFE();
    void MusicSetVolume(float);
    float MusicGetVolume();
    void MusicPlay(PatchID const &, SoundManager::MusicType, float, __int32);
    void MusicPlayDefault();
    void MusicStop(float);
    void StingerPlay(PatchID const &);
    void StingerStop(float);
    void SetBattleTrack(PatchID const &);
    void SetLevelTrack(PatchID const &);
    void BattleMusic(bool);
private:
    void internalMusicUpdate(float, bool);
    void internalBattlePlay(float);
    void internalMusicPlay(float, __int32);
    void internalMusicStop(long *, float);
    void internalMusicPause(long, float);
    float internalMusicVol(MusicTuning &);
public:
    long SpeechPlayMovieSpeech(PatchID const &);
    long SpeechAllShipsPlay(char const *, float, float, void (*)(long), long, char const *);
    long SpeechPlaySubtitled(char const *, void (*)(long));
    void SpeechSetVolume(float);
    float SpeechGetVolume();
    long SpeechPlay(PatchID const &, long, void (*)(long), __int32, float, float, long);
    void SpeechStop(long);
    void SpeechClear();
    void SpeechEnterIntelEvent();
    void SpeechExitIntelEvent();
private:
    static void SpeechCallback(long handle);
    SpeechQueue *FindSpeechQueue(long);
    void SpeechPlayNextQueue();
    void SpeechUpdate(float);
    SpeechQueue *GetCurrentSpeech();
public:
    void InitLua(LuaConfig *);
    void ShutdownLua(LuaConfig *);
    void SetFEMusicVol(float);
    float GetFEMusicVol();
    void ToggleAmbientSound();
    void EnableAmbientSound(bool);
    void ToggleMusic();
    void EnableMusic(bool);
    void EnableSound(bool);
    void ToggleCameraMode();
    void ToggleSpeech();
    void EnableSpeech(bool);
    bool GetSpeechEnabled() const;
    bool EnableRandomSamples();
    static void *PlayRawWAVE(char const *file, __int32 vol, __int32 pan);
    static void StopRawWAVE(void *handle);
    long PlaySound(char const *, float);
    void PlaySound(char const *, long, __int32);
    void PlaySoundAt(char const *, vector3 const &, long, __int32);
    void PlaySpeech(char const *, float, __int32);
    void PlayStinger(char const *);
    void SetSoundVolume(long, float);
    bool SoundPlaying(long);
    class Data;
private:
    SoundManager::Data *m_pimpl; // 0x0
    SoundManager::HWDriver m_HWDriverID[7]; // 0x4
    unsigned __int32 m_drivercount; // 0x20
    static char const *HWDriverNames[7];
    static char const *HWDriverDesc[7];
    static long const m_MaxDriverChannels[7];
    Timer *GetTimer();
    void InitDriverFunctions();
    bool InitDriverSettings(seModeInfo *, char *);
    void InitDriver(char const *, void *, seModeInfo *);
    void InitVars();
    bool GetDestinationQuality(long);
    void Build3DdestinationList();
    long internalSpeechPlay(PatchID const &, long, void (*)(long), __int32, float, float, float, long);
    void internalSpeechRemoveLinks(long);
    static void StingerOver(long handle);
    bool isRoot(char const *) const;
    void luaSetup(LuaConfig &) const;
    bool loadParams(char const *, SoundManager::SoundInfo &) const;
    bool saveParams(char const *, SoundManager::SoundInfo const &, bool) const;
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > getParamsFilename(char const *, bool);
    bool propagateToFile(char const *, bool, TypedBitSet<enum SoundParams::ParamType,30> const &);
    SoundManager &operator=(SoundManager const &);
};
static_assert(sizeof(SoundManager) == 36, "Invalid SoundManager size");

class SoundManager
{
public:
    enum HWDriver
    {
        HWD_EAX3 = 0, // 0x0000
        HWD_EAX2 = 1, // 0x0001
        HWD_EAX = 2, // 0x0002
        HWD_DS3DHard = 3, // 0x0003
        HWD_MSSFast = 4, // 0x0004
        HWD_A3D2 = 5, // 0x0005
        HWD_A3D = 6, // 0x0006
        HWD_Count = 7, // 0x0007
        HWD_Start = 0, // 0x0000
        HWD_ERR = -1, // 0xFF
    };
    enum AudioQuality
    {
        AQ_High = 0,
        AQ_Medium,
        AQ_Low,
        AQ_Count,
    };
    enum MusicType
    {
        MUS_Ambient = 0,
        MUS_Staging,
        MUS_Battle,
        MUS_Stinger,
        MUS_Count,
    };
    static char const *HWSupportedDrivers[7];
    unsigned __int32 GetDriverCount();
    typedef TypedBitSet<enum SoundParams::ParamType,30> OverrideMask;
    class SoundInfo
    {
    public:
        SoundInfo(SoundManager::SoundInfo const &); /* compiler_generated() */
        SoundInfo();
        SoundParams m_params; // 0x0
        TypedBitSet<enum SoundParams::ParamType,30> m_overrides; // 0x1D0
        bool m_bHasFile; // 0x1D4
        bool m_bInvalid; // 0x1D5
        SoundManager::SoundInfo &operator=(SoundManager::SoundInfo const &); /* compiler_generated() */
    };
    static_assert(sizeof(SoundInfo) == 472, "Invalid SoundInfo size");
private:
    SoundManager(SoundManager const &);
    SoundManager();
    ~SoundManager();
public:
    static SoundManager *i();
    static bool Initialize(char const *driverpath, bool loadLuaConfig, __int32 *hwnd);
    static bool IsInitialized();
    static bool Shutdown();
    bool SetRootPath(char const *);
    char const *GetRootPath() const;
    bool SoundEnabled();
    void SoundPause(bool, float);
    void SoundLostFocus(bool, float);
    void Update(float, bool);
    void Clear();
    void Flush();
    void Reload();
    void SaveSettings(LuaConfig &);
    void LoadSettings(LuaConfig &);
    void SetSubtitlePath(char const *);
    char const *GetSubtitlePath() const;
    void SFXSetVolume(float);
    float SFXGetVolume();
    void SetMuteActor(char const *);
    void SetQuality(SoundManager::AudioQuality);
    SoundManager::AudioQuality GetQuality();
    void SetDriver(SoundManager::HWDriver);
    SoundManager::HWDriver GetDriver();
    SoundManager::HWDriver GetDriverValue(long);
    long GetDriverIndex(SoundManager::HWDriver);
    void SetChannels(long);
    long GetChannels();
    void SetEnableWorldAmbient(bool);
    bool GetEnableAmbientWorld();
    float ChannelGetPosition(long);
    long ChannelGetBytePosition(long);
    float ChannelGetLength(long);
    bool ChannelIsLooping(long);
    bool EnterGame();
    bool LeaveGame();
    void setInSensorsManager(bool);
    void NISstart();
    void NISend();
    long PlayPatch(char const *, vector3 const &, long, __int32, bool);
    long PlayPatch(PatchID const &, vector3 const &, long, __int32, bool);
    long PlayPatch(PatchID const &, __int32, void (*)(long), long, float);
    SoundEntityHandle AddEmmiter(PatchID const &, vector3 const &);
    long EmmiterSetPosition(SoundEntityHandle const &, vector3 const &);
    long EmmiterSetVelocity(SoundEntityHandle const &, vector3 const &);
    long EmmiterSetHeading(SoundEntityHandle const &, vector3 const &);
    long EmmiterMute(SoundEntityHandle const &, bool);
    bool EmmiterIsValid(SoundEntityHandle const &);
    bool SetPatchPosition(long, vector3 const &);
    void RemoveEmmiter(SoundEntityHandle const &, bool);
    void SetCamera(vector3 const &, vector3 const &, vector3 const &, float);
    void SetCameraIC(vector3 const &, vector3 const &, vector3 const &, vector3 const &, float);
    void SetNearestEntity(float, bool);
    void StopPatch(long, float);
    void StopAll(float);
    long MusicPlayMovieTrack(PatchID const &);
    long MusicPlayNIS(PatchID const &, float);
    void MusicStartFE();
    void MusicStopFE();
    void MusicSetVolume(float);
    float MusicGetVolume();
    void MusicPlay(PatchID const &, SoundManager::MusicType, float, __int32);
    void MusicPlayDefault();
    void MusicStop(float);
    void StingerPlay(PatchID const &);
    void StingerStop(float);
    void SetBattleTrack(PatchID const &);
    void SetLevelTrack(PatchID const &);
    void BattleMusic(bool);
private:
    void internalMusicUpdate(float, bool);
    void internalBattlePlay(float);
    void internalMusicPlay(float, __int32);
    void internalMusicStop(long *, float);
    void internalMusicPause(long, float);
    float internalMusicVol(MusicTuning &);
public:
    long SpeechPlayMovieSpeech(PatchID const &);
    long SpeechAllShipsPlay(char const *, float, float, void (*)(long), long, char const *);
    long SpeechPlaySubtitled(char const *, void (*)(long));
    void SpeechSetVolume(float);
    float SpeechGetVolume();
    long SpeechPlay(PatchID const &, long, void (*)(long), __int32, float, float, long);
    void SpeechStop(long);
    void SpeechClear();
    void SpeechEnterIntelEvent();
    void SpeechExitIntelEvent();
private:
    static void SpeechCallback(long handle);
    SpeechQueue *FindSpeechQueue(long);
    void SpeechPlayNextQueue();
    void SpeechUpdate(float);
    SpeechQueue *GetCurrentSpeech();
public:
    void InitLua(LuaConfig *);
    void ShutdownLua(LuaConfig *);
    void SetFEMusicVol(float);
    float GetFEMusicVol();
    void ToggleAmbientSound();
    void EnableAmbientSound(bool);
    void ToggleMusic();
    void EnableMusic(bool);
    void EnableSound(bool);
    void ToggleCameraMode();
    void ToggleSpeech();
    void EnableSpeech(bool);
    bool GetSpeechEnabled() const;
    bool EnableRandomSamples();
    static void *PlayRawWAVE(char const *file, __int32 vol, __int32 pan);
    static void StopRawWAVE(void *handle);
    long PlaySoundA(char const *, float);
    void PlaySoundA(char const *, long, __int32);
    void PlaySoundAt(char const *, vector3 const &, long, __int32);
    void PlaySpeech(char const *, float, __int32);
    void PlayStinger(char const *);
    void SetSoundVolume(long, float);
    bool SoundPlaying(long);
    class Data;
private:
    SoundManager::Data *m_pimpl; // 0x0
    SoundManager::HWDriver m_HWDriverID[7]; // 0x4
    unsigned __int32 m_drivercount; // 0x20
    static char const *HWDriverNames[7];
    static char const *HWDriverDesc[7];
    static long const m_MaxDriverChannels[7];
    Timer *GetTimer();
    void InitDriverFunctions();
    bool InitDriverSettings(seModeInfo *, char *);
    void InitDriver(char const *, void *, seModeInfo *);
    void InitVars();
    bool GetDestinationQuality(long);
    void Build3DdestinationList();
    long internalSpeechPlay(PatchID const &, long, void (*)(long), __int32, float, float, float, long);
    void internalSpeechRemoveLinks(long);
    static void StingerOver(long handle);
    bool isRoot(char const *) const;
    void luaSetup(LuaConfig &) const;
    bool loadParams(char const *, SoundManager::SoundInfo &) const;
    bool saveParams(char const *, SoundManager::SoundInfo const &, bool) const;
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > getParamsFilename(char const *, bool);
    bool propagateToFile(char const *, bool, TypedBitSet<enum SoundParams::ParamType,30> const &);
    SoundManager &operator=(SoundManager const &);
};
static_assert(sizeof(SoundManager) == 36, "Invalid SoundManager size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SOUNDMANAGER_H__
#endif
