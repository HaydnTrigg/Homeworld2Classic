#if 0
/* ---------- headers */

#include "decomp.h"
#include <HierarchyStatic.h>
#include <Collision\Primitives\obb.h>
#include <xstring>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <pch.h>
#include <platform\osdef.h>
#include <Mathlib\matrix3.h>
#include <renderer.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <Render\gl\lotypes.h>
#include <xutility>
#include <utility>
#include <Render\gl\r_types.h>
#include <vector>
#include <xmemory>
#include <math.h>
#include <hw2box\hw2box.h>
#include <list>
#include <MeshAnimation.h>
#include <Decal\DecalRefMesh.h>
#include <Collision\Primitives\mesh.h>
#include <Collision\Primitives\triangle.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <map>
#include <xtree>
#include <Collision\Primitives\segment.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <boost\cstdint.hpp>
#include <Mathlib\quat.h>
#include <Collision\intersect.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <profile\profile.h>
#include <debug\db.h>
#include <iostream>
#include <util\colour.h>
#include <savegamedef.h>
#include <HierarchyDynamic.h>
#include <Collision\primitivesfwd.h>

/* ---------- constants */

/* ---------- definitions */

struct VisibilityWalkData
{
    HierarchyJoint const *joint; // 0x0
    bool bVisible; // 0x4
};
static_assert(sizeof(VisibilityWalkData) == 8, "Invalid VisibilityWalkData size");

/* ---------- prototypes */


_static void setVisibilityIfSubTreeOf(JointAnimStack const *stack, void *userData);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern AnimatorHold s_animatorHold; // 0x83B830
}

/* ---------- public code */

HierarchyDynamic::HierarchyDynamic() // 0x5D153D
{
    mangled_assert("??0HierarchyDynamic@@QAE@XZ");
    todo("implement");
}

