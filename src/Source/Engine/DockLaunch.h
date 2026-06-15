#if 0
#ifndef __DOCKLAUNCH_H__
#define __DOCKLAUNCH_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum PathType
{
    PATH_Dock = 0,
    PATH_Launch,
    PATH_NumPathTypes,
};

/* ---------- definitions */

class DockPathPointStatic
{
protected:
    _inline DockPathPointStatic();
    DockPathPointStatic(vector3 const &, matrix3 const &, bool, float, float, bool, bool, char const *, unsigned __int32, char const *);
public:
    ~DockPathPointStatic();
    static DockPathPointStatic *create(vector3 const &position, matrix3 const &coordsys, bool useOrient, float tolerance, float maxSpeed, bool checkRotation, bool forceCloseBehaviour, char const *name, unsigned __int32 pointnr, char const *shipname);
    _inline vector3 const &getPosition();
    void setPosition(vector3 const &);
    _inline matrix3 const &getOrientation();
    void setOrientation(matrix3 const &);
    _inline bool getUseOrientation();
    void setUseOrientation(bool);
    _inline float getToleranceRadius();
    _inline float getToleranceRadiusSqr();
    void setToleranceRadius(float);
    _inline float getMaxSpeed();
    void setMaxSpeed(float);
    _inline bool getCheckRotation();
    void setCheckRotation(bool);
    _inline bool getForceCloseBehaviour();
    void setForceCloseBehaviour(bool);
    DockPathPointStatic *clone() const;
private:
    vector3 m_position; // 0x0
    matrix3 m_orientation; // 0xC
    bool m_useOrientation; // 0x30
    float m_toleranceRadius; // 0x34
    float m_toleranceRadiusSqr; // 0x38
    float m_maxSpeed; // 0x3C
    bool m_checkRotation; // 0x40
    bool m_forceCloseBehaviour; // 0x41
};
static_assert(sizeof(DockPathPointStatic) == 68, "Invalid DockPathPointStatic size");

class DockPathStatic
{
public:
    DockPathStatic(DockPathStatic const &); /* compiler_generated() */
protected:
    _inline DockPathStatic();
    DockPathStatic(PathType, bool, char const *, bool, HierarchyJoint const *);
public:
    ~DockPathStatic();
    vector3 getAnimationPosition(Ship *);
    bool isAppropriatePath(PathType, __int32);
    static DockPathStatic *create(PathType pathType, bool latch, char const *dockFamilies, bool useAnimation, HierarchyJoint const *animationLatchJoint);
    DockPathStatic *clone() const;
    DockPathStatic &operator=(DockPathStatic const &);
    std::vector<unsigned int,std::allocator<unsigned int> > m_linkedPaths; // 0x0
    char m_pathTypeString[50]; // 0xC
    PathType m_pathType; // 0x40
    bool isLatch; // 0x44
    bool m_useParentShipAnimation; // 0x45
    unsigned __int32 m_playerIsInControlIndex; // 0x48
    unsigned __int32 m_clipIndex; // 0x4C
    unsigned __int32 m_clearReservationIndex; // 0x50
    std::vector<DockPathPointStatic *,std::allocator<DockPathPointStatic *> > m_points; // 0x54
    std::vector<int,std::allocator<int> > m_familyList; // 0x60
    vector3 m_queueOffset; // 0x6C
    vector3 m_queueShipForward; // 0x78
    vector3 m_queueShipUp; // 0x84
    HierarchyJoint const *m_animationLatchJoint; // 0x90
};
static_assert(sizeof(DockPathStatic) == 148, "Invalid DockPathStatic size");

class DockPathStatic
{
public:
    DockPathStatic(DockPathStatic const &); /* compiler_generated() */
protected:
    _inline DockPathStatic();
    DockPathStatic(PathType, bool, char const *, bool, HierarchyJoint const *);
public:
    ~DockPathStatic();
    vector3 getAnimationPosition(Ship *);
    bool isAppropriatePath(PathType, __int32);
    static DockPathStatic *create(PathType pathType, bool latch, char const *dockFamilies, bool useAnimation, HierarchyJoint const *animationLatchJoint);
    DockPathStatic *clone() const;
    DockPathStatic &operator=(DockPathStatic const &);
    std::vector<unsigned int,std::allocator<unsigned int> > m_linkedPaths; // 0x0
    char m_pathTypeString[50]; // 0xC
    PathType m_pathType; // 0x40
    bool isLatch; // 0x44
    bool m_useParentShipAnimation; // 0x45
    unsigned __int32 m_playerIsInControlIndex; // 0x48
    unsigned __int32 m_clipIndex; // 0x4C
    unsigned __int32 m_clearReservationIndex; // 0x50
    std::vector<DockPathPointStatic *,std::allocator<DockPathPointStatic *> > m_points; // 0x54
    std::vector<int,std::allocator<int> > m_familyList; // 0x60
    vector3 m_queueOffset; // 0x6C
    vector3 m_queueShipForward; // 0x78
    vector3 m_queueShipUp; // 0x84
    HierarchyJoint const *m_animationLatchJoint; // 0x90
};
static_assert(sizeof(DockPathStatic) == 148, "Invalid DockPathStatic size");

