#if 0
#ifndef __DEFENSEFIELD_H__
#define __DEFENSEFIELD_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class DefenseField :
    public Sob
{
public:
    typedef Sob SuperClass;
    DefenseField(DefenseField &); /* compiler_generated() */
    DefenseField(SaveGameData *);
    DefenseField(SobID const &);
    virtual ~DefenseField() override;
    virtual bool update(float) override;
    virtual _inline vector3 const &getPosition() const override;
    void Set(vector3 const &, float);
    _inline void SetPlayerIndex(__int32);
    bool doCollision(InstantHit *, Collision::Point const &);
    bool doCollision(Bullet *, Collision::Point const &);
    bool doCollision(Missile *, Collision::Point const &);
    DefenseFieldStatic const *getStatic() const;
protected:
    virtual void UpdateCollisionProxies() override;
    void spawnEffects(vector3 const &);
    __int32 m_playerIndex; // 0x1CC
private:
    Selection m_ignoredSobs; // 0x1D0
    Selection m_blockedSobs; // 0x204
    SobID m_ownerID; // 0x238
    void callDefenseSpeech(Ship *) const;
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    static char const m_saveToken[0];
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    DefenseField &operator=(DefenseField &); /* compiler_generated() */
};
static_assert(sizeof(DefenseField) == 580, "Invalid DefenseField size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline vector3 const &DefenseField::getPosition() const // 0x4C3AF3
{
    mangled_assert("?getPosition@DefenseField@@UBEABVvector3@@XZ");
    todo("implement");
}

_inline void DefenseField::SetPlayerIndex(__int32) // 0x4856AC
{
    mangled_assert("?SetPlayerIndex@DefenseField@@QAEXH@Z");
    todo("implement");
}

_inline bool DefenseField::isDeterministic() // 0x4C3AFA
{
    mangled_assert("?isDeterministic@DefenseField@@UAE_NXZ");
    todo("implement");
}

_inline char const *DefenseField::saveToken() // 0x4C3B96
{
    mangled_assert("?saveToken@DefenseField@@UAEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __DEFENSEFIELD_H__
#endif
