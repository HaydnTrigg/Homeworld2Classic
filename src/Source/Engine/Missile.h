#if 0
#ifndef __MISSILE_H__
#define __MISSILE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Missile :
    public SobWithMesh
{
public:
    typedef SobWithMesh SuperClass;
    Missile(Missile &); /* compiler_generated() */
    Missile(SaveGameData *);
    Missile(char const *, SobWithMesh *, WeaponStatic const *, WeaponTargetInfo const &, Player *);
    virtual ~Missile() override;
    virtual bool update(float) override;
    virtual bool updateTimeOfDeath(float) override;
    virtual float getSobDieTime() override;
    Missile *getMissilePtr();
    void SetInitialGoal(vector3 const);
    bool hitsSob(Sob *, vector3 const &, vector3 const &);
    _inline WeaponStatic const *getWeaponStatic() const;
    _inline WeaponFireStatic const *getWeaponFireStatic() const;
    _inline __int32 const getPlayerIndex() const;
    virtual void render(Camera const *, MeshRenderProxy &) override;
    virtual void render(Camera const *);
    _inline void setDamageMultiplier(float);
    _inline float getDamageMultiplier() const;
    virtual float getMainEngineUsage() override;
    _inline MissileStatic const *getStatic() const;
    Ship *getOwnerShip() const;
    _inline SobWithMesh *getWithMeshForWeaponFire();
    _inline float getExpireTimer() const;
    _inline vector3 const &getLaunchPosition() const;
    _inline bool isMine() const;
protected:
    virtual void RemoveFromSimulation() override;
    void RemoveAllSimData();
private:
    static void saveWeaponStatic(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void loadWeaponStatic(void *objectPtr, SaveGameData *saveGameData);
    bool mineUpdate(float);
    bool missileUpdate(float);
    void flyToTarget(WeaponTargetInfo const &);
    void flyStraight();
    Sob *getBestTarget(Selection const &);
    void stop();
    void checkSubMunitions(Sob *);
    void checkSpawnWeaponFire(Sob *);
    void findNewPointOnTarget(WeaponTargetInfo &);
    enum MissileState
    {
        Launch = 0,
        Launching,
        Track,
        FlyStraight,
        Idle,
        Hit,
        NUMBER_OF_MISSILE_STATES,
    };
    float m_LaunchTime; // 0x24C
    vector3 m_LaunchPosition; // 0x250
    Missile::MissileState m_State; // 0x25C
    WeaponTargetInfo m_primary; // 0x260
    Selection m_Targets; // 0x294
    ShipController *m_Controller; // 0x2C8
    SobID m_pOwner; // 0x2CC
    bool m_mine; // 0x2D8
    float m_expireTime; // 0x2DC
    __int32 m_playerIndex; // 0x2E0
    WeaponStatic const *m_weaponStatic; // 0x2E4
    WeaponFireStatic const *m_wfStatic; // 0x2E8
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_weaponName; // 0x2EC
    float m_damageMultiplier; // 0x304
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    static char const m_saveToken[0];
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    Missile &operator=(Missile &); /* compiler_generated() */
};
static_assert(sizeof(Missile) == 776, "Invalid Missile size");

class Missile :
    public SobWithMesh
{
public:
    typedef SobWithMesh SuperClass;
    Missile(Missile &); /* compiler_generated() */
    Missile(SaveGameData *);
    Missile(char const *, SobWithMesh *, WeaponStatic const *, WeaponTargetInfo const &, Player *);
    virtual ~Missile() override;
    virtual bool update(float) override;
    virtual bool updateTimeOfDeath(float) override;
    virtual float getSobDieTime() override;
    Missile *getMissilePtr();
    void SetInitialGoal(vector3 const);
    bool hitsSob(Sob *, vector3 const &, vector3 const &);
    _inline WeaponStatic const *getWeaponStatic() const;
    _inline WeaponFireStatic const *getWeaponFireStatic() const;
    _inline __int32 const getPlayerIndex() const;
    virtual void render(Camera const *, MeshRenderProxy &) override;
    virtual void render(Camera const *);
    _inline void setDamageMultiplier(float);
    _inline float getDamageMultiplier() const;
    virtual float getMainEngineUsage() override;
    _inline MissileStatic const *getStatic() const;
    Ship *getOwnerShip() const;
    _inline SobWithMesh *getWithMeshForWeaponFire();
    _inline float getExpireTimer() const;
    _inline vector3 const &getLaunchPosition() const;
    _inline bool isMine() const;
protected:
    virtual void RemoveFromSimulation() override;
    void RemoveAllSimData();
private:
    static void saveWeaponStatic(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void loadWeaponStatic(void *objectPtr, SaveGameData *saveGameData);
    bool mineUpdate(float);
    bool missileUpdate(float);
    void flyToTarget(WeaponTargetInfo const &);
    void flyStraight();
    Sob *getBestTarget(Selection const &);
    void stop();
    void checkSubMunitions(Sob *);
    void checkSpawnWeaponFire(Sob *);
    void findNewPointOnTarget(WeaponTargetInfo &);
    enum MissileState
    {
        Launch = 0,
        Launching,
        Track,
        FlyStraight,
        Idle,
        Hit,
        NUMBER_OF_MISSILE_STATES,
    };
    float m_LaunchTime; // 0x24C
    vector3 m_LaunchPosition; // 0x250
    Missile::MissileState m_State; // 0x25C
    WeaponTargetInfo m_primary; // 0x260
    Selection m_Targets; // 0x294
    ShipController *m_Controller; // 0x2C8
    SobID m_pOwner; // 0x2CC
    bool m_mine; // 0x2D8
    float m_expireTime; // 0x2DC
    __int32 m_playerIndex; // 0x2E0
    WeaponStatic const *m_weaponStatic; // 0x2E4
    WeaponFireStatic const *m_wfStatic; // 0x2E8
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_weaponName; // 0x2EC
    float m_damageMultiplier; // 0x304
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    static char const m_saveToken[0];
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    Missile &operator=(Missile &); /* compiler_generated() */
};
static_assert(sizeof(Missile) == 776, "Invalid Missile size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern WeaponStatic const *_sub_487F75(Missile const *const);
_inline WeaponStatic const *Missile::getWeaponStatic() const // 0x487F75
{
    mangled_assert("?getWeaponStatic@Missile@@QBEPBVWeaponStatic@@XZ");
    todo("implement");
    WeaponStatic const * __result = _sub_487F75(this);
    return __result;
}

_extern WeaponFireStatic const *_sub_4A2F0E(Missile const *const);
_inline WeaponFireStatic const *Missile::getWeaponFireStatic() const // 0x4A2F0E
{
    mangled_assert("?getWeaponFireStatic@Missile@@QBEPBVWeaponFireStatic@@XZ");
    todo("implement");
    WeaponFireStatic const * __result = _sub_4A2F0E(this);
    return __result;
}

_extern __int32 const _sub_45A879(Missile const *const);
_inline __int32 const Missile::getPlayerIndex() const // 0x45A879
{
    mangled_assert("?getPlayerIndex@Missile@@QBE?BHXZ");
    todo("implement");
    __int32 const __result = _sub_45A879(this);
    return __result;
}

_extern void _sub_4AA74B(Missile *const, float);
_inline void Missile::setDamageMultiplier(float) // 0x4AA74B
{
    mangled_assert("?setDamageMultiplier@Missile@@QAEXM@Z");
    todo("implement");
    _sub_4AA74B(this, arg);
}

_extern float _sub_4A2EE4(Missile const *const);
_inline float Missile::getDamageMultiplier() const // 0x4A2EE4
{
    mangled_assert("?getDamageMultiplier@Missile@@QBEMXZ");
    todo("implement");
    float __result = _sub_4A2EE4(this);
    return __result;
}

_extern MissileStatic const *_sub_487F63(Missile const *const);
_inline MissileStatic const *Missile::getStatic() const // 0x487F63
{
    mangled_assert("?getStatic@Missile@@QBEPBVMissileStatic@@XZ");
    todo("implement");
    MissileStatic const * __result = _sub_487F63(this);
    return __result;
}

_extern SobWithMesh *_sub_4A2F1C(Missile *const);
_inline SobWithMesh *Missile::getWithMeshForWeaponFire() // 0x4A2F1C
{
    mangled_assert("?getWithMeshForWeaponFire@Missile@@QAEPAVSobWithMesh@@XZ");
    todo("implement");
    SobWithMesh * __result = _sub_4A2F1C(this);
    return __result;
}

_extern float _sub_4A2EEB(Missile const *const);
_inline float Missile::getExpireTimer() const // 0x4A2EEB
{
    mangled_assert("?getExpireTimer@Missile@@QBEMXZ");
    todo("implement");
    float __result = _sub_4A2EEB(this);
    return __result;
}

_extern vector3 const &_sub_6AD576(Missile const *const);
_inline vector3 const &Missile::getLaunchPosition() const // 0x6AD576
{
    mangled_assert("?getLaunchPosition@Missile@@QBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_6AD576(this);
    return __result;
}

_extern bool _sub_5EF20F(Missile const *const);
_inline bool Missile::isMine() const // 0x5EF20F
{
    mangled_assert("?isMine@Missile@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_5EF20F(this);
    return __result;
}

_extern bool _sub_48817B(Missile *const);
_inline bool Missile::isDeterministic() // 0x48817B
{
    mangled_assert("?isDeterministic@Missile@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_48817B(this);
    return __result;
}

_extern char const *_sub_4889D2(Missile *const);
_inline char const *Missile::saveToken() // 0x4889D2
{
    mangled_assert("?saveToken@Missile@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_4889D2(this);
    return __result;
}

/* ---------- private code */

#endif // __MISSILE_H__
#endif
