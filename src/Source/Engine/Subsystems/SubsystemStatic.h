#if 0
#ifndef __SUBSYSTEMSTATIC_H__
#define __SUBSYSTEMSTATIC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SubSystemStatic :
    public SobWithMeshStatic
{
public:
    SubSystemStatic(SubSystemStatic const &); /* compiler_generated() */
protected:
    SubSystemStatic(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, SobType);
    typedef SobWithMeshStatic SuperClass;
public:
    virtual ~SubSystemStatic() override;
    static SobStatic *Create(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name, SobStatic *found);
    static __int32 StartSubSystemConfig(lua_State *lstate);
    bool Load(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    bool m_isResearch; // 0x2AC
    __int32 m_costToBuild; // 0x2B0
    __int32 m_timeToBuild; // 0x2B4
    float m_collateralDamage; // 0x2B8
    float m_inactiveTimeAfterDamage; // 0x2BC
    float m_activateHealthPercentage; // 0x2C0
    bool m_bInnate; // 0x2C4
    SubSystemType m_type; // 0x2C8
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_genericTypeString; // 0x2CC
    unsigned __int32 m_genericTypeId; // 0x2E4
    ModifierApplier m_modifierApplier; // 0x2E8
    ModifierUIInfo m_modifierUIInfo; // 0x2F4
    WeaponStaticInfo weaponStaticInfo; // 0x304
    bool m_visible; // 0x320
    SubSystemStatic &operator=(SubSystemStatic const &); /* compiler_generated() */
};
static_assert(sizeof(SubSystemStatic) == 804, "Invalid SubSystemStatic size");

class SubSystemFinder :
    public StaticFinder
{
public:
    SubSystemFinder(SubSystemFinder const &); /* compiler_generated() */
    _inline SubSystemFinder(char const *);
    virtual bool operator()(SobStatic const *) const override;
private:
    char const *m_genericName; // 0x4
public:
    virtual _inline ~SubSystemFinder() override; /* compiler_generated() */
    SubSystemFinder &operator=(SubSystemFinder const &); /* compiler_generated() */
};
static_assert(sizeof(SubSystemFinder) == 8, "Invalid SubSystemFinder size");

class SubSystemFinderById :
    public StaticFinder
{
public:
    SubSystemFinderById(SubSystemFinderById const &); /* compiler_generated() */
    _inline SubSystemFinderById(unsigned __int32);
    virtual bool operator()(SobStatic const *) const override;
private:
    unsigned __int32 m_genericTypeId; // 0x4
public:
    virtual _inline ~SubSystemFinderById() override; /* compiler_generated() */
    SubSystemFinderById &operator=(SubSystemFinderById const &); /* compiler_generated() */
};
static_assert(sizeof(SubSystemFinderById) == 8, "Invalid SubSystemFinderById size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline SubSystemFinder::SubSystemFinder(char const *) // 0x50DB26
{
    mangled_assert("??0SubSystemFinder@@QAE@PBD@Z");
    todo("implement");
}

_inline bool SubSystemFinder::operator()(SobStatic const *) const // 0x50DFA4
{
    mangled_assert("??RSubSystemFinder@@UBE_NPBVSobStatic@@@Z");
    todo("implement");
}

_inline SubSystemFinderById::SubSystemFinderById(unsigned __int32) // 0x612E9A
{
    mangled_assert("??0SubSystemFinderById@@QAE@I@Z");
    todo("implement");
}

_inline bool SubSystemFinderById::operator()(SobStatic const *) const // 0x612FA5
{
    mangled_assert("??RSubSystemFinderById@@UBE_NPBVSobStatic@@@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __SUBSYSTEMSTATIC_H__
#endif
