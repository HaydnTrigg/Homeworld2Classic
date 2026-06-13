#if 0
#ifndef __SOBWITHMESHSTATIC_H__
#define __SOBWITHMESHSTATIC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SobWithMeshStatic :
    public SobRigidBodyStatic
{
public:
    typedef SobRigidBodyStatic SuperClass;
    virtual void postStaticLoad() override;
    _inline MadHeader const *getMADData() const;
    MadHeader *getMADData();
    _inline MadStateStatic const *getMADStatic() const;
    _inline MadStateStatic *getMADStatic();
    void setMADStatic(MadStateStatic *);
    _inline EngineTrailStatic const *getEngineTrailStatic() const;
    _inline EngineTrailStatic *getEngineTrailStatic();
    _inline NavLightStatic const *getNavLightStatic() const;
    NavLightStatic *getNavLightStatic();
    SobWithMeshStatic(SobWithMeshStatic const &); /* compiler_generated() */
protected:
    SobWithMeshStatic(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, SobType);
public:
    virtual ~SobWithMeshStatic() = 0;
    float m_thrusterAccelTime; // 0x1C0
    float m_mainEngineAccelTime; // 0x1C4
    float m_rotationAccelTime; // 0x1C8
    float m_thrusterBrakeTime; // 0x1CC
    float m_mainEngineBrakeTime; // 0x1D0
    float m_rotationBrakeTime; // 0x1D4
    float m_thrusterMaxSpeed; // 0x1D8
    float m_mainEngineMaxSpeed; // 0x1DC
    float m_rotationMaxSpeed; // 0x1E0
    float m_descendPitch; // 0x1E4
    float m_maxBankingAmount; // 0x1E8
    float m_thrusterUsage; // 0x1EC
    float m_cosAccelerationAngle; // 0x1F0
    float m_goalReachEpsilon; // 0x1F4
    float m_tumbleStaticX; // 0x1F8
    float m_tumbleStaticY; // 0x1FC
    float m_tumbleStaticZ; // 0x200
    float m_tumbleDynamicX; // 0x204
    float m_tumbleDynamicY; // 0x208
    float m_tumbleDynamicZ; // 0x20C
    float m_tumbleSpecialDynamicX; // 0x210
    float m_tumbleSpecialDynamicY; // 0x214
    float m_tumbleSpecialDynamicZ; // 0x218
    vector3 m_latchOffset; // 0x21C
    matrix3 m_latchRotation; // 0x228
    vector3 m_salvageOffset; // 0x24C
    matrix3 m_salvageRotation; // 0x258
    float m_pixelSize; // 0x27C
    vector4 m_pixelColour; // 0x280
    vector4 m_pixelColourDepleted; // 0x290
private:
    boost::shared_ptr<SobWithMeshStatic::Model> m_model; // 0x2A0
    boost::scoped_ptr<SobWithMeshStatic::LoadingEnv> m_loadingEnv; // 0x2A8
    class Model
    {
    public:
        Model();
        ~Model();
        MadHeader *m_madData; // 0x0
        MadStateStatic *m_madStatic; // 0x4
        NavLightStatic *m_pNavLightStatic; // 0x8
        EngineTrailStatic *m_pEngineTrailStatic; // 0xC
    };
    static_assert(sizeof(Model) == 16, "Invalid Model size");
    class LoadingEnv
    {
    public:
        SobWithMeshStatic::Model *m_model; // 0x0
        SobStatic::LoadingEnv *m_sobStaticLoadingEnv; // 0x4
    };
    static_assert(sizeof(LoadingEnv) == 8, "Invalid LoadingEnv size");
public:
    _inline SobWithMeshStatic::LoadingEnv *GetLoadingEnv();
protected:
    virtual bool LoadModelBegin(SobType, char const *) override;
    virtual void LoadModelExecute() override;
    virtual void LoadModelEnd(char const *) override;
    virtual bool LoadModelFromCache(char const *) override;
    virtual void OnHandlingDTRM(IFF *, IFFChunk *, void *, void *) override;
private:
    void loadOrientation(char const *, matrix3 &, vector3 &);
public:
    SobWithMeshStatic &operator=(SobWithMeshStatic const &); /* compiler_generated() */
};
static_assert(sizeof(SobWithMeshStatic) == 684, "Invalid SobWithMeshStatic size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern MadHeader const *_sub_4BF82E(SobWithMeshStatic const *const);
_inline MadHeader const *SobWithMeshStatic::getMADData() const // 0x4BF82E
{
    mangled_assert("?getMADData@SobWithMeshStatic@@QBEPBVMadHeader@@XZ");
    todo("implement");
    MadHeader const * __result = _sub_4BF82E(this);
    return __result;
}

_extern MadStateStatic *_sub_4CF4B7(SobWithMeshStatic *const);
_inline MadStateStatic *SobWithMeshStatic::getMADStatic() // 0x4CF4B7
{
    mangled_assert("?getMADStatic@SobWithMeshStatic@@QAEPAVMadStateStatic@@XZ");
    todo("implement");
    MadStateStatic * __result = _sub_4CF4B7(this);
    return __result;
}

_extern MadStateStatic const *_sub_606CCB(SobWithMeshStatic const *const);
_inline MadStateStatic const *SobWithMeshStatic::getMADStatic() const // 0x606CCB
{
    mangled_assert("?getMADStatic@SobWithMeshStatic@@QBEPBVMadStateStatic@@XZ");
    todo("implement");
    MadStateStatic const * __result = _sub_606CCB(this);
    return __result;
}

_extern EngineTrailStatic *_sub_441B97(SobWithMeshStatic *const);
_inline EngineTrailStatic *SobWithMeshStatic::getEngineTrailStatic() // 0x441B97
{
    mangled_assert("?getEngineTrailStatic@SobWithMeshStatic@@QAEPAVEngineTrailStatic@@XZ");
    todo("implement");
    EngineTrailStatic * __result = _sub_441B97(this);
    return __result;
}

_extern EngineTrailStatic const *_sub_441BA1(SobWithMeshStatic const *const);
_inline EngineTrailStatic const *SobWithMeshStatic::getEngineTrailStatic() const // 0x441BA1
{
    mangled_assert("?getEngineTrailStatic@SobWithMeshStatic@@QBEPBVEngineTrailStatic@@XZ");
    todo("implement");
    EngineTrailStatic const * __result = _sub_441BA1(this);
    return __result;
}

_extern NavLightStatic const *_sub_60A57F(SobWithMeshStatic const *const);
_inline NavLightStatic const *SobWithMeshStatic::getNavLightStatic() const // 0x60A57F
{
    mangled_assert("?getNavLightStatic@SobWithMeshStatic@@QBEPBVNavLightStatic@@XZ");
    todo("implement");
    NavLightStatic const * __result = _sub_60A57F(this);
    return __result;
}

_extern SobWithMeshStatic::LoadingEnv *_sub_49772B(SobWithMeshStatic *const);
_inline SobWithMeshStatic::LoadingEnv *SobWithMeshStatic::GetLoadingEnv() // 0x49772B
{
    mangled_assert("?GetLoadingEnv@SobWithMeshStatic@@QAEPAVLoadingEnv@1@XZ");
    todo("implement");
    SobWithMeshStatic::LoadingEnv * __result = _sub_49772B(this);
    return __result;
}

/* ---------- private code */

#endif // __SOBWITHMESHSTATIC_H__
#endif
