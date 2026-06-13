#if 0
#ifndef __OPTIONS_H__
#define __OPTIONS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class gfxOptionsManager
{
private:
    gfxOptionsManager(rndTable *);
public:
    static bool startup(rndTable *);
    static bool shutdown();
    static gfxOptionsManager *i();
    unsigned __int32 getNumShadows() const;
    bool setNumShadows(unsigned __int32);
    bool canHandleExtraLights() const;
    bool useVBO() const;
    unsigned __int32 getHSBatchLevel() const;
    unsigned __int32 setHSBatchLevel(unsigned __int32 const);
    void getHSTextureSize(vector2 &) const;
    void setHSTextureSize(vector2 const &);
    void getShadowTextureSize(vector2 &) const;
    void setShadowTextureSize(vector2 const &);
    bool setCanBatch();
    bool setCanHandleExtraLights();
    bool doUglyHSEffect() const;
    void setUglyHSEffect(bool const);
    void enableVSync(bool);
private:
    static gfxOptionsManager *s_instance;
    unsigned __int32 m_numShadows; // 0x0
    bool m_bCanBatch; // 0x4
    bool m_bUseVBO; // 0x5
    bool m_bCanHandleExtraLights; // 0x6
    unsigned __int32 m_hsBatchLevel; // 0x8
    vector2 m_hsTextureSize; // 0xC
    vector2 m_shadowTextureSize; // 0x14
    bool m_uglyHS; // 0x1C
    rndTable *m_gl; // 0x20
};
static_assert(sizeof(gfxOptionsManager) == 36, "Invalid gfxOptionsManager size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __OPTIONS_H__
/* combined */
#ifndef __OPTIONS_H__
#define __OPTIONS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class gfxOptionsManager
{
private:
    gfxOptionsManager(rndTable *);
public:
    static bool startup(rndTable *gl);
    static bool shutdown();
    static _inline gfxOptionsManager *i();
    _inline unsigned __int32 getNumShadows() const;
    bool setNumShadows(unsigned __int32);
    bool canHandleExtraLights() const;
    _inline bool useVBO() const;
    _inline unsigned __int32 getHSBatchLevel() const;
    _inline unsigned __int32 setHSBatchLevel(unsigned __int32 const);
    _inline void getHSTextureSize(vector2 &) const;
    _inline void setHSTextureSize(vector2 const &);
    _inline void getShadowTextureSize(vector2 &) const;
    _inline void setShadowTextureSize(vector2 const &);
    bool setCanBatch();
    bool setCanHandleExtraLights();
    _inline bool doUglyHSEffect() const;
    _inline void setUglyHSEffect(bool const);
    void enableVSync(bool);
private:
    static gfxOptionsManager *s_instance;
    unsigned __int32 m_numShadows; // 0x0
    bool m_bCanBatch; // 0x4
    bool m_bUseVBO; // 0x5
    bool m_bCanHandleExtraLights; // 0x6
    unsigned __int32 m_hsBatchLevel; // 0x8
    vector2 m_hsTextureSize; // 0xC
    vector2 m_shadowTextureSize; // 0x14
    bool m_uglyHS; // 0x1C
    rndTable *m_gl; // 0x20
};
static_assert(sizeof(gfxOptionsManager) == 36, "Invalid gfxOptionsManager size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern gfxOptionsManager *_sub_10051D80();
_inline gfxOptionsManager *gfxOptionsManager::i() // 0x10051D80
{
    mangled_assert("?i@gfxOptionsManager@@SGPAV1@XZ");
    todo("implement");
    gfxOptionsManager * __result = _sub_10051D80();
    return __result;
}

_extern unsigned __int32 _sub_10051D40(gfxOptionsManager const *const);
_inline unsigned __int32 gfxOptionsManager::getNumShadows() const // 0x10051D40
{
    mangled_assert("?getNumShadows@gfxOptionsManager@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_10051D40(this);
    return __result;
}

_extern bool _sub_10052D10(gfxOptionsManager const *const);
_inline bool gfxOptionsManager::useVBO() const // 0x10052D10
{
    mangled_assert("?useVBO@gfxOptionsManager@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_10052D10(this);
    return __result;
}

_extern unsigned __int32 _sub_10051D00(gfxOptionsManager const *const);
_inline unsigned __int32 gfxOptionsManager::getHSBatchLevel() const // 0x10051D00
{
    mangled_assert("?getHSBatchLevel@gfxOptionsManager@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_10051D00(this);
    return __result;
}

_extern unsigned __int32 _sub_10052C20(gfxOptionsManager *const, unsigned __int32 const);
_inline unsigned __int32 gfxOptionsManager::setHSBatchLevel(unsigned __int32 const) // 0x10052C20
{
    mangled_assert("?setHSBatchLevel@gfxOptionsManager@@QAEII@Z");
    todo("implement");
    unsigned __int32 __result = _sub_10052C20(this, arg);
    return __result;
}

_extern void _sub_10051D10(gfxOptionsManager const *const, vector2 &);
_inline void gfxOptionsManager::getHSTextureSize(vector2 &) const // 0x10051D10
{
    mangled_assert("?getHSTextureSize@gfxOptionsManager@@QBEXAAVvector2@@@Z");
    todo("implement");
    _sub_10051D10(this, arg);
}

_extern void _sub_10052C30(gfxOptionsManager *const, vector2 const &);
_inline void gfxOptionsManager::setHSTextureSize(vector2 const &) // 0x10052C30
{
    mangled_assert("?setHSTextureSize@gfxOptionsManager@@QAEXABVvector2@@@Z");
    todo("implement");
    _sub_10052C30(this, arg);
}

_extern void _sub_10051D50(gfxOptionsManager const *const, vector2 &);
_inline void gfxOptionsManager::getShadowTextureSize(vector2 &) const // 0x10051D50
{
    mangled_assert("?getShadowTextureSize@gfxOptionsManager@@QBEXAAVvector2@@@Z");
    todo("implement");
    _sub_10051D50(this, arg);
}

_extern void _sub_10052C50(gfxOptionsManager *const, vector2 const &);
_inline void gfxOptionsManager::setShadowTextureSize(vector2 const &) // 0x10052C50
{
    mangled_assert("?setShadowTextureSize@gfxOptionsManager@@QAEXABVvector2@@@Z");
    todo("implement");
    _sub_10052C50(this, arg);
}

_extern bool _sub_100519B0(gfxOptionsManager const *const);
_inline bool gfxOptionsManager::doUglyHSEffect() const // 0x100519B0
{
    mangled_assert("?doUglyHSEffect@gfxOptionsManager@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_100519B0(this);
    return __result;
}

_extern void _sub_10052C70(gfxOptionsManager *const, bool const);
_inline void gfxOptionsManager::setUglyHSEffect(bool const) // 0x10052C70
{
    mangled_assert("?setUglyHSEffect@gfxOptionsManager@@QAEX_N@Z");
    todo("implement");
    _sub_10052C70(this, arg);
}

/* ---------- private code */

#endif // __OPTIONS_H__
#endif
