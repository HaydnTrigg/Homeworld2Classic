#if 0
/* ---------- headers */

#include "decomp.h"
#include <Collision\BVH\proxy.h>
#include <Subsystems\SubSystemType.h>
#include <WeaponClassSpecificInfo.h>
#include <Collision\intersect.h>
#include <assist\stlexsmallvector.h>
#include <Collision\primitivesfwd.h>
#include <dbdefines.h>
#include <xstring>
#include <UnitCaps\UnitCaps.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <ParadeCommand.h>
#include <ITweak.h>
#include <commandtype.h>
#include <luaconfig\luaconfig.h>
#include <Interpolation.h>
#include <OrderFeedback.h>
#include <FormationCommands\FormationCommand.h>
#include <lua.h>
#include <SquadronList.h>
#include <Mathlib\matrix3.h>
#include <Collision\Primitives\aabb.h>
#include <Collision\Primitives\obb.h>
#include <abilities.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <Modifiers\ModifierAbility.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <FamilyListMgr.h>
#include <FamilyList.h>
#include <Family.h>
#include <SOBGroupManager.h>
#include <math.h>
#include <SelTarg.h>
#include <prim.h>
#include <list>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <DynamicPoint.h>
#include <xtree>
#include <Modifiers\ModifierTargetCache.h>
#include <boost\scoped_ptr.hpp>
#include <Tactics.h>
#include <platform\timer.h>
#include <Ship\FormationTargetInfo.h>
#include <platform\platformexports.h>
#include <Mathlib\vector2.h>
#include <seInterface2\PatchID.h>
#include <util\types.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <boost\cstdint.hpp>
#include <Mathlib\quat.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <Universe.h>
#include <Squadron.h>
#include <Waypoint.h>
#include <command.h>
#include <StrikeGroup.h>
#include <SobUnmoveable.h>
#include <sobid.h>
#include <Ship\Formation.h>
#include <Ship\FormationPattern.h>
#include <Parade.h>
#include <savegameimpl.h>
#include <hash_map>
#include <xhash>
#include <pathpoints.h>
#include <weaponinfo.h>
#include <debug\db.h>
#include <Modifiers\ModifierUIInfo.h>
#include <Modifiers\ModifierMultiplier.h>
#include <Modifiers\ModifierEffect.h>
#include <deque>
#include <playerresourcetype.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <TeamColourRegistry.h>
#include <selection.h>
#include <savegame.h>
#include <HyperspaceManager.h>
#include <savegamedef.h>
#include <task.h>
#include <config.h>
#include <boost\detail\shared_count.hpp>
#include <stack>
#include <Modifiers\ModifierApplier.h>
#include <SoundManager\SoundEntityHandle.h>
#include <boost\detail\lwm_win32.hpp>
#include <SobWithMeshStatic.h>
#include <ship.h>
#include <SobWithMesh.h>
#include <SobRigidBody.h>
#include <shipstatic.h>
#include <sob.h>
#include <weaponstaticinfo.h>
#include <sobstatic.h>
#include <GunBinding.h>
#include <Collision\Primitives\sphere.h>
#include <SobRigidBodyStatic.h>
#include <MeshAnimation.h>
#include <ShieldTypes.h>
#include <StrikeGroupFormationNode.h>
#include <wchar.h>
#include <string>
#include <queue>
#include <Collision\BVH\octree.h>
#include <Subsystems\HardPointManager.h>
#include <Collision\BVH\span.h>
#include <Subsystems\HardPoint.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Subsystems\HardPointStatic.h>

/* ---------- constants */

/* ---------- definitions */

class distanceFromSquad
{
public:
    _inline distanceFromSquad(vector3 const &);
    bool operator()(StrikeGroupFormationNode const *, StrikeGroupFormationNode const *) const;
private:
    vector3 m_position; // 0x0
};
static_assert(sizeof(distanceFromSquad) == 12, "Invalid distanceFromSquad size");

/* ---------- prototypes */

/* ---------- globals */

extern char const StrikeGroupFormationNode::m_saveToken[0]; // 0x79C2D0
extern SaveData const StrikeGroupFormationNode::m_saveData[8]; // 0x79C1D0

/* ---------- private variables */

/* ---------- public code */

StrikeGroupFormationNode::StrikeGroupFormationNode(LuaConfig &, StrikeGroupFormationNode *) // 0x509A7C
{
    mangled_assert("??0StrikeGroupFormationNode@@QAE@AAVLuaConfig@@PAV0@@Z");
    todo("implement");
}

StrikeGroupFormationNode::StrikeGroupFormationNode(StrikeGroupFormationNode const &) // 0x509A24
{
    mangled_assert("??0StrikeGroupFormationNode@@AAE@ABV0@@Z");
    todo("implement");
}

StrikeGroupFormationNode::StrikeGroupFormationNode(StrikeGroupFormationNode const &, StrikeGroupFormationNode *) // 0x509CA6
{
    mangled_assert("??0StrikeGroupFormationNode@@QAE@ABV0@PAV0@@Z");
    todo("implement");
}

void StrikeGroupFormationNode::addChildNode(StrikeGroupFormationNode *) // 0x50A111
{
    mangled_assert("?addChildNode@StrikeGroupFormationNode@@QAEXPAV1@@Z");
    todo("implement");
}

StrikeGroupFormationNode::~StrikeGroupFormationNode() // 0x509E26
{
    mangled_assert("??1StrikeGroupFormationNode@@UAE@XZ");
    todo("implement");
}

