#if 0
#ifndef __INSTANTHIT_H__
#define __INSTANTHIT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class InstantHit :
    public WeaponFire
{
public:
    typedef WeaponFire SuperClass;
    InstantHit(InstantHit &); /* compiler_generated() */
    InstantHit(SaveGameData *);
    InstantHit(char const *, Sob *, WeaponTargetInfo const &);
    virtual ~InstantHit() override;
    virtual void initialize(WeaponStatic const *) override;
    virtual bool update(float) override;
    virtual bool hitsSob(Sob *, vector3 const &, vector3 const &) override;
    virtual void render(matrix4 &) override;
    virtual void PerformCollisionDetection() override;
    WeaponTargetInfo m_target; // 0x23C
    SobID m_owner; // 0x270
private:
    vector3 m_inaccurateOffset; // 0x27C
public:
    virtual bool isMoving() const override;
    virtual bool isRotating() const override;
    virtual float getDamageMultiplier() const override;
    virtual void setAccurate(bool) override;
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    static char const m_saveToken[0];
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
protected:
    virtual void RemoveFromSimulation() override;
    void RemoveAllSimData();
    virtual bool ShouldIgnore(Sob *) override;
    struct CollisionInfo
    {
        Sob *m_sob; // 0x0
        Collision::PointPair m_collisions; // 0x4
        _inline CollisionInfo(Sob *, Collision::PointPair const &);
        _inline CollisionInfo();
    };
    static_assert(sizeof(CollisionInfo) == 68, "Invalid CollisionInfo size");
private:
    void CollisionResponse(std::vector<InstantHit::CollisionInfo,std::allocator<InstantHit::CollisionInfo> > const &);
public:
    static void *operator new(unsigned __int32 size);
    static void operator delete(void *p, unsigned __int32 size);
    InstantHit &operator=(InstantHit &); /* compiler_generated() */
};
static_assert(sizeof(InstantHit) == 648, "Invalid InstantHit size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern bool _sub_4A7BCD(InstantHit *const);
_inline bool InstantHit::isDeterministic() // 0x4A7BCD
{
    mangled_assert("?isDeterministic@InstantHit@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_4A7BCD(this);
    return __result;
}

_extern char const *_sub_4A7D3B(InstantHit *const);
_inline char const *InstantHit::saveToken() // 0x4A7D3B
{
    mangled_assert("?saveToken@InstantHit@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_4A7D3B(this);
    return __result;
}

_extern _sub_4A67AB(InstantHit::CollisionInfo *const);
_inline InstantHit::CollisionInfo::CollisionInfo() // 0x4A67AB
{
    mangled_assert("??0CollisionInfo@InstantHit@@QAE@XZ");
    todo("implement");
    _sub_4A67AB(this);
}

_extern _sub_4A678E(InstantHit::CollisionInfo *const, Sob *, Collision::PointPair const &);
_inline InstantHit::CollisionInfo::CollisionInfo(Sob *, Collision::PointPair const &) // 0x4A678E
{
    mangled_assert("??0CollisionInfo@InstantHit@@QAE@PAVSob@@ABUPointPair@Collision@@@Z");
    todo("implement");
    _sub_4A678E(this, arg, arg);
}

/* ---------- private code */

#endif // __INSTANTHIT_H__
#endif
