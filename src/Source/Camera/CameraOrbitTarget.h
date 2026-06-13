#if 0
#ifndef __CAMERAORBITTARGET_H__
#define __CAMERAORBITTARGET_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class CameraOrbitTarget :
    public Camera
{
public:
    enum CameraMode
    {
        CM_Orbit = 0,
        CM_Look,
        CM_Target,
    };
    CameraOrbitTarget(CameraOrbitTarget const &); /* compiler_generated() */
    CameraOrbitTarget();
    virtual ~CameraOrbitTarget() override;
    virtual _inline void setCameraMode(CameraOrbitTarget::CameraMode);
    CameraOrbitTarget::CameraMode const getCameraMode() const;
    void setParam(OrbitParameters const &);
    OrbitParameters const &getParam() const;
    virtual void setTarget(vector3 const &);
    virtual void setMinDistance(float const);
    virtual void setMaxDistance(float const);
    virtual void setDistance(float const);
    virtual void setOrientation(vector3 const &);
    virtual void setOrbit(float const);
    virtual void setDeclination(float const);
    virtual void setRoll(float const);
    virtual vector3 const &getTarget() const;
    virtual float const getMinDistance() const;
    virtual float const getMaxDistance() const;
    virtual float const getDistance() const;
    virtual vector3 const &getOrientation() const;
    virtual float const getOrbit() const;
    virtual float const getDeclination() const;
    virtual float const getRoll() const;
    virtual void incDistance(float const);
    virtual void incOrbit(float const);
    virtual void incDeclination(float const);
    virtual void incRoll(float const);
    virtual void update() override;
protected:
    virtual vector3 updateGetTarget();
    enum
    {
        ORBIT = 0,
        DECLINATION,
        ROLL,
    };
    CameraOrbitTarget::CameraMode m_cameraMode; // 0x190
    OrbitParameters m_param; // 0x194
    float m_minDistance; // 0x1B4
    float m_maxDistance; // 0x1B8
public:
    CameraOrbitTarget &operator=(CameraOrbitTarget const &); /* compiler_generated() */
};
static_assert(sizeof(CameraOrbitTarget) == 444, "Invalid CameraOrbitTarget size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_4E0565(CameraOrbitTarget *const, CameraOrbitTarget::CameraMode);
_inline void CameraOrbitTarget::setCameraMode(CameraOrbitTarget::CameraMode) // 0x4E0565
{
    mangled_assert("?setCameraMode@CameraOrbitTarget@@UAEXW4CameraMode@1@@Z");
    todo("implement");
    _sub_4E0565(this, arg);
}

/* ---------- private code */

#endif // __CAMERAORBITTARGET_H__
#endif
