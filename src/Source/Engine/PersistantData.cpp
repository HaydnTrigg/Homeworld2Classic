#if 0
/* ---------- headers */

#include "decomp.h"
#include <Collision\intersect.h>
#include <set>
#include <Collision\primitivesfwd.h>
#include <assist\stlexsmallvector.h>
#include <weaponinfo.h>
#include <Subsystems\Subsystem.h>
#include <xstring>
#include <BuildJob.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <Subsystems\SubsystemStatic.h>
#include <SoundManager\SoundManager.h>
#include <boost\shared_array.hpp>
#include <pch.h>
#include <Modifiers\ModifierTargetCache.h>
#include <ParadeCommand.h>
#include <weaponstaticinfo.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <commandtype.h>
#include <GunBinding.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <Interpolation.h>
#include <cstdarg>
#include <Mathlib\matrix3.h>
#include <Collision\Primitives\aabb.h>
#include <Tactics.h>
#include <stdarg.h>
#include <new>
#include <sobid.h>
#include <exception>
#include <xstddef>
#include <WeaponClassSpecificInfo.h>
#include <type_traits>
#include <MeshAnimation.h>
#include <ShieldTypes.h>
#include <UIBuildJob.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <SobWithMeshStatic.h>
#include <vector>
#include <Squadron.h>
#include <shipstatic.h>
#include <fileio\bytestream.h>
#include <xmemory>
#include <command.h>
#include <ship.h>
#include <config.h>
#include <fileio\fileioexports.h>
#include <SobWithMesh.h>
#include <Subsystems\HardPointManager.h>
#include <SobRigidBody.h>
#include <Subsystems\HardPoint.h>
#include <Subsystems\HardPointStatic.h>
#include <SobRigidBodyStatic.h>
#include <Subsystems\SubSystemType.h>
#include <DeSpawnCommand.h>
#include <seInterface2\SampleID.h>
#include <HyperSpaceBaseCommand.h>
#include <seInterface2\SampleBase.h>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <OrderFeedback.h>
#include <Camera\OrbitParameters.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <seInterface2\SoundParams.h>
#include <MoveCommand.h>
#include <list>
#include <SobFactory.h>
#include <Mathlib\vector3.h>
#include <Collision\Primitives\capsule.h>
#include <Mathlib\vector4.h>
#include <Ship\FormationTargetInfo.h>
#include <Collision\Primitives\segment.h>
#include <Modifiers\ModifierAbility.h>
#include <SensorsManager.h>
#include <Collision\BVH\profiling.h>
#include <platform\timer.h>
#include <TeamColourRegistry.h>
#include <Render\gl\r_types.h>
#include <platform\platformexports.h>
#include <savegame.h>
#include <SoundManager\SoundEntityHandle.h>
#include <Mathlib\matvec.h>
#include <Scar\LuaRuleSystem.h>
#include <xtree>
#include <task.h>
#include <boost\smart_ptr.hpp>
#include <stack>
#include <boost\scoped_ptr.hpp>
#include <fileio\filepathhd.h>
#include <MainUI.h>
#include <Selector.h>
#include <Render\gl\r_defines.h>
#include <platform\cmdline.h>
#include <MetaSelTarg.h>
#include <Render\gl\glext.h>
#include <Mathlib\vector2.h>
#include <ResearchData.h>
#include <util\types.h>
#include <BuildManager.h>
#include <StrikeGroup.h>
#include <DependencyData.h>
#include <SOBGroupManager.h>
#include <hash_map>
#include <xhash>
#include <playerresourcetype.h>
#include <boost\cstdint.hpp>
#include <BuildQueue.h>
#include <App\Hw2Identify.h>
#include <BuildJobType.h>
#include <BuildData.h>
#include <seInterface2\sedefinesshared.h>
#include <boost\scoped_array.hpp>
#include <Race.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <Mathlib\quat.h>
#include <MultiplierTypes.h>
#include <Scar\Scar.h>
#include <Collision\BVH\bvh.h>
#include <Scar\ScarEventSys.h>
#include <SOBGroup.h>
#include <Ship\Formation.h>
#include <DynamicPoint.h>
#include <Ship\FormationPattern.h>
#include <assist\typemagic.h>
#include <Parade.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <Universe.h>
#include <Player.h>
#include <Waypoint.h>
#include <ResearchManager.h>
#include <SobUnmoveable.h>
#include <sob.h>
#include <fileio\filepath.h>
#include <sobstatic.h>
#include <pathpoints.h>
#include <Collision\Primitives\sphere.h>
#include <debug\db.h>
#include <deque>
#include <HyperspaceManager.h>
#include <abilities.h>
#include <luaconfig\luautils.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <bitset>
#include <boost\detail\lwm_win32.hpp>
#include <luaconfig\luabinding.h>
#include <luaconfig\luaconfig.h>
#include <lua.h>
#include <DockCommand.h>
#include <Modifiers\ModifierUIInfo.h>
#include <Modifiers\ModifierMultiplier.h>
#include <Modifiers\ModifierEffect.h>
#include <fixedpoint.h>
#include <PersistantData.h>
#include <util\fixed.h>
#include <Volume.h>
#include <SquadronList.h>
#include <wchar.h>
#include <VolumeStatic.h>
#include <boost\utility.hpp>
#include <string>
#include <SobUnmoveableStatic.h>
#include <Collision\Primitives\obb.h>
#include <queue>
#include <Collision\BVH\octree.h>
#include <dbdefines.h>
#include <Collision\BVH\span.h>
#include <UnitCaps\UnitCaps.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Modifiers\ModifierApplier.h>
#include <Collision\BVH\proxy.h>
#include <shipHold.h>

