#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <Collision\Primitives\capsule.h>
#include <boost\shared_array.hpp>
#include <pch.h>
#include <task.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <Mathlib\matrix3.h>
#include <sobid.h>
#include <Pieplate.h>
#include <seInterface2\PatchID.h>
#include <fixedpoint.h>
#include <seInterface2\PatchBase.h>
#include <Ship\FormationTargetInfo.h>
#include <util\fixed.h>
#include <seInterface2\SoundParams.h>
#include <new>
#include <Tactics.h>
#include <xstddef>
#include <type_traits>
#include <SoundManager\SoundManager.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <xutility>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <Parade.h>
#include <utility>
#include <iosfwd>
#include <MultiplierTypes.h>
#include <hash_map>
#include <vector>
#include <CameraCommand.h>
#include <Collision\BVH\bvh.h>
#include <DynamicPoint.h>
#include <xhash>
#include <xmemory>
#include <CameraHW.h>
#include <Camera\CameraOrbitTarget.h>
#include <SoundManager\SoundEntityHandle.h>
#include <Camera\OrbitParameters.h>
#include <Camera\Camera.h>
#include <Camera\Frustum.h>
#include <Camera\Plane3.h>
#include <CameraTuning.h>
#include <MainUI.h>
#include <Selector.h>
#include <MetaSelTarg.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <stack>
#include <platform\timer.h>
#include <map>
#include <platform\platformexports.h>
#include <xtree>
#include <boost\smart_ptr.hpp>
#include <boost\scoped_ptr.hpp>
#include <seInterface2\SampleID.h>
#include <Mathlib\vector2.h>
#include <seInterface2\SampleBase.h>
#include <util\types.h>
#include <resourceCommand.h>
#include <Ship\FormationPattern.h>
#include <command.h>
#include <Ship\Formation.h>
#include <boost\cstdint.hpp>
#include <SobRigidBody.h>
#include <sob.h>
#include <sobstatic.h>
#include <SobRigidBodyStatic.h>
#include <Collision\Primitives\sphere.h>
#include <SensorsManager.h>
#include <boost\scoped_array.hpp>
#include <Render\gl\r_types.h>
#include <Mathlib\matvec.h>
#include <Mathlib\quat.h>
#include <ResearchData.h>
#include <DependencyData.h>
#include <Collision\BVH\octree.h>
#include <Render\gl\r_defines.h>
#include <Collision\BVH\span.h>
#include <Render\gl\glext.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <seInterface2\sedefinesshared.h>
#include <WeaponStatic.h>
#include <weaponfiretypes.h>
#include <debug\db.h>
#include <Interpolation.h>
#include <abilities.h>
#include <Collision\Primitives\aabb.h>
#include <sctGenericLoad.h>
#include <Collision\Primitives\obb.h>
#include <Ship\ShipController.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <Ship\AdvRigidBodyController.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <Physics\RigidBodyController.h>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <bitset>
#include <boost\detail\lwm_win32.hpp>
#include <init.h>
#include <platform\osdef.h>
#include <config.h>
#include <scripting.h>
#include <wchar.h>
#include <DockCommand.h>
#include <string>
#include <scriptaccess.h>
#include <scripttypedef.h>
#include <luaconfig\luabinding.h>
#include <SelTarg.h>
#include <luaconfig\luaconfig.h>
#include <prim.h>
#include <lua.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern bool sglUIRegisterTweaks();
extern bool sglUILoad();

_static bool sglCameraStartup();
_static bool sglCameraShutdown();

/* ---------- globals */

extern InitModule sctVarsInitList[2]; // 0x836240
extern InitModule sctVarsLoadList[5]; // 0x836268

/* ---------- private variables */

/* ---------- public code */

bool sglUIRegisterTweaks() // 0x4CA513
{
    mangled_assert("?sglUIRegisterTweaks@@YG_NXZ");
    todo("implement");
}

bool sglUILoad() // 0x4CA501
{
    mangled_assert("?sglUILoad@@YG_NXZ");
    todo("implement");
}

/* ---------- private code */

_static bool sglCameraStartup() // 0x4CA52A
{
    mangled_assert("sglCameraStartup");
    todo("implement");
}

_static bool sglCameraShutdown() // 0x4CA543
{
    mangled_assert("sglCameraShutdown");
    todo("implement");
}
#endif
