#if 0
/* ---------- headers */

#include "decomp.h"
#include <scripting.h>
#include <assist\stlexsmallvector.h>
#include <scriptaccess.h>
#include <xstring>
#include <scripttypedef.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <SelTarg.h>
#include <lua.h>
#include <prim.h>
#include <Mathlib\matrix3.h>
#include <FormationCommands\FormationCommand.h>
#include <SOBGroupManager.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <new>
#include <DynamicPoint.h>
#include <exception>
#include <Modifiers\ModifierTargetCache.h>
#include <xstddef>
#include <type_traits>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <xutility>
#include <seInterface2\SoundParams.h>
#include <utility>
#include <iosfwd>
#include <fixedpoint.h>
#include <StrikeGroupFormationManager.h>
#include <vector>
#include <util\fixed.h>
#include <StrikeGroupFormation.h>
#include <xmemory>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <math.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <list>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <map>
#include <xtree>
#include <Squadron.h>
#include <command.h>
#include <boost\scoped_ptr.hpp>
#include <sobid.h>
#include <Parade.h>
#include <hash_map>
#include <Mathlib\vector2.h>
#include <xhash>
#include <weaponinfo.h>
#include <util\types.h>
#include <Ship\FormationTargetInfo.h>
#include <Universe.h>
#include <boost\cstdint.hpp>
#include <Waypoint.h>
#include <playerresourcetype.h>
#include <StrikeGroupFormationNode.h>
#include <SobUnmoveable.h>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <task.h>
#include <stack>
#include <Mathlib\quat.h>
#include <SobWithMeshStatic.h>
#include <SoundManager\SoundEntityHandle.h>
#include <luaconfig\luaconfig.h>
#include <ship.h>
#include <SobWithMesh.h>
#include <Race.h>
#include <SobRigidBody.h>
#include <sob.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <SobRigidBodyStatic.h>
#include <HyperspaceManager.h>
#include <MeshAnimation.h>
#include <ShieldTypes.h>
#include <BuildManager.h>
#include <savegameimpl.h>
#include <ITweak.h>
#include <Ship\Formation.h>
#include <Tactics.h>
#include <Collision\BVH\octree.h>
#include <pathpoints.h>
#include <Ship\FormationPattern.h>
#include <Collision\BVH\span.h>
#include <Subsystems\HardPointManager.h>
#include <debug\db.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Subsystems\HardPoint.h>
#include <Collision\BVH\proxy.h>
#include <Subsystems\HardPointStatic.h>
#include <Collision\intersect.h>
#include <Subsystems\SubSystemType.h>
#include <Collision\primitivesfwd.h>
#include <deque>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <ParadeCommand.h>
#include <Interpolation.h>
#include <boost\detail\shared_count.hpp>
#include <commandtype.h>
#include <OrderFeedback.h>
#include <boost\detail\lwm_win32.hpp>
#include <Collision\Primitives\aabb.h>
#include <dbdefines.h>
#include <Collision\Primitives\obb.h>
#include <UnitCaps\UnitCaps.h>
#include <MoveCommand.h>
#include <abilities.h>
#include <Player.h>
#include <ResearchManager.h>
#include <StrikeGroup.h>
#include <SquadronList.h>
#include <wchar.h>
#include <queue>
#include <algorithm>

/* ---------- constants */

/* ---------- definitions */

struct SquadronSort
{
    _inline SquadronSort(vector3 const &);
    bool operator()(Squadron const *, Squadron const *) const;
private:
    vector3 m_middle; // 0x0
};
static_assert(sizeof(SquadronSort) == 12, "Invalid SquadronSort size");

/* ---------- prototypes */

extern void addSquadronToStrikeGroup(Squadron *squadron, StrikeGroup *strikeGroup, Selection const &allShips);

/* ---------- globals */

extern char const StrikeGroup::m_saveToken[0]; // 0x79BE88
extern SaveData const StrikeGroup::m_saveData[7]; // 0x79BDA8

