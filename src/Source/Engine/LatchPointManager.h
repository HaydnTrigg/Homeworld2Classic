#if 0
#ifndef __LATCHPOINTMANAGER_H__
#define __LATCHPOINTMANAGER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class LatchPointManager :
    public SaveObject,
    private Selection::Observer
{
public:
    LatchPointManager(LatchPointManager const &); /* compiler_generated() */
    LatchPointManager(SaveGameData *);
    LatchPointManager(Ship *, LatchPointManagerStatic *);
    virtual ~LatchPointManager() = 0;
    virtual void update(float);
    bool registerShip(Ship *);
    void unRegisterShip(Ship *);
    std::pair<vector3,matrix3> *getPointFor(Ship *);
    _inline unsigned __int32 numberOfRegisteredShips() const;
    _inline unsigned __int32 capacity() const;
    _inline Selection const &getRegisteredShips() const;
protected:
    virtual LatchPointManagerStatic *getStaticData() = 0;
    _inline Ship *getManagedShip() const;
    void detatchAll();
private:
    virtual void updateList();
    virtual void Notify_Insertion(Sob *) override;
    virtual void Notify_Removal(Sob *) override;
    SobID m_managedShip; // 0x10
    std::vector<Ship *,std::allocator<Ship *> > m_shipSlots; // 0x1C
    Selection m_registeredShips; // 0x28
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    LatchPointManager &operator=(LatchPointManager const &); /* compiler_generated() */
};
static_assert(sizeof(LatchPointManager) == 92, "Invalid LatchPointManager size");

class LatchPointManagerStatic
{
public:
    LatchPointManagerStatic(LatchPointManagerStatic const &); /* compiler_generated() */
    LatchPointManagerStatic();
    ~LatchPointManagerStatic();
    bool loadLatchPoints(ShipStatic *);
protected:
    virtual char const *getPointBaseName() const = 0;
    std::vector<std::pair<vector3,matrix3> *,std::allocator<std::pair<vector3,matrix3> *> > m_Points; // 0x4
public:
    LatchPointManagerStatic &operator=(LatchPointManagerStatic const &); /* compiler_generated() */
};
static_assert(sizeof(LatchPointManagerStatic) == 16, "Invalid LatchPointManagerStatic size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern unsigned __int32 _sub_5356C0(LatchPointManager const *const);
_inline unsigned __int32 LatchPointManager::numberOfRegisteredShips() const // 0x5356C0
{
    mangled_assert("?numberOfRegisteredShips@LatchPointManager@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_5356C0(this);
    return __result;
}

_extern unsigned __int32 _sub_53567E(LatchPointManager const *const);
_inline unsigned __int32 LatchPointManager::capacity() const // 0x53567E
{
    mangled_assert("?capacity@LatchPointManager@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_53567E(this);
    return __result;
}

_extern Selection const &_sub_48469C(LatchPointManager const *const);
_inline Selection const &LatchPointManager::getRegisteredShips() const // 0x48469C
{
    mangled_assert("?getRegisteredShips@LatchPointManager@@QBEABVSelection@@XZ");
    todo("implement");
    Selection const & __result = _sub_48469C(this);
    return __result;
}

_extern Ship *_sub_484662(LatchPointManager const *const);
_inline Ship *LatchPointManager::getManagedShip() const // 0x484662
{
    mangled_assert("?getManagedShip@LatchPointManager@@IBEPAVShip@@XZ");
    todo("implement");
    Ship * __result = _sub_484662(this);
    return __result;
}

_extern bool _sub_4864F6(LatchPointManager *const);
_inline bool LatchPointManager::isDeterministic() // 0x4864F6
{
    mangled_assert("?isDeterministic@LatchPointManager@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_4864F6(this);
    return __result;
}

_extern char const *_sub_48670A(LatchPointManager *const);
_inline char const *LatchPointManager::saveToken() // 0x48670A
{
    mangled_assert("?saveToken@LatchPointManager@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_48670A(this);
    return __result;
}

/* ---------- private code */

#endif // __LATCHPOINTMANAGER_H__
#endif
