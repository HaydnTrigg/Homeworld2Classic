#if 0
#ifndef __GAMESETTINGS_H__
#define __GAMESETTINGS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class GameSettings :
    public Saveable
{
public:
    enum GameRubric
    {
        GR_INVALID = 0,
        GR_SINGLEPLAYER_CAMPAIGN,
        GR_SINGLEPLAYER_SKIRMISH,
        GR_MULTIPLAYER,
    };
    enum MultiplayerType
    {
        MT_INVALID = 0,
        MT_STEAM,
        MT_LAN,
        MT_DIRECTIP,
    };
    static bool Started();
    static bool Restart(MD5Hash const &gameRules);
    static GameSettings *Instance();
    static bool Shutdown();
    static MD5Hash s_dummyGuid;
    GameSettings(GameSettings &); /* compiler_generated() */
    GameSettings(SaveGameData *);
    GameSettings(MD5Hash const &);
    virtual ~GameSettings() override;
    void reset();
    void resetPlayer(unsigned __int32);
    GameSettings::GameRubric getGameRubric() const;
    void setGameRubric(GameSettings::GameRubric);
    GameSettings::MultiplayerType getMultiplayerType() const;
    void setMultiplayerType(GameSettings::MultiplayerType);
    void setSetting(char const *, char const *);
    void setSetting(unsigned __int32, unsigned __int32);
    char const *getSetting(char const *, char const *) const;
    unsigned __int32 getSetting(unsigned __int32) const;
    void setLevel(MD5Hash const &, unsigned __int32);
    MD5Hash const &getLevel() const;
    LevelDesc const *getLevelDesc() const;
    _inline MD5Hash const &getGameRules();
    void setMaxPlayers(unsigned __int32);
    unsigned __int32 getMaxPlayers() const;
    unsigned __int32 getNumHumanPlayers() const;
    void setAlliedVictory(bool);
    bool isAlliedVictory() const;
    void setPlayerType(unsigned __int32, PlayerSlotType);
    PlayerSlotType getPlayerType(unsigned __int32) const;
    _inline void setStartFleetSuffix(char const *);
    _inline char const *getStartFleetSuffix() const;
    char const *getScriptFile() const;
    void setScriptFile(char const *);
    _inline bool ShouldOverrideColors() const;
    _inline void SetOverrideColors(bool);
    std::auto_ptr<Net::Session> m_netSession; // 0x4
private:
    unsigned __int32 m_gameRubric; // 0x8
    unsigned __int32 m_multiplayerType; // 0xC
    bool m_bAlliedVictory; // 0x10
    bool m_bOverrideColors; // 0x11
    unsigned __int32 m_optionList[32]; // 0x14
    unsigned __int32 m_gamePlayerSize; // 0x94
    GamePlayerInfo m_gamePlayerInfoVec[6]; // 0x98
    MD5Hash m_level; // 0x380
    char m_scriptFile[260]; // 0x3EC
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_startFleetSuffix; // 0x4F0
public:
    unsigned __int32 m_randomSeed; // 0x508
private:
    bool m_bDebugOutOfSync; // 0x50C
    bool m_bAllowSyncErrorRecovery; // 0x50D
    SyncCheckingLevel m_syncCheckingLevel; // 0x510
    unsigned __int32 m_syncCheckingBufferSize; // 0x514
    unsigned __int32 m_recoveryFramePeriod; // 0x518
    unsigned __int32 m_recoveryNbAllowedPerPeriod; // 0x51C
    MD5Hash m_gameRules; // 0x520
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    unsigned __int32 GetLocalPlayerIndex() const;
    GamePlayerInfo const *GetGPInfoFromPlayerID(unsigned __int32) const;
    GamePlayerInfo *GetGPInfoFromPlayerID(unsigned __int32);
    unsigned __int32 findUnusedTeam() const;
    unsigned __int32 findMissingPlayerSlot() const;
    void addPlayer(unsigned __int32, unsigned __int32, PlayerSlotType, wchar_t const *);
    unsigned __int32 GetIndexFromNetworkID(unsigned __int32) const;
    void SetHumanPlayer(__int32, __int32, __int32, wchar_t const *, unsigned __int32);
    void SetCPUPlayer(__int32, __int32, __int32, wchar_t const *, unsigned __int32, __int32);
    void setSyncCheckingLevel(SyncCheckingLevel);
    SyncCheckingLevel getSyncCheckingLevel() const;
    void setSyncCheckingBufferSize(unsigned __int32);
    unsigned __int32 getSyncCheckingBufferSize() const;
    void setDebugOutOfSync(bool);
    bool getDebugOutOfSync() const;
    void enableSyncErrorRecovery(bool);
    bool allowSyncErrorRecovery() const;
    unsigned __int32 getSyncErrorRecoveryFramePeriod() const;
    void setSyncErrorRecoveryFramePeriod(unsigned __int32);
    unsigned __int32 getSyncErrorRecoveryNbAllowedPerPeriod() const;
    void setSyncErrorRecoveryNbAllowedPerPeriod(unsigned __int32);
    static void saveMD5(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void loadMD5(void *objectPtr, SaveGameData *saveGameData);
    _inline GameSettings &operator=(GameSettings &); /* compiler_generated() */
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(GameSettings) == 1420, "Invalid GameSettings size");

class GameSettings :
    public Saveable
{
public:
    enum GameRubric
    {
        GR_INVALID = 0,
        GR_SINGLEPLAYER_CAMPAIGN,
        GR_SINGLEPLAYER_SKIRMISH,
        GR_MULTIPLAYER,
    };
    enum MultiplayerType
    {
        MT_INVALID = 0,
        MT_STEAM,
        MT_LAN,
        MT_DIRECTIP,
    };
    static bool Started();
    static bool Restart(MD5Hash const &gameRules);
    static GameSettings *Instance();
    static bool Shutdown();
    static MD5Hash s_dummyGuid;
    GameSettings(GameSettings &); /* compiler_generated() */
    GameSettings(SaveGameData *);
    GameSettings(MD5Hash const &);
    virtual ~GameSettings() override;
    void reset();
    void resetPlayer(unsigned __int32);
    GameSettings::GameRubric getGameRubric() const;
    void setGameRubric(GameSettings::GameRubric);
    GameSettings::MultiplayerType getMultiplayerType() const;
    void setMultiplayerType(GameSettings::MultiplayerType);
    void setSetting(char const *, char const *);
    void setSetting(unsigned __int32, unsigned __int32);
    char const *getSetting(char const *, char const *) const;
    unsigned __int32 getSetting(unsigned __int32) const;
    void setLevel(MD5Hash const &, unsigned __int32);
    MD5Hash const &getLevel() const;
    LevelDesc const *getLevelDesc() const;
    _inline MD5Hash const &getGameRules();
    void setMaxPlayers(unsigned __int32);
    unsigned __int32 getMaxPlayers() const;
    unsigned __int32 getNumHumanPlayers() const;
    void setAlliedVictory(bool);
    bool isAlliedVictory() const;
    void setPlayerType(unsigned __int32, PlayerSlotType);
    PlayerSlotType getPlayerType(unsigned __int32) const;
    _inline void setStartFleetSuffix(char const *);
    _inline char const *getStartFleetSuffix() const;
    char const *getScriptFile() const;
    void setScriptFile(char const *);
    _inline bool ShouldOverrideColors() const;
    _inline void SetOverrideColors(bool);
    std::auto_ptr<Net::Session> m_netSession; // 0x4
private:
    unsigned __int32 m_gameRubric; // 0x8
    unsigned __int32 m_multiplayerType; // 0xC
    bool m_bAlliedVictory; // 0x10
    bool m_bOverrideColors; // 0x11
    unsigned __int32 m_optionList[32]; // 0x14
    unsigned __int32 m_gamePlayerSize; // 0x94
    GamePlayerInfo m_gamePlayerInfoVec[6]; // 0x98
    MD5Hash m_level; // 0x380
    char m_scriptFile[260]; // 0x3EC
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_startFleetSuffix; // 0x4F0
public:
    unsigned __int32 m_randomSeed; // 0x508
private:
    bool m_bDebugOutOfSync; // 0x50C
    bool m_bAllowSyncErrorRecovery; // 0x50D
    SyncCheckingLevel m_syncCheckingLevel; // 0x510
    unsigned __int32 m_syncCheckingBufferSize; // 0x514
    unsigned __int32 m_recoveryFramePeriod; // 0x518
    unsigned __int32 m_recoveryNbAllowedPerPeriod; // 0x51C
    MD5Hash m_gameRules; // 0x520
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    unsigned __int32 GetLocalPlayerIndex() const;
    GamePlayerInfo const *GetGPInfoFromPlayerID(unsigned __int32) const;
    GamePlayerInfo *GetGPInfoFromPlayerID(unsigned __int32);
    unsigned __int32 findUnusedTeam() const;
    unsigned __int32 findMissingPlayerSlot() const;
    void addPlayer(unsigned __int32, unsigned __int32, PlayerSlotType, wchar_t const *);
    unsigned __int32 GetIndexFromNetworkID(unsigned __int32) const;
    void SetHumanPlayer(__int32, __int32, __int32, wchar_t const *, unsigned __int32);
    void SetCPUPlayer(__int32, __int32, __int32, wchar_t const *, unsigned __int32, __int32);
    void setSyncCheckingLevel(SyncCheckingLevel);
    SyncCheckingLevel getSyncCheckingLevel() const;
    void setSyncCheckingBufferSize(unsigned __int32);
    unsigned __int32 getSyncCheckingBufferSize() const;
    void setDebugOutOfSync(bool);
    bool getDebugOutOfSync() const;
    void enableSyncErrorRecovery(bool);
    bool allowSyncErrorRecovery() const;
    unsigned __int32 getSyncErrorRecoveryFramePeriod() const;
    void setSyncErrorRecoveryFramePeriod(unsigned __int32);
    unsigned __int32 getSyncErrorRecoveryNbAllowedPerPeriod() const;
    void setSyncErrorRecoveryNbAllowedPerPeriod(unsigned __int32);
    static void saveMD5(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void loadMD5(void *objectPtr, SaveGameData *saveGameData);
    _inline GameSettings &operator=(GameSettings &); /* compiler_generated() */
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(GameSettings) == 1420, "Invalid GameSettings size");

class GameResult
{
public:
    enum EndReason
    {
        ER_GAME_INPROGRESS = 1, // 0x0001
        ER_GAME_OVER = 2, // 0x0002
        ER_PLAYER_LEFT = 3, // 0x0003
        ER_CONNECTION_LOST = 4, // 0x0004
        ER_CONNECTION_LOST_KICKOUT = 5, // 0x0005
        ER_SYNC_ERROR = 6, // 0x0006
        ER_CONNECTION_LOST_WHILE_LOADING = 7, // 0x0007
        ER_SYNC_ERROR_WHILE_LOADING = 8, // 0x0008
        ER_GAME_ERROR_LOADING = 9, // 0x0009
    };
    GameResult(GameResult const &); /* compiler_generated() */
    GameResult();
    _inline void SetReason(GameResult::EndReason);
    _inline GameResult::EndReason GetReason() const;
    void SetScenarioSuccess(bool);
    bool GetScenarioSuccess() const;
    _inline void SetLastGameRubric(GameSettings::GameRubric);
    _inline GameSettings::GameRubric GetLastGameRubric() const;
    _inline void SetLastMultiplayerType(GameSettings::MultiplayerType);
    _inline GameSettings::MultiplayerType GetLastMultiplayerType() const;
    _inline void SetConnectionLostKickoutReason(wchar_t const *);
    _inline wchar_t const *GetConnectionLostKickoutReason() const;
private:
    GameResult::EndReason m_reason; // 0x0
    bool m_bSuccess; // 0x4
    GameSettings::GameRubric m_lastGameRubric; // 0x8
    GameSettings::MultiplayerType m_lastMultiplayerType; // 0xC
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_connectionLostKickoutReason; // 0x10
public:
    _inline ~GameResult(); /* compiler_generated() */
    GameResult &operator=(GameResult const &); /* compiler_generated() */
};
static_assert(sizeof(GameResult) == 40, "Invalid GameResult size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline MD5Hash const &GameSettings::getGameRules() // 0x58B81B
{
    mangled_assert("?getGameRules@GameSettings@@QAEABVMD5Hash@@XZ");
    todo("implement");
}

_inline void GameSettings::setStartFleetSuffix(char const *) // 0x7166A1
{
    mangled_assert("?setStartFleetSuffix@GameSettings@@QAEXPBD@Z");
    todo("implement");
}

_inline char const *GameSettings::getStartFleetSuffix() const // 0x4FAF78
{
    mangled_assert("?getStartFleetSuffix@GameSettings@@QBEPBDXZ");
    todo("implement");
}

_inline bool GameSettings::ShouldOverrideColors() const // 0x61DA12
{
    mangled_assert("?ShouldOverrideColors@GameSettings@@QBE_NXZ");
    todo("implement");
}

_inline void GameSettings::SetOverrideColors(bool) // 0x58A1A5
{
    mangled_assert("?SetOverrideColors@GameSettings@@QAEX_N@Z");
    todo("implement");
}

_inline bool GameSettings::isDeterministic() // 0x46A563
{
    mangled_assert("?isDeterministic@GameSettings@@UAE_NXZ");
    todo("implement");
}

_inline char const *GameSettings::saveToken() // 0x46A7A7
{
    mangled_assert("?saveToken@GameSettings@@UAEPBDXZ");
    todo("implement");
}

_inline void GameResult::SetReason(GameResult::EndReason) // 0x4F6C8E
{
    mangled_assert("?SetReason@GameResult@@QAEXW4EndReason@1@@Z");
    todo("implement");
}

_inline GameResult::EndReason GameResult::GetReason() const // 0x45DDED
{
    mangled_assert("?GetReason@GameResult@@QBE?AW4EndReason@1@XZ");
    todo("implement");
}

_inline void GameResult::SetLastGameRubric(GameSettings::GameRubric) // 0x4F9E5D
{
    mangled_assert("?SetLastGameRubric@GameResult@@QAEXW4GameRubric@GameSettings@@@Z");
    todo("implement");
}

_inline GameSettings::GameRubric GameResult::GetLastGameRubric() const // 0x45DDE5
{
    mangled_assert("?GetLastGameRubric@GameResult@@QBE?AW4GameRubric@GameSettings@@XZ");
    todo("implement");
}

_inline void GameResult::SetLastMultiplayerType(GameSettings::MultiplayerType) // 0x4F9E67
{
    mangled_assert("?SetLastMultiplayerType@GameResult@@QAEXW4MultiplayerType@GameSettings@@@Z");
    todo("implement");
}

_inline GameSettings::MultiplayerType GameResult::GetLastMultiplayerType() const // 0x45DDE9
{
    mangled_assert("?GetLastMultiplayerType@GameResult@@QBE?AW4MultiplayerType@GameSettings@@XZ");
    todo("implement");
}

_inline void GameResult::SetConnectionLostKickoutReason(wchar_t const *) // 0x5B46BC
{
    mangled_assert("?SetConnectionLostKickoutReason@GameResult@@QAEXPB_W@Z");
    todo("implement");
}

_inline wchar_t const *GameResult::GetConnectionLostKickoutReason() const // 0x45DDD9
{
    mangled_assert("?GetConnectionLostKickoutReason@GameResult@@QBEPB_WXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __GAMESETTINGS_H__
#endif
