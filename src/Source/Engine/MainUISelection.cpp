#if 0
/* ---------- headers */

#include "decomp.h"
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <assist\stlexsmallvector.h>
#include <Collision\BVH\profiling.h>
#include <xstring>
#include <Interface.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <boost\shared_array.hpp>
#include <pch.h>
#include <SoundManager\SoundEntityHandle.h>
#include <KeyBindings.h>
#include <TeamColourRegistry.h>
#include <config.h>
#include <savegame.h>
#include <platform\keydefines.h>
#include <Pieplate.h>
#include <SobWithMeshStatic.h>
#include <OrderFeedback.h>
#include <ship.h>
#include <sob.h>
#include <SobWithMesh.h>
#include <sobstatic.h>
#include <Mathlib\matrix3.h>
#include <SobRigidBody.h>
#include <Collision\Primitives\sphere.h>
#include <SobRigidBodyStatic.h>
#include <Modifiers\ModifierAbility.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <HyperspaceManager.h>
#include <MultiplierTypes.h>
#include <SquadronList.h>
#include <Collision\BVH\bvh.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <seInterface2\SampleID.h>
#include <vector>
#include <seInterface2\SampleBase.h>
#include <xmemory>
#include <MetaSelTarg.h>
#include <SelTarg.h>
#include <Universe.h>
#include <Waypoint.h>
#include <fixedpoint.h>
#include <SobUnmoveable.h>
#include <util\fixed.h>
#include <math.h>
#include <Modifiers\ModifierTargetCache.h>
#include <list>
#include <SensorsManager.h>
#include <Render\gl\r_types.h>
#include <Mathlib\matvec.h>
#include <Collision\Primitives\obb.h>
#include <DockCommand.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <task.h>
#include <xtree>
#include <boost\smart_ptr.hpp>
#include <stack>
#include <boost\scoped_ptr.hpp>
#include <DynamicPoint.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <seInterface2\sedefinesshared.h>
#include <Parade.h>
#include <Render\objects\textureregistry.h>
#include <abilities.h>
#include <boost\cstdint.hpp>
#include <MainUIImpl.h>
#include <Cursor.h>
#include <Render\objects\texture.h>
#include <Render\objects\objects.h>
#include <sobid.h>
#include <Render\objects\core.h>
#include <Render\gl\types.h>
#include <weaponinfo.h>
#include <boost\scoped_array.hpp>
#include <Render\gl\lotypes.h>
#include <Mathlib\quat.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <Modifiers\ModifierUIInfo.h>
#include <Modifiers\ModifierMultiplier.h>
#include <Modifiers\ModifierEffect.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <playerresourcetype.h>
#include <seInterface2\PatchID.h>
#include <Interpolation.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <CameraCommand.h>
#include <pathpoints.h>
#include <platform\inputinterface.h>
#include <CameraHW.h>
#include <SensorsBlobs.h>
#include <Modifiers\ModifierApplier.h>
#include <debug\db.h>
#include <Collision\Primitives\aabb.h>
#include <Camera\CameraOrbitTarget.h>
#include <Camera\Camera.h>
#include <MeshAnimation.h>
#include <Camera\Frustum.h>
#include <ShieldTypes.h>
#include <Camera\Plane3.h>
#include <Subsystems\Subsystem.h>
#include <deque>
#include <Subsystems\SubsystemStatic.h>
#include <weaponstaticinfo.h>
#include <GunBinding.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <Subsystems\HardPointManager.h>
#include <selection.h>
#include <Subsystems\HardPoint.h>
#include <savegamedef.h>
#include <Subsystems\HardPointStatic.h>
#include <boost\detail\shared_count.hpp>
#include <platform\osdef.h>
#include <mainuidefines.h>
#include <Subsystems\SubSystemType.h>
#include <bitset>
#include <boost\detail\lwm_win32.hpp>
#include <ParadeCommand.h>
#include <commandtype.h>
#include <Squadron.h>
#include <dbdefines.h>
#include <command.h>
#include <UnitCaps\UnitCaps.h>
#include <SOBGroupManager.h>
#include <WeaponClassSpecificInfo.h>
#include <Camera\OrbitParameters.h>
#include <hash_map>
#include <xhash>
#include <MainUI.h>
#include <Selector.h>
#include <wchar.h>
#include <prim.h>
#include <queue>
#include <SoundManager\SoundManager.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <GameEventDefs.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <GameEventSys.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern float const twkMinSelectionBoxWidth; // 0x761AEC
    extern float const twkMinSelectionBoxHeight; // 0x761AF0
}

/* ---------- public code */

_extern void _sub_45CE3F(NDGameEvent_ShipsSelected *const);
_inline NDGameEvent_ShipsSelected::~NDGameEvent_ShipsSelected() // 0x45CE3F
{
    mangled_assert("??1NDGameEvent_ShipsSelected@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_45CE3F(this);
}

_extern void _sub_45CE46(NDGameEvent_SubSystemSelected *const);
_inline NDGameEvent_SubSystemSelected::~NDGameEvent_SubSystemSelected() // 0x45CE46
{
    mangled_assert("??1NDGameEvent_SubSystemSelected@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_45CE46(this);
}

_extern void _sub_45CF55(MainUIImpl *const);
void MainUIImpl::selectedControllableShips() // 0x45CF55
{
    mangled_assert("?selectedControllableShips@MainUIImpl@@QAEXXZ");
    todo("implement");
    _sub_45CF55(this);
}

_extern void _sub_45CFBD(MainUIImpl *const);
void MainUIImpl::selectedControllableSubsystems() // 0x45CFBD
{
    mangled_assert("?selectedControllableSubsystems@MainUIImpl@@QAEXXZ");
    todo("implement");
    _sub_45CFBD(this);
}

_extern void _sub_45D025(MainUIImpl *const);
void MainUIImpl::selectionChanged() // 0x45D025
{
    mangled_assert("?selectionChanged@MainUIImpl@@QAEXXZ");
    todo("implement");
    _sub_45D025(this);
}

_extern void _sub_45CE4D(MainUIImpl *const);
void MainUIImpl::buildSelectionRectangle() // 0x45CE4D
{
    mangled_assert("?buildSelectionRectangle@MainUIImpl@@QAEXXZ");
    todo("implement");
    _sub_45CE4D(this);
}

_extern bool _sub_45CEDB(MainUIImpl *const, float, float);
bool MainUIImpl::isSelectionBox(float, float) // 0x45CEDB
{
    mangled_assert("?isSelectionBox@MainUIImpl@@QAE_NMM@Z");
    todo("implement");
    bool __result = _sub_45CEDB(this, arg, arg);
    return __result;
}

_extern void _sub_45D13A(MainUIImpl *const, Selection const &, bool);
void MainUIImpl::selectionProcess(Selection const &, bool) // 0x45D13A
{
    mangled_assert("?selectionProcess@MainUIImpl@@QAEXABVSelection@@_N@Z");
    todo("implement");
    _sub_45D13A(this, arg, arg);
}

/* ---------- private code */
#endif
