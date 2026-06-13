#if 0
/* ---------- headers */

#include "decomp.h"
#include <seInterface2\SampleID.h>
#include <seInterface2\SampleBase.h>
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <boost\shared_array.hpp>
#include <pch.h>
#include <SensorsManager.h>
#include <Render\gl\r_types.h>
#include <Mathlib\matrix3.h>
#include <groupinglogic.h>
#include <Mathlib\matvec.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <playerresourcetype.h>
#include <new>
#include <Render\gl\r_defines.h>
#include <exception>
#include <xstddef>
#include <command.h>
#include <Render\gl\glext.h>
#include <type_traits>
#include <MoveCommand.h>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <xutility>
#include <Collision\primitivesfwd.h>
#include <utility>
#include <iosfwd>
#include <seInterface2\sedefinesshared.h>
#include <vector>
#include <xmemory>
#include <abilities.h>
#include <commandtype.h>
#include <Interpolation.h>
#include <Collision\Primitives\aabb.h>
#include <weaponinfo.h>
#include <sobid.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <boost\smart_ptr.hpp>
#include <boost\scoped_ptr.hpp>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <task.h>
#include <stack>
#include <Mathlib\vector2.h>
#include <SobWithMeshStatic.h>
#include <util\types.h>
#include <ship.h>
#include <SobWithMesh.h>
#include <SobRigidBody.h>
#include <boost\cstdint.hpp>
#include <SobRigidBodyStatic.h>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <MeshAnimation.h>
#include <seInterface2\SoundParams.h>
#include <ShieldTypes.h>
#include <boost\scoped_array.hpp>
#include <Mathlib\quat.h>
#include <Collision\Primitives\capsule.h>
#include <Subsystems\HardPointManager.h>
#include <Collision\Primitives\segment.h>
#include <Subsystems\HardPoint.h>
#include <Collision\BVH\profiling.h>
#include <Subsystems\HardPointStatic.h>
#include <Subsystems\SubSystemType.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <Camera\OrbitParameters.h>
#include <debug\db.h>
#include <SoundManager\SoundManager.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <Modifiers\ModifierTargetCache.h>
#include <boost\shared_ptr.hpp>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <util\colour.h>
#include <sobtypes.h>
#include <MultiplierTypes.h>
#include <boost\throw_exception.hpp>
#include <SoundManager\SoundEntityHandle.h>
#include <Collision\BVH\bvh.h>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <bitset>
#include <boost\detail\lwm_win32.hpp>
#include <MainUI.h>
#include <Selector.h>
#include <MetaSelTarg.h>
#include <sob.h>
#include <sobstatic.h>
#include <wchar.h>
#include <platform\timer.h>
#include <string>
#include <Collision\Primitives\sphere.h>
#include <platform\platformexports.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern bool filterGroup(Selection *source, Selection *destination);
extern Ship *selectionGetClosestShipToPoint(Selection const &selection, vector3 const &destinationVector3, float *distanceSqr, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &filterName);
extern void groupHandleHotkeyAssignment(Selection *source, unsigned __int32 groupNum);
extern bool isHotkeyGroupingIdle(Ship *ship);
extern bool hotkeyGroupIdleShipsInSelection(Selection const &source);
extern bool hotkeyGroupAllAreIdle(Selection const &source);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern bool _sub_5F85AC(Selection *, Selection *);
bool filterGroup(Selection *source, Selection *destination) // 0x5F85AC
{
    mangled_assert("?filterGroup@@YG_NPAVSelection@@0@Z");
    todo("implement");
    bool __result = _sub_5F85AC(source, destination);
    return __result;
}

_extern Ship *_sub_5F870D(Selection const &, vector3 const &, float *, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
Ship *selectionGetClosestShipToPoint(Selection const &selection, vector3 const &destinationVector3, float *distanceSqr, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &filterName) // 0x5F870D
{
    mangled_assert("?selectionGetClosestShipToPoint@@YGPAVShip@@ABVSelection@@ABVvector3@@PAMABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    Ship * __result = _sub_5F870D(selection, destinationVector3, distanceSqr, filterName);
    return __result;
}

_extern void _sub_5F8666(Selection *, unsigned __int32);
void groupHandleHotkeyAssignment(Selection *source, unsigned __int32 groupNum) // 0x5F8666
{
    mangled_assert("?groupHandleHotkeyAssignment@@YGXPAVSelection@@I@Z");
    todo("implement");
    _sub_5F8666(source, groupNum);
}

_extern bool _sub_5F86D5(Ship *);
bool isHotkeyGroupingIdle(Ship *ship) // 0x5F86D5
{
    mangled_assert("?isHotkeyGroupingIdle@@YG_NPAVShip@@@Z");
    todo("implement");
    bool __result = _sub_5F86D5(ship);
    return __result;
}

_extern bool _sub_5F869F(Selection const &);
bool hotkeyGroupIdleShipsInSelection(Selection const &source) // 0x5F869F
{
    mangled_assert("?hotkeyGroupIdleShipsInSelection@@YG_NABVSelection@@@Z");
    todo("implement");
    bool __result = _sub_5F869F(source);
    return __result;
}

_extern bool _sub_5F8669(Selection const &);
bool hotkeyGroupAllAreIdle(Selection const &source) // 0x5F8669
{
    mangled_assert("?hotkeyGroupAllAreIdle@@YG_NABVSelection@@@Z");
    todo("implement");
    bool __result = _sub_5F8669(source);
    return __result;
}

/* ---------- private code */
#endif
