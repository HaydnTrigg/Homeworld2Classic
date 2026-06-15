#if 0
#ifndef __ASTEROID_H__
#define __ASTEROID_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Asteroid :
    public Resource
{
public:
    typedef Resource SuperClass;
    Asteroid(Asteroid &); /* compiler_generated() */
    Asteroid(SaveGameData *);
    Asteroid(char const *, bool);
    virtual ~Asteroid() override;
    virtual void RemoveFromSimulation() override;
    virtual _inline bool isLatchingResource() const override;
    virtual _inline bool isHaulingResource() const override;
    virtual bool latchShip(Ship *) override;
    virtual bool update(float) override;
    _inline AsteroidStatic const *getStatic() const;
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    static char const m_saveToken[0];
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
protected:
    void RemoveAllSimData();
public:
    Asteroid &operator=(Asteroid &); /* compiler_generated() */
};
static_assert(sizeof(Asteroid) == 724, "Invalid Asteroid size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline bool Asteroid::isLatchingResource() const // 0x4B144E
{
    mangled_assert("?isLatchingResource@Asteroid@@UBE_NXZ");
    todo("implement");
}

_inline bool Asteroid::isHaulingResource() const // 0x4B144B
{
    mangled_assert("?isHaulingResource@Asteroid@@UBE_NXZ");
    todo("implement");
}

_inline AsteroidStatic const *Asteroid::getStatic() const // 0x4B1439
{
    mangled_assert("?getStatic@Asteroid@@QBEPBVAsteroidStatic@@XZ");
    todo("implement");
}

_inline bool Asteroid::isDeterministic() // 0x4B1448
{
    mangled_assert("?isDeterministic@Asteroid@@UAE_NXZ");
    todo("implement");
}

_inline char const *Asteroid::saveToken() // 0x4B15E0
{
    mangled_assert("?saveToken@Asteroid@@UAEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __ASTEROID_H__
#endif
