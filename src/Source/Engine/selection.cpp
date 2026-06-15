#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <playerresourcetype.h>
#include <pch.h>
#include <Parade.h>
#include <hash_map>
#include <TeamColourRegistry.h>
#include <xhash>
#include <savegame.h>
#include <task.h>
#include <stack>
#include <SobWithMeshStatic.h>
#include <SoundManager\SoundEntityHandle.h>
#include <Mathlib\matrix3.h>
#include <ship.h>
#include <SobWithMesh.h>
#include <profile\profile.h>
#include <SobRigidBody.h>
#include <iostream>
#include <SobRigidBodyStatic.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <MeshAnimation.h>
#include <Collision\Primitives\obb.h>
#include <ShieldTypes.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <xutility>
#include <Collision\primitivesfwd.h>
#include <utility>
#include <iosfwd>
#include <Subsystems\HardPointManager.h>
#include <vector>
#include <Subsystems\HardPoint.h>
#include <xmemory>
#include <Subsystems\HardPointStatic.h>
#include <Subsystems\SubSystemType.h>
#include <Interpolation.h>
#include <math.h>
#include <list>
#include <Collision\Primitives\aabb.h>
#include <sobid.h>
#include <Mathlib\vector3.h>
#include <Volume.h>
#include <Mathlib\vector4.h>
#include <VolumeStatic.h>
#include <SobUnmoveableStatic.h>
#include <map>
#include <abilities.h>
#include <xtree>
#include <ParadeCommand.h>
#include <commandtype.h>
#include <boost\scoped_ptr.hpp>
#include <OrderFeedback.h>
#include <Squadron.h>
#include <command.h>
#include <Mathlib\vector2.h>
#include <boost\cstdint.hpp>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <seInterface2\SoundParams.h>
#include <Sphere.h>
#include <Mathlib\quat.h>
#include <SobUnmoveable.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <Modifiers\ModifierTargetCache.h>
#include <savegameimpl.h>
#include <debug\db.h>
#include <DynamicPoint.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <deque>
#include <boost\shared_ptr.hpp>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <util\colour.h>
#include <sobtypes.h>
#include <MultiplierTypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <Collision\BVH\bvh.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <bitset>
#include <boost\detail\lwm_win32.hpp>
#include <sob.h>
#include <sobstatic.h>
#include <wchar.h>
#include <Collision\Primitives\sphere.h>
#include <SquadronList.h>
#include <queue>
#include <algorithm>
#include <weaponinfo.h>

/* ---------- constants */

/* ---------- definitions */

struct Compare2Predicate
{
    _inline Compare2Predicate(Selection::MinElementCompare const &);
    bool operator()(Sob *, Sob *) const;
private:
    Selection::MinElementCompare const &m_compare; // 0x0
};
static_assert(sizeof(Compare2Predicate) == 4, "Invalid Compare2Predicate size");

struct CompareEqualPredicate
{
    _inline CompareEqualPredicate(Selection::FirstElementCompare const &);
    bool operator()(Sob *) const;
private:
    Selection::FirstElementCompare const &m_compare; // 0x0
};
static_assert(sizeof(CompareEqualPredicate) == 4, "Invalid CompareEqualPredicate size");

/* ---------- prototypes */

/* ---------- globals */

extern SaveData const Selection::m_saveData[2]; // 0x7AF348
extern char const Selection::m_saveToken[10]; // 0x7AF388

/* ---------- private variables */

/* ---------- public code */

_inline Compare2Predicate::Compare2Predicate(Selection::MinElementCompare const &) // 0x62E626
{
    mangled_assert("??0Compare2Predicate@@QAE@ABVMinElementCompare@Selection@@@Z");
    todo("implement");
}

_inline bool Compare2Predicate::operator()(Sob *, Sob *) const // 0x62E878
{
    mangled_assert("??RCompare2Predicate@@QBE_NPAVSob@@0@Z");
    todo("implement");
}

_inline CompareEqualPredicate::CompareEqualPredicate(Selection::FirstElementCompare const &) // 0x62E631
{
    mangled_assert("??0CompareEqualPredicate@@QAE@ABVFirstElementCompare@Selection@@@Z");
    todo("implement");
}

