#if 0
#ifndef __SHADOWSETTINGS_H__
#define __SHADOWSETTINGS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class ShadowManager
{
private:
    static ShadowManager *m_instance;
    vector4 m_shadowColour; // 0x0
public:
    static ShadowManager *i();
    static bool startup();
    static bool shutdown();
    ShadowManager();
    void setLevelShadowColour(vector4 const &);
    vector4 const &getLevelShadowColour();
};
static_assert(sizeof(ShadowManager) == 16, "Invalid ShadowManager size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SHADOWSETTINGS_H__
/* combined */
#ifndef __SHADOWSETTINGS_H__
#define __SHADOWSETTINGS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class ShadowManager
{
private:
    static ShadowManager *m_instance;
    vector4 m_shadowColour; // 0x0
public:
    static _inline ShadowManager *i();
    static bool startup();
    static bool shutdown();
    _inline ShadowManager();
    _inline void setLevelShadowColour(vector4 const &);
    _inline vector4 const &getLevelShadowColour();
};
static_assert(sizeof(ShadowManager) == 16, "Invalid ShadowManager size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern ShadowManager *_sub_10097F70();
_inline ShadowManager *ShadowManager::i() // 0x10097F70
{
    mangled_assert("?i@ShadowManager@@SGPAV1@XZ");
    todo("implement");
    ShadowManager * __result = _sub_10097F70();
    return __result;
}

_extern _sub_10097F20(ShadowManager *const);
_inline ShadowManager::ShadowManager() // 0x10097F20
{
    mangled_assert("??0ShadowManager@@QAE@XZ");
    todo("implement");
    _sub_10097F20(this);
}

_extern void _sub_10097F80(ShadowManager *const, vector4 const &);
_inline void ShadowManager::setLevelShadowColour(vector4 const &) // 0x10097F80
{
    mangled_assert("?setLevelShadowColour@ShadowManager@@QAEXABVvector4@@@Z");
    todo("implement");
    _sub_10097F80(this, arg);
}

_extern vector4 const &_sub_10097F60(ShadowManager *const);
_inline vector4 const &ShadowManager::getLevelShadowColour() // 0x10097F60
{
    mangled_assert("?getLevelShadowColour@ShadowManager@@QAEABVvector4@@XZ");
    todo("implement");
    vector4 const & __result = _sub_10097F60(this);
    return __result;
}

/* ---------- private code */

#endif // __SHADOWSETTINGS_H__
#endif
