#if 0
#ifndef __SHIPHOLD_H__
#define __SHIPHOLD_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum AutoLaunchSetting
{
    ShipHoldLaunch = 0,
    ShipHoldStayDockedUpToLimit,
    ShipHoldStayDockedAlways,
};

/* ---------- definitions */

class ShipHoldStatic
{
public:
    ShipHoldStatic(ShipHoldStatic const &); /* compiler_generated() */
    ShipHoldStatic();
    ~ShipHoldStatic();
    static __int32 handle_DockingChunk(IFF *iff, IFFChunk *chunk, void *user0, void *user1);
    void copyDockingChunk(ShipHoldStatic *);
    float getRepairRateFor(unsigned __int32) const;
    _inline float getResourceUnloadingRate() const;
    _inline unsigned __int32 getNumberOfParkingSpots() const;
    _inline DockPathStatic *getDockPathStatic(unsigned __int32) const;
    _inline unsigned __int32 getNumberOfDockingPaths() const;
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &getRallyPointEffectName() const;
    _inline bool canStayInHold(__int32) const;
protected:
    _inline void addStayInHoldFamily(__int32);
    _inline void resetFamily();
    float m_unloadResourcesRate; // 0x0
    unsigned __int32 m_numParkingSpots; // 0x4
    std::vector<DockPathStatic *,std::allocator<DockPathStatic *> > m_dockPathsStatic; // 0x8
    float m_repairRate; // 0x14
    std::map<unsigned int,float,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,float> > > m_repairRatesFromFamilyIndex; // 0x18
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_rallyPointEffectName; // 0x20
    std::set<unsigned int,std::less<unsigned int>,std::allocator<unsigned int> > m_familiesThatCanDock; // 0x38
public:
    ShipHoldStatic &operator=(ShipHoldStatic const &); /* compiler_generated() */
};
static_assert(sizeof(ShipHoldStatic) == 64, "Invalid ShipHoldStatic size");

class ShipHold :
    public SaveObject
{
public:
    ShipHold(ShipHold const &); /* compiler_generated() */
    ShipHold(SaveGameData *);
    ShipHold(Ship *, unsigned __int32);
    virtual ~ShipHold() override;
    void update(float);
    bool shipHoldCanAcceptNewDockLaunchRequests() const;
    bool shipHoldHasNoCurrentDockLaunchActivity() const;
    void addToHold(Squadron *);
    void registerDockingSquadron(Squadron *);
    _inline void registerSquadronInterestedInDocking(Squadron *);
    _inline SquadronList const &getShipsInterestedInDocking() const;
    void removeLaunchingSquadronFromHold(Squadron *);
    void changePlayerOwner(Player *);
    unsigned __int32 getNumPathsFor(Sob const *, bool) const;
    _inline unsigned __int32 getNumDockLaunchPaths() const;
    DockPath *getDockLaunchPath(unsigned __int32) const;
    unsigned __int32 getNumberOfSleepingShipsHeld() const;
    _inline SquadronList const &getSquadsInHold() const;
    unsigned __int32 getParkingUsage() const;
    bool canHoldShipsInside() const;
    _inline AutoLaunchSetting getAutoLaunch() const;
    _inline void setAutoLaunch(AutoLaunchSetting);
    Squadron *createSquadron(char const *, unsigned __int32);
    bool UIChangedSinceLastView();
    void setRallyPoint(vector3 const &);
    vector3 const &getRallyPoint() const;
    vector3 const &getRallyPointHeading() const;
    void setRallyObject(SobID const &);
    Sob const *getRallyObject() const;
    void displayRallyPoint();
    void instantlyAndDestructivelyDockSquadron(Squadron *, bool);
    ShipHoldStatic const *getShipHoldStatic() const;
    void NotVisibleAnymore(Squadron *);
    _inline std::list<Squadron *,std::allocator<Squadron *> > const &GetUIShipList() const;
    _inline AutoLaunchSetting getUIAutoLaunch() const;
    _inline void setUIAutoLaunch(AutoLaunchSetting);
private:
    void ShipHoldChanged();
    void refreshShipsDocking();
    void forceDock(Squadron *, unsigned __int32, bool);
    void unloadResources(Squadron *, float);
    void repairSquadron(Squadron *, float);
    void hyperspaceInSquadron(Squadron *);
    DockPathStatic *getPathFor(Squadron *, PathType, bool) const;
    class Data;
    boost::scoped_ptr<ShipHold::Data> m_pimpl; // 0xC
    Ship *m_myShip; // 0x10
    SquadronList m_squadsInHold; // 0x14
    SquadronList m_squadsDocking; // 0x34
    SquadronList m_squadsInterestedInDocking; // 0x54
    std::vector<DockPath *,std::allocator<DockPath *> > m_dockPaths; // 0x74
    AutoLaunchSetting m_autoLaunch; // 0x80
    vector3 m_rallyPoint; // 0x84
    vector3 m_rallyPointHeading; // 0x90
    SobID m_rallyObject; // 0x9C
    bool m_bChangedSinceLastUIView; // 0xA8
    std::list<Squadron *,std::allocator<Squadron *> > m_visibleList; // 0xAC
    AutoLaunchSetting m_UIAutoLaunch; // 0xB4
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    ShipHold &operator=(ShipHold const &); /* compiler_generated() */
};
static_assert(sizeof(ShipHold) == 184, "Invalid ShipHold size");

