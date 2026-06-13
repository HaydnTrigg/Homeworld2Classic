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

_extern bool _sub_610B0C();
bool ObjectiveList::Startup() // 0x610B0C
{
    mangled_assert("?Startup@ObjectiveList@@SG_NXZ");
    todo("implement");
    bool __result = _sub_610B0C();
    return __result;
}

_extern bool _sub_610AF2();
bool ObjectiveList::Shutdown() // 0x610AF2
{
    mangled_assert("?Shutdown@ObjectiveList@@SG_NXZ");
    todo("implement");
    bool __result = _sub_610AF2();
    return __result;
}

_extern ObjectiveList *_sub_610C5E();
ObjectiveList *ObjectiveList::i() // 0x610C5E
{
    mangled_assert("?i@ObjectiveList@@SGPAV1@XZ");
    todo("implement");
    ObjectiveList * __result = _sub_610C5E();
    return __result;
}

_extern _sub_6107D6(ObjectiveList *const);
ObjectiveList::ObjectiveList() // 0x6107D6
{
    mangled_assert("??0ObjectiveList@@AAE@XZ");
    todo("implement");
    _sub_6107D6(this);
}

_extern void _sub_610826(std::_List_buy<Objective *,std::allocator<Objective *> > *const);
_inline std::_List_buy<Objective *,std::allocator<Objective *> >::~_List_buy<Objective *,std::allocator<Objective *> >() // 0x610826
{
    mangled_assert("??1?$_List_buy@PAVObjective@@V?$allocator@PAVObjective@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_610826(this);
}

_extern void _sub_610841(NDGameEvent_Objectives *const);
_inline NDGameEvent_Objectives::~NDGameEvent_Objectives() // 0x610841
{
    mangled_assert("??1NDGameEvent_Objectives@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_610841(this);
}

_extern void _sub_610873(ObjectiveList *const);
ObjectiveList::~ObjectiveList() // 0x610873
{
    mangled_assert("??1ObjectiveList@@EAE@XZ");
    todo("implement");
    _sub_610873(this);
}

_extern Objective *_sub_610957(ObjectiveList *const, wchar_t const *, unsigned __int32);
Objective *ObjectiveList::AddObjective(wchar_t const *, unsigned __int32) // 0x610957
{
    mangled_assert("?AddObjective@ObjectiveList@@QAEPAVObjective@@PB_WI@Z");
    todo("implement");
    Objective * __result = _sub_610957(this, arg, arg);
    return __result;
}

_extern Objective *_sub_6109FB(ObjectiveList *const, unsigned __int32);
Objective *ObjectiveList::GetObjective(unsigned __int32) // 0x6109FB
{
    mangled_assert("?GetObjective@ObjectiveList@@QAEPAVObjective@@I@Z");
    todo("implement");
    Objective * __result = _sub_6109FB(this, arg);
    return __result;
}

_extern _sub_610778(Objective *const, unsigned __int32, wchar_t const *, unsigned __int32);
Objective::Objective(unsigned __int32, wchar_t const *, unsigned __int32) // 0x610778
{
    mangled_assert("??0Objective@@AAE@IPB_WI@Z");
    todo("implement");
    _sub_610778(this, arg, arg, arg);
}

_extern void _sub_610848(Objective *const);
Objective::~Objective() // 0x610848
{
    mangled_assert("??1Objective@@AAE@XZ");
    todo("implement");
    _sub_610848(this);
}

_extern void _sub_610A52(Objective *const, unsigned __int32);
void Objective::SetState(unsigned __int32) // 0x610A52
{
    mangled_assert("?SetState@Objective@@QAEXI@Z");
    todo("implement");
    _sub_610A52(this, arg);
}

_extern bool _sub_610A3A(SaveGameData *, SaveType);
bool ObjectiveList::Save(SaveGameData *saveGameData, SaveType saveType) // 0x610A3A
{
    mangled_assert("?Save@ObjectiveList@@SG_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_610A3A(saveGameData, saveType);
    return __result;
}

_extern bool _sub_610A21(SaveGameData *);
bool ObjectiveList::Restore(SaveGameData *saveGameData) // 0x610A21
{
    mangled_assert("?Restore@ObjectiveList@@SG_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_610A21(saveGameData);
    return __result;
}

_extern void _sub_6103DA(void *, SaveGameData *, SaveType);
void ObjectiveList::saveObjectiveList(void *objectPtr, SaveGameData *saveGameData, SaveType savetype) // 0x6103DA
{
    mangled_assert("?saveObjectiveList@ObjectiveList@@CGXPAXPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    _sub_6103DA(objectPtr, saveGameData, savetype);
}

_extern void _sub_61048B(void *, SaveGameData *);
void ObjectiveList::restoreObjectiveList(void *objectPtr, SaveGameData *saveGameData) // 0x61048B
{
    mangled_assert("?restoreObjectiveList@ObjectiveList@@CGXPAXPAVSaveGameData@@@Z");
    todo("implement");
    _sub_61048B(objectPtr, saveGameData);
}

_extern void _sub_610C81(ObjectiveList *const);
void ObjectiveList::postRestore() // 0x610C81
{
    mangled_assert("?postRestore@ObjectiveList@@UAEXXZ");
    todo("implement");
    _sub_610C81(this);
}

_extern bool _sub_610C90(ObjectiveList *const, SaveGameData *);
bool ObjectiveList::restore(SaveGameData *) // 0x610C90
{
    mangled_assert("?restore@ObjectiveList@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_610C90(this, arg);
    return __result;
}

_extern bool _sub_610CCE(ObjectiveList *const, SaveGameData *, SaveType);
bool ObjectiveList::save(SaveGameData *, SaveType) // 0x610CCE
{
    mangled_assert("?save@ObjectiveList@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_610CCE(this, arg, arg);
    return __result;
}

/* ---------- private code */
#endif
