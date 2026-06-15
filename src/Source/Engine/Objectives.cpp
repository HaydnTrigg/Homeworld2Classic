#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <Interpolation.h>
#include <Collision\Primitives\aabb.h>
#include <Mathlib\matrix3.h>
#include <sobid.h>
#include <new>
#include <GameEventDefs.h>
#include <GameEventSys.h>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <seInterface2\SoundParams.h>
#include <list>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Mathlib\vector3.h>
#include <Collision\BVH\profiling.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <dbdefines.h>
#include <UnitCaps\UnitCaps.h>
#include <SOBGroupManager.h>
#include <Mathlib\vector2.h>
#include <hash_map>
#include <xhash>
#include <util\types.h>
#include <boost\cstdint.hpp>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <Mathlib\quat.h>
#include <Universe.h>
#include <Waypoint.h>
#include <SobUnmoveable.h>
#include <sob.h>
#include <sobstatic.h>
#include <savegameimpl.h>
#include <Collision\Primitives\sphere.h>
#include <savegamedata.h>
#include <pathpoints.h>
#include <debug\db.h>
#include <HyperspaceManager.h>
#include <SquadronList.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <savestream.h>
#include <profile\profile.h>
#include <iostream>
#include <Objectives.h>
#include <wchar.h>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>

/* ---------- constants */

/* ---------- definitions */

typedef std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > DescriptionList;
typedef std::list<Objective *,std::allocator<Objective *> > List;

/* ---------- prototypes */

/* ---------- globals */

extern SaveData const ObjectiveList::m_saveData[2]; // 0x7AD810
extern char const ObjectiveList::m_saveToken[14]; // 0x7AD850

/* ---------- private variables */

_static
{
    extern ObjectiveList *s_instance; // 0x84997C
}

/* ---------- public code */

bool ObjectiveList::Startup() // 0x610B0C
{
    mangled_assert("?Startup@ObjectiveList@@SG_NXZ");
    todo("implement");
}

bool ObjectiveList::Shutdown() // 0x610AF2
{
    mangled_assert("?Shutdown@ObjectiveList@@SG_NXZ");
    todo("implement");
}

ObjectiveList *ObjectiveList::i() // 0x610C5E
{
    mangled_assert("?i@ObjectiveList@@SGPAV1@XZ");
    todo("implement");
}

ObjectiveList::ObjectiveList() // 0x6107D6
{
    mangled_assert("??0ObjectiveList@@AAE@XZ");
    todo("implement");
}

_inline std::_List_buy<Objective *,std::allocator<Objective *> >::~_List_buy<Objective *,std::allocator<Objective *> >() // 0x610826
{
    mangled_assert("??1?$_List_buy@PAVObjective@@V?$allocator@PAVObjective@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline NDGameEvent_Objectives::~NDGameEvent_Objectives() // 0x610841
{
    mangled_assert("??1NDGameEvent_Objectives@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

ObjectiveList::~ObjectiveList() // 0x610873
{
    mangled_assert("??1ObjectiveList@@EAE@XZ");
    todo("implement");
}

Objective *ObjectiveList::AddObjective(wchar_t const *, unsigned __int32) // 0x610957
{
    mangled_assert("?AddObjective@ObjectiveList@@QAEPAVObjective@@PB_WI@Z");
    todo("implement");
}

Objective *ObjectiveList::GetObjective(unsigned __int32) // 0x6109FB
{
    mangled_assert("?GetObjective@ObjectiveList@@QAEPAVObjective@@I@Z");
    todo("implement");
}

Objective::Objective(unsigned __int32, wchar_t const *, unsigned __int32) // 0x610778
{
    mangled_assert("??0Objective@@AAE@IPB_WI@Z");
    todo("implement");
}

Objective::~Objective() // 0x610848
{
    mangled_assert("??1Objective@@AAE@XZ");
    todo("implement");
}

void Objective::SetState(unsigned __int32) // 0x610A52
{
    mangled_assert("?SetState@Objective@@QAEXI@Z");
    todo("implement");
}

bool ObjectiveList::Save(SaveGameData *saveGameData, SaveType saveType) // 0x610A3A
{
    mangled_assert("?Save@ObjectiveList@@SG_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

bool ObjectiveList::Restore(SaveGameData *saveGameData) // 0x610A21
{
    mangled_assert("?Restore@ObjectiveList@@SG_NPAVSaveGameData@@@Z");
    todo("implement");
}

void ObjectiveList::saveObjectiveList(void *objectPtr, SaveGameData *saveGameData, SaveType savetype) // 0x6103DA
{
    mangled_assert("?saveObjectiveList@ObjectiveList@@CGXPAXPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

void ObjectiveList::restoreObjectiveList(void *objectPtr, SaveGameData *saveGameData) // 0x61048B
{
    mangled_assert("?restoreObjectiveList@ObjectiveList@@CGXPAXPAVSaveGameData@@@Z");
    todo("implement");
}

void ObjectiveList::postRestore() // 0x610C81
{
    mangled_assert("?postRestore@ObjectiveList@@UAEXXZ");
    todo("implement");
}

bool ObjectiveList::restore(SaveGameData *) // 0x610C90
{
    mangled_assert("?restore@ObjectiveList@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool ObjectiveList::save(SaveGameData *, SaveType) // 0x610CCE
{
    mangled_assert("?save@ObjectiveList@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
