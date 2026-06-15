#if 0
#ifndef __HIERARCHYSTATIC_H__
#define __HIERARCHYSTATIC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum HierarchyStatic_RenderMask
{
    HierarchyStatic_RenderNonGoblins = 1, // 0x0001
    HierarchyStatic_RenderGoblins = 2, // 0x0002
    HierarchyStatic_RenderAll = 3, // 0x0003
};

/* ---------- definitions */

class HierarchyJoint
{
public:
    HierarchyJoint(HierarchyJoint &); /* compiler_generated() */
    HierarchyJoint();
    ~HierarchyJoint();
    __int32 walkToMirror(AnimJointHold *, JointAnimStack *) const;
    void attachChild(HierarchyJoint *);
    void attachRenderableIndex(__int32);
    void attachGoblinIndex(__int32);
    void updateTransform(vector3 const &, matrix3 const &);
    _inline char const *getName() const;
    __int32 getNumChildren() const;
    HierarchyJoint *getChild(__int32);
    _inline vector3 const &getOrientationEuler() const;
    _inline matrix3 const &getOrientation() const;
    _inline vector3 const &getTranslation() const;
    _inline matrix4 const &getConcatCoordSys() const;
    void getConcatTranslation(vector3 *) const;
    _inline HierarchyJoint const *getMother() const;
    HierarchyJoint const *getSister() const;
    HierarchyJoint const *getDaughter() const;
    _inline Collision::OBB const &GetOBB() const;
    _inline Collision::Mesh const *GetCollisionMesh() const;
    _inline void SetOBB(Collision::OBB const &);
    _inline void SetCollisionMesh(std::auto_ptr<Collision::Mesh>);
    _inline void addDecalRefMesh(std::auto_ptr<DecalRefMesh>);
    _inline std::vector<DecalRefMesh *,std::allocator<DecalRefMesh *> > const &getDecalRefMeshes() const;
    void render(Camera const *, matrix4 const &, matrix4 const &, MeshRenderProxy &, MeshInstance const *, unsigned __int32, float, float, vector4 const &, __int32) const;
    void releaseDecalRefMeshes();
private:
    HierarchyJoint *getJoint(char const *);
    void renderSubHierarchy(Camera const *, matrix4 const &, MeshRenderProxy &, MeshInstance const *, unsigned __int32, float const, float const, vector4 const &, __int32) const;
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x0
    HierarchyStatic *m_owner; // 0x18
    vector3 m_orientationEuler; // 0x1C
    matrix3 m_orientation; // 0x28
    vector3 m_translation; // 0x4C
    matrix4 m_coordSys; // 0x58
    std::vector<int,std::allocator<int> > m_renderableIndex; // 0x98
    std::vector<int,std::allocator<int> > m_goblinIndex; // 0xA4
    HierarchyJoint *m_mother; // 0xB0
    HierarchyJoint *m_daughter; // 0xB4
    HierarchyJoint *m_sister; // 0xB8
    Collision::OBB m_collisionOBB; // 0xBC
    std::auto_ptr<Collision::Mesh> m_collisionMesh; // 0xF8
    std::vector<DecalRefMesh *,std::allocator<DecalRefMesh *> > m_DecalRefMeshes; // 0xFC
public:
    HierarchyJoint &operator=(HierarchyJoint &); /* compiler_generated() */
};
static_assert(sizeof(HierarchyJoint) == 264, "Invalid HierarchyJoint size");

