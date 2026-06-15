#if 0
#ifndef __PARENTMESH_H__
#define __PARENTMESH_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class ParentMesh :
    public Mesh
{
private:
    ParentMesh(ParentMesh const &);
public:
    ParentMesh();
    virtual ~ParentMesh() override;
    static ParentMesh *create();
    virtual void getBoundingSphere(float *, vector3 *) const override;
    virtual void addSubMesh(SubMesh *) override;
    virtual __int32 numSubMesh() const override;
    SubMesh *getSubMesh(__int32, unsigned __int32 const);
    SubMesh const *getSubMesh(__int32, unsigned __int32 const) const;
    virtual SubMesh const *getSubMesh(__int32) const override;
    void clearSubMeshes();
    virtual void addTexture(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, Texture *) override;
    virtual __int32 findTexture(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) override;
    virtual Texture *findTexture(__int32) const override;
    virtual unsigned __int32 addShader(StateBlock_Type, CompoundStateBlockInstance *) override;
    virtual std::vector<CompoundStateBlockInstance *,std::allocator<CompoundStateBlockInstance *> > const &getShaderList(StateBlock_Type) const;
    virtual std::vector<CompoundStateBlockInstance *,std::allocator<CompoundStateBlockInstance *> > const &getShaders(StateBlock_Type) const override;
    static bool areGoblinsVisible();
    virtual void clear() override;
    virtual void renderSubMesh(matrix4 const &, MeshInstance const *, unsigned __int32 const, float const, vector4 const &, __int32);
    virtual void renderGoblinMesh(matrix4 const &, MeshInstance const *, unsigned __int32 const, float const, vector4 const &, __int32);
    virtual void render(matrix4 const &, MeshInstance const *, unsigned __int32 const, float const, vector4 const &, __int32) const override;
    virtual void setDirty() override;
    static void addIFFParseHandlers(IFF *, Mesh **, std::basic_string<char,std::char_traits<char>,std::allocator<char> > *);
    virtual __int32 import(IFF *, IFFChunk *);
    virtual __int32 getNumPolys() const override;
    virtual bool setIdentityTransform(bool);
    void addGoblin(SubMesh *);
    __int32 numGoblins() const;
    SubMesh const *getGoblin(__int32) const;
    SubMesh *getGoblin(__int32);
    virtual void setMinLOD(float) override;
    virtual void setDetailLevel(float) override;
    bool convertObject();
    std::vector<CompoundStateBlockInstance *,std::allocator<CompoundStateBlockInstance *> > m_shaders[3]; // 0x8
private:
    bool m_hasAlphaShader; // 0x2C
    std::vector<SubMesh *,std::allocator<SubMesh *> > m_mesh; // 0x30
    std::vector<SubMesh *,std::allocator<SubMesh *> > m_goblinMeshes; // 0x3C
    std::vector<Texture *,std::allocator<Texture *> > m_texture; // 0x48
    std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > m_texNameList; // 0x54
    bool m_dirty; // 0x60
    float m_lastlod; // 0x64
    bool m_identityTransform; // 0x68
    float m_sphereRadius; // 0x6C
    vector3 m_sphereCentre; // 0x70
public:
    virtual void setHasAlphaShader(bool) override;
    virtual bool hasAlphaShader() const override;
private:
    ParentMesh &operator=(ParentMesh const &);
    void computeBoundingSphere(float *, vector3 *) const;
    bool convertShaders();
    typedef std::vector<SubMesh *,std::allocator<SubMesh *> > MeshStructList;
    typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<SubMesh *> > > MeshStructListI;
    typedef std::vector<Texture *,std::allocator<Texture *> > TextureList;
    typedef std::vector<matrix4,std::allocator<matrix4> > MatrixList;
};
static_assert(sizeof(ParentMesh) == 124, "Invalid ParentMesh size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __PARENTMESH_H__
/* combined */
#ifndef __PARENTMESH_H__
#define __PARENTMESH_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class ParentMesh :
    public Mesh
{
private:
    ParentMesh(ParentMesh const &);
public:
    ParentMesh();
    virtual ~ParentMesh() override;
    static ParentMesh *create();
    virtual void getBoundingSphere(float *, vector3 *) const override;
    virtual void addSubMesh(SubMesh *) override;
    virtual __int32 numSubMesh() const override;
    SubMesh *getSubMesh(__int32, unsigned __int32 const);
    SubMesh const *getSubMesh(__int32, unsigned __int32 const) const;
    virtual SubMesh const *getSubMesh(__int32) const override;
    _inline void clearSubMeshes();
    virtual void addTexture(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, Texture *) override;
    virtual __int32 findTexture(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) override;
    virtual Texture *findTexture(__int32) const override;
    virtual unsigned __int32 addShader(StateBlock_Type, CompoundStateBlockInstance *) override;
    virtual std::vector<CompoundStateBlockInstance *,std::allocator<CompoundStateBlockInstance *> > const &getShaderList(StateBlock_Type) const;
    virtual std::vector<CompoundStateBlockInstance *,std::allocator<CompoundStateBlockInstance *> > const &getShaders(StateBlock_Type) const override;
    static bool areGoblinsVisible();
    virtual void clear() override;
    virtual void renderSubMesh(matrix4 const &, MeshInstance const *, unsigned __int32 const, float const, vector4 const &, __int32);
    virtual void renderGoblinMesh(matrix4 const &, MeshInstance const *, unsigned __int32 const, float const, vector4 const &, __int32);
    virtual void render(matrix4 const &, MeshInstance const *, unsigned __int32 const, float const, vector4 const &, __int32) const override;
    virtual void setDirty() override;
    static void addIFFParseHandlers(IFF *iff, Mesh **ppMesh, std::basic_string<char,std::char_traits<char>,std::allocator<char> > *errMsg);
    virtual __int32 import(IFF *, IFFChunk *);
    virtual __int32 getNumPolys() const override;
    virtual _inline bool setIdentityTransform(bool);
    _inline void addGoblin(SubMesh *);
    _inline __int32 numGoblins() const;
    _inline SubMesh const *getGoblin(__int32) const;
    _inline SubMesh *getGoblin(__int32);
    virtual void setMinLOD(float) override;
    virtual void setDetailLevel(float) override;
    bool convertObject();
    std::vector<CompoundStateBlockInstance *,std::allocator<CompoundStateBlockInstance *> > m_shaders[3]; // 0x8
private:
    bool m_hasAlphaShader; // 0x2C
    std::vector<SubMesh *,std::allocator<SubMesh *> > m_mesh; // 0x30
    std::vector<SubMesh *,std::allocator<SubMesh *> > m_goblinMeshes; // 0x3C
    std::vector<Texture *,std::allocator<Texture *> > m_texture; // 0x48
    std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > m_texNameList; // 0x54
    bool m_dirty; // 0x60
    float m_lastlod; // 0x64
    bool m_identityTransform; // 0x68
    float m_sphereRadius; // 0x6C
    vector3 m_sphereCentre; // 0x70
public:
    virtual _inline void setHasAlphaShader(bool) override;
    virtual _inline bool hasAlphaShader() const override;
private:
    ParentMesh &operator=(ParentMesh const &);
    void computeBoundingSphere(float *, vector3 *) const;
    bool convertShaders();
    typedef std::vector<SubMesh *,std::allocator<SubMesh *> > MeshStructList;
    typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<SubMesh *> > > MeshStructListI;
    typedef std::vector<Texture *,std::allocator<Texture *> > TextureList;
    typedef std::vector<matrix4,std::allocator<matrix4> > MatrixList;
};
static_assert(sizeof(ParentMesh) == 124, "Invalid ParentMesh size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline void ParentMesh::clearSubMeshes() // 0x100318C0
{
    mangled_assert("?clearSubMeshes@ParentMesh@@QAEXXZ");
    todo("implement");
}

_inline bool ParentMesh::setIdentityTransform(bool) // 0x10032890
{
    mangled_assert("?setIdentityTransform@ParentMesh@@UAE_N_N@Z");
    todo("implement");
}

_inline void ParentMesh::addGoblin(SubMesh *) // 0x100312B0
{
    mangled_assert("?addGoblin@ParentMesh@@QAEXPAVSubMesh@@@Z");
    todo("implement");
}

_inline __int32 ParentMesh::numGoblins() const // 0x10032660
{
    mangled_assert("?numGoblins@ParentMesh@@QBEHXZ");
    todo("implement");
}

_inline SubMesh *ParentMesh::getGoblin(__int32) // 0x100322F0
{
    mangled_assert("?getGoblin@ParentMesh@@QAEPAVSubMesh@@H@Z");
    todo("implement");
}

_inline SubMesh const *ParentMesh::getGoblin(__int32) const // 0x10032300
{
    mangled_assert("?getGoblin@ParentMesh@@QBEPBVSubMesh@@H@Z");
    todo("implement");
}

_inline void ParentMesh::setHasAlphaShader(bool) // 0x10032880
{
    mangled_assert("?setHasAlphaShader@ParentMesh@@UAEX_N@Z");
    todo("implement");
}

_inline bool ParentMesh::hasAlphaShader() const // 0x10032410
{
    mangled_assert("?hasAlphaShader@ParentMesh@@UBE_NXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __PARENTMESH_H__
#endif