/* ---------- constants */

/* ---------- definitions */

struct PersistantBuildData
{
    _inline PersistantBuildData(Ship *, float, unsigned __int32);
    Ship *m_ship; // 0x0
    float m_rusSpent; // 0x4
    unsigned __int32 m_buildJobTypeID; // 0x8
};
static_assert(sizeof(PersistantBuildData) == 12, "Invalid PersistantBuildData size");

/* ---------- prototypes */

extern void SaveTeamColour(LuaConfig &lc, Squadron *pSquad);
extern void SaveShipHolds(LuaConfig &lc, Squadron *pSquad);
extern void SaveSubSystems(LuaConfig &lc, Squadron *pSquad);
extern void SaveBuildJobs(LuaConfig &lc, Squadron *pSquad);
extern bool SaveSquadron(LuaConfig &lc, Squadron *pSquad, __int32 &squadIndex);
extern void SaveStrikeGroups(LuaConfig &lc, Player *player, std::list<unsigned int,std::allocator<unsigned int> > &squadronids);
extern void SaveSquadrons(LuaConfig &lc, Player *player, std::list<unsigned int,std::allocator<unsigned int> > &squadronids);
extern void SaveResearch(LuaConfig &lc, Player *player);
extern void ReadBuildJobs(LuaConfig &lc, Squadron *pSquad);
extern void CommitBuildJobs(Player *player);

_static Volume *Volume_Find(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name);
_static void ReadResearch(LuaConfig &lc, Player *player);
_static bool ReadTeamColour(LuaConfig &lc, __int32 &teamColourHandle);
_static void AssignTeamColour(__int32 teamColourHandle, Squadron *pSquad);
_static void ReadTeamColour(LuaConfig &lc, Squadron *pSquad);
_static void ReadShipHolds(LuaConfig &lc, Squadron *pSquad);
_static void ReadSubSystems(LuaConfig &lc, Squadron *pSquad);
_static void ReadSquadronList(LuaConfig &lc, Player *player, SquadronList &squadList, char const *volumeName);
_static void ReadStrikeGroups(LuaConfig &lc, Player *player, char const *volumeName, SquadronList &squadronList);
_static void ReadSquadrons(LuaConfig &lc, Player *player, char const *volumeName, SquadronList &squadronList);
_static void doNormalParadeFor(Squadron *squad, Ship *paradeRound, ParadeCommand::ParadeMode paradeMode);
_static void makeSquadHyperspaceIn(Squadron *squad, vector3 const &pos, __int32 playerIndex);
_static void PlaceShipsInFinalPositions(SquadronList const &squadrons, unsigned __int32 paradeRoundTypeID, char const *volumeName);
_static void PreReadShipHolds(LuaConfig &lc);
_static void PreReadSubSystems(LuaConfig &lc);
_static void PreReadSquadronList(LuaConfig &lc);
_static void PreReadStrikeGroups(LuaConfig &lc);
_static void PreReadSquadrons(LuaConfig &lc);

/* ---------- globals */