class DockPathPoint :
    public SaveObject
{
public:
    DockPathPoint(DockPathPoint const &); /* compiler_generated() */
    DockPathPoint(SaveGameData *);
protected:
    DockPathPoint();
public:
    virtual ~DockPathPoint() override;
    static DockPathPoint *create();
    bool isFree();
    void busyPathPointWithShip(Ship *);
    Ship *getPathPointBusyingShip();
    void unBusyPathPoint();
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
protected:
    static SaveData const m_saveData[0];
    SobID m_busyingShip; // 0xC
public:
    DockPathPoint &operator=(DockPathPoint const &); /* compiler_generated() */
};
static_assert(sizeof(DockPathPoint) == 24, "Invalid DockPathPoint size");

class DockPath :
    public SaveObject
{
public:
    DockPath(DockPath const &); /* compiler_generated() */
    DockPath(SaveGameData *);
protected:
    DockPath(Ship *, DockPathStatic *);
public:
    virtual ~DockPath() override;
    static DockPath *create(Ship *owner, DockPathStatic *staticInfo);
    __int32 getDockPathSize();
    DockPathPoint *getDockPathPoint(unsigned __int32);
    _inline DockPathStatic const *getStaticInfo() const;
    void clearReservation();
    void reserve();
    bool isReserved() const;
    std::vector<DockPathPoint *,std::allocator<DockPathPoint *> > m_dockPathPoints; // 0xC
protected:
    DockQueue m_dockQueue; // 0x18
    bool m_reserved; // 0x2C
    Ship *m_owner; // 0x30
    DockPathStatic *m_staticInfo; // 0x34
public:
    _inline DockQueue &getQueue();
    _inline Ship const *getOwner() const;
protected:
    static SaveData const m_saveData[0];
public:
    void setStaticInfo(DockPathStatic *);
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    DockPath &operator=(DockPath const &); /* compiler_generated() */
};
static_assert(sizeof(DockPath) == 56, "Invalid DockPath size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline DockPathPointStatic::DockPathPointStatic() // 0x6A61A2
{
    mangled_assert("??0DockPathPointStatic@@IAE@XZ");
    todo("implement");
}

_inline vector3 const &DockPathPointStatic::getPosition() // 0x4955A2
{
    mangled_assert("?getPosition@DockPathPointStatic@@QAEABVvector3@@XZ");
    todo("implement");
}

_inline matrix3 const &DockPathPointStatic::getOrientation() // 0x4AE573
{
    mangled_assert("?getOrientation@DockPathPointStatic@@QAEABVmatrix3@@XZ");
    todo("implement");
}

_inline bool DockPathPointStatic::getUseOrientation() // 0x69A3B4
{
    mangled_assert("?getUseOrientation@DockPathPointStatic@@QAE_NXZ");
    todo("implement");
}

_inline float DockPathPointStatic::getToleranceRadius() // 0x5F238B
{
    mangled_assert("?getToleranceRadius@DockPathPointStatic@@QAEMXZ");
    todo("implement");
}

_inline float DockPathPointStatic::getToleranceRadiusSqr() // 0x69A3B0
{
    mangled_assert("?getToleranceRadiusSqr@DockPathPointStatic@@QAEMXZ");
    todo("implement");
}

_inline float DockPathPointStatic::getMaxSpeed() // 0x6A2939
{
    mangled_assert("?getMaxSpeed@DockPathPointStatic@@QAEMXZ");
    todo("implement");
}

_inline bool DockPathPointStatic::getCheckRotation() // 0x6B1261
{
    mangled_assert("?getCheckRotation@DockPathPointStatic@@QAE_NXZ");
    todo("implement");
}

_inline bool DockPathPointStatic::getForceCloseBehaviour() // 0x6B1265
{
    mangled_assert("?getForceCloseBehaviour@DockPathPointStatic@@QAE_NXZ");
    todo("implement");
}

_inline DockPathStatic::DockPathStatic() // 0x6A62DE
{
    mangled_assert("??0DockPathStatic@@IAE@XZ");
    todo("implement");
}

_inline bool DockPathPoint::isDeterministic() // 0x6A696B
{
    mangled_assert("?isDeterministic@DockPathPoint@@UAE_NXZ");
    todo("implement");
}

_inline char const *DockPathPoint::saveToken() // 0x6A6B6B
{
    mangled_assert("?saveToken@DockPathPoint@@UAEPBDXZ");
    todo("implement");
}

_inline DockPathStatic const *DockPath::getStaticInfo() const // 0x48CD18
{
    mangled_assert("?getStaticInfo@DockPath@@QBEPBVDockPathStatic@@XZ");
    todo("implement");
}

_inline DockQueue &DockPath::getQueue() // 0x4AE6AD
{
    mangled_assert("?getQueue@DockPath@@QAEAAVDockQueue@@XZ");
    todo("implement");
}

_inline Ship const *DockPath::getOwner() const // 0x49559E
{
    mangled_assert("?getOwner@DockPath@@QBEPBVShip@@XZ");
    todo("implement");
}

_inline bool DockPath::isDeterministic() // 0x6A6968
{
    mangled_assert("?isDeterministic@DockPath@@UAE_NXZ");
    todo("implement");
}

_inline char const *DockPath::saveToken() // 0x6A6B65
{
    mangled_assert("?saveToken@DockPath@@UAEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __DOCKLAUNCH_H__
#endif
