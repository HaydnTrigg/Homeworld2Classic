#if 0
#ifndef __MESHANIMATION_H__
#define __MESHANIMATION_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct JointToCurveMap
{
    HierarchyJoint *m_joint; // 0x0
    __int32 m_nCurves; // 0x4
    __int32 *m_curveIndices; // 0x8
};
static_assert(sizeof(JointToCurveMap) == 12, "Invalid JointToCurveMap size");

struct MadAnimation
{
    char *m_name; // 0x0
    float m_startTime; // 0x4
    float m_endTime; // 0x8
    float m_loopStart; // 0xC
    float m_loopEnd; // 0x10
    __int32 m_nJointMaps; // 0x14
    JointToCurveMap *m_jointMaps; // 0x18
};
static_assert(sizeof(MadAnimation) == 28, "Invalid MadAnimation size");

class MadHeader
{
public:
    MadHeader();
    ~MadHeader();
    MadAnimation *findAnimationByName(char const *) const;
    __int32 getNAnimations() const;
    static MadHeader *import(char const *fileName, HierarchyStatic *hierarchy);
    static __int32 totalSize(__int32 nAnimations, __int32 nCurves, __int32 nIndices, __int32 nJointMaps, __int32 *animationOffset, __int32 *curveOffset, __int32 *indicesOffset, __int32 *jointMapOffset);
private:
    float m_framesPerSecond; // 0x0
    float m_lenght; // 0x4
    __int32 m_nCurves; // 0x8
    AnimCurve *m_curves; // 0xC
    __int32 m_nAnimations; // 0x10
    MadAnimation *m_animations; // 0x14
    __int32 m_nJoints; // 0x18
    char *m_stringBlock; // 0x1C
    __int32 m_nJointMaps; // 0x20
    JointToCurveMap *m_jointMaps; // 0x24
    __int32 m_nCurveIndices; // 0x28
    __int32 *m_jointCurveIndices; // 0x2C
};
static_assert(sizeof(MadHeader) == 48, "Invalid MadHeader size");

class MeshAnimator
{
public:
    virtual _inline ~MeshAnimator();
    virtual bool update(float) = 0;
    virtual _inline void flagForDeletion();
protected:
    HierarchyDynamic *m_owner; // 0x4
public:
    MeshAnimator(MeshAnimator const &); /* compiler_generated() */
    _inline MeshAnimator(); /* compiler_generated() */
    MeshAnimator &operator=(MeshAnimator const &); /* compiler_generated() */
};
static_assert(sizeof(MeshAnimator) == 8, "Invalid MeshAnimator size");

class MeshAnimJoint
{
public:
    virtual _inline ~MeshAnimJoint();
    _inline MeshAnimator const *getParent();
    virtual matrix4 const &updateCoordSys(HierarchyJoint const *) = 0;
    virtual matrix4 const &GetDeterministicMatrix(HierarchyJoint const *) = 0;
protected:
    MeshAnimator *m_parent; // 0x4
public:
    MeshAnimJoint(MeshAnimJoint const &); /* compiler_generated() */
protected:
    _inline MeshAnimJoint();
public:
    MeshAnimJoint &operator=(MeshAnimJoint const &); /* compiler_generated() */
};
static_assert(sizeof(MeshAnimJoint) == 8, "Invalid MeshAnimJoint size");

class AnimJointHold :
    public MeshAnimJoint
{
public:
    AnimJointHold(AnimJointHold const &); /* compiler_generated() */
    _inline AnimJointHold(MeshAnimator *);
    void setMatrixToHold(matrix3 const &, vector3 const &);
    virtual matrix4 const &updateCoordSys(HierarchyJoint const *) override;
    virtual _inline matrix4 const &GetDeterministicMatrix(HierarchyJoint const *) override;
private:
    matrix4 m_matrixToHold; // 0x8
public:
    virtual _inline ~AnimJointHold() override; /* compiler_generated() */
    AnimJointHold &operator=(AnimJointHold const &); /* compiler_generated() */
};
static_assert(sizeof(AnimJointHold) == 72, "Invalid AnimJointHold size");

class AnimatorHold :
    public MeshAnimator
{
public:
    virtual _inline bool update(float) override;
    AnimatorHold(AnimatorHold const &); /* compiler_generated() */
    _inline AnimatorHold(); /* compiler_generated() */
    virtual _inline ~AnimatorHold() override; /* compiler_generated() */
    AnimatorHold &operator=(AnimatorHold const &); /* compiler_generated() */
};
static_assert(sizeof(AnimatorHold) == 8, "Invalid AnimatorHold size");

