#if 0
#ifndef __REPAIRMANAGER_H__
#define __REPAIRMANAGER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class RepairManager :
    public LatchPointManager
{
public:
    RepairManager(RepairManager const &); /* compiler_generated() */
    RepairManager(SaveGameData *);
    RepairManager(Ship *);
    virtual ~RepairManager() override;
    virtual void update(float) override;
    _inline unsigned __int32 numberOfInterestedShips() const;
    void registerInterestedShip(Ship *);
    void unRegisterInterestedShip(Ship *);
    void applySlowDown();
protected:
    virtual LatchPointManagerStatic *getStaticData() override;
private:
    Selection m_interestedShips; // 0x5C
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    RepairManager &operator=(RepairManager const &); /* compiler_generated() */
};
static_assert(sizeof(RepairManager) == 144, "Invalid RepairManager size");

class RepairManagerStatic :
    public LatchPointManagerStatic
{
public:
    RepairManagerStatic(RepairManagerStatic const &); /* compiler_generated() */
    RepairManagerStatic();
    ~RepairManagerStatic();
protected:
    virtual _inline char const *getPointBaseName() const override;
public:
    RepairManagerStatic &operator=(RepairManagerStatic const &); /* compiler_generated() */
};
static_assert(sizeof(RepairManagerStatic) == 16, "Invalid RepairManagerStatic size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline unsigned __int32 RepairManager::numberOfInterestedShips() const // 0x6A182E
{
    mangled_assert("?numberOfInterestedShips@RepairManager@@QBEIXZ");
    todo("implement");
}

_inline bool RepairManager::isDeterministic() // 0x4891B3
{
    mangled_assert("?isDeterministic@RepairManager@@UAE_NXZ");
    todo("implement");
}

_inline char const *RepairManager::saveToken() // 0x489257
{
    mangled_assert("?saveToken@RepairManager@@UAEPBDXZ");
    todo("implement");
}

_inline char const *RepairManagerStatic::getPointBaseName() const // 0x489197
{
    mangled_assert("?getPointBaseName@RepairManagerStatic@@MBEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __REPAIRMANAGER_H__
#endif
