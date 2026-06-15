#if 0
#ifndef __ZEROMASSBODY_H__
#define __ZEROMASSBODY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class ZeroMassBody :
    public PhysicsObject
{
public:
    ZeroMassBody(SaveGameData *);
    ZeroMassBody(ZeroMassBody const &);
    ZeroMassBody(bool);
    virtual ~ZeroMassBody() override;
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
    _inline vector3 const &getOldPosition() const;
    _inline quat const &getOldOrientation() const;
    _inline vector3 const &getOldVelocity() const;
    _inline vector3 const &getOldAngularVelocity() const;
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    struct BodyState
    {
        vector3 x; // 0x0
        vector3 v; // 0xC
        vector3 a; // 0x18
        quat q; // 0x24
        vector3 omega; // 0x34
        vector3 angacc; // 0x40
        _inline BodyState(); /* compiler_generated() */
    };
    static_assert(sizeof(BodyState) == 76, "Invalid BodyState size");
private:
    ZeroMassBody::BodyState m_bodystates[2]; // 0x10
    ZeroMassBody::BodyState *m_oldBodyState; // 0xA8
    ZeroMassBody::BodyState *m_currentBodyState; // 0xAC
    bool m_currentIsZero; // 0xB0
    bool m_inTimeStep; // 0xB1
    void setDefaultBodyStates();
    void swapBodyStates();
    void solveEuler(float);
public:
    static void *operator new(unsigned __int32 size);
    static void operator delete(void *p, unsigned __int32 size);
    _inline ZeroMassBody &operator=(ZeroMassBody const &); /* compiler_generated() */
};
static_assert(sizeof(ZeroMassBody) == 180, "Invalid ZeroMassBody size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline vector3 const &ZeroMassBody::getPosition() const // 0x4B398D
{
    mangled_assert("?getPosition@ZeroMassBody@@QBEABVvector3@@XZ");
    todo("implement");
}

_inline quat const &ZeroMassBody::getOrientation() const // 0x4B3976
{
    mangled_assert("?getOrientation@ZeroMassBody@@QBEABVquat@@XZ");
    todo("implement");
}

_inline vector3 const &ZeroMassBody::getVelocity() const // 0x4B39A4
{
    mangled_assert("?getVelocity@ZeroMassBody@@QBEABVvector3@@XZ");
    todo("implement");
}

_inline vector3 const &ZeroMassBody::getAngularVelocity() const // 0x4B38C4
{
    mangled_assert("?getAngularVelocity@ZeroMassBody@@QBEABVvector3@@XZ");
    todo("implement");
}

_inline vector3 const &ZeroMassBody::getOldPosition() const // 0x4B3955
{
    mangled_assert("?getOldPosition@ZeroMassBody@@QBEABVvector3@@XZ");
    todo("implement");
}

_inline quat const &ZeroMassBody::getOldOrientation() const // 0x4B393E
{
    mangled_assert("?getOldOrientation@ZeroMassBody@@QBEABVquat@@XZ");
    todo("implement");
}

_inline vector3 const &ZeroMassBody::getOldVelocity() const // 0x4B396C
{
    mangled_assert("?getOldVelocity@ZeroMassBody@@QBEABVvector3@@XZ");
    todo("implement");
}

_inline vector3 const &ZeroMassBody::getOldAngularVelocity() const // 0x4B3924
{
    mangled_assert("?getOldAngularVelocity@ZeroMassBody@@QBEABVvector3@@XZ");
    todo("implement");
}

_inline bool ZeroMassBody::isDeterministic() // 0x476D19
{
    mangled_assert("?isDeterministic@ZeroMassBody@@UAE_NXZ");
    todo("implement");
}

_inline char const *ZeroMassBody::saveToken() // 0x476EF1
{
    mangled_assert("?saveToken@ZeroMassBody@@UAEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __ZEROMASSBODY_H__
#endif