class ShipHold :
    public SaveObject
{
public:
    ShipHold(ShipHold const &); /* compiler_generated() */
    ShipHold(SaveGameData *);
    ShipHold(Ship *, unsigned __int32);
    virtual ~ShipHold() override;
    void update(float);
    bool shipHoldCanAcceptNewDockLaunchRequests() const;
    bool shipHoldHasNoCurrentDockLaunchActivity() const;
    void addToHold(Squadron *);
    void registerDockingSquadron(Squadron *);
    _inline void registerSquadronInterestedInDocking(Squadron *);
    _inline SquadronList const &getShipsInterestedInDocking() const;
    void removeLaunchingSquadronFromHold(Squadron *);
    void changePlayerOwner(Player *);
    unsigned __int32 getNumPathsFor(Sob const *, bool) const;
    _inline unsigned __int32 getNumDockLaunchPaths() const;
    DockPath *getDockLaunchPath(unsigned __int32) const;
    unsigned __int32 getNumberOfSleepingShipsHeld() const;
    _inline SquadronList const &getSquadsInHold() const;
    unsigned __int32 getParkingUsage() const;
    bool canHoldShipsInside() const;
    _inline AutoLaunchSetting getAutoLaunch() const;
    _inline void setAutoLaunch(AutoLaunchSetting);
    Squadron *createSquadron(char const *, unsigned __int32);
    bool UIChangedSinceLastView();
    void setRallyPoint(vector3 const &);
    vector3 const &getRallyPoint() const;
    vector3 const &getRallyPointHeading() const;
    void setRallyObject(SobID const &);
    Sob const *getRallyObject() const;
    void displayRallyPoint();
    void instantlyAndDestructivelyDockSquadron(Squadron *, bool);
    ShipHoldStatic const *getShipHoldStatic() const;
    void NotVisibleAnymore(Squadron *);
    _inline std::list<Squadron *,std::allocator<Squadron *> > const &GetUIShipList() const;
    _inline AutoLaunchSetting getUIAutoLaunch() const;
    _inline void setUIAutoLaunch(AutoLaunchSetting);
private:
    void ShipHoldChanged();
    void refreshShipsDocking();
    void forceDock(Squadron *, unsigned __int32, bool);
    void unloadResources(Squadron *, float);
    void repairSquadron(Squadron *, float);
    void hyperspaceInSquadron(Squadron *);
    DockPathStatic *getPathFor(Squadron *, PathType, bool) const;
    class Data;
    boost::scoped_ptr<ShipHold::Data> m_pimpl; // 0xC
    Ship *m_myShip; // 0x10
    SquadronList m_squadsInHold; // 0x14
    SquadronList m_squadsDocking; // 0x34
    SquadronList m_squadsInterestedInDocking; // 0x54
    std::vector<DockPath *,std::allocator<DockPath *> > m_dockPaths; // 0x74
    AutoLaunchSetting m_autoLaunch; // 0x80
    vector3 m_rallyPoint; // 0x84
    vector3 m_rallyPointHeading; // 0x90
    SobID m_rallyObject; // 0x9C
    bool m_bChangedSinceLastUIView; // 0xA8
    std::list<Squadron *,std::allocator<Squadron *> > m_visibleList; // 0xAC
    AutoLaunchSetting m_UIAutoLaunch; // 0xB4
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    ShipHold &operator=(ShipHold const &); /* compiler_generated() */
};
static_assert(sizeof(ShipHold) == 184, "Invalid ShipHold size");

