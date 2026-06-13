#if 0
#ifndef __GOBLINMESH_H__
#define __GOBLINMESH_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class GoblinRef
{
public:
    float m_radius; // 0x0
    __int32 m_numFaceIndices; // 0x4
};
static_assert(sizeof(GoblinRef) == 8, "Invalid GoblinRef size");

class GoblinGroup
{
public:
    GoblinGroup(GoblinGroup const &); /* compiler_generated() */
    _inline GoblinGroup();
    _inline ~GoblinGroup();
    std::vector<GoblinRef,std::allocator<GoblinRef> > m_goblinRefs; // 0x0
    VertexArray *m_va; // 0xC
    std::vector<int,std::allocator<int> > m_faceIndices; // 0x10
    GoblinGroup &operator=(GoblinGroup const &); /* compiler_generated() */
};
static_assert(sizeof(GoblinGroup) == 28, "Invalid GoblinGroup size");

class GoblinMesh :
    public SubMesh
{
public:
    GoblinMesh(GoblinMesh const &); /* compiler_generated() */
    GoblinMesh();
    virtual ~GoblinMesh() override;
    static GoblinMesh *create();
    void setBoundingSphere(vector3 const &, float);
    virtual void getBoundingSphere(float *, vector3 *) const override;
    virtual void setShaderList(std::vector<CompoundStateBlockInstance *,std::allocator<CompoundStateBlockInstance *> > *);
    virtual std::vector<CompoundStateBlockInstance *,std::allocator<CompoundStateBlockInstance *> > const &getShaderList() const;
    virtual void adjustDetail(float, Mesh::LockType) override;
    virtual void render(matrix4 const &, MeshInstance const *, Mesh::LockType, unsigned __int32 const, float const, float const);
    virtual void optimize() override;
    virtual void createDisplayLists() override;
    virtual _inline __int32 getNumPolys() const override;
    virtual _inline void setMinLOD(float) override;
    virtual _inline void setDetailLevel(float) override;
    GoblinGroup *findMaterial(__int32);
    GoblinGroup *newMaterial(__int32);
    typedef std::map<int,GoblinGroup *,std::less<int>,std::allocator<std::pair<int const ,GoblinGroup *> > > MaterialMap;
private:
    std::map<int,GoblinGroup *,std::less<int>,std::allocator<std::pair<int const ,GoblinGroup *> > > m_materialMap; // 0x38
    vector3 m_centre; // 0x40
    float m_radius; // 0x4C
    std::vector<CompoundStateBlockInstance *,std::allocator<CompoundStateBlockInstance *> > *m_shader; // 0x50
public:
    GoblinMesh &operator=(GoblinMesh const &); /* compiler_generated() */
};
static_assert(sizeof(GoblinMesh) == 84, "Invalid GoblinMesh size");

struct goblinsort<GoblinInfo *> :
    public std::binary_function<GoblinInfo *,GoblinInfo *,bool>
{
    bool operator()(GoblinInfo *const &, GoblinInfo *const &) const;
};
static_assert(sizeof(goblinsort<GoblinInfo *>) == 1, "Invalid goblinsort<GoblinInfo *> size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern _sub_10059470(GoblinGroup *const);
_inline GoblinGroup::GoblinGroup() // 0x10059470
{
    mangled_assert("??0GoblinGroup@@QAE@XZ");
    todo("implement");
    _sub_10059470(this);
}

_extern void _sub_100598E0(GoblinGroup *const);
_inline GoblinGroup::~GoblinGroup() // 0x100598E0
{
    mangled_assert("??1GoblinGroup@@QAE@XZ");
    todo("implement");
    _sub_100598E0(this);
}

_extern __int32 _sub_1005DD30(GoblinMesh const *const);
_inline __int32 GoblinMesh::getNumPolys() const // 0x1005DD30
{
    mangled_assert("?getNumPolys@GoblinMesh@@UBEHXZ");
    todo("implement");
    __int32 __result = _sub_1005DD30(this);
    return __result;
}

_extern void _sub_1005F370(GoblinMesh *const, float);
_inline void GoblinMesh::setMinLOD(float) // 0x1005F370
{
    mangled_assert("?setMinLOD@GoblinMesh@@UAEXM@Z");
    todo("implement");
    _sub_1005F370(this, arg);
}

_extern void _sub_1005F360(GoblinMesh *const, float);
_inline void GoblinMesh::setDetailLevel(float) // 0x1005F360
{
    mangled_assert("?setDetailLevel@GoblinMesh@@UAEXM@Z");
    todo("implement");
    _sub_1005F360(this, arg);
}

_extern bool _sub_1005A5F0(goblinsort<GoblinInfo *> const *const, GoblinInfo *const &, GoblinInfo *const &);
_inline bool goblinsort<GoblinInfo *>::operator()(GoblinInfo *const &, GoblinInfo *const &) const // 0x1005A5F0
{
    mangled_assert("??R?$goblinsort@PAVGoblinInfo@@@@QBE_NABQAVGoblinInfo@@0@Z");
    todo("implement");
    bool __result = _sub_1005A5F0(this, arg, arg);
    return __result;
}

/* ---------- private code */

#endif // __GOBLINMESH_H__
#endif
