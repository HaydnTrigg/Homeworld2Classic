#if 0
#ifndef __WEAPONANIMATEDTURRET_H__
#define __WEAPONANIMATEDTURRET_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class WeaponAnimatedTurret :
    public Weapon
{
public:
    typedef Weapon SuperClass;
    WeaponAnimatedTurret(WeaponAnimatedTurret const &); /* compiler_generated() */
    WeaponAnimatedTurret(SaveGameData *);
    WeaponAnimatedTurret(Sob *);
    virtual ~WeaponAnimatedTurret() override;
    virtual bool slave() override;
    virtual void bindData(WeaponStatic *, WeaponClassSpecificInfo *) override;
    virtual void getWorldSpaceMuzzle(vector3 &, vector3 &, vector3 &) override;
    virtual void getWorldSpaceMuzzle(vector3 &, vector3 &) override;
    virtual _inline float getAzimuthOffset() override;
    virtual _inline float getDeclinationOffset() override;
protected:
    float m_azimuthOffset; // 0x74
    float m_declinationOffset; // 0x78
    SoundEntityHandle m_turretEmmiterHandle; // 0x7C
private:
    bool m_bThreeSixty; // 0x84
protected:
    virtual bool canReachTarget(WeaponTargetInfo const &) override;
    virtual void aimAtCurrentTarget() override;
    virtual void MoveToHomePosition() override;
    virtual void findNewPointOnTarget(WeaponTargetInfo &) override;
private:
    _inline bool threeSixtyRotation();
    bool interpolateNewAngle(float &, float, float);
    bool moveAzimuthTo(float, float);
    bool moveDeclinationTo(float, float);
    bool moveTurretTo(float, float, float);
    void getAnglesToTarget(WeaponTargetInfo const &, float &, float &) const;
public:
    virtual void bindStatics(WeaponStatic *, WeaponClassSpecificInfo *) override;
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    WeaponAnimatedTurret &operator=(WeaponAnimatedTurret const &); /* compiler_generated() */
};
static_assert(sizeof(WeaponAnimatedTurret) == 136, "Invalid WeaponAnimatedTurret size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern float _sub_49F682(WeaponAnimatedTurret *const);
_inline float WeaponAnimatedTurret::getAzimuthOffset() // 0x49F682
{
    mangled_assert("?getAzimuthOffset@WeaponAnimatedTurret@@UAEMXZ");
    todo("implement");
    float __result = _sub_49F682(this);
    return __result;
}

_extern float _sub_49F686(WeaponAnimatedTurret *const);
_inline float WeaponAnimatedTurret::getDeclinationOffset() // 0x49F686
{
    mangled_assert("?getDeclinationOffset@WeaponAnimatedTurret@@UAEMXZ");
    todo("implement");
    float __result = _sub_49F686(this);
    return __result;
}

_extern bool _sub_4A05B4(WeaponAnimatedTurret *const);
_inline bool WeaponAnimatedTurret::threeSixtyRotation() // 0x4A05B4
{
    mangled_assert("?threeSixtyRotation@WeaponAnimatedTurret@@AAE_NXZ");
    todo("implement");
    bool __result = _sub_4A05B4(this);
    return __result;
}

_extern bool _sub_4A0348(WeaponAnimatedTurret *const);
_inline bool WeaponAnimatedTurret::isDeterministic() // 0x4A0348
{
    mangled_assert("?isDeterministic@WeaponAnimatedTurret@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_4A0348(this);
    return __result;
}

_extern char const *_sub_4A058B(WeaponAnimatedTurret *const);
_inline char const *WeaponAnimatedTurret::saveToken() // 0x4A058B
{
    mangled_assert("?saveToken@WeaponAnimatedTurret@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_4A058B(this);
    return __result;
}

/* ---------- private code */

#endif // __WEAPONANIMATEDTURRET_H__
#endif
