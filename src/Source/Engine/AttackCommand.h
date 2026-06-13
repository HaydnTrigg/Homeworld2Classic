#if 0
#ifndef __ATTACKCOMMAND_H__
#define __ATTACKCOMMAND_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class CompareShipsByPriority :
    public Selection::MinElementCompare
{
public:
    CompareShipsByPriority(CompareShipsByPriority const &); /* compiler_generated() */
    _inline CompareShipsByPriority(AttackSortData const &);
    virtual bool Compare(Sob const &, Sob const &) const override;
private:
    AttackSortData const &m_sortData; // 0x4
};
static_assert(sizeof(CompareShipsByPriority) == 8, "Invalid CompareShipsByPriority size");

class AttackCommand :
    public Command
{
public:
    enum AttackState
    {
        Start = 0,
        MovingToTarget,
        BreakingOff,
        Attacking,
        GoingToLastPos,
        NUMBER_OF_ATTACK_STATES,
    };
    AttackCommand(AttackCommand const &); /* compiler_generated() */
    AttackCommand(SaveGameData *);
    AttackCommand(Squadron *, Selection const &, Command::CommandOrigin, bool, bool, vector3 const &);
    virtual ~AttackCommand() override;
    virtual ComResult update(float) override;
    _inline Selection &getTargets();
    virtual CommandType getCommandType() const override;
    virtual void cleanUpCommand() override;
    virtual void resetCommand() override;
    virtual vector3 const &getDestinationDtrm() const override;
    virtual vector3 const &getDestinationVis() const override;
    Sob *getTargetNonDeterministicSafe() const;
    _inline bool isRetaliating() const;
    virtual WeaponActivate getWeaponActivation() const override;
    _inline bool isForceAttack() const;
    void kamikaze();
    _inline bool isKamikaze() const;
    virtual bool canBeInterrupted(CommandType, Command *) override;
    static Sob *getBestTarget(Squadron const *squad, Selection const &targets);
    _inline bool isSpecialAttack() const;
    _inline bool isAttackingTarget() const;
    _inline bool NDHasSpawnedBattleEvent() const;
    _inline void NDSetAsSpawnedBattleEvent();
    virtual bool useAvoidance() const override;
    _inline void setCantInterrupt(bool);
    static bool isAttackable(Sob const *s, void *data);
    virtual char const *getName() const override;
private:
    Sob *GetCurrentTarget();
    void scanForNewTargets();
    void makeSureAllAreAttacking();
    void breakAllAndAttack();
    void flyToAboveEnemy();
    void flyStraightAtEnemy();
    void FlyToLastKnownPosition();
    AttackStyle::BreakStyleType getBreakStyleForType(unsigned __int32) const;
    Selection m_targetList; // 0x14
    vector3 m_lastKnownEnemyPos; // 0x48
    SobID m_CurrentTarget; // 0x54
    float m_Time; // 0x60
    float m_BreakDistanceSqr; // 0x64
    AttackCommand::AttackState m_State; // 0x68
    unsigned __int32 m_nNumberOfShipsInMicroFormations; // 0x6C
    unsigned __int32 m_lastValidTargetsAttackFamilyID; // 0x70
    bool m_retaliating; // 0x74
    bool m_specialAttack; // 0x75
    bool m_forceAttack; // 0x76
    bool m_kamiAttack; // 0x77
    vector3 m_groupOffset; // 0x78
    bool m_NDspawnedBattleEvent; // 0x84
    bool m_forceCantInterrupt; // 0x85
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    AttackCommand &operator=(AttackCommand const &); /* compiler_generated() */
};
static_assert(sizeof(AttackCommand) == 136, "Invalid AttackCommand size");

