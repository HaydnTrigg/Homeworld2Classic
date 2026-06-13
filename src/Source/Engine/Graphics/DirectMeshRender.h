#if 0
#ifndef __DIRECTMESHRENDER_H__
#define __DIRECTMESHRENDER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class DirectMeshRender :
    public MeshRenderProxy
{
public:
    virtual void Render(SubMesh *, matrix4 const &, MeshInstance const *, unsigned __int32, float, vector4 const &, bool) override;
    DirectMeshRender(DirectMeshRender const &); /* compiler_generated() */
    _inline DirectMeshRender(); /* compiler_generated() */
    DirectMeshRender &operator=(DirectMeshRender const &); /* compiler_generated() */
};
static_assert(sizeof(DirectMeshRender) == 4, "Invalid DirectMeshRender size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __DIRECTMESHRENDER_H__
#endif