class HierarchyStatic
{
public:
    HierarchyStatic(HierarchyStatic &); /* compiler_generated() */
    HierarchyStatic();
    bool import(IFFChunk *);
    HierarchyJoint *createChild(char const *, char const *, HierarchyTransform const &);
    bool setParentMesh(ParentMesh *);
    bool attachRenderableIndexToParent(__int32, char const *);
    bool attachGoblinIndexToParent(__int32, char const *);
    _inline HierarchyJoint const *getJoint(unsigned __int32) const;
    HierarchyJoint const *getJoint(char const *) const;
    HierarchyJoint *getJoint(char const *);
    bool getJointOrientation(char const *, matrix3 &) const;
    bool getJointPosition(char const *, vector3 &) const;
    _inline HierarchyJoint const *getRoot() const;
    _inline HierarchyJoint *getRoot();
    _inline unsigned __int32 getNJoints() const;
    ParentMesh *getParentMesh();
    void render(Camera const *, matrix4 const &, MeshRenderProxy &, MeshInstance const *, unsigned __int32 const, float const, float const, vector4 const &, __int32) const;
    void releaseDecalRefMeshes();
private:
    bool attachChildToParent(HierarchyJoint *, char const *);
    std::auto_ptr<HierarchyJoint> m_root; // 0x0
    std::vector<HierarchyJoint *,std::allocator<HierarchyJoint *> > m_joints; // 0x4
    ParentMesh *m_parentMesh; // 0x10
public:
    _inline ~HierarchyStatic(); /* compiler_generated() */
    HierarchyStatic &operator=(HierarchyStatic &); /* compiler_generated() */
};
static_assert(sizeof(HierarchyStatic) == 20, "Invalid HierarchyStatic size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline char const *HierarchyJoint::getName() const // 0x4AA22C
{
    mangled_assert("?getName@HierarchyJoint@@QBEPBDXZ");
    todo("implement");
}

_inline vector3 const &HierarchyJoint::getOrientationEuler() const // 0x607DD1
{
    mangled_assert("?getOrientationEuler@HierarchyJoint@@QBEABVvector3@@XZ");
    todo("implement");
}

_inline matrix3 const &HierarchyJoint::getOrientation() const // 0x607DCD
{
    mangled_assert("?getOrientation@HierarchyJoint@@QBEABVmatrix3@@XZ");
    todo("implement");
}

_inline vector3 const &HierarchyJoint::getTranslation() const // 0x607DE0
{
    mangled_assert("?getTranslation@HierarchyJoint@@QBEABVvector3@@XZ");
    todo("implement");
}

_inline matrix4 const &HierarchyJoint::getConcatCoordSys() const // 0x5D46EC
{
    mangled_assert("?getConcatCoordSys@HierarchyJoint@@QBEABVmatrix4@@XZ");
    todo("implement");
}

_inline HierarchyJoint const *HierarchyJoint::getMother() const // 0x5D3735
{
    mangled_assert("?getMother@HierarchyJoint@@QBEPBV1@XZ");
    todo("implement");
}

_inline Collision::OBB const &HierarchyJoint::GetOBB() const // 0x47CA6D
{
    mangled_assert("?GetOBB@HierarchyJoint@@QBEABVOBB@Collision@@XZ");
    todo("implement");
}

_inline Collision::Mesh const *HierarchyJoint::GetCollisionMesh() const // 0x520D31
{
    mangled_assert("?GetCollisionMesh@HierarchyJoint@@QBEPBVMesh@Collision@@XZ");
    todo("implement");
}

_inline void HierarchyJoint::SetOBB(Collision::OBB const &) // 0x47D897
{
    mangled_assert("?SetOBB@HierarchyJoint@@QAEXABVOBB@Collision@@@Z");
    todo("implement");
}

_inline void HierarchyJoint::SetCollisionMesh(std::auto_ptr<Collision::Mesh>) // 0x47D867
{
    mangled_assert("?SetCollisionMesh@HierarchyJoint@@QAEXV?$auto_ptr@VMesh@Collision@@@std@@@Z");
    todo("implement");
}

_inline void HierarchyJoint::addDecalRefMesh(std::auto_ptr<DecalRefMesh>) // 0x47E47E
{
    mangled_assert("?addDecalRefMesh@HierarchyJoint@@QAEXV?$auto_ptr@VDecalRefMesh@@@std@@@Z");
    todo("implement");
}

_inline std::vector<DecalRefMesh *,std::allocator<DecalRefMesh *> > const &HierarchyJoint::getDecalRefMeshes() const // 0x521B09
{
    mangled_assert("?getDecalRefMeshes@HierarchyJoint@@QBEABV?$vector@PAVDecalRefMesh@@V?$allocator@PAVDecalRefMesh@@@std@@@std@@XZ");
    todo("implement");
}

_inline HierarchyJoint const *HierarchyStatic::getJoint(unsigned __int32) const // 0x517950
{
    mangled_assert("?getJoint@HierarchyStatic@@QBEPBVHierarchyJoint@@I@Z");
    todo("implement");
}

_inline HierarchyJoint *HierarchyStatic::getRoot() // 0x47EDC7
{
    mangled_assert("?getRoot@HierarchyStatic@@QAEPAVHierarchyJoint@@XZ");
    todo("implement");
}

_inline HierarchyJoint const *HierarchyStatic::getRoot() const // 0x4B2F9E
{
    mangled_assert("?getRoot@HierarchyStatic@@QBEPBVHierarchyJoint@@XZ");
    todo("implement");
}

_inline unsigned __int32 HierarchyStatic::getNJoints() const // 0x517A1A
{
    mangled_assert("?getNJoints@HierarchyStatic@@QBEIXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __HIERARCHYSTATIC_H__
#endif
