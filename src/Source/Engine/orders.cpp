#if 0
/* ---------- headers */

#include "decomp.h"
#include <kernelspecs.h>
#include <urlmon.h>
#include <xlocale>
#include <Engine\DynamicPoint.h>
#include <basetsd.h>
#include <pshpack2.h>
#include <boost\type_traits\is_fundamental.hpp>
#include <stdexcept>
#include <xstring>
#include <libloaderapi.h>
#include <boost\type_traits\is_void.hpp>
#include <boost\type_traits\ice.hpp>
#include <xmemory0>
#include <Engine\FrameOrders.h>
#include <fileio\bytestream.h>
#include <sysinfoapi.h>
#include <boost\type_traits\detail\ice_and.hpp>
#include <Engine\dbdefines.h>
#include <fileio\fileioexports.h>
#include <atlchecked.h>
#include <Engine\fixedpoint.h>
#include <Engine\UnitCaps\UnitCaps.h>
#include <winreg.h>
#include <bcrypt.h>
#include <atlexcept.h>
#include <Engine\CloakManager.h>
#include <atltrace.h>
#include <oleacc.h>
#include <util\fixed.h>
#include <crtdefs.h>
#include <atlconv.h>
#include <winsock.h>
#include <atlalloc.h>
#include <NetworkDP8\source\authentication.h>
#include <nb30.h>
#include <wincrypt.h>
#include <NetworkDP8\source\session.h>
#include <Engine\shipHold.h>
#include <timeapi.h>
#include <NetworkDP8\source\directplay.h>
#include <boost\thread\thread.hpp>
#include <boost\function.hpp>
#include <boost\bind\mem_fn_cc.hpp>
#include <UserInterface\NewUIScreenManager.h>
#include <Engine\visibility.h>
#include <Mathlib\matrix3.h>
#include <Engine\MultiplierTypes.h>
#include <securityappcontainer.h>
#include <rpcsal.h>
#include <boost\preprocessor\iterate.hpp>
#include <Engine\region.h>
#include <Engine\AutoFormation\DestinationFormation.h>
#include <fibersapi.h>
#include <boost\preprocessor\iteration\iterate.hpp>
#include <assist\fixedstring.h>
#include <boost\preprocessor\arithmetic\dec.hpp>
#include <boost\preprocessor\config\config.hpp>
#include <new>
#include <Engine\Ship\Formation.h>
#include <winver.h>
#include <boost\preprocessor\arithmetic\inc.hpp>
#include <Engine\Squadron.h>
#include <Engine\Ship\FormationPattern.h>
#include <verrsrc.h>
#include <oleauto.h>
#include <boost\preprocessor\array\elem.hpp>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <Engine\ship.h>
#include <winioctl.h>
#include <servprov.h>
#include <boost\preprocessor\array\data.hpp>
#include <Engine\LayMinesCommand.h>
#include <Engine\SobWithMesh.h>
#include <realtimeapiset.h>
#include <tvout.h>
#include <boost\preprocessor\tuple\elem.hpp>
#include <xlocinfo>
#include <Engine\SobRigidBody.h>
#include <mciapi.h>
#include <comcat.h>
#include <boost\preprocessor\array\size.hpp>
#include <Engine\sob.h>
#include <winuser.h>
#include <boost\preprocessor\cat.hpp>
#include <Engine\sobstatic.h>
#include <cguid.h>
#include <boost\preprocessor\slot\slot.hpp>
#include <atlsimpcoll.h>
#include <boost\preprocessor\slot\detail\def.hpp>
#include <boost\type_traits\is_same.hpp>
#include <consoleapi.h>
#include <boost\function\detail\prologue.hpp>
#include <xutility>
#include <namedpipeapi.h>
#include <ioapiset.h>
#include <boost\function\function_base.hpp>
#include <xatomic0.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <boost\type_traits\arithmetic_traits.hpp>
#include <Engine\gameSettings.h>
#include <Mathlib\mathutil.h>
#include <memoryapi.h>
#include <dlgs.h>
#include <winperf.h>
#include <statreg.h>
#include <boost\type_traits\is_arithmetic.hpp>
#include <boost\mem_fn.hpp>
#include <xmemory>
#include <Engine\syncChecking.h>
#include <boost\type_traits\is_integral.hpp>
#include <boost\type_traits\detail\ice_not.hpp>
#include <boost\get_pointer.hpp>
#include <wtypesbase.h>
#include <winspool.h>
#include <atlwinverapi.h>
#include <boost\type_traits\detail\bool_trait_def.hpp>
#include <boost\preprocessor\enum.hpp>
#include <NetworkDP8\source\message.h>
#include <prsht.h>
#include <boost\type_traits\detail\template_arity_spec.hpp>
#include <boost\preprocessor\repetition\enum.hpp>
#include <boost\mpl\aux_\template_arity_fwd.hpp>
#include <boost\preprocessor\debug\error.hpp>
#include <xhash>
#include <Engine\weaponinfo.h>
#include <wingdi.h>
#include <boost\preprocessor\detail\auto_rec.hpp>
#include <rpc.h>
#include <boost\mpl\aux_\preprocessor\params.hpp>
#include <boost\preprocessor\control\iif.hpp>
#include <Engine\SOBGroupManager.h>
#include <Engine\BuildQueue.h>
#include <pshpack4.h>
#include <boost\mpl\aux_\config\preprocessor.hpp>
#include <boost\preprocessor\punctuation\comma_if.hpp>
#include <Engine\BuildData.h>
#include <joystickapi.h>
#include <boost\mpl\aux_\lambda_support.hpp>
#include <boost\preprocessor\control\if.hpp>
#include <math.h>
#include <Engine\DependencyData.h>
#include <rpcdce.h>
#include <boost\mpl\aux_\config\lambda.hpp>
#include <boost\bind\mem_fn_template.hpp>
#include <boost\preprocessor\logical\bool.hpp>
#include <UserInterface\signals.h>
#include <winerror.h>
#include <boost\mpl\aux_\config\ttp.hpp>
#include <boost\preprocessor\facilities\empty.hpp>
#include <list>
#include <Engine\playerresourcetype.h>
#include <winefs.h>
#include <boost\mpl\aux_\config\overload_resolution.hpp>
#include <boost\preprocessor\punctuation\comma.hpp>
#include <Engine\AutoFormation\GroupifySquadrons.h>
#include <NetworkDP8\networkdp8.h>
#include <boost\mpl\bool.hpp>
#include <boost\preprocessor\repetition\repeat.hpp>
#include <NetworkDP8\source\address.h>
#include <ddeml.h>
#include <lzexpand.h>
#include <boost\mpl\bool_fwd.hpp>
#include <boost\preprocessor\tuple\eat.hpp>
#include <Engine\TeamColourRegistry.h>
#include <atlbase.h>
#include <boost\preprocessor\tuple\rem.hpp>
#include <Engine\savegame.h>
#include <fileio\logfile.h>
#include <atldef.h>
#include <atlcomcli.h>
#include <boost\preprocessor\enum_params.hpp>
#include <Engine\task.h>
#include <atlrc.h>
#include <olectl.h>
#include <boost\type_traits\composite_traits.hpp>
#include <boost\type_traits\detail\ice_eq.hpp>
#include <boost\preprocessor\repetition\enum_params.hpp>
#include <Mathlib\vector3.h>
#include <new.h>
#include <interlockedapi.h>
#include <timezoneapi.h>
#include <stringapiset.h>
#include <reason.h>
#include <ocidl.h>
#include <boost\type_traits\is_array.hpp>
#include <boost\preprocessor\repeat.hpp>
#include <stack>
#include <Engine\GameObj.h>
#include <Mathlib\vector4.h>
#include <Engine\Race.h>
#include <boost\type_traits\config.hpp>
#include <boost\preprocessor\inc.hpp>
#include <Engine\config.h>
#include <Engine\SobWithMeshStatic.h>
#include <boost\preprocessor\iteration\detail\iter\forward1.hpp>
#include <boost\mpl\aux_\config\static_constant.hpp>
#include <boost\preprocessor\iteration\detail\bounds\lower1.hpp>
#include <boost\thread\mutex.hpp>
#include <xtree>
#include <securitybaseapi.h>
#include <boost\preprocessor\slot\detail\shared.hpp>
#include <boost\thread\detail\lock.hpp>
#include <util\statmonitor.h>
#include <boost\preprocessor\iteration\detail\bounds\upper1.hpp>
#include <boost\thread\exceptions.hpp>
#include <util\utilexports.h>
#include <boost\scoped_ptr.hpp>
#include <boost\function\detail\function_iterate.hpp>
#include <boost\thread\detail\config.hpp>
#include <platform\timer.h>
#include <oleidl.h>
#include <mcx.h>
#include <boost\assert.hpp>
#include <boost\function\detail\maybe_include.hpp>
#include <platform\platformexports.h>
#include <Engine\LevelDesc.h>
#include <boost\function\function_template.hpp>
#include <Engine\Hash.h>
#include <Engine\Modifiers\ModifierUIInfo.h>
#include <fileio\md5.h>
#include <Engine\Modifiers\ModifierMultiplier.h>
#include <boost\type_traits\is_class.hpp>
#include <Engine\Modifiers\ModifierEffect.h>
#include <boost\type_traits\is_union.hpp>
#include <util\types.h>
#include <Engine\BuildManager.h>
#include <Engine\StrikeGroupFormationManager.h>
#include <debugapi.h>
#include <boost\type_traits\remove_cv.hpp>
#include <xfacet>
#include <util\colour.h>
#include <Engine\StrikeGroup.h>
#include <Engine\StrikeGroupFormation.h>
#include <Engine\Subsystems\Subsystem.h>
#include <Engine\ShieldTypes.h>
#include <fileapi.h>
#include <boost\type_traits\broken_compiler_spec.hpp>
#include <boost\type_traits\detail\cv_traits_impl.hpp>
#include <Engine\SensorPingManager.h>
#include <Engine\gamestructimpl.h>
#include <Engine\Subsystems\SubsystemStatic.h>
#include <Engine\pathpoints.h>
#include <Engine\Badge.h>
#include <Engine\weaponstaticinfo.h>
#include <cderr.h>
#include <boost\type_traits\is_enum.hpp>
#include <Collision\BVH\octree.h>
#include <Engine\GunBinding.h>
#include <dde.h>
#include <objidl.h>
#include <msxml.h>
#include <boost\type_traits\add_reference.hpp>
#include <Collision\BVH\span.h>
#include <boost\cstdint.hpp>
#include <winsock2.h>
#include <boost\type_traits\is_reference.hpp>
#include <Engine\ITweak.h>
#include <boost\config.hpp>
#include <winapifamily.h>
#include <cassert>
#include <Engine\Tactics.h>
#include <windows.h>
#include <assert.h>
#include <sdkddkver.h>
#include <threadpoollegacyapiset.h>
#include <rpcnterr.h>
#include <winsmcrd.h>
#include <dplay8.h>
#include <excpt.h>
#include <rpcnsi.h>
#include <rpcasync.h>
#include <dpaddr.h>
#include <Engine\Subsystems\SubSystemType.h>
#include <Engine\shipstatic.h>
#include <boost\type_traits\detail\type_trait_def.hpp>
#include <Engine\GameEventDefs.h>
#include <poppack.h>
#include <Engine\GameEventSys.h>
#include <Engine\Menus\MenuSupport.h>
#include <boost\ref.hpp>
#include <UserInterface\uitypes.h>
#include <Engine\sobtypes.h>
#include <Engine\command.h>
#include <platform\inputinterface.h>
#include <Engine\selection.h>
#include <platform\keydefines.h>
#include <Engine\savegamedef.h>
#include <mmiscapi2.h>
#include <ime_cmodes.h>
#include <boost\type_traits\is_pointer.hpp>
#include <Engine\recorder.h>
#include <profileapi.h>
#include <Engine\Network\P2PNetwork.h>
#include <Engine\WeaponClassSpecificInfo.h>
#include <Engine\Network\inetwork.h>
#include <synchapi.h>
#include <Engine\commandtype.h>
#include <mmsystem.h>
#include <mmsyscom.h>
#include <process.h>
#include <Engine\prim.h>
#include <utilapiset.h>
#include <heapapi.h>
#include <processthreadsapi.h>
#include <ws2def.h>
#include <Engine\pch.h>
#include <Engine\orders.h>
#include <boost\static_assert.hpp>
#include <ole2.h>
#include <inaddr.h>
#include <Engine\orders_base.h>
#include <Mathlib\vector2.h>
#include <objbase.h>
#include <atlbase.inl>
#include <combaseapi.h>
#include <NetworkDP8\source\blowfish.h>
#include <Engine\Universe.h>
#include <luaconfig\luabinding.h>
#include <Engine\Waypoint.h>
#include <luaconfig\luaconfig.h>
#include <pshpack8.h>
#include <winnetwk.h>
#include <qos.h>
#include <Engine\SobUnmoveable.h>
#include <lua\lua.h>
#include <Engine\abilities.h>
#include <wnnc.h>
#include <NetworkDP8\source\exception.h>
#include <Engine\SquadronList.h>
#include <Engine\Player.h>
#include <stdarg.h>
#include <Engine\ResearchManager.h>
#include <windef.h>
#include <Engine\gamemsg.h>
#include <minwindef.h>
#include <bemapiset.h>
#include <rpcdcep.h>
#include <specstrings.h>
#include <playsoundapi.h>
#include <boost\type_traits\detail\ice_or.hpp>
#include <debug\db.h>
#include <specstrings_strict.h>
#include <specstrings_undef.h>
#include <handleapi.h>
#include <boost\type_traits\has_trivial_copy.hpp>
#include <driverspecs.h>
#include <objidlbase.h>
#include <boost\type_traits\is_volatile.hpp>
#include <sdv_driverspecs.h>
#include <ncrypt.h>
#include <Engine\alliance.h>
#include <threadpoolapiset.h>
#include <unknwnbase.h>
#include <Engine\AttackCommand.h>
#include <Engine\ChatMsg.h>
#include <oaidl.h>
#include <assist\stlexsmallvector.h>
#include <Engine\AttackStyle.h>
#include <commdlg.h>
#include <Engine\DefenseFieldManager.h>
#include <namespaceapi.h>
#include <boost\pending\ct_if.hpp>
#include <Engine\Modifiers\ModifierApplier.h>
#include <ktmtypes.h>
#include <NetworkDP8\source\sessionenum.h>
#include <boost\throw_exception.hpp>
#include <Engine\weaponTargetInfo.h>
#include <NetworkDP8\source\sessioninfo.h>
#include <dpapi.h>
#include <propidl.h>
#include <boost\detail\shared_count.hpp>
#include <Engine\HyperspaceManager.h>
#include <unknwn.h>
#include <boost\type_traits\is_stateless.hpp>
#include <winbase.h>
#include <wincon.h>
#include <mmiscapi.h>
#include <boost\type_traits\has_trivial_constructor.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <apisetcconv.h>
#include <mmeapi.h>
#include <imm.h>
#include <boost\type_traits\is_pod.hpp>
#include <minwinbase.h>
#include <boost\type_traits\is_scalar.hpp>
#include <atlcore.h>
#include <Engine\Network\SimSpeedController.h>
#include <winscard.h>
#include <tchar.h>
#include <boost\type_traits\has_trivial_destructor.hpp>
#include <wtypes.h>
#include <mbstring.h>
#include <boost\type_traits\intrinsics.hpp>
#include <errhandlingapi.h>
#include <rpcndr.h>
#include <processenv.h>
#include <rpcnsip.h>
#include <system_error>
#include <guiddef.h>
#include <stralign.h>
#include <Engine\Ship\FormationTargetInfo.h>
#include <jobapi.h>
#include <NetworkDP8\source\sessiondesc.h>
#include <boost\type_traits\detail\type_trait_undef.hpp>
#include <NetworkDP8\source\playerdesc.h>
#include <wchar.h>
#include <Engine\Modifiers\ModifierAbility.h>
#include <apiset.h>
#include <boost\type_traits\is_convertible.hpp>
#include <string>
#include <winsvc.h>
#include <boost\utility.hpp>
#include <boost\type_traits\detail\bool_trait_undef.hpp>
#include <boost\type_traits\detail\yes_no_type.hpp>
#include <boost\type_traits\is_empty.hpp>
#include <systemtopologyapi.h>
#include <pshpack1.h>
#include <atltransactionmanager.h>
#include <boost\type_traits\is_float.hpp>
#include <boost\utility\addressof.hpp>
#include <Engine\KeyBindings.h>
#include <istream>
#include <wow64apiset.h>
#include <ktmw32.h>
#include <boost\detail\workaround.hpp>
#include <boost\type_traits\is_member_pointer.hpp>
#include <NetworkDP8\source\criticalsection.h>
#include <ostream>
#include <Engine\Modifiers\ModifierTargetCache.h>
#include <atliface.h>
#include <boost\type_traits\is_member_function_pointer.hpp>
#include <ios>
#include <boost\type_traits\detail\is_mem_fun_pointer_impl.hpp>
#include <Engine\HyperSpaceBaseCommand.h>
#include <winnls.h>
#include <shellapi.h>
#include <shlwapi.h>
#include <Engine\sobid.h>
#include <datetimeapi.h>
#include <shtypes.h>
#include <streambuf>
#include <winnt.h>
#include <processtopologyapi.h>
#include <xiosbase>
#include <deque>
#include <set>

