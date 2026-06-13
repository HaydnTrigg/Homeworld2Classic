#if 0
/* ---------- headers */

#include "decomp.h"
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <MeshAnimation.h>
#include <xstring>
#include <Ship\Formation.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <Ship\FormationPattern.h>
#include <pch.h>
#include <Interpolation.h>
#include <Mathlib\matrix3.h>
#include <Collision\Primitives\aabb.h>
#include <Collision\Primitives\obb.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <weaponinfo.h>
#include <savestream.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <playerresourcetype.h>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <Physics\PhysicsObject.h>
#include <SoundManager\SoundEntityHandle.h>
#include <SelTarg.h>
#include <math.h>
#include <prim.h>
#include <list>
#include <Mathlib\vector3.h>
#include <Collision\Primitives\capsule.h>
#include <Mathlib\vector4.h>
#include <Collision\Primitives\segment.h>
#include <ship.h>
#include <Collision\BVH\profiling.h>
#include <ShieldTypes.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <Subsystems\HardPointManager.h>
#include <Subsystems\HardPoint.h>
#include <seInterface2\PatchID.h>
#include <Mathlib\vector2.h>
#include <Subsystems\HardPointStatic.h>
#include <seInterface2\PatchBase.h>
#include <Subsystems\SubSystemType.h>
#include <seInterface2\SoundParams.h>
#include <boost\cstdint.hpp>
#include <HierarchyStatic.h>
#include <Decal\DecalRefMesh.h>
#include <Collision\Primitives\mesh.h>
#include <Collision\Primitives\triangle.h>
#include <ITweak.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <Tactics.h>
#include <Mathlib\quat.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <abilities.h>
#include <savegamedata.h>
#include <Ship\FormationTargetInfo.h>
#include <debug\db.h>
#include <Physics\RigidBody.h>
#include <Physics\RigidBodyController.h>
#include <DynamicPoint.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <TeamColourRegistry.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <sobid.h>
#include <boost\detail\lwm_win32.hpp>
#include <SobWithMeshStatic.h>
#include <SobWithMesh.h>
#include <SobRigidBody.h>
#include <sob.h>
#include <sobstatic.h>
#include <Modifiers\ModifierTargetCache.h>
#include <Collision\Primitives\sphere.h>
#include <SobRigidBodyStatic.h>
#include <LatchManager.h>
#include <savegame.h>
#include <wchar.h>
#include <task.h>
#include <stack>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <Collision\BVH\octree.h>
#include <profile\profile.h>
#include <Collision\BVH\span.h>
#include <iostream>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const LatchManager::m_saveToken[0]; // 0x791C20
extern SaveData const LatchManager::m_saveData[3]; // 0x791C30

/* ---------- private variables */

/* ---------- public code */