class AttackCommand :
    public Command
{
public:
    enum AttackState
    {
        Start = 0,
        MovingToTarget,
        BreakingOff,
        Attacking,
        GoingToLastPos,
        NUMBER_OF_ATTACK_STATES,
    };
    AttackCommand(AttackCommand const &); /* compiler_generated() */
    AttackCommand(SaveGameData *);
    AttackCommand(Squadron *, Selection const &, Command::CommandOrigin, bool, bool, vector3 const &);
    virtual ~AttackCommand() override;
    virtual ComResult update(float) override;
    _inline Selection &getTargets();
    virtual CommandType getCommandType() const override;
    virtual void cleanUpCommand() override;
    virtual void resetCommand() override;
    virtual vector3 const &getDestinationDtrm() const override;
    virtual vector3 const &getDestinationVis() const override;
    Sob *getTargetNonDeterministicSafe() const;
    _inline bool isRetaliating() const;
    virtual WeaponActivate getWeaponActivation() const override;
    _inline bool isForceAttack() const;
    void kamikaze();
    _inline bool isKamikaze() const;
    virtual bool canBeInterrupted(CommandType, Command *) override;
    static Sob *getBestTarget(Squadron const *squad, Selection const &targets);
    _inline bool isSpecialAttack() const;
    _inline bool isAttackingTarget() const;
    _inline bool NDHasSpawnedBattleEvent() const;
    _inline void NDSetAsSpawnedBattleEvent();
    virtual bool useAvoidance() const override;
    _inline void setCantInterrupt(bool);
    static bool isAttackable(Sob const *s, void *data);
    virtual char const *getName() const override;
private:
    Sob *GetCurrentTarget();
    void scanForNewTargets();
    void makeSureAllAreAttacking();
    void breakAllAndAttack();
    void flyToAboveEnemy();
    void flyStraightAtEnemy();
    void FlyToLastKnownPosition();
    AttackStyle::BreakStyleType getBreakStyleForType(unsigned __int32) const;
    Selection m_targetList; // 0x14
    vector3 m_lastKnownEnemyPos; // 0x48
    SobID m_CurrentTarget; // 0x54
    float m_Time; // 0x60
    float m_BreakDistanceSqr; // 0x64
    AttackCommand::AttackState m_State; // 0x68
    unsigned __int32 m_nNumberOfShipsInMicroFormations; // 0x6C
    unsigned __int32 m_lastValidTargetsAttackFamilyID; // 0x70
    bool m_retaliating; // 0x74
    bool m_specialAttack; // 0x75
    bool m_forceAttack; // 0x76
    bool m_kamiAttack; // 0x77
    vector3 m_groupOffset; // 0x78
    bool m_NDspawnedBattleEvent; // 0x84
    bool m_forceCantInterrupt; // 0x85
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    AttackCommand &operator=(AttackCommand const &); /* compiler_generated() */
};
static_assert(sizeof(AttackCommand) == 136, "Invalid AttackCommand size");

class AttackCommand :
    public Command
{
public:
    enum AttackState
    {
        Start = 0,
        MovingToTarget,
        BreakingOff,
        Attacking,
        GoingToLastPos,
        NUMBER_OF_ATTACK_STATES,
    };
    AttackCommand(AttackCommand const &); /* compiler_generated() */
    AttackCommand(SaveGameData *);
    AttackCommand(Squadron *, Selection const &, Command::CommandOrigin, bool, bool, vector3 const &);
    virtual ~AttackCommand() override;
    virtual ComResult update(float) override;
    _inline Selection &getTargets();
    virtual CommandType getCommandType() const override;
    virtual void cleanUpCommand() override;
    virtual void resetCommand() override;
    virtual vector3 const &getDestinationDtrm() const override;
    virtual vector3 const &getDestinationVis() const override;
    Sob *getTargetNonDeterministicSafe() const;
    _inline bool isRetaliating() const;
    virtual WeaponActivate getWeaponActivation() const override;
    _inline bool isForceAttack() const;
    void kamikaze();
    _inline bool isKamikaze() const;
    virtual bool canBeInterrupted(CommandType, Command *) override;
    static Sob *getBestTarget(Squadron const *squad, Selection const &targets);
    _inline bool isSpecialAttack() const;
    _inline bool isAttackingTarget() const;
    _inline bool NDHasSpawnedBattleEvent() const;
    _inline void NDSetAsSpawnedBattleEvent();
    virtual bool useAvoidance() const override;
    _inline void setCantInterrupt(bool);
    static bool isAttackable(Sob const *s, void *data);
    virtual char const *getName() const override;
private:
    Sob *GetCurrentTarget();
    void scanForNewTargets();
    void makeSureAllAreAttacking();
    void breakAllAndAttack();
    void flyToAboveEnemy();
    void flyStraightAtEnemy();
    void FlyToLastKnownPosition();
    AttackStyle::BreakStyleType getBreakStyleForType(unsigned __int32) const;
    Selection m_targetList; // 0x14
    vector3 m_lastKnownEnemyPos; // 0x48
    SobID m_CurrentTarget; // 0x54
    float m_Time; // 0x60
    float m_BreakDistanceSqr; // 0x64
    AttackCommand::AttackState m_State; // 0x68
    unsigned __int32 m_nNumberOfShipsInMicroFormations; // 0x6C
    unsigned __int32 m_lastValidTargetsAttackFamilyID; // 0x70
    bool m_retaliating; // 0x74
    bool m_specialAttack; // 0x75
    bool m_forceAttack; // 0x76
    bool m_kamiAttack; // 0x77
    vector3 m_groupOffset; // 0x78
    bool m_NDspawnedBattleEvent; // 0x84
    bool m_forceCantInterrupt; // 0x85
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    AttackCommand &operator=(AttackCommand const &); /* compiler_generated() */
};
static_assert(sizeof(AttackCommand) == 136, "Invalid AttackCommand size");

