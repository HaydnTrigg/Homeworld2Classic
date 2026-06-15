#if 0
#ifndef __MESH_H__
#define __MESH_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum StateBlock_Type
{
    SBT_Default = 0,
    SBT_AdditiveLight,
    SBT_ShadowAndLight,
    SBT_MAXTYPES,
};

/* ---------- definitions */

struct MeshVertex
{
    float x; // 0x0
    float y; // 0x4
    float z; // 0x8
    __int32 m_normal; // 0xC
};
static_assert(sizeof(MeshVertex) == 16, "Invalid MeshVertex size");

struct MeshNormal
{
    float x; // 0x0
    float y; // 0x4
    float z; // 0x8
    __int32 pad; // 0xC
};
static_assert(sizeof(MeshNormal) == 16, "Invalid MeshNormal size");

struct MeshFace
{
    __int32 m_normal; // 0x0
    __int32 m_verts[3]; // 0x4
    __int32 m_face[3]; // 0x10
    __int32 m_material; // 0x1C
    float m_uv[3][2]; // 0x20
    bool m_hit; // 0x38
};
static_assert(sizeof(MeshFace) == 60, "Invalid MeshFace size");

struct MeshMaterial
{
    Material *m_mat; // 0x0
    __int32 m_vert; // 0x4
};
static_assert(sizeof(MeshMaterial) == 8, "Invalid MeshMaterial size");

struct MeshObject
{
    __int32 m_numVerts; // 0x0
    MeshVertex *m_verts; // 0x4
    __int32 m_numNormals; // 0x8
    MeshNormal *m_normals; // 0xC
    __int32 m_numFaces; // 0x10
    MeshFace *m_faces; // 0x14
    __int32 m_numMaterials; // 0x18
    MeshMaterial *m_materials; // 0x1C
    matrix4 m_matrix; // 0x20
    MeshObject();
};
static_assert(sizeof(MeshObject) == 96, "Invalid MeshObject size");

class Mesh :
    public Core,
    public Renderable
{
public:
    virtual ~Mesh() override;
    enum LockType
    {
        none = 0,
        arrange,
        compile,
    };
    typedef std::vector<Material *,std::allocator<Material *> > MaterialList;
    static void setLocking(Mesh::LockType);
    static Mesh::LockType getLocking();
    virtual std::vector<CompoundStateBlockInstance *,std::allocator<CompoundStateBlockInstance *> > const &getShaders(StateBlock_Type) const = 0;
    virtual void clear() = 0;
    virtual void setDirty() = 0;
    virtual void addSubMesh(SubMesh *) = 0;
    virtual __int32 numSubMesh() const = 0;
    virtual SubMesh const *getSubMesh(__int32) const = 0;
    virtual unsigned __int32 addShader(StateBlock_Type, CompoundStateBlockInstance *) = 0;
    virtual void addTexture(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, Texture *) = 0;
    virtual __int32 findTexture(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) = 0;
    virtual Texture *findTexture(__int32) const = 0;
    static Mesh *addIFFParseHandlers(IFF *);
    virtual void getBoundingSphere(float *, vector3 *) const;
    virtual __int32 getNumPolys() const = 0;
    virtual void setMinLOD(float) = 0;
    virtual void setDetailLevel(float) = 0;
    virtual void setHasAlphaShader(bool) = 0;
    virtual bool hasAlphaShader() const = 0;
private:
    static Mesh::LockType m_lockMode;
public:
    Mesh(Mesh const &); /* compiler_generated() */
    Mesh(); /* compiler_generated() */
    Mesh &operator=(Mesh const &); /* compiler_generated() */
};
static_assert(sizeof(Mesh) == 8, "Invalid Mesh size");

class SubMesh :
    public Core
{
public:
    SubMesh(SubMesh const &); /* compiler_generated() */
    SubMesh();
    virtual ~SubMesh() override;
    virtual void adjustDetail(float, Mesh::LockType) = 0;
    virtual void render(MeshInstance const *, Mesh::LockType, unsigned __int32 const, float const, vector4 const &);
    virtual void setShaderList(StateBlock_Type, std::vector<CompoundStateBlockInstance *,std::allocator<CompoundStateBlockInstance *> > *) = 0;
    virtual std::vector<CompoundStateBlockInstance *,std::allocator<CompoundStateBlockInstance *> > const &getShaderList(StateBlock_Type) const = 0;
    virtual void optimize() = 0;
    virtual void createDisplayLists() = 0;
    virtual void getBoundingSphere(float *, vector3 *) const;
    virtual __int32 getNumPolys() const = 0;
    virtual void setMinLOD(float) = 0;
    virtual void setDetailLevel(float) = 0;
    char const *getName() const;
    char const *getParentName() const;
    void setVisible(bool);
    bool getVisible() const;
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x4
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_parentName; // 0x1C
private:
    bool m_bVisible; // 0x34
public:
    SubMesh &operator=(SubMesh const &); /* compiler_generated() */
};
static_assert(sizeof(SubMesh) == 56, "Invalid SubMesh size");

