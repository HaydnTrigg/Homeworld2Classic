#if 0
#ifndef __SPHEREBURST_H__
#define __SPHEREBURST_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SphereBurst :
    public WeaponFire
{
public:
    typedef WeaponFire SuperClass;
    SphereBurst(SphereBurst &); /* compiler_generated() */
    SphereBurst(SaveGameData *);
    SphereBurst(char const *, Sob *);
    virtual ~SphereBurst() override;
    virtual void getCollisionSphere(vector3 *, float *);
    virtual float getCollisionSphereRadius();
    virtual void initialize(WeaponStatic const *) override;
    virtual bool update(float) override;
    virtual bool hitsSob(Sob *, vector3 const &, vector3 const &) override;
    virtual void PerformCollisionDetection() override;
    float getRadius();
    _inline void setRadius(float);
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    static char const m_saveToken[0];
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
protected:
    virtual bool ShouldIgnore(Sob *) override;
    virtual void RemoveFromSimulation() override;
    void RemoveAllSimData();
    float m_radius; // 0x23C
private:
    std::list<unsigned int,std::allocator<unsigned int> > m_hitSobs; // 0x240
    struct CollisionInfo
    {
        Sob *m_sob; // 0x0
        Collision::Point m_collision; // 0x4
        _inline CollisionInfo(Sob *, Collision::Point const &);
    };
    static_assert(sizeof(CollisionInfo) == 36, "Invalid CollisionInfo size");
    void CollisionResponse(std::vector<SphereBurst::CollisionInfo,std::allocator<SphereBurst::CollisionInfo> > const &);
    static void saveHitSobs(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void loadHitSobs(void *objectPtr, SaveGameData *saveGameData);
public:
    static void *operator new(unsigned __int32 size);
    static void operator delete(void *p, unsigned __int32 size);
    SphereBurst &operator=(SphereBurst &); /* compiler_generated() */
};
static_assert(sizeof(SphereBurst) == 584, "Invalid SphereBurst size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_4AA77A(SphereBurst *const, float);
_inline void SphereBurst::setRadius(float) // 0x4AA77A
{
    mangled_assert("?setRadius@SphereBurst@@QAEXM@Z");
    todo("implement");
    _sub_4AA77A(this, arg);
}

_extern bool _sub_4A8E38(SphereBurst *const);
_inline bool SphereBurst::isDeterministic() // 0x4A8E38
{
    mangled_assert("?isDeterministic@SphereBurst@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_4A8E38(this);
    return __result;
}

_extern char const *_sub_4A8F95(SphereBurst *const);
_inline char const *SphereBurst::saveToken() // 0x4A8F95
{
    mangled_assert("?saveToken@SphereBurst@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_4A8F95(this);
    return __result;
}

_extern _sub_4A8507(SphereBurst::CollisionInfo *const, Sob *, Collision::Point const &);
_inline SphereBurst::CollisionInfo::CollisionInfo(Sob *, Collision::Point const &) // 0x4A8507
{
    mangled_assert("??0CollisionInfo@SphereBurst@@QAE@PAVSob@@ABUPoint@Collision@@@Z");
    todo("implement");
    _sub_4A8507(this, arg, arg);
}

/* ---------- private code */

#endif // __SPHEREBURST_H__
#endif
