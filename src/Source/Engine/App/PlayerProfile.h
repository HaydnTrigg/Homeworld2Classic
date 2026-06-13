#if 0
#ifndef __PLAYERPROFILE_H__
#define __PLAYERPROFILE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class PlayerProfile
{
public:
    enum
    {
        NAMEMAX = 16, // 0x0010
    };
    enum
    {
        CHATNAMEMAX = 128, // 0x0080
    };
    typedef std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > ChatNamesList;
private:
    PlayerProfile(PlayerProfile const &);
public:
    PlayerProfile(wchar_t const *);
    ~PlayerProfile();
    wchar_t const *GetPlayerName() const;
    LuaConfig &GetFields();
    bool GetChatName(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &);
    bool GetTeamColours(Color_4b &, Color_4b &);
    bool GetEmblem(std::basic_string<char,std::char_traits<char>,std::allocator<char> > &);
    bool GetCPUColours(unsigned __int32, Color_4b &, Color_4b &, bool);
    bool GetCPUEmblem(unsigned __int32, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &, bool);
    void SetChatName(wchar_t const *);
    void SetTeamColours(Color_4b const &, Color_4b const &);
    void SetEmblem(char const *);
    void SetCPUColours(unsigned __int32, Color_4b const &, Color_4b const &);
    void SetCPUEmblem(unsigned __int32, char const *);
    void SetMissionComplete(char const *, unsigned __int32, bool);
    void SetMaxMission(char const *, unsigned __int32);
    bool GetMissionComplete(char const *, unsigned __int32);
    unsigned __int32 GetMaxMission(char const *);
    bool CampaignStarted(char const *);
    void SetCampaignStarted(char const *, bool);
    bool GetLastSPLevel(MD5Hash &);
    void SetLastSPLevel(MD5Hash const &);
    bool GetLastMPLevel(MD5Hash &);
    void SetLastMPLevel(MD5Hash const &);
    void ClearGameSettings();
    void SetGameSetting(char const *, char const *, char const *);
    bool GetGameSetting(char const *, char const *, char *, __int32);
    void SetPlayerSettings(__int32, bool, __int32, __int32, __int32, __int32);
    bool GetPlayerSettings(__int32, bool &, __int32 &, __int32 &, __int32 &, __int32 &);
    bool GetLastMPGameRules(MD5Hash &);
    void SetLastMPGameRules(MD5Hash const &);
    bool GetSwatchColour(__int32, Color_4b &);
    void SetSwatchColour(__int32, Color_4b &);
    __int32 GetTaskbarPhase();
    void SetTaskbarPhase(__int32);
    void SetRecordGame(bool);
    bool GetRecordGame();
    void UnlockAnimatic(char const *);
    bool IsAnimaticUnlocked(char const *);
    __int32 GetProfileVersion();
    _inline std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > &GetIgnoreList();
    _inline std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > &GetWhisperList();
    void Load();
    void Save();
    _inline PlayerProfileGameOptions &GetOptions();
    void RestoreDefaultGameOptions();
    bool RestoreCPUPlayer(__int32);
    void RestorePlayerSetup();
    void DontShowErrorMessageAgain(char const *);
    bool ShouldShowErrorMessageAgain(char const *);
private:
    fwstring<16> const m_playerName; // 0x0
    LuaConfig m_fields; // 0x24
    PlayerProfileGameOptions m_options; // 0x28
    std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > m_ignoreList; // 0x2C
    std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > m_whisperList; // 0x34
    PlayerProfile &operator=(PlayerProfile const &);
};
static_assert(sizeof(PlayerProfile) == 60, "Invalid PlayerProfile size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > &_sub_5B0F91(PlayerProfile *const);
_inline std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > &PlayerProfile::GetIgnoreList() // 0x5B0F91
{
    mangled_assert("?GetIgnoreList@PlayerProfile@@QAEAAV?$list@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@XZ");
    todo("implement");
    std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > & __result = _sub_5B0F91(this);
    return __result;
}

_extern std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > &_sub_5B0F95(PlayerProfile *const);
_inline std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > &PlayerProfile::GetWhisperList() // 0x5B0F95
{
    mangled_assert("?GetWhisperList@PlayerProfile@@QAEAAV?$list@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@XZ");
    todo("implement");
    std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > & __result = _sub_5B0F95(this);
    return __result;
}

_extern PlayerProfileGameOptions &_sub_44FE0C(PlayerProfile *const);
_inline PlayerProfileGameOptions &PlayerProfile::GetOptions() // 0x44FE0C
{
    mangled_assert("?GetOptions@PlayerProfile@@QAEAAVPlayerProfileGameOptions@@XZ");
    todo("implement");
    PlayerProfileGameOptions & __result = _sub_44FE0C(this);
    return __result;
}

/* ---------- private code */

#endif // __PLAYERPROFILE_H__
#endif
