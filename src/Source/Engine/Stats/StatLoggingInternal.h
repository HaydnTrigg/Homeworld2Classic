#if 0
#ifndef __STATLOGGINGINTERNAL_H__
#define __STATLOGGINGINTERNAL_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class StatLoggingInternal :
    private GameEventSys::Listener,
    private Player::Observer
{
public:
    enum RecordState
    {
        RS_EMPTY = 0,
        RS_RECORDING,
        RS_ABORTING,
        RS_DONE,
    };
    enum PlayerState
    {
        ST_PLAYING = 0,
        ST_DISCONNECTED,
        ST_ABORTED,
        ST_OUTOFSYNC,
        ST_KILLED,
        ST_KICKED,
        ST_WON,
        ST_WONTEAM,
    };
    enum GameState
    {
        GS_UNINITIALIZED = 0,
        GS_PLAYING,
        GS_ABORTED,
        GS_FAILED,
        GS_GAMEOVER,
    };
    enum PlayerType
    {
        PT_HUMAN = 0,
        PT_COMPUTER,
    };
    struct ShipStat
    {
        Zeroed<int,ZeroedDefaultValue<int> > staticId; // 0x0
        Zeroed<int,ZeroedDefaultValue<int> > numProduced; // 0x4
        Zeroed<int,ZeroedDefaultValue<int> > numLost; // 0x8
        Zeroed<int,ZeroedDefaultValue<int> > timeFirstBuilt; // 0xC
        Zeroed<int,ZeroedDefaultValue<int> > capturedCount; // 0x10
        Zeroed<int,ZeroedDefaultValue<int> > numProducedInRUs; // 0x14
        Zeroed<int,ZeroedDefaultValue<int> > numLostInRUs; // 0x18
        Zeroed<int,ZeroedDefaultValue<int> > capturedCountInRUs; // 0x1C
        Zeroed<int,ZeroedDefaultValue<int> > numSquadQueued; // 0x20
        Zeroed<int,ZeroedDefaultValue<int> > numSquadActive; // 0x24
        Zeroed<int,ZeroedDefaultValue<int> > squadsMax; // 0x28
        _inline ShipStat(); /* compiler_generated() */
    };
    static_assert(sizeof(ShipStat) == 44, "Invalid ShipStat size");
    typedef std::vector<StatLoggingInternal::ShipStat,std::allocator<StatLoggingInternal::ShipStat> > ShipList;
    struct BadgeInfo
    {
        fstring<256> badge; // 0x0
        float stripeColor[4]; // 0x104
        float baseColor[4]; // 0x114
        _inline BadgeInfo(); /* compiler_generated() */
        _inline ~BadgeInfo(); /* compiler_generated() */
    };
    static_assert(sizeof(BadgeInfo) == 292, "Invalid BadgeInfo size");
    struct PlayerStat
    {
        unsigned __int32 idplayer; // 0x0
        fwstring<32> name; // 0x4
        __int32 raceID; // 0x48
        __int32 teamID; // 0x4C
        StatLoggingInternal::BadgeInfo badgeInfo; // 0x50
        StatLoggingInternal::PlayerState state; // 0x174
        Zeroed<int,ZeroedDefaultValue<int> > kills; // 0x178
        Zeroed<int,ZeroedDefaultValue<int> > losses; // 0x17C
        Zeroed<int,ZeroedDefaultValue<int> > squadKills; // 0x180
        Zeroed<int,ZeroedDefaultValue<int> > squadLosses; // 0x184
        Zeroed<int,ZeroedDefaultValue<int> > killsInRUs; // 0x188
        Zeroed<int,ZeroedDefaultValue<int> > lossesInRUs; // 0x18C
        Zeroed<int,ZeroedDefaultValue<int> > squadKillsInRUs; // 0x190
        Zeroed<int,ZeroedDefaultValue<int> > squadLossesInRUs; // 0x194
        Zeroed<int,ZeroedDefaultValue<int> > timeKilled; // 0x198
        Zeroed<int,ZeroedDefaultValue<int> > researchTotal; // 0x19C
        Zeroed<int,ZeroedDefaultValue<int> > researchCount; // 0x1A0
        Zeroed<int,ZeroedDefaultValue<int> > researchRUValue; // 0x1A4
        Zeroed<int,ZeroedDefaultValue<int> > enemyShipsCaptured; // 0x1A8
        Zeroed<int,ZeroedDefaultValue<int> > ownShipsCaptured; // 0x1AC
        Zeroed<int,ZeroedDefaultValue<int> > shipsBuilt; // 0x1B0
        Zeroed<int,ZeroedDefaultValue<int> > subsystemsBuilt; // 0x1B4
        Zeroed<int,ZeroedDefaultValue<int> > harvestersBuilt; // 0x1B8
        Zeroed<int,ZeroedDefaultValue<int> > buildShipsBuilt; // 0x1BC
        Zeroed<int,ZeroedDefaultValue<int> > enemyShipsCapturedInRUs; // 0x1C0
        Zeroed<int,ZeroedDefaultValue<int> > ownShipsCapturedInRUs; // 0x1C4
        Zeroed<int,ZeroedDefaultValue<int> > shipsBuiltInRUs; // 0x1C8
        Zeroed<int,ZeroedDefaultValue<int> > subsystemsBuiltInRUs; // 0x1CC
        Zeroed<int,ZeroedDefaultValue<int> > harvestersBuiltInRUs; // 0x1D0
        Zeroed<int,ZeroedDefaultValue<int> > buildShipsBuiltInRUs; // 0x1D4
        Fixed<10> spentRUs; // 0x1D8
        Fixed<10> gatheredRUs; // 0x1DC
        Fixed<10> gatheredRUAsteroid; // 0x1E0
        Fixed<10> gatheredRUDustCloud; // 0x1E4
        Fixed<10> gatheredRUNebula; // 0x1E8
        Fixed<10> gatheredRUSalvage; // 0x1EC
        Fixed<10> tributeReceived; // 0x1F0
        Fixed<10> tributeDonated; // 0x1F4
        std::vector<StatLoggingInternal::ShipStat,std::allocator<StatLoggingInternal::ShipStat> > ships; // 0x1F8
        _inline PlayerStat(StatLoggingInternal::PlayerStat const &); /* compiler_generated() */
        _inline PlayerStat(); /* compiler_generated() */
        _inline ~PlayerStat(); /* compiler_generated() */
        _inline StatLoggingInternal::PlayerStat &operator=(StatLoggingInternal::PlayerStat const &); /* compiler_generated() */
    };
    static_assert(sizeof(PlayerStat) == 516, "Invalid PlayerStat size");
    typedef std::vector<StatLoggingInternal::PlayerStat,std::allocator<StatLoggingInternal::PlayerStat> > PlayerList;
    struct GameStat
    {
        StatLoggingInternal::GameState state; // 0x0
        fwstring<64> levelName; // 0x4
        Zeroed<int,ZeroedDefaultValue<int> > localPlayerIndex; // 0x88
        Zeroed<int,ZeroedDefaultValue<int> > timeTotal; // 0x8C
        Zeroed<bool,ZeroedDefaultValue<bool> > bHasTimeToFirstCombat; // 0x90
        Zeroed<int,ZeroedDefaultValue<int> > timeToFirstCombat; // 0x94
        std::vector<StatLoggingInternal::PlayerStat,std::allocator<StatLoggingInternal::PlayerStat> > players; // 0x98
        GameStat(StatLoggingInternal::GameStat const &); /* compiler_generated() */
        _inline GameStat(); /* compiler_generated() */
        _inline ~GameStat(); /* compiler_generated() */
        StatLoggingInternal::GameStat &operator=(StatLoggingInternal::GameStat const &); /* compiler_generated() */
    };
    static_assert(sizeof(GameStat) == 164, "Invalid GameStat size");
private:
    StatLoggingInternal(StatLoggingInternal const &);
    StatLoggingInternal();
public:
    ~StatLoggingInternal();
    StatLoggingInternal::GameStat const *GetStatGame() const;
private:
    StatLoggingInternal::PlayerStat *GetStatPlayer(unsigned __int32);
public:
    StatLoggingInternal::PlayerStat const *GetStatPlayer(unsigned __int32) const;
private:
    StatLoggingInternal::ShipStat *GetStatShip(unsigned __int32, unsigned __int32);
public:
    StatLoggingInternal::ShipStat const *GetStatShip(unsigned __int32, unsigned __int32) const;
    unsigned __int32 const GetNumStatShips(unsigned __int32) const;
    unsigned __int32 const GetStatShipID(unsigned __int32, unsigned __int32) const;
private:
    StatLoggingInternal::RecordState IsRecording() const;
    void RecordStart(Universe const *);
    void RecordFrame(Universe const *);
    void RecordStop(Universe const *);
    void RecordAbort();
    virtual void OnEvent(GameEventSys::Event const &) override;
    virtual void OnIncResource(Player const *, Fixed<10> const &, PlayerResourceType) override;
    virtual void OnDecResource(Player const *, Fixed<10> const &) override;
    StatLoggingInternal::RecordState m_recording; // 0x8
    StatLoggingInternal::GameStat m_stats; // 0xC
    void RecordInitial(Universe const *);
    void AddPlayer(Player const *, Universe const *);
    void RmvPlayer(Player const *, StatLoggingInternal::PlayerState, __int32);
    void AddTech(Player const *, ResearchData const &);
    void OnSquadProduced(unsigned __int32, Squadron const *);
    StatLoggingInternal &operator=(StatLoggingInternal const &);
};
static_assert(sizeof(StatLoggingInternal) == 176, "Invalid StatLoggingInternal size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __STATLOGGINGINTERNAL_H__
#endif
