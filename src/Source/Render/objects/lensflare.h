#if 0
#ifndef __LENSFLARE_H__
#define __LENSFLARE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class LensFlare
{
public:
    LensFlare(LensFlare const &); /* compiler_generated() */
    LensFlare();
    ~LensFlare();
    void setWashout(vector4 const &, float);
    void setFadeTimes(float, float, float, float);
    bool addSpot(char const *, float, float, float, vector4 const &);
    void render(rndTable &, float, float, float, float, float, float);
    void computeFades(bool, float, float &, float &);
    void releaseSpots();
    struct HotSpot
    {
        Texture *pTexture; // 0x0
        float offset; // 0x4
        float scale; // 0x8
        float rotation; // 0xC
        vector4 col; // 0x10
        HotSpot(); /* compiler_generated() */
    };
    static_assert(sizeof(HotSpot) == 32, "Invalid HotSpot size");
    typedef std::vector<LensFlare::HotSpot *,std::allocator<LensFlare::HotSpot *> > HotSpotList;
    std::vector<LensFlare::HotSpot *,std::allocator<LensFlare::HotSpot *> > m_hotSpots; // 0x0
    float m_fadeUpTimeHi; // 0xC
    float m_fadeUpTimeLo; // 0x10
    float m_fadeDownTimeHi; // 0x14
    float m_fadeDownTimeLo; // 0x18
    float m_minOffset; // 0x1C
    float m_maxOffset; // 0x20
    vector4 m_washoutColour; // 0x24
    float m_washoutStrength; // 0x34
    LensFlare &operator=(LensFlare const &); /* compiler_generated() */
};
static_assert(sizeof(LensFlare) == 56, "Invalid LensFlare size");

