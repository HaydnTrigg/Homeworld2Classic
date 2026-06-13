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

_extern _sub_62E626(Compare2Predicate *const, Selection::MinElementCompare const &);
_inline Compare2Predicate::Compare2Predicate(Selection::MinElementCompare const &) // 0x62E626
{
    mangled_assert("??0Compare2Predicate@@QAE@ABVMinElementCompare@Selection@@@Z");
    todo("implement");
    _sub_62E626(this, arg);
}

_extern bool _sub_62E878(Compare2Predicate const *const, Sob *, Sob *);
_inline bool Compare2Predicate::operator()(Sob *, Sob *) const // 0x62E878
{
    mangled_assert("??RCompare2Predicate@@QBE_NPAVSob@@0@Z");
    todo("implement");
    bool __result = _sub_62E878(this, arg, arg);
    return __result;
}

_extern _sub_62E631(CompareEqualPredicate *const, Selection::FirstElementCompare const &);
_inline CompareEqualPredicate::CompareEqualPredicate(Selection::FirstElementCompare const &) // 0x62E631
{
    mangled_assert("??0CompareEqualPredicate@@QAE@ABVFirstElementCompare@Selection@@@Z");
    todo("implement");
    _sub_62E631(this, arg);
}

_extern bool _sub_62E87E(CompareEqualPredicate const *const, Sob *);
_inline bool CompareEqualPredicate::operator()(Sob *) const // 0x62E87E
{
    mangled_assert("??RCompareEqualPredicate@@QBE_NPAVSob@@@Z");
    todo("implement");
    bool __result = _sub_62E87E(this, arg);
    return __result;
}

