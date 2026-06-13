#if 0
#ifndef __GAMEOBJ_H__
#define __GAMEOBJ_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class GameObj :
    public Task,
    public Saveable
{
public:
    GameObj(GameObj &); /* compiler_generated() */
private:
    GameObj();
    virtual ~GameObj() override;
public:
    static bool IsRunning();
    static GameObj *Instance();
    static bool StartGame();
    static bool LoadGame(SaveGameData *savegamedata);
    static void Shutdown();
private:
    static GameObj *s_instance;
public:
    virtual __int32 taskFunction(float) override;
    void ChangeLocalPlayer(unsigned __int32);
    void SetLocalPlayerToCpuPlayer();
    void requestExit();
    bool isGameOver() const;
    bool isGameOverMenu() const;
    void setMissionComplete(bool);
    void setGameOver();
    void setPostLevelComplete();
    _inline void CheckWinLose(bool);
    bool isWinLoseOn() const;
    HW2CpuPlayer const *GetCPUPlayer(unsigned __int32) const;
    HW2CpuPlayer *GetCPUPlayer(unsigned __int32);
    StatMonitor *GetStatMonGame();
    SimProxy *GetSimProxy();
    _inline UIProxy *GetUIProxy();
    void PreFirstSimulate();
    void StartTasks();
    void ExitGame();
    char const *GameShutdown();
    void AIInit();
    void AIShutdown();
    void AIRestore(SaveGameData *);
    void AISave(SaveGameData *, SaveType);
    void AIProcess(float);
    bool LoadLevel();
    bool RestoreLevel();
    char const *Save(SaveGameData *, SaveType);
    char const *Restore(SaveGameData *);
    static void OnPreLoad();
    void OnPostLevel();
    void OnPostLoad();
private:
    char const *GameStartup();
public:
    static bool LoadLocalizer();
private:
    static bool UnloadLocalizer();
    bool processCommands();
    void defaultSettings();
    void consoleAutoexec();
    void consoleGameEndExec();
    enum State
    {
        GS_GameRunning = 0,
        GS_MissionComplete,
        GS_PostLevelRunning,
        GS_PostLevelComplete,
        GS_GameOverMenu,
        GS_WaitingToExitGame,
        GS_ExitGame,
    };
    GameObj::State m_state; // 0x34
    bool m_bCheckWinLose; // 0x38
    bool m_bWinMission; // 0x39
    bool m_bRequestExit; // 0x3A
    bool m_bKickedOut; // 0x3B
    bool m_bOutOfSync; // 0x3C
    bool m_bLocalPlayerDead; // 0x3D
    UI::UIDialog *m_dlgContinue; // 0x40
    std::vector<HW2CpuPlayer *,std::allocator<HW2CpuPlayer *> > m_cpuPlayer; // 0x44
    boost::scoped_ptr<StatMonitor> m_statMonitorGame; // 0x50
    boost::scoped_ptr<SimProxy> m_simproxy; // 0x54
    boost::scoped_ptr<LuaSimProxyLib> m_luasimproxy; // 0x58
    std::auto_ptr<Net::Session> m_netSession; // 0x5C
    std::auto_ptr<INetwork> m_network; // 0x60
    std::auto_ptr<UIProxy> m_UIProxy; // 0x64
    unsigned __int32 m_lastSimTicks[8]; // 0x68
    float m_actualSimRate; // 0x88
    static void CB_ContinueWatching_Yes(UI::InterfaceElement *yes);
    static void CB_ContinueWatching_No(UI::InterfaceElement *no);
public:
    void InitializeNetwork();
    void SendOrder(std::auto_ptr<Order>, bool);
    void NotifyHostReady();
    void WaitStartGame();
    _inline Net::Session const *GetNetSession() const;
    void GetNetworkStats(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &) const;
    void DropPlayer(unsigned __int32);
    bool IsPlayerLagging(unsigned __int32) const;
    void OnHostMigration();
    INetwork *GetNetwork() const;
    static bool DoContentDownload();
    void OnKickedOut();
private:
    void WaitSendQueuesEmpty();
    enum
    {
        TICKS_SIZE = 8, // 0x0008
    };
    void OnPlayerLagging(Player *, unsigned __int32);
    void CheckForLaggingPlayers();
    void SimProxyAcknowledgeOrder(Order const *);
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    virtual _inline char const *saveToken() override;
    GameObj &operator=(GameObj &); /* compiler_generated() */
};
static_assert(sizeof(GameObj) == 140, "Invalid GameObj size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_5C5271(GameObj *const, bool);
_inline void GameObj::CheckWinLose(bool) // 0x5C5271
{
    mangled_assert("?CheckWinLose@GameObj@@QAEX_N@Z");
    todo("implement");
    _sub_5C5271(this, arg);
}

_extern UIProxy *_sub_694DDD(GameObj *const);
_inline UIProxy *GameObj::GetUIProxy() // 0x694DDD
{
    mangled_assert("?GetUIProxy@GameObj@@QAEPAVUIProxy@@XZ");
    todo("implement");
    UIProxy * __result = _sub_694DDD(this);
    return __result;
}

_extern Net::Session const *_sub_46A15C(GameObj const *const);
_inline Net::Session const *GameObj::GetNetSession() const // 0x46A15C
{
    mangled_assert("?GetNetSession@GameObj@@QBEPBVSession@Net@@XZ");
    todo("implement");
    Net::Session const * __result = _sub_46A15C(this);
    return __result;
}

_extern bool _sub_4FAFF1(Saveable * const);
_inline bool GameObj::isDeterministic() // 0x4FAFF1
{
    mangled_assert("?isDeterministic@GameObj@@UAE_NXZ");
    // __shifted(GameObj, 48);
    todo("implement");
    bool __result = _sub_4FAFF1(this);
    return __result;
}

_extern char const *_sub_4FB382(Saveable * const);
_inline char const *GameObj::saveToken() // 0x4FB382
{
    mangled_assert("?saveToken@GameObj@@UAEPBDXZ");
    // __shifted(GameObj, 48);
    todo("implement");
    char const * __result = _sub_4FB382(this);
    return __result;
}

/* ---------- private code */

#endif // __GAMEOBJ_H__
#endif
