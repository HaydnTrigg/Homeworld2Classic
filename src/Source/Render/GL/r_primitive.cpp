#if 0
/* ---------- headers */

#include "decomp.h"
#include <Render\GL\r_stats.h>
#include <list>
#include <Render\GL\pch.h>
#include <xmemory0>
#include <profile\profile.h>
#include <iostream>
#include <new>
#include <xstddef>
#include <util\types.h>
#include <debug\debug.h>
#include <debug\filter.h>
#include <Mathlib\vector4.h>
#include <type_traits>
#include <map>
#include <xtree>
#include <xutility>
#include <utility>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void rglStartupPrimitive();
extern void rglShutdownPrimitive();
extern void rglRenderPrimitive(PrimitiveType prim, __int32 nVerts, FatVertex const *vert, unsigned __int32 mask);
extern _inline void rglRenderIndexedPrimitiveMultiTexture_Vertex_Normal_Texture0(unsigned __int32 glPrim, __int32 nIndices, FatVertex const *vert, __int32 const *indices);
extern _inline void rglRenderIndexedPrimitive_Vertex_Normal_Texture0(unsigned __int32 glPrim, __int32 nIndices, FatVertex const *vert, __int32 const *indices);
extern void rglRenderIndexedPrimitive(PrimitiveType prim, __int32 nIndices, FatVertex const *vert, __int32 const *indices, unsigned __int32 mask);
extern bool rglRenderVertexArray(PrimitiveType prim, __int32 nVert);
extern bool rglRenderIndexedVertexArray(PrimitiveType prim, __int32 nIndices, __int32 const *indices);
extern void rglRawPrimitive(bool begin, PrimitiveType primtype);
extern void rglRawSvertex(float x, float y);
extern void rglRawVertexv(vector3 const &vert);
extern void rglRawNormalv(vector3 const &norm);
extern void rglRawUVv(vector2 const &uv);
extern void rglRawMultiUVv(__int32 n, vector2 const &uv);
extern void rglRawElement(__int32 n);
extern __int32 rglGenLists(__int32 n);
extern void rglDelLists(__int32 dlist, __int32 n);
extern void rglBeginList(__int32 dlist, DisplayListOp op);
extern void rglEndList();
extern void rglSetListBase(__int32 base);
extern void rglCallList(__int32 dlist);
extern void rglCallLists(__int32 n, unsigned char const *lists);
extern void rglResetState();

_static unsigned __int32 mapPrimToGL(PrimitiveType prim);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern __int32 *g_indexPool; // 0x10021F68
}

/* ---------- public code */

void rglStartupPrimitive() // 0x100111A3
{
    mangled_assert("?rglStartupPrimitive@@YGXXZ");
    todo("implement");
}

void rglShutdownPrimitive() // 0x1001118B
{
    mangled_assert("?rglShutdownPrimitive@@YGXXZ");
    todo("implement");
}

void rglRenderPrimitive(PrimitiveType prim, __int32 nVerts, FatVertex const *vert, unsigned __int32 mask) // 0x10010F4F
{
    mangled_assert("?rglRenderPrimitive@@YGXW4PrimitiveType@@HPBUFatVertex@@I@Z");
    todo("implement");
}

_inline void rglRenderIndexedPrimitiveMultiTexture_Vertex_Normal_Texture0(unsigned __int32 glPrim, __int32 nIndices, FatVertex const *vert, __int32 const *indices) // 0x10010E73
{
    mangled_assert("?rglRenderIndexedPrimitiveMultiTexture_Vertex_Normal_Texture0@@YGXIHPBUFatVertex@@PBH@Z");
    todo("implement");
}

_inline void rglRenderIndexedPrimitive_Vertex_Normal_Texture0(unsigned __int32 glPrim, __int32 nIndices, FatVertex const *vert, __int32 const *indices) // 0x10010ECB
{
    mangled_assert("?rglRenderIndexedPrimitive_Vertex_Normal_Texture0@@YGXIHPBUFatVertex@@PBH@Z");
    todo("implement");
}

