#if 0
#ifndef __STATLOGGING_H__
#define __STATLOGGING_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class StatLogging :
    public Saveable
{
private:
    StatLogging(StatLogging const &);
    StatLogging();
    virtual ~StatLogging() override;
public:
    static StatLogging *Instance();
    static bool Initialize();
    static bool Shutdown();
    static bool Save(SaveGameData *saveGameData, SaveType saveType);
    static bool Restore(SaveGameData *saveGameData);
    wchar_t const *LevelName() const;
    __int32 TotalDuration() const;
    __int32 FirstCombatTime() const;
    __int32 LocalPlayerIndex() const;
    unsigned __int32 PlayerCount() const;
    unsigned __int32 PlayerAt(unsigned __int32) const;
    wchar_t const *PlayerName(unsigned __int32) const;
    __int32 PlayerRaceID(unsigned __int32) const;
    __int32 PlayerTeamID(unsigned __int32) const;
    void PlayerBadgeInfo(unsigned __int32, vector4 &, vector4 &, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &);
    __int32 ResearchTotal(unsigned __int32) const;
    __int32 ResearchCount(unsigned __int32) const;
    __int32 ResearchRUValue(unsigned __int32) const;
    __int32 EnemyShipsCaptured(unsigned __int32) const;
    __int32 OwnShipsCaptured(unsigned __int32) const;
    __int32 TotalKills(unsigned __int32) const;
    __int32 TotalLosses(unsigned __int32) const;
    __int32 TotalSquadKills(unsigned __int32) const;
    __int32 TotalSquadLosses(unsigned __int32) const;
    __int32 TimeKilled(unsigned __int32) const;
    __int32 SpentRUs(unsigned __int32) const;
    __int32 GatheredRUs(unsigned __int32) const;
    __int32 GatheredRUAsteroid(unsigned __int32) const;
    __int32 GatheredRUDustCloud(unsigned __int32) const;
    __int32 GatheredRUNebula(unsigned __int32) const;
    __int32 GatheredRUSalvage(unsigned __int32) const;
    __int32 TributeReceived(unsigned __int32) const;
    __int32 TributeDonated(unsigned __int32) const;
    __int32 TotalShipsBuilt(unsigned __int32) const;
    __int32 BuildShipsBuilt(unsigned __int32) const;
    __int32 HarvestersBuilt(unsigned __int32) const;
    __int32 SubsystemsBuilt(unsigned __int32) const;
    __int32 EnemyShipsCapturedInRUs(unsigned __int32) const;
    __int32 OwnShipsCapturedInRUs(unsigned __int32) const;
    __int32 TotalKillsInRUs(unsigned __int32) const;
    __int32 TotalLossesInRUs(unsigned __int32) const;
    __int32 TotalSquadKillsInRUs(unsigned __int32) const;
    __int32 TotalSquadLossesInRUs(unsigned __int32) const;
    __int32 TotalShipsBuiltInRUs(unsigned __int32) const;
    __int32 BuildShipsBuiltInRUs(unsigned __int32) const;
    __int32 HarvestersBuiltInRUs(unsigned __int32) const;
    __int32 SubsystemsBuiltInRUs(unsigned __int32) const;
    unsigned __int32 NumShipTypes(unsigned __int32) const;
    unsigned __int32 GetShipType(unsigned __int32, unsigned __int32) const;
    __int32 ShipsCreated(unsigned __int32, unsigned __int32) const;
    __int32 ShipsLost(unsigned __int32, unsigned __int32) const;
    __int32 ShipsFirstBuilt(unsigned __int32, unsigned __int32) const;
    __int32 ShipsCaptured(unsigned __int32, unsigned __int32) const;
    __int32 SquadronsActive(unsigned __int32, unsigned __int32) const;
    __int32 SquadronsQueued(unsigned __int32, unsigned __int32) const;
    __int32 SquadronsMax(unsigned __int32, unsigned __int32) const;
    __int32 ShipsCreatedInRUs(unsigned __int32, unsigned __int32) const;
    __int32 ShipsLostInRUs(unsigned __int32, unsigned __int32) const;
    __int32 ShipsCapturedInRUs(unsigned __int32, unsigned __int32) const;
    void RecordFrame(Universe const *);
    void RecordStart(Universe const *);
    void RecordStop(Universe const *);
    void RecordAbort();
    void Reset();
    void DumpFramesToDisk(char const *);
    StatLoggingInternal const *GetStats() const;
private:
    boost::scoped_ptr<StatLoggingInternal> m_internal; // 0x4
    StatLogging &operator=(StatLogging const &);
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline char const *saveToken() override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
private:
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    static void saveStatsInternal(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void restoreStatsInternal(void *objectPtr, SaveGameData *saveGameData);
};
static_assert(sizeof(StatLogging) == 8, "Invalid StatLogging size");

class StatLogging :
    public Saveable
{
private:
    StatLogging(StatLogging const &);
    StatLogging();
    virtual ~StatLogging() override;
public:
    static StatLogging *Instance();
    static bool Initialize();
    static bool Shutdown();
    static bool Save(SaveGameData *saveGameData, SaveType saveType);
    static bool Restore(SaveGameData *saveGameData);
    wchar_t const *LevelName() const;
    __int32 TotalDuration() const;
    __int32 FirstCombatTime() const;
    __int32 LocalPlayerIndex() const;
    unsigned __int32 PlayerCount() const;
    unsigned __int32 PlayerAt(unsigned __int32) const;
    wchar_t const *PlayerName(unsigned __int32) const;
    __int32 PlayerRaceID(unsigned __int32) const;
    __int32 PlayerTeamID(unsigned __int32) const;
    void PlayerBadgeInfo(unsigned __int32, vector4 &, vector4 &, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &);
    __int32 ResearchTotal(unsigned __int32) const;
    __int32 ResearchCount(unsigned __int32) const;
    __int32 ResearchRUValue(unsigned __int32) const;
    __int32 EnemyShipsCaptured(unsigned __int32) const;
    __int32 OwnShipsCaptured(unsigned __int32) const;
    __int32 TotalKills(unsigned __int32) const;
    __int32 TotalLosses(unsigned __int32) const;
    __int32 TotalSquadKills(unsigned __int32) const;
    __int32 TotalSquadLosses(unsigned __int32) const;
    __int32 TimeKilled(unsigned __int32) const;
    __int32 SpentRUs(unsigned __int32) const;
    __int32 GatheredRUs(unsigned __int32) const;
    __int32 GatheredRUAsteroid(unsigned __int32) const;
    __int32 GatheredRUDustCloud(unsigned __int32) const;
    __int32 GatheredRUNebula(unsigned __int32) const;
    __int32 GatheredRUSalvage(unsigned __int32) const;
    __int32 TributeReceived(unsigned __int32) const;
    __int32 TributeDonated(unsigned __int32) const;
    __int32 TotalShipsBuilt(unsigned __int32) const;
    __int32 BuildShipsBuilt(unsigned __int32) const;
    __int32 HarvestersBuilt(unsigned __int32) const;
    __int32 SubsystemsBuilt(unsigned __int32) const;
    __int32 EnemyShipsCapturedInRUs(unsigned __int32) const;
    __int32 OwnShipsCapturedInRUs(unsigned __int32) const;
    __int32 TotalKillsInRUs(unsigned __int32) const;
    __int32 TotalLossesInRUs(unsigned __int32) const;
    __int32 TotalSquadKillsInRUs(unsigned __int32) const;
    __int32 TotalSquadLossesInRUs(unsigned __int32) const;
    __int32 TotalShipsBuiltInRUs(unsigned __int32) const;
    __int32 BuildShipsBuiltInRUs(unsigned __int32) const;
    __int32 HarvestersBuiltInRUs(unsigned __int32) const;
    __int32 SubsystemsBuiltInRUs(unsigned __int32) const;
    unsigned __int32 NumShipTypes(unsigned __int32) const;
    unsigned __int32 GetShipType(unsigned __int32, unsigned __int32) const;
    __int32 ShipsCreated(unsigned __int32, unsigned __int32) const;
    __int32 ShipsLost(unsigned __int32, unsigned __int32) const;
    __int32 ShipsFirstBuilt(unsigned __int32, unsigned __int32) const;
    __int32 ShipsCaptured(unsigned __int32, unsigned __int32) const;
    __int32 SquadronsActive(unsigned __int32, unsigned __int32) const;
    __int32 SquadronsQueued(unsigned __int32, unsigned __int32) const;
    __int32 SquadronsMax(unsigned __int32, unsigned __int32) const;
    __int32 ShipsCreatedInRUs(unsigned __int32, unsigned __int32) const;
    __int32 ShipsLostInRUs(unsigned __int32, unsigned __int32) const;
    __int32 ShipsCapturedInRUs(unsigned __int32, unsigned __int32) const;
    void RecordFrame(Universe const *);
    void RecordStart(Universe const *);
    void RecordStop(Universe const *);
    void RecordAbort();
    void Reset();
    void DumpFramesToDisk(char const *);
    StatLoggingInternal const *GetStats() const;
private:
    boost::scoped_ptr<StatLoggingInternal> m_internal; // 0x4
    StatLogging &operator=(StatLogging const &);
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline char const *saveToken() override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
private:
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    static void saveStatsInternal(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void restoreStatsInternal(void *objectPtr, SaveGameData *saveGameData);
};
static_assert(sizeof(StatLogging) == 8, "Invalid StatLogging size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern char const *_sub_50F33D(StatLogging *const);
_inline char const *StatLogging::saveToken() // 0x50F33D
{
    mangled_assert("?saveToken@StatLogging@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_50F33D(this);
    return __result;
}

_extern bool _sub_50F131(StatLogging *const);
_inline bool StatLogging::isDeterministic() // 0x50F131
{
    mangled_assert("?isDeterministic@StatLogging@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_50F131(this);
    return __result;
}

/* ---------- private code */

#endif // __STATLOGGING_H__
#endif
