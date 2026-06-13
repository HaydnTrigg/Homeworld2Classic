#if 0
#ifndef __RENDERTEXTURE_H__
#define __RENDERTEXTURE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class RenderTexture
{
public:
    RenderTexture(rndTable *);
    ~RenderTexture();
    bool Initialize(vector2 const &, PBufferTexture, unsigned __int32 const, unsigned __int32 const);
    bool GetSize(vector2 &) const;
    bool InitializeState(bool const, bool const);
    bool Apply();
    bool Unapply();
    void Bind(PBufferTexture);
    void Unbind(PBufferTexture);
    void StartShadow(matrix4 const &, float const, float const, float const, float const, __int32 const);
    void EndShadow();
    void ShowBufferDebug(PBufferTexture const, float const, float const, float const, float const);
private:
    bool alreadyInitialized; // 0x0
    glState m_rglState; // 0x8
    PBuffer *buffer; // 0x280
    rndTable *m_gl; // 0x284
    __int32 shadowCurrentTMU; // 0x288
};
static_assert(sizeof(RenderTexture) == 656, "Invalid RenderTexture size");

class RenderTextureManager
{
private:
    static RenderTextureManager *m_instance;
    enum PBufferID
    {
        PB_hyperSpaceImage = 0,
        PB_shadowMap,
        numPbuffers,
    };
public:
    RenderTextureManager(RenderTextureManager const &); /* compiler_generated() */
    RenderTextureManager();
    ~RenderTextureManager();
    static RenderTextureManager *i();
    static bool startup();
    static bool shutdown();
    void initialize(rndTable *);
    RenderTexture *getRenderTexture(RenderTextureManager::PBufferID);
    void getStats(unsigned __int32 &, unsigned __int32 &);
    void setStats(unsigned __int32 const, unsigned __int32 const);
private:
    rndTable *m_gl; // 0x0
    std::vector<RenderTexture *,std::allocator<RenderTexture *> > rt; // 0x4
    unsigned __int32 m_numApplies; // 0x10
    unsigned __int32 m_numUnapplies; // 0x14
public:
    RenderTextureManager &operator=(RenderTextureManager const &); /* compiler_generated() */
};
static_assert(sizeof(RenderTextureManager) == 24, "Invalid RenderTextureManager size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __RENDERTEXTURE_H__
/* combined */
#ifndef __RENDERTEXTURE_H__
#define __RENDERTEXTURE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class RenderTexture
{
public:
    RenderTexture(rndTable *);
    ~RenderTexture();
    bool Initialize(vector2 const &, PBufferTexture, unsigned __int32 const, unsigned __int32 const);
    bool GetSize(vector2 &) const;
    bool InitializeState(bool const, bool const);
    bool Apply();
    bool Unapply();
    void Bind(PBufferTexture);
    void Unbind(PBufferTexture);
    void StartShadow(matrix4 const &, float const, float const, float const, float const, __int32 const);
    void EndShadow();
    void ShowBufferDebug(PBufferTexture const, float const, float const, float const, float const);
private:
    bool alreadyInitialized; // 0x0
    glState m_rglState; // 0x8
    PBuffer *buffer; // 0x280
    rndTable *m_gl; // 0x284
    __int32 shadowCurrentTMU; // 0x288
};
static_assert(sizeof(RenderTexture) == 656, "Invalid RenderTexture size");

class RenderTextureManager
{
private:
    static RenderTextureManager *m_instance;
    enum PBufferID
    {
        PB_hyperSpaceImage = 0,
        PB_shadowMap,
        numPbuffers,
    };
public:
    _inline RenderTextureManager(RenderTextureManager const &); /* compiler_generated() */
    RenderTextureManager();
    ~RenderTextureManager();
    static _inline RenderTextureManager *i();
    static bool startup();
    static bool shutdown();
    void initialize(rndTable *);
    _inline RenderTexture *getRenderTexture(RenderTextureManager::PBufferID);
    _inline void getStats(unsigned __int32 &, unsigned __int32 &);
    _inline void setStats(unsigned __int32 const, unsigned __int32 const);
private:
    rndTable *m_gl; // 0x0
    std::vector<RenderTexture *,std::allocator<RenderTexture *> > rt; // 0x4
    unsigned __int32 m_numApplies; // 0x10
    unsigned __int32 m_numUnapplies; // 0x14
public:
    _inline RenderTextureManager &operator=(RenderTextureManager const &); /* compiler_generated() */
};
static_assert(sizeof(RenderTextureManager) == 24, "Invalid RenderTextureManager size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern RenderTextureManager *_sub_1008F740();
_inline RenderTextureManager *RenderTextureManager::i() // 0x1008F740
{
    mangled_assert("?i@RenderTextureManager@@SGPAV1@XZ");
    todo("implement");
    RenderTextureManager * __result = _sub_1008F740();
    return __result;
}

_extern RenderTexture *_sub_1008F710(RenderTextureManager *const, RenderTextureManager::PBufferID);
_inline RenderTexture *RenderTextureManager::getRenderTexture(RenderTextureManager::PBufferID) // 0x1008F710
{
    mangled_assert("?getRenderTexture@RenderTextureManager@@QAEPAVRenderTexture@@W4PBufferID@1@@Z");
    todo("implement");
    RenderTexture * __result = _sub_1008F710(this, arg);
    return __result;
}

_extern void _sub_1008F720(RenderTextureManager *const, unsigned __int32 &, unsigned __int32 &);
_inline void RenderTextureManager::getStats(unsigned __int32 &, unsigned __int32 &) // 0x1008F720
{
    mangled_assert("?getStats@RenderTextureManager@@QAEXAAI0@Z");
    todo("implement");
    _sub_1008F720(this, arg, arg);
}

_extern void _sub_1008FB90(RenderTextureManager *const, unsigned __int32 const, unsigned __int32 const);
_inline void RenderTextureManager::setStats(unsigned __int32 const, unsigned __int32 const) // 0x1008FB90
{
    mangled_assert("?setStats@RenderTextureManager@@QAEXII@Z");
    todo("implement");
    _sub_1008FB90(this, arg, arg);
}

/* ---------- private code */

#endif // __RENDERTEXTURE_H__
#endif
