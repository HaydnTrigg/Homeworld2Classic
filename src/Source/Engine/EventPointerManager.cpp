#if 0
/* ---------- headers */

#include "decomp.h"
#include <task.h>
#include <xstring>
#include <Mathlib\matrix4.h>
#include <stack>
#include <xmemory0>
#include <boost\shared_array.hpp>
#include <pch.h>
#include <SobUnmoveable.h>
#include <Mathlib\mathutil.h>
#include <seInterface2\PatchID.h>
#include <Render\objects\debugrender.h>
#include <seInterface2\PatchBase.h>
#include <Render\objects\core.h>
#include <seInterface2\SoundParams.h>
#include <Mathlib\matrix3.h>
#include <Collision\Primitives\capsule.h>
#include <Render\objects\objects.h>
#include <Collision\Primitives\segment.h>
#include <Render\gl\types.h>
#include <Collision\BVH\profiling.h>
#include <Render\gl\lotypes.h>
#include <UserInterface\signals.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <Camera\OrbitParameters.h>
#include <SoundManager\SoundManager.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <math.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <SoundManager\SoundEntityHandle.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <Menus\MenuSupport.h>
#include <UserInterface\uitypes.h>
#include <platform\osdef.h>
#include <map>
#include <platform\inputinterface.h>
#include <xtree>
#include <platform\platformexports.h>
#include <MainUI.h>
#include <boost\smart_ptr.hpp>
#include <boost\scoped_ptr.hpp>
#include <platform\keydefines.h>
#include <Selector.h>
#include <MetaSelTarg.h>
#include <CameraCommand.h>
#include <CameraHW.h>
#include <Camera\CameraOrbitTarget.h>
#include <Camera\Camera.h>
#include <Mathlib\vector2.h>
#include <Camera\Frustum.h>
#include <platform\timer.h>
#include <Camera\Plane3.h>
#include <util\types.h>
#include <boost\cstdint.hpp>
#include <seInterface2\SampleID.h>
#include <seInterface2\SampleBase.h>
#include <boost\scoped_array.hpp>
#include <Mathlib\quat.h>
#include <savestream.h>
#include <SensorsManager.h>
#include <Render\gl\r_types.h>
#include <Mathlib\matvec.h>
#include <SelTarg.h>
#include <sob.h>
#include <prim.h>
#include <sobstatic.h>
#include <Mathlib\mathlibdll.h>
#include <Collision\Primitives\sphere.h>
#include <Mathlib\fastmath.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <savegamedata.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <debug\db.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <seInterface2\sedefinesshared.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <abilities.h>
#include <Interpolation.h>
#include <selection.h>
#include <savegamedef.h>
#include <Sphere.h>
#include <boost\detail\shared_count.hpp>
#include <Volume.h>
#include <bitset>
#include <VolumeStatic.h>
#include <boost\detail\lwm_win32.hpp>
#include <Collision\Primitives\aabb.h>
#include <SobUnmoveableStatic.h>
#include <Collision\Primitives\obb.h>
#include <EventPointerManager.h>
#include <sobid.h>
#include <wchar.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const EventPointerManager::m_saveToken[0]; // 0x7A93C0
extern SaveData const EventPointerManager::m_saveData[1]; // 0x7A93D4

/* ---------- private variables */

/* ---------- public code */

EventPointerManager::EventPointerManager(bool) // 0x5ED48C
{
    mangled_assert("??0EventPointerManager@@QAE@_N@Z");
    todo("implement");
}

_inline std::_Tree_buy<std::pair<unsigned int const ,EventPointerManager::EventPointer>,std::allocator<std::pair<unsigned int const ,EventPointerManager::EventPointer> > >::~_Tree_buy<std::pair<unsigned int const ,EventPointerManager::EventPointer>,std::allocator<std::pair<unsigned int const ,EventPointerManager::EventPointer> > >() // 0x5ED521
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBIVEventPointer@EventPointerManager@@@std@@V?$allocator@U?$pair@$$CBIVEventPointer@EventPointerManager@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_comp<0,std::_Tmap_traits<unsigned int,EventPointerManager::EventPointer,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,EventPointerManager::EventPointer> >,0> >::~_Tree_comp<0,std::_Tmap_traits<unsigned int,EventPointerManager::EventPointer,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,EventPointerManager::EventPointer> >,0> >() // 0x5ED52A
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@IVEventPointer@EventPointerManager@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIVEventPointer@EventPointerManager@@@std@@@4@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::map<unsigned int,EventPointerManager::EventPointer,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,EventPointerManager::EventPointer> > >::~map<unsigned int,EventPointerManager::EventPointer,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,EventPointerManager::EventPointer> > >() // 0x5ED533
{
    mangled_assert("??1?$map@IVEventPointer@EventPointerManager@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIVEventPointer@EventPointerManager@@@std@@@4@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline EventPointerManager::~EventPointerManager() // 0x5ED538
{
    mangled_assert("??1EventPointerManager@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

EventPointerManager::EventPointerManager(SaveGameData *) // 0x5ED41F
{
    mangled_assert("??0EventPointerManager@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

unsigned __int32 EventPointerManager::AddEvent(SobID const &, vector4 const &, float const) // 0x5ED742
{
    mangled_assert("?AddEvent@EventPointerManager@@QAEIABVSobID@@ABVvector4@@M@Z");
    todo("implement");
}

void EventPointerManager::RemoveEvent(unsigned __int32) // 0x5ED7E3
{
    mangled_assert("?RemoveEvent@EventPointerManager@@QAEXI@Z");
    todo("implement");
}

void EventPointerManager::Render() // 0x5ED812
{
    mangled_assert("?Render@EventPointerManager@@QAEXXZ");
    todo("implement");
}

void EventPointerManager::postRestore() // 0x5EDFE9
{
    mangled_assert("?postRestore@EventPointerManager@@UAEXXZ");
    todo("implement");
}

void EventPointerManager::saveEventMap(void *objectPtr, SaveGameData *saveGameData, SaveType savetype) // 0x5ECD3F
{
    mangled_assert("?saveEventMap@EventPointerManager@@SGXPAXPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

void EventPointerManager::loadEventMap(void *objectPtr, SaveGameData *saveGameData) // 0x5ECDA0
{
    mangled_assert("?loadEventMap@EventPointerManager@@SGXPAXPAVSaveGameData@@@Z");
    todo("implement");
}

bool EventPointerManager::restore(SaveGameData *) // 0x5EDFEA
{
    mangled_assert("?restore@EventPointerManager@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool EventPointerManager::save(SaveGameData *, SaveType) // 0x5EE028
{
    mangled_assert("?save@EventPointerManager@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
