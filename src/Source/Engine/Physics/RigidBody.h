#if 0
#ifndef __RIGIDBODY_H__
#define __RIGIDBODY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class RigidBody :
    public PhysicsObject
{
public:
    RigidBody(SaveGameData *);
    RigidBody(RigidBody const &);
    RigidBody(char const *, bool);
    virtual ~RigidBody() override;
    virtual void simulateTimeStep(float) override;
    _inline vector3 const &getPosition() const;
    void setPosition(vector3 const &);
    _inline quat const &getOrientation() const;
    void setOrientation(matrix3 const &);
    void setOrientation(quat const &);
    _inline vector3 const &getVelocity() const;
    void setVelocity(vector3 const &);
    _inline vector3 const &getAngularVelocity() const;
    void setAngularVelocity(vector3 const &);
    void setAdditionalVelocity(vector3 const &);
    void setAdditionalAngularVelocity(vector3 const &);
    _inline vector3 const &getOldPosition() const;
    _inline quat const &getOldOrientation() const;
    _inline vector3 const &getOldVelocity() const;
    _inline vector3 const &getOldAngularVelocity() const;
    void addForce(vector3 const &);
    void addBsForceBsPosition(vector3 const &, vector3 const &);
    void addWsForceBsPosition(vector3 const &, vector3 const &);
    void addBsForceWsPosition(vector3 const &, vector3 const &);
    void addWsForceWsPosition(vector3 const &, vector3 const &);
    void addTorque(vector3 const &);
    void addController(RigidBodyController *);
    void removeController(RigidBodyController *);
    void removeAllControllers();
    void setDamping(bool, bool);
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    void swapBodyStates();
    void copyBodyStates();
    bool hasMoved() const;
    struct BodyState
    {
        vector3 x; // 0x0
        vector3 v; // 0xC
        quat q; // 0x18
        vector3 omega; // 0x28
        vector3 force; // 0x34
        vector3 torque; // 0x40
        _inline BodyState(); /* compiler_generated() */
    };
    static_assert(sizeof(BodyState) == 76, "Invalid BodyState size");
private:
    RigidBody::BodyState m_bodystates[2]; // 0x10
    RigidBody::BodyState *m_oldBodyState; // 0xA8
    RigidBody::BodyState *m_currentBodyState; // 0xAC
    bool m_currentIsZero; // 0xB0
    vector3 m_force; // 0xB4
    vector3 m_torque; // 0xC0
    vector3 m_controllersForce; // 0xCC
    vector3 m_controllersTorque; // 0xD8
    vector3 m_additionalVelocity; // 0xE4
    vector3 m_additionalAngularVelocity; // 0xF0
    std::list<RigidBodyController *,std::allocator<RigidBodyController *> > m_controllers; // 0xFC
    bool m_inTimeStep; // 0x104
public:
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x108
private:
    bool m_linearDamping; // 0x120
    bool m_angularDamping; // 0x121
    void setDefaultBodyStates();
    void solveEuler(float);
    void applyForcesAndTorques(float);
public:
    _inline RigidBody &operator=(RigidBody const &); /* compiler_generated() */
};
static_assert(sizeof(RigidBody) == 292, "Invalid RigidBody size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern vector3 const &_sub_47548E(RigidBody const *const);
_inline vector3 const &RigidBody::getPosition() const // 0x47548E
{
    mangled_assert("?getPosition@RigidBody@@QBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_47548E(this);
    return __result;
}

_extern quat const &_sub_475484(RigidBody const *const);
_inline quat const &RigidBody::getOrientation() const // 0x475484
{
    mangled_assert("?getOrientation@RigidBody@@QBEABVquat@@XZ");
    todo("implement");
    quat const & __result = _sub_475484(this);
    return __result;
}

_extern vector3 const &_sub_475495(RigidBody const *const);
_inline vector3 const &RigidBody::getVelocity() const // 0x475495
{
    mangled_assert("?getVelocity@RigidBody@@QBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_475495(this);
    return __result;
}

_extern vector3 const &_sub_47547A(RigidBody const *const);
_inline vector3 const &RigidBody::getAngularVelocity() const // 0x47547A
{
    mangled_assert("?getAngularVelocity@RigidBody@@QBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_47547A(this);
    return __result;
}

_extern vector3 const &_sub_4B2F63(RigidBody const *const);
_inline vector3 const &RigidBody::getOldPosition() const // 0x4B2F63
{
    mangled_assert("?getOldPosition@RigidBody@@QBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_4B2F63(this);
    return __result;
}

_extern quat const &_sub_4B2F59(RigidBody const *const);
_inline quat const &RigidBody::getOldOrientation() const // 0x4B2F59
{
    mangled_assert("?getOldOrientation@RigidBody@@QBEABVquat@@XZ");
    todo("implement");
    quat const & __result = _sub_4B2F59(this);
    return __result;
}

_extern vector3 const &_sub_4B2F77(RigidBody const *const);
_inline vector3 const &RigidBody::getOldVelocity() const // 0x4B2F77
{
    mangled_assert("?getOldVelocity@RigidBody@@QBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_4B2F77(this);
    return __result;
}

_extern vector3 const &_sub_4B2F2F(RigidBody const *const);
_inline vector3 const &RigidBody::getOldAngularVelocity() const // 0x4B2F2F
{
    mangled_assert("?getOldAngularVelocity@RigidBody@@QBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_4B2F2F(this);
    return __result;
}

_extern bool _sub_4754D9(RigidBody *const);
_inline bool RigidBody::isDeterministic() // 0x4754D9
{
    mangled_assert("?isDeterministic@RigidBody@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_4754D9(this);
    return __result;
}

_extern char const *_sub_47564C(RigidBody *const);
_inline char const *RigidBody::saveToken() // 0x47564C
{
    mangled_assert("?saveToken@RigidBody@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_47564C(this);
    return __result;
}

/* ---------- private code */

#endif // __RIGIDBODY_H__
#endif
