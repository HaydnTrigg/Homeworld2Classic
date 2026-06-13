#if 0
#ifndef __CAMERAHW_H__
#define __CAMERAHW_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class CameraHW :
    public CameraOrbitTarget
{
public:
    CameraHW(CameraHW const &); /* compiler_generated() */
    CameraHW();
    virtual ~CameraHW() override;
    _inline void cameraFloatEnable(bool);
    _inline bool cameraGetFloat() const;
    void updateCameraFloat(float const);
    void updateCameraShake(float const);
    virtual void update() override;
protected:
    virtual vector3 updateGetTarget() override;
    void adjustFloatFactor(float const);
    float m_totalFloatTime; // 0x1BC
    bool m_floatEnabled; // 0x1C0
    float m_floatFactor; // 0x1C4
    vector3 m_floatOffset; // 0x1C8
    matrix3 m_shake; // 0x1D4
    float m_shakeTimeLeft; // 0x1F8
public:
    CameraHW &operator=(CameraHW const &); /* compiler_generated() */
};
static_assert(sizeof(CameraHW) == 508, "Invalid CameraHW size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_4DD452(CameraHW *const, bool);
_inline void CameraHW::cameraFloatEnable(bool) // 0x4DD452
{
    mangled_assert("?cameraFloatEnable@CameraHW@@QAEX_N@Z");
    todo("implement");
    _sub_4DD452(this, arg);
}

_extern bool _sub_4DD45F(CameraHW const *const);
_inline bool CameraHW::cameraGetFloat() const // 0x4DD45F
{
    mangled_assert("?cameraGetFloat@CameraHW@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_4DD45F(this);
    return __result;
}

/* ---------- private code */

#endif // __CAMERAHW_H__
#endif
