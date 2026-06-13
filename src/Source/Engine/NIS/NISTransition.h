#if 0
#ifndef __NISTRANSITION_H__
#define __NISTRANSITION_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class NISTransition
{
public:
    enum TransitionInType
    {
        NIS_In_Blend = 0,
        NIS_In_Fade,
    };
    enum TransitionOutType
    {
        NIS_Out_PreviousFocus = 0,
        NIS_Out_Leave,
    };
    NISTransition(NISTransition const &); /* compiler_generated() */
    NISTransition(NIS &);
    ~NISTransition();
    void setCurrentCamera(MotionCamera *);
    void setCameraBlendIn(MotionCamera *, float);
    void setCameraFadeIn(MotionCamera *, float, float, float);
    void setEndFocus(vector3 const &);
    void setEndFocus(Selection const &);
    void setCameraLeave();
    void cameraTransitionInSetup();
    bool getCameraTransition(float &, matrix4 &);
    _inline bool isTransitioning() const;
    void executeOutTransition(MotionCamera *);
    bool update(float);
    bool renderTimeUpdate(float);
private:
    bool getCameraTransitionBlend(float &, matrix4 &);
    bool getCameraTransitionFade(float &, matrix4 &);
    void cameraBlendInSetup();
    void cameraFadeInSetup();
    bool cameraTransitionInRun(float);
    bool cameraBlendInRun(float);
    bool cameraFadeInRun(float);
    bool cameraBlendInEnd();
    void previousFocusTransition(MotionCamera *);
    void leaveCameraTransition(MotionCamera *);
    NIS &m_nis; // 0x0
    MotionCamera *m_pCurrentCamera; // 0x4
    NISTransition::TransitionInType m_transitionInType; // 0x8
    NISTransition::TransitionOutType m_transitionOutType; // 0xC
    float m_fadeOutTime; // 0x10
    float m_fadeHoldTime; // 0x14
    float m_fadeInTime; // 0x18
    bool m_bCameraTransitioning; // 0x1C
    float m_transitionRenderTime; // 0x20
    float m_transitionTime; // 0x24
    float m_transitionLength; // 0x28
    AnimCurve *m_pBlendInCurve; // 0x2C
    BlendTransition *m_pBlendTransition; // 0x30
    Selection m_previousFocusSelection; // 0x34
    vector3 m_previousFocusPosition; // 0x68
};
static_assert(sizeof(NISTransition) == 116, "Invalid NISTransition size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern bool _sub_54BE24(NISTransition const *const);
_inline bool NISTransition::isTransitioning() const // 0x54BE24
{
    mangled_assert("?isTransitioning@NISTransition@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_54BE24(this);
    return __result;
}

/* ---------- private code */

#endif // __NISTRANSITION_H__
#endif