class AttackCommand :
    public Command
{
public:
    enum AttackState
    {
        Start = 0,
        MovingToTarget,
        BreakingOff,
        Attacking,
        GoingToLastPos,
        NUMBER_OF_ATTACK_STATES,
    };
    AttackCommand(AttackCommand const &); /* compiler_generated() */
    AttackCommand(SaveGameData *);
    AttackCommand(Squadron *, Selection const &, Command::CommandOrigin, bool, bool, vector3 const &);
    virtual ~AttackCommand() override;
    virtual ComResult update(float) override;
    _inline Selection &getTargets();
    virtual CommandType getCommandType() const override;
    virtual void cleanUpCommand() override;
    virtual void resetCommand() override;
    virtual vector3 const &getDestinationDtrm() const override;
    virtual vector3 const &getDestinationVis() const override;
    Sob *getTargetNonDeterministicSafe() const;
    _inline bool isRetaliating() const;
    virtual WeaponActivate getWeaponActivation() const override;
    _inline bool isForceAttack() const;
    void kamikaze();
    _inline bool isKamikaze() const;
    virtual bool canBeInterrupted(CommandType, Command *) override;
    static Sob *getBestTarget(Squadron const *squad, Selection const &targets);
    _inline bool isSpecialAttack() const;
    _inline bool isAttackingTarget() const;
    _inline bool NDHasSpawnedBattleEvent() const;
    _inline void NDSetAsSpawnedBattleEvent();
    virtual bool useAvoidance() const override;
    _inline void setCantInterrupt(bool);
    static bool isAttackable(Sob const *s, void *data);
    virtual char const *getName() const override;
private:
    Sob *GetCurrentTarget();
    void scanForNewTargets();
    void makeSureAllAreAttacking();
    void breakAllAndAttack();
    void flyToAboveEnemy();
    void flyStraightAtEnemy();
    void FlyToLastKnownPosition();
    AttackStyle::BreakStyleType getBreakStyleForType(unsigned __int32) const;
    Selection m_targetList; // 0x14
    vector3 m_lastKnownEnemyPos; // 0x48
    SobID m_CurrentTarget; // 0x54
    float m_Time; // 0x60
    float m_BreakDistanceSqr; // 0x64
    AttackCommand::AttackState m_State; // 0x68
    unsigned __int32 m_nNumberOfShipsInMicroFormations; // 0x6C
    unsigned __int32 m_lastValidTargetsAttackFamilyID; // 0x70
    bool m_retaliating; // 0x74
    bool m_specialAttack; // 0x75
    bool m_forceAttack; // 0x76
    bool m_kamiAttack; // 0x77
    vector3 m_groupOffset; // 0x78
    bool m_NDspawnedBattleEvent; // 0x84
    bool m_forceCantInterrupt; // 0x85
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    AttackCommand &operator=(AttackCommand const &); /* compiler_generated() */
};
static_assert(sizeof(AttackCommand) == 136, "Invalid AttackCommand size");

