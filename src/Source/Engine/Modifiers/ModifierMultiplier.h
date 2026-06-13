#if 0
#ifndef __MODIFIERMULTIPLIER_H__
#define __MODIFIERMULTIPLIER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class ModifierMultiplier :
    public ModifierEffect
{
public:
    ModifierMultiplier(ModifierMultiplier const &); /* compiler_generated() */
    ModifierMultiplier(MultiplierType, InfluenceType, ActivityRelation, float, float, float);
    virtual ~ModifierMultiplier() override;
    _inline MultiplierType getMultiplierType() const;
protected:
    virtual void applyEffectTo(Ship *, float) const override;
private:
    MultiplierType m_multiplierType; // 0xC
    float m_multiplierHigh; // 0x10
    float m_multiplierLow; // 0x14
    ActivityRelation m_activityRelation; // 0x18
public:
    ModifierMultiplier &operator=(ModifierMultiplier const &); /* compiler_generated() */
};
static_assert(sizeof(ModifierMultiplier) == 28, "Invalid ModifierMultiplier size");

class ModifierMultiplier :
    public ModifierEffect
{
public:
    ModifierMultiplier(ModifierMultiplier const &); /* compiler_generated() */
    ModifierMultiplier(MultiplierType, InfluenceType, ActivityRelation, float, float, float);
    virtual ~ModifierMultiplier() override;
    _inline MultiplierType getMultiplierType() const;
protected:
    virtual void applyEffectTo(Ship *, float) const override;
private:
    MultiplierType m_multiplierType; // 0xC
    float m_multiplierHigh; // 0x10
    float m_multiplierLow; // 0x14
    ActivityRelation m_activityRelation; // 0x18
public:
    ModifierMultiplier &operator=(ModifierMultiplier const &); /* compiler_generated() */
};
static_assert(sizeof(ModifierMultiplier) == 28, "Invalid ModifierMultiplier size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern MultiplierType _sub_56F683(ModifierMultiplier const *const);
_inline MultiplierType ModifierMultiplier::getMultiplierType() const // 0x56F683
{
    mangled_assert("?getMultiplierType@ModifierMultiplier@@QBE?AW4MultiplierType@@XZ");
    todo("implement");
    MultiplierType __result = _sub_56F683(this);
    return __result;
}

/* ---------- private code */

#endif // __MODIFIERMULTIPLIER_H__
#endif
