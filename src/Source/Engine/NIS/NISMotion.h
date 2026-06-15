#if 0
#ifndef __NISMOTION_H__
#define __NISMOTION_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class MotionPath
{
public:
    MotionPath(MotionPath const &); /* compiler_generated() */
    MotionPath();
    ~MotionPath();
    void setCurve3D(Curve3D *);
    bool setMayaCurve(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, AnimCurve *);
    void setTimes(float, float);
    void evaluate(float, vector3 &, matrix3 &);
    _inline void setFrontAxis(unsigned __int32);
    _inline void setUpAxis(unsigned __int32);
    _inline void setParametricLength(bool);
    void addSegment(float);
    _inline void setFollow(bool);
    _inline bool getFollow() const;
    _inline Curve3D const *getCurve() const;
    _inline AnimCurve const *getKeyUValue() const;
    _inline AnimCurve const *getKeyFrontTwist() const;
private:
    __int32 findSegment(float);
    void evaluateParametric(float, vector3 &, vector3 &);
    void evaluateArcLength(float, vector3 &, vector3 &);
    Curve3D *m_pCurve; // 0x0
    AnimCurve *m_pKeyUValue; // 0x4
    AnimCurve *m_pKeyFrontTwist; // 0x8
    bool m_bFollow; // 0xC
    bool m_bParametricLength; // 0xD
    std::vector<float,std::allocator<float> > m_segmentLengths; // 0x10
    float m_totalLength; // 0x1C
    unsigned __int32 m_frontAxis; // 0x20
    unsigned __int32 m_upAxis; // 0x24
    float m_startTime; // 0x28
    float m_endTime; // 0x2C
    float m_cachedTime; // 0x30
    vector3 m_cachedPosition; // 0x34
    matrix3 m_cachedOrientation; // 0x40
public:
    MotionPath &operator=(MotionPath const &); /* compiler_generated() */
};
static_assert(sizeof(MotionPath) == 100, "Invalid MotionPath size");