class AttackCommandStaticInfo :
    public BaseCommandStaticInfo
{
public:
    AttackCommandStaticInfo(AttackCommandStaticInfo const &); /* compiler_generated() */
    AttackCommandStaticInfo(unsigned __int32);
    virtual ~AttackCommandStaticInfo() override;
    AttackStyle::AttackStyleType GetAttackStyleForFamilyIndex(unsigned __int32) const;
    float GetPriorityForFamilyIndex(unsigned __int32) const;
    unsigned __int32 m_nNumberOfShipsInAttackFormation; // 0x8
protected:
    AttackStyle::AttackStyleType m_nDefaultStyle; // 0xC
    std::map<unsigned int,enum AttackStyle::AttackStyleType,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,enum AttackStyle::AttackStyleType> > > m_StyleFromFamilyIndex; // 0x10
    float m_nDefaultPriority; // 0x18
    std::map<unsigned int,float,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,float> > > m_PrioritiesFromFamilyIndex; // 0x1C
    bool m_canKamikaze; // 0x24
    bool m_canInterpolate; // 0x25
    float m_timeBetweenShipPeel; // 0x28
    float m_attackStyleActivationMultiplier; // 0x2C
    __int32 m_specialAttackIndex; // 0x30
    std::list<AttackStyleStatic *,std::allocator<AttackStyleStatic *> > m_attackStyleStatics; // 0x34
    AttackStyleStatic **m_infoOnAttackStyles; // 0x3C
public:
    _inline bool canKamikaze() const;
    _inline bool canInterpolate() const;
    _inline AttackStyleStatic const *getAttackStyleInfo(unsigned __int32) const;
    AttackStyle::AttackStyleType loadAttackStyle(char const *, __int32);
    _inline float getTimeBetweenShipPeel() const;
    _inline float getAttackStyleActivationWepRangeMultiplier() const;
    _inline __int32 getSpecialAttackIndex() const;
    AttackCommandStaticInfo &operator=(AttackCommandStaticInfo const &); /* compiler_generated() */
};
static_assert(sizeof(AttackCommandStaticInfo) == 64, "Invalid AttackCommandStaticInfo size");

