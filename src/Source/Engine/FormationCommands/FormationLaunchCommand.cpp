#if 0
/* ---------- headers */

#include "decomp.h"
#include <Engine\DynamicPoint.h>
#include <xstring>
#include <xmemory0>
#include <Engine\shipHold.h>
#include <Mathlib\matrix4.h>
#include <Engine\fixedpoint.h>
#include <Engine\SOBGroupManager.h>
#include <Engine\WeaponClassSpecificInfo.h>
#include <Mathlib\matrix3.h>
#include <Engine\visibility.h>
#include <Engine\MultiplierTypes.h>
#include <new>
#include <exception>
#include <Engine\ship.h>
#include <xstddef>
#include <type_traits>
#include <Engine\SobWithMesh.h>
#include <Engine\SobRigidBody.h>
#include <Engine\sob.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <Engine\DockLaunch.h>
#include <vector>
#include <Engine\DockQueue.h>
#include <platform\timer.h>
#include <xmemory>
#include <Engine\SquadronQueue.h>
#include <platform\platformexports.h>
#include <Engine\MADState.h>
#include <xhash>
#include <luaconfig\luabinding.h>
#include <luaconfig\luaconfig.h>
#include <lua\lua.h>
#include <Engine\Modifiers\ModifierAbility.h>
#include <list>
#include <Engine\task.h>
#include <Mathlib\vector3.h>
#include <Engine\ITweak.h>
#include <Mathlib\vector4.h>
#include <Engine\SobWithMeshStatic.h>
#include <map>
#include <xtree>
#include <Engine\Ship\FormationController.h>
#include <Mathlib\quat.h>
#include <boost\scoped_ptr.hpp>
#include <Engine\Ship\AdvRigidBodyController.h>
#include <Engine\Physics\RigidBodyController.h>
#include <Collision\Primitives\obb.h>
#include <Engine\Universe.h>
#include <Engine\Waypoint.h>
#include <util\types.h>
#include <Engine\MeshAnimation.h>
#include <Engine\SobUnmoveable.h>
#include <util\colour.h>
#include <Engine\ShieldTypes.h>
#include <Engine\pathpoints.h>
#include <Collision\BVH\octree.h>
#include <Engine\Tactics.h>
#include <Collision\BVH\span.h>
#include <boost\cstdint.hpp>
#include <Collision\primitivesfwd.h>
#include <Engine\command.h>
#include <Engine\sobtypes.h>
#include <Engine\selection.h>
#include <Engine\savegamedef.h>
#include <Engine\Ship\FormationTargetInfo.h>
#include <Engine\HierarchyDynamic.h>
#include <Engine\HyperspaceManager.h>
#include <Engine\HierarchyStatic.h>
#include <Engine\Decal\DecalRefMesh.h>
#include <Collision\Primitives\mesh.h>
#include <Collision\Primitives\triangle.h>
#include <Engine\commandtype.h>
#include <Engine\pch.h>
#include <Engine\FormationCommands\FormationLaunchCommand.h>
#include <Engine\FormationCommands\FormationCommand.h>
#include <Mathlib\vector2.h>
#include <profile\profile.h>
#include <iostream>
#include <Engine\abilities.h>
#include <Engine\SquadronList.h>
#include <Engine\Ship\FormationTargetInfoUtil.h>
#include <Camera\OrbitParameters.h>
#include <Engine\FamilyListMgr.h>
#include <Engine\FamilyList.h>
#include <Engine\Family.h>
#include <assist\stlexsmallvector.h>
#include <boost\shared_ptr.hpp>
#include <boost\throw_exception.hpp>
#include <Engine\dbdefines.h>
#include <Engine\UnitCaps\UnitCaps.h>
#include <Engine\Modifiers\ModifierUIInfo.h>
#include <Engine\Modifiers\ModifierMultiplier.h>
#include <boost\detail\shared_count.hpp>
#include <Engine\Ship\Formation.h>
#include <Engine\Modifiers\ModifierEffect.h>
#include <Engine\Ship\FormationPattern.h>
#include <boost\detail\lwm_win32.hpp>
#include <Engine\Viewer.h>
#include <Engine\Physics\RigidBody.h>
#include <Engine\Physics\PhysicsObject.h>
#include <Engine\config.h>
#include <Engine\Modifiers\ModifierApplier.h>
#include <Engine\CameraCommand.h>
#include <wchar.h>
#include <Engine\CameraHW.h>
#include <Camera\CameraOrbitTarget.h>
#include <Engine\shipstatic.h>
#include <Camera\Camera.h>
#include <Engine\weaponstaticinfo.h>
#include <Camera\Frustum.h>
#include <Engine\GunBinding.h>
#include <Camera\Plane3.h>
#include <Engine\sobid.h>
#include <set>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const FormationLaunchCommand::m_saveToken[0]; // 0x7B98E8
extern SaveData const FormationLaunchCommand::m_saveData[5]; // 0x7B9900

