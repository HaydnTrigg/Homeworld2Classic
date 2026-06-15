#if 0
/* ---------- headers */

#include "decomp.h"
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <assist\stlexsmallvector.h>
#include <Camera\Camera.h>
#include <Camera\Frustum.h>
#include <xstring>
#include <ITweak.h>
#include <Camera\Plane3.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <Tactics.h>
#include <weaponinfo.h>
#include <boost\shared_array.hpp>
#include <pch.h>
#include <platform\timer.h>
#include <TeamColourRegistry.h>
#include <fileio\filestream.h>
#include <platform\platformexports.h>
#include <savegame.h>
#include <task.h>
#include <stack>
#include <SobWithMeshStatic.h>
#include <EffectCreate.h>
#include <Mathlib\matrix3.h>
#include <SobRigidBodyStatic.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <MeshAnimation.h>
#include <platform\osdef.h>
#include <Sob\Nebula\NebulaStatic.h>
#include <Modifiers\ModifierApplier.h>
#include <Sob\Nebula\NebulaGroup.h>
#include <Collision\Primitives\obb.h>
#include <Sob\Nebula\NebulaGroupBase.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <ship.h>
#include <xutility>
#include <Collision\BVH\Internal\span_i.h>
#include <ShieldTypes.h>
#include <utility>
#include <iosfwd>
#include <Collision\BVH\proxy.h>
#include <vector>
#include <Collision\intersect.h>
#include <fileio\bytestream.h>
#include <seInterface2\SampleID.h>
#include <xmemory>
#include <Collision\primitivesfwd.h>
#include <fileio\fileioexports.h>
#include <seInterface2\SampleBase.h>
#include <BillboardRender.h>
#include <Graphics\meshrenderproxy.h>
#include <Subsystems\HardPointManager.h>
#include <Subsystems\HardPoint.h>
#include <Subsystems\HardPointStatic.h>
#include <Subsystems\SubSystemType.h>
#include <Physics\PhysicsObject.h>
#include <Interpolation.h>
#include <list>
#include <SensorsManager.h>
#include <Render\gl\r_types.h>
#include <Collision\Primitives\aabb.h>
#include <Mathlib\matvec.h>
#include <dbdefines.h>
#include <UnitCaps\UnitCaps.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <sobid.h>
#include <MainUI.h>
#include <SOBGroupManager.h>
#include <map>
#include <Selector.h>
#include <Render\gl\r_defines.h>
#include <hash_map>
#include <xtree>
#include <MetaSelTarg.h>
#include <Render\gl\glext.h>
#include <boost\smart_ptr.hpp>
#include <xhash>
#include <boost\scoped_ptr.hpp>
#include <abilities.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <seInterface2\sedefinesshared.h>
#include <boost\cstdint.hpp>
#include <boost\config.hpp>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <gameSettings.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <boost\scoped_array.hpp>
#include <config.h>
#include <seInterface2\SoundParams.h>
#include <syncChecking.h>
#include <Mathlib\quat.h>
#include <gameRandom.h>
#include <random.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <HyperspaceManager.h>
#include <SquadronList.h>
#include <savegameimpl.h>
#include <playerresourcetype.h>
#include <pathpoints.h>
#include <debug\db.h>
#include <LevelDesc.h>
#include <SoundManager\SoundEntityHandle.h>
#include <Universe.h>
#include <Hash.h>
#include <Camera\OrbitParameters.h>
#include <Waypoint.h>
#include <fileio\md5.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <fixedpoint.h>
#include <SobUnmoveable.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <util\fixed.h>
#include <Physics\RigidBody.h>
#include <selection.h>
#include <Physics\RigidBodyController.h>
#include <GameEventDefs.h>
#include <savegamedef.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <GameEventSys.h>
#include <MultiplierTypes.h>
#include <boost\detail\shared_count.hpp>
#include <gamestructimpl.h>
#include <bitset>
#include <Collision\BVH\bvh.h>
#include <Badge.h>
#include <boost\detail\lwm_win32.hpp>
#include <Mathlib\mathutil.h>
#include <Modifiers\ModifierTargetCache.h>
#include <renderer.h>
#include <Render\gl\types.h>
#include <Render\gl\lotypes.h>
#include <Sob\Nebula\Nebula.h>
#include <SobWithMesh.h>
#include <wchar.h>
#include <SobRigidBody.h>
#include <sob.h>
#include <sobstatic.h>
#include <Sob\Nebula\NebulaGroupManager.h>
#include <Collision\Primitives\sphere.h>
#include <SoundManager\SoundManager.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <boost\static_assert.hpp>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const Nebula::m_saveToken[0]; // 0x792148
extern bool Nebula::s_bOverrideLevelLighting; // 0x843F80
extern vector4 Nebula::s_ambientColour; // 0x835B80
extern SaveData const Nebula::m_saveData[6]; // 0x792150