class SpecialAttackManager
{
public:
    static _inline SpecialAttackManager *i();
    unsigned __int32 lookUpAttack(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    _inline unsigned __int32 getNumberOfSpecialAttacks() const;
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &getSpecialAttackName(unsigned __int32);
    static bool startup();
    static bool shutdown();
    SpecialAttackManager(SpecialAttackManager const &); /* compiler_generated() */
private:
    SpecialAttackManager();
    ~SpecialAttackManager();
    bool loadScripts();
    std::vector<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > > m_specialAttacks; // 0x0
    static SpecialAttackManager *s_instance;
public:
    SpecialAttackManager &operator=(SpecialAttackManager const &); /* compiler_generated() */
};
static_assert(sizeof(SpecialAttackManager) == 12, "Invalid SpecialAttackManager size");

struct AttackSortData
{
    AttackSortData();
    AttackCommandStaticInfo const *m_pAttackData; // 0x0
    SobWithMesh const *m_pAttacker; // 0x4
    Sob const *m_pOldTarget; // 0x8
};
static_assert(sizeof(AttackSortData) == 12, "Invalid AttackSortData size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern _sub_4868AD(CompareShipsByPriority *const, AttackSortData const &);
_inline CompareShipsByPriority::CompareShipsByPriority(AttackSortData const &) // 0x4868AD
{
    mangled_assert("??0CompareShipsByPriority@@QAE@ABUAttackSortData@@@Z");
    todo("implement");
    _sub_4868AD(this, arg);
}

_extern Selection &_sub_48D34C(AttackCommand *const);
_inline Selection &AttackCommand::getTargets() // 0x48D34C
{
    mangled_assert("?getTargets@AttackCommand@@QAEAAVSelection@@XZ");
    todo("implement");
    Selection & __result = _sub_48D34C(this);
    return __result;
}

_extern bool _sub_6A0548(AttackCommand const *const);
_inline bool AttackCommand::isRetaliating() const // 0x6A0548
{
    mangled_assert("?isRetaliating@AttackCommand@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_6A0548(this);
    return __result;
}

_extern bool _sub_6A0544(AttackCommand const *const);
_inline bool AttackCommand::isForceAttack() const // 0x6A0544
{
    mangled_assert("?isForceAttack@AttackCommand@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_6A0544(this);
    return __result;
}

_extern bool _sub_4E40A9(AttackCommand const *const);
_inline bool AttackCommand::isKamikaze() const // 0x4E40A9
{
    mangled_assert("?isKamikaze@AttackCommand@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_4E40A9(this);
    return __result;
}

_extern bool _sub_63F618(AttackCommand const *const);
_inline bool AttackCommand::isSpecialAttack() const // 0x63F618
{
    mangled_assert("?isSpecialAttack@AttackCommand@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_63F618(this);
    return __result;
}

_extern bool _sub_5356B6(AttackCommand const *const);
_inline bool AttackCommand::isAttackingTarget() const // 0x5356B6
{
    mangled_assert("?isAttackingTarget@AttackCommand@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_5356B6(this);
    return __result;
}

_extern bool _sub_634A93(AttackCommand const *const);
_inline bool AttackCommand::NDHasSpawnedBattleEvent() const // 0x634A93
{
    mangled_assert("?NDHasSpawnedBattleEvent@AttackCommand@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_634A93(this);
    return __result;
}

_extern void _sub_634A9A(AttackCommand *const);
_inline void AttackCommand::NDSetAsSpawnedBattleEvent() // 0x634A9A
{
    mangled_assert("?NDSetAsSpawnedBattleEvent@AttackCommand@@QAEXXZ");
    todo("implement");
    _sub_634A9A(this);
}

_extern void _sub_6B48E4(AttackCommand *const, bool);
_inline void AttackCommand::setCantInterrupt(bool) // 0x6B48E4
{
    mangled_assert("?setCantInterrupt@AttackCommand@@QAEX_N@Z");
    todo("implement");
    _sub_6B48E4(this, arg);
}

_extern bool _sub_6A0541(AttackCommand *const);
_inline bool AttackCommand::isDeterministic() // 0x6A0541
{
    mangled_assert("?isDeterministic@AttackCommand@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_6A0541(this);
    return __result;
}

_extern char const *_sub_6A0B74(AttackCommand *const);
_inline char const *AttackCommand::saveToken() // 0x6A0B74
{
    mangled_assert("?saveToken@AttackCommand@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_6A0B74(this);
    return __result;
}

_extern bool _sub_69FB12(AttackCommandStaticInfo const *const);
_inline bool AttackCommandStaticInfo::canKamikaze() const // 0x69FB12
{
    mangled_assert("?canKamikaze@AttackCommandStaticInfo@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_69FB12(this);
    return __result;
}

_extern bool _sub_6B3890(AttackCommandStaticInfo const *const);
_inline bool AttackCommandStaticInfo::canInterpolate() const // 0x6B3890
{
    mangled_assert("?canInterpolate@AttackCommandStaticInfo@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_6B3890(this);
    return __result;
}

_extern AttackStyleStatic const *_sub_6A0254(AttackCommandStaticInfo const *const, unsigned __int32);
_inline AttackStyleStatic const *AttackCommandStaticInfo::getAttackStyleInfo(unsigned __int32) const // 0x6A0254
{
    mangled_assert("?getAttackStyleInfo@AttackCommandStaticInfo@@QBEPBVAttackStyleStatic@@I@Z");
    todo("implement");
    AttackStyleStatic const * __result = _sub_6A0254(this, arg);
    return __result;
}

_extern float _sub_6A03CC(AttackCommandStaticInfo const *const);
_inline float AttackCommandStaticInfo::getTimeBetweenShipPeel() const // 0x6A03CC
{
    mangled_assert("?getTimeBetweenShipPeel@AttackCommandStaticInfo@@QBEMXZ");
    todo("implement");
    float __result = _sub_6A03CC(this);
    return __result;
}

_extern float _sub_6A0250(AttackCommandStaticInfo const *const);
_inline float AttackCommandStaticInfo::getAttackStyleActivationWepRangeMultiplier() const // 0x6A0250
{
    mangled_assert("?getAttackStyleActivationWepRangeMultiplier@AttackCommandStaticInfo@@QBEMXZ");
    todo("implement");
    float __result = _sub_6A0250(this);
    return __result;
}

_extern __int32 _sub_48CCD4(AttackCommandStaticInfo const *const);
_inline __int32 AttackCommandStaticInfo::getSpecialAttackIndex() const // 0x48CCD4
{
    mangled_assert("?getSpecialAttackIndex@AttackCommandStaticInfo@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_48CCD4(this);
    return __result;
}

_extern SpecialAttackManager *_sub_48D63B();
_inline SpecialAttackManager *SpecialAttackManager::i() // 0x48D63B
{
    mangled_assert("?i@SpecialAttackManager@@SGPAV1@XZ");
    todo("implement");
    SpecialAttackManager * __result = _sub_48D63B();
    return __result;
}

_extern unsigned __int32 _sub_5A6990(SpecialAttackManager const *const);
_inline unsigned __int32 SpecialAttackManager::getNumberOfSpecialAttacks() const // 0x5A6990
{
    mangled_assert("?getNumberOfSpecialAttacks@SpecialAttackManager@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_5A6990(this);
    return __result;
}

/* ---------- private code */

#endif // __ATTACKCOMMAND_H__
#endif
