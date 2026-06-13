#if 0
/* ---------- headers */

#include "decomp.h"
#include <HierarchyDynamic.h>
#include <xstring>
#include <Collision\primitivesfwd.h>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <pch.h>
#include <platform\osdef.h>
#include <fileio\iff.h>
#include <Mathlib\matrix3.h>
#include <renderer.h>
#include <Render\objects\stateblock\stateblock.h>
#include <Render\gl\types.h>
#include <Render\objects\texture.h>
#include <new>
#include <exception>
#include <Mathlib\matvec.h>
#include <Render\objects\textureregistry.h>
#include <xstddef>
#include <type_traits>
#include <Render\gl\lotypes.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <Render\gl\r_types.h>
#include <debug\ctassert.h>
#include <Collision\Primitives\mesh.h>
#include <Collision\Primitives\triangle.h>
#include <Decal\DecalRefMesh.h>
#include <list>
#include <MeshAnimation.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <map>
#include <xtree>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <Render\gl\r_defines.h>
#include <Render\objects\mesh.h>
#include <Render\gl\glext.h>
#include <Render\objects\core.h>
#include <Render\objects\objects.h>
#include <boost\cstdint.hpp>
#include <Mathlib\quat.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <Render\objects\stateblock\stateblocktypes.h>
#include <debug\db.h>
#include <hw2box\hw2box.h>
#include <Graphics\meshrenderproxy.h>
#include <Render\objects\stateblock\statevariableinstance.h>
#include <util\dictionary.h>
#include <util\utilexports.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <savegamedef.h>
#include <bitset>
#include <Render\objects\parentmesh.h>
#include <hash_map>
#include <xhash>
#include <HierarchyStatic.h>
#include <Collision\Primitives\obb.h>
#include <Render\objects\renderable.h>
#include <string>
#include <Camera\Camera.h>
#include <Camera\Frustum.h>
#include <Camera\Plane3.h>
#include <profile\profile.h>
#include <iostream>

/* ---------- constants */

/* ---------- definitions */

struct HierarchyTransform
{
    vector3 m_translation; // 0x0
    vector3 m_eulerRotation; // 0xC
    vector3 m_scale; // 0x18
    vector3 m_eulerRotationAxis; // 0x24
    bool m_degreesOfFreedom[3]; // 0x30
    _inline HierarchyTransform(); /* compiler_generated() */
};
static_assert(sizeof(HierarchyTransform) == 52, "Invalid HierarchyTransform size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern AnimatorHold s_animatorHold; // 0x83B870
}

/* ---------- public code */

_extern _sub_5D4122(HierarchyStatic *const);
HierarchyStatic::HierarchyStatic() // 0x5D4122
{
    mangled_assert("??0HierarchyStatic@@QAE@XZ");
    todo("implement");
    _sub_5D4122(this);
}