class AnimJointGun :
    public MeshAnimJoint
{
public:
    AnimJointGun(AnimJointGun const &); /* compiler_generated() */
    AnimJointGun();
    virtual ~AnimJointGun() override;
    virtual matrix4 const &updateCoordSys(HierarchyJoint const *) override;
    virtual matrix4 const &GetDeterministicMatrix(HierarchyJoint const *) override;
private:
    void updateQuaternions(HierarchyJoint const *);
    float recoil(float);
    Sob *m_owner; // 0x8
    Weapon *m_boundWeapon; // 0xC
    float m_recoilDistance; // 0x10
    unsigned char m_axes; // 0x14
    bool m_bInterpolate; // 0x15
    quat m_oldCoordSys; // 0x18
    quat m_newCoordSys; // 0x28
    matrix4 m_currentMatrix; // 0x38
    matrix4 m_detCoordSys; // 0x78
    float m_oldQuatTime; // 0xB8
public:
    AnimJointGun &operator=(AnimJointGun const &); /* compiler_generated() */
};
static_assert(sizeof(AnimJointGun) == 188, "Invalid AnimJointGun size");

class AnimatorGun :
    public MeshAnimator
{
public:
    AnimatorGun(AnimatorGun const &); /* compiler_generated() */
    AnimatorGun(GunBinding const *, Weapon *, HierarchyDynamic *);
    virtual ~AnimatorGun() override;
    virtual bool update(float) override;
    static void recoilTableCompute();
    static float gunRecoilValue(float fraction);
private:
    static float m_weaponRecoilTable[256];
    AnimJointGun m_joint; // 0x8
public:
    AnimatorGun &operator=(AnimatorGun const &); /* compiler_generated() */
};
static_assert(sizeof(AnimatorGun) == 196, "Invalid AnimatorGun size");

class AnimJointMad :
    public MeshAnimJoint
{
public:
    AnimJointMad(AnimJointMad const &); /* compiler_generated() */
    AnimJointMad();
    virtual ~AnimJointMad() override;
    virtual matrix4 const &updateCoordSys(HierarchyJoint const *) override;
    virtual matrix4 const &GetDeterministicMatrix(HierarchyJoint const *) override;
private:
    void Evaluate(HierarchyJoint const *, float const, matrix4 &) const;
    AnimCurve *m_curve[6]; // 0x8
    matrix4 m_coordSys; // 0x20
    bool m_bTranslate; // 0x60
    bool m_bRotate; // 0x61
    matrix4 m_detCoordSys; // 0x64
    float m_detLastEvalTime; // 0xA4
public:
    AnimJointMad &operator=(AnimJointMad const &); /* compiler_generated() */
};
static_assert(sizeof(AnimJointMad) == 168, "Invalid AnimJointMad size");

