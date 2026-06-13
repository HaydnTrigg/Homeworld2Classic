#if 0
#ifndef __BASICMESH_H__
#define __BASICMESH_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class BasicMesh :
    public SubMesh
{
public:
    BasicMesh(BasicMesh const &); /* compiler_generated() */
    BasicMesh();
    virtual ~BasicMesh() override;
    static BasicMesh *create();
    void render(CompoundStateBlockInstance const *, float const, vector4 const &);
    virtual void render(MeshInstance const *, Mesh::LockType, unsigned __int32 const, float const, vector4 const &) override;
    virtual void getBoundingSphere(float *, vector3 *) const override;
    virtual void setShaderList(StateBlock_Type, std::vector<CompoundStateBlockInstance *,std::allocator<CompoundStateBlockInstance *> > *) override;
    virtual std::vector<CompoundStateBlockInstance *,std::allocator<CompoundStateBlockInstance *> > const &getShaderList(StateBlock_Type) const override;
    virtual __int32 getNumPolys() const override;
    virtual void optimize() override;
    virtual void createDisplayLists() override;
    void setNumUVSets(unsigned __int32);
    unsigned __int32 getNumUVSets() const;
    virtual void adjustDetail(float, Mesh::LockType) override;
    virtual void setMinLOD(float) override;
    virtual void setDetailLevel(float) override;
    void setNumGroups(unsigned __int32 const);
    void setMaterial(unsigned __int32 const, unsigned __int32 const);
    FatVertex *allocateFatVerts(unsigned __int32 const, unsigned __int32 const);
    void renderSimple();
    void setVertexCompMask(unsigned __int32);
    bool load_vers1202(IFFChunk *);
    __int32 load(IFF *, IFFChunk *, void *, void *);
    class TriGroup
    {
    public:
        TriGroup();
        ~TriGroup();
        __int32 m_matIndex; // 0x0
        unsigned __int32 m_numFats; // 0x4
        FatVertex *m_fats; // 0x8
        VertexArray *m_va; // 0xC
        unsigned __int32 m_dl; // 0x10
        BasicMesh::TriGroup::PrimitiveGroup *pg; // 0x14
        unsigned short numPrimGroups; // 0x18
        class PrimitiveGroup
        {
        public:
            PrimitiveGroup();
            ~PrimitiveGroup();
            static void *operator new(unsigned __int32);
            static void *operator new[](unsigned __int32);
            static void operator delete(void *);
            static void operator delete[](void *);
            void setType(PrimitiveType);
            void allocIndices(unsigned __int32);
            void freeIndices();
            PrimitiveType getType() const;
            __int32 getNumIndices() const;
            unsigned short *getIndices();
            unsigned short const *getIndices() const;
            __int32 getLastNumIndices() const;
        private:
            PrimitiveType m_type; // 0x0
            unsigned __int32 m_numIndices; // 0x4
            unsigned short *m_indices; // 0x8
            unsigned __int32 m_lastNumIndices; // 0xC
        };
        static_assert(sizeof(PrimitiveGroup) == 16, "Invalid PrimitiveGroup size");
        void createVertexArray(unsigned __int32);
        void createDisplayList();
        void render(CompoundStateBlock &, std::bitset<32> const &, float const, vector4 const &, StateVariableInstance const *);
        void renderSimple();
        void apply();
        void unapply();
        void doRenderSimple();
    };
    static_assert(sizeof(TriGroup) == 28, "Invalid TriGroup size");
    unsigned __int32 getNumTriGroups() const;
    BasicMesh::TriGroup const &getTriGroup(unsigned __int32) const;
private:
    void computeBoundingSphere();
    __int32 load1400(IFF *, IFFChunk *, void *, void *);
    float m_sphereRadius; // 0x38
    vector3 m_sphereCentre; // 0x3C
    unsigned __int32 m_numUVSets; // 0x48
    unsigned __int32 m_vertexCompMask; // 0x4C
    std::vector<CompoundStateBlockInstance *,std::allocator<CompoundStateBlockInstance *> > *m_shaders[3]; // 0x50
    std::vector<BasicMesh::TriGroup,std::allocator<BasicMesh::TriGroup> > m_groups; // 0x5C
public:
    BasicMesh &operator=(BasicMesh const &); /* compiler_generated() */
};
static_assert(sizeof(BasicMesh) == 104, "Invalid BasicMesh size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __BASICMESH_H__
/* combined */
#ifndef __BASICMESH_H__
#define __BASICMESH_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class BasicMesh :
    public SubMesh
{
public:
    _inline BasicMesh(BasicMesh const &); /* compiler_generated() */
    BasicMesh();
    virtual ~BasicMesh() override;
    static BasicMesh *create();
    void render(CompoundStateBlockInstance const *, float const, vector4 const &);
    virtual void render(MeshInstance const *, Mesh::LockType, unsigned __int32 const, float const, vector4 const &) override;
    virtual void getBoundingSphere(float *, vector3 *) const override;
    virtual _inline void setShaderList(StateBlock_Type, std::vector<CompoundStateBlockInstance *,std::allocator<CompoundStateBlockInstance *> > *) override;
    virtual std::vector<CompoundStateBlockInstance *,std::allocator<CompoundStateBlockInstance *> > const &getShaderList(StateBlock_Type) const override;
    virtual _inline __int32 getNumPolys() const override;
    virtual void optimize() override;
    virtual void createDisplayLists() override;
    _inline void setNumUVSets(unsigned __int32);
    _inline unsigned __int32 getNumUVSets() const;
    virtual _inline void adjustDetail(float, Mesh::LockType) override;
    virtual _inline void setMinLOD(float) override;
    virtual _inline void setDetailLevel(float) override;
    void setNumGroups(unsigned __int32 const);
    void setMaterial(unsigned __int32 const, unsigned __int32 const);
    FatVertex *allocateFatVerts(unsigned __int32 const, unsigned __int32 const);
    void renderSimple();
    void setVertexCompMask(unsigned __int32);
    bool load_vers1202(IFFChunk *);
    __int32 load(IFF *, IFFChunk *, void *, void *);
    class TriGroup
    {
    public:
        TriGroup();
        ~TriGroup();
        __int32 m_matIndex; // 0x0
        unsigned __int32 m_numFats; // 0x4
        FatVertex *m_fats; // 0x8
        VertexArray *m_va; // 0xC
        unsigned __int32 m_dl; // 0x10
        BasicMesh::TriGroup::PrimitiveGroup *pg; // 0x14
        unsigned short numPrimGroups; // 0x18
        class PrimitiveGroup
        {
        public:
            _inline PrimitiveGroup();
            ~PrimitiveGroup();
            static void *operator new(unsigned __int32 n);
            static void *operator new[](unsigned __int32 n);
            static void operator delete(void *p);
            static void operator delete[](void *p);
            _inline void setType(PrimitiveType);
            void allocIndices(unsigned __int32);
            void freeIndices();
            _inline PrimitiveType getType() const;
            _inline __int32 getNumIndices() const;
            _inline unsigned short *getIndices();
            unsigned short const *getIndices() const;
            _inline __int32 getLastNumIndices() const;
        private:
            PrimitiveType m_type; // 0x0
            unsigned __int32 m_numIndices; // 0x4
            unsigned short *m_indices; // 0x8
            unsigned __int32 m_lastNumIndices; // 0xC
        };
        static_assert(sizeof(PrimitiveGroup) == 16, "Invalid PrimitiveGroup size");
        void createVertexArray(unsigned __int32);
        void createDisplayList();
        void render(CompoundStateBlock &, std::bitset<32> const &, float const, vector4 const &, StateVariableInstance const *);
        void renderSimple();
        void apply();
        void unapply();
        void doRenderSimple();
    };
    static_assert(sizeof(TriGroup) == 28, "Invalid TriGroup size");
    unsigned __int32 getNumTriGroups() const;
    BasicMesh::TriGroup const &getTriGroup(unsigned __int32) const;
private:
    void computeBoundingSphere();
    __int32 load1400(IFF *, IFFChunk *, void *, void *);
    float m_sphereRadius; // 0x38
    vector3 m_sphereCentre; // 0x3C
    unsigned __int32 m_numUVSets; // 0x48
    unsigned __int32 m_vertexCompMask; // 0x4C
    std::vector<CompoundStateBlockInstance *,std::allocator<CompoundStateBlockInstance *> > *m_shaders[3]; // 0x50
    std::vector<BasicMesh::TriGroup,std::allocator<BasicMesh::TriGroup> > m_groups; // 0x5C
public:
    _inline BasicMesh &operator=(BasicMesh const &); /* compiler_generated() */
};
static_assert(sizeof(BasicMesh) == 104, "Invalid BasicMesh size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_1001BAE0(BasicMesh *const, StateBlock_Type, std::vector<CompoundStateBlockInstance *,std::allocator<CompoundStateBlockInstance *> > *);
_inline void BasicMesh::setShaderList(StateBlock_Type, std::vector<CompoundStateBlockInstance *,std::allocator<CompoundStateBlockInstance *> > *) // 0x1001BAE0
{
    mangled_assert("?setShaderList@BasicMesh@@UAEXW4StateBlock_Type@@PAV?$vector@PAVCompoundStateBlockInstance@@V?$allocator@PAVCompoundStateBlockInstance@@@std@@@std@@@Z");
    todo("implement");
    _sub_1001BAE0(this, arg, arg);
}

_extern __int32 _sub_10019390(BasicMesh const *const);
_inline __int32 BasicMesh::getNumPolys() const // 0x10019390
{
    mangled_assert("?getNumPolys@BasicMesh@@UBEHXZ");
    todo("implement");
    __int32 __result = _sub_10019390(this);
    return __result;
}

_extern void _sub_1001BAC0(BasicMesh *const, unsigned __int32);
_inline void BasicMesh::setNumUVSets(unsigned __int32) // 0x1001BAC0
{
    mangled_assert("?setNumUVSets@BasicMesh@@QAEXI@Z");
    todo("implement");
    _sub_1001BAC0(this, arg);
}

_extern unsigned __int32 _sub_100193F0(BasicMesh const *const);
_inline unsigned __int32 BasicMesh::getNumUVSets() const // 0x100193F0
{
    mangled_assert("?getNumUVSets@BasicMesh@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_100193F0(this);
    return __result;
}

_extern void _sub_10015AC0(BasicMesh *const, float, Mesh::LockType);
_inline void BasicMesh::adjustDetail(float, Mesh::LockType) // 0x10015AC0
{
    mangled_assert("?adjustDetail@BasicMesh@@UAEXMW4LockType@Mesh@@@Z");
    todo("implement");
    _sub_10015AC0(this, arg, arg);
}

_extern void _sub_1001BA70(BasicMesh *const, float);
_inline void BasicMesh::setMinLOD(float) // 0x1001BA70
{
    mangled_assert("?setMinLOD@BasicMesh@@UAEXM@Z");
    todo("implement");
    _sub_1001BA70(this, arg);
}

_extern void _sub_1001BA00(BasicMesh *const, float);
_inline void BasicMesh::setDetailLevel(float) // 0x1001BA00
{
    mangled_assert("?setDetailLevel@BasicMesh@@UAEXM@Z");
    todo("implement");
    _sub_1001BA00(this, arg);
}

_extern _sub_1000D190(BasicMesh::TriGroup::PrimitiveGroup *const);
_inline BasicMesh::TriGroup::PrimitiveGroup::PrimitiveGroup() // 0x1000D190
{
    mangled_assert("??0PrimitiveGroup@TriGroup@BasicMesh@@QAE@XZ");
    todo("implement");
    _sub_1000D190(this);
}

_extern void _sub_1001BB20(BasicMesh::TriGroup::PrimitiveGroup *const, PrimitiveType);
_inline void BasicMesh::TriGroup::PrimitiveGroup::setType(PrimitiveType) // 0x1001BB20
{
    mangled_assert("?setType@PrimitiveGroup@TriGroup@BasicMesh@@QAEXW4PrimitiveType@@@Z");
    todo("implement");
    _sub_1001BB20(this, arg);
}

_extern PrimitiveType _sub_100194D0(BasicMesh::TriGroup::PrimitiveGroup const *const);
_inline PrimitiveType BasicMesh::TriGroup::PrimitiveGroup::getType() const // 0x100194D0
{
    mangled_assert("?getType@PrimitiveGroup@TriGroup@BasicMesh@@QBE?AW4PrimitiveType@@XZ");
    todo("implement");
    PrimitiveType __result = _sub_100194D0(this);
    return __result;
}

_extern __int32 _sub_10019370(BasicMesh::TriGroup::PrimitiveGroup const *const);
_inline __int32 BasicMesh::TriGroup::PrimitiveGroup::getNumIndices() const // 0x10019370
{
    mangled_assert("?getNumIndices@PrimitiveGroup@TriGroup@BasicMesh@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_10019370(this);
    return __result;
}

_extern unsigned short *_sub_10019290(BasicMesh::TriGroup::PrimitiveGroup *const);
_inline unsigned short *BasicMesh::TriGroup::PrimitiveGroup::getIndices() // 0x10019290
{
    mangled_assert("?getIndices@PrimitiveGroup@TriGroup@BasicMesh@@QAEPAGXZ");
    todo("implement");
    unsigned short * __result = _sub_10019290(this);
    return __result;
}

_extern __int32 _sub_10077EB0(BasicMesh::TriGroup::PrimitiveGroup const *const);
_inline __int32 BasicMesh::TriGroup::PrimitiveGroup::getLastNumIndices() const // 0x10077EB0
{
    mangled_assert("?getLastNumIndices@PrimitiveGroup@TriGroup@BasicMesh@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_10077EB0(this);
    return __result;
}

/* ---------- private code */

#endif // __BASICMESH_H__
#endif
