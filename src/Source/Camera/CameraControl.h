#if 0
#ifndef __CAMERACONTROL_H__
#define __CAMERACONTROL_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class CameraControl
{
public:
    CameraControl();
    bool loadTuning(char const *);
    void mouseMoved(float const, float const);
    void zoom(bool);
    void setZoomFactor(float);
    void execute(OrbitParameters &, float const, bool const, bool const, float &);
    enum MotionType
    {
        MT_None = 0,
        MT_Rotate,
        MT_Zoom,
    };
    enum ZoomAction
    {
        ZA_In = 0,
        ZA_Out,
        ZA_None,
    };
    _inline CameraControl::MotionType getLastMotionType();
    CameraControl::ZoomAction getLastZoomAction();
    _inline float getLastZoomAmount();
    enum Tuning
    {
        T_ZoomScalar = 0,
        T_DragRotateScalar,
        T_MouseWheelZoomEvalThreshold,
        T_MouseWheelZoomTrackingTimeSteps,
        T_MouseWheelZoomTrack,
        T_NumTunables,
    };
private:
    void initTuning();
    void mouseWheelZoom(OrbitParameters &, float const);
    vector2 m_mouseDelta; // 0x0
    CameraControl::ZoomAction m_zoom; // 0x8
    float m_tuning[5]; // 0xC
    float m_zoomFactor; // 0x20
    float m_zoomAccumulate; // 0x24
    float m_zoomVelocity; // 0x28
    CameraControl::MotionType m_lastMotionType; // 0x2C
    float m_lastZoom; // 0x30
    float m_lastOrbit; // 0x34
    float m_lastDeclination; // 0x38
};
static_assert(sizeof(CameraControl) == 60, "Invalid CameraControl size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern CameraControl::MotionType _sub_4DF333(CameraControl *const);
_inline CameraControl::MotionType CameraControl::getLastMotionType() // 0x4DF333
{
    mangled_assert("?getLastMotionType@CameraControl@@QAE?AW4MotionType@1@XZ");
    todo("implement");
    CameraControl::MotionType __result = _sub_4DF333(this);
    return __result;
}

_extern float _sub_4DF345(CameraControl *const);
_inline float CameraControl::getLastZoomAmount() // 0x4DF345
{
    mangled_assert("?getLastZoomAmount@CameraControl@@QAEMXZ");
    todo("implement");
    float __result = _sub_4DF345(this);
    return __result;
}

/* ---------- private code */

#endif // __CAMERACONTROL_H__
#endif
