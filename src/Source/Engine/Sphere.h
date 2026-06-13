#if 0
#ifndef __SPHERE_H__
#define __SPHERE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Sphere :
    public Volume
{
public:
    Sphere(Sphere &); /* compiler_generated() */
    Sphere(SaveGameData *);
    Sphere(char const *, vector3 const &, float, bool);
    _inline float getRadius() const;
    void setSphere(vector3 &, float);
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    static char const m_saveToken[0];
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    void staticInit();
private:
    float m_radius; // 0x230
    static SaveData const m_saveData[0];
public:
    virtual _inline ~Sphere() override; /* compiler_generated() */
    Sphere &operator=(Sphere &); /* compiler_generated() */
};
static_assert(sizeof(Sphere) == 564, "Invalid Sphere size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern float _sub_4B264D(Sphere const *const);
_inline float Sphere::getRadius() const // 0x4B264D
{
    mangled_assert("?getRadius@Sphere@@QBEMXZ");
    todo("implement");
    float __result = _sub_4B264D(this);
    return __result;
}

_extern bool _sub_4B2095(Sphere *const);
_inline bool Sphere::isDeterministic() // 0x4B2095
{
    mangled_assert("?isDeterministic@Sphere@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_4B2095(this);
    return __result;
}

_extern char const *_sub_4B2131(Sphere *const);
_inline char const *Sphere::saveToken() // 0x4B2131
{
    mangled_assert("?saveToken@Sphere@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_4B2131(this);
    return __result;
}

/* ---------- private code */

#endif // __SPHERE_H__
#endif
