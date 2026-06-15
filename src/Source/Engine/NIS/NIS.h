#if 0
#ifndef __NIS_H__
#define __NIS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class NISEvent
{
public:
    NISEvent(NISEvent const &); /* compiler_generated() */
    NISEvent(float, __int32, char const *);
    ~NISEvent();
    bool dispatch(NISScript *) const;
    _inline float getTime() const;
private:
    float m_time; // 0x0
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_luaString; // 0x4
    __int32 m_sobID; // 0x1C
public:
    NISEvent &operator=(NISEvent const &); /* compiler_generated() */
};
static_assert(sizeof(NISEvent) == 32, "Invalid NISEvent size");

class NIS
{
public:
    enum
    {
        NDF_FocusAtEnd = (1 << 0),
        NDF_RemainAtEnd = (1 << 1),
        NDF_KeepOnMoving = (1 << 2),
    };
    NIS(NIS const &); /* compiler_generated() */
    NIS();
    ~NIS();
    _inline bool isPaused();
    bool isSkipping();
    bool load(char const *);
    bool start(vector3 const &, matrix3 const &, float);
    bool stop();
    bool pause(bool);
    bool skip();
    void addEvent(float, __int32, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    void addMotionPath(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, MotionPath *);
    void addMotionLeader(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, MotionLeader *);
    void addMotionFollower(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, MotionFollower *);
    void addMotionCamera(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, MotionCamera *);
    void addCurve3D(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, Curve3D *);
    void connectAnimCurves();
    void setFramesPerSecond(float);
    void setStartEnd(__int32, __int32);
    MotionCamera *setCurrentCamera(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    void setCameraBlendIn(char const *, float);
    void setCameraFadeIn(char const *, float, float, float);
    void setEndFocus(vector3 const &);
    void setEndFocus(Selection const &);
    void setCameraLeave();
    void setSMPTE(SMPTE *);
    void removeSMPTE();
    MotionLeader *getMotionLeader(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    MotionFollower *getMotionFollower(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    MotionCamera *getMotionCamera(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    MotionPath *getMotionPath(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    Curve3D *getCurve3D(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    float getFramesPerSecond();
    _inline float getTotalRenderTime() const;
    _inline float getTotalTime() const;
    void seek(float);
    void seekForward(float);
    void goToEnd();
    void update(float);
    void render2D();
    bool renderTimeUpdate(float);
    void setAtEnd();
    void executeOutTransition();
    MotionCamera *getCurrentMotionCamera();
    bool getCurrentCameraParameters(float &, matrix4 &);
    bool getWidescreenAtEnd();
    bool getStayFadedAtEnd();
    _inline NISScript *getScript();
    _inline matrix3 const &getRootCoordSys() const;
    _inline vector3 const &getRootPosition() const;
    void wideScreenOut(float);
    void nisOut(float);
    void attack(Sob *, char const *);
    void haltAttack(Sob *);
    void setInHyperspace(Sob *);
    void hyperspaceIn(Sob *);
    void hyperspaceOut(Sob *);
    void focus();
    void trailMove(MotionFollower *);
    void hideUniverse(bool);
    void pauseUniverse(bool);
    void playSpeech(char const *, float);
    void speechSetDirectory(char const *);
    void triggerEffect(MotionFollower *, float);
    void stayFadedAtEnd();
    typedef std::vector<NISEvent *,std::allocator<NISEvent *> > EventList;
    typedef stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,MotionPath *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,MotionPath *> > > MotionPathList;
    typedef stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,MotionLeader *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,MotionLeader *> > > MotionLeaderList;
    typedef stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,MotionFollower *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,MotionFollower *> > > MotionFollowerList;
    typedef stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,MotionCamera *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,MotionCamera *> > > MotionCameraList;
    typedef stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,AnimCurve *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,AnimCurve *> > > AnimCurveList;
    typedef stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,Curve3D *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,Curve3D *> > > Curve3DList;
private:
    void deleteEvents();
    void deleteMotion();
    bool loadScript(char const *);
    bool loadMotion(char const *);
    void doPreLoad();
    void doPostLoad();
    void runEvents(float);
    void runMotion(float);
    void renderTimeUpdateCameras(float, float);
    bool findSobId(char const *, unsigned __int32, __int32 &);
    bool parseAt(char const *, Parser &);
    bool parseWith(char const *, Parser &);
    bool parseEvent(char const *, Parser &);
    void visualizeMotionNode2D(MotionNode *, float, float, float, float);
    void handleRemainAtEnd(MotionFollower *);
    bool handleKeepMovingAtEnd(MotionFollower *);
    void skipInProgress();
    class DebugRender;
    unsigned __int32 m_version; // 0x0
    float m_length; // 0x4
    float m_framesPerSecond; // 0x8
    __int32 m_startFrame; // 0xC
    __int32 m_endFrame; // 0x10
    MotionCamera *m_pFirstCamera; // 0x14
    MotionCamera *m_pLastCamera; // 0x18
    bool m_bPaused; // 0x1C
    float m_oldFOV; // 0x20
    float m_totalTime; // 0x24
    float m_totalRenderTime; // 0x28
    float m_startInterpolTime; // 0x2C
    vector3 m_rootPosition; // 0x30
    matrix3 m_rootCoordSys; // 0x3C
    MotionCamera *m_pCurrentCamera; // 0x60
    bool m_bUniverseHidden; // 0x64
    SMPTE *m_pSMPTE; // 0x68
    float m_SMPTECounter; // 0x6C
    bool m_bSkipping; // 0x70
    unsigned __int32 m_currentEvent; // 0x74
    std::vector<NISEvent *,std::allocator<NISEvent *> > m_eventList; // 0x78
    stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,MotionPath *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,MotionPath *> > > m_motionPaths; // 0x84
    stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,MotionLeader *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,MotionLeader *> > > m_motionLeaders; // 0xA4
    stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,MotionFollower *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,MotionFollower *> > > m_motionFollowers; // 0xC4
    stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,MotionCamera *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,MotionCamera *> > > m_motionCameras; // 0xE4
    stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,Curve3D *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,Curve3D *> > > m_motionCurves; // 0x104
    float m_wideScreenOutStart; // 0x124
    float m_wideScreenOutEnd; // 0x128
    float m_wideScreenOutStartFOV; // 0x12C
    float m_wideScreenOutCurrentFOV; // 0x130
    bool m_bWidescreenAtEnd; // 0x134
    bool m_bStayFadedAtEnd; // 0x135
    NISScript *m_pNISScript; // 0x138
    NISTransition *m_pTransition; // 0x13C
    NISSpeech *m_pSpeech; // 0x140
public:
    NIS &operator=(NIS const &); /* compiler_generated() */
};
static_assert(sizeof(NIS) == 324, "Invalid NIS size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline float NISEvent::getTime() const // 0x54B989
{
    mangled_assert("?getTime@NISEvent@@QBEMXZ");
    todo("implement");
}

_inline NISScript *NIS::getScript() // 0x54B96F
{
    mangled_assert("?getScript@NIS@@QAEPAVNISScript@@XZ");
    todo("implement");
}

_inline bool NIS::isPaused() // 0x5529BA
{
    mangled_assert("?isPaused@NIS@@QAE_NXZ");
    todo("implement");
}

_inline matrix3 const &NIS::getRootCoordSys() const // 0x54D35C
{
    mangled_assert("?getRootCoordSys@NIS@@QBEABVmatrix3@@XZ");
    todo("implement");
}

_inline vector3 const &NIS::getRootPosition() const // 0x54D360
{
    mangled_assert("?getRootPosition@NIS@@QBEABVvector3@@XZ");
    todo("implement");
}

_inline float NIS::getTotalRenderTime() const // 0x5564A7
{
    mangled_assert("?getTotalRenderTime@NIS@@QBEMXZ");
    todo("implement");
}

_inline float NIS::getTotalTime() const // 0x54D364
{
    mangled_assert("?getTotalTime@NIS@@QBEMXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __NIS_H__
#endif