bool StrikeGroupFormationNode::getSquadronStation(Squadron const *, Squadron *&, vector3 &) const // 0x50AC64
{
    mangled_assert("?getSquadronStation@StrikeGroupFormationNode@@QBE_NPBVSquadron@@AAPAV2@AAVvector3@@@Z");
    todo("implement");
}

StrikeGroupFormationNode *StrikeGroupFormationNode::getNodeByName(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x50ABDE
{
    mangled_assert("?getNodeByName@StrikeGroupFormationNode@@QAEPAV1@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

StrikeGroupFormationNode const *StrikeGroupFormationNode::getNodeFor(Squadron const *) const // 0x50AC1A
{
    mangled_assert("?getNodeFor@StrikeGroupFormationNode@@QBEPBV1@PBVSquadron@@@Z");
    todo("implement");
}

bool StrikeGroupFormationNode::isNodeInCombatOrAreChildrenInCombat() const // 0x50AD9F
{
    mangled_assert("?isNodeInCombatOrAreChildrenInCombat@StrikeGroupFormationNode@@QBE_NXZ");
    todo("implement");
}

Squadron *StrikeGroupFormationNode::getSquadron() const // 0x50AC55
{
    mangled_assert("?getSquadron@StrikeGroupFormationNode@@QBEPAVSquadron@@XZ");
    todo("implement");
}

float const StrikeGroupFormationNode::getMaxSpeedFraction() const // 0x50A919
{
    mangled_assert("?getMaxSpeedFraction@StrikeGroupFormationNode@@QBE?BMXZ");
    todo("implement");
}

_inline distanceFromSquad::distanceFromSquad(vector3 const &) // 0x509DF0
{
    mangled_assert("??0distanceFromSquad@@QAE@ABVvector3@@@Z");
    todo("implement");
}

_inline std::_List_buy<StrikeGroupFormationNode *,std::allocator<StrikeGroupFormationNode *> >::~_List_buy<StrikeGroupFormationNode *,std::allocator<StrikeGroupFormationNode *> >() // 0x509E0B
{
    mangled_assert("??1?$_List_buy@PAVStrikeGroupFormationNode@@V?$allocator@PAVStrikeGroupFormationNode@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline bool distanceFromSquad::operator()(StrikeGroupFormationNode const *, StrikeGroupFormationNode const *) const // 0x509F0D
{
    mangled_assert("??RdistanceFromSquad@@QBE_NPBVStrikeGroupFormationNode@@0@Z");
    todo("implement");
}

_inline FormationTargetInfo::FormationTargetInfo(FormationTargetInfo const &) // 0x50992A
{
    mangled_assert("??0FormationTargetInfo@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline Saveable::Saveable(Saveable const &) // 0x509A19
{
    mangled_assert("??0Saveable@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

StrikeGroupFormationNode const *StrikeGroupFormationNode::getCore() const // 0x50A8ED
{
    mangled_assert("?getCore@StrikeGroupFormationNode@@ABEPBV1@XZ");
    todo("implement");
}

bool StrikeGroupFormationNode::addSquadron(Squadron *) // 0x50A171
{
    mangled_assert("?addSquadron@StrikeGroupFormationNode@@QAE_NPAVSquadron@@@Z");
    todo("implement");
}

bool StrikeGroupFormationNode::isDesiredTypeForNode(Squadron *) // 0x50AD6F
{
    mangled_assert("?isDesiredTypeForNode@StrikeGroupFormationNode@@AAE_NPAVSquadron@@@Z");
    todo("implement");
}

void StrikeGroupFormationNode::setSquadron(Squadron *) // 0x50B06F
{
    mangled_assert("?setSquadron@StrikeGroupFormationNode@@AAEXPAVSquadron@@@Z");
    todo("implement");
}

void StrikeGroupFormationNode::calculateSpacing() // 0x50A754
{
    mangled_assert("?calculateSpacing@StrikeGroupFormationNode@@AAEXXZ");
    todo("implement");
}

bool StrikeGroupFormationNode::removeSquadron(Squadron *) // 0x50AF9D
{
    mangled_assert("?removeSquadron@StrikeGroupFormationNode@@QAE_NPAVSquadron@@@Z");
    todo("implement");
}

void StrikeGroupFormationNode::removeAllSquadrons() // 0x50AF7F
{
    mangled_assert("?removeAllSquadrons@StrikeGroupFormationNode@@QAEXXZ");
    todo("implement");
}

void StrikeGroupFormationNode::mirrorSlots() // 0x50AE1B
{
    mangled_assert("?mirrorSlots@StrikeGroupFormationNode@@QAEXXZ");
    todo("implement");
}

StrikeGroupFormationNode::StrikeGroupFormationNode(SaveGameData *) // 0x509D92
{
    mangled_assert("??0StrikeGroupFormationNode@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

void StrikeGroupFormationNode::defaultSettings() // 0x50A83A
{
    mangled_assert("?defaultSettings@StrikeGroupFormationNode@@QAEXXZ");
    todo("implement");
}

void StrikeGroupFormationNode::postRestore() // 0x50AF62
{
    mangled_assert("?postRestore@StrikeGroupFormationNode@@UAEXXZ");
    todo("implement");
}

bool StrikeGroupFormationNode::restore(SaveGameData *) // 0x50AFE1
{
    mangled_assert("?restore@StrikeGroupFormationNode@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool StrikeGroupFormationNode::save(SaveGameData *, SaveType) // 0x50B01F
{
    mangled_assert("?save@StrikeGroupFormationNode@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