class AnimatorMad :
    public MeshAnimator
{
public:
    enum CallbackEvent
    {
        CE_End = 0,
        CE_Pause,
        CE_Aborted,
    };
    typedef void (*FinishedCB)(SobWithMesh *, AnimatorMad *, AnimatorMad::CallbackEvent);
    AnimatorMad(AnimatorMad const &); /* compiler_generated() */
    AnimatorMad(SaveGameData *);
    AnimatorMad(MadAnimation *, SobWithMesh *, void (*)(SobWithMesh *, AnimatorMad *, AnimatorMad::CallbackEvent));
    virtual ~AnimatorMad() override;
    virtual bool update(float) override;
    virtual _inline void flagForDeletion() override;
    void pause(bool);
    _inline float getCurrentTime();
    float setCurrentTime(float);
    void setPauseTime(float);
    _inline float getPauseTime();
    void setLoopCount(__int32);
    _inline __int32 getLoopCount();
    _inline void setUserData(unsigned __int32);
    _inline unsigned __int32 getUserData();
    _inline MadAnimation const *getAnimation();
    _inline void setFinishedCB(void (*)(SobWithMesh *, AnimatorMad *, AnimatorMad::CallbackEvent));
    bool save(SaveGameData *, SaveType);
    bool restore(SaveGameData *);
    _inline bool isDeterministic();
    void postRestore();
    char const *saveToken();
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
protected:
    static void saveAnimation(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void restoreAnimation(void *objectPtr, SaveGameData *saveGameData);
    void createJointsFromJointMap();
    SobWithMesh *m_owner; // 0x8
    MadAnimation *m_animation; // 0xC
    float m_time; // 0x10
    float m_pauseTime; // 0x14
    __int32 m_loopCount; // 0x18
    AnimJointMad *m_joints; // 0x1C
    void (*m_finishedCB)(SobWithMesh *, AnimatorMad *, AnimatorMad::CallbackEvent); // 0x20
    unsigned __int32 m_userData; // 0x24
    bool m_bPaused; // 0x28
    bool m_toBeDeleted; // 0x29
public:
    AnimatorMad &operator=(AnimatorMad const &); /* compiler_generated() */
};
static_assert(sizeof(AnimatorMad) == 44, "Invalid AnimatorMad size");

class AnimatorMad :
    public MeshAnimator
{
public:
    enum CallbackEvent
    {
        CE_End = 0,
        CE_Pause,
        CE_Aborted,
    };
    typedef void (*FinishedCB)(SobWithMesh *, AnimatorMad *, AnimatorMad::CallbackEvent);
    AnimatorMad(AnimatorMad const &); /* compiler_generated() */
    AnimatorMad(SaveGameData *);
    AnimatorMad(MadAnimation *, SobWithMesh *, void (*)(SobWithMesh *, AnimatorMad *, AnimatorMad::CallbackEvent));
    virtual ~AnimatorMad() override;
    virtual bool update(float) override;
    virtual _inline void flagForDeletion() override;
    void pause(bool);
    _inline float getCurrentTime();
    float setCurrentTime(float);
    void setPauseTime(float);
    _inline float getPauseTime();
    void setLoopCount(__int32);
    _inline __int32 getLoopCount();
    _inline void setUserData(unsigned __int32);
    _inline unsigned __int32 getUserData();
    _inline MadAnimation const *getAnimation();
    _inline void setFinishedCB(void (*)(SobWithMesh *, AnimatorMad *, AnimatorMad::CallbackEvent));
    bool save(SaveGameData *, SaveType);
    bool restore(SaveGameData *);
    _inline bool isDeterministic();
    void postRestore();
    char const *saveToken();
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
protected:
    static void saveAnimation(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void restoreAnimation(void *objectPtr, SaveGameData *saveGameData);
    void createJointsFromJointMap();
    SobWithMesh *m_owner; // 0x8
    MadAnimation *m_animation; // 0xC
    float m_time; // 0x10
    float m_pauseTime; // 0x14
    __int32 m_loopCount; // 0x18
    AnimJointMad *m_joints; // 0x1C
    void (*m_finishedCB)(SobWithMesh *, AnimatorMad *, AnimatorMad::CallbackEvent); // 0x20
    unsigned __int32 m_userData; // 0x24
    bool m_bPaused; // 0x28
    bool m_toBeDeleted; // 0x29
public:
    AnimatorMad &operator=(AnimatorMad const &); /* compiler_generated() */
};
static_assert(sizeof(AnimatorMad) == 44, "Invalid AnimatorMad size");

class AnimatorParam :
    public AnimatorMad
{
public:
    AnimatorParam(AnimatorParam const &); /* compiler_generated() */
    AnimatorParam(MadAnimation *, SobWithMesh *, void (*)(SobWithMesh *, AnimatorMad *, AnimatorMad::CallbackEvent));
    virtual ~AnimatorParam() override;
    virtual bool update(float) override;
    void setParameter(float);
    typedef float (*SetParamCB)(SobWithMesh *, AnimatorParam *);
    void setParamCallback(float (*)(SobWithMesh *, AnimatorParam *));
    void setTrackSpeed(float);
private:
    float m_param; // 0x2C
    float m_trackedParam; // 0x30
    float m_trackSpeed; // 0x34
    float (*m_callback)(SobWithMesh *, AnimatorParam *); // 0x38
    bool m_brandNew; // 0x3C
public:
    AnimatorParam &operator=(AnimatorParam const &); /* compiler_generated() */
};
static_assert(sizeof(AnimatorParam) == 64, "Invalid AnimatorParam size");

class AnimatorWeaponTrack :
    public MeshAnimator
{
public:
    enum CallbackEvent
    {
        CE_End = 0,
        CE_Aborted,
    };
    typedef void (*FinishedCB)(SobWithMesh *, AnimatorWeaponTrack *, AnimatorWeaponTrack::CallbackEvent);
    AnimatorWeaponTrack(AnimatorWeaponTrack const &); /* compiler_generated() */
    AnimatorWeaponTrack(HierarchyJoint *, SobWithMesh *, float, float, void (*)(SobWithMesh *, AnimatorWeaponTrack *, AnimatorWeaponTrack::CallbackEvent));
    virtual ~AnimatorWeaponTrack() override;
    virtual bool update(float) override;
    _inline void setUserData(unsigned __int32);
    _inline unsigned __int32 getUserData();
private:
    SobWithMesh *m_owner; // 0x8
    AnimJointGun *m_joint; // 0xC
    float m_targetAzimuth; // 0x10
    float m_targetDeclination; // 0x14
    unsigned __int32 m_userData; // 0x18
    void (*m_finishedCB)(SobWithMesh *, AnimatorWeaponTrack *, AnimatorWeaponTrack::CallbackEvent); // 0x1C
public:
    AnimatorWeaponTrack &operator=(AnimatorWeaponTrack const &); /* compiler_generated() */
};
static_assert(sizeof(AnimatorWeaponTrack) == 32, "Invalid AnimatorWeaponTrack size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline MeshAnimator::~MeshAnimator() // 0x5D1660
{
    mangled_assert("??1MeshAnimator@@UAE@XZ");
    todo("implement");
}

_inline void MeshAnimator::flagForDeletion() // 0x5D3601
{
    mangled_assert("?flagForDeletion@MeshAnimator@@UAEXXZ");
    todo("implement");
}

_inline MeshAnimJoint::~MeshAnimJoint() // 0x5D421F
{
    mangled_assert("??1MeshAnimJoint@@UAE@XZ");
    todo("implement");
}

_inline MeshAnimator const *MeshAnimJoint::getParent() // 0x5D3746
{
    mangled_assert("?getParent@MeshAnimJoint@@QAEPBVMeshAnimator@@XZ");
    todo("implement");
}

_inline MeshAnimJoint::MeshAnimJoint() // 0x5D4138
{
    mangled_assert("??0MeshAnimJoint@@IAE@XZ");
    todo("implement");
}

_inline AnimJointHold::AnimJointHold(MeshAnimator *) // 0x5D4080
{
    mangled_assert("??0AnimJointHold@@QAE@PAVMeshAnimator@@@Z");
    todo("implement");
}

_inline matrix4 const &AnimJointHold::GetDeterministicMatrix(HierarchyJoint const *) // 0x5D4278
{
    mangled_assert("?GetDeterministicMatrix@AnimJointHold@@UAEABVmatrix4@@PBVHierarchyJoint@@@Z");
    todo("implement");
}

_inline bool AnimatorHold::update(float) // 0x5D3CE9
{
    mangled_assert("?update@AnimatorHold@@UAE_NM@Z");
    todo("implement");
}

_inline void AnimatorMad::flagForDeletion() // 0x607DC5
{
    mangled_assert("?flagForDeletion@AnimatorMad@@UAEXXZ");
    todo("implement");
}

_inline float AnimatorMad::getCurrentTime() // 0x606C8D
{
    mangled_assert("?getCurrentTime@AnimatorMad@@QAEMXZ");
    todo("implement");
}

_inline float AnimatorMad::getPauseTime() // 0x606CD5
{
    mangled_assert("?getPauseTime@AnimatorMad@@QAEMXZ");
    todo("implement");
}

_inline __int32 AnimatorMad::getLoopCount() // 0x606C91
{
    mangled_assert("?getLoopCount@AnimatorMad@@QAEHXZ");
    todo("implement");
}

_inline void AnimatorMad::setUserData(unsigned __int32) // 0x607368
{
    mangled_assert("?setUserData@AnimatorMad@@QAEXI@Z");
    todo("implement");
}

_inline unsigned __int32 AnimatorMad::getUserData() // 0x606CE4
{
    mangled_assert("?getUserData@AnimatorMad@@QAEIXZ");
    todo("implement");
}

_inline MadAnimation const *AnimatorMad::getAnimation() // 0x4F0ADF
{
    mangled_assert("?getAnimation@AnimatorMad@@QAEPBUMadAnimation@@XZ");
    todo("implement");
}

_inline void AnimatorMad::setFinishedCB(void (*)(SobWithMesh *, AnimatorMad *, AnimatorMad::CallbackEvent)) // 0x6072C6
{
    mangled_assert("?setFinishedCB@AnimatorMad@@QAEXP6GXPAVSobWithMesh@@PAV1@W4CallbackEvent@1@@Z@Z");
    todo("implement");
}

_inline bool AnimatorMad::isDeterministic() // 0x608395
{
    mangled_assert("?isDeterministic@AnimatorMad@@QAE_NXZ");
    todo("implement");
}

_inline void AnimatorWeaponTrack::setUserData(unsigned __int32) // 0x607372
{
    mangled_assert("?setUserData@AnimatorWeaponTrack@@QAEXI@Z");
    todo("implement");
}

_inline unsigned __int32 AnimatorWeaponTrack::getUserData() // 0x606CE8
{
    mangled_assert("?getUserData@AnimatorWeaponTrack@@QAEIXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __MESHANIMATION_H__
#endif
