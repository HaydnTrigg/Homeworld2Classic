#if 0
#ifndef __MODIFIERAPPLIER_H__
#define __MODIFIERAPPLIER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class ModifierApplier
{
public:
    ~ModifierApplier();
    void addEffect(ModifierEffect *);
    _inline bool hasEffectsToApply() const;
    _inline unsigned __int32 getNumberOfEffects() const;
    void applyModifierEffects(Ship *, vector3 const &, float, std::vector<Selection *,std::allocator<Selection *> > *) const;
    typedef std::vector<ModifierEffect *,std::allocator<ModifierEffect *> > ModifierEffectVector;
private:
    std::vector<ModifierEffect *,std::allocator<ModifierEffect *> > m_modifierEffects; // 0x0
public:
    ModifierApplier(ModifierApplier const &); /* compiler_generated() */
    _inline ModifierApplier(); /* compiler_generated() */
    ModifierApplier &operator=(ModifierApplier const &); /* compiler_generated() */
};
static_assert(sizeof(ModifierApplier) == 12, "Invalid ModifierApplier size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline bool ModifierApplier::hasEffectsToApply() const // 0x48D628
{
    mangled_assert("?hasEffectsToApply@ModifierApplier@@QBE_NXZ");
    todo("implement");
}

_inline unsigned __int32 ModifierApplier::getNumberOfEffects() const // 0x48C891
{
    mangled_assert("?getNumberOfEffects@ModifierApplier@@QBEIXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __MODIFIERAPPLIER_H__
#endif