void rglRenderIndexedPrimitive(PrimitiveType prim, __int32 nIndices, FatVertex const *vert, __int32 const *indices, unsigned __int32 mask) // 0x10010CFD
{
    mangled_assert("?rglRenderIndexedPrimitive@@YGXW4PrimitiveType@@HPBUFatVertex@@PBHI@Z");
    todo("implement");
}

bool rglRenderVertexArray(PrimitiveType prim, __int32 nVert) // 0x10011009
{
    mangled_assert("?rglRenderVertexArray@@YG_NW4PrimitiveType@@H@Z");
    todo("implement");
}

bool rglRenderIndexedVertexArray(PrimitiveType prim, __int32 nIndices, __int32 const *indices) // 0x10010F1E
{
    mangled_assert("?rglRenderIndexedVertexArray@@YG_NW4PrimitiveType@@HPBH@Z");
    todo("implement");
}

void rglRawPrimitive(bool begin, PrimitiveType primtype) // 0x10010C8A
{
    mangled_assert("?rglRawPrimitive@@YGX_NW4PrimitiveType@@@Z");
    todo("implement");
}

void rglRawSvertex(float x, float y) // 0x10010CAE
{
    mangled_assert("?rglRawSvertex@@YGXMM@Z");
    todo("implement");
}

void rglRawVertexv(vector3 const &vert) // 0x10010CF7
{
    mangled_assert("?rglRawVertexv@@YGXABVvector3@@@Z");
    todo("implement");
}

void rglRawNormalv(vector3 const &norm) // 0x10010C84
{
    mangled_assert("?rglRawNormalv@@YGXABVvector3@@@Z");
    todo("implement");
}

void rglRawUVv(vector2 const &uv) // 0x10010CD2
{
    mangled_assert("?rglRawUVv@@YGXABVvector2@@@Z");
    todo("implement");
}

void rglRawMultiUVv(__int32 n, vector2 const &uv) // 0x10010C5A
{
    mangled_assert("?rglRawMultiUVv@@YGXHABVvector2@@@Z");
    todo("implement");
}

void rglRawElement(__int32 n) // 0x10010C54
{
    mangled_assert("?rglRawElement@@YGXH@Z");
    todo("implement");
}

__int32 rglGenLists(__int32 n) // 0x10010C3B
{
    mangled_assert("?rglGenLists@@YGHH@Z");
    todo("implement");
}

void rglDelLists(__int32 dlist, __int32 n) // 0x10010C16
{
    mangled_assert("?rglDelLists@@YGXHH@Z");
    todo("implement");
}

void rglBeginList(__int32 dlist, DisplayListOp op) // 0x10010BC9
{
    mangled_assert("?rglBeginList@@YGXHW4DisplayListOp@@@Z");
    todo("implement");
}

void rglEndList() // 0x10010C2D
{
    mangled_assert("?rglEndList@@YGXXZ");
    todo("implement");
}

void rglSetListBase(__int32 base) // 0x10011185
{
    mangled_assert("?rglSetListBase@@YGXH@Z");
    todo("implement");
}

void rglCallList(__int32 dlist) // 0x10010BF8
{
    mangled_assert("?rglCallList@@YGXH@Z");
    todo("implement");
}

void rglCallLists(__int32 n, unsigned char const *lists) // 0x10010BFE
{
    mangled_assert("?rglCallLists@@YGXHPBE@Z");
    todo("implement");
}

void rglResetState() // 0x10011073
{
    mangled_assert("?rglResetState@@YGXXZ");
    todo("implement");
}

/* ---------- private code */

_static unsigned __int32 mapPrimToGL(PrimitiveType prim) // 0x10010B59
{
    mangled_assert("mapPrimToGL");
    todo("implement");
}
#endif
