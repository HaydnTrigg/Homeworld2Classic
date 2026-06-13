#if 0
#ifndef __FXMESHLIST_H__
#define __FXMESHLIST_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FXMeshList
{
public:
    static FXMeshList *loadMeshes(char const *filename);
    FXMeshList(FXMeshList const &); /* compiler_generated() */
    FXMeshList();
    ~FXMeshList();
    unsigned __int32 getNumMeshes() const;
    Mesh *getMesh(unsigned __int32) const;
    float getMaxRadius() const;
    typedef std::vector<Mesh *,std::allocator<Mesh *> > MeshCont;
private:
    std::vector<Mesh *,std::allocator<Mesh *> > m_meshes; // 0x0
public:
    FXMeshList &operator=(FXMeshList const &); /* compiler_generated() */
};
static_assert(sizeof(FXMeshList) == 12, "Invalid FXMeshList size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __FXMESHLIST_H__
#endif
