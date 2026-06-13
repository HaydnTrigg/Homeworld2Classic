#if 0
#ifndef __NEBULAGROUP_H__
#define __NEBULAGROUP_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class NebulaGroup :
    public NebulaGroupBase
{
public:
    typedef NebulaGroupBase SuperClass;
    char const *getName();
    virtual bool update(float) override;
    void applyMultipliersAndAbilities();
    void fadeNebula(float);
    NebulaGroup(NebulaGroup const &); /* compiler_generated() */
private:
    NebulaGroup(char const *);
public:
    NebulaGroup(SaveGameData *);
private:
    void addNebula(Nebula *);
    void updateDamaging(float);
    void updateFading(float);
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x14
    Selection m_nebulas; // 0x2C
    bool m_fading; // 0x60
    float m_currentTime; // 0x64
    float m_deathTime; // 0x68
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    void defaultSettings();
    virtual _inline char const *saveToken() override;
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    virtual _inline ~NebulaGroup() override; /* compiler_generated() */
    NebulaGroup &operator=(NebulaGroup const &); /* compiler_generated() */
};
static_assert(sizeof(NebulaGroup) == 108, "Invalid NebulaGroup size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern bool _sub_4C13F3(NebulaGroup *const);
_inline bool NebulaGroup::isDeterministic() // 0x4C13F3
{
    mangled_assert("?isDeterministic@NebulaGroup@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_4C13F3(this);
    return __result;
}

_extern char const *_sub_4C148B(NebulaGroup *const);
_inline char const *NebulaGroup::saveToken() // 0x4C148B
{
    mangled_assert("?saveToken@NebulaGroup@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_4C148B(this);
    return __result;
}

/* ---------- private code */

#endif // __NEBULAGROUP_H__
#endif
