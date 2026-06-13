#if 0
#ifndef __ENGINEGLOW_H__
#define __ENGINEGLOW_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class EngineGlowBinding
{
public:
    EngineGlowBinding(EngineGlowBinding const &); /* compiler_generated() */
    EngineGlowBinding();
    ~EngineGlowBinding();
    BasicMesh *m_pGlowMesh; // 0x0
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_jointName; // 0x4
    unsigned __int32 m_lod; // 0x1C
    EngineGlowBinding &operator=(EngineGlowBinding const &); /* compiler_generated() */
};
static_assert(sizeof(EngineGlowBinding) == 32, "Invalid EngineGlowBinding size");

class EngineGlowStatic
{
public:
    enum LOD
    {
        LOD_0 = 0,
        LOD_1,
        LOD_2,
        LOD_3,
        LOD_Number,
    };
    typedef std::vector<EngineGlowBinding *,std::allocator<EngineGlowBinding *> > GlowBindingCont;
    EngineGlowStatic(EngineGlowStatic const &); /* compiler_generated() */
    EngineGlowStatic();
    ~EngineGlowStatic();
    std::vector<EngineGlowBinding *,std::allocator<EngineGlowBinding *> > m_glows[4]; // 0x0
    float m_maxTranslation; // 0x30
    float m_flickerMin; // 0x34
    float m_flickerMax; // 0x38
    float m_flickerFrequency; // 0x3C
    float m_blurStartDistance; // 0x40
    float m_blurFullOnDistance; // 0x44
    float m_maxBlur; // 0x48
    vector4 m_glowColour; // 0x4C
    EngineGlowStatic &operator=(EngineGlowStatic const &); /* compiler_generated() */
};
static_assert(sizeof(EngineGlowStatic) == 92, "Invalid EngineGlowStatic size");

class EngineGlowManager
{
public:
    static bool startup();
    static bool shutdown();
    static EngineGlowManager *i();
    static __int32 handle_EngineGlow_Chunk(IFF *iff, IFFChunk *chunk, void *user0, void *user1);
    static __int32 setEngineGlowStatic(lua_State *lstate);
    void drawEngineGlows(Camera const *, float, Selection const &, __int32);
protected:
    EngineGlowManager();
    ~EngineGlowManager();
private:
    void doDrawEngineGlows(vector3 const &, vector3 const &, vector3 const &, float, SobWithMesh const *, unsigned __int32, float);
    static EngineGlowManager *s_instance;
    Texture *m_pCubemap; // 0x0
    float m_phase; // 0x4
};
static_assert(sizeof(EngineGlowManager) == 8, "Invalid EngineGlowManager size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __ENGINEGLOW_H__
#endif
