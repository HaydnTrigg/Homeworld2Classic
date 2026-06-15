#if 0
/* ---------- headers */

#include "decomp.h"
#include <Badge.h>
#include <sobid.h>
#include <assist\stlexsmallvector.h>
#include <isteammatchmaking.h>
#include <matchmakingtypes.h>
#include <isteamunifiedmessages.h>
#include <xstring>
#include <xmemory0>
#include <GameOptions.h>
#include <Mathlib\matrix4.h>
#include <boost\shared_array.hpp>
#include <pch.h>
#include <memory\memorylib.h>
#include <isteamapps.h>
#include <crtdefs.h>
#include <NIS\NISManager.h>
#include <Render\objects\textureregistry.h>
#include <UserInterface\NewFrame.h>
#include <fileio\filepathhd.h>
#include <UserInterface\InterfaceElement.h>
#include <HyperspaceManager.h>
#include <UserInterface\SharedGraphicFactory.h>
#include <Mathlib\matrix3.h>
#include <SquadronList.h>
#include <UserInterface\Graphic.h>
#include <platform\cmdline.h>
#include <Render\objects\texture.h>
#include <boost\checked_delete.hpp>
#include <Volume.h>
#include <Render\objects\objects.h>
#include <VolumeStatic.h>
#include <Render\objects\core.h>
#include <SobUnmoveableStatic.h>
#include <Render\gl\types.h>
#include <new>
#include <Universe.h>
#include <Render\gl\lotypes.h>
#include <boost\static_assert.hpp>
#include <Waypoint.h>
#include <SelTarg.h>
#include <exception>
#include <xstddef>
#include <SobUnmoveable.h>
#include <prim.h>
#include <type_traits>
#include <sob.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <DynamicPoint.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <isteamscreenshots.h>
#include <xutility>
#include <Collision\Primitives\capsule.h>
#include <utility>
#include <iosfwd>
#include <Collision\Primitives\segment.h>
#include <Parade.h>
#include <PersistantData.h>
#include <Menus\MenuSupport.h>
#include <vector>
#include <Collision\BVH\profiling.h>
#include <UserInterface\uitypes.h>
#include <fileio\bytestream.h>
#include <isteamfriends.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <platform\inputinterface.h>
#include <Menus\MovieScreen.h>
#include <SoundManager\SoundManager.h>
#include <UserInterface\NewUIScreen.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <region.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <compiler\compilerconfig.h>
#include <SOBGroupManager.h>
#include <hash_map>
#include <Ship\FormationTargetInfo.h>
#include <list>
#include <xhash>
#include <abilities.h>
#include <ReactiveFleet.h>
#include <assist\fixedstring.h>
#include <Graphics\TeamColour.h>
#include <Mathlib\vector3.h>
#include <fileio\filepath.h>
#include <Mathlib\vector4.h>
#include <isteamcontroller.h>
#include <steamcontrollerpublic.h>
#include <stack>
#include <playerresourcetype.h>
#include <map>
#include <xtree>
#include <GameObj.h>
#include <boost\smart_ptr.hpp>
#include <boost\scoped_ptr.hpp>
#include <task.h>
#include <platform\osdef.h>
#include <Collision\Primitives\obb.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <localizer\localizer.h>
#include <Race.h>
#include <cstdarg>
#include <Mathlib\vector2.h>
#include <stdarg.h>
#include <util\types.h>
#include <isteammusicremote.h>
#include <App\PlayerProfileMan.h>
#include <util\statmonitor.h>
#include <App\PlayerProfile.h>
#include <gameSettings.h>
#include <util\utilexports.h>
#include <boost\cstdint.hpp>
#include <App\PlayerProfileGameOptions.h>
#include <config.h>
#include <boost\config.hpp>
#include <platform\timer.h>
#include <KeyBindings.h>
#include <seInterface2\SampleID.h>
#include <syncChecking.h>
#include <platform\platformexports.h>
#include <platform\keydefines.h>
#include <seInterface2\SampleBase.h>
#include <cassert>
#include <Camera\OrbitParameters.h>
#include <assert.h>
#include <App\AppObj.h>
#include <SteamFuncs.h>
#include <Ship\Formation.h>
#include <platform\appinterface.h>
#include <boost\scoped_array.hpp>
#include <steam_api.h>
#include <Ship\FormationPattern.h>
#include <Scar\Scar.h>
#include <isteamclient.h>
#include <weaponinfo.h>
#include <UserInterface\StyleSheet.h>
#include <Scar\ScarEventSys.h>
#include <steamtypes.h>
#include <Mathlib\quat.h>
#include <UserInterface\pch.h>
#include <Modifiers\ModifierTargetCache.h>
#include <ParadeCommand.h>
#include <isteamuser.h>
#include <commandtype.h>
#include <SensorsManager.h>
#include <Render\gl\r_types.h>
#include <assist\typemagic.h>
#include <Mathlib\matvec.h>
#include <isteamhtmlsurface.h>
#include <Render\objects\textureproxy.h>
#include <MainUI.h>
#include <Mathlib\mathlibdll.h>
#include <isteammusic.h>
#include <Selector.h>
#include <Mathlib\fastmath.h>
#include <Render\gl\r_defines.h>
#include <MetaSelTarg.h>
#include <Render\gl\glext.h>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <savegameimpl.h>
#include <isteamuserstats.h>
#include <isteamugc.h>
#include <isteamremotestorage.h>
#include <pathpoints.h>
#include <debug\db.h>
#include <seInterface2\sedefinesshared.h>
#include <Scar\LuaRuleSystem.h>
#include <isteamapplist.h>
#include <deque>
#include <MeshAnimation.h>
#include <luaconfig\luabinding.h>
#include <seInterface2\PatchID.h>
#include <BuildManager.h>
#include <ShieldTypes.h>
#include <isteamhttp.h>
#include <luaconfig\luaconfig.h>
#include <seInterface2\PatchBase.h>
#include <dbdefines.h>
#include <steamhttpenums.h>
#include <seInterface2\SoundParams.h>
#include <UnitCaps\UnitCaps.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <SobWithMeshStatic.h>
#include <selection.h>
#include <Squadron.h>
#include <savegamedef.h>
#include <Collision\BVH\octree.h>
#include <command.h>
#include <ship.h>
#include <boost\detail\shared_count.hpp>
#include <Collision\BVH\span.h>
#include <SobWithMesh.h>
#include <Subsystems\HardPointManager.h>
#include <Mathlib\mathutil.h>
#include <bitset>
#include <Collision\BVH\Internal\span_i.h>
#include <SobRigidBody.h>
#include <Subsystems\HardPoint.h>
#include <boost\detail\lwm_win32.hpp>
#include <Collision\BVH\proxy.h>
#include <Subsystems\HardPointStatic.h>
#include <steamclientpublic.h>
#include <Collision\intersect.h>
#include <SobRigidBodyStatic.h>
#include <Subsystems\SubSystemType.h>
#include <steamuniverse.h>
#include <isteamnetworking.h>
#include <Collision\primitivesfwd.h>
#include <OrderFeedback.h>
#include <GameRulesLibrary.h>
#include <UserInterface\signals.h>
#include <isteamutils.h>
#include <campaign.h>
#include <Interpolation.h>
#include <scripting.h>
#include <wchar.h>
#include <boost\utility.hpp>
#include <string>
#include <scriptaccess.h>
#include <LevelDesc.h>
#include <swprintf.inl>
#include <scripttypedef.h>
#include <Hash.h>
#include <fileio\md5.h>
#include <Collision\Primitives\aabb.h>
#include <LevelManager.h>
#include <queue>
#include <SoundManager\SoundEntityHandle.h>
#include <algorithm>
#include <lua.h>
#include <Player.h>
#include <gamestructimpl.h>
#include <ResearchManager.h>

