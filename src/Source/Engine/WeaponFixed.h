#if 0
#ifndef __WEAPONFIXED_H__
#define __WEAPONFIXED_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class WeaponFixed :
    public Weapon
{
public:
    typedef Weapon SuperClass;
    WeaponFixed(WeaponFixed const &); /* compiler_generated() */
    WeaponFixed(SaveGameData *);
    WeaponFixed(Sob *);
    virtual ~WeaponFixed() override;
    virtual bool canReachTarget(WeaponTargetInfo const &) override;
    virtual void aimAtCurrentTarget() override;
    virtual void bindData(WeaponStatic *, WeaponClassSpecificInfo *) override;
    virtual void getWorldSpaceMuzzle(vector3 &, vector3 &, vector3 &) override;
    virtual void getWorldSpaceMuzzle(vector3 &, vector3 &) override;
protected:
    virtual _inline void findNewPointOnTarget(WeaponTargetInfo &) override;
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    WeaponFixed &operator=(WeaponFixed const &); /* compiler_generated() */
};
static_assert(sizeof(WeaponFixed) == 116, "Invalid WeaponFixed size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_4A0A29(WeaponFixed *const, WeaponTargetInfo &);
_inline void WeaponFixed::findNewPointOnTarget(WeaponTargetInfo &) // 0x4A0A29
{
    mangled_assert("?findNewPointOnTarget@WeaponFixed@@MAEXAAVWeaponTargetInfo@@@Z");
    todo("implement");
    _sub_4A0A29(this, arg);
}

_extern bool _sub_4A0FE4(WeaponFixed *const);
_inline bool WeaponFixed::isDeterministic() // 0x4A0FE4
{
    mangled_assert("?isDeterministic@WeaponFixed@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_4A0FE4(this);
    return __result;
}

_extern char const *_sub_4A1080(WeaponFixed *const);
_inline char const *WeaponFixed::saveToken() // 0x4A1080
{
    mangled_assert("?saveToken@WeaponFixed@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_4A1080(this);
    return __result;
}

/* ---------- private code */

#endif // __WEAPONFIXED_H__
#endif
