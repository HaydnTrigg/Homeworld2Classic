#if 0
#ifndef __SOBSTATIC_H__
#define __SOBSTATIC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SobStatic
{
public:
    SobStatic(SobStatic const &); /* compiler_generated() */
protected:
    SobStatic(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, SobType);
public:
    virtual ~SobStatic();
    static SobStatic *Create(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name, SobType type);
    static char const *GetMeshExt();
    static float GetReallyBigRadius();
    virtual void postStaticLoad();
    _inline char const *GetName() const;
    _inline SobType GetType() const;
    _inline unsigned __int32 GetId() const;
    unsigned __int32 timeStamp; // 0x4
    float m_sobDieTime; // 0x8
    float m_deadSobFadeTime; // 0xC
    float maxHealth; // 0x10
    float m_HealthRegenerateTime; // 0x14
    float m_minHealthRegenerateTime; // 0x18
    float m_relativeMoveFactor; // 0x1C
    float nlips; // 0x20
    float nlipsRange; // 0x24
    float nlipsFar; // 0x28
    float nlipsFarRange; // 0x2C
    bool m_bAlwaysInRenderList; // 0x30
    float m_minLOD; // 0x34
    float m_detailLevel; // 0x38
    TacticalIcon *m_TOIcon; // 0x3C
    float m_TOScale; // 0x40
    float m_TODistanceFade0; // 0x44
    float m_TODistanceDisappear0; // 0x48
    float m_TODistanceFade1; // 0x4C
    float m_TODistanceDisappear1; // 0x50
    float m_TODistanceFade2; // 0x54
    float m_TODistanceDisappear2; // 0x58
    float m_TOGroupScale; // 0x5C
    float m_TOGroupMergeSize; // 0x60
    float m_moMinFadeSize; // 0x64
    float m_moMaxFadeSize; // 0x68
    float m_meshRenderLimit; // 0x6C
    float m_dotRenderLimit; // 0x70
    bool m_visibleInSecondary; // 0x74
    float minimumZoomFactor; // 0x78
    __int32 m_healthBarStyle; // 0x7C
    float m_selectionPriority; // 0x80
    float goblinsStartFade; // 0x84
    float goblinsOff; // 0x88
    std::vector<float,std::allocator<float> > m_meshUpLOD; // 0x8C
    std::vector<float,std::allocator<float> > m_meshDownLOD; // 0x98
    float m_selectionLimit; // 0xA4
    float m_preciseSelectionLimit; // 0xA8
    float m_preciseATILimit; // 0xAC
    float m_selectionSizeMin; // 0xB0
    float m_selectionSizeMax; // 0xB4
    __int32 m_attackFamilyIndex; // 0xB8
    __int32 m_buildFamilyIndex; // 0xBC
    __int32 m_dockFamilyIndex; // 0xC0
    __int32 m_avoidanceFamilyIndex; // 0xC4
    __int32 m_collisionFamilyIndex; // 0xC8
    __int32 m_displayFamilyIndex; // 0xCC
    __int32 m_autoFormationFamilyIndex; // 0xD0
    __int32 m_armourFamilyIndex; // 0xD4
    __int32 m_ucFamilyIndex; // 0xD8
    __int32 m_ucShipTypeIndex; // 0xDC
    std::map<unsigned int,SobStatic::PatchMarker,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,SobStatic::PatchMarker> > > m_patchMap; // 0xE0
    SobStatic::SMRepresentation m_SMRepresentation; // 0xE8
    __int32 m_battleScarMaxTriBase; // 0xEC
    __int32 m_battleScarMaxTriInc; // 0xF0
    float m_SMHighlightDistMin; // 0xF4
    float m_SMHighlightDistMax; // 0xF8
private:
    SobType m_type; // 0xFC
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_sobName; // 0x100
protected:
    unsigned __int32 m_id; // 0x118
private:
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_displayedName; // 0x11C
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_sobDescription; // 0x134
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_blobName; // 0x14C
    float m_blobNamePriority; // 0x164
    bool m_canHaveFog; // 0x168
    bool m_canHaveShadows; // 0x169
    bool m_canBlink; // 0x16A
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_alternativeHyperspaceEffectV; // 0x16C
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_alternativeHyperspaceEffectA; // 0x184
    float m_alternativeHyperspaceEffectTime; // 0x19C
    Collision::Sphere m_boundingSphere; // 0x1A0
    boost::shared_ptr<SobStatic::Model> m_model; // 0x1B0
    boost::scoped_ptr<SobStatic::LoadingEnv> m_loadingEnv; // 0x1B8
public:
    float computeGoblinAlpha(float const) const;
    unsigned __int32 computeLOD(float const, unsigned __int32 const) const;
    unsigned __int32 getLowestLOD() const;
    _inline bool canHaveFog() const;
    _inline bool setCanHaveFog(bool const);
    _inline bool canHaveShadows() const;
    _inline bool setCanHaveShadows(bool const);
    _inline bool canBlink() const;
    _inline bool setCanBlink(bool const);
    _inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &getAlternativeHyperspaceEffectV() const;
    _inline void setAlternativeHyperspaceEffectV(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    _inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &getAlternativeHyperspaceEffectA() const;
    _inline void setAlternativeHyperspaceEffectA(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    _inline float getAlternativeHyperspaceEffectTime() const;
    _inline void setAlternativeHyperspaceEffectTime(float const);
    _inline bool hasModel() const;
    _inline Mesh const *getMesh() const;
    Mesh *getMesh();
    _inline HierarchyStatic const *getHierarchy() const;
    _inline HierarchyStatic *getHierarchy();
    _inline Collision::OBB const &getLocalOBB() const;
    _inline RenderModel const *getRenderModel() const;
    _inline Collision::Sphere const &getBoundingSphere() const;
    _inline Collision::Sphere &getBoundingSphere();
    _inline wchar_t const *GetDisplayedName() const;
    _inline void SetDisplayedName(wchar_t const *);
    _inline wchar_t const *GetDescription() const;
    _inline void SetDescription(wchar_t const *);
    _inline wchar_t const *GetBlobName() const;
    _inline void SetBlobName(wchar_t const *);
    _inline float GetBlobNamePriority() const;
    _inline void SetBlobNamePriority(float);
    __int32 GetDockFamilyIndex() const;
    __int32 GetBuildFamilyIndex() const;
    __int32 GetAttackFamilyIndex() const;
    __int32 GetCollisionFamilyIndex() const;
    __int32 GetAvoidanceFamilyIndex() const;
    __int32 GetDisplayFamilyIndex() const;
    __int32 GetAutoFormationFamilyIndex() const;
    __int32 GetArmourFamilyIndex() const;
    __int32 GetUCFamilyIndex() const;
    __int32 GetUCShipTypeIndex() const;
    Family const *GetAttackFamily() const;
    Family const *GetAvoidanceFamily() const;
    Family const *GetCollisionFamily() const;
    Family const *GetBuildFamily() const;
    Family const *GetDisplayFamily() const;
    Family const *GetDockFamily() const;
    Family const *GetAutoFormationFamily() const;
    Family const *GetArmourFamily() const;
    Family const *GetUCFamily() const;
    Family const *GetUCShipType() const;
    enum PatchList
    {
        EnginePatch1 = 0, // 0x0000
        AmbientPatch1 = 1, // 0x0001
        EnginePatch2 = 2, // 0x0002
        AmbientPatch2 = 3, // 0x0003
        EnginePatch3 = 4, // 0x0004
        AmbientPatch3 = 5, // 0x0005
        NUMBER_OF_PATCHES = 6, // 0x0006
        SKIP_TO_NEXT = 2, // 0x0002
    };
    class PatchMarker
    {
    public:
        PatchID m_pID; // 0x0
        __int32 m_markerID; // 0x4
        char m_markername[260]; // 0x8
        _inline PatchMarker(SobStatic::PatchMarker const &); /* compiler_generated() */
        _inline PatchMarker(); /* compiler_generated() */
        _inline ~PatchMarker(); /* compiler_generated() */
        SobStatic::PatchMarker &operator=(SobStatic::PatchMarker const &); /* compiler_generated() */
    };
    static_assert(sizeof(PatchMarker) == 268, "Invalid PatchMarker size");
    typedef std::pair<unsigned int,SobStatic::PatchMarker> PatchPair;
    enum SMRepresentation
    {
        smInvisible = 0,
        smMesh,
        smSoftDot,
        smHardDot,
    };
    static SobStatic::SMRepresentation convertStringToSMRepresentation(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name);
    static void setGoblinAlphaInterp(bool bInterp);
private:
    void releaseUnusedMemory();
    class Model
    {
    public:
        Model();
        ~Model();
        Collision::OBB const &GetLocalOBB() const;
        Collision::Sphere m_boundingSphere; // 0x0
        HierarchyStatic *m_hierarchy; // 0x10
        Mesh *m_mesh; // 0x14
        RenderModel *m_renderModel; // 0x18
    };
    static_assert(sizeof(Model) == 28, "Invalid Model size");
public:
    void LoadModel(char const *);
    void LoadRenderModelEvents();
    virtual void OnHandlingDTRM(IFF *, IFFChunk *, void *, void *);
    class LoadingEnv
    {
    public:
        LoadingEnv(SobStatic::LoadingEnv const &); /* compiler_generated() */
        LoadingEnv();
        ~LoadingEnv();
        RamStream *m_rs; // 0x0
        IFF *m_iff; // 0x4
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_errMsg; // 0x8
        SobType m_type; // 0x20
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x24
        char m_hodFilename[260]; // 0x3C
        __int32 m_collisionFamilyIndex; // 0x140
        SobStatic *m_sobStatic; // 0x144
        SobStatic::Model *m_model; // 0x148
        SobStatic::LoadingEnv &operator=(SobStatic::LoadingEnv const &); /* compiler_generated() */
    };
    static_assert(sizeof(LoadingEnv) == 332, "Invalid LoadingEnv size");
    _inline SobStatic::LoadingEnv *GetLoadingEnv();
protected:
    virtual bool LoadModelBegin(SobType, char const *);
    virtual void LoadModelExecute();
    virtual void LoadModelEnd(char const *);
    virtual bool LoadModelFromCache(char const *);
    void CreateUnsharedModel();
public:
    SobStatic &operator=(SobStatic const &); /* compiler_generated() */
};
static_assert(sizeof(SobStatic) == 444, "Invalid SobStatic size");

class StaticFinder
{
public:
    StaticFinder(StaticFinder const &); /* compiler_generated() */
    _inline StaticFinder();
    virtual _inline ~StaticFinder();
    virtual bool operator()(SobStatic const *) const = 0;
    StaticFinder &operator=(StaticFinder const &); /* compiler_generated() */
};
static_assert(sizeof(StaticFinder) == 4, "Invalid StaticFinder size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline char const *SobStatic::GetName() const // 0x47CA5E
{
    mangled_assert("?GetName@SobStatic@@QBEPBDXZ");
    todo("implement");
}

_inline SobType SobStatic::GetType() const // 0x47CA7B
{
    mangled_assert("?GetType@SobStatic@@QBE?AW4SobType@@XZ");
    todo("implement");
}

_inline unsigned __int32 SobStatic::GetId() const // 0x57F9B5
{
    mangled_assert("?GetId@SobStatic@@QBEIXZ");
    todo("implement");
}

_inline bool SobStatic::canHaveFog() const // 0x4787C3
{
    mangled_assert("?canHaveFog@SobStatic@@QBE_NXZ");
    todo("implement");
}

_inline bool SobStatic::setCanHaveFog(bool const) // 0x4D02DD
{
    mangled_assert("?setCanHaveFog@SobStatic@@QAE_N_N@Z");
    todo("implement");
}

_inline bool SobStatic::canHaveShadows() const // 0x48B310
{
    mangled_assert("?canHaveShadows@SobStatic@@QBE_NXZ");
    todo("implement");
}

_inline bool SobStatic::setCanHaveShadows(bool const) // 0x4D02F0
{
    mangled_assert("?setCanHaveShadows@SobStatic@@QAE_N_N@Z");
    todo("implement");
}

_inline bool SobStatic::canBlink() const // 0x522BB5
{
    mangled_assert("?canBlink@SobStatic@@QBE_NXZ");
    todo("implement");
}

_inline bool SobStatic::setCanBlink(bool const) // 0x4D02CA
{
    mangled_assert("?setCanBlink@SobStatic@@QAE_N_N@Z");
    todo("implement");
}

_inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &SobStatic::getAlternativeHyperspaceEffectV() const // 0x5FA6B6
{
    mangled_assert("?getAlternativeHyperspaceEffectV@SobStatic@@QBEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
    todo("implement");
}

_inline void SobStatic::setAlternativeHyperspaceEffectV(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x4D02BF
{
    mangled_assert("?setAlternativeHyperspaceEffectV@SobStatic@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

_inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &SobStatic::getAlternativeHyperspaceEffectA() const // 0x5FA6AF
{
    mangled_assert("?getAlternativeHyperspaceEffectA@SobStatic@@QBEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
    todo("implement");
}

_inline void SobStatic::setAlternativeHyperspaceEffectA(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x4D02A3
{
    mangled_assert("?setAlternativeHyperspaceEffectA@SobStatic@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

_inline float SobStatic::getAlternativeHyperspaceEffectTime() const // 0x4B93B5
{
    mangled_assert("?getAlternativeHyperspaceEffectTime@SobStatic@@QBEMXZ");
    todo("implement");
}

_inline void SobStatic::setAlternativeHyperspaceEffectTime(float const) // 0x4D02AE
{
    mangled_assert("?setAlternativeHyperspaceEffectTime@SobStatic@@QAEXM@Z");
    todo("implement");
}

_inline Collision::OBB const &SobStatic::getLocalOBB() const // 0x478956
{
    mangled_assert("?getLocalOBB@SobStatic@@QBEABVOBB@Collision@@XZ");
    todo("implement");
}

_inline RenderModel const *SobStatic::getRenderModel() const // 0x4CF4C1
{
    mangled_assert("?getRenderModel@SobStatic@@QBEPBVRenderModel@@XZ");
    todo("implement");
}

_inline Collision::Sphere &SobStatic::getBoundingSphere() // 0x47EDA6
{
    mangled_assert("?getBoundingSphere@SobStatic@@QAEAAVSphere@Collision@@XZ");
    todo("implement");
}

_inline Collision::Sphere const &SobStatic::getBoundingSphere() const // 0x478923
{
    mangled_assert("?getBoundingSphere@SobStatic@@QBEABVSphere@Collision@@XZ");
    todo("implement");
}

_inline wchar_t const *SobStatic::GetDisplayedName() const // 0x4CE973
{
    mangled_assert("?GetDisplayedName@SobStatic@@QBEPB_WXZ");
    todo("implement");
}

_inline void SobStatic::SetDisplayedName(wchar_t const *) // 0x4CE9D5
{
    mangled_assert("?SetDisplayedName@SobStatic@@QAEXPB_W@Z");
    todo("implement");
}

_inline wchar_t const *SobStatic::GetDescription() const // 0x5994E9
{
    mangled_assert("?GetDescription@SobStatic@@QBEPB_WXZ");
    todo("implement");
}

_inline void SobStatic::SetDescription(wchar_t const *) // 0x4CE9B4
{
    mangled_assert("?SetDescription@SobStatic@@QAEXPB_W@Z");
    todo("implement");
}

_inline wchar_t const *SobStatic::GetBlobName() const // 0x634A84
{
    mangled_assert("?GetBlobName@SobStatic@@QBEPB_WXZ");
    todo("implement");
}

_inline void SobStatic::SetBlobName(wchar_t const *) // 0x4CE982
{
    mangled_assert("?SetBlobName@SobStatic@@QAEXPB_W@Z");
    todo("implement");
}

_inline float SobStatic::GetBlobNamePriority() const // 0x454601
{
    mangled_assert("?GetBlobNamePriority@SobStatic@@QBEMXZ");
    todo("implement");
}

_inline void SobStatic::SetBlobNamePriority(float) // 0x4CE9A3
{
    mangled_assert("?SetBlobNamePriority@SobStatic@@QAEXM@Z");
    todo("implement");
}

_inline SobStatic::LoadingEnv *SobStatic::GetLoadingEnv() // 0x4C0363
{
    mangled_assert("?GetLoadingEnv@SobStatic@@QAEPAVLoadingEnv@1@XZ");
    todo("implement");
}

_inline HierarchyStatic *SobStatic::getHierarchy() // 0x47EDAD
{
    mangled_assert("?getHierarchy@SobStatic@@QAEPAVHierarchyStatic@@XZ");
    todo("implement");
}

_inline HierarchyStatic const *SobStatic::getHierarchy() const // 0x449725
{
    mangled_assert("?getHierarchy@SobStatic@@QBEPBVHierarchyStatic@@XZ");
    todo("implement");
}

_inline bool SobStatic::hasModel() const // 0x478CD5
{
    mangled_assert("?hasModel@SobStatic@@QBE_NXZ");
    todo("implement");
}

_inline Mesh const *SobStatic::getMesh() const // 0x47896B
{
    mangled_assert("?getMesh@SobStatic@@QBEPBVMesh@@XZ");
    todo("implement");
}

_inline StaticFinder::StaticFinder() // 0x50DB1D
{
    mangled_assert("??0StaticFinder@@QAE@XZ");
    todo("implement");
}

_inline StaticFinder::~StaticFinder() // 0x50DBAF
{
    mangled_assert("??1StaticFinder@@UAE@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __SOBSTATIC_H__
#endif
