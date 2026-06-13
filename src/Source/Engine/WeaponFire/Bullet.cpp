#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <memory\memorylib.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <crtdefs.h>
#include <weaponTargetInfo.h>
#include <dbdefines.h>
#include <UnitCaps\UnitCaps.h>
#include <Mathlib\matrix3.h>
#include <weaponfiretypes.h>
#include <new>
#include <exception>
#include <Mathlib\mathutil.h>
#include <xstddef>
#include <type_traits>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\octree.h>
#include <Collision\Collision.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <xutility>
#include <Collision\BVH\proxy.h>
#include <WeaponStatic.h>
#include <utility>
#include <iosfwd>
#include <Collision\intersect.h>
#include <vector>
#include <Collision\primitivesfwd.h>
#include <xmemory>
#include <debug\ctassert.h>
#include <Sob\DefenseField\DefenseField.h>
#include <math.h>
#include <Interpolation.h>
#include <Sob\DefenseField\DefenseFieldStatic.h>
#include <list>
#include <Collision\Primitives\aabb.h>
#include <Mathlib\vector3.h>
#include <SobZeroMassBody.h>
#include <Mathlib\vector4.h>
#include <sobid.h>
#include <sobzeromassbodystatic.h>
#include <map>
#include <SOBGroupManager.h>
#include <xtree>
#include <hash_map>
#include <SimVis\SobVis.h>
#include <xhash>
#include <HyperspaceManager.h>
#include <boost\scoped_ptr.hpp>
#include <SquadronList.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <boost\cstdint.hpp>
#include <platform\timer.h>
#include <boost\config.hpp>
#include <platform\platformexports.h>
#include <assert.h>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <TeamColourRegistry.h>
#include <seInterface2\SoundParams.h>
#include <savegame.h>
#include <memory\mmfixedpool.h>
#include <task.h>
#include <boost\static_assert.hpp>
#include <stack>
#include <Mathlib\quat.h>
#include <SobWithMeshStatic.h>
#include <Collision\Primitives\capsule.h>
#include <SobWithMesh.h>
#include <GameObj.h>
#include <Collision\Primitives\segment.h>
#include <SobRigidBody.h>
#include <config.h>
#include <Collision\BVH\profiling.h>
#include <SobRigidBodyStatic.h>
#include <util\statmonitor.h>
#include <util\utilexports.h>
#include <WeaponResult.h>
#include <MeshAnimation.h>
#include <pathpoints.h>
#include <debug\db.h>
#include <Universe.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <Waypoint.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <SobUnmoveable.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <selection.h>
#include <savegamedef.h>
#include <MultiplierTypes.h>
#include <HierarchyDynamic.h>
#include <boost\detail\shared_count.hpp>
#include <Collision\BVH\bvh.h>
#include <HierarchyStatic.h>
#include <Decal\DecalRefMesh.h>
#include <Collision\Primitives\mesh.h>
#include <boost\detail\lwm_win32.hpp>
#include <Collision\Primitives\triangle.h>
#include <SimVis\EffectContainer.h>
#include <Render\FxGL\FXManager.h>
#include <Render\FxGL\VarMulti.h>
#include <WeaponFire\Bullet.h>
#include <WeaponFire\WeaponFire.h>
#include <wchar.h>
#include <sob.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <profile\profile.h>
#include <iostream>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const Bullet::m_saveToken[0]; // 0x78ED10
extern SaveData const Bullet::m_saveData[2]; // 0x78ED18

/* ---------- private variables */

_static
{
    extern FixedSizeObjAllocator<Bullet,1000> s_BulletAllocator; // 0x843E4C
}

/* ---------- public code */

_extern void *_sub_4A5248(unsigned __int32);
void *Bullet::operator new(unsigned __int32 size) // 0x4A5248
{
    mangled_assert("??2Bullet@@SGPAXI@Z");
    todo("implement");
    void * __result = _sub_4A5248(size);
    return __result;
}

_extern void _sub_4A5255(void *, unsigned __int32);
void Bullet::operator delete(void *p, unsigned __int32 size) // 0x4A5255
{
    mangled_assert("??3Bullet@@SGXPAXI@Z");
    todo("implement");
    _sub_4A5255(p, size);
}

