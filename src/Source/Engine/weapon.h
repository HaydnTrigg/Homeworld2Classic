#if 0
#ifndef __WEAPON_H__
#define __WEAPON_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Weapon :
    public SaveObject
{
public:
    typedef SaveObject SuperClass;
    Weapon(Weapon const &); /* compiler_generated() */
    Weapon(SaveGameData *);
    Weapon(Sob *);
    virtual ~Weapon() override;
    bool lockOn(WeaponTargetInfo const &, Selection const &);
    bool shoot(float);
    void resetTarget();
    virtual void bindData(WeaponStatic *, WeaponClassSpecificInfo *);
    Sob *blindFire(WeaponActivate, vector3 const &);
    _inline void setEnableDisable(bool);
    _inline char getWeaponEnabled() const;
    _inline float getTimeTillNextFire() const;
    _inline float getRange() const;
    float getAccuracy(unsigned __int32);
    float getDamageMultiplier();
    virtual bool slave();
    _inline float getWeaponFireSpeed() const;
    _inline char getUseVelocityPred() const;
    float getPerSecondDamageRating() const;
protected:
    void updateTimers(float);
    _inline float getFireTime() const;
    _inline float getBurstFireTime() const;
    _inline float getBurstWaitTime() const;
    WeaponActivate getWeaponActivation() const;
public:
    virtual void getWorldSpaceMuzzle(vector3 &, vector3 &, vector3 &) = 0;
    virtual void getWorldSpaceMuzzle(vector3 &, vector3 &) = 0;
    _inline WeaponFireType getWeaponFireType() const;
    _inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &getWeaponFireName() const;
    WeaponFireParameters const *getWeaponFireParameters() const;
    Weapon *getSlaveDriver() const;
    _inline bool isTargeted() const;
    Sob *GetCurrentTarget() const;
    _inline Sob *getOwner() const;
    Ship *getShipOwner() const;
    Player *getPlayerOwner() const;
    _inline __int32 getWeaponIndex() const;
    _inline WeaponClassSpecificInfo *getWeaponClassSpecificInfo() const;
    _inline WeaponStatic const *getStatic() const;
    void setOwner(Sob *);
    _inline void setWeaponIndex(__int32);
    void setWeaponClassSpecificInfo(WeaponClassSpecificInfo *);
    virtual _inline float getAzimuthOffset();
    virtual _inline float getDeclinationOffset();
protected:
    Sob *m_owner; // 0xC
    __int32 m_weaponIndex; // 0x10
    WeaponClassSpecificInfo *m_weaponClassSpecificInfo; // 0x14
    WeaponStatic *m_weaponStatic; // 0x18
    Weapon *m_slaveDriver; // 0x1C
    Weapon *m_fireOffsetFrom; // 0x20
    float m_timeTillNextFire; // 0x24
    float m_pauseBeforeFiring; // 0x28
    float m_burstTimer; // 0x2C
    unsigned __int32 m_burstState; // 0x30
    char m_enabled; // 0x34
    char m_useVelocityPred; // 0x35
    char m_dataBound; // 0x36
    char m_isTargeted; // 0x37
    WeaponTargetInfo m_ActualTarget; // 0x38
private:
    bool m_bLockedOn; // 0x6C
    float m_moveToHomeTimer; // 0x70
protected:
    virtual bool canShoot(WeaponTargetInfo const &);
    virtual bool canReachTarget(WeaponTargetInfo const &) = 0;
    virtual void aimAtCurrentTarget() = 0;
    virtual void MoveToHomePosition();
    bool ourTurnToFire();
    vector3 transformToLocalCoords(vector3 const &) const;
    vector3 getWSPosition() const;
    vector3 getWSVelocity() const;
    vector3 getTargetInGunRestCoords(WeaponTargetInfo const &) const;
    vector3 getTargetInGunRestCoords() const;
    virtual void findNewPointOnTarget(WeaponTargetInfo &) = 0;
    bool isLineOfFireClear(vector3 const &);
private:
    bool target(WeaponTargetInfo const &, Selection const &);
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    virtual void bindStatics(WeaponStatic *, WeaponClassSpecificInfo *);
    Weapon &operator=(Weapon const &); /* compiler_generated() */
};
static_assert(sizeof(Weapon) == 116, "Invalid Weapon size");

