#if 0
#ifndef __HIERARCHYDYNAMIC_H__
#define __HIERARCHYDYNAMIC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class JointAnimStack
{
public:
    typedef std::vector<MeshAnimJoint *,std::allocator<MeshAnimJoint *> > JointList;
    _inline JointAnimStack(JointAnimStack const &); /* compiler_generated() */
    JointAnimStack();
    ~JointAnimStack();
    bool push(MeshAnimJoint *);
    bool pop(MeshAnimator *);
    _inline unsigned __int32 getNrAnimators() const;
    _inline std::vector<MeshAnimJoint *,std::allocator<MeshAnimJoint *> > &getJointList();
    _inline std::vector<MeshAnimJoint *,std::allocator<MeshAnimJoint *> > const &getJointList() const;
    _inline unsigned char getPop() const;
    _inline void shouldPop(unsigned char);
    _inline void setStaticJoint(HierarchyJoint const *);
    _inline void setCoordSys(matrix4 const &);
    _inline MeshAnimJoint const *top() const;
    _inline matrix4 const &getCoordSys() const;
    Collision::OBB const &GetOBB() const;
    _inline Collision::Mesh const *GetCollisionMesh() const;
    _inline HierarchyJoint const *getStaticJoint();
    HierarchyJoint const *getStaticJoint() const;
    _inline void setVisible(bool);
    _inline bool getVisible() const;
    _inline void setHasMesh(bool);
    _inline bool getHasMesh() const;
    _inline void setRecentChange(bool);
    _inline bool getRecentChange() const;
    bool DetectCollision(Collision::Segment const &, Collision::Point &) const;
    bool DetectCollisions(Collision::Segment const &, Collision::PointPair &) const;
private:
    HierarchyJoint const *m_staticJoint; // 0x0
    matrix4 m_lastCoordSys; // 0x4
    std::vector<MeshAnimJoint *,std::allocator<MeshAnimJoint *> > m_joints; // 0x44
    unsigned char m_nPops; // 0x50
    bool m_bVisible; // 0x51
    bool m_hasMesh; // 0x52
    bool m_recentChange; // 0x53
public:
    _inline JointAnimStack &operator=(JointAnimStack const &); /* compiler_generated() */
};
static_assert(sizeof(JointAnimStack) == 84, "Invalid JointAnimStack size");

