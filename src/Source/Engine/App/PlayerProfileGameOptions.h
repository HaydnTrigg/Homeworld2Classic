#if 0
#ifndef __PLAYERPROFILEGAMEOPTIONS_H__
#define __PLAYERPROFILEGAMEOPTIONS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct ProfileAudioOptions
{
    float m_sfxVolume; // 0x0
    float m_speechVolume; // 0x4
    float m_musicVolume; // 0x8
    float m_uiVolume; // 0xC
    __int32 m_sfxChannels; // 0x10
    __int32 m_soundQuality; // 0x14
    bool m_enableBattleChatter; // 0x18
    bool m_enableSelectionSpeech; // 0x19
    float m_voiceFrequency; // 0x1C
};
static_assert(sizeof(ProfileAudioOptions) == 32, "Invalid ProfileAudioOptions size");

struct ProfileVideoOptions
{
    __int32 m_screenResolutionW; // 0x0
    __int32 m_screenResolutionH; // 0x4
    __int32 m_screenRefreshRate; // 0x8
    __int32 m_textureQuality; // 0xC
    __int32 m_anisotropicFiltering; // 0x10
    __int32 m_minLOD; // 0x14
    __int32 m_maxLOD; // 0x18
    bool m_enableVsync; // 0x1C
};
static_assert(sizeof(ProfileVideoOptions) == 32, "Invalid ProfileVideoOptions size");

struct ProfileGameplayOptions
{
    bool m_enableNLIPS; // 0x0
    bool m_enablePan; // 0x1
    bool m_enableMilitary; // 0x2
    bool m_enableRightClickMenu; // 0x3
    float m_orderFeedbackDelay; // 0x4
    float m_mouseSensitivity; // 0x8
};
static_assert(sizeof(ProfileGameplayOptions) == 12, "Invalid ProfileGameplayOptions size");

struct ProfileControlsOptions
{
};
static_assert(sizeof(ProfileControlsOptions) == 1, "Invalid ProfileControlsOptions size");

struct ProfileFXOptions
{
    __int32 m_shadows; // 0x0
    __int32 m_distanceFog; // 0x4
    __int32 m_damageFX; // 0x8
    __int32 m_hyperspaceQuality; // 0xC
    __int32 m_weaponFX; // 0x10
    __int32 m_lightLOD; // 0x14
    __int32 m_goblins; // 0x18
    __int32 m_autoLOD; // 0x1C
};
static_assert(sizeof(ProfileFXOptions) == 32, "Invalid ProfileFXOptions size");

class PlayerProfileGameOptions
{
private:
    PlayerProfileGameOptions(PlayerProfileGameOptions const &);
public:
    PlayerProfileGameOptions();
    ~PlayerProfileGameOptions();
    bool Load(LuaConfig &);
    bool Save(LuaConfig &);
    bool Apply();
    bool ApplyScreenResolution();
    void SetAudioOptions(ProfileAudioOptions const &);
    void SetVideoOptions(ProfileVideoOptions const &);
    void SetGameplayOptions(ProfileGameplayOptions const &);
    void SetControlsOptions(ProfileControlsOptions const &);
    void SetFXOptions(ProfileFXOptions const &);
    ProfileAudioOptions GetAudioOptions() const;
    ProfileVideoOptions GetVideoOptions() const;
    ProfileGameplayOptions GetGameplayOptions() const;
    ProfileControlsOptions GetControlsOptions() const;
    ProfileFXOptions GetFXOptions() const;
private:
    PlayerProfileGameOptions &operator=(PlayerProfileGameOptions const &);
    boost::scoped_ptr<PlayerProfileGameOptionsData> m_pimpl; // 0x0
};
static_assert(sizeof(PlayerProfileGameOptions) == 4, "Invalid PlayerProfileGameOptions size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __PLAYERPROFILEGAMEOPTIONS_H__
#endif
