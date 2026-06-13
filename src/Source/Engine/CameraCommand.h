#if 0
#ifndef __CAMERACOMMAND_H__
#define __CAMERACOMMAND_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class CameraCommand :
    public Task
{
public:
    CameraCommand(CameraCommand const &); /* compiler_generated() */
    CameraCommand();
    virtual ~CameraCommand() override;
    void startup();
    bool loadTuning(char const *);
    void setupCamera(float, float, float, float);
    void useInterpolation(bool);
    void manualOverride(bool);
    void allowControl(bool);
    void mustFocusOnSobs(bool);
    bool useShipCollision(bool);
    virtual __int32 taskFunction(float) override;
    void cameraMouseMoved(float, float);
    void cameraZoom(bool);
    void cameraPan(float, float, float);
    bool isFocussed(Selection const &) const;
    bool hasFocussed(Sob *) const;
    void focus(Sob *, bool, bool);
    void focus(Selection const &, bool, bool, bool);
    void focusGivenEyePosition(Selection const &, vector3 const &);
    void focusOnPoint(vector3 const &);
    void focusOnPointKeepingEyePosition(vector3 const &);
    void focusOnPointGivenEye(vector3 const &, vector3 const &, bool, bool);
    void focusToDistanceWithTime(float, float, float, Sob const &);
    void focusToDistanceWithSpeed(float, float, float, Sob const &, bool);
    bool focusOnFleet();
    void focusForward();
    void focusBack();
    void focusSave();
    void focusRestore();
    void focusReset();
    void adjustFocusKeepingEyePosition(Selection const &);
    void interpolate(vector3 const &, vector3 const &, vector3 const &, vector3 const &, float);
    void viewEntireMissionSphere();
    void setZoomFactor(float);
    void setFarFocus();
    _inline CameraHW &getCamera();
    OrbitParameters const &getFocalParam() const;
    OrbitParameters &getFocalParam();
    bool focusedOnShips();
    Selection *getFocusSelection();
    bool getFocusLocation(vector3 &);
    vector3 getCameraAxis();
    void setFocusDistance(vector3 const &, float, float, float const, SobID const &, bool);
    _inline void resetPanned();
    _inline float getPanned() const;
    _inline void resetRotated();
    _inline float getRotated() const;
    void resetCameraList();
    void addExtUpdate(CameraCommandExtUpdate *);
    void removeExtUpdate(CameraCommandExtUpdate *);
    float getLastZoomAmount();
protected:
    void purge();
private:
    void focusOnSelection(Selection const &, bool, bool);
    void cameraChase(float);
    void debugNewFocusMessage();
    void ensureValidFocus(float);
    void calculatePan(float const, vector3 &);
    void deceleratePanning(float);
    bool updateFocusDistance(float);
    Sob *getCollidingObject(vector3 const &) const;
    void collideWithShips();
    void clampToWorldBounds(vector3 &) const;
    CameraInterpolation *m_pCameraInterpolation; // 0x30
    CameraControl *m_pCameraControl; // 0x34
    CameraHW m_actualCamera; // 0x38
    bool m_bUseVelocityPredictionInChase; // 0x234
    bool m_bViewEntireMissionSphere; // 0x235
    bool m_bUseInterpolation; // 0x236
    bool m_bAllowControl; // 0x237
    bool m_bManualOverride; // 0x238
    bool m_bFocusOnSobs; // 0x239
    bool m_bCollideWithShips; // 0x23A
    FocalPoint *m_pFocal; // 0x23C
    CameraList *m_cameraList; // 0x240
    float m_validFocusTime; // 0x244
    vector3 m_panAccumulate; // 0x248
    float m_panTime; // 0x254
    unsigned __int32 m_panDirectionFlags; // 0x258
    Selection m_savedTargetSelection; // 0x25C
    vector3 m_savedTargetPosition; // 0x290
    vector3 m_savedEyePosition; // 0x29C
    bool m_savedInfo; // 0x2A8
    float m_pannedDistanceSqr; // 0x2AC
    float m_rotatedAngle; // 0x2B0
    boost::scoped_ptr<CameraCommand::FocusDistance> m_focusDistance; // 0x2B4
    bool m_bInterp; // 0x2B8
    vector3 m_interpFromTarget; // 0x2BC
    vector3 m_interpFromEye; // 0x2C8
    vector3 m_interpToTarget; // 0x2D4
    vector3 m_interpToEye; // 0x2E0
    float m_interpTotalTime; // 0x2EC
    float m_interpElapsedTime; // 0x2F0
    std::list<CameraCommandExtUpdate *,std::allocator<CameraCommandExtUpdate *> > m_extUpdates; // 0x2F4
    struct FocusDistance
    {
        SobID m_sobID; // 0x0
        vector3 m_targetPosition; // 0xC
        vector3 m_targetOffset; // 0x18
        unsigned __int32 m_timerID; // 0x24
        float m_focusTime; // 0x28
        float m_panDistance; // 0x2C
        float m_initDistance; // 0x30
        bool m_cameraFloat; // 0x34
        FocusDistance(CameraCommand::FocusDistance const &); /* compiler_generated() */
        _inline FocusDistance(); /* compiler_generated() */
        _inline ~FocusDistance(); /* compiler_generated() */
        CameraCommand::FocusDistance &operator=(CameraCommand::FocusDistance const &); /* compiler_generated() */
    };
    static_assert(sizeof(FocusDistance) == 56, "Invalid FocusDistance size");
    typedef std::list<CameraCommandExtUpdate *,std::allocator<CameraCommandExtUpdate *> > ExtUpdateCont;
public:
    CameraCommand &operator=(CameraCommand const &); /* compiler_generated() */
};
static_assert(sizeof(CameraCommand) == 764, "Invalid CameraCommand size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern CameraHW &_sub_450960(CameraCommand *const);
_inline CameraHW &CameraCommand::getCamera() // 0x450960
{
    mangled_assert("?getCamera@CameraCommand@@QAEAAVCameraHW@@XZ");
    todo("implement");
    CameraHW & __result = _sub_450960(this);
    return __result;
}

_extern void _sub_7256FD(CameraCommand *const);
_inline void CameraCommand::resetPanned() // 0x7256FD
{
    mangled_assert("?resetPanned@CameraCommand@@QAEXXZ");
    todo("implement");
    _sub_7256FD(this);
}

_extern float _sub_7256EB(CameraCommand const *const);
_inline float CameraCommand::getPanned() const // 0x7256EB
{
    mangled_assert("?getPanned@CameraCommand@@QBEMXZ");
    todo("implement");
    float __result = _sub_7256EB(this);
    return __result;
}

_extern void _sub_725705(CameraCommand *const);
_inline void CameraCommand::resetRotated() // 0x725705
{
    mangled_assert("?resetRotated@CameraCommand@@QAEXXZ");
    todo("implement");
    _sub_725705(this);
}

_extern float _sub_7256F2(CameraCommand const *const);
_inline float CameraCommand::getRotated() const // 0x7256F2
{
    mangled_assert("?getRotated@CameraCommand@@QBEMXZ");
    todo("implement");
    float __result = _sub_7256F2(this);
    return __result;
}

/* ---------- private code */

#endif // __CAMERACOMMAND_H__
#endif
