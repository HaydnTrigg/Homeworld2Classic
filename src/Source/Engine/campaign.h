#if 0
#ifndef __CAMPAIGN_H__
#define __CAMPAIGN_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum EntryExit
{
    EE_Nothing = 0,
    EE_NISDirect,
    EE_HyperspaceIn,
    EE_HyperspaceOut,
    EE_FadeIn,
    EE_FadeOut,
    EE_ZoomIn,
    EE_ZoomOut,
    Num_EntryExitTypes,
};

/* ---------- definitions */

class Level
{
public:
    enum
    {
        MAXDESC = 1024, // 0x0400
    };
    _inline Level(Level const &); /* compiler_generated() */
    Level();
    ~Level();
    void clear();
    __int32 PreLoad; // 0x0
    __int32 PostLoad; // 0x4
    __int32 PostLevel; // 0x8
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_directory; // 0xC
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_mapFilename; // 0x24
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_displayName; // 0x3C
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_description; // 0x54
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_loadingScreenTitle; // 0x6C
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_loadingScreenDesc; // 0x84
    Level &operator=(Level const &); /* compiler_generated() */
};
static_assert(sizeof(Level) == 156, "Invalid Level size");

class Campaign :
    public Saveable
{
public:
    Campaign(Campaign const &); /* compiler_generated() */
    Campaign(SaveGameData *);
private:
    Campaign();
    virtual ~Campaign() override;
public:
    static void Initialize();
    static void Shutdown();
    static Campaign *Instance();
private:
    static Campaign *s_instance;
    static __int32 const nNumHomeworld1Missions;
    static char const *Homeworld1Missions[1];
    static __int32 const nNumHomeworld2Missions;
    static char const *Homeworld2Missions[15];
    typedef std::list<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > SaveGameList;
    void StartCampaign(char const *);
    void CloseCampaign();
public:
    _inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &getName() const;
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > getDisplayName();
    void ResumeCampaign();
    void SaveGame(char const *);
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > GetDirectory() const;
    _inline std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > const &GetLocalizer() const;
    _inline void AddLocalizer(char const *);
    _inline void ClearLocalizer();
    __int32 getNumLevels();
    void setLevelName(char const *);
    void setLevelIndex(__int32);
    __int32 getCurrentLevel() const;
    bool isLevelHW1DLC(char const *);
    bool isLevelHW2DLC(char const *);
    bool isLevelValidDLC(char const *);
    bool isCurrentLevelValidDLC();
    Level GetLevel(unsigned __int32, bool &);
    Level const &GetCurrentLevel() const;
    __int32 GetLevelIndexFromName(char const *);
    bool GetSaveGames(std::list<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &);
    bool PostLevel(bool);
    bool PreLoad();
    bool PostLoad();
    bool LoadPersistantFleet(unsigned __int32);
    bool PreLoadPersistantFleet();
private:
    void GetRuleFile(std::basic_string<char,std::char_traits<char>,std::allocator<char> > &);
    void UpdateLevelData();
    void LoadTeamColourInfo();
    void SaveToProfile();
    void LoadLevelData(unsigned __int32, Level &);
    __int32 IsLevelInCampaign(char const *, __int32);
    void initScriptVars();
    void clear();
public:
    static bool GameSave(SaveGameData *saveGameData, SaveType saveType);
    static bool GameRestore(SaveGameData *saveGameData);
    static void PlayAnimatic(char const *filename, bool bPostLevel, bool restoreInterface);
    static void PlayAnimaticNis(char const *filename, char const *nisName);
    static void PlayNIS(char const *filename);
    static unsigned __int32 LoadNIS(char const *filename);
    static void PostLevelComplete();
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    virtual _inline char const *saveToken() override;
    class Data;
private:
    boost::scoped_ptr<Campaign::Data> m_pimpl; // 0x4
    unsigned __int32 m_currentMission; // 0x8
    unsigned __int32 m_numMissions; // 0xC
    Level m_currentLevel; // 0x10
    std::vector<LuaBinding::Obj,std::allocator<LuaBinding::Obj> > s_exported; // 0xAC
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_campaignName; // 0xB8
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_campaignPath; // 0xD0
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_filename; // 0xE8
    std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > m_campaignLocalizer; // 0x100
public:
    Campaign &operator=(Campaign const &); /* compiler_generated() */
};
static_assert(sizeof(Campaign) == 268, "Invalid Campaign size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &_sub_45E521(Campaign const *const);
_inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &Campaign::getName() const // 0x45E521
{
    mangled_assert("?getName@Campaign@@QBEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
    todo("implement");
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > const & __result = _sub_45E521(this);
    return __result;
}

_extern std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > const &_sub_4F9079(Campaign const *const);
_inline std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > const &Campaign::GetLocalizer() const // 0x4F9079
{
    mangled_assert("?GetLocalizer@Campaign@@QBEABV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ");
    todo("implement");
    std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > const & __result = _sub_4F9079(this);
    return __result;
}

_extern void _sub_4F8BE8(Campaign *const, char const *);
_inline void Campaign::AddLocalizer(char const *) // 0x4F8BE8
{
    mangled_assert("?AddLocalizer@Campaign@@QAEXPBD@Z");
    todo("implement");
    _sub_4F8BE8(this, arg);
}

_extern void _sub_4F8F35(Campaign *const);
_inline void Campaign::ClearLocalizer() // 0x4F8F35
{
    mangled_assert("?ClearLocalizer@Campaign@@QAEXXZ");
    todo("implement");
    _sub_4F8F35(this);
}

_extern bool _sub_5E98EB(Campaign *const);
_inline bool Campaign::isDeterministic() // 0x5E98EB
{
    mangled_assert("?isDeterministic@Campaign@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_5E98EB(this);
    return __result;
}

_extern char const *_sub_5E9B00(Campaign *const);
_inline char const *Campaign::saveToken() // 0x5E9B00
{
    mangled_assert("?saveToken@Campaign@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_5E9B00(this);
    return __result;
}

/* ---------- private code */

#endif // __CAMPAIGN_H__
#endif