class MotionNode
{
public:
    enum RotateOrder
    {
        RO_Invalid = 0,
        RO_XYZ,
        RO_YZX,
        RO_ZXY,
        RO_XZY,
        RO_YXZ,
        RO_ZYX,
    };
    MotionNode(MotionNode const &); /* compiler_generated() */
    MotionNode();
    virtual ~MotionNode();
    void reverseAxis(__int32);
    void setNodeName(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &getNodeName();
    _inline void setRotateOrder(MotionNode::RotateOrder);
    void setNodeTranslation(vector3 const &);
    void setNodeRotation(vector3 const &);
    vector3 const &getNodeTranslation();
    vector3 const &getNodeRotation();
    matrix3 const &getNodeCoordSys();
    AnimCurve *getNodeTranslationCurve(unsigned __int32);
    AnimCurve *getNodeRotationCurve(unsigned __int32);
    Sob const *getSob() const;
    Sob *getSob();
    vector3 const &getSobPosition();
    matrix3 const &getSobCoordSys();
    vector3 const &getSobInterpolPosition();
    matrix3 const &getSobInterpolCoordSys();
    virtual void nodeUpdate(float);
    virtual _inline void update(float);
    virtual void setNodeTranslationCurve(unsigned __int32, AnimCurve *);
    virtual void setNodeRotationCurve(unsigned __int32, AnimCurve *);
    virtual bool setNodeMayaCurve(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, AnimCurve *);
    virtual void setLastTranslationKeyframe(vector3 const &);
    virtual void getLastTranslationKeyframe(vector3 &);
    virtual void getLastOrientationKeyframe(matrix3 &);
protected:
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_nodeName; // 0x4
    vector3 m_nodeTranslation; // 0x1C
    vector3 m_nodeRotation; // 0x28
    matrix3 m_nodeCoordSys; // 0x34
    bool m_reverseAxis[3]; // 0x58
    AnimVector3 *m_pKeyTranslation; // 0x5C
    AnimVector3 *m_pKeyRotation; // 0x60
    SobID m_sobID; // 0x64
    MotionNode::RotateOrder m_rotateOrder; // 0x70
public:
    MotionNode &operator=(MotionNode const &); /* compiler_generated() */
};
static_assert(sizeof(MotionNode) == 116, "Invalid MotionNode size");

class MotionLeader :
    public MotionNode
{
public:
    MotionLeader(MotionLeader const &); /* compiler_generated() */
    MotionLeader();
    virtual ~MotionLeader() override;
    _inline MotionPath const *getMotionPath() const;
    void attachToMotionPath(MotionPath *);
    void update(float, vector3 const &, matrix3 const &);
    void renderTimeUpdate(float);
    virtual void setLastTranslationKeyframe(vector3 const &) override;
    virtual void getLastTranslationKeyframe(vector3 &) override;
    virtual void getLastOrientationKeyframe(matrix3 &) override;
private:
    MotionPath *m_pMotionCurve; // 0x74
public:
    MotionLeader &operator=(MotionLeader const &); /* compiler_generated() */
};
static_assert(sizeof(MotionLeader) == 120, "Invalid MotionLeader size");

class MotionFollower :
    public MotionNode
{
public:
    MotionFollower(MotionFollower const &); /* compiler_generated() */
    MotionFollower();
    virtual ~MotionFollower() override;
    void precache();
    void start();
    void update(float, vector3 const &, matrix3 const &);
    void renderTimeUpdate(float);
    void stop();
    void setLeader(MotionLeader *);
    void setType(SobType, char const *, unsigned __int32);
    virtual void setLastTranslationKeyframe(vector3 const &) override;
    virtual void getLastTranslationKeyframe(vector3 &) override;
    _inline MotionLeader const *getLeader() const;
    _inline MotionLeader *getLeader();
    char const *getName();
    unsigned __int32 getInstance();
    _inline char const *getSobName() const;
    void setDynamicFlag(unsigned __int32, bool);
    bool isDynamicFlagSet(unsigned __int32);
    void setSobGroupName(char const *);
    char const *getSobGroupName();
    void setKeepMovingTarget(char const *);
    char const *getKeepMovingTarget();
    vector3 const &getVelocity() const;
    void addEffect(FXManager::Handle const &);
    void stopEffects();
    void destroyEffects();
private:
    bool precacheObject(SobType, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    Sob *createObject(SobType, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    void deleteObject(Sob *);
    unsigned __int32 m_initialFlags; // 0x74
    SobType m_sobType; // 0x78
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_sobName; // 0x7C
    unsigned __int32 m_instance; // 0x94
    MotionLeader *m_pLeader; // 0x98
    unsigned __int32 m_dynamicFlags; // 0x9C
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_sobGroupName; // 0xA0
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_keepMovingTarget; // 0xB8
    vector3 m_velocity; // 0xD0
    FXManager::Handle m_fxHandle[4]; // 0xDC
    enum
    {
        MAX_EFFECTS = 4, // 0x0004
    };
public:
    MotionFollower &operator=(MotionFollower const &); /* compiler_generated() */
};
static_assert(sizeof(MotionFollower) == 252, "Invalid MotionFollower size");

class MotionCamera
{
public:
    MotionCamera(MotionCamera const &); /* compiler_generated() */
    MotionCamera();
    ~MotionCamera();
    void setTarget(MotionFollower *);
    void setEye(MotionFollower *);
    void setFocalLength(float, float, float);
    void setFocalLengthCurve(AnimCurve *);
    MotionFollower *getTarget();
    MotionFollower *getEye();
    float getFocalLength();
    float getVerticalFOV();
    void renderTimeUpdate(float, float);
    void getEyeInterpolPosition(vector3 &);
    void getEyeInterpolCoordSys(matrix3 &);
    bool getTargetInterpolPosition(vector3 &);
    void getEyePosition(vector3 &);
    void getEyeCoordSys(matrix3 &);
private:
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x0
    MotionFollower *m_pEye; // 0x18
    MotionFollower *m_pTarget; // 0x1C
    float m_focalLength; // 0x20
    float m_focalWidth; // 0x24
    float m_focalHeight; // 0x28
    AnimCurve *m_pFocalLengthCurve; // 0x2C
public:
    MotionCamera &operator=(MotionCamera const &); /* compiler_generated() */
};
static_assert(sizeof(MotionCamera) == 48, "Invalid MotionCamera size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline void MotionPath::setFrontAxis(unsigned __int32) // 0x550F22
{
    mangled_assert("?setFrontAxis@MotionPath@@QAEXI@Z");
    todo("implement");
}

_inline void MotionPath::setUpAxis(unsigned __int32) // 0x550F40
{
    mangled_assert("?setUpAxis@MotionPath@@QAEXI@Z");
    todo("implement");
}

_inline void MotionPath::setParametricLength(bool) // 0x550F2C
{
    mangled_assert("?setParametricLength@MotionPath@@QAEX_N@Z");
    todo("implement");
}

_inline void MotionPath::setFollow(bool) // 0x550F18
{
    mangled_assert("?setFollow@MotionPath@@QAEX_N@Z");
    todo("implement");
}

_inline bool MotionPath::getFollow() const // 0x55431F
{
    mangled_assert("?getFollow@MotionPath@@QBE_NXZ");
    todo("implement");
}

_inline Curve3D const *MotionPath::getCurve() const // 0x54D336
{
    mangled_assert("?getCurve@MotionPath@@QBEPBVCurve3D@@XZ");
    todo("implement");
}

_inline AnimCurve const *MotionPath::getKeyUValue() const // 0x54D33D
{
    mangled_assert("?getKeyUValue@MotionPath@@QBEPBVAnimCurve@@XZ");
    todo("implement");
}

_inline AnimCurve const *MotionPath::getKeyFrontTwist() const // 0x54D339
{
    mangled_assert("?getKeyFrontTwist@MotionPath@@QBEPBVAnimCurve@@XZ");
    todo("implement");
}

_inline void MotionNode::update(float) // 0x5551E8
{
    mangled_assert("?update@MotionNode@@UAEXM@Z");
    todo("implement");
}

_inline void MotionNode::setRotateOrder(MotionNode::RotateOrder) // 0x550F36
{
    mangled_assert("?setRotateOrder@MotionNode@@QAEXW4RotateOrder@1@@Z");
    todo("implement");
}

_inline MotionPath const *MotionLeader::getMotionPath() const // 0x54D358
{
    mangled_assert("?getMotionPath@MotionLeader@@QBEPBVMotionPath@@XZ");
    todo("implement");
}

_inline MotionLeader *MotionFollower::getLeader() // 0x54B8A8
{
    mangled_assert("?getLeader@MotionFollower@@QAEPAVMotionLeader@@XZ");
    todo("implement");
}

_inline MotionLeader const *MotionFollower::getLeader() const // 0x54D341
{
    mangled_assert("?getLeader@MotionFollower@@QBEPBVMotionLeader@@XZ");
    todo("implement");
}

_inline char const *MotionFollower::getSobName() const // 0x54B976
{
    mangled_assert("?getSobName@MotionFollower@@QBEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __NISMOTION_H__
#endif