class LensFlareManager
{
public:
    class CollisionInterface
    {
    public:
        virtual bool CheckOcclusion(Camera const *, vector2 const &) const = 0;
        CollisionInterface(LensFlareManager::CollisionInterface const &); /* compiler_generated() */
        _inline CollisionInterface(); /* compiler_generated() */
        LensFlareManager::CollisionInterface &operator=(LensFlareManager::CollisionInterface const &); /* compiler_generated() */
    };
    static_assert(sizeof(CollisionInterface) == 4, "Invalid CollisionInterface size");
    static LensFlareManager *Instance();
    static bool Startup();
    static bool Shutdown();
    void SetCollisionInterface(LensFlareManager::CollisionInterface const *);
    void SetGL(rndTable *);
    void SetColourMultiplier(float);
    unsigned __int32 ObjectCreate(char const *, vector3 const &, bool);
    bool ObjectDelete(unsigned __int32);
    void ObjectSetPosition(unsigned __int32, vector3 const &);
    void ObjectSetFade(unsigned __int32, float);
    void ObjectSetScale(unsigned __int32, float);
    void ObjectSetVisible(unsigned __int32, bool);
    void Render(Camera const *, matrix4 const &, matrix4 const &, float);
private:
    LensFlareManager();
    ~LensFlareManager();
    LensFlare *loadLensFlare(char const *);
    unsigned __int32 attachLensFlare(LensFlare *, vector3 const &, bool);
    void setCoordSys(bool);
    void getFlareDirection(Camera *, float, float, vector3 &);
    bool checkOcclusion(Camera const *, vector2 const &);
    void addToMap(char const *, LensFlare *);
    void calculateInfinitePos(LensFlare *, Camera const *, matrix4 const &, matrix4 const &, vector3 const &, float &, float &, float &);
    void calculateNonInfinitePos(LensFlare *, Camera const *, matrix4 const &, matrix4 const &, vector3 const &, float, float &, float &, float &, float &);
    class Data;
    LensFlareManager::Data *m_pimpl; // 0x0
    rndTable *m_gl; // 0x4
    static LensFlareManager *s_instance;
};
static_assert(sizeof(LensFlareManager) == 8, "Invalid LensFlareManager size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LENSFLARE_H__
/* combined */
#ifndef __LENSFLARE_H__
#define __LENSFLARE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class LensFlare
{
public:
    LensFlare(LensFlare const &); /* compiler_generated() */
    LensFlare();
    ~LensFlare();
    void setWashout(vector4 const &, float);
    void setFadeTimes(float, float, float, float);
    bool addSpot(char const *, float, float, float, vector4 const &);
    void render(rndTable &, float, float, float, float, float, float);
    void computeFades(bool, float, float &, float &);
    void releaseSpots();
    struct HotSpot
    {
        Texture *pTexture; // 0x0
        float offset; // 0x4
        float scale; // 0x8
        float rotation; // 0xC
        vector4 col; // 0x10
        _inline HotSpot(); /* compiler_generated() */
    };
    static_assert(sizeof(HotSpot) == 32, "Invalid HotSpot size");
    typedef std::vector<LensFlare::HotSpot *,std::allocator<LensFlare::HotSpot *> > HotSpotList;
    std::vector<LensFlare::HotSpot *,std::allocator<LensFlare::HotSpot *> > m_hotSpots; // 0x0
    float m_fadeUpTimeHi; // 0xC
    float m_fadeUpTimeLo; // 0x10
    float m_fadeDownTimeHi; // 0x14
    float m_fadeDownTimeLo; // 0x18
    float m_minOffset; // 0x1C
    float m_maxOffset; // 0x20
    vector4 m_washoutColour; // 0x24
    float m_washoutStrength; // 0x34
    LensFlare &operator=(LensFlare const &); /* compiler_generated() */
};
static_assert(sizeof(LensFlare) == 56, "Invalid LensFlare size");

class LensFlareManager
{
public:
    class CollisionInterface
    {
    public:
        virtual bool CheckOcclusion(Camera const *, vector2 const &) const = 0;
        CollisionInterface(LensFlareManager::CollisionInterface const &); /* compiler_generated() */
        CollisionInterface(); /* compiler_generated() */
        LensFlareManager::CollisionInterface &operator=(LensFlareManager::CollisionInterface const &); /* compiler_generated() */
    };
    static_assert(sizeof(CollisionInterface) == 4, "Invalid CollisionInterface size");
    static LensFlareManager *Instance();
    static bool Startup();
    static bool Shutdown();
    void SetCollisionInterface(LensFlareManager::CollisionInterface const *);
    void SetGL(rndTable *);
    void SetColourMultiplier(float);
    unsigned __int32 ObjectCreate(char const *, vector3 const &, bool);
    bool ObjectDelete(unsigned __int32);
    void ObjectSetPosition(unsigned __int32, vector3 const &);
    void ObjectSetFade(unsigned __int32, float);
    void ObjectSetScale(unsigned __int32, float);
    void ObjectSetVisible(unsigned __int32, bool);
    void Render(Camera const *, matrix4 const &, matrix4 const &, float);
private:
    LensFlareManager();
    ~LensFlareManager();
    LensFlare *loadLensFlare(char const *);
    unsigned __int32 attachLensFlare(LensFlare *, vector3 const &, bool);
    void setCoordSys(bool);
    void getFlareDirection(Camera *, float, float, vector3 &);
    bool checkOcclusion(Camera const *, vector2 const &);
    void addToMap(char const *, LensFlare *);
    void calculateInfinitePos(LensFlare *, Camera const *, matrix4 const &, matrix4 const &, vector3 const &, float &, float &, float &);
    void calculateNonInfinitePos(LensFlare *, Camera const *, matrix4 const &, matrix4 const &, vector3 const &, float, float &, float &, float &, float &);
    class Data;
    LensFlareManager::Data *m_pimpl; // 0x0
    rndTable *m_gl; // 0x4
    static LensFlareManager *s_instance;
};
static_assert(sizeof(LensFlareManager) == 8, "Invalid LensFlareManager size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LENSFLARE_H__
#endif
