#if 0
#ifndef __RAWMESH_H__
#define __RAWMESH_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct RawPoly
{
    vector3 m_verts[3]; // 0x0
    vector2 m_uv[3]; // 0x24
    vector3 m_normals[3]; // 0x3C
    __int32 m_matIndex; // 0x60
    unsigned __int32 m_smGroup; // 0x64
    RawPoly(); /* compiler_generated() */
};
static_assert(sizeof(RawPoly) == 104, "Invalid RawPoly size");

struct OptPoly
{
    __int32 m_verts[3]; // 0x0
    __int32 m_uv[3]; // 0xC
    __int32 m_normals[3]; // 0x18
    __int32 m_matIndex; // 0x24
    unsigned __int32 m_smGroup; // 0x28
};
static_assert(sizeof(OptPoly) == 44, "Invalid OptPoly size");

struct HashEntry
{
    __int32 m_index; // 0x0
    unsigned __int32 m_hash; // 0x4
};
static_assert(sizeof(HashEntry) == 8, "Invalid HashEntry size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __RAWMESH_H__
/* combined */
#ifndef __RAWMESH_H__
#define __RAWMESH_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct RawPoly
{
    vector3 m_verts[3]; // 0x0
    vector2 m_uv[3]; // 0x24
    vector3 m_normals[3]; // 0x3C
    __int32 m_matIndex; // 0x60
    unsigned __int32 m_smGroup; // 0x64
    RawPoly(); /* compiler_generated() */
};
static_assert(sizeof(RawPoly) == 104, "Invalid RawPoly size");

struct OptPoly
{
    __int32 m_verts[3]; // 0x0
    __int32 m_uv[3]; // 0xC
    __int32 m_normals[3]; // 0x18
    __int32 m_matIndex; // 0x24
    unsigned __int32 m_smGroup; // 0x28
};
static_assert(sizeof(OptPoly) == 44, "Invalid OptPoly size");

struct HashEntry
{
    __int32 m_index; // 0x0
    unsigned __int32 m_hash; // 0x4
};
static_assert(sizeof(HashEntry) == 8, "Invalid HashEntry size");

class RawMesh :
    public Core
{
public:
    Table<RawPoly> m_rawPoly; // 0x4
    Table<OptPoly> m_optPoly; // 0xC
    Table<HashEntry> m_hashVert[256]; // 0x14
    Table<HashEntry> m_hashUV[256]; // 0x814
    Table<HashEntry> m_hashNorm[256]; // 0x1014
    Table<vector3> m_verts; // 0x1814
    Table<vector2> m_uv; // 0x181C
    Table<vector3> m_faceNormals; // 0x1824
    Table<vector3> m_normals; // 0x182C
    static RawMesh *create();
    void PurgeAll();
    __int32 AppendVert(vector3 &);
    __int32 AppendUV(vector2 &);
    __int32 AppendNorm(vector3 &);
    void AppendPoly(RawPoly &);
    void AppendOptVert(vector3 &);
    void AppendOptUV(vector2 &);
    void AppendOptNorm(vector3 &);
    void AppendOptPoly(OptPoly &);
    void ComputeFaceNormals();
    void ComputeVertexNormals();
    void Optimize();
    Geometry *produceGeometry(__int32, Material **, bool);
    _inline RawMesh(RawMesh const &); /* compiler_generated() */
    _inline RawMesh(); /* compiler_generated() */
    virtual _inline ~RawMesh() override; /* compiler_generated() */
    _inline RawMesh &operator=(RawMesh const &); /* compiler_generated() */
};
static_assert(sizeof(RawMesh) == 6196, "Invalid RawMesh size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __RAWMESH_H__
#endif
