#if 0
#ifndef __CAMERAINTERPOLATION_H__
#define __CAMERAINTERPOLATION_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class CameraInterpolation
{
public:
    CameraInterpolation();
    bool loadTuning(char const *);
    void interpolate(CameraOrbitTarget &, OrbitParameters const &, float);
    enum Tuning
    {
        T_TrackingAngleSpeed = 0,
        T_TrackingPositionSpeed,
        T_TrackingPositionThreshold,
        T_TrackingPositionBase,
        T_TrackingTimeSteps,
        T_NumTunables,
    };
private:
    void initTuning();
    float m_angSpeed; // 0x0
    float m_decSpeed; // 0x4
    vector3 m_targetSpeed; // 0x8
    vector3 m_eyeSpeed; // 0x14
    float m_tuning[5]; // 0x20
};
static_assert(sizeof(CameraInterpolation) == 52, "Invalid CameraInterpolation size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __CAMERAINTERPOLATION_H__
#endif