class MeshInstance :
    public Core
{
public:
    enum
    {
        MAX_CACHED_VARIABLES = 4, // 0x0004
    };
    static MeshInstance *create();
    MeshInstance(MeshInstance const &); /* compiler_generated() */
    MeshInstance();
    virtual ~MeshInstance() override;
    void attachMesh(Mesh const *);
    Mesh const *getMesh() const;
    void render(matrix4 const &, unsigned __int32 const, float const, vector4 const &) const;
    unsigned __int32 getNumBlockInstances() const;
    CompoundStateBlock const *getBlock(unsigned __int32 const) const;
    std::bitset<32> const getBlockMask(unsigned __int32 const) const;
    bool isBlockActive(unsigned __int32 const, unsigned __int32) const;
    bool activateBlock(unsigned __int32 const, char const *, bool);
    StateVariableInstance *getVariable(unsigned __int32 const) const;
    bool setCurrentBlockSet(StateBlock_Type);
    StateBlock_Type getCurrentBlockSet() const;
    bool initCacheVariable(unsigned __int32, unsigned long const &);
    void updateCacheVariable(unsigned __int32, void *);
    struct VariableCacheIndex
    {
        VariableCacheIndex(StateVariableInstance *, unsigned __int32);
        StateVariableInstance *m_var; // 0x0
        unsigned __int32 m_index; // 0x4
    };
    static_assert(sizeof(VariableCacheIndex) == 8, "Invalid VariableCacheIndex size");
    typedef std::vector<MeshInstance::VariableCacheIndex,std::allocator<MeshInstance::VariableCacheIndex> > VariableCacheIndexCont;
    struct VariableCache
    {
        unsigned long m_key; // 0x0
        std::vector<MeshInstance::VariableCacheIndex,std::allocator<MeshInstance::VariableCacheIndex> > m_indicies; // 0x4
        VariableCache(MeshInstance::VariableCache const &); /* compiler_generated() */
        VariableCache(); /* compiler_generated() */
        ~VariableCache(); /* compiler_generated() */
        MeshInstance::VariableCache &operator=(MeshInstance::VariableCache const &); /* compiler_generated() */
    };
    static_assert(sizeof(VariableCache) == 16, "Invalid VariableCache size");
private:
    Mesh const *m_mesh; // 0x4
    std::vector<CompoundStateBlockInstance *,std::allocator<CompoundStateBlockInstance *> > m_blockInstances[3]; // 0x8
    StateBlock_Type m_currentSet; // 0x2C
    MeshInstance::VariableCache m_variableCache[4]; // 0x30
public:
    MeshInstance &operator=(MeshInstance const &); /* compiler_generated() */
};
static_assert(sizeof(MeshInstance) == 112, "Invalid MeshInstance size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MESH_H__
/* combined */
#ifndef __MESH_H__
#define __MESH_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum StateBlock_Type
{
    SBT_Default = 0,
    SBT_AdditiveLight,
    SBT_ShadowAndLight,
    SBT_MAXTYPES,
};

/* ---------- definitions */

struct MeshVertex
{
    float x; // 0x0
    float y; // 0x4
    float z; // 0x8
    __int32 m_normal; // 0xC
};
static_assert(sizeof(MeshVertex) == 16, "Invalid MeshVertex size");

struct MeshNormal
{
    float x; // 0x0
    float y; // 0x4
    float z; // 0x8
    __int32 pad; // 0xC
};
static_assert(sizeof(MeshNormal) == 16, "Invalid MeshNormal size");

struct MeshFace
{
    __int32 m_normal; // 0x0
    __int32 m_verts[3]; // 0x4
    __int32 m_face[3]; // 0x10
    __int32 m_material; // 0x1C
    float m_uv[3][2]; // 0x20
    bool m_hit; // 0x38
};
static_assert(sizeof(MeshFace) == 60, "Invalid MeshFace size");

struct MeshMaterial
{
    Material *m_mat; // 0x0
    __int32 m_vert; // 0x4
};
static_assert(sizeof(MeshMaterial) == 8, "Invalid MeshMaterial size");

struct MeshObject
{
    __int32 m_numVerts; // 0x0
    MeshVertex *m_verts; // 0x4
    __int32 m_numNormals; // 0x8
    MeshNormal *m_normals; // 0xC
    __int32 m_numFaces; // 0x10
    MeshFace *m_faces; // 0x14
    __int32 m_numMaterials; // 0x18
    MeshMaterial *m_materials; // 0x1C
    matrix4 m_matrix; // 0x20
    _inline MeshObject();
};
static_assert(sizeof(MeshObject) == 96, "Invalid MeshObject size");

class Mesh :
    public Core,
    public Renderable
{
public:
    virtual _inline ~Mesh() override;
    enum LockType
    {
        none = 0,
        arrange,
        compile,
    };
    typedef std::vector<Material *,std::allocator<Material *> > MaterialList;
    static void setLocking(Mesh::LockType locking);
    static Mesh::LockType getLocking();
    virtual std::vector<CompoundStateBlockInstance *,std::allocator<CompoundStateBlockInstance *> > const &getShaders(StateBlock_Type) const = 0;
    virtual void clear() = 0;
    virtual void setDirty() = 0;
    virtual void addSubMesh(SubMesh *) = 0;
    virtual __int32 numSubMesh() const = 0;
    virtual SubMesh const *getSubMesh(__int32) const = 0;
    virtual unsigned __int32 addShader(StateBlock_Type, CompoundStateBlockInstance *) = 0;
    virtual void addTexture(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, Texture *) = 0;
    virtual __int32 findTexture(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) = 0;
    virtual Texture *findTexture(__int32) const = 0;
    static Mesh *addIFFParseHandlers(IFF *);
    virtual _inline void getBoundingSphere(float *, vector3 *) const;
    virtual __int32 getNumPolys() const = 0;
    virtual void setMinLOD(float) = 0;
    virtual void setDetailLevel(float) = 0;
    virtual void setHasAlphaShader(bool) = 0;
    virtual bool hasAlphaShader() const = 0;
private:
    static Mesh::LockType m_lockMode;
public:
    _inline Mesh(Mesh const &); /* compiler_generated() */
    _inline Mesh(); /* compiler_generated() */
    _inline Mesh &operator=(Mesh const &); /* compiler_generated() */
};
static_assert(sizeof(Mesh) == 8, "Invalid Mesh size");

class SubMesh :
    public Core
{
public:
    _inline SubMesh(SubMesh const &); /* compiler_generated() */
    _inline SubMesh();
    virtual _inline ~SubMesh() override;
    virtual void adjustDetail(float, Mesh::LockType) = 0;
    virtual _inline void render(MeshInstance const *, Mesh::LockType, unsigned __int32 const, float const, vector4 const &);
    virtual void setShaderList(StateBlock_Type, std::vector<CompoundStateBlockInstance *,std::allocator<CompoundStateBlockInstance *> > *) = 0;
    virtual std::vector<CompoundStateBlockInstance *,std::allocator<CompoundStateBlockInstance *> > const &getShaderList(StateBlock_Type) const = 0;
    virtual void optimize() = 0;
    virtual void createDisplayLists() = 0;
    virtual _inline void getBoundingSphere(float *, vector3 *) const;
    virtual __int32 getNumPolys() const = 0;
    virtual void setMinLOD(float) = 0;
    virtual void setDetailLevel(float) = 0;
    _inline char const *getName() const;
    _inline char const *getParentName() const;
    _inline void setVisible(bool);
    _inline bool getVisible() const;
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x4
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_parentName; // 0x1C
private:
    bool m_bVisible; // 0x34
public:
    _inline SubMesh &operator=(SubMesh const &); /* compiler_generated() */
};
static_assert(sizeof(SubMesh) == 56, "Invalid SubMesh size");

class MeshInstance :
    public Core
{
public:
    enum
    {
        MAX_CACHED_VARIABLES = 4, // 0x0004
    };
    static MeshInstance *create();
    _inline MeshInstance(MeshInstance const &); /* compiler_generated() */
    MeshInstance();
    virtual ~MeshInstance() override;
    void attachMesh(Mesh const *);
    _inline Mesh const *getMesh() const;
    void render(matrix4 const &, unsigned __int32 const, float const, vector4 const &) const;
    _inline unsigned __int32 getNumBlockInstances() const;
    CompoundStateBlock const *getBlock(unsigned __int32 const) const;
    std::bitset<32> const getBlockMask(unsigned __int32 const) const;
    bool isBlockActive(unsigned __int32 const, unsigned __int32) const;
    bool activateBlock(unsigned __int32 const, char const *, bool);
    StateVariableInstance *getVariable(unsigned __int32 const) const;
    _inline bool setCurrentBlockSet(StateBlock_Type);
    _inline StateBlock_Type getCurrentBlockSet() const;
    bool initCacheVariable(unsigned __int32, unsigned long const &);
    void updateCacheVariable(unsigned __int32, void *);
    struct VariableCacheIndex
    {
        _inline VariableCacheIndex(StateVariableInstance *, unsigned __int32);
        StateVariableInstance *m_var; // 0x0
        unsigned __int32 m_index; // 0x4
    };
    static_assert(sizeof(VariableCacheIndex) == 8, "Invalid VariableCacheIndex size");
    typedef std::vector<MeshInstance::VariableCacheIndex,std::allocator<MeshInstance::VariableCacheIndex> > VariableCacheIndexCont;
    struct VariableCache
    {
        unsigned long m_key; // 0x0
        std::vector<MeshInstance::VariableCacheIndex,std::allocator<MeshInstance::VariableCacheIndex> > m_indicies; // 0x4
        _inline VariableCache(MeshInstance::VariableCache const &); /* compiler_generated() */
        _inline VariableCache(); /* compiler_generated() */
        _inline ~VariableCache(); /* compiler_generated() */
        _inline MeshInstance::VariableCache &operator=(MeshInstance::VariableCache const &); /* compiler_generated() */
    };
    static_assert(sizeof(VariableCache) == 16, "Invalid VariableCache size");
private:
    Mesh const *m_mesh; // 0x4
    std::vector<CompoundStateBlockInstance *,std::allocator<CompoundStateBlockInstance *> > m_blockInstances[3]; // 0x8
    StateBlock_Type m_currentSet; // 0x2C
    MeshInstance::VariableCache m_variableCache[4]; // 0x30
public:
    _inline MeshInstance &operator=(MeshInstance const &); /* compiler_generated() */
};
static_assert(sizeof(MeshInstance) == 112, "Invalid MeshInstance size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline MeshObject::MeshObject() // 0x1000D0D0
{
    mangled_assert("??0MeshObject@@QAE@XZ");
    todo("implement");
}

_inline Mesh::~Mesh() // 0x1000E320
{
    mangled_assert("??1Mesh@@UAE@XZ");
    todo("implement");
}

_inline void Mesh::getBoundingSphere(float *, vector3 *) const // 0x10019190
{
    mangled_assert("?getBoundingSphere@Mesh@@UBEXPAMPAVvector3@@@Z");
    todo("implement");
}

_inline SubMesh::SubMesh() // 0x1000D350
{
    mangled_assert("??0SubMesh@@QAE@XZ");
    todo("implement");
}

_inline SubMesh::~SubMesh() // 0x1000E420
{
    mangled_assert("??1SubMesh@@UAE@XZ");
    todo("implement");
}

_inline void SubMesh::render(MeshInstance const *, Mesh::LockType, unsigned __int32 const, float const, vector4 const &) // 0x1001ACF0
{
    mangled_assert("?render@SubMesh@@UAEXPBVMeshInstance@@W4LockType@Mesh@@IMABVvector4@@@Z");
    todo("implement");
}

_inline void SubMesh::getBoundingSphere(float *, vector3 *) const // 0x100191C0
{
    mangled_assert("?getBoundingSphere@SubMesh@@UBEXPAMPAVvector3@@@Z");
    todo("implement");
}

_inline char const *SubMesh::getName() const // 0x10019310
{
    mangled_assert("?getName@SubMesh@@QBEPBDXZ");
    todo("implement");
}

_inline char const *SubMesh::getParentName() const // 0x10019440
{
    mangled_assert("?getParentName@SubMesh@@QBEPBDXZ");
    todo("implement");
}

_inline void SubMesh::setVisible(bool) // 0x1001BB70
{
    mangled_assert("?setVisible@SubMesh@@QAEX_N@Z");
    todo("implement");
}

_inline bool SubMesh::getVisible() const // 0x10019540
{
    mangled_assert("?getVisible@SubMesh@@QBE_NXZ");
    todo("implement");
}

_inline bool MeshInstance::setCurrentBlockSet(StateBlock_Type) // 0x1001B9F0
{
    mangled_assert("?setCurrentBlockSet@MeshInstance@@QAE_NW4StateBlock_Type@@@Z");
    todo("implement");
}

_inline StateBlock_Type MeshInstance::getCurrentBlockSet() const // 0x100191F0
{
    mangled_assert("?getCurrentBlockSet@MeshInstance@@QBE?AW4StateBlock_Type@@XZ");
    todo("implement");
}

_inline MeshInstance::VariableCacheIndex::VariableCacheIndex(StateVariableInstance *, unsigned __int32) // 0x10079520
{
    mangled_assert("??0VariableCacheIndex@MeshInstance@@QAE@PAVStateVariableInstance@@I@Z");
    todo("implement");
}

_inline Mesh const *MeshInstance::getMesh() const // 0x100192D0
{
    mangled_assert("?getMesh@MeshInstance@@QBEPBVMesh@@XZ");
    todo("implement");
}

_inline unsigned __int32 MeshInstance::getNumBlockInstances() const // 0x10019340
{
    mangled_assert("?getNumBlockInstances@MeshInstance@@QBEIXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __MESH_H__
#endif
