#if 0
#ifndef __SUBSYSTEM_H__
#define __SUBSYSTEM_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SubSystem :
    public SobWithMesh
{
public:
    typedef SobWithMesh SuperClass;
    SubSystem(SubSystem &); /* compiler_generated() */
    SubSystem(SaveGameData *);
    SubSystem(char const *, bool, Player *);
    virtual ~SubSystem() override;
    void Deploy();
    void Retire(bool);
    float getActivity();
    virtual bool update(float) override;
    virtual void takeDamage(float, char const *, unsigned __int32, Sob::ReasonDied) override;
    virtual void setPlayerOwner(Player *) override;
    virtual float getMaxHealth() const override;
    _inline HardPoint *getHardPoint() const;
    void setHardPoint(HardPoint *);
    virtual void reloadStats() override;
    void applyMultipliersAndAbilities();
    WeaponActivate getWeaponActivation() const;
    unsigned __int32 getNumberOfWeaponsWithActivation(WeaponActivate) const;
    float getPerSecondDamageRating() const;
    virtual void getTargetOnSob(vector3 const &, vector3 &, vector3 &, float) const override;
    SubSystemType getType() const;
    _inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &getGenericTypeString() const;
    _inline unsigned __int32 getGenericTypeId() const;
    _inline unsigned __int32 getStaticId() const;
    _inline bool getVisible() const;
    void render(Camera const *, matrix4 const &, MeshRenderProxy &, unsigned __int32 const, float const, float const, vector4 const &, __int32);
    void displayATI(OrderFeedbackValue const *, unsigned __int32);
    void displaySelecting();
    void onMouseEnter();
    _inline SubSystemStatic const *getStatic() const;
    virtual Visibility *getVisibility() override;
protected:
    HardPoint *m_hardPoint; // 0x24C
    SubSystem::SubSystemState m_state; // 0x250
    float m_currentInactiveTime; // 0x254
    WeaponInfo m_weaponInfo; // 0x258
private:
    ModifierTargetCache m_modifierTargets; // 0x264
    unsigned __int32 m_staticInfoId; // 0x274
    enum SubSystemState
    {
        SubSystemState_Unknown = 0,
        SubSystemState_Deploying,
        SubSystemState_Recycling,
        SubSystemState_Active,
        SubSystemState_NonActive,
        SubSystemState_Dead,
    };
protected:
    void SetState(SubSystem::SubSystemState);
    virtual bool isMoving() const override;
    virtual bool isRotating() const override;
public:
    Weapon *getWeapon(__int32);
    Weapon *getWeaponWithID(__int32);
    __int32 getNumWeapons();
    void flushWeaponTargets();
    void fireWeaponsAtTarget(WeaponTargetInfo const &, Selection const &);
    void fireDroppables(vector3 const &, std::list<Sob *,std::allocator<Sob *> > &);
    float getMinActiveWeaponRange() const;
    float getMaxActiveWeaponRange() const;
    bool weaponUpdate(float);
    float getWeaponAccuracy() const;
protected:
    void setupWeapons();
    void cleanUpWeapons();
    virtual void RemoveFromSimulation() override;
    void RemoveAllSimData();
public:
    void updateAnimations(float);
    virtual void animationFinished(AnimatorMad *, AnimatorMad::CallbackEvent) override;
private:
    void BlowUp();
public:
    void defaultSettings();
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
private:
    static void saveModifierCache(void *, SaveGameData *, SaveType);
    static void loadModifierCache(void *, SaveGameData *);
public:
    SubSystem &operator=(SubSystem &); /* compiler_generated() */
};
static_assert(sizeof(SubSystem) == 632, "Invalid SubSystem size");

