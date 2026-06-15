#if 0
#ifndef __SOBWITHMESH_H__
#define __SOBWITHMESH_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SobWithMesh :
    public SobRigidBody
{
public:
    typedef SobRigidBody SuperClass;
    SobWithMesh(SobWithMesh &); /* compiler_generated() */
    SobWithMesh(SobType, SaveGameData *);
    SobWithMesh(SobType, char const *, bool, Player *);
    virtual ~SobWithMesh() = 0;
    virtual bool update(float) override;
    virtual void makeDead(Sob::ReasonDied, unsigned __int32) override;
    virtual SobWithMesh *getSobMeshPtr() override;
    float getMeshAlpha() const;
    void setMySobDieTime(float);
    virtual bool updateTimeOfDeath(float);
    virtual _inline float getMainEngineUsage();
    _inline NavLights *getNavLights();
    bool getJointPosition(JointAnimStack const *, vector3 &, bool) const;
    bool getJointPosition(char const *, vector3 &, bool) const;
    bool getInterpolatedJointPosition(JointAnimStack const *, vector3 &, bool) const;
    bool getInterpolatedJointPosition(char const *, vector3 &, bool) const;
    bool getJointOrientation(JointAnimStack const *, matrix3 &, bool) const;
    bool getJointOrientation(char const *, matrix3 &, bool) const;
    bool getInterpolatedJointOrientation(JointAnimStack const *, matrix3 &, bool) const;
    bool getInterpolatedJointOrientation(char const *, matrix3 &, bool) const;
    _inline HierarchyDynamic const *getHierarchy() const;
    _inline HierarchyDynamic *getHierarchy();
    _inline MadState *getMadState();
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static void saveMadState(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void restoreMadState(void *objectPtr, SaveGameData *saveGameData);
    _inline Player const *getPlayerOwner() const;
    _inline Player *getPlayerOwner();
    virtual _inline void setPlayerOwner(Player *);
    wchar_t const *getPlayerName() const;
    bool isAlliedWith(Player const *) const;
    void moveLatchedObject(SobWithMesh *, vector3 const &);
    void latchObject(SobWithMesh *, vector3 const &, matrix3 const &, bool);
    void latchObject(SobWithMesh *, bool);
    void unLatchObject(SobWithMesh *);
    Selection const &getAllLatchedObjects() const;
    bool startAnimation(char *);
    virtual _inline void animationFinished(AnimatorMad *, AnimatorMad::CallbackEvent);
    enum ViewStatus
    {
        HIDDEN = 0,
        OUTOFVIEW,
        BEHINDCAMERA,
        TOOSMALL,
        DOT,
        RENDER,
    };
    SobWithMesh::ViewStatus checkMeshInView(Camera const *, float *) const;
    bool renderDot(Camera const *, vector4 const &, float);
    void renderStart(Camera const *, matrix4 &);
    void renderMesh(Camera const *, matrix4 const &, MeshRenderProxy &, unsigned __int32 const, float const, float const, vector4 const &, __int32);
    void renderEnd(Camera const *);
    virtual void render(Camera const *, MeshRenderProxy &);
    TeamColour const &getTeamColour() const;
    _inline void setOrigTeamColourHandle(unsigned __int32);
    _inline unsigned __int32 getOrigTeamColourHandle() const;
    _inline unsigned __int32 getTeamColourCRC() const;
    _inline void setTeamColourCRC(unsigned __int32);
    void updateJointTxfm();
    void getRootTxfm(matrix4 &) const;
    _inline SobWithMeshStatic const *getStatic() const;
    virtual void customRender(Camera const *, MeshRenderProxy &);
    virtual _inline void spawnDebris();
    virtual _inline void spawnSkeleton();
    unsigned __int32 getLOD(Camera const &) const;
    void computeNlips(float);
    virtual void computeSelTarg(Camera const *) override;
    virtual _inline SelTarg *getSelTarg() const override;
    virtual _inline MetaSelTarg *getMetaSelTarg() const override;
    _inline void setMetaSelTarg(MetaSelTarg *);
    _inline LatchManager const *getLatchManager() const;
    EngineTrailSystem const *getEngineTrailSystem() const;
    _inline EngineTrailSystem *getEngineTrailSystem();
    vector4 getHighlightColour() const;
    static void UseOriginalTeamColour(bool bUseOriginalTC);
protected:
    virtual void RemoveFromSimulation() override;
    void RemoveAllSimData();
private:
    void SetPreciseSelection();
    void initComponents();
    Player *m_playerOwner; // 0x208
    float m_sobDieTime; // 0x20C
    HierarchyDynamic *m_hierarchy; // 0x210
    MadState *m_madState; // 0x214
    NavLights *m_pNavLights; // 0x218
    LatchManager *m_latchManager; // 0x21C
    unsigned __int32 m_origTeamColourHandle; // 0x220
    EngineTrailSystem *m_pEngineTrailSystem; // 0x224
    unsigned __int32 m_teamColourCRC; // 0x228
    SelTarg m_impreciseSelTarg; // 0x22C
    SelTarg *m_selTarg; // 0x244
    MetaSelTarg *m_pMetaSelTarg; // 0x248
    void DrawAvoidanceBox(Collision::OBB const &, vector4 const &, vector4 const &);
    void ShowAvoidanceBox(Collision::OBB const &, vector3 const &, vector3 const &, float, vector4 const &, vector4 const &);
    static bool s_showShipAvoidance;
    static bool s_showFormationAvoidance;
public:
    void ShowAvoidance();
    static void SetShowFormationAvoidance(bool enable);
    static void SetShowShipAvoidance(bool enable);
    SobWithMesh &operator=(SobWithMesh &); /* compiler_generated() */
};
static_assert(sizeof(SobWithMesh) == 588, "Invalid SobWithMesh size");

class SobWithMesh :
    public SobRigidBody
{
public:
    typedef SobRigidBody SuperClass;
    SobWithMesh(SobWithMesh &); /* compiler_generated() */
    SobWithMesh(SobType, SaveGameData *);
    SobWithMesh(SobType, char const *, bool, Player *);
    virtual ~SobWithMesh() = 0;
    virtual bool update(float) override;
    virtual void makeDead(Sob::ReasonDied, unsigned __int32) override;
    virtual SobWithMesh *getSobMeshPtr() override;
    float getMeshAlpha() const;
    void setMySobDieTime(float);
    virtual bool updateTimeOfDeath(float);
    virtual _inline float getMainEngineUsage();
    _inline NavLights *getNavLights();
    bool getJointPosition(JointAnimStack const *, vector3 &, bool) const;
    bool getJointPosition(char const *, vector3 &, bool) const;
    bool getInterpolatedJointPosition(JointAnimStack const *, vector3 &, bool) const;
    bool getInterpolatedJointPosition(char const *, vector3 &, bool) const;
    bool getJointOrientation(JointAnimStack const *, matrix3 &, bool) const;
    bool getJointOrientation(char const *, matrix3 &, bool) const;
    bool getInterpolatedJointOrientation(JointAnimStack const *, matrix3 &, bool) const;
    bool getInterpolatedJointOrientation(char const *, matrix3 &, bool) const;
    _inline HierarchyDynamic const *getHierarchy() const;
    _inline HierarchyDynamic *getHierarchy();
    _inline MadState *getMadState();
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static void saveMadState(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void restoreMadState(void *objectPtr, SaveGameData *saveGameData);
    _inline Player const *getPlayerOwner() const;
    _inline Player *getPlayerOwner();
    virtual _inline void setPlayerOwner(Player *);
    wchar_t const *getPlayerName() const;
    bool isAlliedWith(Player const *) const;
    void moveLatchedObject(SobWithMesh *, vector3 const &);
    void latchObject(SobWithMesh *, vector3 const &, matrix3 const &, bool);
    void latchObject(SobWithMesh *, bool);
    void unLatchObject(SobWithMesh *);
    Selection const &getAllLatchedObjects() const;
    bool startAnimation(char *);
    virtual _inline void animationFinished(AnimatorMad *, AnimatorMad::CallbackEvent);
    enum ViewStatus
    {
        HIDDEN = 0,
        OUTOFVIEW,
        BEHINDCAMERA,
        TOOSMALL,
        DOT,
        RENDER,
    };
    SobWithMesh::ViewStatus checkMeshInView(Camera const *, float *) const;
    bool renderDot(Camera const *, vector4 const &, float);
    void renderStart(Camera const *, matrix4 &);
    void renderMesh(Camera const *, matrix4 const &, MeshRenderProxy &, unsigned __int32 const, float const, float const, vector4 const &, __int32);
    void renderEnd(Camera const *);
    virtual void render(Camera const *, MeshRenderProxy &);
    TeamColour const &getTeamColour() const;
    _inline void setOrigTeamColourHandle(unsigned __int32);
    _inline unsigned __int32 getOrigTeamColourHandle() const;
    _inline unsigned __int32 getTeamColourCRC() const;
    _inline void setTeamColourCRC(unsigned __int32);
    void updateJointTxfm();
    void getRootTxfm(matrix4 &) const;
    _inline SobWithMeshStatic const *getStatic() const;
    virtual void customRender(Camera const *, MeshRenderProxy &);
    virtual _inline void spawnDebris();
    virtual _inline void spawnSkeleton();
    unsigned __int32 getLOD(Camera const &) const;
    void computeNlips(float);
    virtual void computeSelTarg(Camera const *) override;
    virtual _inline SelTarg *getSelTarg() const override;
    virtual _inline MetaSelTarg *getMetaSelTarg() const override;
    _inline void setMetaSelTarg(MetaSelTarg *);
    _inline LatchManager const *getLatchManager() const;
    EngineTrailSystem const *getEngineTrailSystem() const;
    _inline EngineTrailSystem *getEngineTrailSystem();
    vector4 getHighlightColour() const;
    static void UseOriginalTeamColour(bool bUseOriginalTC);
protected:
    virtual void RemoveFromSimulation() override;
    void RemoveAllSimData();
private:
    void SetPreciseSelection();
    void initComponents();
    Player *m_playerOwner; // 0x208
    float m_sobDieTime; // 0x20C
    HierarchyDynamic *m_hierarchy; // 0x210
    MadState *m_madState; // 0x214
    NavLights *m_pNavLights; // 0x218
    LatchManager *m_latchManager; // 0x21C
    unsigned __int32 m_origTeamColourHandle; // 0x220
    EngineTrailSystem *m_pEngineTrailSystem; // 0x224
    unsigned __int32 m_teamColourCRC; // 0x228
    SelTarg m_impreciseSelTarg; // 0x22C
    SelTarg *m_selTarg; // 0x244
    MetaSelTarg *m_pMetaSelTarg; // 0x248
    void DrawAvoidanceBox(Collision::OBB const &, vector4 const &, vector4 const &);
    void ShowAvoidanceBox(Collision::OBB const &, vector3 const &, vector3 const &, float, vector4 const &, vector4 const &);
    static bool s_showShipAvoidance;
    static bool s_showFormationAvoidance;
public:
    void ShowAvoidance();
    static void SetShowFormationAvoidance(bool enable);
    static void SetShowShipAvoidance(bool enable);
    SobWithMesh &operator=(SobWithMesh &); /* compiler_generated() */
};
static_assert(sizeof(SobWithMesh) == 588, "Invalid SobWithMesh size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline float SobWithMesh::getMainEngineUsage() // 0x4B0B5C
{
    mangled_assert("?getMainEngineUsage@SobWithMesh@@UAEMXZ");
    todo("implement");
}

_inline NavLights *SobWithMesh::getNavLights() // 0x48C870
{
    mangled_assert("?getNavLights@SobWithMesh@@QAEPAVNavLights@@XZ");
    todo("implement");
}

_inline HierarchyDynamic *SobWithMesh::getHierarchy() // 0x44972F
{
    mangled_assert("?getHierarchy@SobWithMesh@@QAEPAVHierarchyDynamic@@XZ");
    todo("implement");
}

_inline HierarchyDynamic const *SobWithMesh::getHierarchy() const // 0x64FBB2
{
    mangled_assert("?getHierarchy@SobWithMesh@@QBEPBVHierarchyDynamic@@XZ");
    todo("implement");
}

_inline MadState *SobWithMesh::getMadState() // 0x485109
{
    mangled_assert("?getMadState@SobWithMesh@@QAEPAVMadState@@XZ");
    todo("implement");
}

_inline bool SobWithMesh::isDeterministic() // 0x4BFA58
{
    mangled_assert("?isDeterministic@SobWithMesh@@UAE_NXZ");
    todo("implement");
}

_inline char const *SobWithMesh::saveToken() // 0x4BFE99
{
    mangled_assert("?saveToken@SobWithMesh@@UAEPBDXZ");
    todo("implement");
}

_inline Player *SobWithMesh::getPlayerOwner() // 0x441BDD
{
    mangled_assert("?getPlayerOwner@SobWithMesh@@QAEPAVPlayer@@XZ");
    todo("implement");
}

_inline Player const *SobWithMesh::getPlayerOwner() const // 0x48468F
{
    mangled_assert("?getPlayerOwner@SobWithMesh@@QBEPBVPlayer@@XZ");
    todo("implement");
}

_inline void SobWithMesh::setPlayerOwner(Player *) // 0x488A4E
{
    mangled_assert("?setPlayerOwner@SobWithMesh@@UAEXPAVPlayer@@@Z");
    todo("implement");
}

_inline void SobWithMesh::animationFinished(AnimatorMad *, AnimatorMad::CallbackEvent) // 0x487417
{
    mangled_assert("?animationFinished@SobWithMesh@@UAEXPAVAnimatorMad@@W4CallbackEvent@2@@Z");
    todo("implement");
}

_inline void SobWithMesh::setOrigTeamColourHandle(unsigned __int32) // 0x557815
{
    mangled_assert("?setOrigTeamColourHandle@SobWithMesh@@QAEXI@Z");
    todo("implement");
}

_inline unsigned __int32 SobWithMesh::getOrigTeamColourHandle() const // 0x6159B8
{
    mangled_assert("?getOrigTeamColourHandle@SobWithMesh@@QBEIXZ");
    todo("implement");
}

_inline unsigned __int32 SobWithMesh::getTeamColourCRC() const // 0x487F6E
{
    mangled_assert("?getTeamColourCRC@SobWithMesh@@QBEIXZ");
    todo("implement");
}

_inline void SobWithMesh::setTeamColourCRC(unsigned __int32) // 0x488A92
{
    mangled_assert("?setTeamColourCRC@SobWithMesh@@QAEXI@Z");
    todo("implement");
}

_inline SobWithMeshStatic const *SobWithMesh::getStatic() const // 0x441C93
{
    mangled_assert("?getStatic@SobWithMesh@@QBEPBVSobWithMeshStatic@@XZ");
    todo("implement");
}

_inline void SobWithMesh::spawnDebris() // 0x488AF3
{
    mangled_assert("?spawnDebris@SobWithMesh@@UAEXXZ");
    todo("implement");
}

_inline void SobWithMesh::spawnSkeleton() // 0x488AF4
{
    mangled_assert("?spawnSkeleton@SobWithMesh@@UAEXXZ");
    todo("implement");
}

_inline SelTarg *SobWithMesh::getSelTarg() const // 0x487F30
{
    mangled_assert("?getSelTarg@SobWithMesh@@UBEPAVSelTarg@@XZ");
    todo("implement");
}

_inline MetaSelTarg *SobWithMesh::getMetaSelTarg() const // 0x487EFA
{
    mangled_assert("?getMetaSelTarg@SobWithMesh@@UBEPAVMetaSelTarg@@XZ");
    todo("implement");
}

_inline void SobWithMesh::setMetaSelTarg(MetaSelTarg *) // 0x608C19
{
    mangled_assert("?setMetaSelTarg@SobWithMesh@@QAEXPAVMetaSelTarg@@@Z");
    todo("implement");
}

_inline LatchManager const *SobWithMesh::getLatchManager() const // 0x69BFD8
{
    mangled_assert("?getLatchManager@SobWithMesh@@QBEPBVLatchManager@@XZ");
    todo("implement");
}

_inline EngineTrailSystem *SobWithMesh::getEngineTrailSystem() // 0x441BAB
{
    mangled_assert("?getEngineTrailSystem@SobWithMesh@@QAEPAVEngineTrailSystem@@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __SOBWITHMESH_H__
#endif
