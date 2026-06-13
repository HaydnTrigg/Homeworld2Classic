#if 0
#ifndef __PEBBLE_H__
#define __PEBBLE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Pebble :
    public Sob
{
public:
    typedef Sob SuperClass;
    Pebble(Pebble &); /* compiler_generated() */
    Pebble(char const *);
    virtual _inline bool isDeterministic() override;
    _inline PebbleStatic const *getStatic() const;
    virtual _inline vector3 const &getPosition() const override;
    virtual void setPosition(vector3 const &) override;
    virtual void render(Camera const *, MeshRenderProxy &);
private:
    matrix4 m_matrix; // 0x1CC
    vector3 m_position; // 0x20C
    bool renderDot(Camera const *, vector4 const &, float);
public:
    virtual _inline ~Pebble() override; /* compiler_generated() */
    Pebble &operator=(Pebble &); /* compiler_generated() */
};
static_assert(sizeof(Pebble) == 536, "Invalid Pebble size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern bool _sub_4C3EEA(Pebble *const);
_inline bool Pebble::isDeterministic() // 0x4C3EEA
{
    mangled_assert("?isDeterministic@Pebble@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_4C3EEA(this);
    return __result;
}

_extern PebbleStatic const *_sub_4C3EE3(Pebble const *const);
_inline PebbleStatic const *Pebble::getStatic() const // 0x4C3EE3
{
    mangled_assert("?getStatic@Pebble@@QBEPBVPebbleStatic@@XZ");
    todo("implement");
    PebbleStatic const * __result = _sub_4C3EE3(this);
    return __result;
}

_extern vector3 const &_sub_4C3EDC(Pebble const *const);
_inline vector3 const &Pebble::getPosition() const // 0x4C3EDC
{
    mangled_assert("?getPosition@Pebble@@UBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_4C3EDC(this);
    return __result;
}

/* ---------- private code */

#endif // __PEBBLE_H__
#endif
