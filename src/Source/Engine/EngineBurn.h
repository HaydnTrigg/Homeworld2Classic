#if 0
#ifndef __ENGINEBURN_H__
#define __ENGINEBURN_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class EngineBurnPath
{
public:
    EngineBurnPath();
    ~EngineBurnPath();
    void getPosition(float, vector3 &);
    __int32 m_numPoints; // 0x0
    vector3 *m_points; // 0x4
};
static_assert(sizeof(EngineBurnPath) == 8, "Invalid EngineBurnPath size");

class EngineBurnInfo
{
public:
    typedef std::vector<EngineBurnSpark,std::allocator<EngineBurnSpark> > SparkCont;
    typedef std::vector<EngineBurnPath *,std::allocator<EngineBurnPath *> > BurnPathCont;
    EngineBurnInfo(EngineBurnInfo const &); /* compiler_generated() */
    EngineBurnInfo();
    ~EngineBurnInfo();
    unsigned __int32 m_numSparksPerPath; // 0x0
    std::vector<EngineBurnSpark,std::allocator<EngineBurnSpark> > m_sparks; // 0x4
    float m_currentTime; // 0x10
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_jointName; // 0x14
    std::vector<EngineBurnPath *,std::allocator<EngineBurnPath *> > m_paths; // 0x2C
    float m_burnMaxViewDistance; // 0x38
    float m_minFlareFactor; // 0x3C
    float m_flareSize; // 0x40
    float m_flarePos; // 0x44
    float m_flareRandomRangeMin; // 0x48
    float m_flareRandomRangeMax; // 0x4C
    float m_flareMaxViewDistance; // 0x50
    EngineBurnInfo &operator=(EngineBurnInfo const &); /* compiler_generated() */
};
static_assert(sizeof(EngineBurnInfo) == 84, "Invalid EngineBurnInfo size");

class EngineBurnStatic
{
public:
    typedef std::vector<EngineBurnInfo *,std::allocator<EngineBurnInfo *> > BurnInfoCont;
    EngineBurnStatic(EngineBurnStatic const &); /* compiler_generated() */
    EngineBurnStatic();
    ~EngineBurnStatic();
    _inline void addBurn(EngineBurnInfo *);
    _inline unsigned __int32 getNumBurns() const;
    EngineBurnInfo const *getBurn(unsigned __int32) const;
    _inline EngineBurnInfo *getBurn(unsigned __int32);
private:
    std::vector<EngineBurnInfo *,std::allocator<EngineBurnInfo *> > m_burns; // 0x0
public:
    EngineBurnStatic &operator=(EngineBurnStatic const &); /* compiler_generated() */
};
static_assert(sizeof(EngineBurnStatic) == 12, "Invalid EngineBurnStatic size");

class EngineBurnSpark
{
public:
    unsigned __int32 m_path; // 0x0
    float m_position; // 0x4
    float m_speed; // 0x8
    float m_size; // 0xC
    vector3 m_position3D; // 0x10
    _inline EngineBurnSpark(); /* compiler_generated() */
};
static_assert(sizeof(EngineBurnSpark) == 28, "Invalid EngineBurnSpark size");

class EngineBurn
{
public:
    EngineBurn(EngineBurn const &); /* compiler_generated() */
    EngineBurn();
    ~EngineBurn();
    void update(float, EngineBurnInfo *);
    void render(Camera const *, EngineBurnInfo const *, SpriteBatch *, matrix4 const &, float, float, vector4 const &);
private:
    void renderSparks(Camera const *, EngineBurnInfo const *, SpriteBatch *, matrix4 const &, float, float, vector4 const &);
    void renderSpark(EngineBurnSpark const &);
    std::vector<EngineBurnSpark,std::allocator<EngineBurnSpark> > m_sparks; // 0x0
public:
    EngineBurn &operator=(EngineBurn const &); /* compiler_generated() */
};
static_assert(sizeof(EngineBurn) == 12, "Invalid EngineBurn size");

class EngineBurnManager
{
public:
    static bool startup();
    static bool shutdown();
    static EngineBurnManager *i();
    static void scriptingInit();
    static __int32 handle_EngineBurn_Chunk(IFF *iff, IFFChunk *chunk, void *user0, void *user1);
    bool enable(bool);
    void drawAllEngineBurns(Camera const *, float, Selection const &);
private:
    EngineBurnManager();
    ~EngineBurnManager();
    void drawShipEngineBurns(Camera const *, float, SobWithMesh *);
    static EngineBurnManager *s_instance;
    class Data;
    EngineBurnManager::Data *m_pimpl; // 0x0
};
static_assert(sizeof(EngineBurnManager) == 4, "Invalid EngineBurnManager size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline void EngineBurnStatic::addBurn(EngineBurnInfo *) // 0x4409ED
{
    mangled_assert("?addBurn@EngineBurnStatic@@QAEXPAVEngineBurnInfo@@@Z");
    todo("implement");
}

_inline unsigned __int32 EngineBurnStatic::getNumBurns() const // 0x441BD4
{
    mangled_assert("?getNumBurns@EngineBurnStatic@@QBEIXZ");
    todo("implement");
}

_inline EngineBurnInfo *EngineBurnStatic::getBurn(unsigned __int32) // 0x441B77
{
    mangled_assert("?getBurn@EngineBurnStatic@@QAEPAVEngineBurnInfo@@I@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __ENGINEBURN_H__
#endif
