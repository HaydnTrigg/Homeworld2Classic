#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <seInterface2\PatchID.h>
#include <xmemory0>
#include <SelTarg.h>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <seInterface2\SoundParams.h>
#include <Collision\Primitives\capsule.h>
#include <Mathlib\matrix3.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <new>
#include <Modifiers\ModifierTargetCache.h>
#include <DynamicPoint.h>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <fixedpoint.h>
#include <utility>
#include <iosfwd>
#include <util\fixed.h>
#include <vector>
#include <xmemory>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <list>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <ship.h>
#include <SobWithMesh.h>
#include <boost\scoped_ptr.hpp>
#include <SobRigidBody.h>
#include <sob.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <Parade.h>
#include <hash_map>
#include <Mathlib\vector2.h>
#include <weaponinfo.h>
#include <xhash>
#include <boost\cstdint.hpp>
#include <playerresourcetype.h>
#include <assist\stlexvector.h>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <task.h>
#include <stack>
#include <SobWithMeshStatic.h>
#include <SoundManager\SoundEntityHandle.h>
#include <Mathlib\quat.h>
#include <SobRigidBodyStatic.h>
#include <MeshAnimation.h>
#include <ShieldTypes.h>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <savegameimpl.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Subsystems\HardPointManager.h>
#include <Collision\intersect.h>
#include <Subsystems\HardPoint.h>
#include <debug\db.h>
#include <Collision\primitivesfwd.h>
#include <Subsystems\HardPointStatic.h>
#include <Subsystems\SubSystemType.h>
#include <deque>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <Interpolation.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <ParadeCommand.h>
#include <boost\detail\shared_count.hpp>
#include <commandtype.h>
#include <bitset>
#include <Collision\Primitives\aabb.h>
#include <OrderFeedback.h>
#include <boost\detail\lwm_win32.hpp>
#include <Squadron.h>
#include <command.h>
#include <sobid.h>
#include <abilities.h>
#include <SquadronList.h>
#include <wchar.h>
#include <queue>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const SquadronList::m_saveToken[13]; // 0x791A28
extern SaveData const SquadronList::m_saveData[2]; // 0x791A38

/* ---------- private variables */

/* ---------- public code */

SquadronList::SquadronList() // 0x4BBE67
{
    mangled_assert("??0SquadronList@@QAE@XZ");
    todo("implement");
}

SquadronList::SquadronList(SquadronList::SL_Flags) // 0x4BBE15
{
    mangled_assert("??0SquadronList@@QAE@W4SL_Flags@0@@Z");
    todo("implement");
}

SquadronList::SquadronList(SquadronList const &) // 0x4BBD64
{
    mangled_assert("??0SquadronList@@QAE@ABV0@@Z");
    todo("implement");
}

SquadronList::SquadronList(std::list<Squadron *,std::allocator<Squadron *> > const &) // 0x4BBDB2
{
    mangled_assert("??0SquadronList@@QAE@ABV?$list@PAVSquadron@@V?$allocator@PAVSquadron@@@std@@@std@@@Z");
    todo("implement");
}

SquadronList::~SquadronList() // 0x4BBE91
{
    mangled_assert("??1SquadronList@@UAE@XZ");
    todo("implement");
}

SquadronList &SquadronList::operator=(SquadronList const &) // 0x4BBEF0
{
    mangled_assert("??4SquadronList@@QAEAAV0@ABV0@@Z");
    todo("implement");
}

void SquadronList::convert(Selection const &) // 0x4BC475
{
    mangled_assert("?convert@SquadronList@@QAEXABVSelection@@@Z");
    todo("implement");
}

void SquadronList::push_back(Squadron *) // 0x4BC7A4
{
    mangled_assert("?push_back@SquadronList@@QAEXPAVSquadron@@@Z");
    todo("implement");
}

void SquadronList::push_back_no_find(Squadron *) // 0x4BC7E5
{
    mangled_assert("?push_back_no_find@SquadronList@@QAEXPAVSquadron@@@Z");
    todo("implement");
}

void SquadronList::append(SquadronList const &) // 0x4BC3A2
{
    mangled_assert("?append@SquadronList@@QAEXABV1@@Z");
    todo("implement");
}

std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Squadron *> > > SquadronList::erase(std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Squadron *> > >) // 0x4BC4DF
{
    mangled_assert("?erase@SquadronList@@QAE?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PAVSquadron@@@std@@@std@@@std@@V23@@Z");
    todo("implement");
}

void SquadronList::clear() // 0x4BC404
{
    mangled_assert("?clear@SquadronList@@QAEXXZ");
    todo("implement");
}

bool SquadronList::remove(Squadron const *) // 0x4BC80F
{
    mangled_assert("?remove@SquadronList@@QAE_NPBVSquadron@@@Z");
    todo("implement");
}

void SquadronList::HandleInsertion(Squadron *) // 0x4BC012
{
    mangled_assert("?HandleInsertion@SquadronList@@AAEXPAVSquadron@@@Z");
    todo("implement");
}

void SquadronList::HandleRemoval(Squadron *) // 0x4BC041
{
    mangled_assert("?HandleRemoval@SquadronList@@AAEXPAVSquadron@@@Z");
    todo("implement");
}

void SquadronList::NotifyInsertion(Squadron *) // 0x4BC060
{
    mangled_assert("?NotifyInsertion@SquadronList@@AAEXPAVSquadron@@@Z");
    todo("implement");
}

void SquadronList::NotifyRemoval(Squadron *) // 0x4BC080
{
    mangled_assert("?NotifyRemoval@SquadronList@@AAEXPAVSquadron@@@Z");
    todo("implement");
}

void SquadronList::Register_Observer(SquadronList::Observer *) // 0x4BC0D2
{
    mangled_assert("?Register_Observer@SquadronList@@QAEXPAVObserver@1@@Z");
    todo("implement");
}

void SquadronList::Remove_Observer(SquadronList::Observer *) // 0x4BC0E2
{
    mangled_assert("?Remove_Observer@SquadronList@@QAEXPAVObserver@1@@Z");
    todo("implement");
}

void SquadronList::getAveragePositionDtrm(vector3 &) const // 0x4BC511
{
    mangled_assert("?getAveragePositionDtrm@SquadronList@@QBEXAAVvector3@@@Z");
    todo("implement");
}

void SquadronList::getAveragePositionVis(vector3 &) const // 0x4BC5C0
{
    mangled_assert("?getAveragePositionVis@SquadronList@@QBEXAAVvector3@@@Z");
    todo("implement");
}

Squadron *SquadronList::getSquadronAtIndex(__int32) // 0x4BC66F
{
    mangled_assert("?getSquadronAtIndex@SquadronList@@QAEPAVSquadron@@H@Z");
    todo("implement");
}

void SquadronList::postRestore() // 0x4BC6DF
{
    mangled_assert("?postRestore@SquadronList@@UAEXXZ");
    todo("implement");
}

bool SquadronList::restore(SaveGameData *) // 0x4BC84C
{
    mangled_assert("?restore@SquadronList@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool SquadronList::save(SaveGameData *, SaveType) // 0x4BC88A
{
    mangled_assert("?save@SquadronList@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
