#if 0
#ifndef __MULTIMESH_H__
#define __MULTIMESH_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class MultiMesh :
    public SubMesh
{
public:
    MultiMesh(MultiMesh const &); /* compiler_generated() */
    MultiMesh();
    virtual ~MultiMesh() override;
    static MultiMesh *create();
    virtual void getBoundingSphere(float *, vector3 *) const override;
    virtual void setShaderList(StateBlock_Type, std::vector<CompoundStateBlockInstance *,std::allocator<CompoundStateBlockInstance *> > *) override;
    virtual std::vector<CompoundStateBlockInstance *,std::allocator<CompoundStateBlockInstance *> > const &getShaderList(StateBlock_Type) const override;
    virtual void adjustDetail(float, Mesh::LockType) override;
    virtual void render(MeshInstance const *, Mesh::LockType, unsigned __int32 const, float const, vector4 const &) override;
    virtual void optimize() override;
    virtual void createDisplayLists() override;
    void setNumUVSets(__int32);
    __int32 getNumUVSets() const;
    virtual __int32 getNumPolys() const override;
    virtual void setMinLOD(float) override;
    virtual void setDetailLevel(float) override;
    BasicMesh *GetMeshForLoading(unsigned __int32 const);
    BasicMesh const *GetMesh(unsigned __int32 const) const;
    void createLOD(unsigned __int32 const);
    unsigned __int32 const getNumLOD() const;
    unsigned __int32 const getWorkingLOD() const;
    unsigned __int32 setWorkingLOD(unsigned __int32 const);
    __int32 load(IFF *, IFFChunk *, void *, void *);
private:
    __int32 load1400(IFF *, IFFChunk *, void *, void *);
    static __int32 handleBMSH(IFF *, IFFChunk *, void *, void *);
    __int32 m_currentLOD; // 0x38
    std::vector<BasicMesh *,std::allocator<BasicMesh *> > m_meshes; // 0x3C
public:
    MultiMesh &operator=(MultiMesh const &); /* compiler_generated() */
};
static_assert(sizeof(MultiMesh) == 72, "Invalid MultiMesh size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MULTIMESH_H__
/* combined */
#ifndef __MULTIMESH_H__
#define __MULTIMESH_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class MultiMesh :
    public SubMesh
{
public:
    _inline MultiMesh(MultiMesh const &); /* compiler_generated() */
    MultiMesh();
    virtual ~MultiMesh() override;
    static MultiMesh *create();
    virtual _inline void getBoundingSphere(float *, vector3 *) const override;
    virtual void setShaderList(StateBlock_Type, std::vector<CompoundStateBlockInstance *,std::allocator<CompoundStateBlockInstance *> > *) override;
    virtual _inline std::vector<CompoundStateBlockInstance *,std::allocator<CompoundStateBlockInstance *> > const &getShaderList(StateBlock_Type) const override;
    virtual _inline void adjustDetail(float, Mesh::LockType) override;
    virtual void render(MeshInstance const *, Mesh::LockType, unsigned __int32 const, float const, vector4 const &) override;
    virtual void optimize() override;
    virtual void createDisplayLists() override;
    _inline void setNumUVSets(__int32);
    _inline __int32 getNumUVSets() const;
    virtual _inline __int32 getNumPolys() const override;
    virtual _inline void setMinLOD(float) override;
    virtual _inline void setDetailLevel(float) override;
    _inline BasicMesh *GetMeshForLoading(unsigned __int32 const);
    _inline BasicMesh const *GetMesh(unsigned __int32 const) const;
    void createLOD(unsigned __int32 const);
    _inline unsigned __int32 const getNumLOD() const;
    _inline unsigned __int32 const getWorkingLOD() const;
    unsigned __int32 setWorkingLOD(unsigned __int32 const);
    __int32 load(IFF *, IFFChunk *, void *, void *);
private:
    __int32 load1400(IFF *, IFFChunk *, void *, void *);
    static __int32 handleBMSH(IFF *iff, IFFChunk *chunk, void *user0, void *user1);
    __int32 m_currentLOD; // 0x38
    std::vector<BasicMesh *,std::allocator<BasicMesh *> > m_meshes; // 0x3C
public:
    _inline MultiMesh &operator=(MultiMesh const &); /* compiler_generated() */
};
static_assert(sizeof(MultiMesh) == 72, "Invalid MultiMesh size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline void MultiMesh::getBoundingSphere(float *, vector3 *) const // 0x100322E0
{
    mangled_assert("?getBoundingSphere@MultiMesh@@UBEXPAMPAVvector3@@@Z");
    todo("implement");
}

_inline std::vector<CompoundStateBlockInstance *,std::allocator<CompoundStateBlockInstance *> > const &MultiMesh::getShaderList(StateBlock_Type) const // 0x100323D0
{
    mangled_assert("?getShaderList@MultiMesh@@UBEABV?$vector@PAVCompoundStateBlockInstance@@V?$allocator@PAVCompoundStateBlockInstance@@@std@@@std@@W4StateBlock_Type@@@Z");
    todo("implement");
}

_inline void MultiMesh::adjustDetail(float, Mesh::LockType) // 0x100312C0
{
    mangled_assert("?adjustDetail@MultiMesh@@UAEXMW4LockType@Mesh@@@Z");
    todo("implement");
}

_inline void MultiMesh::setNumUVSets(__int32) // 0x100328C0
{
    mangled_assert("?setNumUVSets@MultiMesh@@QAEXH@Z");
    todo("implement");
}

_inline __int32 MultiMesh::getNumUVSets() const // 0x100323B0
{
    mangled_assert("?getNumUVSets@MultiMesh@@QBEHXZ");
    todo("implement");
}

_inline __int32 MultiMesh::getNumPolys() const // 0x100323A0
{
    mangled_assert("?getNumPolys@MultiMesh@@UBEHXZ");
    todo("implement");
}

_inline void MultiMesh::setMinLOD(float) // 0x100328A0
{
    mangled_assert("?setMinLOD@MultiMesh@@UAEXM@Z");
    todo("implement");
}

_inline void MultiMesh::setDetailLevel(float) // 0x10032860
{
    mangled_assert("?setDetailLevel@MultiMesh@@UAEXM@Z");
    todo("implement");
}

_inline BasicMesh *MultiMesh::GetMeshForLoading(unsigned __int32 const) // 0x100308D0
{
    mangled_assert("?GetMeshForLoading@MultiMesh@@QAEPAVBasicMesh@@I@Z");
    todo("implement");
}

_inline BasicMesh const *MultiMesh::GetMesh(unsigned __int32 const) const // 0x100308B0
{
    mangled_assert("?GetMesh@MultiMesh@@QBEPBVBasicMesh@@I@Z");
    todo("implement");
}

_inline unsigned __int32 const MultiMesh::getNumLOD() const // 0x10032390
{
    mangled_assert("?getNumLOD@MultiMesh@@QBE?BIXZ");
    todo("implement");
}

_inline unsigned __int32 const MultiMesh::getWorkingLOD() const // 0x10032400
{
    mangled_assert("?getWorkingLOD@MultiMesh@@QBE?BIXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __MULTIMESH_H__
#endif
