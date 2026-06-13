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

_extern bool _sub_620045(vector3 const *, vector3 const *, vector3 const *);
bool rightOfVector(vector3 const *test, vector3 const *p0, vector3 const *p1) // 0x620045
{
    mangled_assert("?rightOfVector@@YG_NPBVvector3@@00@Z");
    todo("implement");
    bool __result = _sub_620045(test, p0, p1);
    return __result;
}

_extern _sub_61EBDE(OBBSelTarg *const, float, HierarchyDynamic *);
OBBSelTarg::OBBSelTarg(float, HierarchyDynamic *) // 0x61EBDE
{
    mangled_assert("??0OBBSelTarg@@QAE@MPAVHierarchyDynamic@@@Z");
    todo("implement");
    _sub_61EBDE(this, arg, arg);
}

_extern void _sub_61ECAF(OBBSelTarg *const);
OBBSelTarg::~OBBSelTarg() // 0x61ECAF
{
    mangled_assert("??1OBBSelTarg@@QAE@XZ");
    todo("implement");
    _sub_61ECAF(this);
}

_extern void _sub_61ECC6(OBBSelTarg *const, vector3 const &, float, matrix3 const &, float, Camera const *);
void OBBSelTarg::compute(vector3 const &, float, matrix3 const &, float, Camera const *) // 0x61ECC6
{
    mangled_assert("?compute@OBBSelTarg@@UAEXABVvector3@@MABVmatrix3@@MPBVCamera@@@Z");
    todo("implement");
    _sub_61ECC6(this, arg, arg, arg, arg, arg);
}

_extern bool _sub_61EEDA(OBBSelTarg const *const, float, float);
bool OBBSelTarg::intersectPoint(float, float) const // 0x61EEDA
{
    mangled_assert("?intersectPoint@OBBSelTarg@@UBE_NMM@Z");
    todo("implement");
    bool __result = _sub_61EEDA(this, arg, arg);
    return __result;
}

_extern void _sub_6200B6(OBBSelTarg const *const, PrimRectangle *);
void OBBSelTarg::symmetricCentreRectOnPoint(PrimRectangle *) const // 0x6200B6
{
    mangled_assert("?symmetricCentreRectOnPoint@OBBSelTarg@@IBEXPAUPrimRectangle@@@Z");
    todo("implement");
    _sub_6200B6(this, arg);
}

_extern void _sub_61EE84(OBBSelTarg const *const, PrimRectangle *, bool, float);
void OBBSelTarg::getRectangleCentred(PrimRectangle *, bool, float) const // 0x61EE84
{
    mangled_assert("?getRectangleCentred@OBBSelTarg@@UBEXPAUPrimRectangle@@_NM@Z");
    todo("implement");
    _sub_61EE84(this, arg, arg, arg);
}

_extern void _sub_61ED61(OBBSelTarg const *const, PrimRectangle *, bool, float);
void OBBSelTarg::getRectangle(PrimRectangle *, bool, float) const // 0x61ED61
{
    mangled_assert("?getRectangle@OBBSelTarg@@UBEXPAUPrimRectangle@@_NM@Z");
    todo("implement");
    _sub_61ED61(this, arg, arg, arg);
}

_extern float _sub_61F31E(OBBSelTarg *const, PrimRectangle const &, bool);
float OBBSelTarg::intersectRect(PrimRectangle const &, bool) // 0x61F31E
{
    mangled_assert("?intersectRect@OBBSelTarg@@UAEMABUPrimRectangle@@_N@Z");
    todo("implement");
    float __result = _sub_61F31E(this, arg, arg);
    return __result;
}

_extern bool _sub_61F879(OBBSelTarg const *const);
bool OBBSelTarg::isOnScreen() const // 0x61F879
{
    mangled_assert("?isOnScreen@OBBSelTarg@@UBE_NXZ");
    todo("implement");
    bool __result = _sub_61F879(this);
    return __result;
}

_extern _sub_61EC10(PreciseSelTarg *const, float, float, HierarchyDynamic *);
PreciseSelTarg::PreciseSelTarg(float, float, HierarchyDynamic *) // 0x61EC10
{
    mangled_assert("??0PreciseSelTarg@@QAE@MMPAVHierarchyDynamic@@@Z");
    todo("implement");
    _sub_61EC10(this, arg, arg, arg);
}

