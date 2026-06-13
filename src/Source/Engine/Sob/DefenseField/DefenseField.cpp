#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <playerresourcetype.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <Collision\Collision.h>
#include <platform\timer.h>
#include <EffectCreate.h>
#include <platform\platformexports.h>
#include <SoundManager\SoundEntityHandle.h>
#include <WeaponStatic.h>
#include <Mathlib\matrix3.h>
#include <Sob\DefenseField\DefenseFieldStatic.h>
#include <Race.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <weaponTargetInfo.h>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <BuildManager.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <xutility>
#include <Collision\intersect.h>
#include <SobZeroMassBody.h>
#include <DefenseFieldManager.h>
#include <utility>
#include <iosfwd>
#include <Collision\primitivesfwd.h>
#include <Modifiers\ModifierApplier.h>
#include <vector>
#include <sobzeromassbodystatic.h>
#include <xmemory>
#include <Interpolation.h>
#include <math.h>
#include <list>
#include <Universe.h>
#include <Collision\Primitives\aabb.h>
#include <Waypoint.h>
#include <SobUnmoveable.h>
#include <Mathlib\vector3.h>
#include <sobid.h>
#include <Mathlib\vector4.h>
#include <WeaponFire\InstantHit.h>
#include <Collision\Primitives\mesh.h>
#include <abilities.h>
#include <Collision\Primitives\triangle.h>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <Player.h>
#include <ResearchManager.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <boost\cstdint.hpp>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <alliance.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <fixedpoint.h>
#include <seInterface2\SoundParams.h>
#include <util\fixed.h>
#include <Mathlib\quat.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <weaponinfo.h>
#include <dbdefines.h>
#include <UnitCaps\UnitCaps.h>
#include <Modifiers\ModifierTargetCache.h>
#include <GameEventDefs.h>
#include <GameEventSys.h>
#include <TeamColourRegistry.h>
#include <pathpoints.h>
#include <savegame.h>
#include <debug\db.h>
#include <task.h>
#include <stack>
#include <SobWithMeshStatic.h>
#include <deque>
#include <Missile.h>
#include <SobWithMesh.h>
#include <SobRigidBody.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <boost\throw_exception.hpp>
#include <SobRigidBodyStatic.h>
#include <MultiplierTypes.h>
#include <selection.h>
#include <ship.h>
#include <savegamedef.h>
#include <Collision\BVH\bvh.h>
#include <ShieldTypes.h>
#include <boost\detail\shared_count.hpp>
#include <MeshAnimation.h>
#include <boost\detail\lwm_win32.hpp>
#include <MissileStatic.h>
#include <Subsystems\HardPointManager.h>
#include <Subsystems\HardPoint.h>
#include <Subsystems\HardPointStatic.h>
#include <Subsystems\SubSystemType.h>
#include <gameRandom.h>
#include <random.h>
#include <Sob\DefenseField\DefenseField.h>
#include <sob.h>
#include <wchar.h>
#include <sobstatic.h>
#include <SOBGroupManager.h>
#include <Collision\Primitives\sphere.h>
#include <hash_map>
#include <HyperspaceManager.h>
#include <WeaponFire\Bullet.h>
#include <xhash>
#include <SquadronList.h>
#include <WeaponFire\WeaponFire.h>
#include <weaponfiretypes.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const DefenseField::m_saveToken[0]; // 0x7925A8
extern SaveData const DefenseField::m_saveData[4]; // 0x7925B8

/* ---------- private variables */

/* ---------- public code */

_extern _sub_4C34DA(DefenseField *const, SobID const &);
DefenseField::DefenseField(SobID const &) // 0x4C34DA
{
    mangled_assert("??0DefenseField@@QAE@ABVSobID@@@Z");
    todo("implement");
    _sub_4C34DA(this, arg);
}