_extern bool _sub_62FA47(SaveGameData *, SaveType);
bool Selection::saveStatics(SaveGameData *saveGameData, SaveType saveType) // 0x62FA47
{
    mangled_assert("?saveStatics@Selection@@SG_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_62FA47(saveGameData, saveType);
    return __result;
}

_extern bool _sub_62FA0D(SaveGameData *);
bool Selection::restoreStatics(SaveGameData *saveGameData) // 0x62FA0D
{
    mangled_assert("?restoreStatics@Selection@@SG_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_62FA0D(saveGameData);
    return __result;
}

_extern _sub_62E743(Selection *const);
Selection::Selection() // 0x62E743
{
    mangled_assert("??0Selection@@QAE@XZ");
    todo("implement");
    _sub_62E743(this);
}

_extern _sub_62E693(Selection *const, SelectionFlagMask);
Selection::Selection(SelectionFlagMask) // 0x62E693
{
    mangled_assert("??0Selection@@QAE@W4SelectionFlagMask@@@Z");
    todo("implement");
    _sub_62E693(this, arg);
}

_extern _sub_62E63C(Selection *const, Selection const &);
Selection::Selection(Selection const &) // 0x62E63C
{
    mangled_assert("??0Selection@@QAE@ABV0@@Z");
    todo("implement");
    _sub_62E63C(this, arg);
}

_extern _sub_62E6D8(Selection *const, SelectionFlagMask, Selection const &);
Selection::Selection(SelectionFlagMask, Selection const &) // 0x62E6D8
{
    mangled_assert("??0Selection@@QAE@W4SelectionFlagMask@@ABV0@@Z");
    todo("implement");
    _sub_62E6D8(this, arg, arg);
}

_extern Selection &_sub_62E7F1(Selection *const, Selection const &);
Selection &Selection::operator=(Selection const &) // 0x62E7F1
{
    mangled_assert("??4Selection@@QAEAAV0@ABV0@@Z");
    todo("implement");
    Selection & __result = _sub_62E7F1(this, arg);
    return __result;
}

_extern void _sub_62E792(Selection *const);
Selection::~Selection() // 0x62E792
{
    mangled_assert("??1Selection@@UAE@XZ");
    todo("implement");
    _sub_62E792(this);
}

_extern bool _sub_62F9CF(Selection *const, SaveGameData *);
bool Selection::restore(SaveGameData *) // 0x62F9CF
{
    mangled_assert("?restore@Selection@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_62F9CF(this, arg);
    return __result;
}

_extern bool _sub_62FA12(Selection *const, SaveGameData *, SaveType);
bool Selection::save(SaveGameData *, SaveType) // 0x62FA12
{
    mangled_assert("?save@Selection@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_62FA12(this, arg, arg);
    return __result;
}

_extern void _sub_62F842(Selection *const);
void Selection::postRestore() // 0x62F842
{
    mangled_assert("?postRestore@Selection@@UAEXXZ");
    todo("implement");
    _sub_62F842(this);
}

_extern bool _sub_62EF1A(Selection const *const, Selection const &);
bool Selection::equalContents(Selection const &) const // 0x62EF1A
{
    mangled_assert("?equalContents@Selection@@QBE_NABV1@@Z");
    todo("implement");
    bool __result = _sub_62EF1A(this, arg);
    return __result;
}

_extern void _sub_62EBAD(Selection *const, Selection const &);
void Selection::append(Selection const &) // 0x62EBAD
{
    mangled_assert("?append@Selection@@QAEXABV1@@Z");
    todo("implement");
    _sub_62EBAD(this, arg);
}

_extern void _sub_62EBD7(Selection *const, Selection const &);
void Selection::append_no_find(Selection const &) // 0x62EBD7
{
    mangled_assert("?append_no_find@Selection@@QAEXABV1@@Z");
    todo("implement");
    _sub_62EBD7(this, arg);
}

_extern void _sub_62FA5B(Selection *const, Selection const &);
void Selection::truncate(Selection const &) // 0x62FA5B
{
    mangled_assert("?truncate@Selection@@QAEXABV1@@Z");
    todo("implement");
    _sub_62FA5B(this, arg);
}

_extern bool _sub_62EDC3(Selection const *const, Selection const &);
bool Selection::containsAnyOfMe(Selection const &) const // 0x62EDC3
{
    mangled_assert("?containsAnyOfMe@Selection@@QBE_NABV1@@Z");
    todo("implement");
    bool __result = _sub_62EDC3(this, arg);
    return __result;
}

_extern bool _sub_62EE3A(Selection const *const, SobType);
bool Selection::containsType(SobType) const // 0x62EE3A
{
    mangled_assert("?containsType@Selection@@QBE_NW4SobType@@@Z");
    todo("implement");
    bool __result = _sub_62EE3A(this, arg);
    return __result;
}

_extern bool _sub_62EE0B(Selection const *const, SobType);
bool Selection::containsOnlyType(SobType) const // 0x62EE0B
{
    mangled_assert("?containsOnlyType@Selection@@QBE_NW4SobType@@@Z");
    todo("implement");
    bool __result = _sub_62EE0B(this, arg);
    return __result;
}

_extern bool _sub_62ECAD(Selection const *const, bool (*)(Sob const *));
bool Selection::areAnyElements(bool (*)(Sob const *)) const // 0x62ECAD
{
    mangled_assert("?areAnyElements@Selection@@QBE_NP6G_NPBVSob@@@Z@Z");
    todo("implement");
    bool __result = _sub_62ECAD(this, arg);
    return __result;
}

_extern bool _sub_62ED2C(Selection const *const, bool (*)(Sob const *, void *), void *);
bool Selection::areAnyElementsParam(bool (*)(Sob const *, void *), void *) const // 0x62ED2C
{
    mangled_assert("?areAnyElementsParam@Selection@@QBE_NP6G_NPBVSob@@PAX@Z1@Z");
    todo("implement");
    bool __result = _sub_62ED2C(this, arg, arg);
    return __result;
}

_extern bool _sub_62EC01(Selection const *const, bool (*)(Sob const *));
bool Selection::areAllElements(bool (*)(Sob const *)) const // 0x62EC01
{
    mangled_assert("?areAllElements@Selection@@QBE_NP6G_NPBVSob@@@Z@Z");
    todo("implement");
    bool __result = _sub_62EC01(this, arg);
    return __result;
}

_extern bool _sub_62EC80(Selection const *const, bool (*)(Sob const *, void *), void *);
bool Selection::areAllElementsParam(bool (*)(Sob const *, void *), void *) const // 0x62EC80
{
    mangled_assert("?areAllElementsParam@Selection@@QBE_NP6G_NPBVSob@@PAX@Z1@Z");
    todo("implement");
    bool __result = _sub_62EC80(this, arg, arg);
    return __result;
}

_extern void _sub_62F706(Selection *const, bool (*)(Sob const *));
void Selection::makeElements(bool (*)(Sob const *)) // 0x62F706
{
    mangled_assert("?makeElements@Selection@@QAEXP6G_NPBVSob@@@Z@Z");
    todo("implement");
    _sub_62F706(this, arg);
}

_extern void _sub_62F7B8(Selection *const, bool (*)(Sob const *, void *), void *);
void Selection::makeElementsParam(bool (*)(Sob const *, void *), void *) // 0x62F7B8
{
    mangled_assert("?makeElementsParam@Selection@@QAEXP6G_NPBVSob@@PAX@Z1@Z");
    todo("implement");
    _sub_62F7B8(this, arg, arg);
}

_extern void _sub_62F171(Selection const *const, bool (*)(Sob const *), Selection &);
void Selection::getElements(bool (*)(Sob const *), Selection &) const // 0x62F171
{
    mangled_assert("?getElements@Selection@@QBEXP6G_NPBVSob@@@ZAAV1@@Z");
    todo("implement");
    _sub_62F171(this, arg, arg);
}

_extern void _sub_62F231(Selection const *const, bool (*)(Sob const *, void *), void *, Selection &);
void Selection::getElementsParam(bool (*)(Sob const *, void *), void *, Selection &) const // 0x62F231
{
    mangled_assert("?getElementsParam@Selection@@QBEXP6G_NPBVSob@@PAX@Z1AAV1@@Z");
    todo("implement");
    _sub_62F231(this, arg, arg, arg);
}

_extern bool _sub_62ECD6(Selection const *const, bool (*)(Sob const *));
bool Selection::areAnyElementsNot(bool (*)(Sob const *)) const // 0x62ECD6
{
    mangled_assert("?areAnyElementsNot@Selection@@QBE_NP6G_NPBVSob@@@Z@Z");
    todo("implement");
    bool __result = _sub_62ECD6(this, arg);
    return __result;
}

_extern bool _sub_62ECFF(Selection const *const, bool (*)(Sob const *, void *), void *);
bool Selection::areAnyElementsNotParam(bool (*)(Sob const *, void *), void *) const // 0x62ECFF
{
    mangled_assert("?areAnyElementsNotParam@Selection@@QBE_NP6G_NPBVSob@@PAX@Z1@Z");
    todo("implement");
    bool __result = _sub_62ECFF(this, arg, arg);
    return __result;
}

_extern bool _sub_62EC2A(Selection const *const, bool (*)(Sob const *));
bool Selection::areAllElementsNot(bool (*)(Sob const *)) const // 0x62EC2A
{
    mangled_assert("?areAllElementsNot@Selection@@QBE_NP6G_NPBVSob@@@Z@Z");
    todo("implement");
    bool __result = _sub_62EC2A(this, arg);
    return __result;
}

_extern bool _sub_62EC53(Selection const *const, bool (*)(Sob const *, void *), void *);
bool Selection::areAllElementsNotParam(bool (*)(Sob const *, void *), void *) const // 0x62EC53
{
    mangled_assert("?areAllElementsNotParam@Selection@@QBE_NP6G_NPBVSob@@PAX@Z1@Z");
    todo("implement");
    bool __result = _sub_62EC53(this, arg, arg);
    return __result;
}

_extern void _sub_62F740(Selection *const, bool (*)(Sob const *));
void Selection::makeElementsNot(bool (*)(Sob const *)) // 0x62F740
{
    mangled_assert("?makeElementsNot@Selection@@QAEXP6G_NPBVSob@@@Z@Z");
    todo("implement");
    _sub_62F740(this, arg);
}

_extern void _sub_62F77A(Selection *const, bool (*)(Sob const *, void *), void *);
void Selection::makeElementsNotParam(bool (*)(Sob const *, void *), void *) // 0x62F77A
{
    mangled_assert("?makeElementsNotParam@Selection@@QAEXP6G_NPBVSob@@PAX@Z1@Z");
    todo("implement");
    _sub_62F77A(this, arg, arg);
}

_extern void _sub_62F1AC(Selection const *const, bool (*)(Sob const *), Selection &);
void Selection::getElementsNot(bool (*)(Sob const *), Selection &) const // 0x62F1AC
{
    mangled_assert("?getElementsNot@Selection@@QBEXP6G_NPBVSob@@@ZAAV1@@Z");
    todo("implement");
    _sub_62F1AC(this, arg, arg);
}

_extern void _sub_62F1F2(Selection const *const, bool (*)(Sob const *, void *), void *, Selection &);
void Selection::getElementsNotParam(bool (*)(Sob const *, void *), void *, Selection &) const // 0x62F1F2
{
    mangled_assert("?getElementsNotParam@Selection@@QBEXP6G_NPBVSob@@PAX@Z1AAV1@@Z");
    todo("implement");
    _sub_62F1F2(this, arg, arg, arg);
}

_extern unsigned __int32 _sub_62EE99(Selection const *const, bool (*)(Sob const *));
unsigned __int32 Selection::countElements(bool (*)(Sob const *)) const // 0x62EE99
{
    mangled_assert("?countElements@Selection@@QBEIP6G_NPBVSob@@@Z@Z");
    todo("implement");
    unsigned __int32 __result = _sub_62EE99(this, arg);
    return __result;
}

_extern unsigned __int32 _sub_62EEC3(Selection const *const, bool (*)(Sob const *, void *), void *);
unsigned __int32 Selection::countElementsParam(bool (*)(Sob const *, void *), void *) const // 0x62EEC3
{
    mangled_assert("?countElementsParam@Selection@@QBEIP6G_NPBVSob@@PAX@Z1@Z");
    todo("implement");
    unsigned __int32 __result = _sub_62EEC3(this, arg, arg);
    return __result;
}

_extern Sob *_sub_62F810(Selection const *const, Selection::MinElementCompare const &);
Sob *Selection::minElement(Selection::MinElementCompare const &) const // 0x62F810
{
    mangled_assert("?minElement@Selection@@QBEPAVSob@@ABVMinElementCompare@1@@Z");
    todo("implement");
    Sob * __result = _sub_62F810(this, arg);
    return __result;
}

_extern Sob *_sub_62F088(Selection const *const, Selection::FirstElementCompare const &);
Sob *Selection::find_if(Selection::FirstElementCompare const &) const // 0x62F088
{
    mangled_assert("?find_if@Selection@@QBEPAVSob@@ABVFirstElementCompare@1@@Z");
    todo("implement");
    Sob * __result = _sub_62F088(this, arg);
    return __result;
}

_extern float _sub_62F270(Selection const *const, vector3 *, vector3 *, vector3 *);
float Selection::getExtents(vector3 *, vector3 *, vector3 *) const // 0x62F270
{
    mangled_assert("?getExtents@Selection@@QBEMPAVvector3@@00@Z");
    todo("implement");
    float __result = _sub_62F270(this, arg, arg, arg);
    return __result;
}

_extern float _sub_62F3F2(Selection const *const, vector3 *, vector3 *, vector3 *);
float Selection::getInterpolatedExtents(vector3 *, vector3 *, vector3 *) const // 0x62F3F2
{
    mangled_assert("?getInterpolatedExtents@Selection@@QBEMPAVvector3@@00@Z");
    todo("implement");
    float __result = _sub_62F3F2(this, arg, arg, arg);
    return __result;
}

_extern void _sub_62F0B6(Selection const *const, vector3 *);
void Selection::getAveragePosition(vector3 *) const // 0x62F0B6
{
    mangled_assert("?getAveragePosition@Selection@@QBEXPAVvector3@@@Z");
    todo("implement");
    _sub_62F0B6(this, arg);
}

_extern void _sub_62E91F(Selection *const, Sob *);
void Selection::HandleInsertion(Sob *) // 0x62E91F
{
    mangled_assert("?HandleInsertion@Selection@@AAEXPAVSob@@@Z");
    todo("implement");
    _sub_62E91F(this, arg);
}

_extern void _sub_62E939(Selection *const, Sob *);
void Selection::HandleRemoval(Sob *) // 0x62E939
{
    mangled_assert("?HandleRemoval@Selection@@AAEXPAVSob@@@Z");
    todo("implement");
    _sub_62E939(this, arg);
}

_extern void _sub_62E946(Selection *const, Sob *);
void Selection::NotifyInsertion(Sob *) // 0x62E946
{
    mangled_assert("?NotifyInsertion@Selection@@AAEXPAVSob@@@Z");
    todo("implement");
    _sub_62E946(this, arg);
}

_extern void _sub_62E966(Selection *const, Sob *);
void Selection::NotifyRemoval(Sob *) // 0x62E966
{
    mangled_assert("?NotifyRemoval@Selection@@AAEXPAVSob@@@Z");
    todo("implement");
    _sub_62E966(this, arg);
}

_extern void _sub_62E9B5(Selection *const, Selection::Observer *);
void Selection::Register_Observer(Selection::Observer *) // 0x62E9B5
{
    mangled_assert("?Register_Observer@Selection@@QAEXPAVObserver@1@@Z");
    todo("implement");
    _sub_62E9B5(this, arg);
}

_extern void _sub_62E9C5(Selection *const, Selection::Observer *);
void Selection::Remove_Observer(Selection::Observer *) // 0x62E9C5
{
    mangled_assert("?Remove_Observer@Selection@@QAEXPAVObserver@1@@Z");
    todo("implement");
    _sub_62E9C5(this, arg);
}

_extern Sob **_sub_62EFDB(Selection *const, Sob **);
Sob **Selection::erase(Sob **) // 0x62EFDB
{
    mangled_assert("?erase@Selection@@QAEPAPAVSob@@PAPAV2@@Z");
    todo("implement");
    Sob ** __result = _sub_62EFDB(this, arg);
    return __result;
}

_extern bool _sub_62F93C(Selection *const, Sob const *);
bool Selection::remove(Sob const *) // 0x62F93C
{
    mangled_assert("?remove@Selection@@QAE_NPBVSob@@@Z");
    todo("implement");
    bool __result = _sub_62F93C(this, arg);
    return __result;
}

_extern void _sub_62F8AA(Selection *const, Sob *);
void Selection::push_back(Sob *) // 0x62F8AA
{
    mangled_assert("?push_back@Selection@@QAEXPAVSob@@@Z");
    todo("implement");
    _sub_62F8AA(this, arg);
}

_extern void _sub_62F904(Selection *const, Sob *);
void Selection::push_back_no_find(Sob *) // 0x62F904
{
    mangled_assert("?push_back_no_find@Selection@@QAEXPAVSob@@@Z");
    todo("implement");
    _sub_62F904(this, arg);
}

_extern void _sub_62F659(Selection *const, Sob **, Sob *);
void Selection::insert(Sob **, Sob *) // 0x62F659
{
    mangled_assert("?insert@Selection@@QAEXPAPAVSob@@PAV2@@Z");
    todo("implement");
    _sub_62F659(this, arg, arg);
}

_extern bool _sub_62EDAC(Selection const *const, Selection const &);
bool Selection::contains(Selection const &) const // 0x62EDAC
{
    mangled_assert("?contains@Selection@@QBE_NABV1@@Z");
    todo("implement");
    bool __result = _sub_62EDAC(this, arg);
    return __result;
}

_extern bool _sub_62F6BE(Selection const *const, Selection const &);
bool Selection::issubset(Selection const &) const // 0x62F6BE
{
    mangled_assert("?issubset@Selection@@QBE_NABV1@@Z");
    todo("implement");
    bool __result = _sub_62F6BE(this, arg);
    return __result;
}

_extern void _sub_62E9F2(Selection *const, SelectionFlag);
void Selection::SetFlag(SelectionFlag) // 0x62E9F2
{
    mangled_assert("?SetFlag@Selection@@QAEXW4SelectionFlag@@@Z");
    todo("implement");
    _sub_62E9F2(this, arg);
}

_extern void _sub_62E8B8(Selection *const, SelectionFlag);
void Selection::ClearFlag(SelectionFlag) // 0x62E8B8
{
    mangled_assert("?ClearFlag@Selection@@QAEXW4SelectionFlag@@@Z");
    todo("implement");
    _sub_62E8B8(this, arg);
}

_extern bool _sub_62E884(Selection::IsSobInside const *const, Sob const *);
bool Selection::IsSobInside::operator()(Sob const *) const // 0x62E884
{
    mangled_assert("??RIsSobInside@Selection@@QBE_NPBVSob@@@Z");
    todo("implement");
    bool __result = _sub_62E884(this, arg);
    return __result;
}

_extern void _sub_62EE69(Selection *const, SquadronList const &);
void Selection::convert(SquadronList const &) // 0x62EE69
{
    mangled_assert("?convert@Selection@@QAEXABVSquadronList@@@Z");
    todo("implement");
    _sub_62EE69(this, arg);
}

/* ---------- private code */
#endif
