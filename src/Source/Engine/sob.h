#if 0
#ifndef __SOB_H__
#define __SOB_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum SobDetFlags
{
    SOFD_Dead = 1, // 0x0001
    SOFD_Cloak = 2, // 0x0002
    SOFD_Hyperspace = 4, // 0x0004
    SOFD_Newborn = 8, // 0x0008
    SOFD_Zombie = 16, // 0x0010
    SOFD_Invincible = 32, // 0x0020 ' '
    SOFD_NISShip = 128, // 0x0080
    SOFD_Sleeping = 256, // 0x0100
};

enum SobFlags
{
    SOF_Selected = (1 << 0),
    SOF_Selecting = (1 << 1),
    SOF_MouseOver = (1 << 2),
    SOF_Group1 = (1 << 3),
    SOF_Group2 = (1 << 4),
    SOF_Group3 = (1 << 5),
    SOF_Group4 = (1 << 6),
    SOF_Group5 = (1 << 7),
    SOF_Group6 = (1 << 8),
    SOF_Group7 = (1 << 9),
    SOF_Group8 = (1 << 10),
    SOF_Group9 = (1 << 11),
    SOF_Group10 = (1 << 12),
    SOF_Group11 = (1 << 13),
    SOF_Group12 = (1 << 14),
    SOF_Group13 = (1 << 15),
    SOF_Group14 = (1 << 16),
    SOF_Group15 = (1 << 17),
    SOF_Group16 = (1 << 18),
    SOF_Group17 = (1 << 19),
    SOF_Group18 = (1 << 20),
    SOF_Group19 = (1 << 21),
    SOF_Group20 = (1 << 22),
    SOF_Unselectable = (1 << 23),
    SOF_Hide = (1 << 24),
    SOF_MaxLOD = (1 << 25),
    SOF_OffScreen = (1 << 26),
};

/* ---------- definitions */