extern std::list<PersistantBuildData,std::allocator<PersistantBuildData> > persistantBuildData; // 0x849EB0

/* ---------- private variables */

_static
{
    extern char const *PERSIST_PATH_ALIAS; // 0x83C75C
    extern char const *PERSIST_FILEROOT; // 0x83C760
}

/* ---------- public code */

void PersistantData::Reset() // 0x614AEA
{
    mangled_assert("?Reset@PersistantData@@QAEXXZ");
    todo("implement");
}

__int32 PersistantData::LastMission() // 0x6130D8
{
    mangled_assert("?LastMission@PersistantData@@QAEHXZ");
    todo("implement");
}

void SaveTeamColour(LuaConfig &lc, Squadron *pSquad) // 0x615680
{
    mangled_assert("?SaveTeamColour@@YGXAAVLuaConfig@@PAVSquadron@@@Z");
    todo("implement");
}

void SaveShipHolds(LuaConfig &lc, Squadron *pSquad) // 0x614FB0
{
    mangled_assert("?SaveShipHolds@@YGXAAVLuaConfig@@PAVSquadron@@@Z");
    todo("implement");
}

void SaveSubSystems(LuaConfig &lc, Squadron *pSquad) // 0x61551E
{
    mangled_assert("?SaveSubSystems@@YGXAAVLuaConfig@@PAVSquadron@@@Z");
    todo("implement");
}

void SaveBuildJobs(LuaConfig &lc, Squadron *pSquad) // 0x614CD5
{
    mangled_assert("?SaveBuildJobs@@YGXAAVLuaConfig@@PAVSquadron@@@Z");
    todo("implement");
}

bool SaveSquadron(LuaConfig &lc, Squadron *pSquad, __int32 &squadIndex) // 0x6151A6
{
    mangled_assert("?SaveSquadron@@YG_NAAVLuaConfig@@PAVSquadron@@AAH@Z");
    todo("implement");
}

void SaveStrikeGroups(LuaConfig &lc, Player *player, std::list<unsigned int,std::allocator<unsigned int> > &squadronids) // 0x6153F6
{
    mangled_assert("?SaveStrikeGroups@@YGXAAVLuaConfig@@PAVPlayer@@AAV?$list@IV?$allocator@I@std@@@std@@@Z");
    todo("implement");
}

void SaveSquadrons(LuaConfig &lc, Player *player, std::list<unsigned int,std::allocator<unsigned int> > &squadronids) // 0x615321
{
    mangled_assert("?SaveSquadrons@@YGXAAVLuaConfig@@PAVPlayer@@AAV?$list@IV?$allocator@I@std@@@std@@@Z");
    todo("implement");
}

void SaveResearch(LuaConfig &lc, Player *player) // 0x614E33
{
    mangled_assert("?SaveResearch@@YGXAAVLuaConfig@@PAVPlayer@@@Z");
    todo("implement");
}

bool PersistantData::Save(Universe *, __int32) // 0x614B70
{
    mangled_assert("?Save@PersistantData@@QAE_NPAVUniverse@@H@Z");
    todo("implement");
}

_inline PersistantBuildData::PersistantBuildData(Ship *, float, unsigned __int32) // 0x612E7D
{
    mangled_assert("??0PersistantBuildData@@QAE@PAVShip@@MI@Z");
    todo("implement");
}