/* ---------- private variables */

/* ---------- public code */

_extern _sub_5073EC(StrikeGroup *const, StrikeGroupFormationNode const &, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
StrikeGroup::StrikeGroup(StrikeGroupFormationNode const &, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x5073EC
{
    mangled_assert("??0StrikeGroup@@QAE@ABVStrikeGroupFormationNode@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    _sub_5073EC(this, arg, arg);
}

_extern void _sub_50753F(StrikeGroup *const);
StrikeGroup::~StrikeGroup() // 0x50753F
{
    mangled_assert("??1StrikeGroup@@UAE@XZ");
    todo("implement");
    _sub_50753F(this);
}

_extern void _sub_507880(StrikeGroup *const, Squadron *);
void StrikeGroup::addSquadron(Squadron *) // 0x507880
{
    mangled_assert("?addSquadron@StrikeGroup@@QAEXPAVSquadron@@@Z");
    todo("implement");
    _sub_507880(this, arg);
}

_extern void _sub_508379(StrikeGroup *const, Squadron *);
void StrikeGroup::removeSquadron(Squadron *) // 0x508379
{
    mangled_assert("?removeSquadron@StrikeGroup@@QAEXPAVSquadron@@@Z");
    todo("implement");
    _sub_508379(this, arg);
}

_extern bool _sub_50810B(StrikeGroup const *const, Squadron const *, Squadron *&, vector3 &);
bool StrikeGroup::getSquadronStation(Squadron const *, Squadron *&, vector3 &) const // 0x50810B
{
    mangled_assert("?getSquadronStation@StrikeGroup@@QBE_NPBVSquadron@@AAPAV2@AAVvector3@@@Z");
    todo("implement");
    bool __result = _sub_50810B(this, arg, arg, arg);
    return __result;
}

_extern bool _sub_508735(StrikeGroup const *const);
bool StrikeGroup::useStrikeGroupRules() const // 0x508735
{
    mangled_assert("?useStrikeGroupRules@StrikeGroup@@ABE_NXZ");
    todo("implement");
    bool __result = _sub_508735(this);
    return __result;
}

_extern void _sub_5086D4(StrikeGroup *const);
void StrikeGroup::updateGroupInCombat() // 0x5086D4
{
    mangled_assert("?updateGroupInCombat@StrikeGroup@@AAEXXZ");
    todo("implement");
    _sub_5086D4(this);
}

_extern void _sub_508229(StrikeGroup *const, vector3 const &);
void StrikeGroup::newDestination(vector3 const &) // 0x508229
{
    mangled_assert("?newDestination@StrikeGroup@@QAEXABVvector3@@@Z");
    todo("implement");
    _sub_508229(this, arg);
}

_extern float const _sub_5080E9(StrikeGroup const *const, Squadron const *);
float const StrikeGroup::getMaxSpeedFraction(Squadron const *) const // 0x5080E9
{
    mangled_assert("?getMaxSpeedFraction@StrikeGroup@@QBE?BMPBVSquadron@@@Z");
    todo("implement");
    float const __result = _sub_5080E9(this, arg);
    return __result;
}

_extern bool _sub_50861A(StrikeGroup *const, Squadron *);
bool StrikeGroup::squadronIsInStrikeGroup(Squadron *) // 0x50861A
{
    mangled_assert("?squadronIsInStrikeGroup@StrikeGroup@@QAE_NPAVSquadron@@@Z");
    todo("implement");
    bool __result = _sub_50861A(this, arg);
    return __result;
}

_extern Squadron const *_sub_508034(StrikeGroup const *const);
Squadron const *StrikeGroup::getCentreSquadron() const // 0x508034
{
    mangled_assert("?getCentreSquadron@StrikeGroup@@QBEPBVSquadron@@XZ");
    todo("implement");
    Squadron const * __result = _sub_508034(this);
    return __result;
}

_extern bool _sub_508663(StrikeGroup *const, float);
bool StrikeGroup::update(float) // 0x508663
{
    mangled_assert("?update@StrikeGroup@@QAE_NM@Z");
    todo("implement");
    bool __result = _sub_508663(this, arg);
    return __result;
}

_extern void _sub_508348(StrikeGroup *const);
void StrikeGroup::reformStrikeGroup() // 0x508348
{
    mangled_assert("?reformStrikeGroup@StrikeGroup@@AAEXXZ");
    todo("implement");
    _sub_508348(this);
}

_extern void _sub_507B00(SquadronList const &, std::list<StrikeGroup *,std::allocator<StrikeGroup *> > &);
void StrikeGroup::convertSquadronListIntoStrikeGroups(SquadronList const &squadronList, std::list<StrikeGroup *,std::allocator<StrikeGroup *> > &strikeGroups) // 0x507B00
{
    mangled_assert("?convertSquadronListIntoStrikeGroups@StrikeGroup@@SGXABVSquadronList@@AAV?$list@PAVStrikeGroup@@V?$allocator@PAVStrikeGroup@@@std@@@std@@@Z");
    todo("implement");
    _sub_507B00(squadronList, strikeGroups);
}

_extern void _sub_507A10(Selection const &, std::list<StrikeGroup *,std::allocator<StrikeGroup *> > &);
void StrikeGroup::convertSelectionIntoStrikeGroups(Selection const &selection, std::list<StrikeGroup *,std::allocator<StrikeGroup *> > &strikeGroups) // 0x507A10
{
    mangled_assert("?convertSelectionIntoStrikeGroups@StrikeGroup@@SGXABVSelection@@AAV?$list@PAVStrikeGroup@@V?$allocator@PAVStrikeGroup@@@std@@@std@@@Z");
    todo("implement");
    _sub_507A10(selection, strikeGroups);
}

_extern _sub_5073DA(SquadronSort *const, vector3 const &);
_inline SquadronSort::SquadronSort(vector3 const &) // 0x5073DA
{
    mangled_assert("??0SquadronSort@@QAE@ABVvector3@@@Z");
    todo("implement");
    _sub_5073DA(this, arg);
}

_extern bool _sub_50764F(SquadronSort const *const, Squadron const *, Squadron const *);
_inline bool SquadronSort::operator()(Squadron const *, Squadron const *) const // 0x50764F
{
    mangled_assert("??RSquadronSort@@QBE_NPBVSquadron@@0@Z");
    todo("implement");
    bool __result = _sub_50764F(this, arg, arg);
    return __result;
}

_extern void _sub_507912(Squadron *, StrikeGroup *, Selection const &);
void addSquadronToStrikeGroup(Squadron *squadron, StrikeGroup *strikeGroup, Selection const &allShips) // 0x507912
{
    mangled_assert("?addSquadronToStrikeGroup@@YGXPAVSquadron@@PAVStrikeGroup@@ABVSelection@@@Z");
    todo("implement");
    _sub_507912(squadron, strikeGroup, allShips);
}

_extern _sub_5073D1(SquadronList::Observer *const);
_inline SquadronList::Observer::Observer() // 0x5073D1
{
    mangled_assert("??0Observer@SquadronList@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5073D1(this);
}

_extern StrikeGroup *_sub_507C75(std::list<Squadron *,std::allocator<Squadron *> > &, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
StrikeGroup *StrikeGroup::formStrikeGroupFrom(std::list<Squadron *,std::allocator<Squadron *> > &squadrons, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &strikeGroupName) // 0x507C75
{
    mangled_assert("?formStrikeGroupFrom@StrikeGroup@@SGPAV1@AAV?$list@PAVSquadron@@V?$allocator@PAVSquadron@@@std@@@std@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z");
    todo("implement");
    StrikeGroup * __result = _sub_507C75(squadrons, strikeGroupName);
    return __result;
}

_extern StrikeGroup *_sub_507E40(SquadronList &, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
StrikeGroup *StrikeGroup::formStrikeGroupFrom(SquadronList &squadrons, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &strikeGroupName) // 0x507E40
{
    mangled_assert("?formStrikeGroupFrom@StrikeGroup@@SGPAV1@AAVSquadronList@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    StrikeGroup * __result = _sub_507E40(squadrons, strikeGroupName);
    return __result;
}

_extern void _sub_5084CC(SquadronList const &);
void StrikeGroup::splitFromParentStrikeGroups(SquadronList const &squadronList) // 0x5084CC
{
    mangled_assert("?splitFromParentStrikeGroups@StrikeGroup@@SGXABVSquadronList@@@Z");
    todo("implement");
    _sub_5084CC(squadronList);
}

_extern float _sub_50803C(StrikeGroup *const);
float StrikeGroup::getCurrentFormationSlotRadius() // 0x50803C
{
    mangled_assert("?getCurrentFormationSlotRadius@StrikeGroup@@QAEMXZ");
    todo("implement");
    float __result = _sub_50803C(this);
    return __result;
}

_extern bool _sub_508149(Selection const &);
bool StrikeGroup::isSelectionAllOfAStrikeGroup(Selection const &selection) // 0x508149
{
    mangled_assert("?isSelectionAllOfAStrikeGroup@StrikeGroup@@SG_NABVSelection@@@Z");
    todo("implement");
    bool __result = _sub_508149(selection);
    return __result;
}

_extern _sub_5074AA(StrikeGroup *const, SaveGameData *);
StrikeGroup::StrikeGroup(SaveGameData *) // 0x5074AA
{
    mangled_assert("??0StrikeGroup@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_5074AA(this, arg);
}

_extern void _sub_507524(std::_List_buy<StrikeGroup *,std::allocator<StrikeGroup *> > *const);
_inline std::_List_buy<StrikeGroup *,std::allocator<StrikeGroup *> >::~_List_buy<StrikeGroup *,std::allocator<StrikeGroup *> >() // 0x507524
{
    mangled_assert("??1?$_List_buy@PAVStrikeGroup@@V?$allocator@PAVStrikeGroup@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_507524(this);
}

_extern void _sub_507BB7(StrikeGroup *const);
void StrikeGroup::defaultSettings() // 0x507BB7
{
    mangled_assert("?defaultSettings@StrikeGroup@@QAEXXZ");
    todo("implement");
    _sub_507BB7(this);
}

_extern void _sub_508339(StrikeGroup *const);
void StrikeGroup::postRestore() // 0x508339
{
    mangled_assert("?postRestore@StrikeGroup@@UAEXXZ");
    todo("implement");
    _sub_508339(this);
}

_extern void _sub_507715(SquadronList::Observer * const, Squadron *);
void StrikeGroup::Notify_Insertion(Squadron *) // 0x507715
{
    mangled_assert("?Notify_Insertion@StrikeGroup@@EAEXPAVSquadron@@@Z");
    // __shifted(StrikeGroup, 12);
    todo("implement");
    _sub_507715(this, arg);
}

_extern void _sub_507718(SquadronList::Observer * const, Squadron *);
void StrikeGroup::Notify_Removal(Squadron *) // 0x507718
{
    mangled_assert("?Notify_Removal@StrikeGroup@@EAEXPAVSquadron@@@Z");
    // __shifted(StrikeGroup, 12);
    todo("implement");
    _sub_507718(this, arg);
}

_extern bool _sub_5083BD(StrikeGroup *const, SaveGameData *);
bool StrikeGroup::restore(SaveGameData *) // 0x5083BD
{
    mangled_assert("?restore@StrikeGroup@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_5083BD(this, arg);
    return __result;
}

_extern bool _sub_5083FB(StrikeGroup *const, SaveGameData *, SaveType);
bool StrikeGroup::save(SaveGameData *, SaveType) // 0x5083FB
{
    mangled_assert("?save@StrikeGroup@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_5083FB(this, arg, arg);
    return __result;
}

/* ---------- private code */
#endif
