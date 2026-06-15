#if 0
#ifndef __UNIVERSE_H__
#define __UNIVERSE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum SobFilterRace
{
    SobFilterRace_Own = 1, // 0x0001
    SobFilterRace_Allies = 2, // 0x0002
    SobFilterRace_Enemies = 4, // 0x0004
    SobFilterRace_Friendly = 3, // 0x0003
    SobFilterRace_All = 7, // 0x0007
};

enum SobFilterType
{
    SobFilterType_Ships = 1, // 0x0001
    SobFilterType_SleepingShips = 2, // 0x0002
    SobFilterType_SubSystems = 4, // 0x0004
    SobFilterType_Asteroids = 8, // 0x0008
    SobFilterType_Salvage = 16, // 0x0010
    SobFilterType_DustClouds = 32, // 0x0020 ' '
    SobFilterType_Missiles = 64, // 0x0040 '@'
    SobFilterType_All = 125, // 0x007D '}'
    SobFilterType_Collideable = 29, // 0x001D
};

/* ---------- definitions */

class UniverseClientData :
    public Saveable
{
public:
    UniverseClientData(UniverseClientData const &); /* compiler_generated() */
    UniverseClientData();
    virtual ~UniverseClientData() override;
    WaypointManager waypointManager; // 0x4
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline char const *saveToken() override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
protected:
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
public:
    UniverseClientData &operator=(UniverseClientData const &); /* compiler_generated() */
};
static_assert(sizeof(UniverseClientData) == 136, "Invalid UniverseClientData size");

