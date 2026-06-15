#if 0
#ifndef __WEAPONFIRE_H__
#define __WEAPONFIRE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum WeaponFireType
{
    WFT_Bullet = 0,
    WFT_InstantHit,
    WFT_Missile,
    WFT_SphereBurst,
    WFT_Mine,
};

/* ---------- definitions */

class WeaponFireStatic :
    public SobZeroMassBodyStatic
{
public:
    typedef SobZeroMassBodyStatic SuperClass;
    WeaponFireStatic(WeaponFireStatic const &); /* compiler_generated() */
protected:
    WeaponFireStatic(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, SobType);
    enum EffectTypes
    {
        WF_Fire = 0,
        WF_Bullet,
        WF_Hit,
        WF_Anticipate,
        WF_Miss,
        WF_NoPenetration,
        WF_BlowThrough,
        WF_NumEffectTypes,
    };
public:
    char const *getFX(WeaponFireStatic::EffectTypes) const;
    char const *getSound(WeaponFireStatic::EffectTypes) const;
    float getNlips(WeaponFireStatic::EffectTypes) const;
    bool getFarMode(WeaponFireStatic::EffectTypes) const;
    vector2 const &getFXScaleClamp(WeaponFireStatic::EffectTypes) const;
    bool LoadWeaponFire(char const *);
    static SobStatic *Create(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name, SobStatic *found);
    void SetEffect(char const *, WeaponFireStatic::EffectTypes);
    void SetSound(char const *, WeaponFireStatic::EffectTypes);
    void SetNlips(float, WeaponFireStatic::EffectTypes);
    void SetFXScaleClamp(vector2 const &, WeaponFireStatic::EffectTypes);
    void SetFarMode(bool, WeaponFireStatic::EffectTypes);
    void scarSob(Sob *, vector3 const &, vector3 const &, vector3 const &, float) const;
    _inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &getDeathName() const;
private:
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_effects[7]; // 0x1BC
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_sounds[7]; // 0x264
    float m_nlips[7]; // 0x30C
    vector2 m_scaleClamp[7]; // 0x328
    bool m_farMode[7]; // 0x360
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_deathName; // 0x368
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_scarType; // 0x380
public:
    virtual _inline ~WeaponFireStatic() override; /* compiler_generated() */
    WeaponFireStatic &operator=(WeaponFireStatic const &); /* compiler_generated() */
};
static_assert(sizeof(WeaponFireStatic) == 920, "Invalid WeaponFireStatic size");

class WeaponFire :
    public SobZeroMassBody
{
public:
    typedef SobZeroMassBody SuperClass;
    WeaponFire(WeaponFire &); /* compiler_generated() */
    WeaponFire(SaveGameData *);
    WeaponFire(char const *, Sob *);
    virtual ~WeaponFire() override;
    virtual void initialize(WeaponStatic const *);
    virtual bool update(float) override;
    virtual void render(matrix4 &) override;
    void computeNlips(Camera const &);
    virtual bool hitsSob(Sob *, vector3 const &, vector3 const &);
    virtual void PerformCollisionDetection() = 0;
    Weapon *getParentWeapon() const;
    _inline WeaponFireStatic const *getWeaponFireStatic() const;
    virtual _inline float getDamageMultiplier() const;
    _inline void setGlobalDamageMultiplier(float);
    _inline float getGlobalDamageMultiplier() const;
    _inline __int32 const getPlayerIndex() const;
    _inline WeaponStatic const *getWeaponStatic() const;
    Sob const *getOwner() const;
    Ship *getOwnerShip() const;
    _inline SobWithMesh *getWithMeshForWeaponFire();
    _inline float getExpireTimer() const;
    virtual void changedPosition() override;
    WeaponStatic const *m_weaponStatic; // 0x1F8
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_weaponName; // 0x1FC
    WeaponFireType m_type; // 0x214
    __int32 m_playerIndex; // 0x218
    SobID m_pOwner; // 0x21C
    __int32 m_weaponOwnerID; // 0x228
private:
    bool m_accurate; // 0x22C
public:
    float m_expireTime; // 0x230
protected:
    unsigned __int32 m_effectHandle; // 0x234
    float m_globalDamageMultiplier; // 0x238
public:
    virtual _inline void setAccurate(bool);
    _inline bool accurate() const;
    void staticInit();
    void setEffect(unsigned __int32);
    unsigned __int32 getEffect() const;
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
protected:
    virtual void RemoveFromSimulation() override;
    void RemoveAllSimData();
    virtual void calculateVisualHitNormal(vector3 const &, vector3 const &, vector3 &);
    virtual bool ShouldIgnore(Sob *);
public:
    WeaponFire &operator=(WeaponFire &); /* compiler_generated() */
};
static_assert(sizeof(WeaponFire) == 572, "Invalid WeaponFire size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &WeaponFireStatic::getDeathName() const // 0x47893D
{
    mangled_assert("?getDeathName@WeaponFireStatic@@QBEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
    todo("implement");
}

_inline WeaponFireStatic const *WeaponFire::getWeaponFireStatic() const // 0x478CC2
{
    mangled_assert("?getWeaponFireStatic@WeaponFire@@QBEPBVWeaponFireStatic@@XZ");
    todo("implement");
}

_inline float WeaponFire::getDamageMultiplier() const // 0x4A58CA
{
    mangled_assert("?getDamageMultiplier@WeaponFire@@UBEMXZ");
    todo("implement");
}

_inline void WeaponFire::setGlobalDamageMultiplier(float) // 0x4AA769
{
    mangled_assert("?setGlobalDamageMultiplier@WeaponFire@@QAEXM@Z");
    todo("implement");
}

_inline float WeaponFire::getGlobalDamageMultiplier() const // 0x4A58D1
{
    mangled_assert("?getGlobalDamageMultiplier@WeaponFire@@QBEMXZ");
    todo("implement");
}

_inline __int32 const WeaponFire::getPlayerIndex() const // 0x4A2EF9
{
    mangled_assert("?getPlayerIndex@WeaponFire@@QBE?BHXZ");
    todo("implement");
}

_inline WeaponStatic const *WeaponFire::getWeaponStatic() const // 0x4A2F15
{
    mangled_assert("?getWeaponStatic@WeaponFire@@QBEPBVWeaponStatic@@XZ");
    todo("implement");
}

_inline SobWithMesh *WeaponFire::getWithMeshForWeaponFire() // 0x4A2F1F
{
    mangled_assert("?getWithMeshForWeaponFire@WeaponFire@@QAEPAVSobWithMesh@@XZ");
    todo("implement");
}

_inline float WeaponFire::getExpireTimer() const // 0x4A2EF2
{
    mangled_assert("?getExpireTimer@WeaponFire@@QBEMXZ");
    todo("implement");
}

_inline void WeaponFire::setAccurate(bool) // 0x4A59F5
{
    mangled_assert("?setAccurate@WeaponFire@@UAEX_N@Z");
    todo("implement");
}

_inline bool WeaponFire::accurate() const // 0x4A58A8
{
    mangled_assert("?accurate@WeaponFire@@QBE_NXZ");
    todo("implement");
}

_inline bool WeaponFire::isDeterministic() // 0x4AA4B1
{
    mangled_assert("?isDeterministic@WeaponFire@@UAE_NXZ");
    todo("implement");
}

_inline char const *WeaponFire::saveToken() // 0x4AA642
{
    mangled_assert("?saveToken@WeaponFire@@UAEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __WEAPONFIRE_H__
#endif
