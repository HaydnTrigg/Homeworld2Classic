#if 0
#ifndef __CLOAKMANAGER_H__
#define __CLOAKMANAGER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class CloakManager :
    public SaveObject
{
public:
    CloakManager(CloakManager const &); /* compiler_generated() */
    CloakManager(SaveGameData *);
    CloakManager(SobID const &);
    virtual ~CloakManager() override;
    bool canActivateCloaking();
    void activateCloaking();
    bool canShutDownCloaking();
    void shutDownCloaking();
    bool cloakingActive() const;
    void update(float);
    void applyCloakEffect();
    float getCloakingUsage() const;
private:
    SobID m_owner; // 0xC
    float m_usage; // 0x18
    CloakStatic const *getStatic() const;
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    CloakManager &operator=(CloakManager const &); /* compiler_generated() */
};
static_assert(sizeof(CloakManager) == 28, "Invalid CloakManager size");

class CloakStatic
{
public:
    CloakStatic(float, float, float, float, float, float, float);
    ~CloakStatic();
    _inline float getCloakValue() const;
    _inline float getCloakRadius() const;
    _inline float getCapacity() const;
    _inline float getUsage() const;
    _inline float getInitialCost() const;
    _inline float getRechargeRate() const;
    _inline float getMinCapacityForActivate() const;
private:
    float m_cloakValue; // 0x0
    float m_radius; // 0x4
    float m_capacity; // 0x8
    float m_usage; // 0xC
    float m_initialCost; // 0x10
    float m_recharge; // 0x14
    float m_minCapacityForActivate; // 0x18
};
static_assert(sizeof(CloakStatic) == 28, "Invalid CloakStatic size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline bool CloakManager::isDeterministic() // 0x485137
{
    mangled_assert("?isDeterministic@CloakManager@@UAE_NXZ");
    todo("implement");
}

_inline char const *CloakManager::saveToken() // 0x4851AE
{
    mangled_assert("?saveToken@CloakManager@@UAEPBDXZ");
    todo("implement");
}

_inline float CloakStatic::getCloakValue() const // 0x4850CB
{
    mangled_assert("?getCloakValue@CloakStatic@@QBEMXZ");
    todo("implement");
}

_inline float CloakStatic::getCloakRadius() const // 0x45A823
{
    mangled_assert("?getCloakRadius@CloakStatic@@QBEMXZ");
    todo("implement");
}

_inline float CloakStatic::getCapacity() const // 0x4850C7
{
    mangled_assert("?getCapacity@CloakStatic@@QBEMXZ");
    todo("implement");
}

_inline float CloakStatic::getUsage() const // 0x485133
{
    mangled_assert("?getUsage@CloakStatic@@QBEMXZ");
    todo("implement");
}

_inline float CloakStatic::getInitialCost() const // 0x485105
{
    mangled_assert("?getInitialCost@CloakStatic@@QBEMXZ");
    todo("implement");
}

_inline float CloakStatic::getRechargeRate() const // 0x485114
{
    mangled_assert("?getRechargeRate@CloakStatic@@QBEMXZ");
    todo("implement");
}

_inline float CloakStatic::getMinCapacityForActivate() const // 0x485110
{
    mangled_assert("?getMinCapacityForActivate@CloakStatic@@QBEMXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __CLOAKMANAGER_H__
#endif
