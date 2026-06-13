#if 0
#ifndef __SENSORSMANAGER_H__
#define __SENSORSMANAGER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SensorsManager
{
public:
    SensorsManager(SensorsManager const &); /* compiler_generated() */
    SensorsManager(MainUI *);
    ~SensorsManager();
    void initialize();
    void setInitialZoomOutDistance(float);
    void setMainUIImpl(MainUIImpl *);
    void switchTo();
    void switchFrom();
    void toggle();
    _inline void enableToggle(bool);
    _inline void userActivated(bool);
    void dragFocus(Selection const &);
    bool isEnabled();
    _inline bool isActive() const;
    _inline bool isUserActivated() const;
    void update(float);
    float zoomUpdate(float, float);
    bool isBlinkOn() const;
    float getBlinkAlpha() const;
    void drawSobs(Selection const &, float);
    void drawHUD(float);
    void drawOutlines(float);
    void cullAndFocus(Selection &);
    void cancelCommand();
    void enableCameraZoom(bool);
    bool isCameraZoomEnabled() const;
    void enableWorldplaneFlash(bool);
    class DotInfo
    {
    public:
        static vector4 friendlyPixelColour;
        static vector4 alliedPixelColour;
        static vector4 enemyPixelColour;
        static vector4 neutralPixelColour;
        static float friendlyPixelSize;
        static float alliedPixelSize;
        static float enemyPixelSize;
        static float missilePixelSize;
        static vector4 missilePixelColour;
        static vector4 miscPixelColour;
        static float miscPixelSize;
    };
    static_assert(sizeof(DotInfo) == 1, "Invalid DotInfo size");
    _inline SensorsManager::DotInfo const &getDotInfo();
private:
    void doZoom(float);
    void blinkUpdate(float);
    float scrollFactorGet(float, float);
    void toggleOn();
    void toggleOff();
    void setFarView();
    void setNearView();
    void closeForGood();
    void updateCamera();
    void updateOrbitStart();
    enum ZoomState
    {
        ZOOMED_IN = 0,
        ZOOMED_OUT,
        ZOOM_IN,
        ZOOM_OUT,
    };
    SensorsManager::ZoomState m_zoomState; // 0x0
    float m_zoomTimeElapsed; // 0x4
    float m_scrollFactor; // 0x8
    float m_startDistance; // 0xC
    float m_zoomOutDistance; // 0x10
    float m_mainScreenNearClip; // 0x14
    float m_mainScreenFarClip; // 0x18
    float m_oldMaxDistance; // 0x1C
    float m_oldMinDistance; // 0x20
    float m_zoomOutReleaseDistance; // 0x24
    float m_oldMaxMovementDistance; // 0x28
    bool m_enableToggle; // 0x2C
    bool m_userActivated; // 0x2D
    bool m_bIsFarView; // 0x2E
    bool m_isInSensorsManager; // 0x2F
    float m_blinkTime; // 0x30
    float m_blinkAlpha; // 0x34
    MainUIImpl *m_pMainUIImpl; // 0x38
    OrbitParameters m_orbitStart; // 0x3C
    OrbitParameters m_orbitEnd; // 0x5C
    SensorsOutlines *m_outlines; // 0x7C
    PatchID m_SMambient; // 0x80
    PatchID m_SMzoomIn; // 0x84
    PatchID m_SMzoomOut; // 0x88
    long m_SMambientHandle; // 0x8C
    bool m_bFlashEnabled; // 0x90
    float m_bFlashTime; // 0x94
    boost::scoped_ptr<SensorsManager::Data> m_pimpl; // 0x98
    static SensorsManager::DotInfo s_dotInfo;
    class Data;
public:
    SensorsManager &operator=(SensorsManager const &); /* compiler_generated() */
};
static_assert(sizeof(SensorsManager) == 156, "Invalid SensorsManager size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_723F53(SensorsManager *const, bool);
_inline void SensorsManager::enableToggle(bool) // 0x723F53
{
    mangled_assert("?enableToggle@SensorsManager@@QAEX_N@Z");
    todo("implement");
    _sub_723F53(this, arg);
}

_extern void _sub_454022(SensorsManager *const, bool);
_inline void SensorsManager::userActivated(bool) // 0x454022
{
    mangled_assert("?userActivated@SensorsManager@@QAEX_N@Z");
    todo("implement");
    _sub_454022(this, arg);
}

_extern bool _sub_7256F9(SensorsManager const *const);
_inline bool SensorsManager::isActive() const // 0x7256F9
{
    mangled_assert("?isActive@SensorsManager@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_7256F9(this);
    return __result;
}

_extern bool _sub_723F5D(SensorsManager const *const);
_inline bool SensorsManager::isUserActivated() const // 0x723F5D
{
    mangled_assert("?isUserActivated@SensorsManager@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_723F5D(this);
    return __result;
}

_extern SensorsManager::DotInfo const &_sub_487EED(SensorsManager *const);
_inline SensorsManager::DotInfo const &SensorsManager::getDotInfo() // 0x487EED
{
    mangled_assert("?getDotInfo@SensorsManager@@QAEABVDotInfo@1@XZ");
    todo("implement");
    SensorsManager::DotInfo const & __result = _sub_487EED(this);
    return __result;
}

/* ---------- private code */

#endif // __SENSORSMANAGER_H__
#endif
