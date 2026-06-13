#if 0
#ifndef __DECALREFMESH_H__
#define __DECALREFMESH_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class DecalRefMesh
{
public:
    static DecalRefMesh *create();
    DecalRefMesh(DecalRefMesh const &); /* compiler_generated() */
    DecalRefMesh();
    ~DecalRefMesh();
    char const *getModelName() const;
    char const *getName() const;
    char const *getParentName() const;
    long getCRC() const;
    __int32 intersect(vector3 const &, float const, std::vector<unsigned short,std::allocator<unsigned short> > &) const;
    std::vector<vector3,std::allocator<vector3> > const &getVertices() const;
    std::vector<unsigned short,std::allocator<unsigned short> > const &getVertIndices() const;
    std::vector<vector3,std::allocator<vector3> > const &getNormals() const;
    std::vector<unsigned short,std::allocator<unsigned short> > const &getNormIndices() const;
    __int32 load(IFF *, IFFChunk *, void *, void *);
private:
    static __int32 handleDESC(IFF *iff, IFFChunk *chunk, void *user0, void *user1);
    static __int32 handleBSPH(IFF *iff, IFFChunk *chunk, void *user0, void *user1);
    static __int32 handleBBOX(IFF *iff, IFFChunk *chunk, void *user0, void *user1);
    static __int32 handleTRIS(IFF *iff, IFFChunk *chunk, void *user0, void *user1);
    static __int32 handleVNRM(IFF *iff, IFFChunk *chunk, void *user0, void *user1);
    static __int32 handleSSUB(IFF *iff, IFFChunk *chunk, void *user0, void *user1);
    void pruneOutsideTris(vector3 const &, float const, std::vector<unsigned short,std::allocator<unsigned short> > &) const;
    class Data;
    boost::scoped_ptr<DecalRefMesh::Data> m_pimpl; // 0x0
public:
    DecalRefMesh &operator=(DecalRefMesh const &); /* compiler_generated() */
};
static_assert(sizeof(DecalRefMesh) == 4, "Invalid DecalRefMesh size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __DECALREFMESH_H__
#endif
