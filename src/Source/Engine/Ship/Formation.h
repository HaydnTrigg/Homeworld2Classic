#if 0
#ifndef __FORMATION_H__
#define __FORMATION_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Formation :
    public SobRigidBody,
    private Selection::Observer
{
public:
    Formation(Formation &); /* compiler_generated() */
    Formation(SaveGameData *);
    Formation(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, Selection const *, Squadron *);
    virtual ~Formation() override;
protected:
    virtual void RemoveFromSimulation() override;
    void RemoveAllSimData();
public:
    Ship *getLeadShip() const;
    vector3 const &getLeadShipPosition() const;
    _inline Selection const &getShips() const;
    _inline Squadron *getSquadron() const;
    float getFormationWidth() const;
    void getExactFormationExtents(vector3 &, vector3 &) const;
    vector3 getFormationExtents() const;
    _inline FormationCommand *getCommand() const;
    void Attack(Sob *, Selection const &);
    void Dock(Ship *, unsigned __int32);
    void Launch(Ship *, unsigned __int32);
    void Move(FormationTargetInfo const &);
    void Idle();
    void Latch(SobID const &, vector3 const &, matrix3 const &, bool);
    void flyTo(FormationTargetInfo const &);
    _inline FormationTargetInfo const &getCurrentTarget() const;
    void circleStrafe(DynamicPoint const &, float, float, vector3 const &, bool, float);
    void stop();
    bool finishedMovementGoals(bool, float, bool);
    bool isCloseToPosition(vector3 const &, float);
    bool finishedPathAsFarAsItGoes(float);
    bool matchedGoalRotation() const;
    void latchShipsTo(Ship *, bool);
    void moveLatchPoint(vector3 const &);
    void setMaxSpeed(float const);
    void matchAdditionalVelocityWith(Sob const *);
    void performFlightManeuver(unsigned __int32);
    _inline bool getFlightManeuverInProgress();
    _inline void setFlightManeuverInProgress(bool);
protected:
    bool m_flightManeuverInProgress; // 0x20C
    bool m_circleStrafing; // 0x20D
    float m_circlestrafeRadius; // 0x210
    float m_circlestrafeHeight; // 0x214
    float m_circleStrafeAngle; // 0x218
    DynamicPoint m_circleStrafeTarget; // 0x21C
    quat m_circleStrafeAdder; // 0x2D8
    quat m_circleStrafeCurrent; // 0x2E8
    float m_currentReinitializeTime; // 0x2F8
    bool m_pointShips; // 0x2FC
    float m_cosMirrorAngle; // 0x300
    float m_cosSpecialTurnAngle; // 0x304
    bool m_inverted; // 0x308
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_patternName; // 0x30C
    FormationPattern *m_pattern; // 0x324
    FormationController *m_formationController; // 0x328
    std::vector<Ship *,std::allocator<Ship *> > m_shipsFormationPosition; // 0x32C
    std::vector<float,std::allocator<float> > m_time; // 0x338
    std::vector<vector3,std::allocator<vector3> > m_offsets; // 0x344
    std::vector<vector3,std::allocator<vector3> > m_newoffsets; // 0x350
    std::vector<float,std::allocator<float> > m_ups; // 0x35C
    std::vector<float,std::allocator<float> > m_newups; // 0x368
    float m_swayFactor; // 0x374
    Selection m_Ships; // 0x378
    Squadron *m_pParentSquadron; // 0x3AC
    FormationCommand *m_pCommand; // 0x3B0
    std::list<FormationTargetInfo,std::allocator<FormationTargetInfo> > m_formationGoals; // 0x3B4
    float m_pathRecalculateTime; // 0x3BC
    FormationTargetInfo m_originalGoal; // 0x3C0
    bool m_newGoal; // 0x55C
    void performRandomFlightManeuver(std::vector<unsigned int,std::allocator<unsigned int> > const &);
public:
    Sob *getSobToNotAvoid() const;
    Sob *getSobToNotCollideWith() const;
protected:
    void enableCircleStrafing();
    void disableCircleStrafing();
    void updateCircleStrafing();
    void setupNewCircleStrafePoint();
public:
    void flushTarget();
    void fireAtTarget(WeaponTargetInfo const &, Selection const &);
    bool weaponsFiredLastTurn() const;
    bool addShip(Ship *);
    void removeShip(Ship *);
    bool addShips(Selection const &);
    void removeShips(Selection const &);
    void reinitialize(bool);
    void reposition(bool);
    void setShipsToInitialPositions();
    void setPattern(FormationPattern *);
    void setPattern(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, bool);
    virtual bool update(float) override;
    _inline void setReinitializeTime(float);
protected:
    void updateShipTargets();
    void updateShips(float);
    void mirror(float);
public:
    virtual void setSleepingFlag(bool) override;
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    virtual void setPosition(vector3 const &) override;
    virtual void setCoordSys(matrix3 const &) override;
    virtual void setCoordSys(quat const &) override;
    virtual void setTransform(vector3 const &, matrix3 const &) override;
    Ship *getShipAtPosition(unsigned __int32);
    unsigned __int32 getShipPositionInFormation(Ship *);
    unsigned __int32 getNumberOfShipPositions();
protected:
    void transformFormationSlot(__int32, vector3 &, vector3 &, vector3 &) const;
    void transformLocalFormationSlot(__int32, vector3 &) const;
    void updateSwayOffset(unsigned __int32);
    vector3 getSwayOffset(unsigned __int32) const;
    float getSwayRotateFactor(unsigned __int32) const;
    void determineProperties();
    static void saveFormationGoals(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void restoreFormationGoals(void *objectPtr, SaveGameData *saveGameData);
    void doFlyTo(float);
    void updateCommand(float);
    bool reachedGoal(bool, float) const;
private:
    virtual void Notify_Insertion(Sob *) override;
    virtual void Notify_Removal(Sob *) override;
public:
    Formation &operator=(Formation &); /* compiler_generated() */
};
static_assert(sizeof(Formation) == 1376, "Invalid Formation size");

class Formation :
    public SobRigidBody,
    private Selection::Observer
{
public:
    Formation(Formation &); /* compiler_generated() */
    Formation(SaveGameData *);
    Formation(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, Selection const *, Squadron *);
    virtual ~Formation() override;
protected:
    virtual void RemoveFromSimulation() override;
    void RemoveAllSimData();
public:
    Ship *getLeadShip() const;
    vector3 const &getLeadShipPosition() const;
    _inline Selection const &getShips() const;
    _inline Squadron *getSquadron() const;
    float getFormationWidth() const;
    void getExactFormationExtents(vector3 &, vector3 &) const;
    vector3 getFormationExtents() const;
    _inline FormationCommand *getCommand() const;
    void Attack(Sob *, Selection const &);
    void Dock(Ship *, unsigned __int32);
    void Launch(Ship *, unsigned __int32);
    void Move(FormationTargetInfo const &);
    void Idle();
    void Latch(SobID const &, vector3 const &, matrix3 const &, bool);
    void flyTo(FormationTargetInfo const &);
    _inline FormationTargetInfo const &getCurrentTarget() const;
    void circleStrafe(DynamicPoint const &, float, float, vector3 const &, bool, float);
    void stop();
    bool finishedMovementGoals(bool, float, bool);
    bool isCloseToPosition(vector3 const &, float);
    bool finishedPathAsFarAsItGoes(float);
    bool matchedGoalRotation() const;
    void latchShipsTo(Ship *, bool);
    void moveLatchPoint(vector3 const &);
    void setMaxSpeed(float const);
    void matchAdditionalVelocityWith(Sob const *);
    void performFlightManeuver(unsigned __int32);
    _inline bool getFlightManeuverInProgress();
    _inline void setFlightManeuverInProgress(bool);
protected:
    bool m_flightManeuverInProgress; // 0x20C
    bool m_circleStrafing; // 0x20D
    float m_circlestrafeRadius; // 0x210
    float m_circlestrafeHeight; // 0x214
    float m_circleStrafeAngle; // 0x218
    DynamicPoint m_circleStrafeTarget; // 0x21C
    quat m_circleStrafeAdder; // 0x2D8
    quat m_circleStrafeCurrent; // 0x2E8
    float m_currentReinitializeTime; // 0x2F8
    bool m_pointShips; // 0x2FC
    float m_cosMirrorAngle; // 0x300
    float m_cosSpecialTurnAngle; // 0x304
    bool m_inverted; // 0x308
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_patternName; // 0x30C
    FormationPattern *m_pattern; // 0x324
    FormationController *m_formationController; // 0x328
    std::vector<Ship *,std::allocator<Ship *> > m_shipsFormationPosition; // 0x32C
    std::vector<float,std::allocator<float> > m_time; // 0x338
    std::vector<vector3,std::allocator<vector3> > m_offsets; // 0x344
    std::vector<vector3,std::allocator<vector3> > m_newoffsets; // 0x350
    std::vector<float,std::allocator<float> > m_ups; // 0x35C
    std::vector<float,std::allocator<float> > m_newups; // 0x368
    float m_swayFactor; // 0x374
    Selection m_Ships; // 0x378
    Squadron *m_pParentSquadron; // 0x3AC
    FormationCommand *m_pCommand; // 0x3B0
    std::list<FormationTargetInfo,std::allocator<FormationTargetInfo> > m_formationGoals; // 0x3B4
    float m_pathRecalculateTime; // 0x3BC
    FormationTargetInfo m_originalGoal; // 0x3C0
    bool m_newGoal; // 0x55C
    void performRandomFlightManeuver(std::vector<unsigned int,std::allocator<unsigned int> > const &);
public:
    Sob *getSobToNotAvoid() const;
    Sob *getSobToNotCollideWith() const;
protected:
    void enableCircleStrafing();
    void disableCircleStrafing();
    void updateCircleStrafing();
    void setupNewCircleStrafePoint();
public:
    void flushTarget();
    void fireAtTarget(WeaponTargetInfo const &, Selection const &);
    bool weaponsFiredLastTurn() const;
    bool addShip(Ship *);
    void removeShip(Ship *);
    bool addShips(Selection const &);
    void removeShips(Selection const &);
    void reinitialize(bool);
    void reposition(bool);
    void setShipsToInitialPositions();
    void setPattern(FormationPattern *);
    void setPattern(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, bool);
    virtual bool update(float) override;
    _inline void setReinitializeTime(float);
protected:
    void updateShipTargets();
    void updateShips(float);
    void mirror(float);
public:
    virtual void setSleepingFlag(bool) override;
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    virtual void setPosition(vector3 const &) override;
    virtual void setCoordSys(matrix3 const &) override;
    virtual void setCoordSys(quat const &) override;
    virtual void setTransform(vector3 const &, matrix3 const &) override;
    Ship *getShipAtPosition(unsigned __int32);
    unsigned __int32 getShipPositionInFormation(Ship *);
    unsigned __int32 getNumberOfShipPositions();
protected:
    void transformFormationSlot(__int32, vector3 &, vector3 &, vector3 &) const;
    void transformLocalFormationSlot(__int32, vector3 &) const;
    void updateSwayOffset(unsigned __int32);
    vector3 getSwayOffset(unsigned __int32) const;
    float getSwayRotateFactor(unsigned __int32) const;
    void determineProperties();
    static void saveFormationGoals(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void restoreFormationGoals(void *objectPtr, SaveGameData *saveGameData);
    void doFlyTo(float);
    void updateCommand(float);
    bool reachedGoal(bool, float) const;
private:
    virtual void Notify_Insertion(Sob *) override;
    virtual void Notify_Removal(Sob *) override;
public:
    Formation &operator=(Formation &); /* compiler_generated() */
};
static_assert(sizeof(Formation) == 1376, "Invalid Formation size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline Selection const &Formation::getShips() const // 0x4B978D
{
    mangled_assert("?getShips@Formation@@QBEABVSelection@@XZ");
    todo("implement");
}

_inline Squadron *Formation::getSquadron() const // 0x4E46AC
{
    mangled_assert("?getSquadron@Formation@@QBEPAVSquadron@@XZ");
    todo("implement");
}

_inline FormationCommand *Formation::getCommand() const // 0x4864B1
{
    mangled_assert("?getCommand@Formation@@QBEPAVFormationCommand@@XZ");
    todo("implement");
}

_inline FormationTargetInfo const &Formation::getCurrentTarget() const // 0x50A8FB
{
    mangled_assert("?getCurrentTarget@Formation@@QBEABVFormationTargetInfo@@XZ");
    todo("implement");
}

_inline bool Formation::getFlightManeuverInProgress() // 0x6BC709
{
    mangled_assert("?getFlightManeuverInProgress@Formation@@QAE_NXZ");
    todo("implement");
}

_inline void Formation::setFlightManeuverInProgress(bool) // 0x48F6F3
{
    mangled_assert("?setFlightManeuverInProgress@Formation@@QAEX_N@Z");
    todo("implement");
}

_inline void Formation::setReinitializeTime(float) // 0x658E8B
{
    mangled_assert("?setReinitializeTime@Formation@@QAEXM@Z");
    todo("implement");
}

_inline bool Formation::isDeterministic() // 0x657C64
{
    mangled_assert("?isDeterministic@Formation@@UAE_NXZ");
    todo("implement");
}

_inline char const *Formation::saveToken() // 0x658AB0
{
    mangled_assert("?saveToken@Formation@@UAEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __FORMATION_H__
#endif
