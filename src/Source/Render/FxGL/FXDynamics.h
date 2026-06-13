#if 0
#ifndef __FXDYNAMICS_H__
#define __FXDYNAMICS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FXDynamicsNewton :
    public FXManager::Dynamics
{
public:
    FXDynamicsNewton();
private:
    FXDynamicsNewton(FXDynamicsNewton const &);
public:
    virtual ~FXDynamicsNewton() override;
    enum CollisionResponse
    {
        CR_IGNORE = 0,
        CR_BOUNCE,
        CR_STICK,
        CR_DIE,
        CR_COUNT,
    };
    static vector3 const &GetGravity();
    static void SetGravity(vector3 const &v);
    static vector3 const &GetWind();
    static void SetWind(vector3 const &v);
    void SetCollisionSurf(FXCollisionSurf const *);
    float GetModifierGravity() const;
    void SetModifierGravity(float);
    float GetModifierWind() const;
    void SetModifierWind(float);
    float GetDrag() const;
    void SetDrag(float);
    float GetBounceDrag() const;
    void SetBounceDrag(float);
    FXDynamicsNewton::CollisionResponse GetCollision() const;
    void SetCollision(FXDynamicsNewton::CollisionResponse);
private:
    virtual bool CheckCollision(vector3 &, vector3 &, vector3 const &, vector3 const &, vector3 const &, float) const;
public:
    virtual FXManager::Dynamics *Clone() const override;
    virtual void InitialPosition(vector3 const &) override;
    virtual void InitialVelocity(vector3 const &) override;
    virtual void InitialDrag(float const) override;
    virtual bool MoveObject(FXManager::Object *, float) override;
private:
    static vector3 s_gravity;
    static vector3 s_wind;
    static boost::scoped_ptr<FXCollisionSurf> s_defaultColSurf;
    float m_modGravity; // 0x4
    float m_modWind; // 0x8
    float m_drag; // 0xC
    float m_dragBounce; // 0x10
    vector3 m_position; // 0x14
    vector3 m_velocity; // 0x20
    FXDynamicsNewton::CollisionResponse m_collision; // 0x2C
    FXCollisionSurf const *m_pCollisionSurf; // 0x30
    bool FixCollision_Ignore(vector3 const &) const;
    bool FixCollision_Bounce(vector3 const &) const;
    bool FixCollision_Stick(vector3 const &) const;
    bool FixCollision_Die(vector3 const &) const;
    FXDynamicsNewton &operator=(FXDynamicsNewton &);
};
static_assert(sizeof(FXDynamicsNewton) == 52, "Invalid FXDynamicsNewton size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __FXDYNAMICS_H__
#endif
