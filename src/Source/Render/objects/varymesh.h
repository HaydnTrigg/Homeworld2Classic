#if 0
#ifndef __VARYMESH_H__
#define __VARYMESH_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Fixup
{
public:
    enum Type
    {
        face = 0,
        wedge,
        neighbour,
    };
    Fixup::Type m_type; // 0x0
    unsigned __int32 m_data[3]; // 0x4
};
static_assert(sizeof(Fixup) == 16, "Invalid Fixup size");

class Collapse
{
public:
    std::vector<Fixup,std::allocator<Fixup> > m_fixups; // 0x0
    Collapse(Collapse const &); /* compiler_generated() */
    Collapse(); /* compiler_generated() */
    ~Collapse(); /* compiler_generated() */
    Collapse &operator=(Collapse const &); /* compiler_generated() */
};
static_assert(sizeof(Collapse) == 12, "Invalid Collapse size");

class VaryMesh :
    public SubMesh
{
public:
    VaryMesh(VaryMesh const &); /* compiler_generated() */
    VaryMesh();
    virtual ~VaryMesh() override;
    static VaryMesh *create();
    struct Wedge
    {
        vector3 m_position; // 0x0
        vector3 m_normal; // 0xC
        vector2 m_uv[4]; // 0x18
        unsigned __int32 m_color; // 0x38
        Wedge(); /* compiler_generated() */
    };
    static_assert(sizeof(Wedge) == 60, "Invalid Wedge size");
    struct Face
    {
        __int32 m_shader; // 0x0
        __int32 m_wedge[3]; // 0x4
        __int32 m_face[3]; // 0x10
        bool m_collapsed; // 0x1C
    };
    static_assert(sizeof(Face) == 32, "Invalid Face size");
    virtual void getBoundingSphere(float *, vector3 *) const override;
    virtual void setShaderList(StateBlock_Type, std::vector<CompoundStateBlockInstance *,std::allocator<CompoundStateBlockInstance *> > *) override;
    virtual std::vector<CompoundStateBlockInstance *,std::allocator<CompoundStateBlockInstance *> > const &getShaderList(StateBlock_Type) const override;
    virtual void adjustDetail(float, Mesh::LockType) override;
    virtual void render(MeshInstance const *, Mesh::LockType, unsigned __int32 const, float const, float const);
    virtual void optimize() override;
    virtual void createDisplayLists() override;
    void alloc(__int32, __int32, __int32);
    VaryMesh::Wedge *getWedge(__int32);
    VaryMesh::Face *getFace(__int32);
    Collapse *getCollapse(__int32);
    float getLevelsOfDetail() const;
    __int32 getNumCachedLists() const;
    __int32 getCacheSize() const;
    void setLevelsOfDetail(float);
    void setNumCachedLists(__int32);
    void setNumUVSets(__int32);
    __int32 getNumUVSets() const;
    virtual __int32 getNumPolys() const override;
    virtual void setMinLOD(float) override;
    virtual void setDetailLevel(float) override;
    typedef std::vector<VaryMesh::Wedge,std::allocator<VaryMesh::Wedge> > WedgeList;
    typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<VaryMesh::Wedge> > > WedgeListI;
    typedef std::vector<VaryMesh::Face,std::allocator<VaryMesh::Face> > FaceList;
    typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<VaryMesh::Face> > > FaceListI;
    std::vector<VaryMesh::Wedge,std::allocator<VaryMesh::Wedge> > m_wedges; // 0x38
    std::vector<VaryMesh::Face,std::allocator<VaryMesh::Face> > m_faces; // 0x44
    std::vector<Collapse,std::allocator<Collapse> > m_collapses; // 0x50
private:
    std::vector<CompoundStateBlockInstance *,std::allocator<CompoundStateBlockInstance *> > *m_shaders[3]; // 0x5C
    stdext::hash_map<int,VaryMesh::CommandStruct,stdext::hash_compare<int,std::less<int> >,std::allocator<std::pair<int const ,VaryMesh::CommandStruct> > > m_commandCache; // 0x68
    __int32 m_start; // 0x88
    __int32 m_count; // 0x8C
    __int32 m_size; // 0x90
    float m_sphereRadius; // 0x94
    vector3 m_sphereCentre; // 0x98
    float m_levelsOfDetail; // 0xA4
    float m_invLevelsOfDetail; // 0xA8
    __int32 m_numCachedLists; // 0xAC
    __int32 m_icol; // 0xB0
    __int32 m_ncol; // 0xB4
    __int32 m_numFaces; // 0xB8
    __int32 m_numUVSets; // 0xBC
    float m_lastLOD; // 0xC0
    float m_minLOD; // 0xC4
    float m_detailLevel; // 0xC8
    std::vector<int,std::allocator<int> > m_matSort; // 0xCC
    std::vector<int *,std::allocator<int *> > m_matLUT; // 0xD8
    VertexArray *m_va; // 0xE4
    __int32 *m_commandList; // 0xE8
    void computeBoundingSphere(float *, vector3 *);
    void clearMatLUT();
    void renderCelShaded();
    void removeDetail(__int32);
    void addDetail(__int32);
    __int32 *tri();
    __int32 stripLength(__int32, __int32);
    __int32 *strip();
    __int32 *noStrip(__int32 *);
    void flushCache();
    struct CommandStruct
    {
        __int32 lastUsed; // 0x0
        __int32 bytesUsed; // 0x4
        __int32 *commandlist; // 0x8
        __int32 start; // 0xC
        __int32 count; // 0x10
        Mesh::LockType lock; // 0x14
    };
    static_assert(sizeof(CommandStruct) == 24, "Invalid CommandStruct size");
    typedef stdext::hash_map<int,VaryMesh::CommandStruct,stdext::hash_compare<int,std::less<int> >,std::allocator<std::pair<int const ,VaryMesh::CommandStruct> > > CommandCache;
    typedef std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<int const ,VaryMesh::CommandStruct> > > > CommandCacheI;
    typedef std::vector<int,std::allocator<int> > IntVec;
    typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<int> > > IntVecI;
    typedef std::vector<int *,std::allocator<int *> > MatLUT;
    typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<int *> > > MatLUTI;
public:
    VaryMesh &operator=(VaryMesh const &); /* compiler_generated() */
};
static_assert(sizeof(VaryMesh) == 236, "Invalid VaryMesh size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __VARYMESH_H__
/* combined */
#ifndef __VARYMESH_H__
#define __VARYMESH_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Fixup
{
public:
    enum Type
    {
        face = 0,
        wedge,
        neighbour,
    };
    Fixup::Type m_type; // 0x0
    unsigned __int32 m_data[3]; // 0x4
};
static_assert(sizeof(Fixup) == 16, "Invalid Fixup size");

class Collapse
{
public:
    std::vector<Fixup,std::allocator<Fixup> > m_fixups; // 0x0
    _inline Collapse(Collapse const &); /* compiler_generated() */
    _inline Collapse(); /* compiler_generated() */
    _inline ~Collapse(); /* compiler_generated() */
    _inline Collapse &operator=(Collapse const &); /* compiler_generated() */
};
static_assert(sizeof(Collapse) == 12, "Invalid Collapse size");

class VaryMesh :
    public SubMesh
{
public:
    _inline VaryMesh(VaryMesh const &); /* compiler_generated() */
    VaryMesh();
    virtual ~VaryMesh() override;
    static VaryMesh *create();
    struct Wedge
    {
        vector3 m_position; // 0x0
        vector3 m_normal; // 0xC
        vector2 m_uv[4]; // 0x18
        unsigned __int32 m_color; // 0x38
        _inline Wedge(); /* compiler_generated() */
    };
    static_assert(sizeof(Wedge) == 60, "Invalid Wedge size");
    struct Face
    {
        __int32 m_shader; // 0x0
        __int32 m_wedge[3]; // 0x4
        __int32 m_face[3]; // 0x10
        bool m_collapsed; // 0x1C
    };
    static_assert(sizeof(Face) == 32, "Invalid Face size");
    virtual void getBoundingSphere(float *, vector3 *) const override;
    virtual _inline void setShaderList(StateBlock_Type, std::vector<CompoundStateBlockInstance *,std::allocator<CompoundStateBlockInstance *> > *) override;
    virtual std::vector<CompoundStateBlockInstance *,std::allocator<CompoundStateBlockInstance *> > const &getShaderList(StateBlock_Type) const override;
    virtual void adjustDetail(float, Mesh::LockType) override;
    virtual void render(MeshInstance const *, Mesh::LockType, unsigned __int32 const, float const, float const);
    virtual void optimize() override;
    virtual void createDisplayLists() override;
    void alloc(__int32, __int32, __int32);
    VaryMesh::Wedge *getWedge(__int32);
    VaryMesh::Face *getFace(__int32);
    Collapse *getCollapse(__int32);
    _inline float getLevelsOfDetail() const;
    _inline __int32 getNumCachedLists() const;
    __int32 getCacheSize() const;
    void setLevelsOfDetail(float);
    void setNumCachedLists(__int32);
    _inline void setNumUVSets(__int32);
    _inline __int32 getNumUVSets() const;
    virtual _inline __int32 getNumPolys() const override;
    virtual _inline void setMinLOD(float) override;
    virtual _inline void setDetailLevel(float) override;
    typedef std::vector<VaryMesh::Wedge,std::allocator<VaryMesh::Wedge> > WedgeList;
    typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<VaryMesh::Wedge> > > WedgeListI;
    typedef std::vector<VaryMesh::Face,std::allocator<VaryMesh::Face> > FaceList;
    typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<VaryMesh::Face> > > FaceListI;
    std::vector<VaryMesh::Wedge,std::allocator<VaryMesh::Wedge> > m_wedges; // 0x38
    std::vector<VaryMesh::Face,std::allocator<VaryMesh::Face> > m_faces; // 0x44
    std::vector<Collapse,std::allocator<Collapse> > m_collapses; // 0x50
private:
    std::vector<CompoundStateBlockInstance *,std::allocator<CompoundStateBlockInstance *> > *m_shaders[3]; // 0x5C
    stdext::hash_map<int,VaryMesh::CommandStruct,stdext::hash_compare<int,std::less<int> >,std::allocator<std::pair<int const ,VaryMesh::CommandStruct> > > m_commandCache; // 0x68
    __int32 m_start; // 0x88
    __int32 m_count; // 0x8C
    __int32 m_size; // 0x90
    float m_sphereRadius; // 0x94
    vector3 m_sphereCentre; // 0x98
    float m_levelsOfDetail; // 0xA4
    float m_invLevelsOfDetail; // 0xA8
    __int32 m_numCachedLists; // 0xAC
    __int32 m_icol; // 0xB0
    __int32 m_ncol; // 0xB4
    __int32 m_numFaces; // 0xB8
    __int32 m_numUVSets; // 0xBC
    float m_lastLOD; // 0xC0
    float m_minLOD; // 0xC4
    float m_detailLevel; // 0xC8
    std::vector<int,std::allocator<int> > m_matSort; // 0xCC
    std::vector<int *,std::allocator<int *> > m_matLUT; // 0xD8
    VertexArray *m_va; // 0xE4
    __int32 *m_commandList; // 0xE8
    void computeBoundingSphere(float *, vector3 *);
    void clearMatLUT();
    void renderCelShaded();
    void removeDetail(__int32);
    void addDetail(__int32);
    __int32 *tri();
    __int32 stripLength(__int32, __int32);
    __int32 *strip();
    __int32 *noStrip(__int32 *);
    void flushCache();
    struct CommandStruct
    {
        __int32 lastUsed; // 0x0
        __int32 bytesUsed; // 0x4
        __int32 *commandlist; // 0x8
        __int32 start; // 0xC
        __int32 count; // 0x10
        Mesh::LockType lock; // 0x14
    };
    static_assert(sizeof(CommandStruct) == 24, "Invalid CommandStruct size");
    typedef stdext::hash_map<int,VaryMesh::CommandStruct,stdext::hash_compare<int,std::less<int> >,std::allocator<std::pair<int const ,VaryMesh::CommandStruct> > > CommandCache;
    typedef std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<int const ,VaryMesh::CommandStruct> > > > CommandCacheI;
    typedef std::vector<int,std::allocator<int> > IntVec;
    typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<int> > > IntVecI;
    typedef std::vector<int *,std::allocator<int *> > MatLUT;
    typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<int *> > > MatLUTI;
public:
    _inline VaryMesh &operator=(VaryMesh const &); /* compiler_generated() */
};
static_assert(sizeof(VaryMesh) == 236, "Invalid VaryMesh size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_1001BAF0(VaryMesh *const, StateBlock_Type, std::vector<CompoundStateBlockInstance *,std::allocator<CompoundStateBlockInstance *> > *);
_inline void VaryMesh::setShaderList(StateBlock_Type, std::vector<CompoundStateBlockInstance *,std::allocator<CompoundStateBlockInstance *> > *) // 0x1001BAF0
{
    mangled_assert("?setShaderList@VaryMesh@@UAEXW4StateBlock_Type@@PAV?$vector@PAVCompoundStateBlockInstance@@V?$allocator@PAVCompoundStateBlockInstance@@@std@@@std@@@Z");
    todo("implement");
    _sub_1001BAF0(this, arg, arg);
}

_extern float _sub_100192C0(VaryMesh const *const);
_inline float VaryMesh::getLevelsOfDetail() const // 0x100192C0
{
    mangled_assert("?getLevelsOfDetail@VaryMesh@@QBEMXZ");
    todo("implement");
    float __result = _sub_100192C0(this);
    return __result;
}

_extern __int32 _sub_10019360(VaryMesh const *const);
_inline __int32 VaryMesh::getNumCachedLists() const // 0x10019360
{
    mangled_assert("?getNumCachedLists@VaryMesh@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_10019360(this);
    return __result;
}

_extern void _sub_1001BAD0(VaryMesh *const, __int32);
_inline void VaryMesh::setNumUVSets(__int32) // 0x1001BAD0
{
    mangled_assert("?setNumUVSets@VaryMesh@@QAEXH@Z");
    todo("implement");
    _sub_1001BAD0(this, arg);
}

_extern __int32 _sub_10019400(VaryMesh const *const);
_inline __int32 VaryMesh::getNumUVSets() const // 0x10019400
{
    mangled_assert("?getNumUVSets@VaryMesh@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_10019400(this);
    return __result;
}

_extern __int32 _sub_100193A0(VaryMesh const *const);
_inline __int32 VaryMesh::getNumPolys() const // 0x100193A0
{
    mangled_assert("?getNumPolys@VaryMesh@@UBEHXZ");
    todo("implement");
    __int32 __result = _sub_100193A0(this);
    return __result;
}

_extern void _sub_1001BA80(VaryMesh *const, float);
_inline void VaryMesh::setMinLOD(float) // 0x1001BA80
{
    mangled_assert("?setMinLOD@VaryMesh@@UAEXM@Z");
    todo("implement");
    _sub_1001BA80(this, arg);
}

_extern void _sub_1001BA10(VaryMesh *const, float);
_inline void VaryMesh::setDetailLevel(float) // 0x1001BA10
{
    mangled_assert("?setDetailLevel@VaryMesh@@UAEXM@Z");
    todo("implement");
    _sub_1001BA10(this, arg);
}

/* ---------- private code */

#endif // __VARYMESH_H__
#endif