_extern _sub_61EC4A(ProjectedVertex *const);
_inline ProjectedVertex::ProjectedVertex() // 0x61EC4A
{
    mangled_assert("??0ProjectedVertex@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_61EC4A(this);
}

_extern void _sub_61ECB6(PreciseSelTarg *const);
PreciseSelTarg::~PreciseSelTarg() // 0x61ECB6
{
    mangled_assert("??1PreciseSelTarg@@QAE@XZ");
    todo("implement");
    _sub_61ECB6(this);
}

_extern void _sub_61ED1E(PreciseSelTarg *const, vector3 const &, float, matrix3 const &, float, Camera const *);
void PreciseSelTarg::compute(vector3 const &, float, matrix3 const &, float, Camera const *) // 0x61ED1E
{
    mangled_assert("?compute@PreciseSelTarg@@UAEXABVvector3@@MABVmatrix3@@MPBVCamera@@@Z");
    todo("implement");
    _sub_61ED1E(this, arg, arg, arg, arg, arg);
}

_extern bool _sub_61F0BD(PreciseSelTarg const *const, float, float);
bool PreciseSelTarg::intersectPoint(float, float) const // 0x61F0BD
{
    mangled_assert("?intersectPoint@PreciseSelTarg@@UBE_NMM@Z");
    todo("implement");
    bool __result = _sub_61F0BD(this, arg, arg);
    return __result;
}

_extern void _sub_61EEAF(PreciseSelTarg const *const, PrimRectangle *, bool, float);
void PreciseSelTarg::getRectangleCentred(PrimRectangle *, bool, float) const // 0x61EEAF
{
    mangled_assert("?getRectangleCentred@PreciseSelTarg@@UBEXPAUPrimRectangle@@_NM@Z");
    todo("implement");
    _sub_61EEAF(this, arg, arg, arg);
}

_extern void _sub_61EDF1(PreciseSelTarg const *const, PrimRectangle *, bool, float);
void PreciseSelTarg::getRectangle(PrimRectangle *, bool, float) const // 0x61EDF1
{
    mangled_assert("?getRectangle@PreciseSelTarg@@UBEXPAUPrimRectangle@@_NM@Z");
    todo("implement");
    _sub_61EDF1(this, arg, arg, arg);
}

_extern float _sub_61F4BF(PreciseSelTarg *const, PrimRectangle const &, bool);
float PreciseSelTarg::intersectRect(PrimRectangle const &, bool) // 0x61F4BF
{
    mangled_assert("?intersectRect@PreciseSelTarg@@UAEMABUPrimRectangle@@_N@Z");
    todo("implement");
    float __result = _sub_61F4BF(this, arg, arg);
    return __result;
}

_extern bool _sub_61F87E(PreciseSelTarg const *const);
bool PreciseSelTarg::isOnScreen() const // 0x61F87E
{
    mangled_assert("?isOnScreen@PreciseSelTarg@@UBE_NXZ");
    todo("implement");
    bool __result = _sub_61F87E(this);
    return __result;
}

_extern bool _sub_620090(HierarchyDynamic *);
bool PreciseSelTarg::suitableHierarchy(HierarchyDynamic *hierarchy) // 0x620090
{
    mangled_assert("?suitableHierarchy@PreciseSelTarg@@SG_NPAVHierarchyDynamic@@@Z");
    todo("implement");
    bool __result = _sub_620090(hierarchy);
    return __result;
}

/* ---------- private code */

_extern float _sub_620173(vector3 const *, vector3 const *, vector3 const *);
_static float triangleArea(vector3 const *v0, vector3 const *v1, vector3 const *v2) // 0x620173
{
    mangled_assert("triangleArea");
    todo("implement");
    float __result = _sub_620173(v0, v1, v2);
    return __result;
}

_extern void _sub_61F883(vector3 *, vector3 const *, vector3 const *, vector3 const *, vector3 const *);
_static void linesIntersect(vector3 *output, vector3 const *line1, vector3 const *line2, vector3 const *line3, vector3 const *line4) // 0x61F883
{
    mangled_assert("linesIntersect");
    todo("implement");
    _sub_61F883(output, line1, line2, line3, line4);
}

_extern unsigned __int32 _sub_620211(vector3 *, vector3 const *, unsigned __int32, PrimRectangle const *);
_static unsigned __int32 verticesClipToRect(vector3 *outVertices, vector3 const *inVertices, unsigned __int32 nInputVertices, PrimRectangle const *rect) // 0x620211
{
    mangled_assert("verticesClipToRect");
    todo("implement");
    unsigned __int32 __result = _sub_620211(outVertices, inVertices, nInputVertices, rect);
    return __result;
}

_extern void _sub_61F6D7(float *, float *, PrimRectangle *, ProjectedVertex const *, ProjectedVertex const *, ProjectedVertex const *, PrimRectangle const *);
_static void intersectTriRect(float *areaIntersect, float *areaTotal, PrimRectangle *bounds, ProjectedVertex const *v0, ProjectedVertex const *v1, ProjectedVertex const *v2, PrimRectangle const *rect) // 0x61F6D7
{
    mangled_assert("intersectTriRect");
    todo("implement");
    _sub_61F6D7(areaIntersect, areaTotal, bounds, v0, v1, v2, rect);
}

_extern void _sub_61F5FC(float *, float *, PrimRectangle *, ProjectedVertex const *, ProjectedVertex const *, ProjectedVertex const *, PrimRectangle const *);
_static void intersectTriPoint(float *areaIntersect, float *areaTotal, PrimRectangle *bounds, ProjectedVertex const *v0, ProjectedVertex const *v1, ProjectedVertex const *v2, PrimRectangle const *rect) // 0x61F5FC
{
    mangled_assert("intersectTriPoint");
    todo("implement");
    _sub_61F5FC(areaIntersect, areaTotal, bounds, v0, v1, v2, rect);
}

_extern void _sub_61FCA6(JointAnimStack const *, void *);
_static void projectAndIntersectRect(JointAnimStack const *stack, void *userData) // 0x61FCA6
{
    mangled_assert("projectAndIntersectRect");
    todo("implement");
    _sub_61FCA6(stack, userData);
}

_extern void _sub_61F936(vector3 const *, IntersectWalkInfo *);
_static void projectAndIntersectOBB(vector3 const *vertices, IntersectWalkInfo *info) // 0x61F936
{
    mangled_assert("projectAndIntersectOBB");
    todo("implement");
    _sub_61F936(vertices, info);
}

_extern void _sub_61ED49(JointAnimStack const *, void *);
_static void countHierarchyMeshes(JointAnimStack const *stack, void *userData) // 0x61ED49
{
    mangled_assert("countHierarchyMeshes");
    todo("implement");
    _sub_61ED49(stack, userData);
}
#endif