_extern _sub_4C3559(DefenseField *const, SaveGameData *);
DefenseField::DefenseField(SaveGameData *) // 0x4C3559
{
    mangled_assert("??0DefenseField@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_4C3559(this, arg);
}

_extern void _sub_4C35C1(DefenseField *const);
DefenseField::~DefenseField() // 0x4C35C1
{
    mangled_assert("??1DefenseField@@UAE@XZ");
    todo("implement");
    _sub_4C35C1(this);
}

_extern void _sub_4C3640(DefenseField *const, vector3 const &, float);
void DefenseField::Set(vector3 const &, float) // 0x4C3640
{
    mangled_assert("?Set@DefenseField@@QAEXABVvector3@@M@Z");
    todo("implement");
    _sub_4C3640(this, arg, arg);
}

_extern void _sub_4C366A(DefenseField *const);
void DefenseField::UpdateCollisionProxies() // 0x4C366A
{
    mangled_assert("?UpdateCollisionProxies@DefenseField@@MAEXXZ");
    todo("implement");
    _sub_4C366A(this);
}

_extern void _sub_4C3AFD(DefenseField *const);
void DefenseField::postRestore() // 0x4C3AFD
{
    mangled_assert("?postRestore@DefenseField@@UAEXXZ");
    todo("implement");
    _sub_4C3AFD(this);
}

_extern void _sub_4C3BAD(DefenseField *const, vector3 const &);
void DefenseField::spawnEffects(vector3 const &) // 0x4C3BAD
{
    mangled_assert("?spawnEffects@DefenseField@@IAEXABVvector3@@@Z");
    todo("implement");
    _sub_4C3BAD(this, arg);
}

_extern void _sub_4C36A5(DefenseField const *const, Ship *);
void DefenseField::callDefenseSpeech(Ship *) const // 0x4C36A5
{
    mangled_assert("?callDefenseSpeech@DefenseField@@ABEXPAVShip@@@Z");
    todo("implement");
    _sub_4C36A5(this, arg);
}

_extern bool _sub_4C39BB(DefenseField *const, Missile *, Collision::Point const &);
bool DefenseField::doCollision(Missile *, Collision::Point const &) // 0x4C39BB
{
    mangled_assert("?doCollision@DefenseField@@QAE_NPAVMissile@@ABUPoint@Collision@@@Z");
    todo("implement");
    bool __result = _sub_4C39BB(this, arg, arg);
    return __result;
}

_extern bool _sub_4C3746(DefenseField *const, Bullet *, Collision::Point const &);
bool DefenseField::doCollision(Bullet *, Collision::Point const &) // 0x4C3746
{
    mangled_assert("?doCollision@DefenseField@@QAE_NPAVBullet@@ABUPoint@Collision@@@Z");
    todo("implement");
    bool __result = _sub_4C3746(this, arg, arg);
    return __result;
}

_extern bool _sub_4C388A(DefenseField *const, InstantHit *, Collision::Point const &);
bool DefenseField::doCollision(InstantHit *, Collision::Point const &) // 0x4C388A
{
    mangled_assert("?doCollision@DefenseField@@QAE_NPAVInstantHit@@ABUPoint@Collision@@@Z");
    todo("implement");
    bool __result = _sub_4C388A(this, arg, arg);
    return __result;
}

_extern bool _sub_4C3C03(DefenseField *const, float);
bool DefenseField::update(float) // 0x4C3C03
{
    mangled_assert("?update@DefenseField@@UAE_NM@Z");
    todo("implement");
    bool __result = _sub_4C3C03(this, arg);
    return __result;
}

_extern void _sub_4C373E(DefenseField *const);
void DefenseField::defaultSettings() // 0x4C373E
{
    mangled_assert("?defaultSettings@DefenseField@@QAEXXZ");
    todo("implement");
    _sub_4C373E(this);
}

_extern bool _sub_4C3B02(DefenseField *const, SaveGameData *);
bool DefenseField::restore(SaveGameData *) // 0x4C3B02
{
    mangled_assert("?restore@DefenseField@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_4C3B02(this, arg);
    return __result;
}

_extern bool _sub_4C3B4F(DefenseField *const, SaveGameData *, SaveType);
bool DefenseField::save(SaveGameData *, SaveType) // 0x4C3B4F
{
    mangled_assert("?save@DefenseField@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_4C3B4F(this, arg, arg);
    return __result;
}

/* ---------- private code */
#endif
