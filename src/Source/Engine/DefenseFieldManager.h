#if 0
#ifndef __DEFENSEFIELDMANAGER_H__
#define __DEFENSEFIELDMANAGER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class DefenseFieldManager :
    public SaveObject
{
public:
    DefenseFieldManager(DefenseFieldManager const &); /* compiler_generated() */
    DefenseFieldManager(SaveGameData *);
    DefenseFieldManager(SobID const &);
    virtual ~DefenseFieldManager() override;
    void activateField();
    bool canActivate();
    void shutDownField();
    bool canShutDown();
    bool fieldActive() const;
    _inline float getUsage() const;
    void update(float);
    float getCurrentUsage();
    void displayField();
    DefenseFieldManagerStatic const *getStatic() const;
    Sob const *getField() const;
private:
    void killFieldObject();
    SobID m_owner; // 0xC
    SobID m_field; // 0x18
    float m_usage; // 0x24
    DefenseFieldManager::Data *m_pimpl; // 0x28
    class Data;
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    DefenseFieldManager &operator=(DefenseFieldManager const &); /* compiler_generated() */
};
static_assert(sizeof(DefenseFieldManager) == 44, "Invalid DefenseFieldManager size");

class DefenseFieldManagerStatic
{
public:
    DefenseFieldManagerStatic(DefenseFieldManagerStatic const &); /* compiler_generated() */
    DefenseFieldManagerStatic();
    _inline float getRadius() const;
    _inline float getCapacity() const;
    _inline float getUsage() const;
    _inline float getRechargeRate() const;
    _inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &getEffectName() const;
    _inline float getMinBeforeManualShutdownActive() const;
    _inline float getMaxToAllowRestart() const;
    _inline bool getOnByDefault() const;
private:
    bool m_onByDefault; // 0x0
    float m_capacity; // 0x4
    float m_usage; // 0x8
    float m_recharge; // 0xC
    float m_radius; // 0x10
    float m_minBeforeManualShutdownActive; // 0x14
    float m_maxToAllowRestart; // 0x18
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_effectName; // 0x1C
public:
    _inline ~DefenseFieldManagerStatic(); /* compiler_generated() */
    DefenseFieldManagerStatic &operator=(DefenseFieldManagerStatic const &); /* compiler_generated() */
};
static_assert(sizeof(DefenseFieldManagerStatic) == 52, "Invalid DefenseFieldManagerStatic size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern float _sub_48598C(DefenseFieldManager const *const);
_inline float DefenseFieldManager::getUsage() const // 0x48598C
{
    mangled_assert("?getUsage@DefenseFieldManager@@QBEMXZ");
    todo("implement");
    float __result = _sub_48598C(this);
    return __result;
}

_extern bool _sub_485994(DefenseFieldManager *const);
_inline bool DefenseFieldManager::isDeterministic() // 0x485994
{
    mangled_assert("?isDeterministic@DefenseFieldManager@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_485994(this);
    return __result;
}

_extern char const *_sub_485A55(DefenseFieldManager *const);
_inline char const *DefenseFieldManager::saveToken() // 0x485A55
{
    mangled_assert("?saveToken@DefenseFieldManager@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_485A55(this);
    return __result;
}

_extern float _sub_45A880(DefenseFieldManagerStatic const *const);
_inline float DefenseFieldManagerStatic::getRadius() const // 0x45A880
{
    mangled_assert("?getRadius@DefenseFieldManagerStatic@@QBEMXZ");
    todo("implement");
    float __result = _sub_45A880(this);
    return __result;
}

_extern float _sub_485923(DefenseFieldManagerStatic const *const);
_inline float DefenseFieldManagerStatic::getCapacity() const // 0x485923
{
    mangled_assert("?getCapacity@DefenseFieldManagerStatic@@QBEMXZ");
    todo("implement");
    float __result = _sub_485923(this);
    return __result;
}

_extern float _sub_485990(DefenseFieldManagerStatic const *const);
_inline float DefenseFieldManagerStatic::getUsage() const // 0x485990
{
    mangled_assert("?getUsage@DefenseFieldManagerStatic@@QBEMXZ");
    todo("implement");
    float __result = _sub_485990(this);
    return __result;
}

_extern float _sub_48596B(DefenseFieldManagerStatic const *const);
_inline float DefenseFieldManagerStatic::getRechargeRate() const // 0x48596B
{
    mangled_assert("?getRechargeRate@DefenseFieldManagerStatic@@QBEMXZ");
    todo("implement");
    float __result = _sub_48596B(this);
    return __result;
}

_extern std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &_sub_485954(DefenseFieldManagerStatic const *const);
_inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &DefenseFieldManagerStatic::getEffectName() const // 0x485954
{
    mangled_assert("?getEffectName@DefenseFieldManagerStatic@@QBEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
    todo("implement");
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > const & __result = _sub_485954(this);
    return __result;
}

_extern float _sub_485964(DefenseFieldManagerStatic const *const);
_inline float DefenseFieldManagerStatic::getMinBeforeManualShutdownActive() const // 0x485964
{
    mangled_assert("?getMinBeforeManualShutdownActive@DefenseFieldManagerStatic@@QBEMXZ");
    todo("implement");
    float __result = _sub_485964(this);
    return __result;
}

_extern float _sub_485960(DefenseFieldManagerStatic const *const);
_inline float DefenseFieldManagerStatic::getMaxToAllowRestart() const // 0x485960
{
    mangled_assert("?getMaxToAllowRestart@DefenseFieldManagerStatic@@QBEMXZ");
    todo("implement");
    float __result = _sub_485960(this);
    return __result;
}

_extern bool _sub_485968(DefenseFieldManagerStatic const *const);
_inline bool DefenseFieldManagerStatic::getOnByDefault() const // 0x485968
{
    mangled_assert("?getOnByDefault@DefenseFieldManagerStatic@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_485968(this);
    return __result;
}

/* ---------- private code */

#endif // __DEFENSEFIELDMANAGER_H__
#endif
