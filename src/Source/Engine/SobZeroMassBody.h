#if 0
#ifndef __SOBZEROMASSBODY_H__
#define __SOBZEROMASSBODY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SobZeroMassBody :
    public Sob
{
public:
    typedef Sob SuperClass;
    SobZeroMassBody(SobZeroMassBody &); /* compiler_generated() */
    SobZeroMassBody(SobType, SaveGameData *);
    SobZeroMassBody(SobType, char const *, bool);
    virtual ~SobZeroMassBody() override;
    virtual vector3 const &getPosition() const override;
    virtual void setPosition(vector3 const &) override;
    virtual void setTransform(vector3 const &, matrix3 const &) override;
    virtual quat const &getCoordSysQuat() const override;
    virtual matrix3 const &getCoordSys() const override;
    virtual void setCoordSys(matrix3 const &) override;
    virtual void setCoordSys(quat const &) override;
    virtual vector3 const &getVelocity() const override;
    virtual void setVelocity(vector3 const &) override;
    virtual vector3 const &getAngularVelocity() const override;
    virtual void setAngularVelocity(vector3 const &) override;
    virtual vector3 const &getOldPosition() const override;
    virtual quat const &getOldCoordSysQuat() const override;
    virtual vector3 const &getOldVelocity() const override;
    virtual vector3 const &getOldAngularVelocity() const override;
    virtual bool isMoving() const override;
    virtual bool isRotating() const override;
    virtual void reloadStats() override;
    virtual bool update(float) override;
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    _inline SobZeroMassBodyStatic const *getStatic() const;
protected:
    virtual void RemoveFromSimulation() override;
    void RemoveAllSimData();
    ZeroMassBody *m_zeroMassBody; // 0x1CC
    matrix3 m_cachedMatrix; // 0x1D0
    unsigned __int32 m_lastFrame; // 0x1F4
public:
    SobZeroMassBody &operator=(SobZeroMassBody &); /* compiler_generated() */
};
static_assert(sizeof(SobZeroMassBody) == 504, "Invalid SobZeroMassBody size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern bool _sub_4B39AE(SobZeroMassBody *const);
_inline bool SobZeroMassBody::isDeterministic() // 0x4B39AE
{
    mangled_assert("?isDeterministic@SobZeroMassBody@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_4B39AE(this);
    return __result;
}

_extern char const *_sub_4B3A7F(SobZeroMassBody *const);
_inline char const *SobZeroMassBody::saveToken() // 0x4B3A7F
{
    mangled_assert("?saveToken@SobZeroMassBody@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_4B3A7F(this);
    return __result;
}

_extern SobZeroMassBodyStatic const *_sub_4AA2DD(SobZeroMassBody const *const);
_inline SobZeroMassBodyStatic const *SobZeroMassBody::getStatic() const // 0x4AA2DD
{
    mangled_assert("?getStatic@SobZeroMassBody@@QBEPBVSobZeroMassBodyStatic@@XZ");
    todo("implement");
    SobZeroMassBodyStatic const * __result = _sub_4AA2DD(this);
    return __result;
}

/* ---------- private code */

#endif // __SOBZEROMASSBODY_H__
#endif