/* ---------- private variables */

/* ---------- public code */

Nebula::Nebula(char const *, char const *) // 0x4C0A0F
{
    mangled_assert("??0Nebula@@QAE@PBD0@Z");
    todo("implement");
}

_inline BillboardRender::~BillboardRender() // 0x4C0AEB
{
    mangled_assert("??1BillboardRender@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline GameEvent_CloudEvent::~GameEvent_CloudEvent() // 0x4C0AF2
{
    mangled_assert("??1GameEvent_CloudEvent@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline Nebula::~Nebula() // 0x4C0AF9
{
    mangled_assert("??1Nebula@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

Nebula::Nebula(SaveGameData *) // 0x4C09A7
{
    mangled_assert("??0Nebula@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

void Nebula::SetAmbientOverride(bool bOverride, vector4 const &col) // 0x4C0B83
{
    mangled_assert("?SetAmbientOverride@Nebula@@SGX_NABVvector4@@@Z");
    todo("implement");
}

bool Nebula::GetAmbientOverride(vector4 &ambient) // 0x4C0B5A
{
    mangled_assert("?GetAmbientOverride@Nebula@@SG_NAAVvector4@@@Z");
    todo("implement");
}

void Nebula::customRender(Camera const *, MeshRenderProxy &) // 0x4C0D3D
{
    mangled_assert("?customRender@Nebula@@UAEXPBVCamera@@AAVMeshRenderProxy@@@Z");
    todo("implement");
}

bool Nebula::update(float) // 0x4C11EB
{
    mangled_assert("?update@Nebula@@UAE_NM@Z");
    todo("implement");
}

void Nebula::UpdateCollisionProxies() // 0x4C0CBC
{
    mangled_assert("?UpdateCollisionProxies@Nebula@@MAEXXZ");
    todo("implement");
}

void Nebula::postRestore() // 0x4C104C
{
    mangled_assert("?postRestore@Nebula@@UAEXXZ");
    todo("implement");
}

void Nebula::doCollision(Sob *) // 0x4C0E64
{
    mangled_assert("?doCollision@Nebula@@QAEXPAVSob@@@Z");
    todo("implement");
}

void Nebula::randomizeVisual() // 0x4C106B
{
    mangled_assert("?randomizeVisual@Nebula@@IAEXXZ");
    todo("implement");
}

void Nebula::setRotation(float) // 0x4C11DA
{
    mangled_assert("?setRotation@Nebula@@QAEXM@Z");
    todo("implement");
}

void Nebula::setRadius(float) // 0x4C119E
{
    mangled_assert("?setRadius@Nebula@@QAEXM@Z");
    todo("implement");
}

void Nebula::applyMultipliersAndAbilities(Ship *) // 0x4C0CF7
{
    mangled_assert("?applyMultipliersAndAbilities@Nebula@@QAEXPAVShip@@@Z");
    todo("implement");
}

void Nebula::defaultSettings() // 0x4C0E19
{
    mangled_assert("?defaultSettings@Nebula@@QAEXXZ");
    todo("implement");
}

bool Nebula::restore(SaveGameData *) // 0x4C10EF
{
    mangled_assert("?restore@Nebula@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool Nebula::save(SaveGameData *, SaveType) // 0x4C113C
{
    mangled_assert("?save@Nebula@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

Nebula *Nebula::Spawn(char const *nebulaGroupName, char const *resourcename, vector3 const &position, vector4 const &color, float rotationDegrees, float radius) // 0x4C0BE3
{
    mangled_assert("?Spawn@Nebula@@SGPAV1@PBD0ABVvector3@@ABVvector4@@MM@Z");
    todo("implement");
}

/* ---------- private code */
#endif