/* ---------- constants */

/* ---------- definitions */

typedef std::vector<Squadron *,std::allocator<Squadron *> > SquadronVector;
typedef std::vector<std::vector<Squadron *,std::allocator<Squadron *> >,std::allocator<std::vector<Squadron *,std::allocator<Squadron *> > > > SquadronGroups;

/* ---------- prototypes */

extern std::auto_ptr<Order> ExtractOrder(std::basic_istream<char,std::char_traits<char> > &in);
extern void getAveragePositionDtrm(std::vector<Squadron *,std::allocator<Squadron *> > const &squadVect, vector3 &middle);
extern void GenerateSquadDestinations(SquadronList const &squadronlist, vector3 const &origin, vector3 const &destination, vector3 const &forward, std::vector<SquadInfo,std::allocator<SquadInfo> > &info, DestinationFormation::Spacing spacing);
extern void sendMoveOrder(SquadronList const &squadronList, vector3 const &destination, vector3 const &origin, unsigned __int32 playerIndex, bool moveAttack, bool splitStrikeGroups);
extern void sendMoveToSobOrder(SquadronList const &squadronList, SobID const &shipID, vector3 const &offsetInWorldSpace, vector3 const &origin, unsigned __int32 playerIndex, bool splitStrikeGroups);
extern void sendHaltOrder(SquadronList const &squadronList, unsigned __int32 playerIndex, bool splitStrikeGroups);
extern void sendResearchOrder(unsigned __int32 researchId, unsigned __int32 playerIndex);
extern void sendCancelResearchOrder(unsigned __int32 researchId, unsigned __int32 playerIndex);
extern void sendMoveToTopOfResearchQueue(unsigned __int32 playerIndex, unsigned __int32 researchId);
extern void sendPauseResearchOrder(unsigned __int32 playerIndex);
extern void sendToggleAutoLaunchOrder(SobID const &shipID, unsigned __int32 playerIndex);
extern void sendBuildOrder(SobID const &builder, unsigned __int32 playerIndex, unsigned __int32 unitIdToBuild, SobID const &subsystemToRetire);
extern void sendCancelBuildOrder(SobID const &builder, unsigned __int32 playerIndex, unsigned __int32 buildJobId);
extern void sendMoveToTopOfBuildQueue(SobID const &builder, unsigned __int32 playerIndex, unsigned __int32 buildJobID);
extern void sendPauseQueueOrder(SobID const &builder, unsigned __int32 playerIndex, BuildType queueToPause);
extern void sendMoveWaypointOrder(SquadronList const &squadList, vector3 const &joinPosition, std::vector<vector3,std::allocator<vector3> > &path, __int32 firstPointIndex, bool forward, unsigned __int32 playerIndex, bool loop, bool splitStrikeGroups);
extern void sendMoveWaypointOrder(SquadronList const &squadList, std::vector<vector3,std::allocator<vector3> > &path, SobID const &finalTarget, unsigned __int32 playerIndex, bool splitStrikeGroups);
extern void sendAttackOrder(SquadronList const &squadList, Selection const &targets_, bool specialWeaponsAttack, unsigned __int32 playerIndex, bool splitStrikeGroups);
extern void sendResourceOrder(SquadronList const &squadronList, Selection const &resources_, unsigned __int32 playerIndex, bool splitStrikeGroups);
extern void sendDockOrder(SquadronList const &squadronList, SobID const &shipdockWithID, unsigned __int32 playerIndex, bool splitStrikeGroups);
extern void sendRetireOrder(SquadronList const &squadronList, unsigned __int32 playerIndex);
extern void sendRetireSubSystemsOrder(Selection const &subsystems_, unsigned __int32 playerIndex);
extern void sendLaunchOrder(SquadronList const &squadronList, SobID const &shiplaunchFromID, unsigned __int32 playerIndex, bool bFromLauncherShipHold, bool splitStrikeGroups);
extern void sendParadeOrder(SquadronList const &squadronList, SobID const &paradeWith, unsigned __int32 playerIndex, bool splitStrikeGroups);
extern void sendPauseUniverse(bool pause, unsigned __int32 playerIndex);
extern void sendFormStrikeGroup(SquadronList const &squadronList, unsigned __int32 strikeID, unsigned __int32 playerIndex);
extern void sendAddToStrikeGroup(SquadronList const &squadronList, unsigned __int32 strikeGroupId, unsigned __int32 playerIndex);
extern void sendAlliance(AllianceOrderAction action, unsigned __int32 playerIndex, unsigned __int32 ally);
extern void sendAllianceTransfer(unsigned __int32 playerIndex, unsigned __int32 ally, __int32 ru, SquadronList const *squadronList);
extern void sendSetTactics(SquadronList const &squadronList, SquadronTactics tactics, unsigned __int32 playerIndex);
extern void sendGuardOrder(SquadronList const &squadronList, Selection const &targets_, unsigned __int32 playerIndex, bool splitStrikeGroups);
extern void sendCaptureOrder(SquadronList const &squadronList, SobID const &targetShipID, unsigned __int32 playerIndex, bool splitStrikeGroups);
extern void sendHyperspaceOrder(SquadronList const &squadronList, vector3 const &destination, vector3 const &origin, bool offMap, unsigned __int32 playerIndex, bool splitStrikeGroups);
extern void sendOrderScuttle(Selection const &targets_, unsigned __int32 playerIndex);
extern void sendFormHyperspaceGateOrder(SquadronList const &squadronList, SobID const &targetGate, unsigned __int32 playerIndex);
extern void sendHyperspaceViaGateOrder(SquadronList const &squadronList, SobID const &gate, unsigned __int32 playerIndex);
extern void sendSensorPingOrder(SquadronList const &squadronList, unsigned __int32 playerIndex);
extern void sendRepairOrder(SquadronList const &squadronList, Selection const &targets_, unsigned __int32 playerIndex, bool splitStrikeGroups);
extern void sendCloakOrder(SquadronList const &squadronList, bool enable, unsigned __int32 playerIndex);
extern void sendDefenseFieldOrder(SquadronList const &squadronList, bool enable, unsigned __int32 playerIndex);
extern void sendSetRallyPointOrder(SquadronList const &squadronList, unsigned __int32 playerIndex, vector3 const &rallyPoint);
extern void sendSetRallyPointOrder(SquadronList const &squadronList, unsigned __int32 playerIndex, SobID const &rallyObject);
extern void sendLayMinesOrder(SquadronList const &squadronList, vector3 const &centre, vector3 const &front, vector3 const &corner, unsigned __int32 playerIndex);
extern void sendKamikazeOrder(SquadronList const &squadronList, unsigned __int32 playerIndex);
extern void sendChatOrder(GameMsg_Chat const &message);
extern void sendSalvageOrder(SquadronList const &squadronList, SobID const &target, unsigned __int32 playerIndex, bool splitStrikeGroups);
extern void sendLeaveStrikeGroup(SquadronList const &squadronList, unsigned __int32 playerIndex);
extern void sendSurrenderOrder();
extern bool ValidateSquadronList(SquadronList const &m_squadronList, unsigned __int32 player);
extern bool ValidateSelection(Selection const &m_selection, unsigned __int32 player);
extern void sendDropPlayer(unsigned __int32 networkID);

