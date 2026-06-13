#if 0
#ifndef __FXCOLLISIONSURF_H__
#define __FXCOLLISIONSURF_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FXCollisionSurf
{
public:
    _inline FXCollisionSurf();
private:
    FXCollisionSurf(FXCollisionSurf const &);
public:
    virtual _inline ~FXCollisionSurf();
    virtual bool Inside(vector3 const &) const = 0;
    virtual bool FindCollision(vector3 const &, vector3 const &, vector3 &, vector3 &) const = 0;
private:
    FXCollisionSurf &operator=(FXCollisionSurf &);
};
static_assert(sizeof(FXCollisionSurf) == 4, "Invalid FXCollisionSurf size");

class FXCollisionSurfPlanar :
    public FXCollisionSurf
{
public:
    FXCollisionSurfPlanar();
private:
    FXCollisionSurfPlanar(FXCollisionSurfPlanar const &);
public:
    virtual ~FXCollisionSurfPlanar() override;
    void Initialize();
    virtual bool Inside(vector3 const &) const override;
    virtual bool FindCollision(vector3 const &, vector3 const &, vector3 &, vector3 &) const override;
private:
    FXCollisionSurfPlanar &operator=(FXCollisionSurfPlanar &);
};
static_assert(sizeof(FXCollisionSurfPlanar) == 4, "Invalid FXCollisionSurfPlanar size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern _sub_6F766C(FXCollisionSurf *const);
_inline FXCollisionSurf::FXCollisionSurf() // 0x6F766C
{
    mangled_assert("??0FXCollisionSurf@@QAE@XZ");
    todo("implement");
    _sub_6F766C(this);
}

_extern void _sub_6F767E(FXCollisionSurf *const);
_inline FXCollisionSurf::~FXCollisionSurf() // 0x6F767E
{
    mangled_assert("??1FXCollisionSurf@@UAE@XZ");
    todo("implement");
    _sub_6F767E(this);
}

/* ---------- private code */

#endif // __FXCOLLISIONSURF_H__
#endif