_extern _sub_4BD06D(LatchManager::LatchData *const);
_inline LatchManager::LatchData::LatchData() // 0x4BD06D
{
    mangled_assert("??0LatchData@LatchManager@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4BD06D(this);
}

_extern _sub_4BD0DF(LatchManager *const, SobWithMesh *);
LatchManager::LatchManager(SobWithMesh *) // 0x4BD0DF
{
    mangled_assert("??0LatchManager@@QAE@PAVSobWithMesh@@@Z");
    todo("implement");
    _sub_4BD0DF(this, arg);
}

_extern void _sub_4BD16A(std::_List_buy<LatchManager::LatchData *,std::allocator<LatchManager::LatchData *> > *const);
_inline std::_List_buy<LatchManager::LatchData *,std::allocator<LatchManager::LatchData *> >::~_List_buy<LatchManager::LatchData *,std::allocator<LatchManager::LatchData *> >() // 0x4BD16A
{
    mangled_assert("??1?$_List_buy@PAULatchData@LatchManager@@V?$allocator@PAULatchData@LatchManager@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4BD16A(this);
}

_extern void _sub_4BD185(LatchManager::LatchData *const);
_inline LatchManager::LatchData::~LatchData() // 0x4BD185
{
    mangled_assert("??1LatchData@LatchManager@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4BD185(this);
}

_extern void _sub_4BD191(LatchManager *const);
LatchManager::~LatchManager() // 0x4BD191
{
    mangled_assert("??1LatchManager@@UAE@XZ");
    todo("implement");
    _sub_4BD191(this);
}

_extern void _sub_4BDBAC(LatchManager *const, SobWithMesh *, vector3 const &);
void LatchManager::moveLatchedObject(SobWithMesh *, vector3 const &) // 0x4BDBAC
{
    mangled_assert("?moveLatchedObject@LatchManager@@QAEXPAVSobWithMesh@@ABVvector3@@@Z");
    todo("implement");
    _sub_4BDBAC(this, arg, arg);
}

_extern void _sub_4BD865(LatchManager *const, SobWithMesh *, vector3 const &, matrix3 const &, bool);
void LatchManager::latchObject(SobWithMesh *, vector3 const &, matrix3 const &, bool) // 0x4BD865
{
    mangled_assert("?latchObject@LatchManager@@QAEXPAVSobWithMesh@@ABVvector3@@ABVmatrix3@@_N@Z");
    todo("implement");
    _sub_4BD865(this, arg, arg, arg, arg);
}

_extern bool _sub_4BD57E(LatchManager const *const, SobID const &);
bool LatchManager::hasObjectFinishedInterpolation(SobID const &) const // 0x4BD57E
{
    mangled_assert("?hasObjectFinishedInterpolation@LatchManager@@QBE_NABVSobID@@@Z");
    todo("implement");
    bool __result = _sub_4BD57E(this, arg);
    return __result;
}

_extern void _sub_4BDCE6(LatchManager *const, SobWithMesh *);
void LatchManager::unLatchObject(SobWithMesh *) // 0x4BDCE6
{
    mangled_assert("?unLatchObject@LatchManager@@QAEXPAVSobWithMesh@@@Z");
    todo("implement");
    _sub_4BDCE6(this, arg);
}

_extern void _sub_4BDD43(LatchManager *const, float);
void LatchManager::update(float) // 0x4BDD43
{
    mangled_assert("?update@LatchManager@@QAEXM@Z");
    todo("implement");
    _sub_4BDD43(this, arg);
}

_extern void _sub_4BD5BA(char const *, std::vector<std::pair<vector3,matrix3> *,std::allocator<std::pair<vector3,matrix3> *> > &, SobWithMeshStatic *);
void LatchManager::initialiseLatchPoints(char const *namePrefix, std::vector<std::pair<vector3,matrix3> *,std::allocator<std::pair<vector3,matrix3> *> > &latchPoints, SobWithMeshStatic *shipStatic) // 0x4BD5BA
{
    mangled_assert("?initialiseLatchPoints@LatchManager@@SGXPBDAAV?$vector@PAU?$pair@Vvector3@@Vmatrix3@@@std@@V?$allocator@PAU?$pair@Vvector3@@Vmatrix3@@@std@@@2@@std@@PAVSobWithMeshStatic@@@Z");
    todo("implement");
    _sub_4BD5BA(namePrefix, latchPoints, shipStatic);
}

_extern _sub_4BD07B(LatchManager *const, SaveGameData *);
LatchManager::LatchManager(SaveGameData *) // 0x4BD07B
{
    mangled_assert("??0LatchManager@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_4BD07B(this, arg);
}

_extern void _sub_4BD52F(LatchManager *const);
void LatchManager::defaultSettings() // 0x4BD52F
{
    mangled_assert("?defaultSettings@LatchManager@@QAEXXZ");
    todo("implement");
    _sub_4BD52F(this);
}

_extern void _sub_4BDC08(LatchManager *const);
void LatchManager::postRestore() // 0x4BDC08
{
    mangled_assert("?postRestore@LatchManager@@UAEXXZ");
    todo("implement");
    _sub_4BDC08(this);
}

_extern bool _sub_4BDC69(LatchManager *const, SaveGameData *);
bool LatchManager::restore(SaveGameData *) // 0x4BDC69
{
    mangled_assert("?restore@LatchManager@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_4BDC69(this, arg);
    return __result;
}

_extern bool _sub_4BDCA7(LatchManager *const, SaveGameData *, SaveType);
bool LatchManager::save(SaveGameData *, SaveType) // 0x4BDCA7
{
    mangled_assert("?save@LatchManager@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_4BDCA7(this, arg, arg);
    return __result;
}

_extern void _sub_4BCC2B(void *, SaveGameData *, SaveType);
void LatchManager::saveLatched(void *objectPtr, SaveGameData *saveGameData, SaveType savetype) // 0x4BCC2B
{
    mangled_assert("?saveLatched@LatchManager@@CGXPAXPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    _sub_4BCC2B(objectPtr, saveGameData, savetype);
}

_extern void _sub_4BCCDC(void *, SaveGameData *);
void LatchManager::loadLatched(void *objectPtr, SaveGameData *saveGameData) // 0x4BCCDC
{
    mangled_assert("?loadLatched@LatchManager@@CGXPAXPAVSaveGameData@@@Z");
    todo("implement");
    _sub_4BCCDC(objectPtr, saveGameData);
}

/* ---------- private code */
#endif