_static void getCoordSys(vector3 const &point, vector3 const &previous, matrix3 &coordSysOut);

/* ---------- globals */

extern CommandType const orderMapToPrimaryCommand[52]; // 0x7B5F48

/* ---------- private variables */

_static
{
    extern bool g_logRecordedGame; // 0x84B9F0
}

/* ---------- public code */

std::auto_ptr<Order> ExtractOrder(std::basic_istream<char,std::char_traits<char> > &in) // 0x693F1A
{
    mangled_assert("?ExtractOrder@@YG?AV?$auto_ptr@VOrder@@@std@@AAV?$basic_istream@DU?$char_traits@D@std@@@2@@Z");
    todo("implement");
}

Order::Order(std::basic_istream<char,std::char_traits<char> > &) // 0x690AED
{
    mangled_assert("??0Order@@IAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

void Order::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x6953E8
{
    mangled_assert("?Serialize@Order@@UBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

ResearchOrderBase::ResearchOrderBase(std::basic_istream<char,std::char_traits<char> > &) // 0x690CEF
{
    mangled_assert("??0ResearchOrderBase@@IAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

void ResearchOrderBase::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x695450
{
    mangled_assert("?Serialize@ResearchOrderBase@@MBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

SquadronListOrderBase::SquadronListOrderBase(std::basic_istream<char,std::char_traits<char> > &) // 0x691306
{
    mangled_assert("??0SquadronListOrderBase@@IAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

void SquadronListOrderBase::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x69558A
{
    mangled_assert("?Serialize@SquadronListOrderBase@@MBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

SelectionOrderBase::SelectionOrderBase(std::basic_istream<char,std::char_traits<char> > &) // 0x690F38
{
    mangled_assert("??0SelectionOrderBase@@IAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

void SelectionOrderBase::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x6954BF
{
    mangled_assert("?Serialize@SelectionOrderBase@@MBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

SobOrderBase::SobOrderBase(std::basic_istream<char,std::char_traits<char> > &) // 0x69118C
{
    mangled_assert("??0SobOrderBase@@IAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

_inline SquadInfo::SquadInfo() // 0x6911DB
{
    mangled_assert("??0SquadInfo@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

void SobOrderBase::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x695529
{
    mangled_assert("?Serialize@SobOrderBase@@MBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

SquadronList2SobBase::SquadronList2SobBase(std::basic_istream<char,std::char_traits<char> > &) // 0x691272
{
    mangled_assert("??0SquadronList2SobBase@@IAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

void SquadronList2SobBase::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x695568
{
    mangled_assert("?Serialize@SquadronList2SobBase@@MBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

Selection2SobBase::Selection2SobBase(std::basic_istream<char,std::char_traits<char> > &) // 0x690EE9
{
    mangled_assert("??0Selection2SobBase@@IAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

void Selection2SobBase::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x69549D
{
    mangled_assert("?Serialize@Selection2SobBase@@MBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

SquadronList2SelectionBase::SquadronList2SelectionBase(std::basic_istream<char,std::char_traits<char> > &) // 0x6911DE
{
    mangled_assert("??0SquadronList2SelectionBase@@IAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

void SquadronList2SelectionBase::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x69554B
{
    mangled_assert("?Serialize@SquadronList2SelectionBase@@MBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

Selection2SelectionBase::Selection2SelectionBase(std::basic_istream<char,std::char_traits<char> > &) // 0x690E9A
{
    mangled_assert("??0Selection2SelectionBase@@IAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

void Selection2SelectionBase::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x695480
{
    mangled_assert("?Serialize@Selection2SelectionBase@@MBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

void getAveragePositionDtrm(std::vector<Squadron *,std::allocator<Squadron *> > const &squadVect, vector3 &middle) // 0x695BF8
{
    mangled_assert("?getAveragePositionDtrm@@YGXABV?$vector@PAVSquadron@@V?$allocator@PAVSquadron@@@std@@@std@@AAVvector3@@@Z");
    todo("implement");
}

AttackOrder::AttackOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x68FF00
{
    mangled_assert("??0AttackOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

void AttackOrder::Execute() const // 0x692584
{
    mangled_assert("?Execute@AttackOrder@@UBEXXZ");
    todo("implement");
}

void AttackOrder::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x695086
{
    mangled_assert("?Serialize@AttackOrder@@UBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

void ResourceOrder::Execute() const // 0x693AAC
{
    mangled_assert("?Execute@ResourceOrder@@UBEXXZ");
    todo("implement");
}

void GuardOrder::Execute() const // 0x692A93
{
    mangled_assert("?Execute@GuardOrder@@UBEXXZ");
    todo("implement");
}

void RepairOrder::Execute() const // 0x69396A
{
    mangled_assert("?Execute@RepairOrder@@UBEXXZ");
    todo("implement");
}

void DockOrder::Execute() const // 0x6928B4
{
    mangled_assert("?Execute@DockOrder@@UBEXXZ");
    todo("implement");
}

void ParadeOrder::Execute() const // 0x6938CA
{
    mangled_assert("?Execute@ParadeOrder@@UBEXXZ");
    todo("implement");
}

void CaptureOrder::Execute() const // 0x69276D
{
    mangled_assert("?Execute@CaptureOrder@@UBEXXZ");
    todo("implement");
}

void SalvageOrder::Execute() const // 0x693B9A
{
    mangled_assert("?Execute@SalvageOrder@@UBEXXZ");
    todo("implement");
}

void HyperspaceViaGateOrder::Execute() const // 0x692D6D
{
    mangled_assert("?Execute@HyperspaceViaGateOrder@@UBEXXZ");
    todo("implement");
}

void ToggleAutoLaunchOrder::Execute() const // 0x693EB9
{
    mangled_assert("?Execute@ToggleAutoLaunchOrder@@UBEXXZ");
    todo("implement");
}

void HaltOrder::Execute() const // 0x692BA7
{
    mangled_assert("?Execute@HaltOrder@@UBEXXZ");
    todo("implement");
}

FormStrikeGroupOrder::FormStrikeGroupOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x690311
{
    mangled_assert("??0FormStrikeGroupOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

_inline GameMsg_Chat::GameMsg_Chat(GameMsg_Chat const &) // 0x69039B
{
    mangled_assert("??0GameMsg_Chat@@QAE@ABU0@@Z");
    compiler_generated();
    todo("implement");
}

void FormStrikeGroupOrder::Execute() const // 0x692978
{
    mangled_assert("?Execute@FormStrikeGroupOrder@@UBEXXZ");
    todo("implement");
}

void FormStrikeGroupOrder::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x695186
{
    mangled_assert("?Serialize@FormStrikeGroupOrder@@UBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

AddToStrikeGroupOrder::AddToStrikeGroupOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x68FD4C
{
    mangled_assert("??0AddToStrikeGroupOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

void AddToStrikeGroupOrder::Execute() const // 0x692504
{
    mangled_assert("?Execute@AddToStrikeGroupOrder@@UBEXXZ");
    todo("implement");
}

void AddToStrikeGroupOrder::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x694FC6
{
    mangled_assert("?Serialize@AddToStrikeGroupOrder@@UBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

void LeaveStrikeGroupOrder::Execute() const // 0x692FB6
{
    mangled_assert("?Execute@LeaveStrikeGroupOrder@@UBEXXZ");
    todo("implement");
}

void SensorPingOrder::Execute() const // 0x693CAC
{
    mangled_assert("?Execute@SensorPingOrder@@UBEXXZ");
    todo("implement");
}

void ScuttleOrder::Execute() const // 0x693BD7
{
    mangled_assert("?Execute@ScuttleOrder@@UBEXXZ");
    todo("implement");
}

void RetireSubSystemsOrder::Execute() const // 0x693B18
{
    mangled_assert("?Execute@RetireSubSystemsOrder@@UBEXXZ");
    todo("implement");
}

void ResearchOrder::Execute() const // 0x693A7E
{
    mangled_assert("?Execute@ResearchOrder@@UBEXXZ");
    todo("implement");
}

void CancelResearchOrder::Execute() const // 0x692744
{
    mangled_assert("?Execute@CancelResearchOrder@@UBEXXZ");
    todo("implement");
}

void PauseResearchOrder::Execute() const // 0x693945
{
    mangled_assert("?Execute@PauseResearchOrder@@UBEXXZ");
    todo("implement");
}

MoveOrder::MoveOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x6906E0
{
    mangled_assert("??0MoveOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

void GenerateSquadDestinations(SquadronList const &squadronlist, vector3 const &origin, vector3 const &destination, vector3 const &forward, std::vector<SquadInfo,std::allocator<SquadInfo> > &info, DestinationFormation::Spacing spacing) // 0x6948E8
{
    mangled_assert("?GenerateSquadDestinations@@YGXABVSquadronList@@ABVvector3@@11AAV?$vector@USquadInfo@@V?$allocator@USquadInfo@@@std@@@std@@W4Spacing@DestinationFormation@@@Z");
    todo("implement");
}

void MoveOrder::Execute() const // 0x693066
{
    mangled_assert("?Execute@MoveOrder@@UBEXXZ");
    todo("implement");
}

void MoveOrder::GenerateDestinations(vector3 &, std::vector<SquadInfo,std::allocator<SquadInfo> > &) const // 0x694812
{
    mangled_assert("?GenerateDestinations@MoveOrder@@QBEXAAVvector3@@AAV?$vector@USquadInfo@@V?$allocator@USquadInfo@@@std@@@std@@@Z");
    todo("implement");
}

void MoveOrder::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x695255
{
    mangled_assert("?Serialize@MoveOrder@@UBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

MoveToSobOrder::MoveToSobOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x69086F
{
    mangled_assert("??0MoveToSobOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

void MoveToSobOrder::Execute() const // 0x6935BF
{
    mangled_assert("?Execute@MoveToSobOrder@@UBEXXZ");
    todo("implement");
}

void MoveToSobOrder::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x6952F4
{
    mangled_assert("?Serialize@MoveToSobOrder@@UBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

BuildOrder::BuildOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x68FF95
{
    mangled_assert("??0BuildOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

void BuildOrder::Execute() const // 0x6926D1
{
    mangled_assert("?Execute@BuildOrder@@UBEXXZ");
    todo("implement");
}

void BuildOrder::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x6950A5
{
    mangled_assert("?Serialize@BuildOrder@@UBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

PauseQueueOrder::PauseQueueOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x690BD2
{
    mangled_assert("??0PauseQueueOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

void PauseQueueOrder::Execute() const // 0x69391E
{
    mangled_assert("?Execute@PauseQueueOrder@@UBEXXZ");
    todo("implement");
}

void PauseQueueOrder::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x695425
{
    mangled_assert("?Serialize@PauseQueueOrder@@UBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

MoveToTopOfBuildQueue::MoveToTopOfBuildQueue(std::basic_istream<char,std::char_traits<char> > &) // 0x690925
{
    mangled_assert("??0MoveToTopOfBuildQueue@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

void MoveToTopOfBuildQueue::Execute() const // 0x6937F6
{
    mangled_assert("?Execute@MoveToTopOfBuildQueue@@UBEXXZ");
    todo("implement");
}

void MoveToTopOfBuildQueue::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x695328
{
    mangled_assert("?Serialize@MoveToTopOfBuildQueue@@UBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

MoveToTopOfResearchQueue::MoveToTopOfResearchQueue(std::basic_istream<char,std::char_traits<char> > &) // 0x69098A
{
    mangled_assert("??0MoveToTopOfResearchQueue@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

void MoveToTopOfResearchQueue::Execute() const // 0x69381A
{
    mangled_assert("?Execute@MoveToTopOfResearchQueue@@UBEXXZ");
    todo("implement");
}

void MoveToTopOfResearchQueue::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x695344
{
    mangled_assert("?Serialize@MoveToTopOfResearchQueue@@UBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

MoveWaypointOrder::MoveWaypointOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x6909C3
{
    mangled_assert("??0MoveWaypointOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

void MoveWaypointOrder::Execute() const // 0x693843
{
    mangled_assert("?Execute@MoveWaypointOrder@@UBEXXZ");
    todo("implement");
}

void MoveWaypointOrder::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x695349
{
    mangled_assert("?Serialize@MoveWaypointOrder@@UBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

MoveTempWaypointOrder::MoveTempWaypointOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x69077D
{
    mangled_assert("??0MoveTempWaypointOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

void MoveTempWaypointOrder::Execute() const // 0x69320D
{
    mangled_assert("?Execute@MoveTempWaypointOrder@@UBEXXZ");
    todo("implement");
}

void MoveTempWaypointOrder::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x695299
{
    mangled_assert("?Serialize@MoveTempWaypointOrder@@UBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

LaunchOrder::LaunchOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x690591
{
    mangled_assert("??0LaunchOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

void LaunchOrder::Execute() const // 0x692DD2
{
    mangled_assert("?Execute@LaunchOrder@@UBEXXZ");
    todo("implement");
}

void LaunchOrder::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x6951FA
{
    mangled_assert("?Serialize@LaunchOrder@@UBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

PauseOrder::PauseOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x690BA0
{
    mangled_assert("??0PauseOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

void PauseOrder::Execute() const // 0x693909
{
    mangled_assert("?Execute@PauseOrder@@UBEXXZ");
    todo("implement");
}

UnpauseOrder::UnpauseOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x691418
{
    mangled_assert("??0UnpauseOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

_inline std::_List_buy<std::list<vector3,std::allocator<vector3> >,std::allocator<std::list<vector3,std::allocator<vector3> > > >::~_List_buy<std::list<vector3,std::allocator<vector3> >,std::allocator<std::list<vector3,std::allocator<vector3> > > >() // 0x691487
{
    mangled_assert("??1?$_List_buy@V?$list@Vvector3@@V?$allocator@Vvector3@@@std@@@std@@V?$allocator@V?$list@Vvector3@@V?$allocator@Vvector3@@@std@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline AddToStrikeGroupOrder::~AddToStrikeGroupOrder() // 0x6914AC
{
    mangled_assert("??1AddToStrikeGroupOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline AllianceOrder::~AllianceOrder() // 0x6914DC
{
    mangled_assert("??1AllianceOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline AllianceTransferOrder::~AllianceTransferOrder() // 0x6914E3
{
    mangled_assert("??1AllianceTransferOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline AttackOrder::~AttackOrder() // 0x691513
{
    mangled_assert("??1AttackOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline CaptureOrder::~CaptureOrder() // 0x691518
{
    mangled_assert("??1CaptureOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

void UnpauseOrder::Execute() const // 0x693EEF
{
    mangled_assert("?Execute@UnpauseOrder@@UBEXXZ");
    todo("implement");
}

_inline ChatOrder::~ChatOrder() // 0x69151D
{
    mangled_assert("??1ChatOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline CloakOrder::~CloakOrder() // 0x691534
{
    mangled_assert("??1CloakOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline DeSpawnOrder::~DeSpawnOrder() // 0x691564
{
    mangled_assert("??1DeSpawnOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline DefenseFieldOrder::~DefenseFieldOrder() // 0x691594
{
    mangled_assert("??1DefenseFieldOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline DockOrder::~DockOrder() // 0x6915C4
{
    mangled_assert("??1DockOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline DropPlayerOrder::~DropPlayerOrder() // 0x6915C9
{
    mangled_assert("??1DropPlayerOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline FormHyperspaceGateOrder::~FormHyperspaceGateOrder() // 0x6915D0
{
    mangled_assert("??1FormHyperspaceGateOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline FormStrikeGroupOrder::~FormStrikeGroupOrder() // 0x6915D5
{
    mangled_assert("??1FormStrikeGroupOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline GameEvent_StrikeGroupFormed::~GameEvent_StrikeGroupFormed() // 0x691605
{
    mangled_assert("??1GameEvent_StrikeGroupFormed@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline GuardOrder::~GuardOrder() // 0x69160C
{
    mangled_assert("??1GuardOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline HaltOrder::~HaltOrder() // 0x691611
{
    mangled_assert("??1HaltOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

void UnpauseOrder::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x6955BC
{
    mangled_assert("?Serialize@UnpauseOrder@@UBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

_inline HyperspaceOrder::~HyperspaceOrder() // 0x691641
{
    mangled_assert("??1HyperspaceOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline HyperspaceViaGateOrder::~HyperspaceViaGateOrder() // 0x691671
{
    mangled_assert("??1HyperspaceViaGateOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline KamikazeOrder::~KamikazeOrder() // 0x691676
{
    mangled_assert("??1KamikazeOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LaunchOrder::~LaunchOrder() // 0x6916A6
{
    mangled_assert("??1LaunchOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LayMinesOrder::~LayMinesOrder() // 0x6916AB
{
    mangled_assert("??1LayMinesOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LeaveStrikeGroupOrder::~LeaveStrikeGroupOrder() // 0x6916DB
{
    mangled_assert("??1LeaveStrikeGroupOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline MoveOrder::~MoveOrder() // 0x69170B
{
    mangled_assert("??1MoveOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline MoveTempWaypointOrder::~MoveTempWaypointOrder() // 0x69173B
{
    mangled_assert("??1MoveTempWaypointOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline MoveToSobOrder::~MoveToSobOrder() // 0x69174E
{
    mangled_assert("??1MoveToSobOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline MoveToTopOfBuildQueue::~MoveToTopOfBuildQueue() // 0x691753
{
    mangled_assert("??1MoveToTopOfBuildQueue@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline MoveToTopOfResearchQueue::~MoveToTopOfResearchQueue() // 0x691787
{
    mangled_assert("??1MoveToTopOfResearchQueue@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline MoveWaypointOrder::~MoveWaypointOrder() // 0x69178E
{
    mangled_assert("??1MoveWaypointOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline ParadeOrder::~ParadeOrder() // 0x6917C6
{
    mangled_assert("??1ParadeOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

AllianceOrder::AllianceOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x68FDB6
{
    mangled_assert("??0AllianceOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

_inline PauseOrder::~PauseOrder() // 0x6917CB
{
    mangled_assert("??1PauseOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline PauseQueueOrder::~PauseQueueOrder() // 0x6917D2
{
    mangled_assert("??1PauseQueueOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline PauseResearchOrder::~PauseResearchOrder() // 0x691806
{
    mangled_assert("??1PauseResearchOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline RepairOrder::~RepairOrder() // 0x69180D
{
    mangled_assert("??1RepairOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline ResourceOrder::~ResourceOrder() // 0x691812
{
    mangled_assert("??1ResourceOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline RetireOrder::~RetireOrder() // 0x691817
{
    mangled_assert("??1RetireOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline RetireSubSystemsOrder::~RetireSubSystemsOrder() // 0x691847
{
    mangled_assert("??1RetireSubSystemsOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline SalvageOrder::~SalvageOrder() // 0x691877
{
    mangled_assert("??1SalvageOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline ScuttleOrder::~ScuttleOrder() // 0x69187C
{
    mangled_assert("??1ScuttleOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline Selection2SelectionBase::~Selection2SelectionBase() // 0x6918AC
{
    mangled_assert("??1Selection2SelectionBase@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline Selection2SobBase::~Selection2SobBase() // 0x6918EB
{
    mangled_assert("??1Selection2SobBase@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

void AllianceOrder::Execute() const // 0x692542
{
    mangled_assert("?Execute@AllianceOrder@@UBEXXZ");
    todo("implement");
}

_inline SelectionOrderBase::~SelectionOrderBase() // 0x69192E
{
    mangled_assert("??1SelectionOrderBase@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline SensorPingOrder::~SensorPingOrder() // 0x69195E
{
    mangled_assert("??1SensorPingOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline SetRallyPointOrder::~SetRallyPointOrder() // 0x69198E
{
    mangled_assert("??1SetRallyPointOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline SetTacticsOrder::~SetTacticsOrder() // 0x691993
{
    mangled_assert("??1SetTacticsOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline SquadronList2SelectionBase::~SquadronList2SelectionBase() // 0x6919C3
{
    mangled_assert("??1SquadronList2SelectionBase@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline SquadronList2SobBase::~SquadronList2SobBase() // 0x691A02
{
    mangled_assert("??1SquadronList2SobBase@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

void AllianceOrder::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x694FF1
{
    mangled_assert("?Serialize@AllianceOrder@@UBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

_inline SquadronListOrderBase::~SquadronListOrderBase() // 0x691A45
{
    mangled_assert("??1SquadronListOrderBase@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline SurrenderOrder::~SurrenderOrder() // 0x691A75
{
    mangled_assert("??1SurrenderOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline ToggleAutoLaunchOrder::~ToggleAutoLaunchOrder() // 0x691A7C
{
    mangled_assert("??1ToggleAutoLaunchOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline UnpauseOrder::~UnpauseOrder() // 0x691AB0
{
    mangled_assert("??1UnpauseOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

AllianceTransferOrder::AllianceTransferOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x68FE3B
{
    mangled_assert("??0AllianceTransferOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

void AllianceTransferOrder::Execute() const // 0x692562
{
    mangled_assert("?Execute@AllianceTransferOrder@@UBEXXZ");
    todo("implement");
}

void AllianceTransferOrder::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x695033
{
    mangled_assert("?Serialize@AllianceTransferOrder@@UBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

SetTacticsOrder::SetTacticsOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x69111B
{
    mangled_assert("??0SetTacticsOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

void SetTacticsOrder::Execute() const // 0x693E05
{
    mangled_assert("?Execute@SetTacticsOrder@@UBEXXZ");
    todo("implement");
}

void SetTacticsOrder::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x6954FE
{
    mangled_assert("?Serialize@SetTacticsOrder@@UBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

HyperspaceOrder::HyperspaceOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x69045C
{
    mangled_assert("??0HyperspaceOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

void HyperspaceOrder::Execute() const // 0x692BDC
{
    mangled_assert("?Execute@HyperspaceOrder@@UBEXXZ");
    todo("implement");
}

void HyperspaceOrder::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x6951B1
{
    mangled_assert("?Serialize@HyperspaceOrder@@UBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

void FormHyperspaceGateOrder::Execute() const // 0x69291F
{
    mangled_assert("?Execute@FormHyperspaceGateOrder@@UBEXXZ");
    todo("implement");
}

CloakOrder::CloakOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x690133
{
    mangled_assert("??0CloakOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

void CloakOrder::Execute() const // 0x6927BB
{
    mangled_assert("?Execute@CloakOrder@@UBEXXZ");
    todo("implement");
}

void CloakOrder::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x69512C
{
    mangled_assert("?Serialize@CloakOrder@@UBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

DefenseFieldOrder::DefenseFieldOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x690193
{
    mangled_assert("??0DefenseFieldOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

void DefenseFieldOrder::Execute() const // 0x69284F
{
    mangled_assert("?Execute@DefenseFieldOrder@@UBEXXZ");
    todo("implement");
}

void DefenseFieldOrder::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x695146
{
    mangled_assert("?Serialize@DefenseFieldOrder@@UBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

RetireOrder::RetireOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x690D96
{
    mangled_assert("??0RetireOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

void RetireOrder::Execute() const // 0x693AE9
{
    mangled_assert("?Execute@RetireOrder@@UBEXXZ");
    todo("implement");
}

void RetireOrder::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x69547B
{
    mangled_assert("?Serialize@RetireOrder@@UBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

KamikazeOrder::KamikazeOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x69055B
{
    mangled_assert("??0KamikazeOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

void KamikazeOrder::Execute() const // 0x692DAA
{
    mangled_assert("?Execute@KamikazeOrder@@UBEXXZ");
    todo("implement");
}

void KamikazeOrder::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x6951F5
{
    mangled_assert("?Serialize@KamikazeOrder@@UBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

DeSpawnOrder::DeSpawnOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x69017B
{
    mangled_assert("??0DeSpawnOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

void DeSpawnOrder::Execute() const // 0x692820
{
    mangled_assert("?Execute@DeSpawnOrder@@UBEXXZ");
    todo("implement");
}

void DeSpawnOrder::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x695141
{
    mangled_assert("?Serialize@DeSpawnOrder@@UBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

LayMinesOrder::LayMinesOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x690604
{
    mangled_assert("??0LayMinesOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

void LayMinesOrder::Execute() const // 0x692E0F
{
    mangled_assert("?Execute@LayMinesOrder@@UBEXXZ");
    todo("implement");
}

void LayMinesOrder::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x69520F
{
    mangled_assert("?Serialize@LayMinesOrder@@UBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

SetRallyPointOrder::SetRallyPointOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x691004
{
    mangled_assert("??0SetRallyPointOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

void SetRallyPointOrder::Execute() const // 0x693D85
{
    mangled_assert("?Execute@SetRallyPointOrder@@UBEXXZ");
    todo("implement");
}

void SetRallyPointOrder::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x6954DC
{
    mangled_assert("?Serialize@SetRallyPointOrder@@UBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

ChatOrder::ChatOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x69007A
{
    mangled_assert("??0ChatOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

void ChatOrder::Execute() const // 0x6927AA
{
    mangled_assert("?Execute@ChatOrder@@UBEXXZ");
    todo("implement");
}

void ChatOrder::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x6950F1
{
    mangled_assert("?Serialize@ChatOrder@@UBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

void ChatOrder::MakePrivateCopy() // 0x694DE1
{
    mangled_assert("?MakePrivateCopy@ChatOrder@@QAEXXZ");
    todo("implement");
}

SurrenderOrder::SurrenderOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x6913B0
{
    mangled_assert("??0SurrenderOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

void SurrenderOrder::Execute() const // 0x693E27
{
    mangled_assert("?Execute@SurrenderOrder@@UBEXXZ");
    todo("implement");
}

DropPlayerOrder::DropPlayerOrder(unsigned __int32) // 0x690282
{
    mangled_assert("??0DropPlayerOrder@@QAE@I@Z");
    todo("implement");
}

DropPlayerOrder::DropPlayerOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x69023D
{
    mangled_assert("??0DropPlayerOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

void DropPlayerOrder::Execute() const // 0x6928F3
{
    mangled_assert("?Execute@DropPlayerOrder@@UBEXXZ");
    todo("implement");
}

void DropPlayerOrder::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x69515B
{
    mangled_assert("?Serialize@DropPlayerOrder@@UBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
}

void sendMoveOrder(SquadronList const &squadronList, vector3 const &destination, vector3 const &origin, unsigned __int32 playerIndex, bool moveAttack, bool splitStrikeGroups) // 0x696B84
{
    mangled_assert("?sendMoveOrder@@YGXABVSquadronList@@ABVvector3@@1I_N2@Z");
    todo("implement");
}

void sendMoveToSobOrder(SquadronList const &squadronList, SobID const &shipID, vector3 const &offsetInWorldSpace, vector3 const &origin, unsigned __int32 playerIndex, bool splitStrikeGroups) // 0x696C06
{
    mangled_assert("?sendMoveToSobOrder@@YGXABVSquadronList@@ABVSobID@@ABVvector3@@2I_N@Z");
    todo("implement");
}

void sendHaltOrder(SquadronList const &squadronList, unsigned __int32 playerIndex, bool splitStrikeGroups) // 0x6967A6
{
    mangled_assert("?sendHaltOrder@@YGXABVSquadronList@@I_N@Z");
    todo("implement");
}

void sendResearchOrder(unsigned __int32 researchId, unsigned __int32 playerIndex) // 0x697298
{
    mangled_assert("?sendResearchOrder@@YGXII@Z");
    todo("implement");
}

void sendCancelResearchOrder(unsigned __int32 researchId, unsigned __int32 playerIndex) // 0x6962BC
{
    mangled_assert("?sendCancelResearchOrder@@YGXII@Z");
    todo("implement");
}

void sendMoveToTopOfResearchQueue(unsigned __int32 playerIndex, unsigned __int32 researchId) // 0x696D2A
{
    mangled_assert("?sendMoveToTopOfResearchQueue@@YGXII@Z");
    todo("implement");
}

void sendPauseResearchOrder(unsigned __int32 playerIndex) // 0x69708E
{
    mangled_assert("?sendPauseResearchOrder@@YGXI@Z");
    todo("implement");
}

void sendToggleAutoLaunchOrder(SobID const &shipID, unsigned __int32 playerIndex) // 0x6977FF
{
    mangled_assert("?sendToggleAutoLaunchOrder@@YGXABVSobID@@I@Z");
    todo("implement");
}

void sendBuildOrder(SobID const &builder, unsigned __int32 playerIndex, unsigned __int32 unitIdToBuild, SobID const &subsystemToRetire) // 0x696111
{
    mangled_assert("?sendBuildOrder@@YGXABVSobID@@II0@Z");
    todo("implement");
}

void sendCancelBuildOrder(SobID const &builder, unsigned __int32 playerIndex, unsigned __int32 buildJobId) // 0x6961D6
{
    mangled_assert("?sendCancelBuildOrder@@YGXABVSobID@@II@Z");
    todo("implement");
}

void sendMoveToTopOfBuildQueue(SobID const &builder, unsigned __int32 playerIndex, unsigned __int32 buildJobID) // 0x696C88
{
    mangled_assert("?sendMoveToTopOfBuildQueue@@YGXABVSobID@@II@Z");
    todo("implement");
}

void sendPauseQueueOrder(SobID const &builder, unsigned __int32 playerIndex, BuildType queueToPause) // 0x696FF3
{
    mangled_assert("?sendPauseQueueOrder@@YGXABVSobID@@IW4BuildType@@@Z");
    todo("implement");
}

void sendMoveWaypointOrder(SquadronList const &squadList, vector3 const &joinPosition, std::vector<vector3,std::allocator<vector3> > &path, __int32 firstPointIndex, bool forward, unsigned __int32 playerIndex, bool loop, bool splitStrikeGroups) // 0x696E4A
{
    mangled_assert("?sendMoveWaypointOrder@@YGXABVSquadronList@@ABVvector3@@AAV?$vector@Vvector3@@V?$allocator@Vvector3@@@std@@@std@@H_NI33@Z");
    todo("implement");
}

void sendMoveWaypointOrder(SquadronList const &squadList, std::vector<vector3,std::allocator<vector3> > &path, SobID const &finalTarget, unsigned __int32 playerIndex, bool splitStrikeGroups) // 0x696DCB
{
    mangled_assert("?sendMoveWaypointOrder@@YGXABVSquadronList@@AAV?$vector@Vvector3@@V?$allocator@Vvector3@@@std@@@std@@ABVSobID@@I_N@Z");
    todo("implement");
}

void sendAttackOrder(SquadronList const &squadList, Selection const &targets_, bool specialWeaponsAttack, unsigned __int32 playerIndex, bool splitStrikeGroups) // 0x696066
{
    mangled_assert("?sendAttackOrder@@YGXABVSquadronList@@ABVSelection@@_NI2@Z");
    todo("implement");
}

void sendResourceOrder(SquadronList const &squadronList, Selection const &resources_, unsigned __int32 playerIndex, bool splitStrikeGroups) // 0x69733E
{
    mangled_assert("?sendResourceOrder@@YGXABVSquadronList@@ABVSelection@@I_N@Z");
    todo("implement");
}

void sendDockOrder(SquadronList const &squadronList, SobID const &shipdockWithID, unsigned __int32 playerIndex, bool splitStrikeGroups) // 0x696535
{
    mangled_assert("?sendDockOrder@@YGXABVSquadronList@@ABVSobID@@I_N@Z");
    todo("implement");
}

void sendRetireOrder(SquadronList const &squadronList, unsigned __int32 playerIndex) // 0x6973DC
{
    mangled_assert("?sendRetireOrder@@YGXABVSquadronList@@I@Z");
    todo("implement");
}

void sendRetireSubSystemsOrder(Selection const &subsystems_, unsigned __int32 playerIndex) // 0x697459
{
    mangled_assert("?sendRetireSubSystemsOrder@@YGXABVSelection@@I@Z");
    todo("implement");
}

void sendLaunchOrder(SquadronList const &squadronList, SobID const &shiplaunchFromID, unsigned __int32 playerIndex, bool bFromLauncherShipHold, bool splitStrikeGroups) // 0x69699E
{
    mangled_assert("?sendLaunchOrder@@YGXABVSquadronList@@ABVSobID@@I_N2@Z");
    todo("implement");
}

void sendParadeOrder(SquadronList const &squadronList, SobID const &paradeWith, unsigned __int32 playerIndex, bool splitStrikeGroups) // 0x696F77
{
    mangled_assert("?sendParadeOrder@@YGXABVSquadronList@@ABVSobID@@I_N@Z");
    todo("implement");
}

void sendPauseUniverse(bool pause, unsigned __int32 playerIndex) // 0x697120
{
    mangled_assert("?sendPauseUniverse@@YGX_NI@Z");
    todo("implement");
}

void sendFormStrikeGroup(SquadronList const &squadronList, unsigned __int32 strikeID, unsigned __int32 playerIndex) // 0x69668C
{
    mangled_assert("?sendFormStrikeGroup@@YGXABVSquadronList@@II@Z");
    todo("implement");
}

void sendAddToStrikeGroup(SquadronList const &squadronList, unsigned __int32 strikeGroupId, unsigned __int32 playerIndex) // 0x695EEE
{
    mangled_assert("?sendAddToStrikeGroup@@YGXABVSquadronList@@II@Z");
    todo("implement");
}

void sendAlliance(AllianceOrderAction action, unsigned __int32 playerIndex, unsigned __int32 ally) // 0x695F64
{
    mangled_assert("?sendAlliance@@YGXW4AllianceOrderAction@@II@Z");
    todo("implement");
}

void sendAllianceTransfer(unsigned __int32 playerIndex, unsigned __int32 ally, __int32 ru, SquadronList const *squadronList) // 0x695FCF
{
    mangled_assert("?sendAllianceTransfer@@YGXIIHPBVSquadronList@@@Z");
    todo("implement");
}

void sendSetTactics(SquadronList const &squadronList, SquadronTactics tactics, unsigned __int32 playerIndex) // 0x6976E3
{
    mangled_assert("?sendSetTactics@@YGXABVSquadronList@@W4SquadronTactics@@I@Z");
    todo("implement");
}

void sendGuardOrder(SquadronList const &squadronList, Selection const &targets_, unsigned __int32 playerIndex, bool splitStrikeGroups) // 0x696702
{
    mangled_assert("?sendGuardOrder@@YGXABVSquadronList@@ABVSelection@@I_N@Z");
    todo("implement");
}

void sendCaptureOrder(SquadronList const &squadronList, SobID const &targetShipID, unsigned __int32 playerIndex, bool splitStrikeGroups) // 0x69635D
{
    mangled_assert("?sendCaptureOrder@@YGXABVSquadronList@@ABVSobID@@I_N@Z");
    todo("implement");
}

void sendHyperspaceOrder(SquadronList const &squadronList, vector3 const &destination, vector3 const &origin, bool offMap, unsigned __int32 playerIndex, bool splitStrikeGroups) // 0x696829
{
    mangled_assert("?sendHyperspaceOrder@@YGXABVSquadronList@@ABVvector3@@1_NI2@Z");
    todo("implement");
}

void sendOrderScuttle(Selection const &targets_, unsigned __int32 playerIndex) // 0x696ED2
{
    mangled_assert("?sendOrderScuttle@@YGXABVSelection@@I@Z");
    todo("implement");
}

void sendFormHyperspaceGateOrder(SquadronList const &squadronList, SobID const &targetGate, unsigned __int32 playerIndex) // 0x696616
{
    mangled_assert("?sendFormHyperspaceGateOrder@@YGXABVSquadronList@@ABVSobID@@I@Z");
    todo("implement");
}

void sendHyperspaceViaGateOrder(SquadronList const &squadronList, SobID const &gate, unsigned __int32 playerIndex) // 0x6968AB
{
    mangled_assert("?sendHyperspaceViaGateOrder@@YGXABVSquadronList@@ABVSobID@@I@Z");
    todo("implement");
}

void sendSensorPingOrder(SquadronList const &squadronList, unsigned __int32 playerIndex) // 0x69757A
{
    mangled_assert("?sendSensorPingOrder@@YGXABVSquadronList@@I@Z");
    todo("implement");
}

void sendRepairOrder(SquadronList const &squadronList, Selection const &targets_, unsigned __int32 playerIndex, bool splitStrikeGroups) // 0x6971F4
{
    mangled_assert("?sendRepairOrder@@YGXABVSquadronList@@ABVSelection@@I_N@Z");
    todo("implement");
}

void sendCloakOrder(SquadronList const &squadronList, bool enable, unsigned __int32 playerIndex) // 0x696449
{
    mangled_assert("?sendCloakOrder@@YGXABVSquadronList@@_NI@Z");
    todo("implement");
}

void sendDefenseFieldOrder(SquadronList const &squadronList, bool enable, unsigned __int32 playerIndex) // 0x6964BF
{
    mangled_assert("?sendDefenseFieldOrder@@YGXABVSquadronList@@_NI@Z");
    todo("implement");
}

void sendSetRallyPointOrder(SquadronList const &squadronList, unsigned __int32 playerIndex, vector3 const &rallyPoint) // 0x69766D
{
    mangled_assert("?sendSetRallyPointOrder@@YGXABVSquadronList@@IABVvector3@@@Z");
    todo("implement");
}

void sendSetRallyPointOrder(SquadronList const &squadronList, unsigned __int32 playerIndex, SobID const &rallyObject) // 0x6975F7
{
    mangled_assert("?sendSetRallyPointOrder@@YGXABVSquadronList@@IABVSobID@@@Z");
    todo("implement");
}

void sendLayMinesOrder(SquadronList const &squadronList, vector3 const &centre, vector3 const &front, vector3 const &corner, unsigned __int32 playerIndex) // 0x696A8B
{
    mangled_assert("?sendLayMinesOrder@@YGXABVSquadronList@@ABVvector3@@11I@Z");
    todo("implement");
}

void sendKamikazeOrder(SquadronList const &squadronList, unsigned __int32 playerIndex) // 0x696921
{
    mangled_assert("?sendKamikazeOrder@@YGXABVSquadronList@@I@Z");
    todo("implement");
}

void sendChatOrder(GameMsg_Chat const &message) // 0x6963D9
{
    mangled_assert("?sendChatOrder@@YGXABUGameMsg_Chat@@@Z");
    todo("implement");
}

void sendSalvageOrder(SquadronList const &squadronList, SobID const &target, unsigned __int32 playerIndex, bool splitStrikeGroups) // 0x6974FE
{
    mangled_assert("?sendSalvageOrder@@YGXABVSquadronList@@ABVSobID@@I_N@Z");
    todo("implement");
}

void sendLeaveStrikeGroup(SquadronList const &squadronList, unsigned __int32 playerIndex) // 0x696B07
{
    mangled_assert("?sendLeaveStrikeGroup@@YGXABVSquadronList@@I@Z");
    todo("implement");
}

void sendSurrenderOrder() // 0x697770
{
    mangled_assert("?sendSurrenderOrder@@YGXXZ");
    todo("implement");
}

bool ValidateSquadronList(SquadronList const &m_squadronList, unsigned __int32 player) // 0x6956B0
{
    mangled_assert("?ValidateSquadronList@@YG_NABVSquadronList@@I@Z");
    todo("implement");
}

bool ValidateSelection(Selection const &m_selection, unsigned __int32 player) // 0x695609
{
    mangled_assert("?ValidateSelection@@YG_NABVSelection@@I@Z");
    todo("implement");
}

void sendDropPlayer(unsigned __int32 networkID) // 0x6965B1
{
    mangled_assert("?sendDropPlayer@@YGXI@Z");
    todo("implement");
}

/* ---------- private code */

_static void getCoordSys(vector3 const &point, vector3 const &previous, matrix3 &coordSysOut) // 0x695CAA
{
    mangled_assert("getCoordSys");
    todo("implement");
}
#endif