class Universe :
    public Saveable
{
public:
    static bool Startup();
    static bool Shutdown();
    static bool Save(SaveGameData *saveGameData, SaveType saveType);
    static bool Restore(SaveGameData *saveGameData);
    typedef std::map<unsigned int,StrikeGroup *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,StrikeGroup *> > > StrikeGroupList;
    typedef std::smallvector<FocusPoint *,4,std::allocator<FocusPoint *> > FocusPointContainer;
    typedef std::list<WeaponFireEvent *,std::allocator<WeaponFireEvent *> > WeaponFireEventContainer;
    Universe(Universe &); /* compiler_generated() */
    Universe();
    virtual ~Universe() override;
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline char const *saveToken() override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    void defaultSettings();
    static void saveSquadronIDMap(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void restoreSquadronIDMap(void *objectPtr, SaveGameData *saveGameData);
    static void saveStrikeGroups(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void restoreStrikeGroups(void *objectPtr, SaveGameData *saveGameData);
    static void saveFocusPoints(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void restoreFocusPoints(void *objectPtr, SaveGameData *saveGameData);
    void AddMissingSaveObjects();
    void simulate();
    void spliceNewbornsForLevelStart();
    void addAwakeSob(Sob *);
    void addSleepingSob(Sob *);
    void rouseSob(Sob *);
    void anesthetizeSob(Sob *);
    void addToNewbornList(Sob *);
    void addToZombieList(Sob *);
    void makeZombies();
    Squadron *findSquadron(unsigned __int32) const;
    void removeSquadron(Squadron *);
    unsigned __int32 getNumberOfSquadrons() const;
    _inline std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,Squadron *> > > > getSquadronListBegin();
    _inline std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,Squadron *> > > > getSquadronListEnd();
    StrikeGroup *findStrikeGroup(unsigned __int32) const;
    _inline std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,StrikeGroup *> > > > getStrikeGroupListBegin();
    _inline std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,StrikeGroup *> > > > getStrikeGroupListEnd();
    void addStrikeGroup(StrikeGroup *);
    float getTotalTime() const;
    float getTimeDelta() const;
    _inline void setFrameCount(unsigned __int32);
    _inline unsigned __int32 getFrameCount() const;
    float multiplySpeed(float);
    void setSpeedMultiple(float);
    __int32 getSpeedRepetitions();
    Selection const &getAwakeSobs() const;
    Selection const &getAwakeSobsOfType(SobType) const;
    Selection &getSleepingSobs();
    Selection &getSleepingSobsOfType(SobType);
    Selection &getZombieList();
    Selection &getNewbornList();
    Selection &getNonDeterministicNewbornList();
    std::vector<Sob *,std::allocator<Sob *> > const &getNewSleepers() const;
    void registerObserverOfSobsOfType(SobType, Selection::Observer *);
    void removeObserverOfSobsOfType(SobType, Selection::Observer *);
    _inline unsigned __int32 getNumPlayers() const;
    Player *getCurrentPlayer();
    Player const *getPlayer(__int32) const;
    Player *getPlayer(__int32);
    _inline Player *getNeutralPlayer();
    void addPlayer(Player *);
    void addNeutralPlayer(Player *);
    unsigned __int32 getNumConnections(PlayerConnectionStatus) const;
    void preRemoveEmptyPlayers();
    void switchCurrentPlayer();
    _inline WaypointManager &getWaypointManager();
    _inline SOBGroupManager &getSOBGroupManager();
    _inline HyperspaceManager &getHyperspaceManager();
    _inline PathList &getAIPaths();
    _inline EventPointerManager &getEventPointerManager();
    void pauseUniverse(bool);
    _inline bool isPaused() const;
    void nisPauseUniverse(bool);
    _inline bool isPausedByNIS() const;
    void handleDeferredPause();
    void setWorldBoundsInner(vector3 const &, vector3 const &);
    void setWorldBoundsOuter(vector3 const &, vector3 const &);
    _inline vector3 const &getWorldBoundsOrigin();
    _inline vector3 const &getWorldBoundsInner();
    _inline vector3 const &getWorldBoundsOuter();
    bool clipToWorldBounds(vector3 const &, vector3 &);
    bool clipToWorldBoundsInner(vector3 &);
    bool clipToWorldBoundsOuter(vector3 &);
    bool requestSobsWithinRadius(Selection &, unsigned __int32, unsigned __int32, vector3 const &, float, __int32, bool) const;
private:
    void filterSobsWithinRadius(Selection const &, Selection &, unsigned __int32, vector3 const &, float, __int32, bool) const;
public:
    void hideByFilter(bool (*)(Sob *), bool);
    void analCheck();
    bool Query(Collision::Sphere const &, unsigned __int32, std::vector<Sob *,std::allocator<Sob *> > &) const;
    void FindEmptySpace(Collision::Sphere const &, vector3 &);
    _inline std::smallvector<FocusPoint *,4,std::allocator<FocusPoint *> > &GetFocusPoints();
    _inline std::list<WeaponFireEvent *,std::allocator<WeaponFireEvent *> > &GetWeaponFireEvents();
    WeaponFireEvent *FindWeaponFireEvent(SobID const &, SobID const &, char const *);
    _inline bool isTurboEnabled() const;
    float GetSlowDownSpeed() const;
    _inline bool IsInSlowDown() const;
    void SetSlowDownSpeed(float, float);
    void UpdateUniversePause();
    _inline void SetIsSkipping(bool);
    _inline bool GetIsSkipping() const;
    _inline void SetCanSkip(bool);
    _inline bool GetCanSkip() const;
    void AllocateEventPointerManager();
private:
    void addSquadron(Squadron *);
    void updateMultipliersAndAbilities(float);
    void updatePhysics(float);
    void updateResources(float);
    void updateDustClouds(float);
    void updateNebula(float);
    void updateMissiles(float);
    void updateWeapons(float);
    void updateWeaponFire(float);
    void updateCollision(float);
    void updateSobCollisions();
    void updateWeaponFireCollisions();
    void updateAvoidanceCollisions();
    void ChangeSpeed(float);
    void profileFrame();
    void UpdateSquadrons(float);
    void UpdateStrikeGroups(float);
    void spliceNewbornList();
    void deleteZombieList();
    void freeLists();
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    UniverseClientData m_clientData; // 0x4
    std::vector<Player *,std::allocator<Player *> > m_players; // 0x8C
    Player *m_neutralPlayer; // 0x98
    Selection m_awakeTypeLists[15]; // 0x9C
    Selection m_awakeSobList; // 0x3A8
    Selection m_sleepingTypeLists[15]; // 0x3DC
    Selection m_sleepingSobList; // 0x6E8
    Selection m_newbornList; // 0x71C
    Selection m_nonDeterministicNewbornList; // 0x750
    Selection m_zombieList; // 0x784
    std::list<Sob *,std::allocator<Sob *> > m_toBecomeZombies; // 0x7B8
    std::vector<Sob *,std::allocator<Sob *> > m_newSleepers; // 0x7C0
    std::map<unsigned int,StrikeGroup *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,StrikeGroup *> > > m_strikeGroups; // 0x7CC
    unsigned __int32 m_curStrikeGroupID; // 0x7D4
    std::smallvector<FocusPoint *,4,std::allocator<FocusPoint *> > m_focusPoints; // 0x7D8
    std::list<WeaponFireEvent *,std::allocator<WeaponFireEvent *> > m_weaponFireEvents; // 0x7F8
    Timer *m_pTimer; // 0x800
    float m_timeDelta; // 0x804
    float m_totalTime; // 0x808
    unsigned __int32 m_frameCount; // 0x80C
    SOBGroupManager m_SOBGroupManager; // 0x810
    HyperspaceManager m_HyperspaceManager; // 0x838
    EventPointerManager *m_eventPointerManager; // 0x850
    bool m_isPaused; // 0x854
    bool m_nisPaused; // 0x855
    bool m_deferredPause; // 0x856
    bool m_bSensorsOn; // 0x857
    bool m_isSkipping; // 0x858
    bool m_canSkip; // 0x859
    UnitCaps m_unitCaps; // 0x85C
    PathList m_aiPaths; // 0x878
    std::map<unsigned int,Squadron *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,Squadron *> > > m_squadronIDMap; // 0x884
    unsigned __int32 m_curSquadronID; // 0x88C
    float m_speedMultiple; // 0x890
    bool m_speedTurboEnable; // 0x894
    float m_speedCounter; // 0x898
    float m_pauseWithSpeedTimerStep; // 0x89C
    float m_pauseWithSpeedIncrement; // 0x8A0
    boost::scoped_ptr<Timer> m_pauseWithSpeedStartTime; // 0x8A4
    unsigned __int32 m_pauseWithSpeedCounter; // 0x8A8
    float m_pauseWithSpeedRatio; // 0x8AC
    vector3 m_worldBoundsOrigin; // 0x8B0
    vector3 m_worldBoundsInner; // 0x8BC
    vector3 m_worldBoundsOuter; // 0x8C8
    bool m_doAvoidance; // 0x8D4
    std::auto_ptr<Collision::Span<Sob> > m_avoidanceTree; // 0x8D8
    std::auto_ptr<Collision::Span<Sob> > m_collisionTree; // 0x8DC
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_soundSubtitlepath; // 0x8E0
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_soundDefaultMusic; // 0x8F8
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_soundPlayingMusic; // 0x910
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_soundActorName; // 0x928
    __int32 m_soundPlayingType; // 0x940
    bool m_soundIntelEvent; // 0x944
    bool m_soundSpeechEnable; // 0x945
    float m_fps; // 0x948
    std::vector<SubtitleCounter *,std::allocator<SubtitleCounter *> > m_subtitleCounters; // 0x94C
public:
    _inline UnitCaps const &GetUnitCaps() const;
    typedef Collision::Span<Sob> AvoidanceTree;
    typedef Collision::Span<Sob> CollisionTree;
    _inline Collision::Span<Sob> *GetAvoidanceTree();
    _inline Collision::Span<Sob> *GetCollisionTree();
    _inline void SetAvoidanceActive(bool);
    void SoundSetSubtitlePath(char const *);
    _inline char const *SoundGetSubtitlePath() const;
    void SoundSetDefaultMusic(char const *);
    void SoundMusicPlayType(char const *, __int32);
    void SoundSetMuteActor(char const *);
    void SoundIntelEvent(bool);
    void SoundSpeechEnable(bool);
    void SoundSFXPlay3D(char const *, vector3);
    _inline float getFPS() const;
    void AddSubtitleCounter(SubtitleCounter *);
    void EraseSubtitleCounters();
    void LoadCorrectUnitCaps();
    typedef std::vector<SubtitleCounter *,std::allocator<SubtitleCounter *> > SubtitleCounterContainer;
    Universe &operator=(Universe &); /* compiler_generated() */
};
static_assert(sizeof(Universe) == 2392, "Invalid Universe size");

class Universe :
    public Saveable
{
public:
    static bool Startup();
    static bool Shutdown();
    static bool Save(SaveGameData *saveGameData, SaveType saveType);
    static bool Restore(SaveGameData *saveGameData);
    typedef std::map<unsigned int,StrikeGroup *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,StrikeGroup *> > > StrikeGroupList;
    typedef std::smallvector<FocusPoint *,4,std::allocator<FocusPoint *> > FocusPointContainer;
    typedef std::list<WeaponFireEvent *,std::allocator<WeaponFireEvent *> > WeaponFireEventContainer;
    Universe(Universe &); /* compiler_generated() */
    Universe();
    virtual ~Universe() override;
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline char const *saveToken() override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    void defaultSettings();
    static void saveSquadronIDMap(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void restoreSquadronIDMap(void *objectPtr, SaveGameData *saveGameData);
    static void saveStrikeGroups(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void restoreStrikeGroups(void *objectPtr, SaveGameData *saveGameData);
    static void saveFocusPoints(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void restoreFocusPoints(void *objectPtr, SaveGameData *saveGameData);
    void AddMissingSaveObjects();
    void simulate();
    void spliceNewbornsForLevelStart();
    void addAwakeSob(Sob *);
    void addSleepingSob(Sob *);
    void rouseSob(Sob *);
    void anesthetizeSob(Sob *);
    void addToNewbornList(Sob *);
    void addToZombieList(Sob *);
    void makeZombies();
    Squadron *findSquadron(unsigned __int32) const;
    void removeSquadron(Squadron *);
    unsigned __int32 getNumberOfSquadrons() const;
    _inline std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,Squadron *> > > > getSquadronListBegin();
    _inline std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,Squadron *> > > > getSquadronListEnd();
    StrikeGroup *findStrikeGroup(unsigned __int32) const;
    _inline std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,StrikeGroup *> > > > getStrikeGroupListBegin();
    _inline std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,StrikeGroup *> > > > getStrikeGroupListEnd();
    void addStrikeGroup(StrikeGroup *);
    float getTotalTime() const;
    float getTimeDelta() const;
    _inline void setFrameCount(unsigned __int32);
    _inline unsigned __int32 getFrameCount() const;
    float multiplySpeed(float);
    void setSpeedMultiple(float);
    __int32 getSpeedRepetitions();
    Selection const &getAwakeSobs() const;
    Selection const &getAwakeSobsOfType(SobType) const;
    Selection &getSleepingSobs();
    Selection &getSleepingSobsOfType(SobType);
    Selection &getZombieList();
    Selection &getNewbornList();
    Selection &getNonDeterministicNewbornList();
    std::vector<Sob *,std::allocator<Sob *> > const &getNewSleepers() const;
    void registerObserverOfSobsOfType(SobType, Selection::Observer *);
    void removeObserverOfSobsOfType(SobType, Selection::Observer *);
    _inline unsigned __int32 getNumPlayers() const;
    Player *getCurrentPlayer();
    Player const *getPlayer(__int32) const;
    Player *getPlayer(__int32);
    _inline Player *getNeutralPlayer();
    void addPlayer(Player *);
    void addNeutralPlayer(Player *);
    unsigned __int32 getNumConnections(PlayerConnectionStatus) const;
    void preRemoveEmptyPlayers();
    void switchCurrentPlayer();
    _inline WaypointManager &getWaypointManager();
    _inline SOBGroupManager &getSOBGroupManager();
    _inline HyperspaceManager &getHyperspaceManager();
    _inline PathList &getAIPaths();
    _inline EventPointerManager &getEventPointerManager();
    void pauseUniverse(bool);
    _inline bool isPaused() const;
    void nisPauseUniverse(bool);
    _inline bool isPausedByNIS() const;
    void handleDeferredPause();
    void setWorldBoundsInner(vector3 const &, vector3 const &);
    void setWorldBoundsOuter(vector3 const &, vector3 const &);
    _inline vector3 const &getWorldBoundsOrigin();
    _inline vector3 const &getWorldBoundsInner();
    _inline vector3 const &getWorldBoundsOuter();
    bool clipToWorldBounds(vector3 const &, vector3 &);
    bool clipToWorldBoundsInner(vector3 &);
    bool clipToWorldBoundsOuter(vector3 &);
    bool requestSobsWithinRadius(Selection &, unsigned __int32, unsigned __int32, vector3 const &, float, __int32, bool) const;
private:
    void filterSobsWithinRadius(Selection const &, Selection &, unsigned __int32, vector3 const &, float, __int32, bool) const;
public:
    void hideByFilter(bool (*)(Sob *), bool);
    void analCheck();
    bool Query(Collision::Sphere const &, unsigned __int32, std::vector<Sob *,std::allocator<Sob *> > &) const;
    void FindEmptySpace(Collision::Sphere const &, vector3 &);
    _inline std::smallvector<FocusPoint *,4,std::allocator<FocusPoint *> > &GetFocusPoints();
    _inline std::list<WeaponFireEvent *,std::allocator<WeaponFireEvent *> > &GetWeaponFireEvents();
    WeaponFireEvent *FindWeaponFireEvent(SobID const &, SobID const &, char const *);
    _inline bool isTurboEnabled() const;
    float GetSlowDownSpeed() const;
    _inline bool IsInSlowDown() const;
    void SetSlowDownSpeed(float, float);
    void UpdateUniversePause();
    _inline void SetIsSkipping(bool);
    _inline bool GetIsSkipping() const;
    _inline void SetCanSkip(bool);
    _inline bool GetCanSkip() const;
    void AllocateEventPointerManager();
private:
    void addSquadron(Squadron *);
    void updateMultipliersAndAbilities(float);
    void updatePhysics(float);
    void updateResources(float);
    void updateDustClouds(float);
    void updateNebula(float);
    void updateMissiles(float);
    void updateWeapons(float);
    void updateWeaponFire(float);
    void updateCollision(float);
    void updateSobCollisions();
    void updateWeaponFireCollisions();
    void updateAvoidanceCollisions();
    void ChangeSpeed(float);
    void profileFrame();
    void UpdateSquadrons(float);
    void UpdateStrikeGroups(float);
    void spliceNewbornList();
    void deleteZombieList();
    void freeLists();
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    UniverseClientData m_clientData; // 0x4
    std::vector<Player *,std::allocator<Player *> > m_players; // 0x8C
    Player *m_neutralPlayer; // 0x98
    Selection m_awakeTypeLists[15]; // 0x9C
    Selection m_awakeSobList; // 0x3A8
    Selection m_sleepingTypeLists[15]; // 0x3DC
    Selection m_sleepingSobList; // 0x6E8
    Selection m_newbornList; // 0x71C
    Selection m_nonDeterministicNewbornList; // 0x750
    Selection m_zombieList; // 0x784
    std::list<Sob *,std::allocator<Sob *> > m_toBecomeZombies; // 0x7B8
    std::vector<Sob *,std::allocator<Sob *> > m_newSleepers; // 0x7C0
    std::map<unsigned int,StrikeGroup *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,StrikeGroup *> > > m_strikeGroups; // 0x7CC
    unsigned __int32 m_curStrikeGroupID; // 0x7D4
    std::smallvector<FocusPoint *,4,std::allocator<FocusPoint *> > m_focusPoints; // 0x7D8
    std::list<WeaponFireEvent *,std::allocator<WeaponFireEvent *> > m_weaponFireEvents; // 0x7F8
    Timer *m_pTimer; // 0x800
    float m_timeDelta; // 0x804
    float m_totalTime; // 0x808
    unsigned __int32 m_frameCount; // 0x80C
    SOBGroupManager m_SOBGroupManager; // 0x810
    HyperspaceManager m_HyperspaceManager; // 0x838
    EventPointerManager *m_eventPointerManager; // 0x850
    bool m_isPaused; // 0x854
    bool m_nisPaused; // 0x855
    bool m_deferredPause; // 0x856
    bool m_bSensorsOn; // 0x857
    bool m_isSkipping; // 0x858
    bool m_canSkip; // 0x859
    UnitCaps m_unitCaps; // 0x85C
    PathList m_aiPaths; // 0x878
    std::map<unsigned int,Squadron *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,Squadron *> > > m_squadronIDMap; // 0x884
    unsigned __int32 m_curSquadronID; // 0x88C
    float m_speedMultiple; // 0x890
    bool m_speedTurboEnable; // 0x894
    float m_speedCounter; // 0x898
    float m_pauseWithSpeedTimerStep; // 0x89C
    float m_pauseWithSpeedIncrement; // 0x8A0
    boost::scoped_ptr<Timer> m_pauseWithSpeedStartTime; // 0x8A4
    unsigned __int32 m_pauseWithSpeedCounter; // 0x8A8
    float m_pauseWithSpeedRatio; // 0x8AC
    vector3 m_worldBoundsOrigin; // 0x8B0
    vector3 m_worldBoundsInner; // 0x8BC
    vector3 m_worldBoundsOuter; // 0x8C8
    bool m_doAvoidance; // 0x8D4
    std::auto_ptr<Collision::Span<Sob> > m_avoidanceTree; // 0x8D8
    std::auto_ptr<Collision::Span<Sob> > m_collisionTree; // 0x8DC
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_soundSubtitlepath; // 0x8E0
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_soundDefaultMusic; // 0x8F8
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_soundPlayingMusic; // 0x910
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_soundActorName; // 0x928
    __int32 m_soundPlayingType; // 0x940
    bool m_soundIntelEvent; // 0x944
    bool m_soundSpeechEnable; // 0x945
    float m_fps; // 0x948
    std::vector<SubtitleCounter *,std::allocator<SubtitleCounter *> > m_subtitleCounters; // 0x94C
public:
    _inline UnitCaps const &GetUnitCaps() const;
    typedef Collision::Span<Sob> AvoidanceTree;
    typedef Collision::Span<Sob> CollisionTree;
    _inline Collision::Span<Sob> *GetAvoidanceTree();
    _inline Collision::Span<Sob> *GetCollisionTree();
    _inline void SetAvoidanceActive(bool);
    void SoundSetSubtitlePath(char const *);
    _inline char const *SoundGetSubtitlePath() const;
    void SoundSetDefaultMusic(char const *);
    void SoundMusicPlayType(char const *, __int32);
    void SoundSetMuteActor(char const *);
    void SoundIntelEvent(bool);
    void SoundSpeechEnable(bool);
    void SoundSFXPlay3D(char const *, vector3);
    _inline float getFPS() const;
    void AddSubtitleCounter(SubtitleCounter *);
    void EraseSubtitleCounters();
    void LoadCorrectUnitCaps();
    typedef std::vector<SubtitleCounter *,std::allocator<SubtitleCounter *> > SubtitleCounterContainer;
    Universe &operator=(Universe &); /* compiler_generated() */
};
static_assert(sizeof(Universe) == 2392, "Invalid Universe size");

class Universe :
    public Saveable
{
public:
    static bool Startup();
    static bool Shutdown();
    static bool Save(SaveGameData *saveGameData, SaveType saveType);
    static bool Restore(SaveGameData *saveGameData);
    typedef std::map<unsigned int,StrikeGroup *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,StrikeGroup *> > > StrikeGroupList;
    typedef std::smallvector<FocusPoint *,4,std::allocator<FocusPoint *> > FocusPointContainer;
    typedef std::list<WeaponFireEvent *,std::allocator<WeaponFireEvent *> > WeaponFireEventContainer;
    Universe(Universe &); /* compiler_generated() */
    Universe();
    virtual ~Universe() override;
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline char const *saveToken() override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    void defaultSettings();
    static void saveSquadronIDMap(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void restoreSquadronIDMap(void *objectPtr, SaveGameData *saveGameData);
    static void saveStrikeGroups(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void restoreStrikeGroups(void *objectPtr, SaveGameData *saveGameData);
    static void saveFocusPoints(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void restoreFocusPoints(void *objectPtr, SaveGameData *saveGameData);
    void AddMissingSaveObjects();
    void simulate();
    void spliceNewbornsForLevelStart();
    void addAwakeSob(Sob *);
    void addSleepingSob(Sob *);
    void rouseSob(Sob *);
    void anesthetizeSob(Sob *);
    void addToNewbornList(Sob *);
    void addToZombieList(Sob *);
    void makeZombies();
    Squadron *findSquadron(unsigned __int32) const;
    void removeSquadron(Squadron *);
    unsigned __int32 getNumberOfSquadrons() const;
    _inline std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,Squadron *> > > > getSquadronListBegin();
    _inline std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,Squadron *> > > > getSquadronListEnd();
    StrikeGroup *findStrikeGroup(unsigned __int32) const;
    _inline std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,StrikeGroup *> > > > getStrikeGroupListBegin();
    _inline std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,StrikeGroup *> > > > getStrikeGroupListEnd();
    void addStrikeGroup(StrikeGroup *);
    float getTotalTime() const;
    float getTimeDelta() const;
    _inline void setFrameCount(unsigned __int32);
    _inline unsigned __int32 getFrameCount() const;
    float multiplySpeed(float);
    void setSpeedMultiple(float);
    __int32 getSpeedRepetitions();
    Selection const &getAwakeSobs() const;
    Selection const &getAwakeSobsOfType(SobType) const;
    Selection &getSleepingSobs();
    Selection &getSleepingSobsOfType(SobType);
    Selection &getZombieList();
    Selection &getNewbornList();
    Selection &getNonDeterministicNewbornList();
    std::vector<Sob *,std::allocator<Sob *> > const &getNewSleepers() const;
    void registerObserverOfSobsOfType(SobType, Selection::Observer *);
    void removeObserverOfSobsOfType(SobType, Selection::Observer *);
    _inline unsigned __int32 getNumPlayers() const;
    Player *getCurrentPlayer();
    Player const *getPlayer(__int32) const;
    Player *getPlayer(__int32);
    _inline Player *getNeutralPlayer();
    void addPlayer(Player *);
    void addNeutralPlayer(Player *);
    unsigned __int32 getNumConnections(PlayerConnectionStatus) const;
    void preRemoveEmptyPlayers();
    void switchCurrentPlayer();
    _inline WaypointManager &getWaypointManager();
    _inline SOBGroupManager &getSOBGroupManager();
    _inline HyperspaceManager &getHyperspaceManager();
    _inline PathList &getAIPaths();
    _inline EventPointerManager &getEventPointerManager();
    void pauseUniverse(bool);
    _inline bool isPaused() const;
    void nisPauseUniverse(bool);
    _inline bool isPausedByNIS() const;
    void handleDeferredPause();
    void setWorldBoundsInner(vector3 const &, vector3 const &);
    void setWorldBoundsOuter(vector3 const &, vector3 const &);
    _inline vector3 const &getWorldBoundsOrigin();
    _inline vector3 const &getWorldBoundsInner();
    _inline vector3 const &getWorldBoundsOuter();
    bool clipToWorldBounds(vector3 const &, vector3 &);
    bool clipToWorldBoundsInner(vector3 &);
    bool clipToWorldBoundsOuter(vector3 &);
    bool requestSobsWithinRadius(Selection &, unsigned __int32, unsigned __int32, vector3 const &, float, __int32, bool) const;
private:
    void filterSobsWithinRadius(Selection const &, Selection &, unsigned __int32, vector3 const &, float, __int32, bool) const;
public:
    void hideByFilter(bool (*)(Sob *), bool);
    void analCheck();
    bool Query(Collision::Sphere const &, unsigned __int32, std::vector<Sob *,std::allocator<Sob *> > &) const;
    void FindEmptySpace(Collision::Sphere const &, vector3 &);
    _inline std::smallvector<FocusPoint *,4,std::allocator<FocusPoint *> > &GetFocusPoints();
    _inline std::list<WeaponFireEvent *,std::allocator<WeaponFireEvent *> > &GetWeaponFireEvents();
    WeaponFireEvent *FindWeaponFireEvent(SobID const &, SobID const &, char const *);
    _inline bool isTurboEnabled() const;
    float GetSlowDownSpeed() const;
    _inline bool IsInSlowDown() const;
    void SetSlowDownSpeed(float, float);
    void UpdateUniversePause();
    _inline void SetIsSkipping(bool);
    _inline bool GetIsSkipping() const;
    _inline void SetCanSkip(bool);
    _inline bool GetCanSkip() const;
    void AllocateEventPointerManager();
private:
    void addSquadron(Squadron *);
    void updateMultipliersAndAbilities(float);
    void updatePhysics(float);
    void updateResources(float);
    void updateDustClouds(float);
    void updateNebula(float);
    void updateMissiles(float);
    void updateWeapons(float);
    void updateWeaponFire(float);
    void updateCollision(float);
    void updateSobCollisions();
    void updateWeaponFireCollisions();
    void updateAvoidanceCollisions();
    void ChangeSpeed(float);
    void profileFrame();
    void UpdateSquadrons(float);
    void UpdateStrikeGroups(float);
    void spliceNewbornList();
    void deleteZombieList();
    void freeLists();
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    UniverseClientData m_clientData; // 0x4
    std::vector<Player *,std::allocator<Player *> > m_players; // 0x8C
    Player *m_neutralPlayer; // 0x98
    Selection m_awakeTypeLists[15]; // 0x9C
    Selection m_awakeSobList; // 0x3A8
    Selection m_sleepingTypeLists[15]; // 0x3DC
    Selection m_sleepingSobList; // 0x6E8
    Selection m_newbornList; // 0x71C
    Selection m_nonDeterministicNewbornList; // 0x750
    Selection m_zombieList; // 0x784
    std::list<Sob *,std::allocator<Sob *> > m_toBecomeZombies; // 0x7B8
    std::vector<Sob *,std::allocator<Sob *> > m_newSleepers; // 0x7C0
    std::map<unsigned int,StrikeGroup *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,StrikeGroup *> > > m_strikeGroups; // 0x7CC
    unsigned __int32 m_curStrikeGroupID; // 0x7D4
    std::smallvector<FocusPoint *,4,std::allocator<FocusPoint *> > m_focusPoints; // 0x7D8
    std::list<WeaponFireEvent *,std::allocator<WeaponFireEvent *> > m_weaponFireEvents; // 0x7F8
    Timer *m_pTimer; // 0x800
    float m_timeDelta; // 0x804
    float m_totalTime; // 0x808
    unsigned __int32 m_frameCount; // 0x80C
    SOBGroupManager m_SOBGroupManager; // 0x810
    HyperspaceManager m_HyperspaceManager; // 0x838
    EventPointerManager *m_eventPointerManager; // 0x850
    bool m_isPaused; // 0x854
    bool m_nisPaused; // 0x855
    bool m_deferredPause; // 0x856
    bool m_bSensorsOn; // 0x857
    bool m_isSkipping; // 0x858
    bool m_canSkip; // 0x859
    UnitCaps m_unitCaps; // 0x85C
    PathList m_aiPaths; // 0x878
    std::map<unsigned int,Squadron *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,Squadron *> > > m_squadronIDMap; // 0x884
    unsigned __int32 m_curSquadronID; // 0x88C
    float m_speedMultiple; // 0x890
    bool m_speedTurboEnable; // 0x894
    float m_speedCounter; // 0x898
    float m_pauseWithSpeedTimerStep; // 0x89C
    float m_pauseWithSpeedIncrement; // 0x8A0
    boost::scoped_ptr<Timer> m_pauseWithSpeedStartTime; // 0x8A4
    unsigned __int32 m_pauseWithSpeedCounter; // 0x8A8
    float m_pauseWithSpeedRatio; // 0x8AC
    vector3 m_worldBoundsOrigin; // 0x8B0
    vector3 m_worldBoundsInner; // 0x8BC
    vector3 m_worldBoundsOuter; // 0x8C8
    bool m_doAvoidance; // 0x8D4
    std::auto_ptr<Collision::Span<Sob> > m_avoidanceTree; // 0x8D8
    std::auto_ptr<Collision::Span<Sob> > m_collisionTree; // 0x8DC
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_soundSubtitlepath; // 0x8E0
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_soundDefaultMusic; // 0x8F8
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_soundPlayingMusic; // 0x910
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_soundActorName; // 0x928
    __int32 m_soundPlayingType; // 0x940
    bool m_soundIntelEvent; // 0x944
    bool m_soundSpeechEnable; // 0x945
    float m_fps; // 0x948
    std::vector<SubtitleCounter *,std::allocator<SubtitleCounter *> > m_subtitleCounters; // 0x94C
public:
    _inline UnitCaps const &GetUnitCaps() const;
    typedef Collision::Span<Sob> AvoidanceTree;
    typedef Collision::Span<Sob> CollisionTree;
    _inline Collision::Span<Sob> *GetAvoidanceTree();
    _inline Collision::Span<Sob> *GetCollisionTree();
    _inline void SetAvoidanceActive(bool);
    void SoundSetSubtitlePath(char const *);
    _inline char const *SoundGetSubtitlePath() const;
    void SoundSetDefaultMusic(char const *);
    void SoundMusicPlayType(char const *, __int32);
    void SoundSetMuteActor(char const *);
    void SoundIntelEvent(bool);
    void SoundSpeechEnable(bool);
    void SoundSFXPlay3D(char const *, vector3);
    _inline float getFPS() const;
    void AddSubtitleCounter(SubtitleCounter *);
    void EraseSubtitleCounters();
    void LoadCorrectUnitCaps();
    typedef std::vector<SubtitleCounter *,std::allocator<SubtitleCounter *> > SubtitleCounterContainer;
    Universe &operator=(Universe &); /* compiler_generated() */
};
static_assert(sizeof(Universe) == 2392, "Invalid Universe size");

class Universe :
    public Saveable
{
public:
    static bool Startup();
    static bool Shutdown();
    static bool Save(SaveGameData *saveGameData, SaveType saveType);
    static bool Restore(SaveGameData *saveGameData);
    typedef std::map<unsigned int,StrikeGroup *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,StrikeGroup *> > > StrikeGroupList;
    typedef std::smallvector<FocusPoint *,4,std::allocator<FocusPoint *> > FocusPointContainer;
    typedef std::list<WeaponFireEvent *,std::allocator<WeaponFireEvent *> > WeaponFireEventContainer;
    Universe(Universe &); /* compiler_generated() */
    Universe();
    virtual ~Universe() override;
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline char const *saveToken() override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    void defaultSettings();
    static void saveSquadronIDMap(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void restoreSquadronIDMap(void *objectPtr, SaveGameData *saveGameData);
    static void saveStrikeGroups(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void restoreStrikeGroups(void *objectPtr, SaveGameData *saveGameData);
    static void saveFocusPoints(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void restoreFocusPoints(void *objectPtr, SaveGameData *saveGameData);
    void AddMissingSaveObjects();
    void simulate();
    void spliceNewbornsForLevelStart();
    void addAwakeSob(Sob *);
    void addSleepingSob(Sob *);
    void rouseSob(Sob *);
    void anesthetizeSob(Sob *);
    void addToNewbornList(Sob *);
    void addToZombieList(Sob *);
    void makeZombies();
    Squadron *findSquadron(unsigned __int32) const;
    void removeSquadron(Squadron *);
    unsigned __int32 getNumberOfSquadrons() const;
    _inline std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,Squadron *> > > > getSquadronListBegin();
    _inline std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,Squadron *> > > > getSquadronListEnd();
    StrikeGroup *findStrikeGroup(unsigned __int32) const;
    _inline std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,StrikeGroup *> > > > getStrikeGroupListBegin();
    _inline std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,StrikeGroup *> > > > getStrikeGroupListEnd();
    void addStrikeGroup(StrikeGroup *);
    float getTotalTime() const;
    float getTimeDelta() const;
    _inline void setFrameCount(unsigned __int32);
    _inline unsigned __int32 getFrameCount() const;
    float multiplySpeed(float);
    void setSpeedMultiple(float);
    __int32 getSpeedRepetitions();
    Selection const &getAwakeSobs() const;
    Selection const &getAwakeSobsOfType(SobType) const;
    Selection &getSleepingSobs();
    Selection &getSleepingSobsOfType(SobType);
    Selection &getZombieList();
    Selection &getNewbornList();
    Selection &getNonDeterministicNewbornList();
    std::vector<Sob *,std::allocator<Sob *> > const &getNewSleepers() const;
    void registerObserverOfSobsOfType(SobType, Selection::Observer *);
    void removeObserverOfSobsOfType(SobType, Selection::Observer *);
    _inline unsigned __int32 getNumPlayers() const;
    Player *getCurrentPlayer();
    Player const *getPlayer(__int32) const;
    Player *getPlayer(__int32);
    _inline Player *getNeutralPlayer();
    void addPlayer(Player *);
    void addNeutralPlayer(Player *);
    unsigned __int32 getNumConnections(PlayerConnectionStatus) const;
    void preRemoveEmptyPlayers();
    void switchCurrentPlayer();
    _inline WaypointManager &getWaypointManager();
    _inline SOBGroupManager &getSOBGroupManager();
    _inline HyperspaceManager &getHyperspaceManager();
    _inline PathList &getAIPaths();
    _inline EventPointerManager &getEventPointerManager();
    void pauseUniverse(bool);
    _inline bool isPaused() const;
    void nisPauseUniverse(bool);
    _inline bool isPausedByNIS() const;
    void handleDeferredPause();
    void setWorldBoundsInner(vector3 const &, vector3 const &);
    void setWorldBoundsOuter(vector3 const &, vector3 const &);
    _inline vector3 const &getWorldBoundsOrigin();
    _inline vector3 const &getWorldBoundsInner();
    _inline vector3 const &getWorldBoundsOuter();
    bool clipToWorldBounds(vector3 const &, vector3 &);
    bool clipToWorldBoundsInner(vector3 &);
    bool clipToWorldBoundsOuter(vector3 &);
    bool requestSobsWithinRadius(Selection &, unsigned __int32, unsigned __int32, vector3 const &, float, __int32, bool) const;
private:
    void filterSobsWithinRadius(Selection const &, Selection &, unsigned __int32, vector3 const &, float, __int32, bool) const;
public:
    void hideByFilter(bool (*)(Sob *), bool);
    void analCheck();
    bool Query(Collision::Sphere const &, unsigned __int32, std::vector<Sob *,std::allocator<Sob *> > &) const;
    void FindEmptySpace(Collision::Sphere const &, vector3 &);
    _inline std::smallvector<FocusPoint *,4,std::allocator<FocusPoint *> > &GetFocusPoints();
    _inline std::list<WeaponFireEvent *,std::allocator<WeaponFireEvent *> > &GetWeaponFireEvents();
    WeaponFireEvent *FindWeaponFireEvent(SobID const &, SobID const &, char const *);
    _inline bool isTurboEnabled() const;
    float GetSlowDownSpeed() const;
    _inline bool IsInSlowDown() const;
    void SetSlowDownSpeed(float, float);
    void UpdateUniversePause();
    _inline void SetIsSkipping(bool);
    _inline bool GetIsSkipping() const;
    _inline void SetCanSkip(bool);
    _inline bool GetCanSkip() const;
    void AllocateEventPointerManager();
private:
    void addSquadron(Squadron *);
    void updateMultipliersAndAbilities(float);
    void updatePhysics(float);
    void updateResources(float);
    void updateDustClouds(float);
    void updateNebula(float);
    void updateMissiles(float);
    void updateWeapons(float);
    void updateWeaponFire(float);
    void updateCollision(float);
    void updateSobCollisions();
    void updateWeaponFireCollisions();
    void updateAvoidanceCollisions();
    void ChangeSpeed(float);
    void profileFrame();
    void UpdateSquadrons(float);
    void UpdateStrikeGroups(float);
    void spliceNewbornList();
    void deleteZombieList();
    void freeLists();
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    UniverseClientData m_clientData; // 0x4
    std::vector<Player *,std::allocator<Player *> > m_players; // 0x8C
    Player *m_neutralPlayer; // 0x98
    Selection m_awakeTypeLists[15]; // 0x9C
    Selection m_awakeSobList; // 0x3A8
    Selection m_sleepingTypeLists[15]; // 0x3DC
    Selection m_sleepingSobList; // 0x6E8
    Selection m_newbornList; // 0x71C
    Selection m_nonDeterministicNewbornList; // 0x750
    Selection m_zombieList; // 0x784
    std::list<Sob *,std::allocator<Sob *> > m_toBecomeZombies; // 0x7B8
    std::vector<Sob *,std::allocator<Sob *> > m_newSleepers; // 0x7C0
    std::map<unsigned int,StrikeGroup *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,StrikeGroup *> > > m_strikeGroups; // 0x7CC
    unsigned __int32 m_curStrikeGroupID; // 0x7D4
    std::smallvector<FocusPoint *,4,std::allocator<FocusPoint *> > m_focusPoints; // 0x7D8
    std::list<WeaponFireEvent *,std::allocator<WeaponFireEvent *> > m_weaponFireEvents; // 0x7F8
    Timer *m_pTimer; // 0x800
    float m_timeDelta; // 0x804
    float m_totalTime; // 0x808
    unsigned __int32 m_frameCount; // 0x80C
    SOBGroupManager m_SOBGroupManager; // 0x810
    HyperspaceManager m_HyperspaceManager; // 0x838
    EventPointerManager *m_eventPointerManager; // 0x850
    bool m_isPaused; // 0x854
    bool m_nisPaused; // 0x855
    bool m_deferredPause; // 0x856
    bool m_bSensorsOn; // 0x857
    bool m_isSkipping; // 0x858
    bool m_canSkip; // 0x859
    UnitCaps m_unitCaps; // 0x85C
    PathList m_aiPaths; // 0x878
    std::map<unsigned int,Squadron *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,Squadron *> > > m_squadronIDMap; // 0x884
    unsigned __int32 m_curSquadronID; // 0x88C
    float m_speedMultiple; // 0x890
    bool m_speedTurboEnable; // 0x894
    float m_speedCounter; // 0x898
    float m_pauseWithSpeedTimerStep; // 0x89C
    float m_pauseWithSpeedIncrement; // 0x8A0
    boost::scoped_ptr<Timer> m_pauseWithSpeedStartTime; // 0x8A4
    unsigned __int32 m_pauseWithSpeedCounter; // 0x8A8
    float m_pauseWithSpeedRatio; // 0x8AC
    vector3 m_worldBoundsOrigin; // 0x8B0
    vector3 m_worldBoundsInner; // 0x8BC
    vector3 m_worldBoundsOuter; // 0x8C8
    bool m_doAvoidance; // 0x8D4
    std::auto_ptr<Collision::Span<Sob> > m_avoidanceTree; // 0x8D8
    std::auto_ptr<Collision::Span<Sob> > m_collisionTree; // 0x8DC
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_soundSubtitlepath; // 0x8E0
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_soundDefaultMusic; // 0x8F8
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_soundPlayingMusic; // 0x910
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_soundActorName; // 0x928
    __int32 m_soundPlayingType; // 0x940
    bool m_soundIntelEvent; // 0x944
    bool m_soundSpeechEnable; // 0x945
    float m_fps; // 0x948
    std::vector<SubtitleCounter *,std::allocator<SubtitleCounter *> > m_subtitleCounters; // 0x94C
public:
    _inline UnitCaps const &GetUnitCaps() const;
    typedef Collision::Span<Sob> AvoidanceTree;
    typedef Collision::Span<Sob> CollisionTree;
    _inline Collision::Span<Sob> *GetAvoidanceTree();
    _inline Collision::Span<Sob> *GetCollisionTree();
    _inline void SetAvoidanceActive(bool);
    void SoundSetSubtitlePath(char const *);
    _inline char const *SoundGetSubtitlePath() const;
    void SoundSetDefaultMusic(char const *);
    void SoundMusicPlayType(char const *, __int32);
    void SoundSetMuteActor(char const *);
    void SoundIntelEvent(bool);
    void SoundSpeechEnable(bool);
    void SoundSFXPlay3D(char const *, vector3);
    _inline float getFPS() const;
    void AddSubtitleCounter(SubtitleCounter *);
    void EraseSubtitleCounters();
    void LoadCorrectUnitCaps();
    typedef std::vector<SubtitleCounter *,std::allocator<SubtitleCounter *> > SubtitleCounterContainer;
    Universe &operator=(Universe &); /* compiler_generated() */
};
static_assert(sizeof(Universe) == 2392, "Invalid Universe size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline char const *UniverseClientData::saveToken() // 0x6508CC
{
    mangled_assert("?saveToken@UniverseClientData@@UAEPBDXZ");
    todo("implement");
}

_inline bool UniverseClientData::isDeterministic() // 0x64FD5B
{
    mangled_assert("?isDeterministic@UniverseClientData@@UAE_NXZ");
    todo("implement");
}

_inline char const *Universe::saveToken() // 0x6508C6
{
    mangled_assert("?saveToken@Universe@@UAEPBDXZ");
    todo("implement");
}

_inline bool Universe::isDeterministic() // 0x64FD58
{
    mangled_assert("?isDeterministic@Universe@@UAE_NXZ");
    todo("implement");
}

_inline std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,Squadron *> > > > Universe::getSquadronListBegin() // 0x45A892
{
    mangled_assert("?getSquadronListBegin@Universe@@QAE?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIPAVSquadron@@@std@@@std@@@std@@@std@@XZ");
    todo("implement");
}

_inline std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,Squadron *> > > > Universe::getSquadronListEnd() // 0x45A8A3
{
    mangled_assert("?getSquadronListEnd@Universe@@QAE?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIPAVSquadron@@@std@@@std@@@std@@@std@@XZ");
    todo("implement");
}

_inline std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,StrikeGroup *> > > > Universe::getStrikeGroupListBegin() // 0x6159BF
{
    mangled_assert("?getStrikeGroupListBegin@Universe@@QAE?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIPAVStrikeGroup@@@std@@@std@@@std@@@std@@XZ");
    todo("implement");
}

_inline std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,StrikeGroup *> > > > Universe::getStrikeGroupListEnd() // 0x6159D0
{
    mangled_assert("?getStrikeGroupListEnd@Universe@@QAE?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIPAVStrikeGroup@@@std@@@std@@@std@@@std@@XZ");
    todo("implement");
}

_inline void Universe::setFrameCount(unsigned __int32) // 0x4643C4
{
    mangled_assert("?setFrameCount@Universe@@QAEXI@Z");
    todo("implement");
}

_inline unsigned __int32 Universe::getFrameCount() const // 0x463A0F
{
    mangled_assert("?getFrameCount@Universe@@QBEIXZ");
    todo("implement");
}

_inline unsigned __int32 Universe::getNumPlayers() const // 0x454B16
{
    mangled_assert("?getNumPlayers@Universe@@QBEIXZ");
    todo("implement");
}

_inline Player *Universe::getNeutralPlayer() // 0x6315A7
{
    mangled_assert("?getNeutralPlayer@Universe@@QAEPAVPlayer@@XZ");
    todo("implement");
}

_inline WaypointManager &Universe::getWaypointManager() // 0x454B26
{
    mangled_assert("?getWaypointManager@Universe@@QAEAAVWaypointManager@@XZ");
    todo("implement");
}

_inline SOBGroupManager &Universe::getSOBGroupManager() // 0x5447BF
{
    mangled_assert("?getSOBGroupManager@Universe@@QAEAAVSOBGroupManager@@XZ");
    todo("implement");
}

_inline HyperspaceManager &Universe::getHyperspaceManager() // 0x48C34F
{
    mangled_assert("?getHyperspaceManager@Universe@@QAEAAVHyperspaceManager@@XZ");
    todo("implement");
}

_inline PathList &Universe::getAIPaths() // 0x5C9F08
{
    mangled_assert("?getAIPaths@Universe@@QAEAAVPathList@@XZ");
    todo("implement");
}

_inline EventPointerManager &Universe::getEventPointerManager() // 0x45A827
{
    mangled_assert("?getEventPointerManager@Universe@@QAEAAVEventPointerManager@@XZ");
    todo("implement");
}

_inline bool Universe::isPaused() const // 0x450981
{
    mangled_assert("?isPaused@Universe@@QBE_NXZ");
    todo("implement");
}

_inline bool Universe::isPausedByNIS() const // 0x54BE1D
{
    mangled_assert("?isPausedByNIS@Universe@@QBE_NXZ");
    todo("implement");
}

_inline vector3 const &Universe::getWorldBoundsOrigin() // 0x5C9F0F
{
    mangled_assert("?getWorldBoundsOrigin@Universe@@QAEABVvector3@@XZ");
    todo("implement");
}

_inline vector3 const &Universe::getWorldBoundsInner() // 0x636F22
{
    mangled_assert("?getWorldBoundsInner@Universe@@QAEABVvector3@@XZ");
    todo("implement");
}

_inline vector3 const &Universe::getWorldBoundsOuter() // 0x4DF389
{
    mangled_assert("?getWorldBoundsOuter@Universe@@QAEABVvector3@@XZ");
    todo("implement");
}

_inline std::smallvector<FocusPoint *,4,std::allocator<FocusPoint *> > &Universe::GetFocusPoints() // 0x4DD02B
{
    mangled_assert("?GetFocusPoints@Universe@@QAEAAV?$smallvector@PAVFocusPoint@@$03V?$allocator@PAVFocusPoint@@@std@@@std@@XZ");
    todo("implement");
}

_inline std::list<WeaponFireEvent *,std::allocator<WeaponFireEvent *> > &Universe::GetWeaponFireEvents() // 0x4A9668
{
    mangled_assert("?GetWeaponFireEvents@Universe@@QAEAAV?$list@PAVWeaponFireEvent@@V?$allocator@PAVWeaponFireEvent@@@std@@@std@@XZ");
    todo("implement");
}

_inline bool Universe::isTurboEnabled() const // 0x450992
{
    mangled_assert("?isTurboEnabled@Universe@@QBE_NXZ");
    todo("implement");
}

_inline bool Universe::IsInSlowDown() const // 0x4F95C5
{
    mangled_assert("?IsInSlowDown@Universe@@QBE_NXZ");
    todo("implement");
}

_inline void Universe::SetIsSkipping(bool) // 0x453730
{
    mangled_assert("?SetIsSkipping@Universe@@QAEX_N@Z");
    todo("implement");
}

_inline bool Universe::GetIsSkipping() const // 0x452AD1
{
    mangled_assert("?GetIsSkipping@Universe@@QBE_NXZ");
    todo("implement");
}

_inline void Universe::SetCanSkip(bool) // 0x716048
{
    mangled_assert("?SetCanSkip@Universe@@QAEX_N@Z");
    todo("implement");
}

_inline bool Universe::GetCanSkip() const // 0x452ACA
{
    mangled_assert("?GetCanSkip@Universe@@QBE_NXZ");
    todo("implement");
}

_inline UnitCaps const &Universe::GetUnitCaps() const // 0x52B8BA
{
    mangled_assert("?GetUnitCaps@Universe@@QBEABVUnitCaps@@XZ");
    todo("implement");
}

_inline Collision::Span<Sob> *Universe::GetAvoidanceTree() // 0x477BFB
{
    mangled_assert("?GetAvoidanceTree@Universe@@QAEPAV?$Span@VSob@@@Collision@@XZ");
    todo("implement");
}

_inline Collision::Span<Sob> *Universe::GetCollisionTree() // 0x477C08
{
    mangled_assert("?GetCollisionTree@Universe@@QAEPAV?$Span@VSob@@@Collision@@XZ");
    todo("implement");
}

_inline void Universe::SetAvoidanceActive(bool) // 0x71603B
{
    mangled_assert("?SetAvoidanceActive@Universe@@QAEX_N@Z");
    todo("implement");
}

_inline char const *Universe::SoundGetSubtitlePath() const // 0x591C83
{
    mangled_assert("?SoundGetSubtitlePath@Universe@@QBEPBDXZ");
    todo("implement");
}

_inline float Universe::getFPS() const // 0x5F21AA
{
    mangled_assert("?getFPS@Universe@@QBEMXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __UNIVERSE_H__
#endif