_inline JointAnimStack::JointAnimStack(JointAnimStack const &) // 0x5D155C
{
    mangled_assert("??0JointAnimStack@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

HierarchyDynamic::~HierarchyDynamic() // 0x5D15EC
{
    mangled_assert("??1HierarchyDynamic@@QAE@XZ");
    todo("implement");
}

void HierarchyDynamic::updateAnimators(float) // 0x5D3CEE
{
    mangled_assert("?updateAnimators@HierarchyDynamic@@QAEXM@Z");
    todo("implement");
}

bool HierarchyDynamic::addAnimator(MeshAnimator *) // 0x5D336B
{
    mangled_assert("?addAnimator@HierarchyDynamic@@QAE_NPAVMeshAnimator@@@Z");
    todo("implement");
}

bool HierarchyDynamic::removeAnimator(MeshAnimator *) // 0x5D3AA5
{
    mangled_assert("?removeAnimator@HierarchyDynamic@@QAE_NPAVMeshAnimator@@@Z");
    todo("implement");
}

void HierarchyDynamic::mirrorStatic(HierarchyStatic const *) // 0x5D38B3
{
    mangled_assert("?mirrorStatic@HierarchyDynamic@@QAEXPBVHierarchyStatic@@@Z");
    todo("implement");
}

bool HierarchyDynamic::pushAnimJointByName(MeshAnimJoint *, char const *) // 0x5D39C2
{
    mangled_assert("?pushAnimJointByName@HierarchyDynamic@@QAE_NPAVMeshAnimJoint@@PBD@Z");
    todo("implement");
}

_inline AnimatorHold::AnimatorHold() // 0x5D1534
{
    mangled_assert("??0AnimatorHold@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

void HierarchyDynamic::setJointVisible(HierarchyJoint const *, bool) // 0x5D3C6D
{
    mangled_assert("?setJointVisible@HierarchyDynamic@@QAEXPBVHierarchyJoint@@_N@Z");
    todo("implement");
}

bool HierarchyDynamic::pushAnimJoint(MeshAnimJoint *, HierarchyJoint *) // 0x5D3997
{
    mangled_assert("?pushAnimJoint@HierarchyDynamic@@QAE_NPAVMeshAnimJoint@@PAVHierarchyJoint@@@Z");
    todo("implement");
}

JointAnimStack const *HierarchyDynamic::findStackByStatic(HierarchyJoint const *) const // 0x5D35E3
{
    mangled_assert("?findStackByStatic@HierarchyDynamic@@QBEPBVJointAnimStack@@PBVHierarchyJoint@@@Z");
    todo("implement");
}

JointAnimStack *HierarchyDynamic::findStackByStatic(HierarchyJoint const *) // 0x5D35C5
{
    mangled_assert("?findStackByStatic@HierarchyDynamic@@QAEPAVJointAnimStack@@PBVHierarchyJoint@@@Z");
    todo("implement");
}

void HierarchyDynamic::updateJointTxfm(bool) // 0x5D3DB1
{
    mangled_assert("?updateJointTxfm@HierarchyDynamic@@QAEX_N@Z");
    todo("implement");
}

void HierarchyDynamic::render(Camera const *, matrix4 const &, MeshRenderProxy &, MeshInstance const *, unsigned __int32 const, float const, float const, vector4 const &, __int32) // 0x5D3B37
{
    mangled_assert("?render@HierarchyDynamic@@QAEXPBVCamera@@ABVmatrix4@@AAVMeshRenderProxy@@PBVMeshInstance@@IMMABVvector4@@H@Z");
    todo("implement");
}

bool HierarchyDynamic::getConcatenatedDeterministicMatrix(HierarchyJoint const *, matrix4 &) const // 0x5D3602
{
    mangled_assert("?getConcatenatedDeterministicMatrix@HierarchyDynamic@@QBE_NPBVHierarchyJoint@@AAVmatrix4@@@Z");
    todo("implement");
}

bool HierarchyDynamic::DetectCollision(matrix3 const &, vector3 const &, Collision::Segment const &, Collision::Point &) const // 0x5D1935
{
    mangled_assert("?DetectCollision@HierarchyDynamic@@QBE_NABVmatrix3@@ABVvector3@@ABVSegment@Collision@@AAUPoint@5@@Z");
    todo("implement");
}

bool HierarchyDynamic::DetectCollisions(matrix3 const &, vector3 const &, Collision::Segment const &, Collision::PointPair &) const // 0x5D225C
{
    mangled_assert("?DetectCollisions@HierarchyDynamic@@QBE_NABVmatrix3@@ABVvector3@@ABVSegment@Collision@@AAUPointPair@5@@Z");
    todo("implement");
}

void HierarchyDynamic::walk(void (*)(JointAnimStack const *, void *), void *) const // 0x5D3EDC
{
    mangled_assert("?walk@HierarchyDynamic@@QBEXP6GXPBVJointAnimStack@@PAX@Z1@Z");
    todo("implement");
}

JointAnimStack::JointAnimStack() // 0x5D15A3
{
    mangled_assert("??0JointAnimStack@@QAE@XZ");
    todo("implement");
}

_inline MeshAnimator::MeshAnimator() // 0x5D15CD
{
    mangled_assert("??0MeshAnimator@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline AnimatorHold::~AnimatorHold() // 0x5D15E5
{
    mangled_assert("??1AnimatorHold@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

JointAnimStack::~JointAnimStack() // 0x5D1658
{
    mangled_assert("??1JointAnimStack@@QAE@XZ");
    todo("implement");
}

_inline JointAnimStack &JointAnimStack::operator=(JointAnimStack const &) // 0x5D1735
{
    mangled_assert("??4JointAnimStack@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

bool JointAnimStack::push(MeshAnimJoint *) // 0x5D397D
{
    mangled_assert("?push@JointAnimStack@@QAE_NPAVMeshAnimJoint@@@Z");
    todo("implement");
}

bool JointAnimStack::pop(MeshAnimator *) // 0x5D392B
{
    mangled_assert("?pop@JointAnimStack@@QAE_NPAVMeshAnimator@@@Z");
    todo("implement");
}

bool JointAnimStack::DetectCollision(Collision::Segment const &, Collision::Point &) const // 0x5D1C97
{
    mangled_assert("?DetectCollision@JointAnimStack@@QBE_NABVSegment@Collision@@AAUPoint@3@@Z");
    todo("implement");
}

bool JointAnimStack::DetectCollisions(Collision::Segment const &, Collision::PointPair &) const // 0x5D26DE
{
    mangled_assert("?DetectCollisions@JointAnimStack@@QBE_NABVSegment@Collision@@AAUPointPair@3@@Z");
    todo("implement");
}

/* ---------- private code */

_static void setVisibilityIfSubTreeOf(JointAnimStack const *stack, void *userData) // 0x5D3C9A
{
    mangled_assert("setVisibilityIfSubTreeOf");
    todo("implement");
}
#endif