/* ---------- constants */

/* ---------- definitions */

typedef std::list<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > SaveGameList;

/* ---------- prototypes */


_static void endOfPostLevel();

/* ---------- globals */

extern Campaign *Campaign::s_instance; // 0x848728
extern char const *Campaign::Homeworld1Missions[1]; // 0x83BE3C
extern char const *Campaign::Homeworld2Missions[15]; // 0x83BE40
extern char const Campaign::m_saveToken[9]; // 0x7A8B40
extern SaveData const Campaign::m_saveData[2]; // 0x7A8B50

/* ---------- private variables */

_static
{
    extern char const *CAMPAIGN_EXTENSION; // 0x83BE20
    extern char const *CAMPAIGN_ALIAS; // 0x83BE24
    extern char const *CURRENTMISSION; // 0x83BE28
    extern char const *MAXMISSION; // 0x83BE2C
    extern char const *LASTSAVEGAME; // 0x83BE30
    extern char const *LASTCAMPAIGN; // 0x83BE34
    extern char const *STARTED; // 0x83BE38
}

/* ---------- public code */

void Campaign::Initialize() // 0x5E8511
{
    mangled_assert("?Initialize@Campaign@@SGXXZ");
    todo("implement");
}

void Campaign::Shutdown() // 0x5E92D4
{
    mangled_assert("?Shutdown@Campaign@@SGXXZ");
    todo("implement");
}

Campaign *Campaign::Instance() // 0x5E854B
{
    mangled_assert("?Instance@Campaign@@SGPAV1@XZ");
    todo("implement");
}

