#if 0
/* ---------- headers */

#include "decomp.h"
#include <Engine\DynamicPoint.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <boost\shared_array.hpp>
#include <Engine\fixedpoint.h>
#include <Engine\shipHold.h>
#include <Engine\MADState.h>
#include <luaconfig\luabinding.h>
#include <luaconfig\luaconfig.h>
#include <lua\lua.h>
#include <Engine\SOBGroupManager.h>
#include <Mathlib\matrix3.h>
#include <Engine\visibility.h>
#include <new>
#include <Engine\Squadron.h>
#include <exception>
#include <Engine\ship.h>
#include <xstddef>
#include <type_traits>
#include <Engine\SobWithMesh.h>
#include <Engine\SobRigidBody.h>
#include <Engine\sob.h>
#include <Engine\Ship\FormationController.h>
#include <Engine\Ship\AdvRigidBodyController.h>
#include <Engine\Physics\RigidBodyController.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <Engine\DockLaunch.h>
#include <Engine\DockQueue.h>
#include <Engine\SquadronQueue.h>
#include <platform\timer.h>
#include <Engine\Modifiers\ModifierUIInfo.h>
#include <platform\platformexports.h>
#include <Engine\Modifiers\ModifierMultiplier.h>
#include <xhash>
#include <Engine\Modifiers\ModifierEffect.h>
#include <list>
#include <SoundManager\SoundManager.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <Engine\config.h>
#include <Engine\Modifiers\ModifierApplier.h>
#include <Engine\task.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <SoundManager\SoundEntityHandle.h>
#include <Engine\shipstatic.h>
#include <Engine\SobWithMeshStatic.h>
#include <map>
#include <Engine\weaponstaticinfo.h>
#include <xtree>
#include <Engine\GunBinding.h>
#include <boost\smart_ptr.hpp>
#include <Mathlib\quat.h>
#include <boost\scoped_ptr.hpp>
#include <profile\profile.h>
#include <util\types.h>
#include <iostream>
#include <Engine\MeshAnimation.h>
#include <util\colour.h>
#include <Engine\ShieldTypes.h>
#include <Engine\Universe.h>
#include <Engine\Waypoint.h>
#include <Engine\SobUnmoveable.h>
#include <Engine\pathpoints.h>
#include <Engine\Ship\FormationTargetInfoUtil.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Engine\WeaponClassSpecificInfo.h>
#include <boost\scoped_array.hpp>
#include <Engine\command.h>
#include <Engine\sobtypes.h>
#include <seInterface2\SampleID.h>
#include <Engine\selection.h>
#include <seInterface2\SampleBase.h>
#include <Engine\savegamedef.h>
#include <Engine\Ship\FormationTargetInfo.h>
#include <Engine\HyperspaceManager.h>
#include <Engine\SelTarg.h>
#include <Engine\commandtype.h>
#include <Engine\prim.h>
#include <Engine\pch.h>
#include <Engine\FormationCommands\FormationDockCommand.h>
#include <Engine\FormationCommands\FormationCommand.h>
#include <Mathlib\vector2.h>
#include <Engine\Physics\RigidBody.h>
#include <Mathlib\mathlibdll.h>
#include <Engine\Physics\PhysicsObject.h>
#include <Engine\SensorsManager.h>
#include <Mathlib\fastmath.h>
#include <Render\gl\r_types.h>
#include <Engine\abilities.h>
#include <Mathlib\matvec.h>
#include <Engine\SquadronList.h>
#include <Engine\MainUI.h>
#include <Engine\Selector.h>
#include <Render\gl\r_defines.h>
#include <Engine\MetaSelTarg.h>
#include <Render\gl\glext.h>
#include <Engine\Modifiers\ModifierAbility.h>
#include <Camera\OrbitParameters.h>
#include <assist\stlexsmallvector.h>
#include <seInterface2\PatchID.h>
#include <boost\shared_ptr.hpp>
#include <seInterface2\SoundParams.h>
#include <boost\throw_exception.hpp>
#include <seInterface2\sedefinesshared.h>
#include <bitset>
#include <boost\detail\shared_count.hpp>
#include <Engine\dbdefines.h>
#include <Engine\UnitCaps\UnitCaps.h>
#include <boost\detail\lwm_win32.hpp>
#include <Engine\Ship\Formation.h>
#include <Engine\Ship\FormationPattern.h>
#include <Engine\Viewer.h>
#include <Engine\Tactics.h>
#include <Engine\CameraCommand.h>
#include <Engine\CameraHW.h>
#include <Camera\CameraOrbitTarget.h>
#include <Camera\Camera.h>
#include <Engine\sobid.h>
#include <Camera\Frustum.h>
#include <Camera\Plane3.h>
#include <set>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const FormationDockCommand::m_saveToken[0]; // 0x7B97D0
extern SaveData const FormationDockCommand::m_saveData[5]; // 0x7B97E8

/* ---------- private variables */

_static
{
    extern float const ViewerUpdateRate; // 0x7B9888
    extern float const ViewerUpdatePeriod; // 0x83F424
    extern float const CameraDistanceUpdateRate; // 0x7B988C
    extern float const CameraDistanceUpdatePeriod; // 0x83F428
}

/* ---------- public code */

FormationDockCommand::FormationDockCommand(Formation *, Ship *, unsigned __int32) // 0x6B10E5
{
    mangled_assert("??0FormationDockCommand@@QAE@PAVFormation@@PAVShip@@I@Z");
    todo("implement");
}

FormationDockCommand::~FormationDockCommand() // 0x6B1190
{
    mangled_assert("??1FormationDockCommand@@UAE@XZ");
    todo("implement");
}

FormationCommand::CommandResult FormationDockCommand::update(float) // 0x6B1484
{
    mangled_assert("?update@FormationDockCommand@@UAE?AW4CommandResult@FormationCommand@@M@Z");
    todo("implement");
}

void FormationDockCommand::GetPathPoint(Ship *, unsigned __int32, unsigned __int32, DockPathPointStatic **, DockPathPoint **) // 0x6B11EB
{
    mangled_assert("?GetPathPoint@FormationDockCommand@@AAEXPAVShip@@IIPAPAVDockPathPointStatic@@PAPAVDockPathPoint@@@Z");
    todo("implement");
}

void FormationDockCommand::putFormationInsideDockShip() // 0x6B1285
{
    mangled_assert("?putFormationInsideDockShip@FormationDockCommand@@AAEXXZ");
    todo("implement");
}

FormationCommand::FormationCommandType FormationDockCommand::getType() const // 0x6B1279
{
    mangled_assert("?getType@FormationDockCommand@@UBE?AW4FormationCommandType@FormationCommand@@XZ");
    todo("implement");
}

FormationDockCommand::FormationDockCommand(SaveGameData *) // 0x6B1147
{
    mangled_assert("??0FormationDockCommand@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

void FormationDockCommand::defaultSettings() // 0x6B1235
{
    mangled_assert("?defaultSettings@FormationDockCommand@@QAEXXZ");
    todo("implement");
}

void FormationDockCommand::postRestore() // 0x6B1280
{
    mangled_assert("?postRestore@FormationDockCommand@@UAEXXZ");
    todo("implement");
}

bool FormationDockCommand::restore(SaveGameData *) // 0x6B13CB
{
    mangled_assert("?restore@FormationDockCommand@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool FormationDockCommand::save(SaveGameData *, SaveType) // 0x6B1418
{
    mangled_assert("?save@FormationDockCommand@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
