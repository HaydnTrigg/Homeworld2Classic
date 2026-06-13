#if 0
#ifndef __GEOMETRY_H__
#define __GEOMETRY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct RepStruct
{
    Material *m_m; // 0x0
    PrimSetList *m_pl; // 0x4
};
static_assert(sizeof(RepStruct) == 8, "Invalid RepStruct size");

class Geometry :
    public Core
{
private:
    Geometry(Geometry const &);
public:
    Geometry();
    virtual ~Geometry() override;
    static bool addModifier(Modifier *);
    static bool remModifier(Modifier *);
    static bool clearModifiers();
    static bool suspendModifiers(bool);
    static bool processModifiers(VertexArray *, unsigned __int32 *, bool);
    static __int32 getNumModifiers();
    static void setStats(__int32, __int32);
    static void getStats(__int32 *, __int32 *);
    void render(Mesh::LockType);
    void sort();
    void clear();
    void setDirty();
    static Geometry *create();
    PrimSetList *getPrimSetList(Material *);
    void setPrimSetList(Material *, PrimSetList *);
    void addPrimSet(Material *, PrimSet *);
    void setVertexArray(VertexArray *, bool);
    VertexArray const *getVertexArray() const;
    void setMaterialOwnership(bool);
private:
    std::_Vector_iterator<std::_Vector_val<std::_Simple_types<RepStruct> > > find(Material *);
    void renderLockOnce();
    void renderDisplayList(Mesh::LockType);
    Geometry &operator=(Geometry const &);
    static bool m_suspend;
    std::vector<RepStruct,std::allocator<RepStruct> > m_rep; // 0x4
    VertexArray *m_va; // 0x10
    bool m_ownVertexArray; // 0x14
    bool m_ownMaterials; // 0x15
    __int32 m_dlist; // 0x18
};
static_assert(sizeof(Geometry) == 28, "Invalid Geometry size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __GEOMETRY_H__
/* combined */
#ifndef __GEOMETRY_H__
#define __GEOMETRY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct RepStruct
{
    Material *m_m; // 0x0
    PrimSetList *m_pl; // 0x4
};
static_assert(sizeof(RepStruct) == 8, "Invalid RepStruct size");

class Geometry :
    public Core
{
private:
    Geometry(Geometry const &);
public:
    Geometry();
    virtual ~Geometry() override;
    static bool addModifier(Modifier *mod);
    static bool remModifier(Modifier *mod);
    static bool clearModifiers();
    static bool suspendModifiers(bool state);
    static bool processModifiers(VertexArray *va, unsigned __int32 *mask, bool begin);
    static __int32 getNumModifiers();
    static void setStats(__int32 _nVertices, __int32 _nPolygons);
    static void getStats(__int32 *_nVertices, __int32 *_nPolygons);
    void render(Mesh::LockType);
    void sort();
    void clear();
    void setDirty();
    static Geometry *create();
    PrimSetList *getPrimSetList(Material *);
    void setPrimSetList(Material *, PrimSetList *);
    void addPrimSet(Material *, PrimSet *);
    _inline void setVertexArray(VertexArray *, bool);
    _inline VertexArray const *getVertexArray() const;
    _inline void setMaterialOwnership(bool);
private:
    std::_Vector_iterator<std::_Vector_val<std::_Simple_types<RepStruct> > > find(Material *);
    void renderLockOnce();
    void renderDisplayList(Mesh::LockType);
    Geometry &operator=(Geometry const &);
    static bool m_suspend;
    std::vector<RepStruct,std::allocator<RepStruct> > m_rep; // 0x4
    VertexArray *m_va; // 0x10
    bool m_ownVertexArray; // 0x14
    bool m_ownMaterials; // 0x15
    __int32 m_dlist; // 0x18
};
static_assert(sizeof(Geometry) == 28, "Invalid Geometry size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_1001BB30(Geometry *const, VertexArray *, bool);
_inline void Geometry::setVertexArray(VertexArray *, bool) // 0x1001BB30
{
    mangled_assert("?setVertexArray@Geometry@@QAEXPAVVertexArray@@_N@Z");
    todo("implement");
    _sub_1001BB30(this, arg, arg);
}

_extern VertexArray const *_sub_10019530(Geometry const *const);
_inline VertexArray const *Geometry::getVertexArray() const // 0x10019530
{
    mangled_assert("?getVertexArray@Geometry@@QBEPBVVertexArray@@XZ");
    todo("implement");
    VertexArray const * __result = _sub_10019530(this);
    return __result;
}

_extern void _sub_1001BA60(Geometry *const, bool);
_inline void Geometry::setMaterialOwnership(bool) // 0x1001BA60
{
    mangled_assert("?setMaterialOwnership@Geometry@@QAEX_N@Z");
    todo("implement");
    _sub_1001BA60(this, arg);
}

/* ---------- private code */

#endif // __GEOMETRY_H__
#endif