/* ---------- private variables */

_static
{
    extern unsigned __int32 s_familyDontAvoidOnLaunchPriority; // 0x84CA7C
    extern float const ViewerUpdateRate; // 0x7B99A0
    extern float const ViewerUpdatePeriod; // 0x83F450
    extern float const CameraDistanceUpdateRate; // 0x7B99A4
    extern float const CameraDistanceUpdatePeriod; // 0x83F454
}

/* ---------- public code */

_extern _sub_6B197F(FormationLaunchCommand *const, Formation *, Ship *, unsigned __int32);
FormationLaunchCommand::FormationLaunchCommand(Formation *, Ship *, unsigned __int32) // 0x6B197F
{
    mangled_assert("??0FormationLaunchCommand@@QAE@PAVFormation@@PAVShip@@I@Z");
    todo("implement");
    _sub_6B197F(this, arg, arg, arg);
}

_extern void _sub_6B1A2A(FormationLaunchCommand *const);
FormationLaunchCommand::~FormationLaunchCommand() // 0x6B1A2A
{
    mangled_assert("??1FormationLaunchCommand@@UAE@XZ");
    todo("implement");
    _sub_6B1A2A(this);
}

_extern bool _sub_6B1B7A(FormationLaunchCommand const *const);
bool FormationLaunchCommand::NeedsToDoPathfinding() const // 0x6B1B7A
{
    mangled_assert("?NeedsToDoPathfinding@FormationLaunchCommand@@ABE_NXZ");
    todo("implement");
    bool __result = _sub_6B1B7A(this);
    return __result;
}

_extern FormationCommand::CommandResult _sub_6B1C9E(FormationLaunchCommand *const, float);
FormationCommand::CommandResult FormationLaunchCommand::update(float) // 0x6B1C9E
{
    mangled_assert("?update@FormationLaunchCommand@@UAE?AW4CommandResult@FormationCommand@@M@Z");
    todo("implement");
    FormationCommand::CommandResult __result = _sub_6B1C9E(this, arg);
    return __result;
}

_extern bool _sub_6B1B12(FormationLaunchCommand *const, Ship *, unsigned __int32, unsigned __int32, DockPathPointStatic **, DockPathPoint **);
bool FormationLaunchCommand::GetPathPoint(Ship *, unsigned __int32, unsigned __int32, DockPathPointStatic **, DockPathPoint **) // 0x6B1B12
{
    mangled_assert("?GetPathPoint@FormationLaunchCommand@@AAE_NPAVShip@@IIPAPAVDockPathPointStatic@@PAPAVDockPathPoint@@@Z");
    todo("implement");
    bool __result = _sub_6B1B12(this, arg, arg, arg, arg, arg);
    return __result;
}

_extern FormationCommand::FormationCommandType _sub_6B1BF8(FormationLaunchCommand const *const);
FormationCommand::FormationCommandType FormationLaunchCommand::getType() const // 0x6B1BF8
{
    mangled_assert("?getType@FormationLaunchCommand@@UBE?AW4FormationCommandType@FormationCommand@@XZ");
    todo("implement");
    FormationCommand::FormationCommandType __result = _sub_6B1BF8(this);
    return __result;
}

_extern _sub_6B19E1(FormationLaunchCommand *const, SaveGameData *);
FormationLaunchCommand::FormationLaunchCommand(SaveGameData *) // 0x6B19E1
{
    mangled_assert("??0FormationLaunchCommand@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_6B19E1(this, arg);
}

_extern void _sub_6B1BBC(FormationLaunchCommand *const);
void FormationLaunchCommand::defaultSettings() // 0x6B1BBC
{
    mangled_assert("?defaultSettings@FormationLaunchCommand@@QAEXXZ");
    todo("implement");
    _sub_6B1BBC(this);
}

_extern void _sub_6B1BFF(FormationLaunchCommand *const);
void FormationLaunchCommand::postRestore() // 0x6B1BFF
{
    mangled_assert("?postRestore@FormationLaunchCommand@@UAEXXZ");
    todo("implement");
    _sub_6B1BFF(this);
}

_extern bool _sub_6B1C04(FormationLaunchCommand *const, SaveGameData *);
bool FormationLaunchCommand::restore(SaveGameData *) // 0x6B1C04
{
    mangled_assert("?restore@FormationLaunchCommand@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_6B1C04(this, arg);
    return __result;
}

_extern bool _sub_6B1C51(FormationLaunchCommand *const, SaveGameData *, SaveType);
bool FormationLaunchCommand::save(SaveGameData *, SaveType) // 0x6B1C51
{
    mangled_assert("?save@FormationLaunchCommand@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_6B1C51(this, arg, arg);
    return __result;
}

/* ---------- private code */
#endif
