#if 0
#ifndef __MODIFIEREFFECT_H__
#define __MODIFIEREFFECT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class ModifierEffect
{
public:
    ModifierEffect(ModifierEffect const &); /* compiler_generated() */
    ModifierEffect(InfluenceType, float);
    virtual ~ModifierEffect();
    void apply(Ship *, vector3 const &, float, Selection *) const;
    _inline float getSphereRadius() const;
protected:
    virtual void applyEffectTo(Ship *, float) const = 0;
private:
    InfluenceType m_influenceType; // 0x4
    float m_sphereRadius; // 0x8
public:
    ModifierEffect &operator=(ModifierEffect const &); /* compiler_generated() */
};
static_assert(sizeof(ModifierEffect) == 12, "Invalid ModifierEffect size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern float _sub_56F687(ModifierEffect const *const);
_inline float ModifierEffect::getSphereRadius() const // 0x56F687
{
    mangled_assert("?getSphereRadius@ModifierEffect@@QBEMXZ");
    todo("implement");
    float __result = _sub_56F687(this);
    return __result;
}

/* ---------- private code */

#endif // __MODIFIEREFFECT_H__
#endif
