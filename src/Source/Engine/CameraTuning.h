#if 0
#ifndef __CAMERATUNING_H__
#define __CAMERATUNING_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class CameraTuning
{
public:
    enum PanModel
    {
        PAN_VerticalGoesForward = 0,
        PAN_VerticalGoesForwardLocked,
        PAN_VerticalGoesUp,
    };
    enum PanModifierAction
    {
        PMA_Unused = 0,
        PMA_Required,
        PMA_UpWorld,
        PMA_UpCamera,
    };
    enum PanState
    {
        PS_Up = 0,
        PS_Down,
        PS_Left,
        PS_Right,
        PS_ModUp,
        PS_ModDown,
        PS_Max,
    };
    CameraTuning();
    static bool startup();
    static bool shutdown();
    static CameraTuning *i();
    bool loadTuning(char const *);
    void ResetPanStates();
    bool IsStateDown(CameraTuning::PanState) const;
    float defaultMaxDistance; // 0x0
    float optionsDistanceMin; // 0x4
    float optionsDistanceMax; // 0x8
    float maxDeclination; // 0xC
    float minDeclination; // 0x10
    float zoomFactor; // 0x14
    float zoomDecal; // 0x18
    float CAM_CUBIC_EVAL_TWEAK; // 0x1C
    float CAM_CUBIC_EVAL_ANGLE_TWEAK; // 0x20
    float floatEnableTime; // 0x24
    float floatShape; // 0x28
    float floatFrequency; // 0x2C
    vector2 floatAmplitude; // 0x30
    float floatDistanceFactor; // 0x38
    float panVerticalZone; // 0x3C
    float panHorizontalZone; // 0x40
    CameraTuning::PanModel panModel; // 0x44
    __int32 panModifierKey; // 0x48
    bool m_panModifiers[6]; // 0x4C
    CameraTuning::PanModifierAction panModifierAction; // 0x54
    float panAccelTime; // 0x58
    float panAccelCurve; // 0x5C
    float panUnfocussedDist; // 0x60
    float panDecelTime; // 0x64
private:
    float RENDER_VIEWABLE_DISTANCE_SQR; // 0x68
    float RENDER_VIEWABLE_DISTANCE_SM_SQR; // 0x6C
public:
    float RENDER_VIEWABLE_DISTANCE_MIN_SQR; // 0x70
    float RENDER_VIEWABLE_DISTANCE_MAX_SQR; // 0x74
    float panSpeedFactor; // 0x78
    float minPanSpeed; // 0x7C
    float maxPanSpeed; // 0x80
    float panEvalThreshold; // 0x84
    float panTrack; // 0x88
    float panTrackingTimeSteps; // 0x8C
    float panUnderFactor; // 0x90
    float nearClip; // 0x94
    float farClip; // 0x98
    float verticalFOV; // 0x9C
    bool retainDistanceFocusCloser; // 0xA0
    bool retainDistanceFocusFarther; // 0xA1
    float farClipCullFactor; // 0xA4
    float const getNormalViewableDistanceSQR() const;
    float const getSMViewableDistanceSQR() const;
    _inline float const getCurrentViewableDistanceSQR() const;
    void setNormalViewableDistanceSQR(float);
private:
    void initialize();
    static CameraTuning *s_instance;
};
static_assert(sizeof(CameraTuning) == 168, "Invalid CameraTuning size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern float const _sub_652B1F(CameraTuning const *const);
_inline float const CameraTuning::getCurrentViewableDistanceSQR() const // 0x652B1F
{
    mangled_assert("?getCurrentViewableDistanceSQR@CameraTuning@@QBE?BMXZ");
    todo("implement");
    float const __result = _sub_652B1F(this);
    return __result;
}

/* ---------- private code */

#endif // __CAMERATUNING_H__
#endif