class SubSystem :
    public SobWithMesh
{
public:
    typedef SobWithMesh SuperClass;
    SubSystem(SubSystem &); /* compiler_generated() */
    SubSystem(SaveGameData *);
    SubSystem(char const *, bool, Player *);
    virtual ~SubSystem() override;
    void Deploy();
    void Retire(bool);
    float getActivity();
    virtual bool update(float) override;
    virtual void takeDamage(float, char const *, unsigned __int32, Sob::ReasonDied) override;
    virtual void setPlayerOwner(Player *) override;
    virtual float getMaxHealth() const override;
    _inline HardPoint *getHardPoint() const;
    void setHardPoint(HardPoint *);
    virtual void reloadStats() override;
    void applyMultipliersAndAbilities();
    WeaponActivate getWeaponActivation() const;
    unsigned __int32 getNumberOfWeaponsWithActivation(WeaponActivate) const;
    float getPerSecondDamageRating() const;
    virtual void getTargetOnSob(vector3 const &, vector3 &, vector3 &, float) const override;
    SubSystemType getType() const;
    _inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &getGenericTypeString() const;
    _inline unsigned __int32 getGenericTypeId() const;
    _inline unsigned __int32 getStaticId() const;
    _inline bool getVisible() const;
    void render(Camera const *, matrix4 const &, MeshRenderProxy &, unsigned __int32 const, float const, float const, vector4 const &, __int32);
    void displayATI(OrderFeedbackValue const *, unsigned __int32);
    void displaySelecting();
    void onMouseEnter();
    _inline SubSystemStatic const *getStatic() const;
    virtual Visibility *getVisibility() override;
protected:
    HardPoint *m_hardPoint; // 0x24C
    SubSystem::SubSystemState m_state; // 0x250
    float m_currentInactiveTime; // 0x254
    WeaponInfo m_weaponInfo; // 0x258
private:
    ModifierTargetCache m_modifierTargets; // 0x264
    unsigned __int32 m_staticInfoId; // 0x274
    enum SubSystemState
    {
        SubSystemState_Unknown = 0,
        SubSystemState_Deploying,
        SubSystemState_Recycling,
        SubSystemState_Active,
        SubSystemState_NonActive,
        SubSystemState_Dead,
    };
protected:
    void SetState(SubSystem::SubSystemState);
    virtual bool isMoving() const override;
    virtual bool isRotating() const override;
public:
    Weapon *getWeapon(__int32);
    Weapon *getWeaponWithID(__int32);
    __int32 getNumWeapons();
    void flushWeaponTargets();
    void fireWeaponsAtTarget(WeaponTargetInfo const &, Selection const &);
    void fireDroppables(vector3 const &, std::list<Sob *,std::allocator<Sob *> > &);
    float getMinActiveWeaponRange() const;
    float getMaxActiveWeaponRange() const;
    bool weaponUpdate(float);
    float getWeaponAccuracy() const;
protected:
    void setupWeapons();
    void cleanUpWeapons();
    virtual void RemoveFromSimulation() override;
    void RemoveAllSimData();
public:
    void updateAnimations(float);
    virtual void animationFinished(AnimatorMad *, AnimatorMad::CallbackEvent) override;
private:
    void BlowUp();
public:
    void defaultSettings();
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
private:
    static void saveModifierCache(void *, SaveGameData *, SaveType);
    static void loadModifierCache(void *, SaveGameData *);
public:
    SubSystem &operator=(SubSystem &); /* compiler_generated() */
};
static_assert(sizeof(SubSystem) == 632, "Invalid SubSystem size");

