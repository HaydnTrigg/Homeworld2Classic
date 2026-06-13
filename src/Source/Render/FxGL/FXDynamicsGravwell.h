#if 0
#ifndef __FXDYNAMICSGRAVWELL_H__
#define __FXDYNAMICSGRAVWELL_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FXDynamicsGravwell :
    public FXManager::Dynamics
{
public:
    FXDynamicsGravwell();
private:
    FXDynamicsGravwell(FXDynamicsGravwell const &);
public:
    virtual ~FXDynamicsGravwell() override;
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
    FXDynamicsGravwell &operator=(FXDynamicsGravwell &);
};
static_assert(sizeof(FXDynamicsGravwell) == 40, "Invalid FXDynamicsGravwell size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __FXDYNAMICSGRAVWELL_H__
#endif