_inline bool CompareEqualPredicate::operator()(Sob *) const // 0x62E87E
{
    mangled_assert("??RCompareEqualPredicate@@QBE_NPAVSob@@@Z");
    todo("implement");
}

bool Selection::saveStatics(SaveGameData *saveGameData, SaveType saveType) // 0x62FA47
{
    mangled_assert("?saveStatics@Selection@@SG_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

bool Selection::restoreStatics(SaveGameData *saveGameData) // 0x62FA0D
{
    mangled_assert("?restoreStatics@Selection@@SG_NPAVSaveGameData@@@Z");
    todo("implement");
}

Selection::Selection() // 0x62E743
{
    mangled_assert("??0Selection@@QAE@XZ");
    todo("implement");
}

Selection::Selection(SelectionFlagMask) // 0x62E693
{
    mangled_assert("??0Selection@@QAE@W4SelectionFlagMask@@@Z");
    todo("implement");
}

Selection::Selection(Selection const &) // 0x62E63C
{
    mangled_assert("??0Selection@@QAE@ABV0@@Z");
    todo("implement");
}

Selection::Selection(SelectionFlagMask, Selection const &) // 0x62E6D8
{
    mangled_assert("??0Selection@@QAE@W4SelectionFlagMask@@ABV0@@Z");
    todo("implement");
}

Selection &Selection::operator=(Selection const &) // 0x62E7F1
{
    mangled_assert("??4Selection@@QAEAAV0@ABV0@@Z");
    todo("implement");
}

Selection::~Selection() // 0x62E792
{
    mangled_assert("??1Selection@@UAE@XZ");
    todo("implement");
}

bool Selection::restore(SaveGameData *) // 0x62F9CF
{
    mangled_assert("?restore@Selection@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool Selection::save(SaveGameData *, SaveType) // 0x62FA12
{
    mangled_assert("?save@Selection@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

void Selection::postRestore() // 0x62F842
{
    mangled_assert("?postRestore@Selection@@UAEXXZ");
    todo("implement");
}

bool Selection::equalContents(Selection const &) const // 0x62EF1A
{
    mangled_assert("?equalContents@Selection@@QBE_NABV1@@Z");
    todo("implement");
}

void Selection::append(Selection const &) // 0x62EBAD
{
    mangled_assert("?append@Selection@@QAEXABV1@@Z");
    todo("implement");
}

void Selection::append_no_find(Selection const &) // 0x62EBD7
{
    mangled_assert("?append_no_find@Selection@@QAEXABV1@@Z");
    todo("implement");
}

void Selection::truncate(Selection const &) // 0x62FA5B
{
    mangled_assert("?truncate@Selection@@QAEXABV1@@Z");
    todo("implement");
}

bool Selection::containsAnyOfMe(Selection const &) const // 0x62EDC3
{
    mangled_assert("?containsAnyOfMe@Selection@@QBE_NABV1@@Z");
    todo("implement");
}

bool Selection::containsType(SobType) const // 0x62EE3A
{
    mangled_assert("?containsType@Selection@@QBE_NW4SobType@@@Z");
    todo("implement");
}

bool Selection::containsOnlyType(SobType) const // 0x62EE0B
{
    mangled_assert("?containsOnlyType@Selection@@QBE_NW4SobType@@@Z");
    todo("implement");
}

bool Selection::areAnyElements(bool (*)(Sob const *)) const // 0x62ECAD
{
    mangled_assert("?areAnyElements@Selection@@QBE_NP6G_NPBVSob@@@Z@Z");
    todo("implement");
}

bool Selection::areAnyElementsParam(bool (*)(Sob const *, void *), void *) const // 0x62ED2C
{
    mangled_assert("?areAnyElementsParam@Selection@@QBE_NP6G_NPBVSob@@PAX@Z1@Z");
    todo("implement");
}

bool Selection::areAllElements(bool (*)(Sob const *)) const // 0x62EC01
{
    mangled_assert("?areAllElements@Selection@@QBE_NP6G_NPBVSob@@@Z@Z");
    todo("implement");
}

bool Selection::areAllElementsParam(bool (*)(Sob const *, void *), void *) const // 0x62EC80
{
    mangled_assert("?areAllElementsParam@Selection@@QBE_NP6G_NPBVSob@@PAX@Z1@Z");
    todo("implement");
}

void Selection::makeElements(bool (*)(Sob const *)) // 0x62F706
{
    mangled_assert("?makeElements@Selection@@QAEXP6G_NPBVSob@@@Z@Z");
    todo("implement");
}

void Selection::makeElementsParam(bool (*)(Sob const *, void *), void *) // 0x62F7B8
{
    mangled_assert("?makeElementsParam@Selection@@QAEXP6G_NPBVSob@@PAX@Z1@Z");
    todo("implement");
}

void Selection::getElements(bool (*)(Sob const *), Selection &) const // 0x62F171
{
    mangled_assert("?getElements@Selection@@QBEXP6G_NPBVSob@@@ZAAV1@@Z");
    todo("implement");
}

void Selection::getElementsParam(bool (*)(Sob const *, void *), void *, Selection &) const // 0x62F231
{
    mangled_assert("?getElementsParam@Selection@@QBEXP6G_NPBVSob@@PAX@Z1AAV1@@Z");
    todo("implement");
}

bool Selection::areAnyElementsNot(bool (*)(Sob const *)) const // 0x62ECD6
{
    mangled_assert("?areAnyElementsNot@Selection@@QBE_NP6G_NPBVSob@@@Z@Z");
    todo("implement");
}

bool Selection::areAnyElementsNotParam(bool (*)(Sob const *, void *), void *) const // 0x62ECFF
{
    mangled_assert("?areAnyElementsNotParam@Selection@@QBE_NP6G_NPBVSob@@PAX@Z1@Z");
    todo("implement");
}

bool Selection::areAllElementsNot(bool (*)(Sob const *)) const // 0x62EC2A
{
    mangled_assert("?areAllElementsNot@Selection@@QBE_NP6G_NPBVSob@@@Z@Z");
    todo("implement");
}

bool Selection::areAllElementsNotParam(bool (*)(Sob const *, void *), void *) const // 0x62EC53
{
    mangled_assert("?areAllElementsNotParam@Selection@@QBE_NP6G_NPBVSob@@PAX@Z1@Z");
    todo("implement");
}

void Selection::makeElementsNot(bool (*)(Sob const *)) // 0x62F740
{
    mangled_assert("?makeElementsNot@Selection@@QAEXP6G_NPBVSob@@@Z@Z");
    todo("implement");
}

void Selection::makeElementsNotParam(bool (*)(Sob const *, void *), void *) // 0x62F77A
{
    mangled_assert("?makeElementsNotParam@Selection@@QAEXP6G_NPBVSob@@PAX@Z1@Z");
    todo("implement");
}

void Selection::getElementsNot(bool (*)(Sob const *), Selection &) const // 0x62F1AC
{
    mangled_assert("?getElementsNot@Selection@@QBEXP6G_NPBVSob@@@ZAAV1@@Z");
    todo("implement");
}

void Selection::getElementsNotParam(bool (*)(Sob const *, void *), void *, Selection &) const // 0x62F1F2
{
    mangled_assert("?getElementsNotParam@Selection@@QBEXP6G_NPBVSob@@PAX@Z1AAV1@@Z");
    todo("implement");
}

unsigned __int32 Selection::countElements(bool (*)(Sob const *)) const // 0x62EE99
{
    mangled_assert("?countElements@Selection@@QBEIP6G_NPBVSob@@@Z@Z");
    todo("implement");
}

unsigned __int32 Selection::countElementsParam(bool (*)(Sob const *, void *), void *) const // 0x62EEC3
{
    mangled_assert("?countElementsParam@Selection@@QBEIP6G_NPBVSob@@PAX@Z1@Z");
    todo("implement");
}

Sob *Selection::minElement(Selection::MinElementCompare const &) const // 0x62F810
{
    mangled_assert("?minElement@Selection@@QBEPAVSob@@ABVMinElementCompare@1@@Z");
    todo("implement");
}

Sob *Selection::find_if(Selection::FirstElementCompare const &) const // 0x62F088
{
    mangled_assert("?find_if@Selection@@QBEPAVSob@@ABVFirstElementCompare@1@@Z");
    todo("implement");
}

float Selection::getExtents(vector3 *, vector3 *, vector3 *) const // 0x62F270
{
    mangled_assert("?getExtents@Selection@@QBEMPAVvector3@@00@Z");
    todo("implement");
}

float Selection::getInterpolatedExtents(vector3 *, vector3 *, vector3 *) const // 0x62F3F2
{
    mangled_assert("?getInterpolatedExtents@Selection@@QBEMPAVvector3@@00@Z");
    todo("implement");
}

void Selection::getAveragePosition(vector3 *) const // 0x62F0B6
{
    mangled_assert("?getAveragePosition@Selection@@QBEXPAVvector3@@@Z");
    todo("implement");
}

void Selection::HandleInsertion(Sob *) // 0x62E91F
{
    mangled_assert("?HandleInsertion@Selection@@AAEXPAVSob@@@Z");
    todo("implement");
}

void Selection::HandleRemoval(Sob *) // 0x62E939
{
    mangled_assert("?HandleRemoval@Selection@@AAEXPAVSob@@@Z");
    todo("implement");
}

void Selection::NotifyInsertion(Sob *) // 0x62E946
{
    mangled_assert("?NotifyInsertion@Selection@@AAEXPAVSob@@@Z");
    todo("implement");
}

void Selection::NotifyRemoval(Sob *) // 0x62E966
{
    mangled_assert("?NotifyRemoval@Selection@@AAEXPAVSob@@@Z");
    todo("implement");
}

void Selection::Register_Observer(Selection::Observer *) // 0x62E9B5
{
    mangled_assert("?Register_Observer@Selection@@QAEXPAVObserver@1@@Z");
    todo("implement");
}

void Selection::Remove_Observer(Selection::Observer *) // 0x62E9C5
{
    mangled_assert("?Remove_Observer@Selection@@QAEXPAVObserver@1@@Z");
    todo("implement");
}

Sob **Selection::erase(Sob **) // 0x62EFDB
{
    mangled_assert("?erase@Selection@@QAEPAPAVSob@@PAPAV2@@Z");
    todo("implement");
}

bool Selection::remove(Sob const *) // 0x62F93C
{
    mangled_assert("?remove@Selection@@QAE_NPBVSob@@@Z");
    todo("implement");
}

void Selection::push_back(Sob *) // 0x62F8AA
{
    mangled_assert("?push_back@Selection@@QAEXPAVSob@@@Z");
    todo("implement");
}

void Selection::push_back_no_find(Sob *) // 0x62F904
{
    mangled_assert("?push_back_no_find@Selection@@QAEXPAVSob@@@Z");
    todo("implement");
}

void Selection::insert(Sob **, Sob *) // 0x62F659
{
    mangled_assert("?insert@Selection@@QAEXPAPAVSob@@PAV2@@Z");
    todo("implement");
}

bool Selection::contains(Selection const &) const // 0x62EDAC
{
    mangled_assert("?contains@Selection@@QBE_NABV1@@Z");
    todo("implement");
}

bool Selection::issubset(Selection const &) const // 0x62F6BE
{
    mangled_assert("?issubset@Selection@@QBE_NABV1@@Z");
    todo("implement");
}

void Selection::SetFlag(SelectionFlag) // 0x62E9F2
{
    mangled_assert("?SetFlag@Selection@@QAEXW4SelectionFlag@@@Z");
    todo("implement");
}

void Selection::ClearFlag(SelectionFlag) // 0x62E8B8
{
    mangled_assert("?ClearFlag@Selection@@QAEXW4SelectionFlag@@@Z");
    todo("implement");
}

bool Selection::IsSobInside::operator()(Sob const *) const // 0x62E884
{
    mangled_assert("??RIsSobInside@Selection@@QBE_NPBVSob@@@Z");
    todo("implement");
}

void Selection::convert(SquadronList const &) // 0x62EE69
{
    mangled_assert("?convert@Selection@@QAEXABVSquadronList@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
