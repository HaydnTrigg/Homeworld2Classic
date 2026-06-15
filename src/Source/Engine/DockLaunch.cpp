#if 0
/* ---------- headers */

#include "decomp.h"
#include <Engine\DynamicPoint.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <Engine\fixedpoint.h>
#include <Engine\Universe.h>
#include <Engine\Modifiers\ModifierUIInfo.h>
#include <Engine\Waypoint.h>
#include <Engine\Modifiers\ModifierMultiplier.h>
#include <Engine\SobUnmoveable.h>
#include <Engine\Modifiers\ModifierEffect.h>
#include <Engine\MADState.h>
#include <luaconfig\luabinding.h>
#include <Mathlib\matrix3.h>
#include <luaconfig\luaconfig.h>
#include <Engine\visibility.h>
#include <lua\lua.h>
#include <new>
#include <Engine\config.h>
#include <exception>
#include <Engine\Modifiers\ModifierApplier.h>
#include <xstddef>
#include <type_traits>
#include <Engine\ship.h>
#include <Engine\SobWithMesh.h>
#include <Engine\sob.h>
#include <Engine\shipstatic.h>
#include <Engine\weaponstaticinfo.h>
#include <Engine\GunBinding.h>
#include <xutility>
#include <Engine\HyperspaceManager.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <xhash>
#include <Engine\DockLaunch.h>
#include <Engine\DockQueue.h>
#include <Engine\SquadronQueue.h>
#include <list>
#include <Engine\WeaponClassSpecificInfo.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <Engine\SobWithMeshStatic.h>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <Engine\dbdefines.h>
#include <Engine\shipHold.h>
#include <Engine\UnitCaps\UnitCaps.h>
#include <Collision\Primitives\obb.h>
#include <util\types.h>
#include <Engine\MeshAnimation.h>
#include <util\colour.h>
#include <Engine\ShieldTypes.h>
#include <Engine\savegameimpl.h>
#include <Engine\Family.h>
#include <Engine\pathpoints.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <boost\cstdint.hpp>
#include <Collision\primitivesfwd.h>
#include <Engine\Modifiers\ModifierAbility.h>
#include <Engine\command.h>
#include <Engine\sobtypes.h>
#include <Engine\selection.h>
#include <Engine\savegamedef.h>
#include <Engine\commandtype.h>
#include <Engine\pch.h>
#include <Engine\DockCommand.h>
#include <Engine\SOBGroupManager.h>
#include <Engine\abilities.h>
#include <Engine\SquadronList.h>
#include <Engine\Tactics.h>
#include <assist\stlexsmallvector.h>
#include <boost\shared_ptr.hpp>
#include <boost\throw_exception.hpp>
#include <Engine\FamilyListMgr.h>
#include <Engine\FamilyList.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <platform\timer.h>
#include <Engine\HierarchyDynamic.h>
#include <platform\platformexports.h>
#include <Engine\HierarchyStatic.h>
#include <Engine\Decal\DecalRefMesh.h>
#include <Collision\Primitives\mesh.h>
#include <Collision\Primitives\triangle.h>
#include <wchar.h>
#include <Engine\sobid.h>
#include <set>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const DockPath::m_saveToken[0]; // 0x7B7C18
extern char const DockPathPoint::m_saveToken[0]; // 0x7B7B68
extern SaveData const DockPathPoint::m_saveData[1]; // 0x7B7B78
extern SaveData const DockPath::m_saveData[4]; // 0x7B7B98

/* ---------- private variables */

/* ---------- public code */

DockPathPointStatic::DockPathPointStatic(vector3 const &, matrix3 const &, bool, float, float, bool, bool, char const *, unsigned __int32, char const *) // 0x6A6133
{
    mangled_assert("??0DockPathPointStatic@@IAE@ABVvector3@@ABVmatrix3@@_NMM22PBDI3@Z");
    todo("implement");
}

DockPathPointStatic::~DockPathPointStatic() // 0x6A63C3
{
    mangled_assert("??1DockPathPointStatic@@QAE@XZ");
    todo("implement");
}

DockPathPointStatic *DockPathPointStatic::create(vector3 const &position, matrix3 const &coordsys, bool useOrient, float tolerance, float maxSpeed, bool checkRotation, bool forceCloseBehaviour, char const *name, unsigned __int32 pointnr, char const *shipname) // 0x6A680F
{
    mangled_assert("?create@DockPathPointStatic@@SGPAV1@ABVvector3@@ABVmatrix3@@_NMM22PBDI3@Z");
    todo("implement");
}

DockPathPointStatic *DockPathPointStatic::clone() const // 0x6A6760
{
    mangled_assert("?clone@DockPathPointStatic@@QBEPAV1@XZ");
    todo("implement");
}

DockPathStatic::DockPathStatic(PathType, bool, char const *, bool, HierarchyJoint const *) // 0x6A61A5
{
    mangled_assert("??0DockPathStatic@@IAE@W4PathType@@_NPBD1PBVHierarchyJoint@@@Z");
    todo("implement");
}

DockPathStatic::~DockPathStatic() // 0x6A63C4
{
    mangled_assert("??1DockPathStatic@@QAE@XZ");
    todo("implement");
}

