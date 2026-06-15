#if 0
#ifndef __FXDYNAMICSPLANAR_H__
#define __FXDYNAMICSPLANAR_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FXDynamicsPlanar :
    public FXManager::Dynamics
{
public:
    FXDynamicsPlanar();
private:
    FXDynamicsPlanar(FXDynamicsPlanar const &);
public:
    virtual ~FXDynamicsPlanar() override;
    virtual void SetMoveable(bool);
    virtual FXManager::Dynamics *Clone() const override;
    virtual void InitialPosition(vector3 const &) override;
    virtual void InitialVelocity(vector3 const &) override;
    virtual _inline void InitialDrag(float const) override;
    virtual bool MoveObject(FXManager::Object *, float) override;
private:
    bool m_moveable; // 0x4
    vector3 m_position; // 0x8
    vector3 m_velocity; // 0x14
    vector3 m_planeNormal; // 0x20
    float m_planeD; // 0x2C
    FXDynamicsPlanar &operator=(FXDynamicsPlanar &);
};
static_assert(sizeof(FXDynamicsPlanar) == 48, "Invalid FXDynamicsPlanar size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline void FXDynamicsPlanar::InitialDrag(float const) // 0x6F42F1
{
    mangled_assert("?InitialDrag@FXDynamicsPlanar@@UAEXM@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __FXDYNAMICSPLANAR_H__
#endif
