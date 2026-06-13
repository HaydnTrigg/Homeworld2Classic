#if 0
#ifndef __HYPERSPACEINHIBITORMANAGER_H__
#define __HYPERSPACEINHIBITORMANAGER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class HyperspaceInhibitorManager :
    public SaveObject
{
public:
    HyperspaceInhibitorManager(HyperspaceInhibitorManager const &); /* compiler_generated() */
    HyperspaceInhibitorManager(SaveGameData *);
    HyperspaceInhibitorManager(SobID const &);
    virtual ~HyperspaceInhibitorManager() override;
    void applyHyperspaceModifiers();
private:
    SobID m_owner; // 0xC
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    HyperspaceInhibitorManager &operator=(HyperspaceInhibitorManager const &); /* compiler_generated() */
};
static_assert(sizeof(HyperspaceInhibitorManager) == 24, "Invalid HyperspaceInhibitorManager size");

class HyperspaceInhibitorStatic
{
public:
    HyperspaceInhibitorStatic(float);
    ~HyperspaceInhibitorStatic();
    _inline float getRadius() const;
private:
    float m_radius; // 0x0
};
static_assert(sizeof(HyperspaceInhibitorStatic) == 4, "Invalid HyperspaceInhibitorStatic size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern bool _sub_485DC7(HyperspaceInhibitorManager *const);
_inline bool HyperspaceInhibitorManager::isDeterministic() // 0x485DC7
{
    mangled_assert("?isDeterministic@HyperspaceInhibitorManager@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_485DC7(this);
    return __result;
}

_extern char const *_sub_485E3E(HyperspaceInhibitorManager *const);
_inline char const *HyperspaceInhibitorManager::saveToken() // 0x485E3E
{
    mangled_assert("?saveToken@HyperspaceInhibitorManager@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_485E3E(this);
    return __result;
}

_extern float _sub_45A884(HyperspaceInhibitorStatic const *const);
_inline float HyperspaceInhibitorStatic::getRadius() const // 0x45A884
{
    mangled_assert("?getRadius@HyperspaceInhibitorStatic@@QBEMXZ");
    todo("implement");
    float __result = _sub_45A884(this);
    return __result;
}

/* ---------- private code */

#endif // __HYPERSPACEINHIBITORMANAGER_H__
#endif
