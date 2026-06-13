#if 0
#ifndef __WEAPONSTATIC_H__
#define __WEAPONSTATIC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum WeaponType
{
    WT_Fixed = 0,
    WT_Gimble,
    WT_AnimatedTurret,
};

enum WeaponActivate
{
    WA_NormalAttackOnly = 1, // 0x0001
    WA_SpecialAttackOnly = 2, // 0x0002
    WA_NormalAndSpecialAttacks = 3, // 0x0003
    WA_DroppedWeapon = 4, // 0x0004
};

/* ---------- definitions */

class WeaponFireParameters
{
public:
    WeaponFireParameters();
    ~WeaponFireParameters();
    float weaponFireSpeed; // 0x0
    float weaponFireRange; // 0x4
    float weaponFireRadius; // 0x8
    float weaponFireLifetime; // 0xC
    float weaponFireMisc1; // 0x10
    unsigned __int32 weaponFireAxis; // 0x14
    unsigned __int32 maxEffectSpawns; // 0x18
};
static_assert(sizeof(WeaponFireParameters) == 28, "Invalid WeaponFireParameters size");

class WeaponStatic
{
public:
    WeaponStatic(WeaponStatic const &); /* compiler_generated() */
    WeaponStatic();
    ~WeaponStatic();
    static bool scriptInit();
    static WeaponStatic *Create(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name, WeaponStatic *wst, bool forceReload);
    static void Clear();
    typedef std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,WeaponStatic *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,WeaponStatic *> > > weaponStaticMap;
protected:
    static std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,WeaponStatic *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,WeaponStatic *> > > m_weaponStatics;
public:
    Weapon *CreateAndBindWeapon(Sob *, __int32);
    float getPerSecondDamageRating() const;
    unsigned __int32 timeStamp; // 0x0
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x4
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > typeName; // 0x1C
    WeaponType m_weaponType; // 0x34
    WeaponFireType m_weaponFireType; // 0x38
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > weaponFireName; // 0x3C
    WeaponFireParameters weaponFireParameters; // 0x54
    WeaponActivate m_activation; // 0x70
    float *m_weaponAccuracy; // 0x74
    bool *m_inaccurateShotsDoDamage; // 0x78
    float m_defenseFieldPercentage; // 0x7C
    float *m_weaponPenetration; // 0x80
    float m_shieldPenetrationMultipler; // 0x84
    bool useVelocityPred; // 0x88
    float fireTime; // 0x8C
    float burstFireTime; // 0x90
    float burstWaitTime; // 0x94
    std::vector<WeaponResult,std::allocator<WeaponResult> > m_anticipationResults; // 0x98
    std::vector<WeaponResult,std::allocator<WeaponResult> > m_fireResults; // 0xA4
    std::vector<WeaponResult,std::allocator<WeaponResult> > m_hitResults; // 0xB0
    std::vector<WeaponResult,std::allocator<WeaponResult> > m_missResults; // 0xBC
    std::vector<WeaponResult,std::allocator<WeaponResult> > m_expireResults; // 0xC8
    float cosMaxAngleFromNorm; // 0xD4
    float m_minAzimuth; // 0xD8
    float m_maxAzimuth; // 0xDC
    float m_minDeclination; // 0xE0
    float m_maxDeclination; // 0xE4
    float m_azimuthPerStep; // 0xE8
    float m_declinationPerStep; // 0xEC
    float m_cosAzimuthPerStep; // 0xF0
    float m_cosDeclinationPerStep; // 0xF4
    float m_speedMultiplierWhenPointingAtTarget; // 0xF8
    float m_offsetFireTime; // 0xFC
    float m_recoilDistance; // 0x100
    bool m_trackOutsideArc; // 0x104
    bool m_doLineOfFireCheck; // 0x105
    bool m_shootAtSecondaries; // 0x106
    bool m_shootAtSurroundings; // 0x107
    bool m_useCodeRedAnimation; // 0x108
    PatchID m_animTurretSound; // 0x10C
    float m_blowThroughHealth; // 0x110
    float calculatePentrationVs(unsigned __int32) const;
    void initialiseShieldPenetration(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    static void staticLoadChangedStatics();
    WeaponStatic &operator=(WeaponStatic const &); /* compiler_generated() */
};
static_assert(sizeof(WeaponStatic) == 276, "Invalid WeaponStatic size");

class WeaponStatic
{
public:
    WeaponStatic(WeaponStatic const &); /* compiler_generated() */
    WeaponStatic();
    ~WeaponStatic();
    static bool scriptInit();
    static WeaponStatic *Create(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name, WeaponStatic *wst, bool forceReload);
    static void Clear();
    typedef std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,WeaponStatic *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,WeaponStatic *> > > weaponStaticMap;
protected:
    static std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,WeaponStatic *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,WeaponStatic *> > > m_weaponStatics;
public:
    Weapon *CreateAndBindWeapon(Sob *, __int32);
    float getPerSecondDamageRating() const;
    unsigned __int32 timeStamp; // 0x0
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x4
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > typeName; // 0x1C
    WeaponType m_weaponType; // 0x34
    WeaponFireType m_weaponFireType; // 0x38
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > weaponFireName; // 0x3C
    WeaponFireParameters weaponFireParameters; // 0x54
    WeaponActivate m_activation; // 0x70
    float *m_weaponAccuracy; // 0x74
    bool *m_inaccurateShotsDoDamage; // 0x78
    float m_defenseFieldPercentage; // 0x7C
    float *m_weaponPenetration; // 0x80
    float m_shieldPenetrationMultipler; // 0x84
    bool useVelocityPred; // 0x88
    float fireTime; // 0x8C
    float burstFireTime; // 0x90
    float burstWaitTime; // 0x94
    std::vector<WeaponResult,std::allocator<WeaponResult> > m_anticipationResults; // 0x98
    std::vector<WeaponResult,std::allocator<WeaponResult> > m_fireResults; // 0xA4
    std::vector<WeaponResult,std::allocator<WeaponResult> > m_hitResults; // 0xB0
    std::vector<WeaponResult,std::allocator<WeaponResult> > m_missResults; // 0xBC
    std::vector<WeaponResult,std::allocator<WeaponResult> > m_expireResults; // 0xC8
    float cosMaxAngleFromNorm; // 0xD4
    float m_minAzimuth; // 0xD8
    float m_maxAzimuth; // 0xDC
    float m_minDeclination; // 0xE0
    float m_maxDeclination; // 0xE4
    float m_azimuthPerStep; // 0xE8
    float m_declinationPerStep; // 0xEC
    float m_cosAzimuthPerStep; // 0xF0
    float m_cosDeclinationPerStep; // 0xF4
    float m_speedMultiplierWhenPointingAtTarget; // 0xF8
    float m_offsetFireTime; // 0xFC
    float m_recoilDistance; // 0x100
    bool m_trackOutsideArc; // 0x104
    bool m_doLineOfFireCheck; // 0x105
    bool m_shootAtSecondaries; // 0x106
    bool m_shootAtSurroundings; // 0x107
    bool m_useCodeRedAnimation; // 0x108
    PatchID m_animTurretSound; // 0x10C
    float m_blowThroughHealth; // 0x110
    float calculatePentrationVs(unsigned __int32) const;
    void initialiseShieldPenetration(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    static void staticLoadChangedStatics();
    WeaponStatic &operator=(WeaponStatic const &); /* compiler_generated() */
};
static_assert(sizeof(WeaponStatic) == 276, "Invalid WeaponStatic size");

class WeaponStatic
{
public:
    WeaponStatic(WeaponStatic const &); /* compiler_generated() */
    WeaponStatic();
    ~WeaponStatic();
    static bool scriptInit();
    static WeaponStatic *Create(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name, WeaponStatic *wst, bool forceReload);
    static void Clear();
    typedef std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,WeaponStatic *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,WeaponStatic *> > > weaponStaticMap;
protected:
    static std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,WeaponStatic *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,WeaponStatic *> > > m_weaponStatics;
public:
    Weapon *CreateAndBindWeapon(Sob *, __int32);
    float getPerSecondDamageRating() const;
    unsigned __int32 timeStamp; // 0x0
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x4
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > typeName; // 0x1C
    WeaponType m_weaponType; // 0x34
    WeaponFireType m_weaponFireType; // 0x38
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > weaponFireName; // 0x3C
    WeaponFireParameters weaponFireParameters; // 0x54
    WeaponActivate m_activation; // 0x70
    float *m_weaponAccuracy; // 0x74
    bool *m_inaccurateShotsDoDamage; // 0x78
    float m_defenseFieldPercentage; // 0x7C
    float *m_weaponPenetration; // 0x80
    float m_shieldPenetrationMultipler; // 0x84
    bool useVelocityPred; // 0x88
    float fireTime; // 0x8C
    float burstFireTime; // 0x90
    float burstWaitTime; // 0x94
    std::vector<WeaponResult,std::allocator<WeaponResult> > m_anticipationResults; // 0x98
    std::vector<WeaponResult,std::allocator<WeaponResult> > m_fireResults; // 0xA4
    std::vector<WeaponResult,std::allocator<WeaponResult> > m_hitResults; // 0xB0
    std::vector<WeaponResult,std::allocator<WeaponResult> > m_missResults; // 0xBC
    std::vector<WeaponResult,std::allocator<WeaponResult> > m_expireResults; // 0xC8
    float cosMaxAngleFromNorm; // 0xD4
    float m_minAzimuth; // 0xD8
    float m_maxAzimuth; // 0xDC
    float m_minDeclination; // 0xE0
    float m_maxDeclination; // 0xE4
    float m_azimuthPerStep; // 0xE8
    float m_declinationPerStep; // 0xEC
    float m_cosAzimuthPerStep; // 0xF0
    float m_cosDeclinationPerStep; // 0xF4
    float m_speedMultiplierWhenPointingAtTarget; // 0xF8
    float m_offsetFireTime; // 0xFC
    float m_recoilDistance; // 0x100
    bool m_trackOutsideArc; // 0x104
    bool m_doLineOfFireCheck; // 0x105
    bool m_shootAtSecondaries; // 0x106
    bool m_shootAtSurroundings; // 0x107
    bool m_useCodeRedAnimation; // 0x108
    PatchID m_animTurretSound; // 0x10C
    float m_blowThroughHealth; // 0x110
    float calculatePentrationVs(unsigned __int32) const;
    void initialiseShieldPenetration(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    static void staticLoadChangedStatics();
    WeaponStatic &operator=(WeaponStatic const &); /* compiler_generated() */
};
static_assert(sizeof(WeaponStatic) == 276, "Invalid WeaponStatic size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __WEAPONSTATIC_H__
#endif
