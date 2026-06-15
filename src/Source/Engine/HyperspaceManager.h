#if 0
#ifndef __HYPERSPACEMANAGER_H__
#define __HYPERSPACEMANAGER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class HyperspaceEffectSettings
{
private:
    float m_effectSize; // 0x0
    float m_effectLead; // 0x4
    float m_clipSize; // 0x8
    static HyperspaceEffectSettings *m_instance;
    bool LoadSettings();
public:
    static _inline HyperspaceEffectSettings *i();
    static void Startup();
    static void Shutdown();
    HyperspaceEffectSettings();
    _inline float GetEffectSizePercent() const;
    _inline float GetEffectLeadPercent() const;
    _inline float GetClipEffectPercent() const;
};
static_assert(sizeof(HyperspaceEffectSettings) == 12, "Invalid HyperspaceEffectSettings size");

class HyperspaceManager :
    public Saveable
{
public:
    HyperspaceManager(HyperspaceManager const &); /* compiler_generated() */
    HyperspaceManager();
    virtual ~HyperspaceManager() override;
    void update(float);
    void interpolateHyperspacingShips();
    unsigned __int32 numberOfShipsInHyperspace() const;
    static float costOfHyperspacingShips(Selection const &ships, vector3 const &startpoint, vector3 const &destination);
    bool canHyperspace(Squadron const &);
    bool canHyperspace(vector3 const &, vector3 const &, vector3 &, Player const *);
    void addInhibitor(SobID const &);
    void removeInhibitor(SobID const &);
    static void stopHyperspaceEffectsFor(Squadron *squad);
    static void playHyperspaceEffectsFor(Squadron *squad, bool const entering);
private:
    void hyperspaceSquadron(Squadron &, float, bool);
protected:
    bool hyperspaceSquadron(Squadron &);
    void hyperspaceOffMap(Squadron &);
    void hyperspaceOnMap(Squadron &);
    void dropOutOfHyperspace(Squadron &);
private:
    void bringSquadronOutOfHyperspace(Squadron &);
    class HyperspaceGroup :
        private Selection::Observer
    {
    public:
        ~HyperspaceGroup();
        HyperspaceGroup(HyperspaceManager::HyperspaceGroup const &); /* compiler_generated() */
        HyperspaceGroup(float, bool, Squadron *, vector3 const &);
        HyperspaceGroup(float, bool, Squadron *);
        void updatePosition();
        void setPosition(vector3 const &);
        void interpolateHyperspacingShips();
        float m_exitTime; // 0x4
        bool m_neverExit; // 0x8
        Squadron *m_squadron; // 0xC
        vector3 m_perFrameMovement; // 0x10
    private:
        virtual void Notify_Insertion(Sob *) override;
        virtual void Notify_Removal(Sob *) override;
    public:
        HyperspaceManager::HyperspaceGroup &operator=(HyperspaceManager::HyperspaceGroup const &); /* compiler_generated() */
    };
    static_assert(sizeof(HyperspaceGroup) == 28, "Invalid HyperspaceGroup size");
    std::list<HyperspaceManager::HyperspaceGroup *,std::allocator<HyperspaceManager::HyperspaceGroup *> > m_shipsInHyperspace; // 0x4
    std::set<SobID,std::less<SobID>,std::allocator<SobID> > m_inhibitors; // 0xC
    unsigned __int32 m_hyperspaceID; // 0x14
    typedef std::set<SobID,std::less<SobID>,std::allocator<SobID> > InhibitorSet;
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    static void saveShipsInHyperspace(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void loadShipsInHyperspace(void *objectPtr, SaveGameData *saveGameData);
    static void saveInhibitors(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void loadInhibitors(void *objectPtr, SaveGameData *saveGameData);
    HyperspaceManager &operator=(HyperspaceManager const &); /* compiler_generated() */
};
static_assert(sizeof(HyperspaceManager) == 24, "Invalid HyperspaceManager size");

class HyperspaceManager :
    public Saveable
{
public:
    HyperspaceManager(HyperspaceManager const &); /* compiler_generated() */
    HyperspaceManager();
    virtual ~HyperspaceManager() override;
    void update(float);
    void interpolateHyperspacingShips();
    unsigned __int32 numberOfShipsInHyperspace() const;
    static float costOfHyperspacingShips(Selection const &ships, vector3 const &startpoint, vector3 const &destination);
    bool canHyperspace(Squadron const &);
    bool canHyperspace(vector3 const &, vector3 const &, vector3 &, Player const *);
    void addInhibitor(SobID const &);
    void removeInhibitor(SobID const &);
    static void stopHyperspaceEffectsFor(Squadron *squad);
    static void playHyperspaceEffectsFor(Squadron *squad, bool const entering);
private:
    void hyperspaceSquadron(Squadron &, float, bool);
protected:
    bool hyperspaceSquadron(Squadron &);
    void hyperspaceOffMap(Squadron &);
    void hyperspaceOnMap(Squadron &);
    void dropOutOfHyperspace(Squadron &);
private:
    void bringSquadronOutOfHyperspace(Squadron &);
    class HyperspaceGroup :
        private Selection::Observer
    {
    public:
        ~HyperspaceGroup();
        HyperspaceGroup(HyperspaceManager::HyperspaceGroup const &); /* compiler_generated() */
        HyperspaceGroup(float, bool, Squadron *, vector3 const &);
        HyperspaceGroup(float, bool, Squadron *);
        void updatePosition();
        void setPosition(vector3 const &);
        void interpolateHyperspacingShips();
        float m_exitTime; // 0x4
        bool m_neverExit; // 0x8
        Squadron *m_squadron; // 0xC
        vector3 m_perFrameMovement; // 0x10
    private:
        virtual void Notify_Insertion(Sob *) override;
        virtual void Notify_Removal(Sob *) override;
    public:
        HyperspaceManager::HyperspaceGroup &operator=(HyperspaceManager::HyperspaceGroup const &); /* compiler_generated() */
    };
    static_assert(sizeof(HyperspaceGroup) == 28, "Invalid HyperspaceGroup size");
    std::list<HyperspaceManager::HyperspaceGroup *,std::allocator<HyperspaceManager::HyperspaceGroup *> > m_shipsInHyperspace; // 0x4
    std::set<SobID,std::less<SobID>,std::allocator<SobID> > m_inhibitors; // 0xC
    unsigned __int32 m_hyperspaceID; // 0x14
    typedef std::set<SobID,std::less<SobID>,std::allocator<SobID> > InhibitorSet;
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    static void saveShipsInHyperspace(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void loadShipsInHyperspace(void *objectPtr, SaveGameData *saveGameData);
    static void saveInhibitors(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void loadInhibitors(void *objectPtr, SaveGameData *saveGameData);
    HyperspaceManager &operator=(HyperspaceManager const &); /* compiler_generated() */
};
static_assert(sizeof(HyperspaceManager) == 24, "Invalid HyperspaceManager size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline HyperspaceEffectSettings *HyperspaceEffectSettings::i() // 0x4955E7
{
    mangled_assert("?i@HyperspaceEffectSettings@@SGPAV1@XZ");
    todo("implement");
}

_inline float HyperspaceEffectSettings::GetEffectSizePercent() const // 0x494493
{
    mangled_assert("?GetEffectSizePercent@HyperspaceEffectSettings@@QBEMXZ");
    todo("implement");
}

_inline float HyperspaceEffectSettings::GetEffectLeadPercent() const // 0x49448F
{
    mangled_assert("?GetEffectLeadPercent@HyperspaceEffectSettings@@QBEMXZ");
    todo("implement");
}

_inline float HyperspaceEffectSettings::GetClipEffectPercent() const // 0x49448B
{
    mangled_assert("?GetClipEffectPercent@HyperspaceEffectSettings@@QBEMXZ");
    todo("implement");
}

_inline bool HyperspaceManager::isDeterministic() // 0x5FA965
{
    mangled_assert("?isDeterministic@HyperspaceManager@@UAE_NXZ");
    todo("implement");
}

_inline char const *HyperspaceManager::saveToken() // 0x5FAC2F
{
    mangled_assert("?saveToken@HyperspaceManager@@UAEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __HYPERSPACEMANAGER_H__
#endif
