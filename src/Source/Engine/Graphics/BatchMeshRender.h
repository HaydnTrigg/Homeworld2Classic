#if 0
#ifndef __BATCHMESHRENDER_H__
#define __BATCHMESHRENDER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class BatchMeshRender :
    public MeshRenderProxy
{
public:
    virtual void Render(SubMesh *, matrix4 const &, MeshInstance const *, unsigned __int32, float, vector4 const &, bool) override;
    BatchMeshRender(BatchMeshRender const &); /* compiler_generated() */
    _inline BatchMeshRender(); /* compiler_generated() */
    BatchMeshRender &operator=(BatchMeshRender const &); /* compiler_generated() */
};
static_assert(sizeof(BatchMeshRender) == 4, "Invalid BatchMeshRender size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __BATCHMESHRENDER_H__
#endif