_inline std::_List_buy<PersistantBuildData,std::allocator<PersistantBuildData> >::~_List_buy<PersistantBuildData,std::allocator<PersistantBuildData> >() // 0x612EB5
{
    mangled_assert("??1?$_List_buy@UPersistantBuildData@@V?$allocator@UPersistantBuildData@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline SubSystemFinderById::~SubSystemFinderById() // 0x612ED0
{
    mangled_assert("??1SubSystemFinderById@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

void ReadBuildJobs(LuaConfig &lc, Squadron *pSquad) // 0x613D5C
{
    mangled_assert("?ReadBuildJobs@@YGXAAVLuaConfig@@PAVSquadron@@@Z");
    todo("implement");
}

void CommitBuildJobs(Player *player) // 0x61301D
{
    mangled_assert("?CommitBuildJobs@@YGXPAVPlayer@@@Z");
    todo("implement");
}

void PersistantData::Process(unsigned __int32, Universe *, LuaConfig &, unsigned __int32, char const *) // 0x613C7E
{
    mangled_assert("?Process@PersistantData@@AAEXIPAVUniverse@@AAVLuaConfig@@IPBD@Z");
    todo("implement");
}

bool PersistantData::Load(Universe *, __int32, unsigned __int32) // 0x613161
{
    mangled_assert("?Load@PersistantData@@QAE_NPAVUniverse@@HI@Z");
    todo("implement");
}

void PersistantData::PreProcess(LuaConfig &) // 0x61386E
{
    mangled_assert("?PreProcess@PersistantData@@AAEXAAVLuaConfig@@@Z");
    todo("implement");
}

bool PersistantData::PreLoad(__int32) // 0x613785
{
    mangled_assert("?PreLoad@PersistantData@@QAE_NH@Z");
    todo("implement");
}

bool PersistantData::LoadStartFleet(unsigned __int32, __int32, Universe *, char const *, unsigned __int32) // 0x6132A3
{
    mangled_assert("?LoadStartFleet@PersistantData@@QAE_NIHPAVUniverse@@PBDI@Z");
    todo("implement");
}

/* ---------- private code */

_static Volume *Volume_Find(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name) // 0x6156C8
{
    mangled_assert("Volume_Find");
    todo("implement");
}

_static void ReadResearch(LuaConfig &lc, Player *player) // 0x613F0E
{
    mangled_assert("ReadResearch");
    todo("implement");
}

_static bool ReadTeamColour(LuaConfig &lc, __int32 &teamColourHandle) // 0x614AC0
{
    mangled_assert("ReadTeamColour");
    todo("implement");
}

_static void AssignTeamColour(__int32 teamColourHandle, Squadron *pSquad) // 0x612FE8
{
    mangled_assert("AssignTeamColour");
    todo("implement");
}

_static void ReadTeamColour(LuaConfig &lc, Squadron *pSquad) // 0x614A8A
{
    mangled_assert("ReadTeamColour");
    todo("implement");
}

_static void ReadShipHolds(LuaConfig &lc, Squadron *pSquad) // 0x6140E9
{
    mangled_assert("ReadShipHolds");
    todo("implement");
}

_static void ReadSubSystems(LuaConfig &lc, Squadron *pSquad) // 0x6147A9
{
    mangled_assert("ReadSubSystems");
    todo("implement");
}

_static void ReadSquadronList(LuaConfig &lc, Player *player, SquadronList &squadList, char const *volumeName) // 0x614329
{
    mangled_assert("ReadSquadronList");
    todo("implement");
}

_static void ReadStrikeGroups(LuaConfig &lc, Player *player, char const *volumeName, SquadronList &squadronList) // 0x61468B
{
    mangled_assert("ReadStrikeGroups");
    todo("implement");
}

_static void ReadSquadrons(LuaConfig &lc, Player *player, char const *volumeName, SquadronList &squadronList) // 0x614673
{
    mangled_assert("ReadSquadrons");
    todo("implement");
}

_static void doNormalParadeFor(Squadron *squad, Ship *paradeRound, ParadeCommand::ParadeMode paradeMode) // 0x61588F
{
    mangled_assert("doNormalParadeFor");
    todo("implement");
}

_static void makeSquadHyperspaceIn(Squadron *squad, vector3 const &pos, __int32 playerIndex) // 0x6159DF
{
    mangled_assert("makeSquadHyperspaceIn");
    todo("implement");
}

_static void PlaceShipsInFinalPositions(SquadronList const &squadrons, unsigned __int32 paradeRoundTypeID, char const *volumeName) // 0x61335B
{
    mangled_assert("PlaceShipsInFinalPositions");
    todo("implement");
}

_static void PreReadShipHolds(LuaConfig &lc) // 0x6138C8
{
    mangled_assert("PreReadShipHolds");
    todo("implement");
}

_static void PreReadSubSystems(LuaConfig &lc) // 0x613B87
{
    mangled_assert("PreReadSubSystems");
    todo("implement");
}

_static void PreReadSquadronList(LuaConfig &lc) // 0x6139BF
{
    mangled_assert("PreReadSquadronList");
    todo("implement");
}

_static void PreReadStrikeGroups(LuaConfig &lc) // 0x613B01
{
    mangled_assert("PreReadStrikeGroups");
    todo("implement");
}

_static void PreReadSquadrons(LuaConfig &lc) // 0x613AFC
{
    mangled_assert("PreReadSquadrons");
    todo("implement");
}
#endif
