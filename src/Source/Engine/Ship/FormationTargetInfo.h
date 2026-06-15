#if 0
#ifndef __FORMATIONTARGETINFO_H__
#define __FORMATIONTARGETINFO_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FormationTargetInfo :
    public Saveable
{
public:
    _inline FormationTargetInfo(FormationTargetInfo const &); /* compiler_generated() */
    FormationTargetInfo();
    DynamicPoint const &getDynamicPoint() const;
    void setDynamicPoint(DynamicPoint const &);
    float getMinVelocity() const;
    void setMinVelocity(float);
    float getMaxVelocity() const;
    void setMaxVelocity(float);
    bool getSlowDownAtGoal() const;
    void setSlowDownAtGoal(bool);
    bool getMoveInfinitelyClose() const;
    void setMoveInfinitelyClose(bool);
    bool getEnforceMaxAngles() const;
    void setEnforceMaxAngles(bool);
    ForceBehaviour getForceBehaviour() const;
    void setForceBehaviour(ForceBehaviour const &);
    enum PointToTargetState
    {
        None = 0,
        PointShips,
        PointShipsAndFormation,
    };
    FormationTargetInfo::PointToTargetState getPointToTargetState() const;
    void setPointToTargetState(FormationTargetInfo::PointToTargetState);
    DynamicPoint const &getPointToTarget() const;
    void setPointToTarget(DynamicPoint const &);
    float getAngleToTarget() const;
    void setAngleToTarget(float);
    bool getMatchGoalHeading() const;
    void setMatchGoalHeading(bool);
    bool getDoPathFinding() const;
    void setDoPathFinding(bool);
    _inline bool getFollowStrikeGroup() const;
    _inline void setFollowStrikeGroup(bool);
    bool getDisableFlightManeuvers() const;
    void setDisableFlightManeuvers(bool);
protected:
    DynamicPoint m_position; // 0x4
    float m_minVelocity; // 0xC0
    float m_maxVelocity; // 0xC4
    bool m_slowDownAtGoal; // 0xC8
    bool m_infinitelyClose; // 0xC9
    bool m_enforceMaximumAngles; // 0xCA
    ForceBehaviour m_forceBehaviour; // 0xCC
    FormationTargetInfo::PointToTargetState m_pointToTargetState; // 0xD0
    DynamicPoint m_pointToTarget; // 0xD4
    float m_angleToTarget; // 0x190
    bool m_matchGoalHeading; // 0x194
    bool m_doPathFinding; // 0x195
    bool m_followStrikeGroup; // 0x196
    bool m_keepHeadingTowardsTarget; // 0x197
    bool m_disableFlightManeuvers; // 0x198
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    virtual _inline ~FormationTargetInfo() override; /* compiler_generated() */
    _inline FormationTargetInfo &operator=(FormationTargetInfo const &); /* compiler_generated() */
};
static_assert(sizeof(FormationTargetInfo) == 412, "Invalid FormationTargetInfo size");

class FormationTargetInfo :
    public Saveable
{
public:
    _inline FormationTargetInfo(FormationTargetInfo const &); /* compiler_generated() */
    FormationTargetInfo();
    DynamicPoint const &getDynamicPoint() const;
    void setDynamicPoint(DynamicPoint const &);
    float getMinVelocity() const;
    void setMinVelocity(float);
    float getMaxVelocity() const;
    void setMaxVelocity(float);
    bool getSlowDownAtGoal() const;
    void setSlowDownAtGoal(bool);
    bool getMoveInfinitelyClose() const;
    void setMoveInfinitelyClose(bool);
    bool getEnforceMaxAngles() const;
    void setEnforceMaxAngles(bool);
    ForceBehaviour getForceBehaviour() const;
    void setForceBehaviour(ForceBehaviour const &);
    enum PointToTargetState
    {
        None = 0,
        PointShips,
        PointShipsAndFormation,
    };
    FormationTargetInfo::PointToTargetState getPointToTargetState() const;
    void setPointToTargetState(FormationTargetInfo::PointToTargetState);
    DynamicPoint const &getPointToTarget() const;
    void setPointToTarget(DynamicPoint const &);
    float getAngleToTarget() const;
    void setAngleToTarget(float);
    bool getMatchGoalHeading() const;
    void setMatchGoalHeading(bool);
    bool getDoPathFinding() const;
    void setDoPathFinding(bool);
    _inline bool getFollowStrikeGroup() const;
    _inline void setFollowStrikeGroup(bool);
    bool getDisableFlightManeuvers() const;
    void setDisableFlightManeuvers(bool);
protected:
    DynamicPoint m_position; // 0x4
    float m_minVelocity; // 0xC0
    float m_maxVelocity; // 0xC4
    bool m_slowDownAtGoal; // 0xC8
    bool m_infinitelyClose; // 0xC9
    bool m_enforceMaximumAngles; // 0xCA
    ForceBehaviour m_forceBehaviour; // 0xCC
    FormationTargetInfo::PointToTargetState m_pointToTargetState; // 0xD0
    DynamicPoint m_pointToTarget; // 0xD4
    float m_angleToTarget; // 0x190
    bool m_matchGoalHeading; // 0x194
    bool m_doPathFinding; // 0x195
    bool m_followStrikeGroup; // 0x196
    bool m_keepHeadingTowardsTarget; // 0x197
    bool m_disableFlightManeuvers; // 0x198
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    virtual _inline ~FormationTargetInfo() override; /* compiler_generated() */
    _inline FormationTargetInfo &operator=(FormationTargetInfo const &); /* compiler_generated() */
};
static_assert(sizeof(FormationTargetInfo) == 412, "Invalid FormationTargetInfo size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline bool FormationTargetInfo::getFollowStrikeGroup() const // 0x50A902
{
    mangled_assert("?getFollowStrikeGroup@FormationTargetInfo@@QBE_NXZ");
    todo("implement");
}

_inline void FormationTargetInfo::setFollowStrikeGroup(bool) // 0x6B09F4
{
    mangled_assert("?setFollowStrikeGroup@FormationTargetInfo@@QAEX_N@Z");
    todo("implement");
}

_inline bool FormationTargetInfo::isDeterministic() // 0x4B655A
{
    mangled_assert("?isDeterministic@FormationTargetInfo@@UAE_NXZ");
    todo("implement");
}

_inline char const *FormationTargetInfo::saveToken() // 0x4B65D1
{
    mangled_assert("?saveToken@FormationTargetInfo@@UAEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __FORMATIONTARGETINFO_H__
#endif
