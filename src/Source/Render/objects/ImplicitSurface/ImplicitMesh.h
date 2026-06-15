#if 0
#ifndef __IMPLICITMESH_H__
#define __IMPLICITMESH_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class ImplicitMesh
{
public:
    _inline ImplicitMesh(ImplicitMesh const &); /* compiler_generated() */
    ImplicitMesh();
    ~ImplicitMesh();
    void render(rndTable *) const;
    void reserve(__int32);
    void clear();
    void beginCreate();
    void endCreate();
    unsigned __int32 addVertex(float, float, float);
    unsigned __int32 addVertex(vector3 const &);
    unsigned __int32 addNormal(float, float, float);
    unsigned __int32 addNormal(vector3 const &);
    void addTriangle(unsigned __int32, unsigned __int32, unsigned __int32);
    void generateNormals();
    _inline VertexArray const *getVertexArray() const;
private:
    bool findVertex(vector3 const &, unsigned __int32 *);
    unsigned __int32 m_currentFat; // 0x0
    std::vector<FatVertex,std::allocator<FatVertex> > m_fats; // 0x4
    std::vector<int,std::allocator<int> > m_indices; // 0x10
    FatVertex m_lastFat; // 0x1C
    VertexArray *m_va; // 0x84
public:
    _inline ImplicitMesh &operator=(ImplicitMesh const &); /* compiler_generated() */
};
static_assert(sizeof(ImplicitMesh) == 136, "Invalid ImplicitMesh size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline VertexArray const *ImplicitMesh::getVertexArray() const // 0x100323F0
{
    mangled_assert("?getVertexArray@ImplicitMesh@@QBEPBVVertexArray@@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __IMPLICITMESH_H__
#endif