class Sob :
    public SaveObject
{
public:
    typedef SaveObject SuperClass;
    typedef std::vector<Selection *,std::allocator<Selection *> > ObserverList;
private:
    std::vector<Selection *,std::allocator<Selection *> > m_ObservingGroups; // 0xC
protected:
    bool m_bAlwaysInRenderList; // 0x18
    MeshInstance *m_mesh; // 0x1C
    float m_distanceToCamera; // 0x20
    float m_currentNlips; // 0x24
    bool m_bIsInRenderList; // 0x28
    unsigned __int32 m_lastRenderedFrame; // 0x2C
    SobVis *m_sobVis; // 0x30
public:
    unsigned __int32 workingLOD; // 0x34
    InterpolSobData m_interpolData; // 0x38
private:
    Visibility m_visibility; // 0xD8
protected:
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_sobName; // 0x10C
    SobID m_sobID; // 0x124
    unsigned __int32 m_localFlags; // 0x130
    SobStatic *m_sobStatic; // 0x134
    unsigned __int32 m_deterministicFlags; // 0x138
    SobType m_sobType; // 0x13C
    float m_currentHealth; // 0x140
    std::auto_ptr<Collision::Internal::Span::Proxy> m_collisionProxy; // 0x144
private:
    Collision::AABB m_aabb; // 0x148
    Collision::OBB m_obb; // 0x160
    Collision::Sphere m_bvSphere; // 0x19C
    Collision::Capsule m_avoidanceCapsule; // 0x1AC
    std::auto_ptr<Collision::Internal::Span::Proxy> m_avoidanceProxy; // 0x1C8
public:
    _inline void RegisterObserver(Selection *);
    void RemoveObserver(Selection *);
    unsigned __int32 ObserverCount() const;
    _inline MeshInstance const *getMeshInstance() const;
    _inline MeshInstance *getMeshInstance();
    bool releaseMesh();
    bool computeFogColour(vector4 &) const;
    _inline Visibility const *getVisibility() const;
    virtual Visibility *getVisibility();
    virtual void clearCloaking();
    _inline char const *getName() const;
    void setName(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    _inline SobID const &getSobID() const;
    void setSobID(SobID const &);
    Sob(Sob &); /* compiler_generated() */
    Sob(SobType, SaveGameData *);
    Sob(SobType, char const *, bool);
    virtual ~Sob() override;
    void staticInit();
    virtual void sobVisInit();
    Missile const *getMissilePtr() const;
    Missile *getMissilePtr();
    _inline Ship const *getShipPtr() const;
    Ship *getShipPtr();
    _inline SubSystem const *getSubSystemPtr() const;
    SubSystem *getSubSystemPtr();
    _inline SobWithMesh const *getSobMeshPtr() const;
    virtual SobWithMesh *getSobMeshPtr();
    virtual _inline SobRigidBody *getSobRigidBodyPtr();
    _inline Volume const *getVolumePtrSafe() const;
    Volume *getVolumePtrSafe();
    WeaponFire *getWeaponFirePtr();
    _inline bool getAlwaysInRenderList() const;
    _inline void setAlwaysInRenderList(bool const);
    _inline SobVis const *getSobVis() const;
    _inline SobVis *getSobVis();
    void setSobVis(SobVis *);
    void setLocalFlag(unsigned __int32, bool);
    bool isLocalFlagSet(unsigned __int32) const;
    void setHidden(bool);
    void setDead(bool);
    virtual void setInHyperspace(bool);
    void setInvincible(bool);
    virtual _inline bool isInGodMode();
    void setNISShip(bool);
    bool isSelected() const;
    bool isSelecting() const;
    bool isMouseOver() const;
    bool isInGroup(__int32) const;
    virtual _inline SelTarg *getSelTarg() const;
    virtual _inline void computeSelTarg(Camera const *);
    virtual _inline MetaSelTarg *getMetaSelTarg() const;
    virtual void render(matrix4 &);
    virtual bool update(float);
    virtual void reloadStats();
    void validateZoomDistance(float &) const;
    _inline void setDistanceToCamera(float);
    _inline float getDistanceToCamera() const;
    _inline void setInRenderList(bool);
    _inline bool isInRenderList() const;
    _inline void setLastRenderedFrame(unsigned __int32);
    _inline unsigned __int32 getLastRenderedFrame() const;
    _inline void setCurrentNlips(float);
    _inline float getCurrentNlips() const;
    vector3 const &getInterpolatedGeometricCenter() const;
    float getDistanceFromOrigin();
    float getSeperationDistance(Sob const *) const;
    static vector3 predictIntersectionPointWithTarget(vector3 const &trackerPos, vector3 const &trackerVelocity, float trackerMaxSpeed, vector3 const &targetPos, vector3 const &targetVelocity);
    vector3 predictIntersectionPointWithTarget(Sob const *) const;
    _inline float getSelectionLimit() const;
    float getPreciseSelectionLimit() const;
    _inline float getPreciseATILimit() const;
    _inline float getSelectionSizeMin() const;
    _inline float getSelectionSizeMax() const;
    _inline TacticalIcon *getTacticalIcon() const;
    float getTOScale() const;
    _inline float getMinimumZoomFactor() const;
    float getMinLOD() const;
    float getDetailLevel() const;
    _inline float getSelectionPriority() const;
    virtual _inline vector3 const &getPosition() const;
    virtual _inline vector3 const getUp() const;
    virtual _inline matrix3 const &getCoordSys() const;
    virtual _inline quat const &getCoordSysQuat() const;
    virtual _inline vector3 const &getVelocity() const;
    virtual vector3 getVelocityOfBSPosition(vector3 const &) const;
    vector3 getPositionOfBSPosition(vector3 const &) const;
    virtual _inline vector3 const &getAngularVelocity() const;
    _inline float getVelocitySqr() const;
    virtual void resetTransform(vector3 const &, matrix3 const &);
    virtual _inline void setPosition(vector3 const &);
    virtual _inline void setCoordSys(matrix3 const &);
    virtual _inline void setCoordSys(quat const &);
    virtual _inline void setTransform(vector3 const &, matrix3 const &);
    virtual _inline void setVelocity(vector3 const &);
    virtual _inline void setAngularVelocity(vector3 const &);
    virtual _inline void setRandomAngularVelocity(float);
    virtual void changedPosition();
    void jumpedPosition();
    virtual _inline vector3 const &getOldPosition() const;
    virtual _inline quat const &getOldCoordSysQuat() const;
    virtual _inline vector3 const &getOldVelocity() const;
    virtual _inline vector3 const &getOldAngularVelocity() const;
    virtual _inline bool isMoving() const;
    virtual _inline bool isRotating() const;
    void makeZombie();
    _inline bool getNewborn() const;
    void setNewborn(bool);
    _inline bool getZombie() const;
    _inline bool isDead() const;
    _inline bool isHidden() const;
    _inline bool isInHyperspace() const;
    _inline bool isInvincible() const;
    _inline bool isNISShip() const;
    _inline bool isSleeping() const;
    virtual void setSleepingFlag(bool);
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    static char const m_saveToken[0];
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static void saveSobVis(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void restoreSobVis(void *objectPtr, SaveGameData *saveGameData);
protected:
    virtual void RemoveFromSimulation();
    void RemoveAllSimData();
    void sobDied();
private:
    void setZombie(bool);
public:
    _inline unsigned __int32 const &getLocalFlags();
    void setLocalFlags(unsigned __int32 const &);
    _inline SobStatic const *getStatic() const;
    unsigned __int32 const &getDeterministicFlags() const;
    void setDeterministicFlags(unsigned __int32 const &);
    _inline SobType getSobType() const;
    void setSelected(bool);
    void setSelecting(bool);
    void setMouseOver(bool);
    void setInGroup(__int32, bool);
    virtual bool HasRigidBody();
protected:
    static SaveData const m_saveData[0];
    enum ReasonDied
    {
        RD_NONE = 0,
        RD_KILLED,
        RD_RETIRED,
        RD_INSHIPHOLD,
        RD_QUIT,
    };
public:
    void setCurrentHealth(float);
    void forceCurrentHealthTo(float);
    float getCurrentHealth() const;
    virtual float getMaxHealth() const;
    virtual float getHealthRegenMultiplier() const;
    void takeDamage(float, Missile *);
    void takeDamage(float, WeaponFire *);
    virtual void takeDamage(float, char const *, unsigned __int32, Sob::ReasonDied);
    float increaseHealth(float);
    void kill();
    virtual void makeDead(Sob::ReasonDied, unsigned __int32);
protected:
    virtual float getSobDieTime();
private:
    void regenerateHealth(float);
    virtual void doDeathEffects(char const *);
protected:
    void enforceHealthBounds();
    virtual void onHealthChange(float);
public:
    virtual void getTargetOnSob(vector3 const &, vector3 &, vector3 &, float) const;
    _inline Collision::AABB const &GetAABB() const;
    _inline Collision::OBB const &GetOBB() const;
    _inline Collision::Sphere const &GetBoundingSphere() const;
    _inline void SetBoundingSphere(vector3 const &, float);
    _inline void SetBoundingSphereRadius(float);
protected:
    virtual void UpdateCollisionProxies();
    typedef Collision::Span<Sob *> CollisionTree;
private:
    void UpdateBoundingVolumes();
public:
    _inline Collision::Capsule const &GetAvoidanceCapsule() const;
private:
    void CreateCollisionProxies();
    void UpdateAvoidanceCapsule();
    void UpdateAvoidanceCapsuleHorizontal();
    void UpdateAvoidanceCapsuleVertical();
    typedef Collision::Span<Sob *> AvoidanceTree;
public:
    Sob &operator=(Sob &); /* compiler_generated() */
};
static_assert(sizeof(Sob) == 460, "Invalid Sob size");

class Sob :
    public SaveObject
{
public:
    typedef SaveObject SuperClass;
    typedef std::vector<Selection *,std::allocator<Selection *> > ObserverList;
private:
    std::vector<Selection *,std::allocator<Selection *> > m_ObservingGroups; // 0xC
protected:
    bool m_bAlwaysInRenderList; // 0x18
    MeshInstance *m_mesh; // 0x1C
    float m_distanceToCamera; // 0x20
    float m_currentNlips; // 0x24
    bool m_bIsInRenderList; // 0x28
    unsigned __int32 m_lastRenderedFrame; // 0x2C
    SobVis *m_sobVis; // 0x30
public:
    unsigned __int32 workingLOD; // 0x34
    InterpolSobData m_interpolData; // 0x38
private:
    Visibility m_visibility; // 0xD8
protected:
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_sobName; // 0x10C
    SobID m_sobID; // 0x124
    unsigned __int32 m_localFlags; // 0x130
    SobStatic *m_sobStatic; // 0x134
    unsigned __int32 m_deterministicFlags; // 0x138
    SobType m_sobType; // 0x13C
    float m_currentHealth; // 0x140
    std::auto_ptr<Collision::Internal::Span::Proxy> m_collisionProxy; // 0x144
private:
    Collision::AABB m_aabb; // 0x148
    Collision::OBB m_obb; // 0x160
    Collision::Sphere m_bvSphere; // 0x19C
    Collision::Capsule m_avoidanceCapsule; // 0x1AC
    std::auto_ptr<Collision::Internal::Span::Proxy> m_avoidanceProxy; // 0x1C8
public:
    _inline void RegisterObserver(Selection *);
    void RemoveObserver(Selection *);
    unsigned __int32 ObserverCount() const;
    _inline MeshInstance const *getMeshInstance() const;
    _inline MeshInstance *getMeshInstance();
    bool releaseMesh();
    bool computeFogColour(vector4 &) const;
    _inline Visibility const *getVisibility() const;
    virtual Visibility *getVisibility();
    virtual void clearCloaking();
    _inline char const *getName() const;
    void setName(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    _inline SobID const &getSobID() const;
    void setSobID(SobID const &);
    Sob(Sob &); /* compiler_generated() */
    Sob(SobType, SaveGameData *);
    Sob(SobType, char const *, bool);
    virtual ~Sob() override;
    void staticInit();
    virtual void sobVisInit();
    Missile const *getMissilePtr() const;
    Missile *getMissilePtr();
    _inline Ship const *getShipPtr() const;
    Ship *getShipPtr();
    _inline SubSystem const *getSubSystemPtr() const;
    SubSystem *getSubSystemPtr();
    _inline SobWithMesh const *getSobMeshPtr() const;
    virtual SobWithMesh *getSobMeshPtr();
    virtual _inline SobRigidBody *getSobRigidBodyPtr();
    _inline Volume const *getVolumePtrSafe() const;
    Volume *getVolumePtrSafe();
    WeaponFire *getWeaponFirePtr();
    _inline bool getAlwaysInRenderList() const;
    _inline void setAlwaysInRenderList(bool const);
    _inline SobVis const *getSobVis() const;
    _inline SobVis *getSobVis();
    void setSobVis(SobVis *);
    void setLocalFlag(unsigned __int32, bool);
    bool isLocalFlagSet(unsigned __int32) const;
    void setHidden(bool);
    void setDead(bool);
    virtual void setInHyperspace(bool);
    void setInvincible(bool);
    virtual _inline bool isInGodMode();
    void setNISShip(bool);
    bool isSelected() const;
    bool isSelecting() const;
    bool isMouseOver() const;
    bool isInGroup(__int32) const;
    virtual _inline SelTarg *getSelTarg() const;
    virtual _inline void computeSelTarg(Camera const *);
    virtual _inline MetaSelTarg *getMetaSelTarg() const;
    virtual void render(matrix4 &);
    virtual bool update(float);
    virtual void reloadStats();
    void validateZoomDistance(float &) const;
    _inline void setDistanceToCamera(float);
    _inline float getDistanceToCamera() const;
    _inline void setInRenderList(bool);
    _inline bool isInRenderList() const;
    _inline void setLastRenderedFrame(unsigned __int32);
    _inline unsigned __int32 getLastRenderedFrame() const;
    _inline void setCurrentNlips(float);
    _inline float getCurrentNlips() const;
    vector3 const &getInterpolatedGeometricCenter() const;
    float getDistanceFromOrigin();
    float getSeperationDistance(Sob const *) const;
    static vector3 predictIntersectionPointWithTarget(vector3 const &trackerPos, vector3 const &trackerVelocity, float trackerMaxSpeed, vector3 const &targetPos, vector3 const &targetVelocity);
    vector3 predictIntersectionPointWithTarget(Sob const *) const;
    _inline float getSelectionLimit() const;
    float getPreciseSelectionLimit() const;
    _inline float getPreciseATILimit() const;
    _inline float getSelectionSizeMin() const;
    _inline float getSelectionSizeMax() const;
    _inline TacticalIcon *getTacticalIcon() const;
    float getTOScale() const;
    _inline float getMinimumZoomFactor() const;
    float getMinLOD() const;
    float getDetailLevel() const;
    _inline float getSelectionPriority() const;
    virtual _inline vector3 const &getPosition() const;
    virtual _inline vector3 const getUp() const;
    virtual _inline matrix3 const &getCoordSys() const;
    virtual _inline quat const &getCoordSysQuat() const;
    virtual _inline vector3 const &getVelocity() const;
    virtual vector3 getVelocityOfBSPosition(vector3 const &) const;
    vector3 getPositionOfBSPosition(vector3 const &) const;
    virtual _inline vector3 const &getAngularVelocity() const;
    _inline float getVelocitySqr() const;
    virtual void resetTransform(vector3 const &, matrix3 const &);
    virtual _inline void setPosition(vector3 const &);
    virtual _inline void setCoordSys(matrix3 const &);
    virtual _inline void setCoordSys(quat const &);
    virtual _inline void setTransform(vector3 const &, matrix3 const &);
    virtual _inline void setVelocity(vector3 const &);
    virtual _inline void setAngularVelocity(vector3 const &);
    virtual _inline void setRandomAngularVelocity(float);
    virtual void changedPosition();
    void jumpedPosition();
    virtual _inline vector3 const &getOldPosition() const;
    virtual _inline quat const &getOldCoordSysQuat() const;
    virtual _inline vector3 const &getOldVelocity() const;
    virtual _inline vector3 const &getOldAngularVelocity() const;
    virtual _inline bool isMoving() const;
    virtual _inline bool isRotating() const;
    void makeZombie();
    _inline bool getNewborn() const;
    void setNewborn(bool);
    _inline bool getZombie() const;
    _inline bool isDead() const;
    _inline bool isHidden() const;
    _inline bool isInHyperspace() const;
    _inline bool isInvincible() const;
    _inline bool isNISShip() const;
    _inline bool isSleeping() const;
    virtual void setSleepingFlag(bool);
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    static char const m_saveToken[0];
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static void saveSobVis(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void restoreSobVis(void *objectPtr, SaveGameData *saveGameData);
protected:
    virtual void RemoveFromSimulation();
    void RemoveAllSimData();
    void sobDied();
private:
    void setZombie(bool);
public:
    _inline unsigned __int32 const &getLocalFlags();
    void setLocalFlags(unsigned __int32 const &);
    _inline SobStatic const *getStatic() const;
    unsigned __int32 const &getDeterministicFlags() const;
    void setDeterministicFlags(unsigned __int32 const &);
    _inline SobType getSobType() const;
    void setSelected(bool);
    void setSelecting(bool);
    void setMouseOver(bool);
    void setInGroup(__int32, bool);
    virtual bool HasRigidBody();
protected:
    static SaveData const m_saveData[0];
    enum ReasonDied
    {
        RD_NONE = 0,
        RD_KILLED,
        RD_RETIRED,
        RD_INSHIPHOLD,
        RD_QUIT,
    };
public:
    void setCurrentHealth(float);
    void forceCurrentHealthTo(float);
    float getCurrentHealth() const;
    virtual float getMaxHealth() const;
    virtual float getHealthRegenMultiplier() const;
    void takeDamage(float, Missile *);
    void takeDamage(float, WeaponFire *);
    virtual void takeDamage(float, char const *, unsigned __int32, Sob::ReasonDied);
    float increaseHealth(float);
    void kill();
    virtual void makeDead(Sob::ReasonDied, unsigned __int32);
protected:
    virtual float getSobDieTime();
private:
    void regenerateHealth(float);
    virtual void doDeathEffects(char const *);
protected:
    void enforceHealthBounds();
    virtual void onHealthChange(float);
public:
    virtual void getTargetOnSob(vector3 const &, vector3 &, vector3 &, float) const;
    _inline Collision::AABB const &GetAABB() const;
    _inline Collision::OBB const &GetOBB() const;
    _inline Collision::Sphere const &GetBoundingSphere() const;
    _inline void SetBoundingSphere(vector3 const &, float);
    _inline void SetBoundingSphereRadius(float);
protected:
    virtual void UpdateCollisionProxies();
    typedef Collision::Span<Sob *> CollisionTree;
private:
    void UpdateBoundingVolumes();
public:
    _inline Collision::Capsule const &GetAvoidanceCapsule() const;
private:
    void CreateCollisionProxies();
    void UpdateAvoidanceCapsule();
    void UpdateAvoidanceCapsuleHorizontal();
    void UpdateAvoidanceCapsuleVertical();
    typedef Collision::Span<Sob *> AvoidanceTree;
public:
    Sob &operator=(Sob &); /* compiler_generated() */
};
static_assert(sizeof(Sob) == 460, "Invalid Sob size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern MeshInstance *_sub_478975(Sob *const);
_inline MeshInstance *Sob::getMeshInstance() // 0x478975
{
    mangled_assert("?getMeshInstance@Sob@@QAEPAVMeshInstance@@XZ");
    todo("implement");
    MeshInstance * __result = _sub_478975(this);
    return __result;
}

_extern MeshInstance const *_sub_48C782(Sob const *const);
_inline MeshInstance const *Sob::getMeshInstance() const // 0x48C782
{
    mangled_assert("?getMeshInstance@Sob@@QBEPBVMeshInstance@@XZ");
    todo("implement");
    MeshInstance const * __result = _sub_48C782(this);
    return __result;
}

_extern Visibility const *_sub_4436C9(Sob const *const);
_inline Visibility const *Sob::getVisibility() const // 0x4436C9
{
    mangled_assert("?getVisibility@Sob@@QBEPBVVisibility@@XZ");
    todo("implement");
    Visibility const * __result = _sub_4436C9(this);
    return __result;
}

_extern char const *_sub_44973A(Sob const *const);
_inline char const *Sob::getName() const // 0x44973A
{
    mangled_assert("?getName@Sob@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_44973A(this);
    return __result;
}

_extern SobID const &_sub_453FC4(Sob const *const);
_inline SobID const &Sob::getSobID() const // 0x453FC4
{
    mangled_assert("?getSobID@Sob@@QBEABVSobID@@XZ");
    todo("implement");
    SobID const & __result = _sub_453FC4(this);
    return __result;
}

_extern Ship const *_sub_4436C4(Sob const *const);
_inline Ship const *Sob::getShipPtr() const // 0x4436C4
{
    mangled_assert("?getShipPtr@Sob@@QBEPBVShip@@XZ");
    todo("implement");
    Ship const * __result = _sub_4436C4(this);
    return __result;
}

_extern SubSystem const *_sub_631612(Sob const *const);
_inline SubSystem const *Sob::getSubSystemPtr() const // 0x631612
{
    mangled_assert("?getSubSystemPtr@Sob@@QBEPBVSubSystem@@XZ");
    todo("implement");
    SubSystem const * __result = _sub_631612(this);
    return __result;
}

_extern SobWithMesh const *_sub_48CCCB(Sob const *const);
_inline SobWithMesh const *Sob::getSobMeshPtr() const // 0x48CCCB
{
    mangled_assert("?getSobMeshPtr@Sob@@QBEPBVSobWithMesh@@XZ");
    todo("implement");
    SobWithMesh const * __result = _sub_48CCCB(this);
    return __result;
}

_extern SobRigidBody *_sub_478B2C(Sob *const);
_inline SobRigidBody *Sob::getSobRigidBodyPtr() // 0x478B2C
{
    mangled_assert("?getSobRigidBodyPtr@Sob@@UAEPAVSobRigidBody@@XZ");
    todo("implement");
    SobRigidBody * __result = _sub_478B2C(this);
    return __result;
}

_extern Volume const *_sub_631617(Sob const *const);
_inline Volume const *Sob::getVolumePtrSafe() const // 0x631617
{
    mangled_assert("?getVolumePtrSafe@Sob@@QBEPBVVolume@@XZ");
    todo("implement");
    Volume const * __result = _sub_631617(this);
    return __result;
}

_extern bool _sub_5EF1F1(Sob const *const);
_inline bool Sob::getAlwaysInRenderList() const // 0x5EF1F1
{
    mangled_assert("?getAlwaysInRenderList@Sob@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_5EF1F1(this);
    return __result;
}

_extern void _sub_4C4179(Sob *const, bool const);
_inline void Sob::setAlwaysInRenderList(bool const) // 0x4C4179
{
    mangled_assert("?setAlwaysInRenderList@Sob@@QAEX_N@Z");
    todo("implement");
    _sub_4C4179(this, arg);
}

_extern bool _sub_478D47(Sob *const);
_inline bool Sob::isInGodMode() // 0x478D47
{
    mangled_assert("?isInGodMode@Sob@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_478D47(this);
    return __result;
}

_extern SelTarg *_sub_478A76(Sob const *const);
_inline SelTarg *Sob::getSelTarg() const // 0x478A76
{
    mangled_assert("?getSelTarg@Sob@@UBEPAVSelTarg@@XZ");
    todo("implement");
    SelTarg * __result = _sub_478A76(this);
    return __result;
}

_extern void _sub_47883A(Sob *const, Camera const *);
_inline void Sob::computeSelTarg(Camera const *) // 0x47883A
{
    mangled_assert("?computeSelTarg@Sob@@UAEXPBVCamera@@@Z");
    todo("implement");
    _sub_47883A(this, arg);
}

_extern MetaSelTarg *_sub_478979(Sob const *const);
_inline MetaSelTarg *Sob::getMetaSelTarg() const // 0x478979
{
    mangled_assert("?getMetaSelTarg@Sob@@UBEPAVMetaSelTarg@@XZ");
    todo("implement");
    MetaSelTarg * __result = _sub_478979(this);
    return __result;
}

_extern void _sub_652C82(Sob *const, float);
_inline void Sob::setDistanceToCamera(float) // 0x652C82
{
    mangled_assert("?setDistanceToCamera@Sob@@QAEXM@Z");
    todo("implement");
    _sub_652C82(this, arg);
}

_extern float _sub_441B93(Sob const *const);
_inline float Sob::getDistanceToCamera() const // 0x441B93
{
    mangled_assert("?getDistanceToCamera@Sob@@QBEMXZ");
    todo("implement");
    float __result = _sub_441B93(this);
    return __result;
}

_extern void _sub_6508DC(Sob *const, bool);
_inline void Sob::setInRenderList(bool) // 0x6508DC
{
    mangled_assert("?setInRenderList@Sob@@QAEX_N@Z");
    todo("implement");
    _sub_6508DC(this, arg);
}

_extern bool _sub_449B81(Sob const *const);
_inline bool Sob::isInRenderList() const // 0x449B81
{
    mangled_assert("?isInRenderList@Sob@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_449B81(this);
    return __result;
}

_extern void _sub_4BFE9F(Sob *const, unsigned __int32);
_inline void Sob::setLastRenderedFrame(unsigned __int32) // 0x4BFE9F
{
    mangled_assert("?setLastRenderedFrame@Sob@@QAEXI@Z");
    todo("implement");
    _sub_4BFE9F(this, arg);
}

_extern unsigned __int32 _sub_60A57B(Sob const *const);
_inline unsigned __int32 Sob::getLastRenderedFrame() const // 0x60A57B
{
    mangled_assert("?getLastRenderedFrame@Sob@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_60A57B(this);
    return __result;
}

_extern void _sub_4AA73D(Sob *const, float);
_inline void Sob::setCurrentNlips(float) // 0x4AA73D
{
    mangled_assert("?setCurrentNlips@Sob@@QAEXM@Z");
    todo("implement");
    _sub_4AA73D(this, arg);
}

_extern float _sub_441B8F(Sob const *const);
_inline float Sob::getCurrentNlips() const // 0x441B8F
{
    mangled_assert("?getCurrentNlips@Sob@@QBEMXZ");
    todo("implement");
    float __result = _sub_441B8F(this);
    return __result;
}

_extern float _sub_6315DE(Sob const *const);
_inline float Sob::getSelectionLimit() const // 0x6315DE
{
    mangled_assert("?getSelectionLimit@Sob@@QBEMXZ");
    todo("implement");
    float __result = _sub_6315DE(this);
    return __result;
}

_extern float _sub_4B954B(Sob const *const);
_inline float Sob::getPreciseATILimit() const // 0x4B954B
{
    mangled_assert("?getPreciseATILimit@Sob@@QBEMXZ");
    todo("implement");
    float __result = _sub_4B954B(this);
    return __result;
}

_extern float _sub_631605(Sob const *const);
_inline float Sob::getSelectionSizeMin() const // 0x631605
{
    mangled_assert("?getSelectionSizeMin@Sob@@QBEMXZ");
    todo("implement");
    float __result = _sub_631605(this);
    return __result;
}

_extern float _sub_6315F8(Sob const *const);
_inline float Sob::getSelectionSizeMax() const // 0x6315F8
{
    mangled_assert("?getSelectionSizeMax@Sob@@QBEMXZ");
    todo("implement");
    float __result = _sub_6315F8(this);
    return __result;
}

_extern TacticalIcon *_sub_5E4684(Sob const *const);
_inline TacticalIcon *Sob::getTacticalIcon() const // 0x5E4684
{
    mangled_assert("?getTacticalIcon@Sob@@QBEPAVTacticalIcon@@XZ");
    todo("implement");
    TacticalIcon * __result = _sub_5E4684(this);
    return __result;
}

_extern float _sub_47897C(Sob const *const);
_inline float Sob::getMinimumZoomFactor() const // 0x47897C
{
    mangled_assert("?getMinimumZoomFactor@Sob@@QBEMXZ");
    todo("implement");
    float __result = _sub_47897C(this);
    return __result;
}

_extern float _sub_6315EB(Sob const *const);
_inline float Sob::getSelectionPriority() const // 0x6315EB
{
    mangled_assert("?getSelectionPriority@Sob@@QBEMXZ");
    todo("implement");
    float __result = _sub_6315EB(this);
    return __result;
}

_extern vector3 const &_sub_4789A7(Sob const *const);
_inline vector3 const &Sob::getPosition() const // 0x4789A7
{
    mangled_assert("?getPosition@Sob@@UBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_4789A7(this);
    return __result;
}

_extern vector3 const _sub_478B60(Sob const *const);
_inline vector3 const Sob::getUp() const // 0x478B60
{
    mangled_assert("?getUp@Sob@@UBE?BVvector3@@XZ");
    todo("implement");
    vector3 const __result = _sub_478B60(this);
    return __result;
}

_extern matrix3 const &_sub_47892A(Sob const *const);
_inline matrix3 const &Sob::getCoordSys() const // 0x47892A
{
    mangled_assert("?getCoordSys@Sob@@UBEABVmatrix3@@XZ");
    todo("implement");
    matrix3 const & __result = _sub_47892A(this);
    return __result;
}

_extern quat const &_sub_478930(Sob const *const);
_inline quat const &Sob::getCoordSysQuat() const // 0x478930
{
    mangled_assert("?getCoordSysQuat@Sob@@UBEABVquat@@XZ");
    todo("implement");
    quat const & __result = _sub_478930(this);
    return __result;
}

_extern vector3 const &_sub_478B75(Sob const *const);
_inline vector3 const &Sob::getVelocity() const // 0x478B75
{
    mangled_assert("?getVelocity@Sob@@UBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_478B75(this);
    return __result;
}

_extern vector3 const &_sub_47891D(Sob const *const);
_inline vector3 const &Sob::getAngularVelocity() const // 0x47891D
{
    mangled_assert("?getAngularVelocity@Sob@@UBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_47891D(this);
    return __result;
}

_extern float _sub_4DF354(Sob const *const);
_inline float Sob::getVelocitySqr() const // 0x4DF354
{
    mangled_assert("?getVelocitySqr@Sob@@QBEMXZ");
    todo("implement");
    float __result = _sub_4DF354(this);
    return __result;
}

_extern void _sub_479509(Sob *const, vector3 const &);
_inline void Sob::setPosition(vector3 const &) // 0x479509
{
    mangled_assert("?setPosition@Sob@@UAEXABVvector3@@@Z");
    todo("implement");
    _sub_479509(this, arg);
}

_extern void _sub_479392(Sob *const, quat const &);
_inline void Sob::setCoordSys(quat const &) // 0x479392
{
    mangled_assert("?setCoordSys@Sob@@UAEXABVquat@@@Z");
    todo("implement");
    _sub_479392(this, arg);
}

_extern void _sub_47938F(Sob *const, matrix3 const &);
_inline void Sob::setCoordSys(matrix3 const &) // 0x47938F
{
    mangled_assert("?setCoordSys@Sob@@UAEXABVmatrix3@@@Z");
    todo("implement");
    _sub_47938F(this, arg);
}

_extern void _sub_479597(Sob *const, vector3 const &, matrix3 const &);
_inline void Sob::setTransform(vector3 const &, matrix3 const &) // 0x479597
{
    mangled_assert("?setTransform@Sob@@UAEXABVvector3@@ABVmatrix3@@@Z");
    todo("implement");
    _sub_479597(this, arg, arg);
}

_extern void _sub_47959A(Sob *const, vector3 const &);
_inline void Sob::setVelocity(vector3 const &) // 0x47959A
{
    mangled_assert("?setVelocity@Sob@@UAEXABVvector3@@@Z");
    todo("implement");
    _sub_47959A(this, arg);
}

_extern void _sub_47938C(Sob *const, vector3 const &);
_inline void Sob::setAngularVelocity(vector3 const &) // 0x47938C
{
    mangled_assert("?setAngularVelocity@Sob@@UAEXABVvector3@@@Z");
    todo("implement");
    _sub_47938C(this, arg);
}

_extern void _sub_47950C(Sob *const, float);
_inline void Sob::setRandomAngularVelocity(float) // 0x47950C
{
    mangled_assert("?setRandomAngularVelocity@Sob@@UAEXM@Z");
    todo("implement");
    _sub_47950C(this, arg);
}

_extern vector3 const &_sub_47899D(Sob const *const);
_inline vector3 const &Sob::getOldPosition() const // 0x47899D
{
    mangled_assert("?getOldPosition@Sob@@UBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_47899D(this);
    return __result;
}

_extern quat const &_sub_478998(Sob const *const);
_inline quat const &Sob::getOldCoordSysQuat() const // 0x478998
{
    mangled_assert("?getOldCoordSysQuat@Sob@@UBEABVquat@@XZ");
    todo("implement");
    quat const & __result = _sub_478998(this);
    return __result;
}

_extern vector3 const &_sub_4789A2(Sob const *const);
_inline vector3 const &Sob::getOldVelocity() const // 0x4789A2
{
    mangled_assert("?getOldVelocity@Sob@@UBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_4789A2(this);
    return __result;
}

_extern vector3 const &_sub_478993(Sob const *const);
_inline vector3 const &Sob::getOldAngularVelocity() const // 0x478993
{
    mangled_assert("?getOldAngularVelocity@Sob@@UBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_478993(this);
    return __result;
}

_extern bool _sub_478D91(Sob const *const);
_inline bool Sob::isMoving() const // 0x478D91
{
    mangled_assert("?isMoving@Sob@@UBE_NXZ");
    todo("implement");
    bool __result = _sub_478D91(this);
    return __result;
}

_extern bool _sub_478D94(Sob const *const);
_inline bool Sob::isRotating() const // 0x478D94
{
    mangled_assert("?isRotating@Sob@@UBE_NXZ");
    todo("implement");
    bool __result = _sub_478D94(this);
    return __result;
}

_extern bool _sub_449749(Sob const *const);
_inline bool Sob::getNewborn() const // 0x449749
{
    mangled_assert("?getNewborn@Sob@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_449749(this);
    return __result;
}

_extern bool _sub_44612F(Sob const *const);
_inline bool Sob::getZombie() const // 0x44612F
{
    mangled_assert("?getZombie@Sob@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_44612F(this);
    return __result;
}

_extern bool _sub_456E74(Sob const *const);
_inline bool Sob::isDead() const // 0x456E74
{
    mangled_assert("?isDead@Sob@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_456E74(this);
    return __result;
}

_extern bool _sub_441E54(Sob const *const);
_inline bool Sob::isHidden() const // 0x441E54
{
    mangled_assert("?isHidden@Sob@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_441E54(this);
    return __result;
}

_extern bool _sub_48817E(Sob const *const);
_inline bool Sob::isInHyperspace() const // 0x48817E
{
    mangled_assert("?isInHyperspace@Sob@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_48817E(this);
    return __result;
}

_extern bool _sub_478D64(Sob const *const);
_inline bool Sob::isInvincible() const // 0x478D64
{
    mangled_assert("?isInvincible@Sob@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_478D64(this);
    return __result;
}

_extern bool _sub_4B9AB1(Sob const *const);
_inline bool Sob::isNISShip() const // 0x4B9AB1
{
    mangled_assert("?isNISShip@Sob@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_4B9AB1(this);
    return __result;
}

_extern bool _sub_48818B(Sob const *const);
_inline bool Sob::isSleeping() const // 0x48818B
{
    mangled_assert("?isSleeping@Sob@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_48818B(this);
    return __result;
}

_extern bool _sub_478D44(Sob *const);
_inline bool Sob::isDeterministic() // 0x478D44
{
    mangled_assert("?isDeterministic@Sob@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_478D44(this);
    return __result;
}

_extern char const *_sub_479386(Sob *const);
_inline char const *Sob::saveToken() // 0x479386
{
    mangled_assert("?saveToken@Sob@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_479386(this);
    return __result;
}

_extern unsigned __int32 const &_sub_6159A5(Sob *const);
_inline unsigned __int32 const &Sob::getLocalFlags() // 0x6159A5
{
    mangled_assert("?getLocalFlags@Sob@@QAEABIXZ");
    todo("implement");
    unsigned __int32 const & __result = _sub_6159A5(this);
    return __result;
}

_extern SobStatic const *_sub_441C85(Sob const *const);
_inline SobStatic const *Sob::getStatic() const // 0x441C85
{
    mangled_assert("?getStatic@Sob@@QBEPBVSobStatic@@XZ");
    todo("implement");
    SobStatic const * __result = _sub_441C85(this);
    return __result;
}

_extern SobType _sub_450964(Sob const *const);
_inline SobType Sob::getSobType() const // 0x450964
{
    mangled_assert("?getSobType@Sob@@QBE?AW4SobType@@XZ");
    todo("implement");
    SobType __result = _sub_450964(this);
    return __result;
}

_extern Collision::AABB const &_sub_477BED(Sob const *const);
_inline Collision::AABB const &Sob::GetAABB() const // 0x477BED
{
    mangled_assert("?GetAABB@Sob@@QBEABVAABB@Collision@@XZ");
    todo("implement");
    Collision::AABB const & __result = _sub_477BED(this);
    return __result;
}

_extern Collision::OBB const &_sub_48A69C(Sob const *const);
_inline Collision::OBB const &Sob::GetOBB() const // 0x48A69C
{
    mangled_assert("?GetOBB@Sob@@QBEABVOBB@Collision@@XZ");
    todo("implement");
    Collision::OBB const & __result = _sub_48A69C(this);
    return __result;
}

_extern Collision::Sphere const &_sub_458529(Sob const *const);
_inline Collision::Sphere const &Sob::GetBoundingSphere() const // 0x458529
{
    mangled_assert("?GetBoundingSphere@Sob@@QBEABVSphere@Collision@@XZ");
    todo("implement");
    Collision::Sphere const & __result = _sub_458529(this);
    return __result;
}

_extern void _sub_4A9C80(Sob *const, vector3 const &, float);
_inline void Sob::SetBoundingSphere(vector3 const &, float) // 0x4A9C80
{
    mangled_assert("?SetBoundingSphere@Sob@@QAEXABVvector3@@M@Z");
    todo("implement");
    _sub_4A9C80(this, arg, arg);
}

_extern void _sub_4C0BA0(Sob *const, float);
_inline void Sob::SetBoundingSphereRadius(float) // 0x4C0BA0
{
    mangled_assert("?SetBoundingSphereRadius@Sob@@QAEXM@Z");
    todo("implement");
    _sub_4C0BA0(this, arg);
}

_extern Collision::Capsule const &_sub_64D55D(Sob const *const);
_inline Collision::Capsule const &Sob::GetAvoidanceCapsule() const // 0x64D55D
{
    mangled_assert("?GetAvoidanceCapsule@Sob@@QBEABVCapsule@Collision@@XZ");
    todo("implement");
    Collision::Capsule const & __result = _sub_64D55D(this);
    return __result;
}

_extern SobVis *_sub_45A88E(Sob *const);
_inline SobVis *Sob::getSobVis() // 0x45A88E
{
    mangled_assert("?getSobVis@Sob@@QAEPAVSobVis@@XZ");
    todo("implement");
    SobVis * __result = _sub_45A88E(this);
    return __result;
}

_extern SobVis const *_sub_48CCD0(Sob const *const);
_inline SobVis const *Sob::getSobVis() const // 0x48CCD0
{
    mangled_assert("?getSobVis@Sob@@QBEPBVSobVis@@XZ");
    todo("implement");
    SobVis const * __result = _sub_48CCD0(this);
    return __result;
}

_extern void _sub_62E9A5(Sob *const, Selection *);
_inline void Sob::RegisterObserver(Selection *) // 0x62E9A5
{
    mangled_assert("?RegisterObserver@Sob@@QAEXPAVSelection@@@Z");
    todo("implement");
    _sub_62E9A5(this, arg);
}

/* ---------- private code */

#endif // __SOB_H__
#endif