class Weapon :
    public SaveObject
{
public:
    typedef SaveObject SuperClass;
    Weapon(Weapon const &); /* compiler_generated() */
    Weapon(SaveGameData *);
    Weapon(Sob *);
    virtual ~Weapon() override;
    bool lockOn(WeaponTargetInfo const &, Selection const &);
    bool shoot(float);
    void resetTarget();
    virtual void bindData(WeaponStatic *, WeaponClassSpecificInfo *);
    Sob *blindFire(WeaponActivate, vector3 const &);
    _inline void setEnableDisable(bool);
    _inline char getWeaponEnabled() const;
    _inline float getTimeTillNextFire() const;
    _inline float getRange() const;
    float getAccuracy(unsigned __int32);
    float getDamageMultiplier();
    virtual bool slave();
    _inline float getWeaponFireSpeed() const;
    _inline char getUseVelocityPred() const;
    float getPerSecondDamageRating() const;
protected:
    void updateTimers(float);
    _inline float getFireTime() const;
    _inline float getBurstFireTime() const;
    _inline float getBurstWaitTime() const;
    WeaponActivate getWeaponActivation() const;
public:
    virtual void getWorldSpaceMuzzle(vector3 &, vector3 &, vector3 &) = 0;
    virtual void getWorldSpaceMuzzle(vector3 &, vector3 &) = 0;
    _inline WeaponFireType getWeaponFireType() const;
    _inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &getWeaponFireName() const;
    WeaponFireParameters const *getWeaponFireParameters() const;
    Weapon *getSlaveDriver() const;
    _inline bool isTargeted() const;
    Sob *GetCurrentTarget() const;
    _inline Sob *getOwner() const;
    Ship *getShipOwner() const;
    Player *getPlayerOwner() const;
    _inline __int32 getWeaponIndex() const;
    _inline WeaponClassSpecificInfo *getWeaponClassSpecificInfo() const;
    _inline WeaponStatic const *getStatic() const;
    void setOwner(Sob *);
    _inline void setWeaponIndex(__int32);
    void setWeaponClassSpecificInfo(WeaponClassSpecificInfo *);
    virtual _inline float getAzimuthOffset();
    virtual _inline float getDeclinationOffset();
protected:
    Sob *m_owner; // 0xC
    __int32 m_weaponIndex; // 0x10
    WeaponClassSpecificInfo *m_weaponClassSpecificInfo; // 0x14
    WeaponStatic *m_weaponStatic; // 0x18
    Weapon *m_slaveDriver; // 0x1C
    Weapon *m_fireOffsetFrom; // 0x20
    float m_timeTillNextFire; // 0x24
    float m_pauseBeforeFiring; // 0x28
    float m_burstTimer; // 0x2C
    unsigned __int32 m_burstState; // 0x30
    char m_enabled; // 0x34
    char m_useVelocityPred; // 0x35
    char m_dataBound; // 0x36
    char m_isTargeted; // 0x37
    WeaponTargetInfo m_ActualTarget; // 0x38
private:
    bool m_bLockedOn; // 0x6C
    float m_moveToHomeTimer; // 0x70
protected:
    virtual bool canShoot(WeaponTargetInfo const &);
    virtual bool canReachTarget(WeaponTargetInfo const &) = 0;
    virtual void aimAtCurrentTarget() = 0;
    virtual void MoveToHomePosition();
    bool ourTurnToFire();
    vector3 transformToLocalCoords(vector3 const &) const;
    vector3 getWSPosition() const;
    vector3 getWSVelocity() const;
    vector3 getTargetInGunRestCoords(WeaponTargetInfo const &) const;
    vector3 getTargetInGunRestCoords() const;
    virtual void findNewPointOnTarget(WeaponTargetInfo &) = 0;
    bool isLineOfFireClear(vector3 const &);
private:
    bool target(WeaponTargetInfo const &, Selection const &);
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    virtual void bindStatics(WeaponStatic *, WeaponClassSpecificInfo *);
    Weapon &operator=(Weapon const &); /* compiler_generated() */
};
static_assert(sizeof(Weapon) == 116, "Invalid Weapon size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_48F640(Weapon *const, bool);
_inline void Weapon::setEnableDisable(bool) // 0x48F640
{
    mangled_assert("?setEnableDisable@Weapon@@QAEX_N@Z");
    todo("implement");
    _sub_48F640(this, arg);
}

_extern char _sub_48D5DD(Weapon const *const);
_inline char Weapon::getWeaponEnabled() const // 0x48D5DD
{
    mangled_assert("?getWeaponEnabled@Weapon@@QBEDXZ");
    todo("implement");
    char __result = _sub_48D5DD(this);
    return __result;
}

_extern float _sub_607DDC(Weapon const *const);
_inline float Weapon::getTimeTillNextFire() const // 0x607DDC
{
    mangled_assert("?getTimeTillNextFire@Weapon@@QBEMXZ");
    todo("implement");
    float __result = _sub_607DDC(this);
    return __result;
}

_extern float _sub_48CA18(Weapon const *const);
_inline float Weapon::getRange() const // 0x48CA18
{
    mangled_assert("?getRange@Weapon@@QBEMXZ");
    todo("implement");
    float __result = _sub_48CA18(this);
    return __result;
}

_extern float _sub_4A4F9F(Weapon const *const);
_inline float Weapon::getWeaponFireSpeed() const // 0x4A4F9F
{
    mangled_assert("?getWeaponFireSpeed@Weapon@@QBEMXZ");
    todo("implement");
    float __result = _sub_4A4F9F(this);
    return __result;
}

_extern char _sub_4A4AD3(Weapon const *const);
_inline char Weapon::getUseVelocityPred() const // 0x4A4AD3
{
    mangled_assert("?getUseVelocityPred@Weapon@@QBEDXZ");
    todo("implement");
    char __result = _sub_4A4AD3(this);
    return __result;
}

_extern float _sub_49DCE2(Weapon const *const);
_inline float Weapon::getFireTime() const // 0x49DCE2
{
    mangled_assert("?getFireTime@Weapon@@IBEMXZ");
    todo("implement");
    float __result = _sub_49DCE2(this);
    return __result;
}

_extern float _sub_49DCA0(Weapon const *const);
_inline float Weapon::getBurstFireTime() const // 0x49DCA0
{
    mangled_assert("?getBurstFireTime@Weapon@@IBEMXZ");
    todo("implement");
    float __result = _sub_49DCA0(this);
    return __result;
}

_extern float _sub_49DCAA(Weapon const *const);
_inline float Weapon::getBurstWaitTime() const // 0x49DCAA
{
    mangled_assert("?getBurstWaitTime@Weapon@@IBEMXZ");
    todo("implement");
    float __result = _sub_49DCAA(this);
    return __result;
}

_extern WeaponFireType _sub_49DEBD(Weapon const *const);
_inline WeaponFireType Weapon::getWeaponFireType() const // 0x49DEBD
{
    mangled_assert("?getWeaponFireType@Weapon@@QBE?AW4WeaponFireType@@XZ");
    todo("implement");
    WeaponFireType __result = _sub_49DEBD(this);
    return __result;
}

_extern std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &_sub_49DEB6(Weapon const *const);
_inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &Weapon::getWeaponFireName() const // 0x49DEB6
{
    mangled_assert("?getWeaponFireName@Weapon@@QBEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
    todo("implement");
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > const & __result = _sub_49DEB6(this);
    return __result;
}

_extern bool _sub_49E124(Weapon const *const);
_inline bool Weapon::isTargeted() const // 0x49E124
{
    mangled_assert("?isTargeted@Weapon@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_49E124(this);
    return __result;
}

_extern Sob *_sub_49DCEC(Weapon const *const);
_inline Sob *Weapon::getOwner() const // 0x49DCEC
{
    mangled_assert("?getOwner@Weapon@@QBEPAVSob@@XZ");
    todo("implement");
    Sob * __result = _sub_49DCEC(this);
    return __result;
}

_extern __int32 _sub_48D5E1(Weapon const *const);
_inline __int32 Weapon::getWeaponIndex() const // 0x48D5E1
{
    mangled_assert("?getWeaponIndex@Weapon@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_48D5E1(this);
    return __result;
}

_extern WeaponClassSpecificInfo *_sub_48D5D9(Weapon const *const);
_inline WeaponClassSpecificInfo *Weapon::getWeaponClassSpecificInfo() const // 0x48D5D9
{
    mangled_assert("?getWeaponClassSpecificInfo@Weapon@@QBEPAVWeaponClassSpecificInfo@@XZ");
    todo("implement");
    WeaponClassSpecificInfo * __result = _sub_48D5D9(this);
    return __result;
}

_extern WeaponStatic const *_sub_48CD14(Weapon const *const);
_inline WeaponStatic const *Weapon::getStatic() const // 0x48CD14
{
    mangled_assert("?getStatic@Weapon@@QBEPBVWeaponStatic@@XZ");
    todo("implement");
    WeaponStatic const * __result = _sub_48CD14(this);
    return __result;
}

_extern void _sub_4A47AF(Weapon *const, __int32);
_inline void Weapon::setWeaponIndex(__int32) // 0x4A47AF
{
    mangled_assert("?setWeaponIndex@Weapon@@QAEXH@Z");
    todo("implement");
    _sub_4A47AF(this, arg);
}

_extern float _sub_49DC9D(Weapon *const);
_inline float Weapon::getAzimuthOffset() // 0x49DC9D
{
    mangled_assert("?getAzimuthOffset@Weapon@@UAEMXZ");
    todo("implement");
    float __result = _sub_49DC9D(this);
    return __result;
}

_extern float _sub_49DCDF(Weapon *const);
_inline float Weapon::getDeclinationOffset() // 0x49DCDF
{
    mangled_assert("?getDeclinationOffset@Weapon@@UAEMXZ");
    todo("implement");
    float __result = _sub_49DCDF(this);
    return __result;
}

_extern bool _sub_49DEC4(Weapon *const);
_inline bool Weapon::isDeterministic() // 0x49DEC4
{
    mangled_assert("?isDeterministic@Weapon@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_49DEC4(this);
    return __result;
}

_extern char const *_sub_49E2CE(Weapon *const);
_inline char const *Weapon::saveToken() // 0x49E2CE
{
    mangled_assert("?saveToken@Weapon@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_49E2CE(this);
    return __result;
}

/* ---------- private code */

#endif // __WEAPON_H__
#endif
