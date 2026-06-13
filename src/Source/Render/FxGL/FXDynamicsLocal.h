#if 0
#ifndef __FXDYNAMICSLOCAL_H__
#define __FXDYNAMICSLOCAL_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FXDynamicsLocal :
    public FXManager::Dynamics
{
public:
    FXDynamicsLocal();
private:
    FXDynamicsLocal(FXDynamicsLocal const &);
public:
    virtual ~FXDynamicsLocal() override;
    virtual FXManager::Dynamics *Clone() const override;
    virtual void InitialPosition(vector3 const &) override;
    virtual void InitialVelocity(vector3 const &) override;
    virtual void InitialDrag(float const) override;
    virtual bool MoveObject(FXManager::Object *, float) override;
private:
    FXManager::Handle m_parent; // 0x4
    vector3 m_position; // 0xC
    vector3 m_velocity; // 0x18
    float m_drag; // 0x24
    FXDynamicsLocal &operator=(FXDynamicsLocal &);
};
static_assert(sizeof(FXDynamicsLocal) == 40, "Invalid FXDynamicsLocal size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __FXDYNAMICSLOCAL_H__
#endif
