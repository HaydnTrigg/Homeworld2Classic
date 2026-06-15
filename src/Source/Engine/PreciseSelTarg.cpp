#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <Mathlib\matrix4.h>
#include <Render\gl\lotypes.h>
#include <xmemory0>
#include <pch.h>
#include <malloc.h>
#include <profile\profile.h>
#include <iostream>
#include <Render\gl\r_types.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <HierarchyDynamic.h>
#include <Collision\primitivesfwd.h>
#include <xutility>
#include <utility>
#include <vector>
#include <xmemory>
#include <SelTarg.h>
#include <HierarchyStatic.h>
#include <Collision\Primitives\obb.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <math.h>
#include <list>
#include <Mathlib\vector3.h>
#include <MeshAnimation.h>
#include <Mathlib\vector4.h>
#include <map>
#include <xtree>
#include <gameRender.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <platform\windowinterface.h>
#include <platform\platformexports.h>
#include <boost\cstdint.hpp>
#include <Render\objects\debugrender.h>
#include <Render\objects\core.h>
#include <Render\objects\objects.h>
#include <Camera\Camera.h>
#include <Camera\Frustum.h>
#include <Mathlib\quat.h>
#include <Camera\Plane3.h>
#include <Collision\Primitives\segment.h>
#include <Decal\DecalRefMesh.h>
#include <Collision\Primitives\mesh.h>
#include <Collision\Primitives\triangle.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <debug\db.h>
#include <util\colour.h>
#include <selection.h>
#include <savegamedef.h>
#include <Collision\intersect.h>
#include <platform\osdef.h>
#include <PreciseSelTarg.h>
#include <prim.h>
#include <renderer.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>

/* ---------- constants */

/* ---------- definitions */

struct ProjectedVertex
{
    vector3 v; // 0x0
    unsigned __int32 clipBits; // 0xC
    _inline ProjectedVertex(); /* compiler_generated() */
};
static_assert(sizeof(ProjectedVertex) == 16, "Invalid ProjectedVertex size");

struct IntersectWalkInfo
{
    PrimRectangle const *rect; // 0x0
    matrix4 const *coordSys; // 0x4
    matrix4 const *modelView; // 0x8
    matrix4 const *projection; // 0xC
    void (*intersectMethod)(float *, float *, PrimRectangle *, ProjectedVertex const *, ProjectedVertex const *, ProjectedVertex const *, PrimRectangle const *); // 0x10
    float screenAreaIntersect; // 0x14
    float screenAreaTotal; // 0x18
    PrimRectangle *screenBounds; // 0x1C
};
static_assert(sizeof(IntersectWalkInfo) == 32, "Invalid IntersectWalkInfo size");

/* ---------- prototypes */

extern bool rightOfVector(vector3 const *test, vector3 const *p0, vector3 const *p1);

_static float triangleArea(vector3 const *v0, vector3 const *v1, vector3 const *v2);
_static void linesIntersect(vector3 *output, vector3 const *line1, vector3 const *line2, vector3 const *line3, vector3 const *line4);
_static unsigned __int32 verticesClipToRect(vector3 *outVertices, vector3 const *inVertices, unsigned __int32 nInputVertices, PrimRectangle const *rect);
_static void intersectTriRect(float *areaIntersect, float *areaTotal, PrimRectangle *bounds, ProjectedVertex const *v0, ProjectedVertex const *v1, ProjectedVertex const *v2, PrimRectangle const *rect);
_static void intersectTriPoint(float *areaIntersect, float *areaTotal, PrimRectangle *bounds, ProjectedVertex const *v0, ProjectedVertex const *v1, ProjectedVertex const *v2, PrimRectangle const *rect);
_static void projectAndIntersectRect(JointAnimStack const *stack, void *userData);
_static void projectAndIntersectOBB(vector3 const *vertices, IntersectWalkInfo *info);
_static void countHierarchyMeshes(JointAnimStack const *stack, void *userData);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

bool rightOfVector(vector3 const *test, vector3 const *p0, vector3 const *p1) // 0x620045
{
    mangled_assert("?rightOfVector@@YG_NPBVvector3@@00@Z");
    todo("implement");
}

OBBSelTarg::OBBSelTarg(float, HierarchyDynamic *) // 0x61EBDE
{
    mangled_assert("??0OBBSelTarg@@QAE@MPAVHierarchyDynamic@@@Z");
    todo("implement");
}

OBBSelTarg::~OBBSelTarg() // 0x61ECAF
{
    mangled_assert("??1OBBSelTarg@@QAE@XZ");
    todo("implement");
}

void OBBSelTarg::compute(vector3 const &, float, matrix3 const &, float, Camera const *) // 0x61ECC6
{
    mangled_assert("?compute@OBBSelTarg@@UAEXABVvector3@@MABVmatrix3@@MPBVCamera@@@Z");
    todo("implement");
}

bool OBBSelTarg::intersectPoint(float, float) const // 0x61EEDA
{
    mangled_assert("?intersectPoint@OBBSelTarg@@UBE_NMM@Z");
    todo("implement");
}

void OBBSelTarg::symmetricCentreRectOnPoint(PrimRectangle *) const // 0x6200B6
{
    mangled_assert("?symmetricCentreRectOnPoint@OBBSelTarg@@IBEXPAUPrimRectangle@@@Z");
    todo("implement");
}