bool DockPathStatic::isAppropriatePath(PathType, __int32) // 0x6A692C
{
    mangled_assert("?isAppropriatePath@DockPathStatic@@QAE_NW4PathType@@H@Z");
    todo("implement");
}

vector3 DockPathStatic::getAnimationPosition(Ship *) // 0x6A68C3
{
    mangled_assert("?getAnimationPosition@DockPathStatic@@QAE?AVvector3@@PAVShip@@@Z");
    todo("implement");
}

DockPathStatic *DockPathStatic::create(PathType pathType, bool latch, char const *dockFamilies, bool useAnimation, HierarchyJoint const *animationLatchJoint) // 0x6A685C
{
    mangled_assert("?create@DockPathStatic@@SGPAV1@W4PathType@@_NPBD1PBVHierarchyJoint@@@Z");
    todo("implement");
}

DockPathStatic *DockPathStatic::clone() const // 0x6A6776
{
    mangled_assert("?clone@DockPathStatic@@QBEPAV1@XZ");
    todo("implement");
}

DockPathStatic &DockPathStatic::operator=(DockPathStatic const &) // 0x6A64D9
{
    mangled_assert("??4DockPathStatic@@QAEAAV0@ABV0@@Z");
    todo("implement");
}

DockPathPoint *DockPathPoint::create() // 0x6A67DD
{
    mangled_assert("?create@DockPathPoint@@SGPAV1@XZ");
    todo("implement");
}

DockPathPoint::DockPathPoint() // 0x6A60A9
{
    mangled_assert("??0DockPathPoint@@IAE@XZ");
    todo("implement");
}

DockPathPoint::~DockPathPoint() // 0x6A6384
{
    mangled_assert("??1DockPathPoint@@UAE@XZ");
    todo("implement");
}

DockPathPoint::DockPathPoint(SaveGameData *) // 0x6A60F6
{
    mangled_assert("??0DockPathPoint@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

void DockPathPoint::postRestore() // 0x6A6A27
{
    mangled_assert("?postRestore@DockPathPoint@@UAEXXZ");
    todo("implement");
}

bool DockPathPoint::restore(SaveGameData *) // 0x6A6ABD
{
    mangled_assert("?restore@DockPathPoint@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool DockPathPoint::save(SaveGameData *, SaveType) // 0x6A6B30
{
    mangled_assert("?save@DockPathPoint@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

DockPath::DockPath(Ship *, DockPathStatic *) // 0x6A5FFE
{
    mangled_assert("??0DockPath@@IAE@PAVShip@@PAVDockPathStatic@@@Z");
    todo("implement");
}

DockPath::~DockPath() // 0x6A6307
{
    mangled_assert("??1DockPath@@UAE@XZ");
    todo("implement");
}

bool DockPathPoint::isFree() // 0x6A696E
{
    mangled_assert("?isFree@DockPathPoint@@QAE_NXZ");
    todo("implement");
}

void DockPathPoint::unBusyPathPoint() // 0x6A6B7B
{
    mangled_assert("?unBusyPathPoint@DockPathPoint@@QAEXXZ");
    todo("implement");
}

void DockPathPoint::busyPathPointWithShip(Ship *) // 0x6A66E6
{
    mangled_assert("?busyPathPointWithShip@DockPathPoint@@QAEXPAVShip@@@Z");
    todo("implement");
}

Ship *DockPathPoint::getPathPointBusyingShip() // 0x6A6924
{
    mangled_assert("?getPathPointBusyingShip@DockPathPoint@@QAEPAVShip@@XZ");
    todo("implement");
}

DockPath *DockPath::create(Ship *owner, DockPathStatic *staticInfo) // 0x6A67A3
{
    mangled_assert("?create@DockPath@@SGPAV1@PAVShip@@PAVDockPathStatic@@@Z");
    todo("implement");
}

void DockPath::reserve() // 0x6A6A7A
{
    mangled_assert("?reserve@DockPath@@QAEXXZ");
    todo("implement");
}

void DockPath::clearReservation() // 0x6A672A
{
    mangled_assert("?clearReservation@DockPath@@QAEXXZ");
    todo("implement");
}

bool DockPath::isReserved() const // 0x6A697C
{
    mangled_assert("?isReserved@DockPath@@QBE_NXZ");
    todo("implement");
}

DockPath::DockPath(SaveGameData *) // 0x6A6058
{
    mangled_assert("??0DockPath@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

void DockPath::defaultSettings() // 0x6A68A2
{
    mangled_assert("?defaultSettings@DockPath@@QAEXXZ");
    todo("implement");
}

void DockPath::postRestore() // 0x6A6A26
{
    mangled_assert("?postRestore@DockPath@@UAEXXZ");
    todo("implement");
}

void DockPath::setStaticInfo(DockPathStatic *) // 0x6A6B71
{
    mangled_assert("?setStaticInfo@DockPath@@QAEXPAVDockPathStatic@@@Z");
    todo("implement");
}

bool DockPath::restore(SaveGameData *) // 0x6A6A7F
{
    mangled_assert("?restore@DockPath@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool DockPath::save(SaveGameData *, SaveType) // 0x6A6AFB
{
    mangled_assert("?save@DockPath@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
