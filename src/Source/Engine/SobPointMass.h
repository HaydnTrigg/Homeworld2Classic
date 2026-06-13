#if 0
#ifndef __SOBPOINTMASS_H__
#define __SOBPOINTMASS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SobPointMass :
    public Sob
{
public:
    typedef Sob SuperClass;
    SobPointMass(SobPointMass &); /* compiler_generated() */
protected:
    SobPointMass(SobType, SaveGameData *);
public:
    SobPointMass(SobType, char const *, bool);
    virtual ~SobPointMass() override;
    virtual vector3 const &getPosition() const override;
    virtual void setPosition(vector3 const &) override;
    virtual void setTransform(vector3 const &, matrix3 const &) override;
    virtual vector3 const &getVelocity() const override;
    virtual void setVelocity(vector3 const &) override;
    virtual vector3 const &getOldPosition() const override;
    virtual vector3 const &getOldVelocity() const override;
    virtual bool isMoving() const override;
    virtual bool isRotating() const override;
    void staticInit();
    virtual void reloadStats() override;
    virtual bool update(float) override;
    _inline SobPointMassStatic const *getStatic() const;
protected:
    virtual void RemoveFromSimulation() override;
    void RemoveAllSimData();
    PointMass *m_pointMass; // 0x1CC
    void UpdatePointMassWithStaticData();
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
public:
    SobPointMass &operator=(SobPointMass &); /* compiler_generated() */
};
static_assert(sizeof(SobPointMass) == 464, "Invalid SobPointMass size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern SobPointMassStatic const *_sub_4B35B9(SobPointMass const *const);
_inline SobPointMassStatic const *SobPointMass::getStatic() const // 0x4B35B9
{
    mangled_assert("?getStatic@SobPointMass@@QBEPBVSobPointMassStatic@@XZ");
    todo("implement");
    SobPointMassStatic const * __result = _sub_4B35B9(this);
    return __result;
}

_extern bool _sub_4B35CB(SobPointMass *const);
_inline bool SobPointMass::isDeterministic() // 0x4B35CB
{
    mangled_assert("?isDeterministic@SobPointMass@@MAE_NXZ");
    todo("implement");
    bool __result = _sub_4B35CB(this);
    return __result;
}

_extern char const *_sub_4B3697(SobPointMass *const);
_inline char const *SobPointMass::saveToken() // 0x4B3697
{
    mangled_assert("?saveToken@SobPointMass@@MAEPBDXZ");
    todo("implement");
    char const * __result = _sub_4B3697(this);
    return __result;
}

/* ---------- private code */

#endif // __SOBPOINTMASS_H__
#endif
