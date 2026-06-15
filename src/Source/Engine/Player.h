#if 0
#ifndef __PLAYER_H__
#define __PLAYER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum PlayerConnectionStatus
{
    PLAYER_CONNECTION_OK = 0,
    PLAYER_CONNECTION_UNKNOWN,
    PLAYER_CONNECTION_KILLED,
};

/* ---------- definitions */

class Player :
    public SaveObject
{
public:
    enum
    {
        P_GalaxyPlayer = -1,
    };
    Player(Player const &); /* compiler_generated() */
    Player(SaveGameData *);
    Player(__int32, unsigned __int32);
    virtual ~Player() override;
    bool update(float);
    void setName(wchar_t const *);
    Selection &getAwakeShips();
    Selection &getSleepingShips();
    Ship *getClosestShip(vector3 const &) const;
    _inline __int32 getIndex() const;
    _inline wchar_t const *getName() const;
    _inline unsigned __int32 const getRaceID() const;
    _inline TeamColour const &getTeamColour() const;
    _inline unsigned __int32 getTeamColourHandle() const;
    _inline SquadronList &getSquadrons();
    _inline SquadronList const &getSquadrons() const;
    _inline SquadronList &getSleepingSquadrons();
    _inline SquadronList const &getSleepingSquadrons() const;
    _inline SquadronList &getBuilderSquadrons();
    _inline SquadronList const &getBuilderSquadrons() const;
    void addSquadron(Squadron *);
    void removeSquadron(Squadron *);
    void conditionalRemoveSquadron(Squadron *);
    void transferOneOfOurSquadronsTo(Squadron *, Player *);
    void rouseSquadron(Squadron *);
    void anesthetizeSquadron(Squadron *);
    void anesthetizeSingleShip(Ship *);
    void anesthetizeSquadronOnly(Squadron *);
    void rouseSingleShip(Ship *);
    void rouseSquadronOnly(Squadron *);
    void addSquadronShip(Ship *);
    void purgeFriendliesFromAttackingMeLists();
    PlayerConnectionStatus getConnectionStatus();
    void setConnectionStatus(PlayerConnectionStatus);
    bool isOutOfSync();
    __int32 getOutOfSyncFrame();
    void setOutOfSyncFrame(__int32);
    void KillPlayer();
    _inline bool getAlive() const;
    void setAllies(unsigned short);
    _inline unsigned short getAllies() const;
    _inline void setSharedVision(unsigned short);
    _inline unsigned short getSharedVision() const;
    _inline void setHyperspacing(bool);
    _inline bool getHyperspacing() const;
    _inline ResearchManager &getResearchManager();
    _inline ResearchManager const &getResearchManager() const;
    _inline BuildManager &getBuildManager();
    BuildManager const &getBuildManager() const;
    unsigned __int32 getNumberOfResearchSubSystems();
    void SubSystemActivated(SubSystem *);
    void SubSystemDeactivated(SubSystem *);
    bool SubSystemTypeIsActive(unsigned __int32);
    void increaseResourceUnits(Fixed<10> const &, PlayerResourceType);
    void decreaseResourceUnits(Fixed<10> const &);
    __int32 getNumResourceUnits() const;
    void setNumResourceUnits(Fixed<10> const &);
    Fixed<10> const &getNumResourceUnitsFixedPoint() const;
    unsigned __int32 getUnitCapsLeftForShip(__int32, __int32) const;
    unsigned __int32 getCurrentUnitsUsedByFamily(__int32) const;
    void getCurrentUnitsUsedByShip(__int32, __int32, __int32 &, __int32 &) const;
    _inline float getBounty() const;
    _inline void setBounty(float);
    class Observer
    {
    public:
        virtual void OnIncResource(Player const *, Fixed<10> const &, PlayerResourceType) = 0;
        virtual void OnDecResource(Player const *, Fixed<10> const &) = 0;
        Observer(Player::Observer const &); /* compiler_generated() */
        _inline Observer(); /* compiler_generated() */
        Player::Observer &operator=(Player::Observer const &); /* compiler_generated() */
    };
    static_assert(sizeof(Observer) == 4, "Invalid Observer size");
    void AddObserver(Player::Observer *) const;
    void RemoveObserver(Player::Observer *) const;
private:
    void LoadScripts();
    Fixed<10> m_resourceUnits; // 0xC
    __int32 m_playerIndex; // 0x10
    SquadronList m_ownedSquadrons; // 0x14
    SquadronList m_sleepingSquadrons; // 0x34
    SquadronList m_buildQueueSquadrons; // 0x54
    Selection m_ownedShips; // 0x74
    Selection m_sleepingShips; // 0xA8
    PlayerConnectionStatus m_connectionStatus; // 0xDC
    __int32 m_outOfSyncFrame; // 0xE0
    bool m_playerAlive; // 0xE4
    bool m_hyperspacing; // 0xE5
    unsigned short m_allies; // 0xE6
    unsigned short m_sharedVision; // 0xE8
    Selection m_ActiveSubSystems; // 0xEC
    ResearchManager m_ResearchManager; // 0x120
    BuildManager m_BuildManager; // 0x168
    float m_bounty; // 0x184
    bool m_isResCheat; // 0x188
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_name; // 0x18C
    unsigned __int32 m_raceID; // 0x1A4
    unsigned __int32 m_teamColourHandle; // 0x1A8
    std::set<Player::Observer *,std::less<Player::Observer *>,std::allocator<Player::Observer *> > m_observers; // 0x1AC
    typedef std::set<Player::Observer *,std::less<Player::Observer *>,std::allocator<Player::Observer *> > PlayerObserverList;
public:
    void defaultSettings();
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    Player &operator=(Player const &); /* compiler_generated() */
};
static_assert(sizeof(Player) == 436, "Invalid Player size");