class ShipHold :
    public SaveObject
{
public:
    ShipHold(ShipHold const &); /* compiler_generated() */
    ShipHold(SaveGameData *);
    ShipHold(Ship *, unsigned __int32);
    virtual ~ShipHold() override;
    void update(float);
    bool shipHoldCanAcceptNewDockLaunchRequests() const;
    bool shipHoldHasNoCurrentDockLaunchActivity() const;
    void addToHold(Squadron *);
    void registerDockingSquadron(Squadron *);
    _inline void registerSquadronInterestedInDocking(Squadron *);
    _inline SquadronList const &getShipsInterestedInDocking() const;
    void removeLaunchingSquadronFromHold(Squadron *);
    void changePlayerOwner(Player *);
    unsigned __int32 getNumPathsFor(Sob const *, bool) const;
    _inline unsigned __int32 getNumDockLaunchPaths() const;
    DockPath *getDockLaunchPath(unsigned __int32) const;
    unsigned __int32 getNumberOfSleepingShipsHeld() const;
    _inline SquadronList const &getSquadsInHold() const;
    unsigned __int32 getParkingUsage() const;
    bool canHoldShipsInside() const;
    _inline AutoLaunchSetting getAutoLaunch() const;
    _inline void setAutoLaunch(AutoLaunchSetting);
    Squadron *createSquadron(char const *, unsigned __int32);
    bool UIChangedSinceLastView();
    void setRallyPoint(vector3 const &);
    vector3 const &getRallyPoint() const;
    vector3 const &getRallyPointHeading() const;
    void setRallyObject(SobID const &);
    Sob const *getRallyObject() const;
    void displayRallyPoint();
    void instantlyAndDestructivelyDockSquadron(Squadron *, bool);
    ShipHoldStatic const *getShipHoldStatic() const;
    void NotVisibleAnymore(Squadron *);
    _inline std::list<Squadron *,std::allocator<Squadron *> > const &GetUIShipList() const;
    _inline AutoLaunchSetting getUIAutoLaunch() const;
    _inline void setUIAutoLaunch(AutoLaunchSetting);
private:
    void ShipHoldChanged();
    void refreshShipsDocking();
    void forceDock(Squadron *, unsigned __int32, bool);
    void unloadResources(Squadron *, float);
    void repairSquadron(Squadron *, float);
    void hyperspaceInSquadron(Squadron *);
    DockPathStatic *getPathFor(Squadron *, PathType, bool) const;
    class Data;
    boost::scoped_ptr<ShipHold::Data> m_pimpl; // 0xC
    Ship *m_myShip; // 0x10
    SquadronList m_squadsInHold; // 0x14
    SquadronList m_squadsDocking; // 0x34
    SquadronList m_squadsInterestedInDocking; // 0x54
    std::vector<DockPath *,std::allocator<DockPath *> > m_dockPaths; // 0x74
    AutoLaunchSetting m_autoLaunch; // 0x80
    vector3 m_rallyPoint; // 0x84
    vector3 m_rallyPointHeading; // 0x90
    SobID m_rallyObject; // 0x9C
    bool m_bChangedSinceLastUIView; // 0xA8
    std::list<Squadron *,std::allocator<Squadron *> > m_visibleList; // 0xAC
    AutoLaunchSetting m_UIAutoLaunch; // 0xB4
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    ShipHold &operator=(ShipHold const &); /* compiler_generated() */
};
static_assert(sizeof(ShipHold) == 184, "Invalid ShipHold size");

