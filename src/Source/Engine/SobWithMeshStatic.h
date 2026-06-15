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

_inline MadHeader const *SobWithMeshStatic::getMADData() const // 0x4BF82E
{
    mangled_assert("?getMADData@SobWithMeshStatic@@QBEPBVMadHeader@@XZ");
    todo("implement");
}

_inline MadStateStatic *SobWithMeshStatic::getMADStatic() // 0x4CF4B7
{
    mangled_assert("?getMADStatic@SobWithMeshStatic@@QAEPAVMadStateStatic@@XZ");
    todo("implement");
}

_inline MadStateStatic const *SobWithMeshStatic::getMADStatic() const // 0x606CCB
{
    mangled_assert("?getMADStatic@SobWithMeshStatic@@QBEPBVMadStateStatic@@XZ");
    todo("implement");
}

_inline EngineTrailStatic *SobWithMeshStatic::getEngineTrailStatic() // 0x441B97
{
    mangled_assert("?getEngineTrailStatic@SobWithMeshStatic@@QAEPAVEngineTrailStatic@@XZ");
    todo("implement");
}

_inline EngineTrailStatic const *SobWithMeshStatic::getEngineTrailStatic() const // 0x441BA1
{
    mangled_assert("?getEngineTrailStatic@SobWithMeshStatic@@QBEPBVEngineTrailStatic@@XZ");
    todo("implement");
}

_inline NavLightStatic const *SobWithMeshStatic::getNavLightStatic() const // 0x60A57F
{
    mangled_assert("?getNavLightStatic@SobWithMeshStatic@@QBEPBVNavLightStatic@@XZ");
    todo("implement");
}

_inline SobWithMeshStatic::LoadingEnv *SobWithMeshStatic::GetLoadingEnv() // 0x49772B
{
    mangled_assert("?GetLoadingEnv@SobWithMeshStatic@@QAEPAVLoadingEnv@1@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __SOBWITHMESHSTATIC_H__
#endif
