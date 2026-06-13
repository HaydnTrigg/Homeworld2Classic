#if 0
#ifndef __MODIFIERABILITY_H__
#define __MODIFIERABILITY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class ModifierAbility :
    public ModifierEffect
{
public:
    ModifierAbility(ModifierAbility const &); /* compiler_generated() */
    ModifierAbility(AbilityType, InfluenceType, float, bool);
    virtual ~ModifierAbility() override;
    _inline AbilityType getAbilityType() const;
protected:
    virtual void applyEffectTo(Ship *, float) const override;
private:
    AbilityType m_abilityType; // 0xC
    bool m_enable; // 0x10
public:
    ModifierAbility &operator=(ModifierAbility const &); /* compiler_generated() */
};
static_assert(sizeof(ModifierAbility) == 20, "Invalid ModifierAbility size");

class ModifierAbility :
    public ModifierEffect
{
public:
    ModifierAbility(ModifierAbility const &); /* compiler_generated() */
    ModifierAbility(AbilityType, InfluenceType, float, bool);
    virtual ~ModifierAbility() override;
    _inline AbilityType getAbilityType() const;
protected:
    virtual void applyEffectTo(Ship *, float) const override;
private:
    AbilityType m_abilityType; // 0xC
    bool m_enable; // 0x10
public:
    ModifierAbility &operator=(ModifierAbility const &); /* compiler_generated() */
};
static_assert(sizeof(ModifierAbility) == 20, "Invalid ModifierAbility size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern AbilityType _sub_56F63E(ModifierAbility const *const);
_inline AbilityType ModifierAbility::getAbilityType() const // 0x56F63E
{
    mangled_assert("?getAbilityType@ModifierAbility@@QBE?AW4AbilityType@@XZ");
    todo("implement");
    AbilityType __result = _sub_56F63E(this);
    return __result;
}

/* ---------- private code */

#endif // __MODIFIERABILITY_H__
#endif