void OBBSelTarg::getRectangleCentred(PrimRectangle *, bool, float) const // 0x61EE84
{
    mangled_assert("?getRectangleCentred@OBBSelTarg@@UBEXPAUPrimRectangle@@_NM@Z");
    todo("implement");
}

void OBBSelTarg::getRectangle(PrimRectangle *, bool, float) const // 0x61ED61
{
    mangled_assert("?getRectangle@OBBSelTarg@@UBEXPAUPrimRectangle@@_NM@Z");
    todo("implement");
}

float OBBSelTarg::intersectRect(PrimRectangle const &, bool) // 0x61F31E
{
    mangled_assert("?intersectRect@OBBSelTarg@@UAEMABUPrimRectangle@@_N@Z");
    todo("implement");
}

bool OBBSelTarg::isOnScreen() const // 0x61F879
{
    mangled_assert("?isOnScreen@OBBSelTarg@@UBE_NXZ");
    todo("implement");
}

PreciseSelTarg::PreciseSelTarg(float, float, HierarchyDynamic *) // 0x61EC10
{
    mangled_assert("??0PreciseSelTarg@@QAE@MMPAVHierarchyDynamic@@@Z");
    todo("implement");
}

_inline ProjectedVertex::ProjectedVertex() // 0x61EC4A
{
    mangled_assert("??0ProjectedVertex@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

PreciseSelTarg::~PreciseSelTarg() // 0x61ECB6
{
    mangled_assert("??1PreciseSelTarg@@QAE@XZ");
    todo("implement");
}

void PreciseSelTarg::compute(vector3 const &, float, matrix3 const &, float, Camera const *) // 0x61ED1E
{
    mangled_assert("?compute@PreciseSelTarg@@UAEXABVvector3@@MABVmatrix3@@MPBVCamera@@@Z");
    todo("implement");
}

bool PreciseSelTarg::intersectPoint(float, float) const // 0x61F0BD
{
    mangled_assert("?intersectPoint@PreciseSelTarg@@UBE_NMM@Z");
    todo("implement");
}

void PreciseSelTarg::getRectangleCentred(PrimRectangle *, bool, float) const // 0x61EEAF
{
    mangled_assert("?getRectangleCentred@PreciseSelTarg@@UBEXPAUPrimRectangle@@_NM@Z");
    todo("implement");
}

void PreciseSelTarg::getRectangle(PrimRectangle *, bool, float) const // 0x61EDF1
{
    mangled_assert("?getRectangle@PreciseSelTarg@@UBEXPAUPrimRectangle@@_NM@Z");
    todo("implement");
}

float PreciseSelTarg::intersectRect(PrimRectangle const &, bool) // 0x61F4BF
{
    mangled_assert("?intersectRect@PreciseSelTarg@@UAEMABUPrimRectangle@@_N@Z");
    todo("implement");
}

bool PreciseSelTarg::isOnScreen() const // 0x61F87E
{
    mangled_assert("?isOnScreen@PreciseSelTarg@@UBE_NXZ");
    todo("implement");
}

bool PreciseSelTarg::suitableHierarchy(HierarchyDynamic *hierarchy) // 0x620090
{
    mangled_assert("?suitableHierarchy@PreciseSelTarg@@SG_NPAVHierarchyDynamic@@@Z");
    todo("implement");
}

/* ---------- private code */

_static float triangleArea(vector3 const *v0, vector3 const *v1, vector3 const *v2) // 0x620173
{
    mangled_assert("triangleArea");
    todo("implement");
}

_static void linesIntersect(vector3 *output, vector3 const *line1, vector3 const *line2, vector3 const *line3, vector3 const *line4) // 0x61F883
{
    mangled_assert("linesIntersect");
    todo("implement");
}

_static unsigned __int32 verticesClipToRect(vector3 *outVertices, vector3 const *inVertices, unsigned __int32 nInputVertices, PrimRectangle const *rect) // 0x620211
{
    mangled_assert("verticesClipToRect");
    todo("implement");
}

_static void intersectTriRect(float *areaIntersect, float *areaTotal, PrimRectangle *bounds, ProjectedVertex const *v0, ProjectedVertex const *v1, ProjectedVertex const *v2, PrimRectangle const *rect) // 0x61F6D7
{
    mangled_assert("intersectTriRect");
    todo("implement");
}

_static void intersectTriPoint(float *areaIntersect, float *areaTotal, PrimRectangle *bounds, ProjectedVertex const *v0, ProjectedVertex const *v1, ProjectedVertex const *v2, PrimRectangle const *rect) // 0x61F5FC
{
    mangled_assert("intersectTriPoint");
    todo("implement");
}

_static void projectAndIntersectRect(JointAnimStack const *stack, void *userData) // 0x61FCA6
{
    mangled_assert("projectAndIntersectRect");
    todo("implement");
}

_static void projectAndIntersectOBB(vector3 const *vertices, IntersectWalkInfo *info) // 0x61F936
{
    mangled_assert("projectAndIntersectOBB");
    todo("implement");
}

_static void countHierarchyMeshes(JointAnimStack const *stack, void *userData) // 0x61ED49
{
    mangled_assert("countHierarchyMeshes");
    todo("implement");
}
#endif