class ShipHold :
    public SaveObject
{
public:
    ShipHold(ShipHold const &); /* compiler_generated() */
    ShipHold(SaveGameData *);
    ShipHold(Ship *, unsigned __int32);
    virtual ~ShipHold() override;
    void update(float);
    bool shipHoldCanAcceptNewDockLaunchRequests() const;
    bool shipHoldHasNoCurrentDockLaunchActivity() const;
    void addToHold(Squadron *);
    void registerDockingSquadron(Squadron *);
    _inline void registerSquadronInterestedInDocking(Squadron *);
    _inline SquadronList const &getShipsInterestedInDocking() const;
    void removeLaunchingSquadronFromHold(Squadron *);
    void changePlayerOwner(Player *);
    unsigned __int32 getNumPathsFor(Sob const *, bool) const;
    _inline unsigned __int32 getNumDockLaunchPaths() const;
    DockPath *getDockLaunchPath(unsigned __int32) const;
    unsigned __int32 getNumberOfSleepingShipsHeld() const;
    _inline SquadronList const &getSquadsInHold() const;
    unsigned __int32 getParkingUsage() const;
    bool canHoldShipsInside() const;
    _inline AutoLaunchSetting getAutoLaunch() const;
    _inline void setAutoLaunch(AutoLaunchSetting);
    Squadron *createSquadron(char const *, unsigned __int32);
    bool UIChangedSinceLastView();
    void setRallyPoint(vector3 const &);
    vector3 const &getRallyPoint() const;
    vector3 const &getRallyPointHeading() const;
    void setRallyObject(SobID const &);
    Sob const *getRallyObject() const;
    void displayRallyPoint();
    void instantlyAndDestructivelyDockSquadron(Squadron *, bool);
    ShipHoldStatic const *getShipHoldStatic() const;
    void NotVisibleAnymore(Squadron *);
    _inline std::list<Squadron *,std::allocator<Squadron *> > const &GetUIShipList() const;
    _inline AutoLaunchSetting getUIAutoLaunch() const;
    _inline void setUIAutoLaunch(AutoLaunchSetting);
private:
    void ShipHoldChanged();
    void refreshShipsDocking();
    void forceDock(Squadron *, unsigned __int32, bool);
    void unloadResources(Squadron *, float);
    void repairSquadron(Squadron *, float);
    void hyperspaceInSquadron(Squadron *);
    DockPathStatic *getPathFor(Squadron *, PathType, bool) const;
    class Data;
    boost::scoped_ptr<ShipHold::Data> m_pimpl; // 0xC
    Ship *m_myShip; // 0x10
    SquadronList m_squadsInHold; // 0x14
    SquadronList m_squadsDocking; // 0x34
    SquadronList m_squadsInterestedInDocking; // 0x54
    std::vector<DockPath *,std::allocator<DockPath *> > m_dockPaths; // 0x74
    AutoLaunchSetting m_autoLaunch; // 0x80
    vector3 m_rallyPoint; // 0x84
    vector3 m_rallyPointHeading; // 0x90
    SobID m_rallyObject; // 0x9C
    bool m_bChangedSinceLastUIView; // 0xA8
    std::list<Squadron *,std::allocator<Squadron *> > m_visibleList; // 0xAC
    AutoLaunchSetting m_UIAutoLaunch; // 0xB4
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    ShipHold &operator=(ShipHold const &); /* compiler_generated() */
};
static_assert(sizeof(ShipHold) == 184, "Invalid ShipHold size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline float ShipHoldStatic::getResourceUnloadingRate() const // 0x48CAF5
{
    mangled_assert("?getResourceUnloadingRate@ShipHoldStatic@@QBEMXZ");
    todo("implement");
}

_inline unsigned __int32 ShipHoldStatic::getNumberOfParkingSpots() const // 0x4AE53B
{
    mangled_assert("?getNumberOfParkingSpots@ShipHoldStatic@@QBEIXZ");
    todo("implement");
}

_inline DockPathStatic *ShipHoldStatic::getDockPathStatic(unsigned __int32) const // 0x4AE48B
{
    mangled_assert("?getDockPathStatic@ShipHoldStatic@@QBEPAVDockPathStatic@@I@Z");
    todo("implement");
}

_inline unsigned __int32 ShipHoldStatic::getNumberOfDockingPaths() const // 0x48C887
{
    mangled_assert("?getNumberOfDockingPaths@ShipHoldStatic@@QBEIXZ");
    todo("implement");
}

_inline bool ShipHoldStatic::canStayInHold(__int32) const // 0x4AD9C6
{
    mangled_assert("?canStayInHold@ShipHoldStatic@@QBE_NH@Z");
    todo("implement");
}

_inline void ShipHoldStatic::addStayInHoldFamily(__int32) // 0x4CF0C0
{
    mangled_assert("?addStayInHoldFamily@ShipHoldStatic@@IAEXH@Z");
    todo("implement");
}

_inline void ShipHoldStatic::resetFamily() // 0x4D0044
{
    mangled_assert("?resetFamily@ShipHoldStatic@@IAEXXZ");
    todo("implement");
}

_inline void ShipHold::registerSquadronInterestedInDocking(Squadron *) // 0x69A6BE
{
    mangled_assert("?registerSquadronInterestedInDocking@ShipHold@@QAEXPAVSquadron@@@Z");
    todo("implement");
}

_inline SquadronList const &ShipHold::getShipsInterestedInDocking() const // 0x69A37E
{
    mangled_assert("?getShipsInterestedInDocking@ShipHold@@QBEABVSquadronList@@XZ");
    todo("implement");
}

_inline unsigned __int32 ShipHold::getNumDockLaunchPaths() const // 0x4AE4CE
{
    mangled_assert("?getNumDockLaunchPaths@ShipHold@@QBEIXZ");
    todo("implement");
}

_inline SquadronList const &ShipHold::getSquadsInHold() const // 0x594AF3
{
    mangled_assert("?getSquadsInHold@ShipHold@@QBEABVSquadronList@@XZ");
    todo("implement");
}

_inline AutoLaunchSetting ShipHold::getAutoLaunch() const // 0x695BF1
{
    mangled_assert("?getAutoLaunch@ShipHold@@QBE?AW4AutoLaunchSetting@@XZ");
    todo("implement");
}

_inline void ShipHold::setAutoLaunch(AutoLaunchSetting) // 0x4BB1D1
{
    mangled_assert("?setAutoLaunch@ShipHold@@QAEXW4AutoLaunchSetting@@@Z");
    todo("implement");
}

_inline std::list<Squadron *,std::allocator<Squadron *> > const &ShipHold::GetUIShipList() const // 0x593756
{
    mangled_assert("?GetUIShipList@ShipHold@@QBEABV?$list@PAVSquadron@@V?$allocator@PAVSquadron@@@std@@@std@@XZ");
    todo("implement");
}

_inline AutoLaunchSetting ShipHold::getUIAutoLaunch() const // 0x594AF7
{
    mangled_assert("?getUIAutoLaunch@ShipHold@@QBE?AW4AutoLaunchSetting@@XZ");
    todo("implement");
}

_inline void ShipHold::setUIAutoLaunch(AutoLaunchSetting) // 0x594C16
{
    mangled_assert("?setUIAutoLaunch@ShipHold@@QAEXW4AutoLaunchSetting@@@Z");
    todo("implement");
}

_inline bool ShipHold::isDeterministic() // 0x4AF324
{
    mangled_assert("?isDeterministic@ShipHold@@UAE_NXZ");
    todo("implement");
}

_inline char const *ShipHold::saveToken() // 0x4AFB1A
{
    mangled_assert("?saveToken@ShipHold@@UAEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __SHIPHOLD_H__
#endif