_extern _sub_4A50B3(Bullet *const, SaveGameData *);
Bullet::Bullet(SaveGameData *) // 0x4A50B3
{
    mangled_assert("??0Bullet@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_4A50B3(this, arg);
}

_extern void _sub_4A58BF(Bullet *const);
void Bullet::defaultSettings() // 0x4A58BF
{
    mangled_assert("?defaultSettings@Bullet@@QAEXXZ");
    todo("implement");
    _sub_4A58BF(this);
}

_extern void _sub_4A58F7(Bullet *const);
void Bullet::postRestore() // 0x4A58F7
{
    mangled_assert("?postRestore@Bullet@@UAEXXZ");
    todo("implement");
    _sub_4A58F7(this);
}

_extern bool _sub_4A595B(Bullet *const, SaveGameData *);
bool Bullet::restore(SaveGameData *) // 0x4A595B
{
    mangled_assert("?restore@Bullet@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_4A595B(this, arg);
    return __result;
}

_extern bool _sub_4A59A8(Bullet *const, SaveGameData *, SaveType);
bool Bullet::save(SaveGameData *, SaveType) // 0x4A59A8
{
    mangled_assert("?save@Bullet@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_4A59A8(this, arg, arg);
    return __result;
}

_extern _sub_4A50FC(Bullet *const, char const *, Sob *, WeaponTargetInfo const &);
Bullet::Bullet(char const *, Sob *, WeaponTargetInfo const &) // 0x4A50FC
{
    mangled_assert("??0Bullet@@QAE@PBDPAVSob@@ABVWeaponTargetInfo@@@Z");
    todo("implement");
    _sub_4A50FC(this, arg, arg, arg);
}

_extern void _sub_4A51F3(Bullet *const);
Bullet::~Bullet() // 0x4A51F3
{
    mangled_assert("??1Bullet@@UAE@XZ");
    todo("implement");
    _sub_4A51F3(this);
}

_extern void _sub_4A58A3(Bullet *const);
void Bullet::RemoveFromSimulation() // 0x4A58A3
{
    mangled_assert("?RemoveFromSimulation@Bullet@@MAEXXZ");
    todo("implement");
    _sub_4A58A3(this);
}

_extern void _sub_4A58A2(Bullet *const);
void Bullet::RemoveAllSimData() // 0x4A58A2
{
    mangled_assert("?RemoveAllSimData@Bullet@@IAEXXZ");
    todo("implement");
    _sub_4A58A2(this);
}

_extern void _sub_4A58D8(Bullet *const, WeaponStatic const *);
void Bullet::initialize(WeaponStatic const *) // 0x4A58D8
{
    mangled_assert("?initialize@Bullet@@UAEXPBVWeaponStatic@@@Z");
    todo("implement");
    _sub_4A58D8(this, arg);
}

_extern void _sub_4A5A02(Bullet *const, vector3 const &, vector3 const &);
void Bullet::spawnMissResults(vector3 const &, vector3 const &) // 0x4A5A02
{
    mangled_assert("?spawnMissResults@Bullet@@AAEXABVvector3@@0@Z");
    todo("implement");
    _sub_4A5A02(this, arg, arg);
}

_extern void _sub_4A58FC(Bullet *const, matrix4 &);
void Bullet::render(matrix4 &) // 0x4A58FC
{
    mangled_assert("?render@Bullet@@UAEXAAVmatrix4@@@Z");
    todo("implement");
    _sub_4A58FC(this, arg);
}

_extern bool _sub_4A5A6E(Bullet *const, float);
bool Bullet::update(float) // 0x4A5A6E
{
    mangled_assert("?update@Bullet@@UAE_NM@Z");
    todo("implement");
    bool __result = _sub_4A5A6E(this, arg);
    return __result;
}

_extern void _sub_4A542E(Bullet *const);
void Bullet::PerformCollisionDetection() // 0x4A542E
{
    mangled_assert("?PerformCollisionDetection@Bullet@@UAEXXZ");
    todo("implement");
    _sub_4A542E(this);
}

_extern void _sub_4A5351(Bullet *const, Sob *, Collision::Point const &);
void Bullet::CollisionResponse(Sob *, Collision::Point const &) // 0x4A5351
{
    mangled_assert("?CollisionResponse@Bullet@@AAEXPAVSob@@ABUPoint@Collision@@@Z");
    todo("implement");
    _sub_4A5351(this, arg, arg);
}

/* ---------- private code */
#endif
