#if 0
#ifndef __MISSILECONTROLLER_H__
#define __MISSILECONTROLLER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class MissileController :
    public ShipController
{
public:
    typedef ShipController SuperClass;
    MissileController(MissileController const &); /* compiler_generated() */
    MissileController(SaveGameData *);
    MissileController(float, float, float, float, float);
    virtual ~MissileController() override;
    virtual void doBehaviour(float) override;
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
protected:
    bool reachedGoal() const;
    vector3 getSwayingGoal(float);
    float m_tanTargetAngle; // 0x340
    float m_angle; // 0x344
    float m_addedAngle; // 0x348
    float m_slowdownFactor; // 0x34C
    float m_cosAccelerationAngle; // 0x350
public:
    MissileController &operator=(MissileController const &); /* compiler_generated() */
};
static_assert(sizeof(MissileController) == 852, "Invalid MissileController size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern bool _sub_49B878(MissileController *const);
_inline bool MissileController::isDeterministic() // 0x49B878
{
    mangled_assert("?isDeterministic@MissileController@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_49B878(this);
    return __result;
}

_extern char const *_sub_49B918(MissileController *const);
_inline char const *MissileController::saveToken() // 0x49B918
{
    mangled_assert("?saveToken@MissileController@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_49B918(this);
    return __result;
}

/* ---------- private code */

#endif // __MISSILECONTROLLER_H__
#endif