Level::Level() // 0x5E7E98
{
    mangled_assert("??0Level@@QAE@XZ");
    todo("implement");
}

_inline LuaBinding::ObjInternal3<char const *,bool,bool,void,LuaBinding::Functor3Free<char const *,bool,bool,void> >::~ObjInternal3<char const *,bool,bool,void,LuaBinding::Functor3Free<char const *,bool,bool,void> >() // 0x5E7EF9
{
    mangled_assert("??1?$ObjInternal3@PBD_N_NXV?$Functor3Free@PBD_N_NX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

Level::~Level() // 0x5E7FC6
{
    mangled_assert("??1Level@@QAE@XZ");
    todo("implement");
}

void Level::clear() // 0x5E9591
{
    mangled_assert("?clear@Level@@QAEXXZ");
    todo("implement");
}

Campaign::Campaign() // 0x5E7C4B
{
    mangled_assert("??0Campaign@@AAE@XZ");
    todo("implement");
}

Campaign::Campaign(SaveGameData *) // 0x5E7D1B
{
    mangled_assert("??0Campaign@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

_inline Campaign::Data::Data() // 0x5E7DED
{
    mangled_assert("??0Data@Campaign@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline Level::Level(Level const &) // 0x5E7DFF
{
    mangled_assert("??0Level@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

Campaign::~Campaign() // 0x5E7F07
{
    mangled_assert("??1Campaign@@EAE@XZ");
    todo("implement");
}

_inline Campaign::Data::~Data() // 0x5E7FC0
{
    mangled_assert("??1Data@Campaign@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

void Campaign::clear() // 0x5E9544
{
    mangled_assert("?clear@Campaign@@AAEXXZ");
    todo("implement");
}

void Campaign::initScriptVars() // 0x5E96C5
{
    mangled_assert("?initScriptVars@Campaign@@AAEXXZ");
    todo("implement");
}

Level const &Campaign::GetCurrentLevel() const // 0x5E8210
{
    mangled_assert("?GetCurrentLevel@Campaign@@QBEABVLevel@@XZ");
    todo("implement");
}

bool Campaign::isLevelHW1DLC(char const *) // 0x5E98EE
{
    mangled_assert("?isLevelHW1DLC@Campaign@@QAE_NPBD@Z");
    todo("implement");
}

bool Campaign::isLevelHW2DLC(char const *) // 0x5E991B
{
    mangled_assert("?isLevelHW2DLC@Campaign@@QAE_NPBD@Z");
    todo("implement");
}

bool Campaign::isLevelValidDLC(char const *) // 0x5E9948
{
    mangled_assert("?isLevelValidDLC@Campaign@@QAE_NPBD@Z");
    todo("implement");
}

bool Campaign::isCurrentLevelValidDLC() // 0x5E98D9
{
    mangled_assert("?isCurrentLevelValidDLC@Campaign@@QAE_NXZ");
    todo("implement");
}

Level Campaign::GetLevel(unsigned __int32, bool &) // 0x5E8266
{
    mangled_assert("?GetLevel@Campaign@@QAE?AVLevel@@IAA_N@Z");
    todo("implement");
}

__int32 Campaign::GetLevelIndexFromName(char const *) // 0x5E82C9
{
    mangled_assert("?GetLevelIndexFromName@Campaign@@QAEHPBD@Z");
    todo("implement");
}

__int32 Campaign::getCurrentLevel() const // 0x5E960A
{
    mangled_assert("?getCurrentLevel@Campaign@@QBEHXZ");
    todo("implement");
}

__int32 Campaign::getNumLevels() // 0x5E9694
{
    mangled_assert("?getNumLevels@Campaign@@QAEHXZ");
    todo("implement");
}

std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > Campaign::getDisplayName() // 0x5E960E
{
    mangled_assert("?getDisplayName@Campaign@@QAE?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ");
    todo("implement");
}

__int32 Campaign::IsLevelInCampaign(char const *, __int32) // 0x5E8551
{
    mangled_assert("?IsLevelInCampaign@Campaign@@AAEHPBDH@Z");
    todo("implement");
}

void Campaign::UpdateLevelData() // 0x5E9503
{
    mangled_assert("?UpdateLevelData@Campaign@@AAEXXZ");
    todo("implement");
}

void Campaign::LoadLevelData(unsigned __int32, Level &) // 0x5E86AD
{
    mangled_assert("?LoadLevelData@Campaign@@AAEXIAAVLevel@@@Z");
    todo("implement");
}

std::basic_string<char,std::char_traits<char>,std::allocator<char> > Campaign::GetDirectory() const // 0x5E8214
{
    mangled_assert("?GetDirectory@Campaign@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
    todo("implement");
}

void Campaign::StartCampaign(char const *) // 0x5E92EC
{
    mangled_assert("?StartCampaign@Campaign@@AAEXPBD@Z");
    todo("implement");
}

void Campaign::ResumeCampaign() // 0x5E9021
{
    mangled_assert("?ResumeCampaign@Campaign@@QAEXXZ");
    todo("implement");
}

void Campaign::setLevelName(char const *) // 0x5E9B15
{
    mangled_assert("?setLevelName@Campaign@@QAEXPBD@Z");
    todo("implement");
}

void Campaign::setLevelIndex(__int32) // 0x5E9B06
{
    mangled_assert("?setLevelIndex@Campaign@@QAEXH@Z");
    todo("implement");
}

void Campaign::SaveGame(char const *) // 0x5E918C
{
    mangled_assert("?SaveGame@Campaign@@QAEXPBD@Z");
    todo("implement");
}

bool Campaign::GetSaveGames(std::list<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &) // 0x5E83FD
{
    mangled_assert("?GetSaveGames@Campaign@@QAE_NAAV?$list@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z");
    todo("implement");
}

void Campaign::CloseCampaign() // 0x5E808C
{
    mangled_assert("?CloseCampaign@Campaign@@AAEXXZ");
    todo("implement");
}

void Campaign::GetRuleFile(std::basic_string<char,std::char_traits<char>,std::allocator<char> > &) // 0x5E8340
{
    mangled_assert("?GetRuleFile@Campaign@@AAEXAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

bool Campaign::PreLoad() // 0x5E8E5D
{
    mangled_assert("?PreLoad@Campaign@@QAE_NXZ");
    todo("implement");
}

bool Campaign::PostLoad() // 0x5E8E32
{
    mangled_assert("?PostLoad@Campaign@@QAE_NXZ");
    todo("implement");
}

bool Campaign::PreLoadPersistantFleet() // 0x5E9010
{
    mangled_assert("?PreLoadPersistantFleet@Campaign@@QAE_NXZ");
    todo("implement");
}

bool Campaign::LoadPersistantFleet(unsigned __int32) // 0x5E89E6
{
    mangled_assert("?LoadPersistantFleet@Campaign@@QAE_NI@Z");
    todo("implement");
}

void Campaign::LoadTeamColourInfo() // 0x5E8A13
{
    mangled_assert("?LoadTeamColourInfo@Campaign@@AAEXXZ");
    todo("implement");
}

void Campaign::SaveToProfile() // 0x5E9211
{
    mangled_assert("?SaveToProfile@Campaign@@AAEXXZ");
    todo("implement");
}

bool Campaign::PostLevel(bool) // 0x5E8D95
{
    mangled_assert("?PostLevel@Campaign@@QAE_N_N@Z");
    todo("implement");
}

bool Campaign::restore(SaveGameData *) // 0x5E9A8D
{
    mangled_assert("?restore@Campaign@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool Campaign::save(SaveGameData *, SaveType) // 0x5E9ACB
{
    mangled_assert("?save@Campaign@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

bool Campaign::GameSave(SaveGameData *saveGameData, SaveType saveType) // 0x5E81E7
{
    mangled_assert("?GameSave@Campaign@@SG_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

bool Campaign::GameRestore(SaveGameData *saveGameData) // 0x5E818F
{
    mangled_assert("?GameRestore@Campaign@@SG_NPAVSaveGameData@@@Z");
    todo("implement");
}

void Campaign::postRestore() // 0x5E998F
{
    mangled_assert("?postRestore@Campaign@@UAEXXZ");
    todo("implement");
}

void Campaign::PlayAnimatic(char const *filename, bool bPostLevel, bool restoreInterface) // 0x5E8CE3
{
    mangled_assert("?PlayAnimatic@Campaign@@SGXPBD_N1@Z");
    todo("implement");
}

void Campaign::PlayAnimaticNis(char const *filename, char const *nisName) // 0x5E8D21
{
    mangled_assert("?PlayAnimaticNis@Campaign@@SGXPBD0@Z");
    todo("implement");
}

void Campaign::PlayNIS(char const *filename) // 0x5E8D54
{
    mangled_assert("?PlayNIS@Campaign@@SGXPBD@Z");
    todo("implement");
}

unsigned __int32 Campaign::LoadNIS(char const *filename) // 0x5E89B8
{
    mangled_assert("?LoadNIS@Campaign@@SGIPBD@Z");
    todo("implement");
}

void Campaign::PostLevelComplete() // 0x5E8E17
{
    mangled_assert("?PostLevelComplete@Campaign@@SGXXZ");
    todo("implement");
}

/* ---------- private code */

_static void endOfPostLevel() // 0x5E9605
{
    mangled_assert("endOfPostLevel");
    todo("implement");
}
#endif