class SubSystem :
    public SobWithMesh
{
public:
    typedef SobWithMesh SuperClass;
    SubSystem(SubSystem &); /* compiler_generated() */
    SubSystem(SaveGameData *);
    SubSystem(char const *, bool, Player *);
    virtual ~SubSystem() override;
    void Deploy();
    void Retire(bool);
    float getActivity();
    virtual bool update(float) override;
    virtual void takeDamage(float, char const *, unsigned __int32, Sob::ReasonDied) override;
    virtual void setPlayerOwner(Player *) override;
    virtual float getMaxHealth() const override;
    _inline HardPoint *getHardPoint() const;
    void setHardPoint(HardPoint *);
    virtual void reloadStats() override;
    void applyMultipliersAndAbilities();
    WeaponActivate getWeaponActivation() const;
    unsigned __int32 getNumberOfWeaponsWithActivation(WeaponActivate) const;
    float getPerSecondDamageRating() const;
    virtual void getTargetOnSob(vector3 const &, vector3 &, vector3 &, float) const override;
    SubSystemType getType() const;
    _inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &getGenericTypeString() const;
    _inline unsigned __int32 getGenericTypeId() const;
    _inline unsigned __int32 getStaticId() const;
    _inline bool getVisible() const;
    void render(Camera const *, matrix4 const &, MeshRenderProxy &, unsigned __int32 const, float const, float const, vector4 const &, __int32);
    void displayATI(OrderFeedbackValue const *, unsigned __int32);
    void displaySelecting();
    void onMouseEnter();
    _inline SubSystemStatic const *getStatic() const;
    virtual Visibility *getVisibility() override;
protected:
    HardPoint *m_hardPoint; // 0x24C
    SubSystem::SubSystemState m_state; // 0x250
    float m_currentInactiveTime; // 0x254
    WeaponInfo m_weaponInfo; // 0x258
private:
    ModifierTargetCache m_modifierTargets; // 0x264
    unsigned __int32 m_staticInfoId; // 0x274
    enum SubSystemState
    {
        SubSystemState_Unknown = 0,
        SubSystemState_Deploying,
        SubSystemState_Recycling,
        SubSystemState_Active,
        SubSystemState_NonActive,
        SubSystemState_Dead,
    };
protected:
    void SetState(SubSystem::SubSystemState);
    virtual bool isMoving() const override;
    virtual bool isRotating() const override;
public:
    Weapon *getWeapon(__int32);
    Weapon *getWeaponWithID(__int32);
    __int32 getNumWeapons();
    void flushWeaponTargets();
    void fireWeaponsAtTarget(WeaponTargetInfo const &, Selection const &);
    void fireDroppables(vector3 const &, std::list<Sob *,std::allocator<Sob *> > &);
    float getMinActiveWeaponRange() const;
    float getMaxActiveWeaponRange() const;
    bool weaponUpdate(float);
    float getWeaponAccuracy() const;
protected:
    void setupWeapons();
    void cleanUpWeapons();
    virtual void RemoveFromSimulation() override;
    void RemoveAllSimData();
public:
    void updateAnimations(float);
    virtual void animationFinished(AnimatorMad *, AnimatorMad::CallbackEvent) override;
private:
    void BlowUp();
public:
    void defaultSettings();
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
private:
    static void saveModifierCache(void *, SaveGameData *, SaveType);
    static void loadModifierCache(void *, SaveGameData *);
public:
    SubSystem &operator=(SubSystem &); /* compiler_generated() */
};
static_assert(sizeof(SubSystem) == 632, "Invalid SubSystem size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern HardPoint *_sub_458DF1(SubSystem const *const);
_inline HardPoint *SubSystem::getHardPoint() const // 0x458DF1
{
    mangled_assert("?getHardPoint@SubSystem@@QBEPAVHardPoint@@XZ");
    todo("implement");
    HardPoint * __result = _sub_458DF1(this);
    return __result;
}

_extern std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &_sub_52C14A(SubSystem const *const);
_inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &SubSystem::getGenericTypeString() const // 0x52C14A
{
    mangled_assert("?getGenericTypeString@SubSystem@@QBEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
    todo("implement");
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > const & __result = _sub_52C14A(this);
    return __result;
}

_extern unsigned __int32 _sub_4EF9FD(SubSystem const *const);
_inline unsigned __int32 SubSystem::getGenericTypeId() const // 0x4EF9FD
{
    mangled_assert("?getGenericTypeId@SubSystem@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_4EF9FD(this);
    return __result;
}

_extern unsigned __int32 _sub_4EFB74(SubSystem const *const);
_inline unsigned __int32 SubSystem::getStaticId() const // 0x4EFB74
{
    mangled_assert("?getStaticId@SubSystem@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_4EFB74(this);
    return __result;
}

_extern bool _sub_4F0CDF(SubSystem const *const);
_inline bool SubSystem::getVisible() const // 0x4F0CDF
{
    mangled_assert("?getVisible@SubSystem@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_4F0CDF(this);
    return __result;
}

_extern SubSystemStatic const *_sub_45A8B2(SubSystem const *const);
_inline SubSystemStatic const *SubSystem::getStatic() const // 0x45A8B2
{
    mangled_assert("?getStatic@SubSystem@@QBEPBVSubSystemStatic@@XZ");
    todo("implement");
    SubSystemStatic const * __result = _sub_45A8B2(this);
    return __result;
}

_extern bool _sub_4F0D5E(SubSystem *const);
_inline bool SubSystem::isDeterministic() // 0x4F0D5E
{
    mangled_assert("?isDeterministic@SubSystem@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_4F0D5E(this);
    return __result;
}

_extern char const *_sub_4F1089(SubSystem *const);
_inline char const *SubSystem::saveToken() // 0x4F1089
{
    mangled_assert("?saveToken@SubSystem@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_4F1089(this);
    return __result;
}

/* ---------- private code */

#endif // __SUBSYSTEM_H__
#endif
