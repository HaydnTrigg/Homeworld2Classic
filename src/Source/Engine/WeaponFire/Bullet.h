#if 0
#ifndef __BULLET_H__
#define __BULLET_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Bullet :
    public WeaponFire
{
public:
    typedef WeaponFire SuperClass;
    Bullet(Bullet &); /* compiler_generated() */
    Bullet(SaveGameData *);
    Bullet(char const *, Sob *, WeaponTargetInfo const &);
    virtual ~Bullet() override;
    virtual void initialize(WeaponStatic const *) override;
    virtual bool update(float) override;
    virtual void render(matrix4 &) override;
    virtual void PerformCollisionDetection() override;
    WeaponTargetInfo m_target; // 0x23C
    float m_speed; // 0x270
protected:
    float m_renderDeathTime; // 0x274
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    static char const m_saveToken[0];
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    _inline void setRenderDeathTime(float);
protected:
    virtual void RemoveFromSimulation() override;
    void RemoveAllSimData();
private:
    void spawnMissResults(vector3 const &, vector3 const &);
    void CollisionResponse(Sob *, Collision::Point const &);
public:
    static void *operator new(unsigned __int32 size);
    static void operator delete(void *p, unsigned __int32 size);
    Bullet &operator=(Bullet &); /* compiler_generated() */
};
static_assert(sizeof(Bullet) == 632, "Invalid Bullet size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline bool Bullet::isDeterministic() // 0x4A58F4
{
    mangled_assert("?isDeterministic@Bullet@@UAE_NXZ");
    todo("implement");
}

_inline char const *Bullet::saveToken() // 0x4A59EF
{
    mangled_assert("?saveToken@Bullet@@UAEPBDXZ");
    todo("implement");
}

_inline void Bullet::setRenderDeathTime(float) // 0x4C3B9C
{
    mangled_assert("?setRenderDeathTime@Bullet@@QAEXM@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __BULLET_H__
#endif
