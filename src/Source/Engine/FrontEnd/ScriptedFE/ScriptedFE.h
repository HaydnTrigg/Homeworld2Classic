#if 0
#ifndef __SCRIPTEDFE_H__
#define __SCRIPTEDFE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class ScriptedFE :
    public FrontEnd
{
public:
    static void startup(char const *scriptfile);
    static void shutdown();
    static ScriptedFE *i();
    static bool isActive();
    ScriptedFE(ScriptedFE const &); /* compiler_generated() */
private:
    ScriptedFE(char const *);
    virtual ~ScriptedFE() override;
    enum ScriptState
    {
        SCRIPT_Before = 0,
        SCRIPT_Connect,
        SCRIPT_Playing,
        SCRIPT_After,
    };
public:
    virtual void StartFrontEnd(FrontEnd::FEStartupCode) override;
    virtual void ShutdownFrontEnd() override;
private:
    unsigned __int32 GetMPScenarioCount() const;
    char const *GetMPScenarioName(unsigned __int32) const;
    void SetSkirmishLevel(char const *);
    void SetCampaignLevel(char const *, char const *);
    void SetCampaignLevelIndex(char const *, __int32);
    void SetSkirmishLoad(char const *);
    void SetCampaignLoad(char const *);
    void SetRecordedGame(char const *);
    unsigned __int32 GetPlayerLocalIndex() const;
    unsigned __int32 GetPlayerCount() const;
    void SetPlayerToHuman(unsigned __int32);
    void SetPlayerToAI(unsigned __int32);
    void SetPlayerTeam(unsigned __int32, __int32);
    void SetPlayerColour(unsigned __int32, __int32);
    void SetPlayerName(unsigned __int32, char const *);
    void SetPlayerRaceID(unsigned __int32, unsigned __int32);
    void SetPlayerReady(unsigned __int32);
    void SetGameType(char const *);
    void SetGameOption(char const *, char const *);
    bool Initialize();
    bool InitScenarios();
    bool InitLua();
    bool OnBefore();
    bool OnConnect();
    bool OnAfter();
    void GameStart();
    void Quit();
    ScriptedFE::ScriptState m_state; // 0x4
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_file; // 0x8
    bool m_luaInit; // 0x20
    LuaConfig m_lua; // 0x24
    std::vector<LuaBinding::Obj,std::allocator<LuaBinding::Obj> > m_luaExported; // 0x28
    std::vector<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int> > > m_mpLevelList; // 0x34
public:
    ScriptedFE &operator=(ScriptedFE const &); /* compiler_generated() */
};
static_assert(sizeof(ScriptedFE) == 64, "Invalid ScriptedFE size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SCRIPTEDFE_H__
#endif