_extern _sub_5D4135(HierarchyTransform *const);
_inline HierarchyTransform::HierarchyTransform() // 0x5D4135
{
    mangled_assert("??0HierarchyTransform@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5D4135(this);
}

_extern void _sub_5D4146(AnimJointHold *const);
_inline AnimJointHold::~AnimJointHold() // 0x5D4146
{
    mangled_assert("??1AnimJointHold@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5D4146(this);
}

_extern HierarchyJoint *_sub_5D44FE(HierarchyStatic *const, char const *, char const *, HierarchyTransform const &);
HierarchyJoint *HierarchyStatic::createChild(char const *, char const *, HierarchyTransform const &) // 0x5D44FE
{
    mangled_assert("?createChild@HierarchyStatic@@QAEPAVHierarchyJoint@@PBD0ABUHierarchyTransform@@@Z");
    todo("implement");
    HierarchyJoint * __result = _sub_5D44FE(this, arg, arg, arg);
    return __result;
}

_extern bool _sub_5D43EA(HierarchyStatic *const, HierarchyJoint *, char const *);
bool HierarchyStatic::attachChildToParent(HierarchyJoint *, char const *) // 0x5D43EA
{
    mangled_assert("?attachChildToParent@HierarchyStatic@@AAE_NPAVHierarchyJoint@@PBD@Z");
    todo("implement");
    bool __result = _sub_5D43EA(this, arg, arg);
    return __result;
}

_extern bool _sub_5D448E(HierarchyStatic *const, __int32, char const *);
bool HierarchyStatic::attachRenderableIndexToParent(__int32, char const *) // 0x5D448E
{
    mangled_assert("?attachRenderableIndexToParent@HierarchyStatic@@QAE_NHPBD@Z");
    todo("implement");
    bool __result = _sub_5D448E(this, arg, arg);
    return __result;
}

_extern bool _sub_5D4442(HierarchyStatic *const, __int32, char const *);
bool HierarchyStatic::attachGoblinIndexToParent(__int32, char const *) // 0x5D4442
{
    mangled_assert("?attachGoblinIndexToParent@HierarchyStatic@@QAE_NHPBD@Z");
    todo("implement");
    bool __result = _sub_5D4442(this, arg, arg);
    return __result;
}

_extern bool _sub_5D4CC6(HierarchyStatic *const, ParentMesh *);
bool HierarchyStatic::setParentMesh(ParentMesh *) // 0x5D4CC6
{
    mangled_assert("?setParentMesh@HierarchyStatic@@QAE_NPAVParentMesh@@@Z");
    todo("implement");
    bool __result = _sub_5D4CC6(this, arg);
    return __result;
}

_extern HierarchyJoint *_sub_5D4769(HierarchyStatic *const, char const *);
HierarchyJoint *HierarchyStatic::getJoint(char const *) // 0x5D4769
{
    mangled_assert("?getJoint@HierarchyStatic@@QAEPAVHierarchyJoint@@PBD@Z");
    todo("implement");
    HierarchyJoint * __result = _sub_5D4769(this, arg);
    return __result;
}

_extern HierarchyJoint const *_sub_5D4778(HierarchyStatic const *const, char const *);
HierarchyJoint const *HierarchyStatic::getJoint(char const *) const // 0x5D4778
{
    mangled_assert("?getJoint@HierarchyStatic@@QBEPBVHierarchyJoint@@PBD@Z");
    todo("implement");
    HierarchyJoint const * __result = _sub_5D4778(this, arg);
    return __result;
}

_extern bool _sub_5D4787(HierarchyStatic const *const, char const *, matrix3 &);
bool HierarchyStatic::getJointOrientation(char const *, matrix3 &) const // 0x5D4787
{
    mangled_assert("?getJointOrientation@HierarchyStatic@@QBE_NPBDAAVmatrix3@@@Z");
    todo("implement");
    bool __result = _sub_5D4787(this, arg, arg);
    return __result;
}

_extern bool _sub_5D47C8(HierarchyStatic const *const, char const *, vector3 &);
bool HierarchyStatic::getJointPosition(char const *, vector3 &) const // 0x5D47C8
{
    mangled_assert("?getJointPosition@HierarchyStatic@@QBE_NPBDAAVvector3@@@Z");
    todo("implement");
    bool __result = _sub_5D47C8(this, arg, arg);
    return __result;
}

_extern void _sub_5D4BCF(HierarchyStatic const *const, Camera const *, matrix4 const &, MeshRenderProxy &, MeshInstance const *, unsigned __int32 const, float const, float const, vector4 const &, __int32);
void HierarchyStatic::render(Camera const *, matrix4 const &, MeshRenderProxy &, MeshInstance const *, unsigned __int32 const, float const, float const, vector4 const &, __int32) const // 0x5D4BCF
{
    mangled_assert("?render@HierarchyStatic@@QBEXPBVCamera@@ABVmatrix4@@AAVMeshRenderProxy@@PBVMeshInstance@@IMMABVvector4@@H@Z");
    todo("implement");
    _sub_5D4BCF(this, arg, arg, arg, arg, arg, arg, arg, arg, arg);
}

_extern void _sub_5D4A60(HierarchyStatic *const);
void HierarchyStatic::releaseDecalRefMeshes() // 0x5D4A60
{
    mangled_assert("?releaseDecalRefMeshes@HierarchyStatic@@QAEXXZ");
    todo("implement");
    _sub_5D4A60(this);
}

_extern bool _sub_5D4838(HierarchyStatic *const, IFFChunk *);
bool HierarchyStatic::import(IFFChunk *) // 0x5D4838
{
    mangled_assert("?import@HierarchyStatic@@QAE_NPAVIFFChunk@@@Z");
    todo("implement");
    bool __result = _sub_5D4838(this, arg);
    return __result;
}

_extern _sub_5D4092(HierarchyJoint *const);
HierarchyJoint::HierarchyJoint() // 0x5D4092
{
    mangled_assert("??0HierarchyJoint@@QAE@XZ");
    todo("implement");
    _sub_5D4092(this);
}

_extern void _sub_5D414D(HierarchyJoint *const);
HierarchyJoint::~HierarchyJoint() // 0x5D414D
{
    mangled_assert("??1HierarchyJoint@@QAE@XZ");
    todo("implement");
    _sub_5D414D(this);
}

_extern void _sub_5D43B3(HierarchyJoint *const, HierarchyJoint *);
void HierarchyJoint::attachChild(HierarchyJoint *) // 0x5D43B3
{
    mangled_assert("?attachChild@HierarchyJoint@@QAEXPAV1@@Z");
    todo("implement");
    _sub_5D43B3(this, arg);
}

_extern void _sub_5D447B(HierarchyJoint *const, __int32);
void HierarchyJoint::attachRenderableIndex(__int32) // 0x5D447B
{
    mangled_assert("?attachRenderableIndex@HierarchyJoint@@QAEXH@Z");
    todo("implement");
    _sub_5D447B(this, arg);
}

_extern void _sub_5D442F(HierarchyJoint *const, __int32);
void HierarchyJoint::attachGoblinIndex(__int32) // 0x5D442F
{
    mangled_assert("?attachGoblinIndex@HierarchyJoint@@QAEXH@Z");
    todo("implement");
    _sub_5D442F(this, arg);
}

_extern HierarchyJoint *_sub_5D472E(HierarchyJoint *const, char const *);
HierarchyJoint *HierarchyJoint::getJoint(char const *) // 0x5D472E
{
    mangled_assert("?getJoint@HierarchyJoint@@AAEPAV1@PBD@Z");
    todo("implement");
    HierarchyJoint * __result = _sub_5D472E(this, arg);
    return __result;
}

_extern void _sub_5D46F0(HierarchyJoint const *const, vector3 *);
void HierarchyJoint::getConcatTranslation(vector3 *) const // 0x5D46F0
{
    mangled_assert("?getConcatTranslation@HierarchyJoint@@QBEXPAVvector3@@@Z");
    todo("implement");
    _sub_5D46F0(this, arg);
}

_extern __int32 _sub_5D4822(HierarchyJoint const *const);
__int32 HierarchyJoint::getNumChildren() const // 0x5D4822
{
    mangled_assert("?getNumChildren@HierarchyJoint@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_5D4822(this);
    return __result;
}

_extern HierarchyJoint *_sub_5D46CE(HierarchyJoint *const, __int32);
HierarchyJoint *HierarchyJoint::getChild(__int32) // 0x5D46CE
{
    mangled_assert("?getChild@HierarchyJoint@@QAEPAV1@H@Z");
    todo("implement");
    HierarchyJoint * __result = _sub_5D46CE(this, arg);
    return __result;
}

_extern void _sub_5D4D57(HierarchyJoint *const, vector3 const &, matrix3 const &);
void HierarchyJoint::updateTransform(vector3 const &, matrix3 const &) // 0x5D4D57
{
    mangled_assert("?updateTransform@HierarchyJoint@@QAEXABVvector3@@ABVmatrix3@@@Z");
    todo("implement");
    _sub_5D4D57(this, arg, arg);
}

_extern void _sub_5D4A6B(HierarchyJoint const *const, Camera const *, matrix4 const &, matrix4 const &, MeshRenderProxy &, MeshInstance const *, unsigned __int32, float, float, vector4 const &, __int32);
void HierarchyJoint::render(Camera const *, matrix4 const &, matrix4 const &, MeshRenderProxy &, MeshInstance const *, unsigned __int32, float, float, vector4 const &, __int32) const // 0x5D4A6B
{
    mangled_assert("?render@HierarchyJoint@@QBEXPBVCamera@@ABVmatrix4@@1AAVMeshRenderProxy@@PBVMeshInstance@@IMMABVvector4@@H@Z");
    todo("implement");
    _sub_5D4A6B(this, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg);
}

_extern void _sub_5D4C0D(HierarchyJoint const *const, Camera const *, matrix4 const &, MeshRenderProxy &, MeshInstance const *, unsigned __int32, float const, float const, vector4 const &, __int32);
void HierarchyJoint::renderSubHierarchy(Camera const *, matrix4 const &, MeshRenderProxy &, MeshInstance const *, unsigned __int32, float const, float const, vector4 const &, __int32) const // 0x5D4C0D
{
    mangled_assert("?renderSubHierarchy@HierarchyJoint@@ABEXPBVCamera@@ABVmatrix4@@AAVMeshRenderProxy@@PBVMeshInstance@@IMMABVvector4@@H@Z");
    todo("implement");
    _sub_5D4C0D(this, arg, arg, arg, arg, arg, arg, arg, arg, arg);
}

_extern __int32 _sub_5D4E6F(HierarchyJoint const *const, AnimJointHold *, JointAnimStack *);
__int32 HierarchyJoint::walkToMirror(AnimJointHold *, JointAnimStack *) const // 0x5D4E6F
{
    mangled_assert("?walkToMirror@HierarchyJoint@@QBEHPAVAnimJointHold@@PAVJointAnimStack@@@Z");
    todo("implement");
    __int32 __result = _sub_5D4E6F(this, arg, arg);
    return __result;
}

_extern void _sub_5D49F8(HierarchyJoint *const);
void HierarchyJoint::releaseDecalRefMeshes() // 0x5D49F8
{
    mangled_assert("?releaseDecalRefMeshes@HierarchyJoint@@QAEXXZ");
    todo("implement");
    _sub_5D49F8(this);
}

/* ---------- private code */
#endif
