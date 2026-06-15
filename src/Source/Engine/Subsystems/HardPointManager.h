#if 0
#ifndef __HARDPOINTMANAGER_H__
#define __HARDPOINTMANAGER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class HardPointManager :
    public Saveable
{
public:
    HardPointManager(HardPointManager const &); /* compiler_generated() */
    HardPointManager(Ship *);
    virtual ~HardPointManager() override;
    unsigned __int32 getNumberOfFamilyHardpoints(SubSystemFamily) const;
    unsigned __int32 getNumberOfFreeFamilyHardpoints(SubSystemFamily) const;
    unsigned __int32 getNumberOfHardPoints(unsigned __int32) const;
    unsigned __int32 getNumberOfHardPoints() const;
    unsigned __int32 getNumberOfFreeHardPoints(unsigned __int32) const;
    unsigned __int32 getNumberOfOccupiedHardPoints(unsigned __int32) const;
    unsigned __int32 getNumberOfOccupiedHardPointsByGenericType(unsigned __int32) const;
    bool availableSpaceForSubSystem(unsigned __int32);
    SubSystem *buildSubSystem(unsigned __int32);
    void getFreeHardpoints(std::vector<HardPoint *,std::allocator<HardPoint *> > &);
    void RemoveAllSimData();
    void init();
    void update(float);
    void getSubSystems(std::vector<SubSystem *,std::allocator<SubSystem *> > &) const;
    _inline Ship *getOwner();
    Player *getPlayerOwner();
    bool isSubSystemTypePresent(unsigned __int32);
    _inline HardPoint *getHardPoint(unsigned __int32) const;
protected:
    std::vector<HardPoint *,std::allocator<HardPoint *> > m_hardpoints; // 0x4
    Ship *m_owner; // 0x10
    void updateHardPointStatics();
public:
    void defaultSettings();
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    HardPointManager &operator=(HardPointManager const &); /* compiler_generated() */
};
static_assert(sizeof(HardPointManager) == 20, "Invalid HardPointManager size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline Ship *HardPointManager::getOwner() // 0x4EF02B
{
    mangled_assert("?getOwner@HardPointManager@@QAEPAVShip@@XZ");
    todo("implement");
}

_inline HardPoint *HardPointManager::getHardPoint(unsigned __int32) const // 0x48C19F
{
    mangled_assert("?getHardPoint@HardPointManager@@QBEPAVHardPoint@@I@Z");
    todo("implement");
}

_inline bool HardPointManager::isDeterministic() // 0x4EFC54
{
    mangled_assert("?isDeterministic@HardPointManager@@UAE_NXZ");
    todo("implement");
}

_inline char const *HardPointManager::saveToken() // 0x4EFEFC
{
    mangled_assert("?saveToken@HardPointManager@@UAEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __HARDPOINTMANAGER_H__
#endif