class HierarchyDynamic
{
public:
    HierarchyDynamic(HierarchyDynamic const &); /* compiler_generated() */
    HierarchyDynamic();
    ~HierarchyDynamic();
    _inline HierarchyStatic const *getStaticHierarchy() const;
    JointAnimStack *findStackByStatic(HierarchyJoint const *);
    JointAnimStack const *findStackByStatic(HierarchyJoint const *) const;
    void mirrorStatic(HierarchyStatic const *);
    void updateAnimators(float);
    bool addAnimator(MeshAnimator *);
    bool removeAnimator(MeshAnimator *);
    bool pushAnimJointByName(MeshAnimJoint *, char const *);
    bool pushAnimJoint(MeshAnimJoint *, HierarchyJoint *);
    void setJointVisible(HierarchyJoint const *, bool);
    void updateJointTxfm(bool);
    void render(Camera const *, matrix4 const &, MeshRenderProxy &, MeshInstance const *, unsigned __int32 const, float const, float const, vector4 const &, __int32);
    bool DetectCollision(matrix3 const &, vector3 const &, Collision::Segment const &, Collision::Point &) const;
    bool DetectCollisions(matrix3 const &, vector3 const &, Collision::Segment const &, Collision::PointPair &) const;
    typedef void (*WalkCB)(JointAnimStack const *, void *);
    void walk(void (*)(JointAnimStack const *, void *), void *) const;
    bool getConcatenatedDeterministicMatrix(HierarchyJoint const *, matrix4 &) const;
    typedef std::vector<MeshAnimator *,std::allocator<MeshAnimator *> > AnimatorList;
    typedef std::vector<JointAnimStack,std::allocator<JointAnimStack> > JointStackList;
private:
    HierarchyStatic const *m_staticHierarchy; // 0x0
    unsigned char *m_storage; // 0x4
    std::vector<MeshAnimator *,std::allocator<MeshAnimator *> > m_animators; // 0x8
    std::vector<JointAnimStack,std::allocator<JointAnimStack> > m_dynamicJoints; // 0x14
    bool m_bUpdatingAnimators; // 0x20
public:
    HierarchyDynamic &operator=(HierarchyDynamic const &); /* compiler_generated() */
};
static_assert(sizeof(HierarchyDynamic) == 36, "Invalid HierarchyDynamic size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern unsigned __int32 _sub_5D373C(JointAnimStack const *const);
_inline unsigned __int32 JointAnimStack::getNrAnimators() const // 0x5D373C
{
    mangled_assert("?getNrAnimators@JointAnimStack@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_5D373C(this);
    return __result;
}

_extern std::vector<MeshAnimJoint *,std::allocator<MeshAnimJoint *> > const &_sub_5D3731(JointAnimStack const *const);
_inline std::vector<MeshAnimJoint *,std::allocator<MeshAnimJoint *> > const &JointAnimStack::getJointList() const // 0x5D3731
{
    mangled_assert("?getJointList@JointAnimStack@@QBEABV?$vector@PAVMeshAnimJoint@@V?$allocator@PAVMeshAnimJoint@@@std@@@std@@XZ");
    todo("implement");
    std::vector<MeshAnimJoint *,std::allocator<MeshAnimJoint *> > const & __result = _sub_5D3731(this);
    return __result;
}

_extern std::vector<MeshAnimJoint *,std::allocator<MeshAnimJoint *> > &_sub_5D372D(JointAnimStack *const);
_inline std::vector<MeshAnimJoint *,std::allocator<MeshAnimJoint *> > &JointAnimStack::getJointList() // 0x5D372D
{
    mangled_assert("?getJointList@JointAnimStack@@QAEAAV?$vector@PAVMeshAnimJoint@@V?$allocator@PAVMeshAnimJoint@@@std@@@std@@XZ");
    todo("implement");
    std::vector<MeshAnimJoint *,std::allocator<MeshAnimJoint *> > & __result = _sub_5D372D(this);
    return __result;
}

_extern unsigned char _sub_5D374A(JointAnimStack const *const);
_inline unsigned char JointAnimStack::getPop() const // 0x5D374A
{
    mangled_assert("?getPop@JointAnimStack@@QBEEXZ");
    todo("implement");
    unsigned char __result = _sub_5D374A(this);
    return __result;
}

_extern void _sub_5D4D4D(JointAnimStack *const, unsigned char);
_inline void JointAnimStack::shouldPop(unsigned char) // 0x5D4D4D
{
    mangled_assert("?shouldPop@JointAnimStack@@QAEXE@Z");
    todo("implement");
    _sub_5D4D4D(this, arg);
}

_extern void _sub_5D4D44(JointAnimStack *const, HierarchyJoint const *);
_inline void JointAnimStack::setStaticJoint(HierarchyJoint const *) // 0x5D4D44
{
    mangled_assert("?setStaticJoint@JointAnimStack@@QAEXPBVHierarchyJoint@@@Z");
    todo("implement");
    _sub_5D4D44(this, arg);
}

_extern void _sub_5D3C5A(JointAnimStack *const, matrix4 const &);
_inline void JointAnimStack::setCoordSys(matrix4 const &) // 0x5D3C5A
{
    mangled_assert("?setCoordSys@JointAnimStack@@QAEXABVmatrix4@@@Z");
    todo("implement");
    _sub_5D3C5A(this, arg);
}

_extern MeshAnimJoint const *_sub_60871B(JointAnimStack const *const);
_inline MeshAnimJoint const *JointAnimStack::top() const // 0x60871B
{
    mangled_assert("?top@JointAnimStack@@QBEPBVMeshAnimJoint@@XZ");
    todo("implement");
    MeshAnimJoint const * __result = _sub_60871B(this);
    return __result;
}

_extern matrix4 const &_sub_4BF193(JointAnimStack const *const);
_inline matrix4 const &JointAnimStack::getCoordSys() const // 0x4BF193
{
    mangled_assert("?getCoordSys@JointAnimStack@@QBEABVmatrix4@@XZ");
    todo("implement");
    matrix4 const & __result = _sub_4BF193(this);
    return __result;
}

_extern Collision::Mesh const *_sub_61ECBD(JointAnimStack const *const);
_inline Collision::Mesh const *JointAnimStack::GetCollisionMesh() const // 0x61ECBD
{
    mangled_assert("?GetCollisionMesh@JointAnimStack@@QBEPBVMesh@Collision@@XZ");
    todo("implement");
    Collision::Mesh const * __result = _sub_61ECBD(this);
    return __result;
}

_extern HierarchyJoint const *_sub_521B77(JointAnimStack const *const);
_inline HierarchyJoint const *JointAnimStack::getStaticJoint() const // 0x521B77
{
    mangled_assert("?getStaticJoint@JointAnimStack@@QBEPBVHierarchyJoint@@XZ");
    todo("implement");
    HierarchyJoint const * __result = _sub_521B77(this);
    return __result;
}

_extern HierarchyJoint const *_sub_5D3752(JointAnimStack *const);
_inline HierarchyJoint const *JointAnimStack::getStaticJoint() // 0x5D3752
{
    mangled_assert("?getStaticJoint@JointAnimStack@@QAEPBVHierarchyJoint@@XZ");
    todo("implement");
    HierarchyJoint const * __result = _sub_5D3752(this);
    return __result;
}

_extern void _sub_5D3CC1(JointAnimStack *const, bool);
_inline void JointAnimStack::setVisible(bool) // 0x5D3CC1
{
    mangled_assert("?setVisible@JointAnimStack@@QAEX_N@Z");
    todo("implement");
    _sub_5D3CC1(this, arg);
}

_extern bool _sub_5D3755(JointAnimStack const *const);
_inline bool JointAnimStack::getVisible() const // 0x5D3755
{
    mangled_assert("?getVisible@JointAnimStack@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_5D3755(this);
    return __result;
}

_extern void _sub_5D4CBC(JointAnimStack *const, bool);
_inline void JointAnimStack::setHasMesh(bool) // 0x5D4CBC
{
    mangled_assert("?setHasMesh@JointAnimStack@@QAEX_N@Z");
    todo("implement");
    _sub_5D4CBC(this, arg);
}

_extern bool _sub_5D3729(JointAnimStack const *const);
_inline bool JointAnimStack::getHasMesh() const // 0x5D3729
{
    mangled_assert("?getHasMesh@JointAnimStack@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_5D3729(this);
    return __result;
}

_extern void _sub_5D3C90(JointAnimStack *const, bool);
_inline void JointAnimStack::setRecentChange(bool) // 0x5D3C90
{
    mangled_assert("?setRecentChange@JointAnimStack@@QAEX_N@Z");
    todo("implement");
    _sub_5D3C90(this, arg);
}

_extern bool _sub_5D374E(JointAnimStack const *const);
_inline bool JointAnimStack::getRecentChange() const // 0x5D374E
{
    mangled_assert("?getRecentChange@JointAnimStack@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_5D374E(this);
    return __result;
}

_extern HierarchyStatic const *_sub_518C20(HierarchyDynamic const *const);
_inline HierarchyStatic const *HierarchyDynamic::getStaticHierarchy() const // 0x518C20
{
    mangled_assert("?getStaticHierarchy@HierarchyDynamic@@QBEPBVHierarchyStatic@@XZ");
    todo("implement");
    HierarchyStatic const * __result = _sub_518C20(this);
    return __result;
}

/* ---------- private code */

#endif // __HIERARCHYDYNAMIC_H__
#endif
