#if 0
#ifndef __SALVAGEMANAGER_H__
#define __SALVAGEMANAGER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SalvageManager :
    public LatchPointManager
{
public:
    SalvageManager(SalvageManager const &); /* compiler_generated() */
    SalvageManager(SaveGameData *);
    SalvageManager(Ship *);
    virtual ~SalvageManager() override;
    virtual void update(float) override;
protected:
    virtual LatchPointManagerStatic *getStaticData() override;
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    SalvageManager &operator=(SalvageManager const &); /* compiler_generated() */
};
static_assert(sizeof(SalvageManager) == 92, "Invalid SalvageManager size");

class SalvageManagerStatic :
    public LatchPointManagerStatic
{
public:
    SalvageManagerStatic(SalvageManagerStatic const &); /* compiler_generated() */
    SalvageManagerStatic();
    ~SalvageManagerStatic();
protected:
    virtual _inline char const *getPointBaseName() const override;
public:
    SalvageManagerStatic &operator=(SalvageManagerStatic const &); /* compiler_generated() */
};
static_assert(sizeof(SalvageManagerStatic) == 16, "Invalid SalvageManagerStatic size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern bool _sub_4893C7(SalvageManager *const);
_inline bool SalvageManager::isDeterministic() // 0x4893C7
{
    mangled_assert("?isDeterministic@SalvageManager@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_4893C7(this);
    return __result;
}

_extern char const *_sub_48946D(SalvageManager *const);
_inline char const *SalvageManager::saveToken() // 0x48946D
{
    mangled_assert("?saveToken@SalvageManager@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_48946D(this);
    return __result;
}

_extern char const *_sub_4893AB(SalvageManagerStatic const *const);
_inline char const *SalvageManagerStatic::getPointBaseName() const // 0x4893AB
{
    mangled_assert("?getPointBaseName@SalvageManagerStatic@@MBEPBDXZ");
    todo("implement");
    char const * __result = _sub_4893AB(this);
    return __result;
}

/* ---------- private code */

#endif // __SALVAGEMANAGER_H__
#endif
