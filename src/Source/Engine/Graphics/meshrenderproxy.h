#if 0
#ifndef __MESHRENDERPROXY_H__
#define __MESHRENDERPROXY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class MeshRenderProxy
{
public:
    virtual void Render(SubMesh *, matrix4 const &, MeshInstance const *, unsigned __int32, float, vector4 const &, bool) = 0;
    MeshRenderProxy(MeshRenderProxy const &); /* compiler_generated() */
    _inline MeshRenderProxy(); /* compiler_generated() */
    MeshRenderProxy &operator=(MeshRenderProxy const &); /* compiler_generated() */
};
static_assert(sizeof(MeshRenderProxy) == 4, "Invalid MeshRenderProxy size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MESHRENDERPROXY_H__
#endif
