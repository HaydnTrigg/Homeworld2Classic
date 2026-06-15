#if 0
#ifndef __MODIFIERUIINFO_H__
#define __MODIFIERUIINFO_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class ModifierUIInfo
{
public:
    enum ModifierType
    {
        Ability = 0,
        Multiplier,
    };
    struct ModifierUIEntry
    {
        _inline ModifierUIEntry();
        vector4 m_colour; // 0x0
        float m_radius; // 0x10
        ModifierUIInfo::ModifierType m_modifierType; // 0x14
        AbilityType m_abilityType; // 0x18
        MultiplierType m_multiplierType; // 0x1C
    };
    static_assert(sizeof(ModifierUIEntry) == 32, "Invalid ModifierUIEntry size");
    ModifierUIInfo(ModifierUIInfo const &); /* compiler_generated() */
    ModifierUIInfo();
    void addEffect(ModifierEffect const *);
    bool hasEffectsToDraw() const;
    _inline unsigned __int32 getNumberOfModifiers() const;
    _inline ModifierUIInfo::ModifierUIEntry const &getModifier(unsigned __int32) const;
    typedef std::vector<ModifierUIInfo::ModifierUIEntry,std::allocator<ModifierUIInfo::ModifierUIEntry> > ModifierUIEntryVector;
private:
    std::vector<ModifierUIInfo::ModifierUIEntry,std::allocator<ModifierUIInfo::ModifierUIEntry> > m_modifierUIInfo; // 0x0
    bool m_init; // 0xC
    void init();
public:
    _inline ~ModifierUIInfo(); /* compiler_generated() */
    ModifierUIInfo &operator=(ModifierUIInfo const &); /* compiler_generated() */
};
static_assert(sizeof(ModifierUIInfo) == 16, "Invalid ModifierUIInfo size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline ModifierUIInfo::ModifierUIEntry::ModifierUIEntry() // 0x56F2CA
{
    mangled_assert("??0ModifierUIEntry@ModifierUIInfo@@QAE@XZ");
    todo("implement");
}

_inline unsigned __int32 ModifierUIInfo::getNumberOfModifiers() const // 0x45A870
{
    mangled_assert("?getNumberOfModifiers@ModifierUIInfo@@QBEIXZ");
    todo("implement");
}

_inline ModifierUIInfo::ModifierUIEntry const &ModifierUIInfo::getModifier(unsigned __int32) const // 0x45A832
{
    mangled_assert("?getModifier@ModifierUIInfo@@QBEABUModifierUIEntry@1@I@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __MODIFIERUIINFO_H__
#endif
