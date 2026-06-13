#if 0
#ifndef __SOBRIGIDBODY_H__
#define __SOBRIGIDBODY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SobRigidBody :
    public Sob
{
public:
    typedef Sob SuperClass;
    SobRigidBody(SobRigidBody &); /* compiler_generated() */
    SobRigidBody(SobType, SaveGameData *);
    SobRigidBody(SobType, char const *, bool);
    virtual ~SobRigidBody() override;
    virtual vector3 const &getPosition() const override;
    virtual void setPosition(vector3 const &) override;
    virtual _inline SobRigidBody *getSobRigidBodyPtr() override;
    virtual void setTransform(vector3 const &, matrix3 const &) override;
    virtual vector3 const getUp() const override;
    virtual quat const &getCoordSysQuat() const override;
    virtual matrix3 const &getCoordSys() const override;
    virtual void setCoordSys(matrix3 const &) override;
    virtual void setCoordSys(quat const &) override;
    virtual vector3 const &getVelocity() const override;
    virtual void setVelocity(vector3 const &) override;
    virtual vector3 const &getAngularVelocity() const override;
    virtual void setAngularVelocity(vector3 const &) override;
    virtual void setRandomAngularVelocity(float) override;
    vector3 const getHeading() const;
    virtual vector3 const &getOldPosition() const override;
    virtual quat const &getOldCoordSysQuat() const override;
    virtual vector3 const &getOldVelocity() const override;
    virtual vector3 const &getOldAngularVelocity() const override;
    bool isLatched() const;
    Sob *getWhatWeAreLatchedTo() const;
    virtual bool isMoving() const override;
    virtual bool isRotating() const override;
    virtual void reloadStats() override;
    virtual bool update(float) override;
    virtual bool HasRigidBody() override;
    _inline RigidBody *getRigidBody() const;
    _inline SobRigidBodyStatic const *getStatic() const;
protected:
    void setLatched(SobID const &);
    void unSetLatched();
    virtual void RemoveFromSimulation() override;
    void RemoveAllSimData();
    RigidBody *m_rigidBody; // 0x1CC
    matrix3 m_cachedMatrix; // 0x1D0
    unsigned __int32 m_lastFrame; // 0x1F4
    SobID m_latchedObjectID; // 0x1F8
    bool m_bLatched; // 0x204
    void UpdateRigidBodyWithStaticData();
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    virtual _inline char const *saveToken() override;
    void defaultSettings();
public:
    SobRigidBody &operator=(SobRigidBody &); /* compiler_generated() */
};
static_assert(sizeof(SobRigidBody) == 520, "Invalid SobRigidBody size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern SobRigidBody *_sub_487F60(SobRigidBody *const);
_inline SobRigidBody *SobRigidBody::getSobRigidBodyPtr() // 0x487F60
{
    mangled_assert("?getSobRigidBodyPtr@SobRigidBody@@UAEPAV1@XZ");
    todo("implement");
    SobRigidBody * __result = _sub_487F60(this);
    return __result;
}

_extern RigidBody *_sub_4A2F00(SobRigidBody const *const);
_inline RigidBody *SobRigidBody::getRigidBody() const // 0x4A2F00
{
    mangled_assert("?getRigidBody@SobRigidBody@@QBEPAVRigidBody@@XZ");
    todo("implement");
    RigidBody * __result = _sub_4A2F00(this);
    return __result;
}

_extern SobRigidBodyStatic const *_sub_441C8C(SobRigidBody const *const);
_inline SobRigidBodyStatic const *SobRigidBody::getStatic() const // 0x441C8C
{
    mangled_assert("?getStatic@SobRigidBody@@QBEPBVSobRigidBodyStatic@@XZ");
    todo("implement");
    SobRigidBodyStatic const * __result = _sub_441C8C(this);
    return __result;
}

_extern bool _sub_4B2FDB(SobRigidBody *const);
_inline bool SobRigidBody::isDeterministic() // 0x4B2FDB
{
    mangled_assert("?isDeterministic@SobRigidBody@@MAE_NXZ");
    todo("implement");
    bool __result = _sub_4B2FDB(this);
    return __result;
}

_extern char const *_sub_4B30B9(SobRigidBody *const);
_inline char const *SobRigidBody::saveToken() // 0x4B30B9
{
    mangled_assert("?saveToken@SobRigidBody@@MAEPBDXZ");
    todo("implement");
    char const * __result = _sub_4B30B9(this);
    return __result;
}

/* ---------- private code */

#endif // __SOBRIGIDBODY_H__
#endif
