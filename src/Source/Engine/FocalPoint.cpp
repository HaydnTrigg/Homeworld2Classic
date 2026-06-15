#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <Modifiers\ModifierApplier.h>
#include <xstring>
#include <MultiplierTypes.h>
#include <xmemory0>
#include <Collision\BVH\bvh.h>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <ResearchManager.h>
#include <Subsystems\Subsystem.h>
#include <Subsystems\SubsystemStatic.h>
#include <weaponstaticinfo.h>
#include <GunBinding.h>
#include <Mathlib\matrix3.h>
#include <ship.h>
#include <SobWithMesh.h>
#include <SobRigidBody.h>
#include <CameraCommand.h>
#include <sob.h>
#include <new>
#include <CameraHW.h>
#include <sobstatic.h>
#include <exception>
#include <Camera\CameraOrbitTarget.h>
#include <Collision\Primitives\sphere.h>
#include <xstddef>
#include <Camera\Camera.h>
#include <type_traits>
#include <Camera\Frustum.h>
#include <weaponinfo.h>
#include <Camera\Plane3.h>
#include <WeaponClassSpecificInfo.h>
#include <xutility>
#include <playerresourcetype.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <TeamColourRegistry.h>
#include <fileio\fileioexports.h>
#include <savegame.h>
#include <task.h>
#include <stack>
#include <SobWithMeshStatic.h>
#include <SoundManager\SoundEntityHandle.h>
#include <LevelDesc.h>
#include <Hash.h>
#include <fileio\md5.h>
#include <platform\osdef.h>
#include <math.h>
#include <list>
#include <SobRigidBodyStatic.h>
#include <gamestructimpl.h>
#include <Badge.h>
#include <Mathlib\vector3.h>
#include <MeshAnimation.h>
#include <Mathlib\vector4.h>
#include <ShieldTypes.h>
#include <renderer.h>
#include <Render\gl\types.h>
#include <map>
#include <Collision\Primitives\obb.h>
#include <Mathlib\matvec.h>
#include <xtree>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <boost\scoped_ptr.hpp>
#include <Modifiers\ModifierAbility.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Subsystems\HardPointManager.h>
#include <Collision\intersect.h>
#include <Subsystems\HardPoint.h>
#include <Collision\primitivesfwd.h>
#include <Subsystems\HardPointStatic.h>
#include <Render\gl\lotypes.h>
#include <Subsystems\SubSystemType.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <Render\gl\r_types.h>
#include <boost\cstdint.hpp>
#include <boost\static_assert.hpp>
#include <Interpolation.h>
#include <boost\config.hpp>
#include <Collision\Primitives\aabb.h>
#include <boost\scoped_array.hpp>
#include <Player.h>
#include <SquadronList.h>
#include <Mathlib\quat.h>
#include <sobid.h>
#include <abilities.h>
#include <platform\cmdline.h>
#include <platform\platformexports.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <Render\gl\r_defines.h>
#include <Race.h>
#include <Render\gl\glext.h>
#include <debug\db.h>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <seInterface2\SoundParams.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <BuildManager.h>
#include <selection.h>
#include <savegamedef.h>
#include <Collision\Primitives\capsule.h>
#include <boost\detail\shared_count.hpp>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <boost\detail\lwm_win32.hpp>
#include <gameSettings.h>
#include <config.h>
#include <syncChecking.h>
#include <Modifiers\ModifierTargetCache.h>
#include <profile\profile.h>
#include <FocalPoint.h>
#include <Modifiers\ModifierUIInfo.h>
#include <iostream>
#include <Camera\OrbitParameters.h>
#include <wchar.h>
#include <Modifiers\ModifierMultiplier.h>
#include <fixedpoint.h>
#include <Modifiers\ModifierEffect.h>
#include <util\fixed.h>
#include <Mathlib\mathutil.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

FocalPoint::FocalPoint(Selection const &) // 0x4E16C3
{
    mangled_assert("??0FocalPoint@@QAE@ABVSelection@@@Z");
    todo("implement");
}

FocalPoint::FocalPoint(vector3 const &) // 0x4E16FD
{
    mangled_assert("??0FocalPoint@@QAE@ABVvector3@@@Z");
    todo("implement");
}

unsigned __int32 FocalPoint::update(float *) // 0x4E18CF
{
    mangled_assert("?update@FocalPoint@@QAEIPAM@Z");
    todo("implement");
}

void FocalPoint::unlock() // 0x4E18B8
{
    mangled_assert("?unlock@FocalPoint@@QAEXXZ");
    todo("implement");
}

/* ---------- private code */
#endif
