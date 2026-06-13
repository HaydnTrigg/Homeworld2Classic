#if 0
#ifndef __WEAPONGIMBLE_H__
#define __WEAPONGIMBLE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class WeaponGimble :
    public Weapon
{
public:
    typedef Weapon SuperClass;
    WeaponGimble(WeaponGimble const &); /* compiler_generated() */
    WeaponGimble(SaveGameData *);
    WeaponGimble(Sob *);
    virtual ~WeaponGimble() override;
    virtual bool canReachTarget(WeaponTargetInfo const &) override;
    virtual void aimAtCurrentTarget() override;
    virtual bool slave() override;
    virtual void bindData(WeaponStatic *, WeaponClassSpecificInfo *) override;
    virtual void getWorldSpaceMuzzle(vector3 &, vector3 &, vector3 &) override;
    virtual void getWorldSpaceMuzzle(vector3 &, vector3 &) override;
protected:
    vector3 m_cachedAim; // 0x74
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
    WeaponGimble &operator=(WeaponGimble const &); /* compiler_generated() */
};
static_assert(sizeof(WeaponGimble) == 128, "Invalid WeaponGimble size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_4A12F3(WeaponGimble *const, WeaponTargetInfo &);
_inline void WeaponGimble::findNewPointOnTarget(WeaponTargetInfo &) // 0x4A12F3
{
    mangled_assert("?findNewPointOnTarget@WeaponGimble@@MAEXAAVWeaponTargetInfo@@@Z");
    todo("implement");
    _sub_4A12F3(this, arg);
}

_extern bool _sub_4A1A76(WeaponGimble *const);
_inline bool WeaponGimble::isDeterministic() // 0x4A1A76
{
    mangled_assert("?isDeterministic@WeaponGimble@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_4A1A76(this);
    return __result;
}

_extern char const *_sub_4A1B12(WeaponGimble *const);
_inline char const *WeaponGimble::saveToken() // 0x4A1B12
{
    mangled_assert("?saveToken@WeaponGimble@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_4A1B12(this);
    return __result;
}

/* ---------- private code */

#endif // __WEAPONGIMBLE_H__
#endif
