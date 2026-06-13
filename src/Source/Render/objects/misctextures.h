#if 0
#ifndef __MISCTEXTURES_H__
#define __MISCTEXTURES_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class MiscTextureManager
{
private:
    static MiscTextureManager *m_instance;
    rndTable *m_gl; // 0x0
    Texture *normalizationCubemap; // 0x4
    Texture *passThrough3Dmap; // 0x8
    Texture *whiteTexture; // 0xC
    void createNormalCubeMap();
    void createPassThrough3Dmap();
    void createWhiteTexture();
    MiscTextureManager();
    ~MiscTextureManager();
    enum GeneratedTextures
    {
        eNormalizationCubeMap = 0,
        ePassThrough3D,
        eWhite,
        eNumGeneratedTextures,
    };
public:
    static bool startup();
    static bool shutdown();
    static MiscTextureManager *i();
    void initialize(rndTable *);
    rndTable *getGL();
    Texture *getGeneratedTexture(MiscTextureManager::GeneratedTextures const);
};
static_assert(sizeof(MiscTextureManager) == 16, "Invalid MiscTextureManager size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MISCTEXTURES_H__
/* combined */
#ifndef __MISCTEXTURES_H__
#define __MISCTEXTURES_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class MiscTextureManager
{
private:
    static MiscTextureManager *m_instance;
    rndTable *m_gl; // 0x0
    Texture *normalizationCubemap; // 0x4
    Texture *passThrough3Dmap; // 0x8
    Texture *whiteTexture; // 0xC
    void createNormalCubeMap();
    void createPassThrough3Dmap();
    void createWhiteTexture();
    MiscTextureManager();
    ~MiscTextureManager();
    enum GeneratedTextures
    {
        eNormalizationCubeMap = 0,
        ePassThrough3D,
        eWhite,
        eNumGeneratedTextures,
    };
public:
    static bool startup();
    static bool shutdown();
    static _inline MiscTextureManager *i();
    void initialize(rndTable *);
    _inline rndTable *getGL();
    Texture *getGeneratedTexture(MiscTextureManager::GeneratedTextures const);
};
static_assert(sizeof(MiscTextureManager) == 16, "Invalid MiscTextureManager size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern MiscTextureManager *_sub_10086DC0();
_inline MiscTextureManager *MiscTextureManager::i() // 0x10086DC0
{
    mangled_assert("?i@MiscTextureManager@@SGPAV1@XZ");
    todo("implement");
    MiscTextureManager * __result = _sub_10086DC0();
    return __result;
}

_extern rndTable *_sub_10086D80(MiscTextureManager *const);
_inline rndTable *MiscTextureManager::getGL() // 0x10086D80
{
    mangled_assert("?getGL@MiscTextureManager@@QAEPAUrndTable@@XZ");
    todo("implement");
    rndTable * __result = _sub_10086D80(this);
    return __result;
}

/* ---------- private code */

#endif // __MISCTEXTURES_H__
#endif