class Player :
    public SaveObject
{
public:
    enum
    {
        P_GalaxyPlayer = -1,
    };
    Player(Player const &); /* compiler_generated() */
    Player(SaveGameData *);
    Player(__int32, unsigned __int32);
    virtual ~Player() override;
    bool update(float);
    void setName(wchar_t const *);
    Selection &getAwakeShips();
    Selection &getSleepingShips();
    Ship *getClosestShip(vector3 const &) const;
    _inline __int32 getIndex() const;
    _inline wchar_t const *getName() const;
    _inline unsigned __int32 const getRaceID() const;
    _inline TeamColour const &getTeamColour() const;
    _inline unsigned __int32 getTeamColourHandle() const;
    _inline SquadronList &getSquadrons();
    _inline SquadronList const &getSquadrons() const;
    _inline SquadronList &getSleepingSquadrons();
    _inline SquadronList const &getSleepingSquadrons() const;
    _inline SquadronList &getBuilderSquadrons();
    _inline SquadronList const &getBuilderSquadrons() const;
    void addSquadron(Squadron *);
    void removeSquadron(Squadron *);
    void conditionalRemoveSquadron(Squadron *);
    void transferOneOfOurSquadronsTo(Squadron *, Player *);
    void rouseSquadron(Squadron *);
    void anesthetizeSquadron(Squadron *);
    void anesthetizeSingleShip(Ship *);
    void anesthetizeSquadronOnly(Squadron *);
    void rouseSingleShip(Ship *);
    void rouseSquadronOnly(Squadron *);
    void addSquadronShip(Ship *);
    void purgeFriendliesFromAttackingMeLists();
    PlayerConnectionStatus getConnectionStatus();
    void setConnectionStatus(PlayerConnectionStatus);
    bool isOutOfSync();
    __int32 getOutOfSyncFrame();
    void setOutOfSyncFrame(__int32);
    void KillPlayer();
    _inline bool getAlive() const;
    void setAllies(unsigned short);
    _inline unsigned short getAllies() const;
    _inline void setSharedVision(unsigned short);
    _inline unsigned short getSharedVision() const;
    _inline void setHyperspacing(bool);
    _inline bool getHyperspacing() const;
    _inline ResearchManager &getResearchManager();
    _inline ResearchManager const &getResearchManager() const;
    _inline BuildManager &getBuildManager();
    BuildManager const &getBuildManager() const;
    unsigned __int32 getNumberOfResearchSubSystems();
    void SubSystemActivated(SubSystem *);
    void SubSystemDeactivated(SubSystem *);
    bool SubSystemTypeIsActive(unsigned __int32);
    void increaseResourceUnits(Fixed<10> const &, PlayerResourceType);
    void decreaseResourceUnits(Fixed<10> const &);
    __int32 getNumResourceUnits() const;
    void setNumResourceUnits(Fixed<10> const &);
    Fixed<10> const &getNumResourceUnitsFixedPoint() const;
    unsigned __int32 getUnitCapsLeftForShip(__int32, __int32) const;
    unsigned __int32 getCurrentUnitsUsedByFamily(__int32) const;
    void getCurrentUnitsUsedByShip(__int32, __int32, __int32 &, __int32 &) const;
    _inline float getBounty() const;
    _inline void setBounty(float);
    class Observer
    {
    public:
        virtual void OnIncResource(Player const *, Fixed<10> const &, PlayerResourceType) = 0;
        virtual void OnDecResource(Player const *, Fixed<10> const &) = 0;
        Observer(Player::Observer const &); /* compiler_generated() */
        _inline Observer(); /* compiler_generated() */
        Player::Observer &operator=(Player::Observer const &); /* compiler_generated() */
    };
    static_assert(sizeof(Observer) == 4, "Invalid Observer size");
    void AddObserver(Player::Observer *) const;
    void RemoveObserver(Player::Observer *) const;
private:
    void LoadScripts();
    Fixed<10> m_resourceUnits; // 0xC
    __int32 m_playerIndex; // 0x10
    SquadronList m_ownedSquadrons; // 0x14
    SquadronList m_sleepingSquadrons; // 0x34
    SquadronList m_buildQueueSquadrons; // 0x54
    Selection m_ownedShips; // 0x74
    Selection m_sleepingShips; // 0xA8
    PlayerConnectionStatus m_connectionStatus; // 0xDC
    __int32 m_outOfSyncFrame; // 0xE0
    bool m_playerAlive; // 0xE4
    bool m_hyperspacing; // 0xE5
    unsigned short m_allies; // 0xE6
    unsigned short m_sharedVision; // 0xE8
    Selection m_ActiveSubSystems; // 0xEC
    ResearchManager m_ResearchManager; // 0x120
    BuildManager m_BuildManager; // 0x168
    float m_bounty; // 0x184
    bool m_isResCheat; // 0x188
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_name; // 0x18C
    unsigned __int32 m_raceID; // 0x1A4
    unsigned __int32 m_teamColourHandle; // 0x1A8
    std::set<Player::Observer *,std::less<Player::Observer *>,std::allocator<Player::Observer *> > m_observers; // 0x1AC
    typedef std::set<Player::Observer *,std::less<Player::Observer *>,std::allocator<Player::Observer *> > PlayerObserverList;
public:
    void defaultSettings();
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    Player &operator=(Player const &); /* compiler_generated() */
};
static_assert(sizeof(Player) == 436, "Invalid Player size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline __int32 Player::getIndex() const // 0x449736
{
    mangled_assert("?getIndex@Player@@QBEHXZ");
    todo("implement");
}

_inline wchar_t const *Player::getName() const // 0x4BF86E
{
    mangled_assert("?getName@Player@@QBEPB_WXZ");
    todo("implement");
}

_inline unsigned __int32 const Player::getRaceID() const // 0x48CA11
{
    mangled_assert("?getRaceID@Player@@QBE?BIXZ");
    todo("implement");
}

_inline TeamColour const &Player::getTeamColour() const // 0x441C9A
{
    mangled_assert("?getTeamColour@Player@@QBEABVTeamColour@@XZ");
    todo("implement");
}

_inline unsigned __int32 Player::getTeamColourHandle() const // 0x48D350
{
    mangled_assert("?getTeamColourHandle@Player@@QBEIXZ");
    todo("implement");
}

_inline SquadronList const &Player::getSquadrons() const // 0x500ECF
{
    mangled_assert("?getSquadrons@Player@@QBEABVSquadronList@@XZ");
    todo("implement");
}

_inline SquadronList const &Player::getSleepingSquadrons() const // 0x537084
{
    mangled_assert("?getSleepingSquadrons@Player@@QBEABVSquadronList@@XZ");
    todo("implement");
}

_inline SquadronList const &Player::getBuilderSquadrons() const // 0x6385B2
{
    mangled_assert("?getBuilderSquadrons@Player@@QBEABVSquadronList@@XZ");
    todo("implement");
}

_inline SquadronList &Player::getSquadrons() // 0x4514DB
{
    mangled_assert("?getSquadrons@Player@@QAEAAVSquadronList@@XZ");
    todo("implement");
}

_inline SquadronList &Player::getSleepingSquadrons() // 0x542F7B
{
    mangled_assert("?getSleepingSquadrons@Player@@QAEAAVSquadronList@@XZ");
    todo("implement");
}

_inline SquadronList &Player::getBuilderSquadrons() // 0x52C13B
{
    mangled_assert("?getBuilderSquadrons@Player@@QAEAAVSquadronList@@XZ");
    todo("implement");
}

_inline bool Player::getAlive() const // 0x463A08
{
    mangled_assert("?getAlive@Player@@QBE_NXZ");
    todo("implement");
}

_inline unsigned short Player::getAllies() const // 0x5107DC
{
    mangled_assert("?getAllies@Player@@QBEGXZ");
    todo("implement");
}

_inline void Player::setSharedVision(unsigned short) // 0x5DCB3E
{
    mangled_assert("?setSharedVision@Player@@QAEXG@Z");
    todo("implement");
}

_inline unsigned short Player::getSharedVision() const // 0x5DC570
{
    mangled_assert("?getSharedVision@Player@@QBEGXZ");
    todo("implement");
}

_inline void Player::setHyperspacing(bool) // 0x724103
{
    mangled_assert("?setHyperspacing@Player@@QAEX_N@Z");
    todo("implement");
}

_inline bool Player::getHyperspacing() const // 0x453FBD
{
    mangled_assert("?getHyperspacing@Player@@QBE_NXZ");
    todo("implement");
}

_inline ResearchManager const &Player::getResearchManager() const // 0x48CA49
{
    mangled_assert("?getResearchManager@Player@@QBEABVResearchManager@@XZ");
    todo("implement");
}

_inline ResearchManager &Player::getResearchManager() // 0x48CA42
{
    mangled_assert("?getResearchManager@Player@@QAEAAVResearchManager@@XZ");
    todo("implement");
}

_inline BuildManager &Player::getBuildManager() // 0x52C130
{
    mangled_assert("?getBuildManager@Player@@QAEAAVBuildManager@@XZ");
    todo("implement");
}

_inline float Player::getBounty() const // 0x5107F0
{
    mangled_assert("?getBounty@Player@@QBEMXZ");
    todo("implement");
}

_inline void Player::setBounty(float) // 0x713415
{
    mangled_assert("?setBounty@Player@@QAEXM@Z");
    todo("implement");
}

_inline bool Player::isDeterministic() // 0x61E55F
{
    mangled_assert("?isDeterministic@Player@@UAE_NXZ");
    todo("implement");
}

_inline char const *Player::saveToken() // 0x61E95B
{
    mangled_assert("?saveToken@Player@@UAEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __PLAYER_H__
#endif
