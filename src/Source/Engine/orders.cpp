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

_extern std::auto_ptr<Order> _sub_693F1A(std::basic_istream<char,std::char_traits<char> > &);
std::auto_ptr<Order> ExtractOrder(std::basic_istream<char,std::char_traits<char> > &in) // 0x693F1A
{
    mangled_assert("?ExtractOrder@@YG?AV?$auto_ptr@VOrder@@@std@@AAV?$basic_istream@DU?$char_traits@D@std@@@2@@Z");
    todo("implement");
    std::auto_ptr<Order> __result = _sub_693F1A(in);
    return __result;
}

_extern _sub_690AED(Order *const, std::basic_istream<char,std::char_traits<char> > &);
Order::Order(std::basic_istream<char,std::char_traits<char> > &) // 0x690AED
{
    mangled_assert("??0Order@@IAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_690AED(this, arg);
}

_extern void _sub_6953E8(Order const *const, std::basic_ostream<char,std::char_traits<char> > &);
void Order::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x6953E8
{
    mangled_assert("?Serialize@Order@@UBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_6953E8(this, arg);
}

_extern _sub_690CEF(ResearchOrderBase *const, std::basic_istream<char,std::char_traits<char> > &);
ResearchOrderBase::ResearchOrderBase(std::basic_istream<char,std::char_traits<char> > &) // 0x690CEF
{
    mangled_assert("??0ResearchOrderBase@@IAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_690CEF(this, arg);
}

_extern void _sub_695450(ResearchOrderBase const *const, std::basic_ostream<char,std::char_traits<char> > &);
void ResearchOrderBase::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x695450
{
    mangled_assert("?Serialize@ResearchOrderBase@@MBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_695450(this, arg);
}

_extern _sub_691306(SquadronListOrderBase *const, std::basic_istream<char,std::char_traits<char> > &);
SquadronListOrderBase::SquadronListOrderBase(std::basic_istream<char,std::char_traits<char> > &) // 0x691306
{
    mangled_assert("??0SquadronListOrderBase@@IAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_691306(this, arg);
}

_extern void _sub_69558A(SquadronListOrderBase const *const, std::basic_ostream<char,std::char_traits<char> > &);
void SquadronListOrderBase::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x69558A
{
    mangled_assert("?Serialize@SquadronListOrderBase@@MBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_69558A(this, arg);
}

_extern _sub_690F38(SelectionOrderBase *const, std::basic_istream<char,std::char_traits<char> > &);
SelectionOrderBase::SelectionOrderBase(std::basic_istream<char,std::char_traits<char> > &) // 0x690F38
{
    mangled_assert("??0SelectionOrderBase@@IAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_690F38(this, arg);
}

_extern void _sub_6954BF(SelectionOrderBase const *const, std::basic_ostream<char,std::char_traits<char> > &);
void SelectionOrderBase::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x6954BF
{
    mangled_assert("?Serialize@SelectionOrderBase@@MBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_6954BF(this, arg);
}

_extern _sub_69118C(SobOrderBase *const, std::basic_istream<char,std::char_traits<char> > &);
SobOrderBase::SobOrderBase(std::basic_istream<char,std::char_traits<char> > &) // 0x69118C
{
    mangled_assert("??0SobOrderBase@@IAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_69118C(this, arg);
}

_extern _sub_6911DB(SquadInfo *const);
_inline SquadInfo::SquadInfo() // 0x6911DB
{
    mangled_assert("??0SquadInfo@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6911DB(this);
}

_extern void _sub_695529(SobOrderBase const *const, std::basic_ostream<char,std::char_traits<char> > &);
void SobOrderBase::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x695529
{
    mangled_assert("?Serialize@SobOrderBase@@MBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_695529(this, arg);
}

_extern _sub_691272(SquadronList2SobBase *const, std::basic_istream<char,std::char_traits<char> > &);
SquadronList2SobBase::SquadronList2SobBase(std::basic_istream<char,std::char_traits<char> > &) // 0x691272
{
    mangled_assert("??0SquadronList2SobBase@@IAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_691272(this, arg);
}

_extern void _sub_695568(SquadronList2SobBase const *const, std::basic_ostream<char,std::char_traits<char> > &);
void SquadronList2SobBase::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x695568
{
    mangled_assert("?Serialize@SquadronList2SobBase@@MBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_695568(this, arg);
}

_extern _sub_690EE9(Selection2SobBase *const, std::basic_istream<char,std::char_traits<char> > &);
Selection2SobBase::Selection2SobBase(std::basic_istream<char,std::char_traits<char> > &) // 0x690EE9
{
    mangled_assert("??0Selection2SobBase@@IAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_690EE9(this, arg);
}

_extern void _sub_69549D(Selection2SobBase const *const, std::basic_ostream<char,std::char_traits<char> > &);
void Selection2SobBase::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x69549D
{
    mangled_assert("?Serialize@Selection2SobBase@@MBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_69549D(this, arg);
}

_extern _sub_6911DE(SquadronList2SelectionBase *const, std::basic_istream<char,std::char_traits<char> > &);
SquadronList2SelectionBase::SquadronList2SelectionBase(std::basic_istream<char,std::char_traits<char> > &) // 0x6911DE
{
    mangled_assert("??0SquadronList2SelectionBase@@IAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_6911DE(this, arg);
}

_extern void _sub_69554B(SquadronList2SelectionBase const *const, std::basic_ostream<char,std::char_traits<char> > &);
void SquadronList2SelectionBase::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x69554B
{
    mangled_assert("?Serialize@SquadronList2SelectionBase@@MBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_69554B(this, arg);
}

_extern _sub_690E9A(Selection2SelectionBase *const, std::basic_istream<char,std::char_traits<char> > &);
Selection2SelectionBase::Selection2SelectionBase(std::basic_istream<char,std::char_traits<char> > &) // 0x690E9A
{
    mangled_assert("??0Selection2SelectionBase@@IAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_690E9A(this, arg);
}

_extern void _sub_695480(Selection2SelectionBase const *const, std::basic_ostream<char,std::char_traits<char> > &);
void Selection2SelectionBase::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x695480
{
    mangled_assert("?Serialize@Selection2SelectionBase@@MBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_695480(this, arg);
}

_extern void _sub_695BF8(std::vector<Squadron *,std::allocator<Squadron *> > const &, vector3 &);
void getAveragePositionDtrm(std::vector<Squadron *,std::allocator<Squadron *> > const &squadVect, vector3 &middle) // 0x695BF8
{
    mangled_assert("?getAveragePositionDtrm@@YGXABV?$vector@PAVSquadron@@V?$allocator@PAVSquadron@@@std@@@std@@AAVvector3@@@Z");
    todo("implement");
    _sub_695BF8(squadVect, middle);
}

_extern _sub_68FF00(AttackOrder *const, std::basic_istream<char,std::char_traits<char> > &);
AttackOrder::AttackOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x68FF00
{
    mangled_assert("??0AttackOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_68FF00(this, arg);
}

_extern void _sub_692584(AttackOrder const *const);
void AttackOrder::Execute() const // 0x692584
{
    mangled_assert("?Execute@AttackOrder@@UBEXXZ");
    todo("implement");
    _sub_692584(this);
}

_extern void _sub_695086(AttackOrder const *const, std::basic_ostream<char,std::char_traits<char> > &);
void AttackOrder::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x695086
{
    mangled_assert("?Serialize@AttackOrder@@UBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_695086(this, arg);
}

_extern void _sub_693AAC(ResourceOrder const *const);
void ResourceOrder::Execute() const // 0x693AAC
{
    mangled_assert("?Execute@ResourceOrder@@UBEXXZ");
    todo("implement");
    _sub_693AAC(this);
}

_extern void _sub_692A93(GuardOrder const *const);
void GuardOrder::Execute() const // 0x692A93
{
    mangled_assert("?Execute@GuardOrder@@UBEXXZ");
    todo("implement");
    _sub_692A93(this);
}

_extern void _sub_69396A(RepairOrder const *const);
void RepairOrder::Execute() const // 0x69396A
{
    mangled_assert("?Execute@RepairOrder@@UBEXXZ");
    todo("implement");
    _sub_69396A(this);
}

_extern void _sub_6928B4(DockOrder const *const);
void DockOrder::Execute() const // 0x6928B4
{
    mangled_assert("?Execute@DockOrder@@UBEXXZ");
    todo("implement");
    _sub_6928B4(this);
}

_extern void _sub_6938CA(ParadeOrder const *const);
void ParadeOrder::Execute() const // 0x6938CA
{
    mangled_assert("?Execute@ParadeOrder@@UBEXXZ");
    todo("implement");
    _sub_6938CA(this);
}

_extern void _sub_69276D(CaptureOrder const *const);
void CaptureOrder::Execute() const // 0x69276D
{
    mangled_assert("?Execute@CaptureOrder@@UBEXXZ");
    todo("implement");
    _sub_69276D(this);
}

_extern void _sub_693B9A(SalvageOrder const *const);
void SalvageOrder::Execute() const // 0x693B9A
{
    mangled_assert("?Execute@SalvageOrder@@UBEXXZ");
    todo("implement");
    _sub_693B9A(this);
}

_extern void _sub_692D6D(HyperspaceViaGateOrder const *const);
void HyperspaceViaGateOrder::Execute() const // 0x692D6D
{
    mangled_assert("?Execute@HyperspaceViaGateOrder@@UBEXXZ");
    todo("implement");
    _sub_692D6D(this);
}

_extern void _sub_693EB9(ToggleAutoLaunchOrder const *const);
void ToggleAutoLaunchOrder::Execute() const // 0x693EB9
{
    mangled_assert("?Execute@ToggleAutoLaunchOrder@@UBEXXZ");
    todo("implement");
    _sub_693EB9(this);
}

_extern void _sub_692BA7(HaltOrder const *const);
void HaltOrder::Execute() const // 0x692BA7
{
    mangled_assert("?Execute@HaltOrder@@UBEXXZ");
    todo("implement");
    _sub_692BA7(this);
}

_extern _sub_690311(FormStrikeGroupOrder *const, std::basic_istream<char,std::char_traits<char> > &);
FormStrikeGroupOrder::FormStrikeGroupOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x690311
{
    mangled_assert("??0FormStrikeGroupOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_690311(this, arg);
}

_extern _sub_69039B(GameMsg_Chat *const, GameMsg_Chat const &);
_inline GameMsg_Chat::GameMsg_Chat(GameMsg_Chat const &) // 0x69039B
{
    mangled_assert("??0GameMsg_Chat@@QAE@ABU0@@Z");
    compiler_generated();
    todo("implement");
    _sub_69039B(this, arg);
}

_extern void _sub_692978(FormStrikeGroupOrder const *const);
void FormStrikeGroupOrder::Execute() const // 0x692978
{
    mangled_assert("?Execute@FormStrikeGroupOrder@@UBEXXZ");
    todo("implement");
    _sub_692978(this);
}

_extern void _sub_695186(FormStrikeGroupOrder const *const, std::basic_ostream<char,std::char_traits<char> > &);
void FormStrikeGroupOrder::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x695186
{
    mangled_assert("?Serialize@FormStrikeGroupOrder@@UBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_695186(this, arg);
}

_extern _sub_68FD4C(AddToStrikeGroupOrder *const, std::basic_istream<char,std::char_traits<char> > &);
AddToStrikeGroupOrder::AddToStrikeGroupOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x68FD4C
{
    mangled_assert("??0AddToStrikeGroupOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_68FD4C(this, arg);
}

_extern void _sub_692504(AddToStrikeGroupOrder const *const);
void AddToStrikeGroupOrder::Execute() const // 0x692504
{
    mangled_assert("?Execute@AddToStrikeGroupOrder@@UBEXXZ");
    todo("implement");
    _sub_692504(this);
}

_extern void _sub_694FC6(AddToStrikeGroupOrder const *const, std::basic_ostream<char,std::char_traits<char> > &);
void AddToStrikeGroupOrder::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x694FC6
{
    mangled_assert("?Serialize@AddToStrikeGroupOrder@@UBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_694FC6(this, arg);
}

_extern void _sub_692FB6(LeaveStrikeGroupOrder const *const);
void LeaveStrikeGroupOrder::Execute() const // 0x692FB6
{
    mangled_assert("?Execute@LeaveStrikeGroupOrder@@UBEXXZ");
    todo("implement");
    _sub_692FB6(this);
}

_extern void _sub_693CAC(SensorPingOrder const *const);
void SensorPingOrder::Execute() const // 0x693CAC
{
    mangled_assert("?Execute@SensorPingOrder@@UBEXXZ");
    todo("implement");
    _sub_693CAC(this);
}

_extern void _sub_693BD7(ScuttleOrder const *const);
void ScuttleOrder::Execute() const // 0x693BD7
{
    mangled_assert("?Execute@ScuttleOrder@@UBEXXZ");
    todo("implement");
    _sub_693BD7(this);
}

_extern void _sub_693B18(RetireSubSystemsOrder const *const);
void RetireSubSystemsOrder::Execute() const // 0x693B18
{
    mangled_assert("?Execute@RetireSubSystemsOrder@@UBEXXZ");
    todo("implement");
    _sub_693B18(this);
}

_extern void _sub_693A7E(ResearchOrder const *const);
void ResearchOrder::Execute() const // 0x693A7E
{
    mangled_assert("?Execute@ResearchOrder@@UBEXXZ");
    todo("implement");
    _sub_693A7E(this);
}

_extern void _sub_692744(CancelResearchOrder const *const);
void CancelResearchOrder::Execute() const // 0x692744
{
    mangled_assert("?Execute@CancelResearchOrder@@UBEXXZ");
    todo("implement");
    _sub_692744(this);
}

_extern void _sub_693945(PauseResearchOrder const *const);
void PauseResearchOrder::Execute() const // 0x693945
{
    mangled_assert("?Execute@PauseResearchOrder@@UBEXXZ");
    todo("implement");
    _sub_693945(this);
}

_extern _sub_6906E0(MoveOrder *const, std::basic_istream<char,std::char_traits<char> > &);
MoveOrder::MoveOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x6906E0
{
    mangled_assert("??0MoveOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_6906E0(this, arg);
}

_extern void _sub_6948E8(SquadronList const &, vector3 const &, vector3 const &, vector3 const &, std::vector<SquadInfo,std::allocator<SquadInfo> > &, DestinationFormation::Spacing);
void GenerateSquadDestinations(SquadronList const &squadronlist, vector3 const &origin, vector3 const &destination, vector3 const &forward, std::vector<SquadInfo,std::allocator<SquadInfo> > &info, DestinationFormation::Spacing spacing) // 0x6948E8
{
    mangled_assert("?GenerateSquadDestinations@@YGXABVSquadronList@@ABVvector3@@11AAV?$vector@USquadInfo@@V?$allocator@USquadInfo@@@std@@@std@@W4Spacing@DestinationFormation@@@Z");
    todo("implement");
    _sub_6948E8(squadronlist, origin, destination, forward, info, spacing);
}

_extern void _sub_693066(MoveOrder const *const);
void MoveOrder::Execute() const // 0x693066
{
    mangled_assert("?Execute@MoveOrder@@UBEXXZ");
    todo("implement");
    _sub_693066(this);
}

_extern void _sub_694812(MoveOrder const *const, vector3 &, std::vector<SquadInfo,std::allocator<SquadInfo> > &);
void MoveOrder::GenerateDestinations(vector3 &, std::vector<SquadInfo,std::allocator<SquadInfo> > &) const // 0x694812
{
    mangled_assert("?GenerateDestinations@MoveOrder@@QBEXAAVvector3@@AAV?$vector@USquadInfo@@V?$allocator@USquadInfo@@@std@@@std@@@Z");
    todo("implement");
    _sub_694812(this, arg, arg);
}

_extern void _sub_695255(MoveOrder const *const, std::basic_ostream<char,std::char_traits<char> > &);
void MoveOrder::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x695255
{
    mangled_assert("?Serialize@MoveOrder@@UBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_695255(this, arg);
}

_extern _sub_69086F(MoveToSobOrder *const, std::basic_istream<char,std::char_traits<char> > &);
MoveToSobOrder::MoveToSobOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x69086F
{
    mangled_assert("??0MoveToSobOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_69086F(this, arg);
}

_extern void _sub_6935BF(MoveToSobOrder const *const);
void MoveToSobOrder::Execute() const // 0x6935BF
{
    mangled_assert("?Execute@MoveToSobOrder@@UBEXXZ");
    todo("implement");
    _sub_6935BF(this);
}

_extern void _sub_6952F4(MoveToSobOrder const *const, std::basic_ostream<char,std::char_traits<char> > &);
void MoveToSobOrder::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x6952F4
{
    mangled_assert("?Serialize@MoveToSobOrder@@UBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_6952F4(this, arg);
}

_extern _sub_68FF95(BuildOrder *const, std::basic_istream<char,std::char_traits<char> > &);
BuildOrder::BuildOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x68FF95
{
    mangled_assert("??0BuildOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_68FF95(this, arg);
}

_extern void _sub_6926D1(BuildOrder const *const);
void BuildOrder::Execute() const // 0x6926D1
{
    mangled_assert("?Execute@BuildOrder@@UBEXXZ");
    todo("implement");
    _sub_6926D1(this);
}

_extern void _sub_6950A5(BuildOrder const *const, std::basic_ostream<char,std::char_traits<char> > &);
void BuildOrder::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x6950A5
{
    mangled_assert("?Serialize@BuildOrder@@UBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_6950A5(this, arg);
}

_extern _sub_690BD2(PauseQueueOrder *const, std::basic_istream<char,std::char_traits<char> > &);
PauseQueueOrder::PauseQueueOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x690BD2
{
    mangled_assert("??0PauseQueueOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_690BD2(this, arg);
}

_extern void _sub_69391E(PauseQueueOrder const *const);
void PauseQueueOrder::Execute() const // 0x69391E
{
    mangled_assert("?Execute@PauseQueueOrder@@UBEXXZ");
    todo("implement");
    _sub_69391E(this);
}

_extern void _sub_695425(PauseQueueOrder const *const, std::basic_ostream<char,std::char_traits<char> > &);
void PauseQueueOrder::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x695425
{
    mangled_assert("?Serialize@PauseQueueOrder@@UBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_695425(this, arg);
}

_extern _sub_690925(MoveToTopOfBuildQueue *const, std::basic_istream<char,std::char_traits<char> > &);
MoveToTopOfBuildQueue::MoveToTopOfBuildQueue(std::basic_istream<char,std::char_traits<char> > &) // 0x690925
{
    mangled_assert("??0MoveToTopOfBuildQueue@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_690925(this, arg);
}

_extern void _sub_6937F6(MoveToTopOfBuildQueue const *const);
void MoveToTopOfBuildQueue::Execute() const // 0x6937F6
{
    mangled_assert("?Execute@MoveToTopOfBuildQueue@@UBEXXZ");
    todo("implement");
    _sub_6937F6(this);
}

_extern void _sub_695328(MoveToTopOfBuildQueue const *const, std::basic_ostream<char,std::char_traits<char> > &);
void MoveToTopOfBuildQueue::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x695328
{
    mangled_assert("?Serialize@MoveToTopOfBuildQueue@@UBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_695328(this, arg);
}

_extern _sub_69098A(MoveToTopOfResearchQueue *const, std::basic_istream<char,std::char_traits<char> > &);
MoveToTopOfResearchQueue::MoveToTopOfResearchQueue(std::basic_istream<char,std::char_traits<char> > &) // 0x69098A
{
    mangled_assert("??0MoveToTopOfResearchQueue@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_69098A(this, arg);
}

_extern void _sub_69381A(MoveToTopOfResearchQueue const *const);
void MoveToTopOfResearchQueue::Execute() const // 0x69381A
{
    mangled_assert("?Execute@MoveToTopOfResearchQueue@@UBEXXZ");
    todo("implement");
    _sub_69381A(this);
}

_extern void _sub_695344(MoveToTopOfResearchQueue const *const, std::basic_ostream<char,std::char_traits<char> > &);
void MoveToTopOfResearchQueue::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x695344
{
    mangled_assert("?Serialize@MoveToTopOfResearchQueue@@UBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_695344(this, arg);
}

_extern _sub_6909C3(MoveWaypointOrder *const, std::basic_istream<char,std::char_traits<char> > &);
MoveWaypointOrder::MoveWaypointOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x6909C3
{
    mangled_assert("??0MoveWaypointOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_6909C3(this, arg);
}

_extern void _sub_693843(MoveWaypointOrder const *const);
void MoveWaypointOrder::Execute() const // 0x693843
{
    mangled_assert("?Execute@MoveWaypointOrder@@UBEXXZ");
    todo("implement");
    _sub_693843(this);
}

_extern void _sub_695349(MoveWaypointOrder const *const, std::basic_ostream<char,std::char_traits<char> > &);
void MoveWaypointOrder::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x695349
{
    mangled_assert("?Serialize@MoveWaypointOrder@@UBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_695349(this, arg);
}

_extern _sub_69077D(MoveTempWaypointOrder *const, std::basic_istream<char,std::char_traits<char> > &);
MoveTempWaypointOrder::MoveTempWaypointOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x69077D
{
    mangled_assert("??0MoveTempWaypointOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_69077D(this, arg);
}

_extern void _sub_69320D(MoveTempWaypointOrder const *const);
void MoveTempWaypointOrder::Execute() const // 0x69320D
{
    mangled_assert("?Execute@MoveTempWaypointOrder@@UBEXXZ");
    todo("implement");
    _sub_69320D(this);
}

_extern void _sub_695299(MoveTempWaypointOrder const *const, std::basic_ostream<char,std::char_traits<char> > &);
void MoveTempWaypointOrder::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x695299
{
    mangled_assert("?Serialize@MoveTempWaypointOrder@@UBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_695299(this, arg);
}

_extern _sub_690591(LaunchOrder *const, std::basic_istream<char,std::char_traits<char> > &);
LaunchOrder::LaunchOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x690591
{
    mangled_assert("??0LaunchOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_690591(this, arg);
}

_extern void _sub_692DD2(LaunchOrder const *const);
void LaunchOrder::Execute() const // 0x692DD2
{
    mangled_assert("?Execute@LaunchOrder@@UBEXXZ");
    todo("implement");
    _sub_692DD2(this);
}

_extern void _sub_6951FA(LaunchOrder const *const, std::basic_ostream<char,std::char_traits<char> > &);
void LaunchOrder::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x6951FA
{
    mangled_assert("?Serialize@LaunchOrder@@UBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_6951FA(this, arg);
}

_extern _sub_690BA0(PauseOrder *const, std::basic_istream<char,std::char_traits<char> > &);
PauseOrder::PauseOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x690BA0
{
    mangled_assert("??0PauseOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_690BA0(this, arg);
}

_extern void _sub_693909(PauseOrder const *const);
void PauseOrder::Execute() const // 0x693909
{
    mangled_assert("?Execute@PauseOrder@@UBEXXZ");
    todo("implement");
    _sub_693909(this);
}

_extern _sub_691418(UnpauseOrder *const, std::basic_istream<char,std::char_traits<char> > &);
UnpauseOrder::UnpauseOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x691418
{
    mangled_assert("??0UnpauseOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_691418(this, arg);
}

_extern void _sub_691487(std::_List_buy<std::list<vector3,std::allocator<vector3> >,std::allocator<std::list<vector3,std::allocator<vector3> > > > *const);
_inline std::_List_buy<std::list<vector3,std::allocator<vector3> >,std::allocator<std::list<vector3,std::allocator<vector3> > > >::~_List_buy<std::list<vector3,std::allocator<vector3> >,std::allocator<std::list<vector3,std::allocator<vector3> > > >() // 0x691487
{
    mangled_assert("??1?$_List_buy@V?$list@Vvector3@@V?$allocator@Vvector3@@@std@@@std@@V?$allocator@V?$list@Vvector3@@V?$allocator@Vvector3@@@std@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_691487(this);
}

_extern void _sub_6914AC(AddToStrikeGroupOrder *const);
_inline AddToStrikeGroupOrder::~AddToStrikeGroupOrder() // 0x6914AC
{
    mangled_assert("??1AddToStrikeGroupOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6914AC(this);
}

_extern void _sub_6914DC(AllianceOrder *const);
_inline AllianceOrder::~AllianceOrder() // 0x6914DC
{
    mangled_assert("??1AllianceOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6914DC(this);
}

_extern void _sub_6914E3(AllianceTransferOrder *const);
_inline AllianceTransferOrder::~AllianceTransferOrder() // 0x6914E3
{
    mangled_assert("??1AllianceTransferOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6914E3(this);
}

_extern void _sub_691513(AttackOrder *const);
_inline AttackOrder::~AttackOrder() // 0x691513
{
    mangled_assert("??1AttackOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_691513(this);
}

_extern void _sub_691518(CaptureOrder *const);
_inline CaptureOrder::~CaptureOrder() // 0x691518
{
    mangled_assert("??1CaptureOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_691518(this);
}

_extern void _sub_693EEF(UnpauseOrder const *const);
void UnpauseOrder::Execute() const // 0x693EEF
{
    mangled_assert("?Execute@UnpauseOrder@@UBEXXZ");
    todo("implement");
    _sub_693EEF(this);
}

_extern void _sub_69151D(ChatOrder *const);
_inline ChatOrder::~ChatOrder() // 0x69151D
{
    mangled_assert("??1ChatOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_69151D(this);
}

_extern void _sub_691534(CloakOrder *const);
_inline CloakOrder::~CloakOrder() // 0x691534
{
    mangled_assert("??1CloakOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_691534(this);
}

_extern void _sub_691564(DeSpawnOrder *const);
_inline DeSpawnOrder::~DeSpawnOrder() // 0x691564
{
    mangled_assert("??1DeSpawnOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_691564(this);
}

_extern void _sub_691594(DefenseFieldOrder *const);
_inline DefenseFieldOrder::~DefenseFieldOrder() // 0x691594
{
    mangled_assert("??1DefenseFieldOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_691594(this);
}

_extern void _sub_6915C4(DockOrder *const);
_inline DockOrder::~DockOrder() // 0x6915C4
{
    mangled_assert("??1DockOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6915C4(this);
}

_extern void _sub_6915C9(DropPlayerOrder *const);
_inline DropPlayerOrder::~DropPlayerOrder() // 0x6915C9
{
    mangled_assert("??1DropPlayerOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6915C9(this);
}

_extern void _sub_6915D0(FormHyperspaceGateOrder *const);
_inline FormHyperspaceGateOrder::~FormHyperspaceGateOrder() // 0x6915D0
{
    mangled_assert("??1FormHyperspaceGateOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6915D0(this);
}

_extern void _sub_6915D5(FormStrikeGroupOrder *const);
_inline FormStrikeGroupOrder::~FormStrikeGroupOrder() // 0x6915D5
{
    mangled_assert("??1FormStrikeGroupOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6915D5(this);
}

_extern void _sub_691605(GameEvent_StrikeGroupFormed *const);
_inline GameEvent_StrikeGroupFormed::~GameEvent_StrikeGroupFormed() // 0x691605
{
    mangled_assert("??1GameEvent_StrikeGroupFormed@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_691605(this);
}

_extern void _sub_69160C(GuardOrder *const);
_inline GuardOrder::~GuardOrder() // 0x69160C
{
    mangled_assert("??1GuardOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_69160C(this);
}

_extern void _sub_691611(HaltOrder *const);
_inline HaltOrder::~HaltOrder() // 0x691611
{
    mangled_assert("??1HaltOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_691611(this);
}

_extern void _sub_6955BC(UnpauseOrder const *const, std::basic_ostream<char,std::char_traits<char> > &);
void UnpauseOrder::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x6955BC
{
    mangled_assert("?Serialize@UnpauseOrder@@UBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_6955BC(this, arg);
}

_extern void _sub_691641(HyperspaceOrder *const);
_inline HyperspaceOrder::~HyperspaceOrder() // 0x691641
{
    mangled_assert("??1HyperspaceOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_691641(this);
}

_extern void _sub_691671(HyperspaceViaGateOrder *const);
_inline HyperspaceViaGateOrder::~HyperspaceViaGateOrder() // 0x691671
{
    mangled_assert("??1HyperspaceViaGateOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_691671(this);
}

_extern void _sub_691676(KamikazeOrder *const);
_inline KamikazeOrder::~KamikazeOrder() // 0x691676
{
    mangled_assert("??1KamikazeOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_691676(this);
}

_extern void _sub_6916A6(LaunchOrder *const);
_inline LaunchOrder::~LaunchOrder() // 0x6916A6
{
    mangled_assert("??1LaunchOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6916A6(this);
}

_extern void _sub_6916AB(LayMinesOrder *const);
_inline LayMinesOrder::~LayMinesOrder() // 0x6916AB
{
    mangled_assert("??1LayMinesOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6916AB(this);
}

_extern void _sub_6916DB(LeaveStrikeGroupOrder *const);
_inline LeaveStrikeGroupOrder::~LeaveStrikeGroupOrder() // 0x6916DB
{
    mangled_assert("??1LeaveStrikeGroupOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6916DB(this);
}

_extern void _sub_69170B(MoveOrder *const);
_inline MoveOrder::~MoveOrder() // 0x69170B
{
    mangled_assert("??1MoveOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_69170B(this);
}

_extern void _sub_69173B(MoveTempWaypointOrder *const);
_inline MoveTempWaypointOrder::~MoveTempWaypointOrder() // 0x69173B
{
    mangled_assert("??1MoveTempWaypointOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_69173B(this);
}

_extern void _sub_69174E(MoveToSobOrder *const);
_inline MoveToSobOrder::~MoveToSobOrder() // 0x69174E
{
    mangled_assert("??1MoveToSobOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_69174E(this);
}

_extern void _sub_691753(MoveToTopOfBuildQueue *const);
_inline MoveToTopOfBuildQueue::~MoveToTopOfBuildQueue() // 0x691753
{
    mangled_assert("??1MoveToTopOfBuildQueue@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_691753(this);
}

_extern void _sub_691787(MoveToTopOfResearchQueue *const);
_inline MoveToTopOfResearchQueue::~MoveToTopOfResearchQueue() // 0x691787
{
    mangled_assert("??1MoveToTopOfResearchQueue@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_691787(this);
}

_extern void _sub_69178E(MoveWaypointOrder *const);
_inline MoveWaypointOrder::~MoveWaypointOrder() // 0x69178E
{
    mangled_assert("??1MoveWaypointOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_69178E(this);
}

_extern void _sub_6917C6(ParadeOrder *const);
_inline ParadeOrder::~ParadeOrder() // 0x6917C6
{
    mangled_assert("??1ParadeOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6917C6(this);
}

_extern _sub_68FDB6(AllianceOrder *const, std::basic_istream<char,std::char_traits<char> > &);
AllianceOrder::AllianceOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x68FDB6
{
    mangled_assert("??0AllianceOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_68FDB6(this, arg);
}

_extern void _sub_6917CB(PauseOrder *const);
_inline PauseOrder::~PauseOrder() // 0x6917CB
{
    mangled_assert("??1PauseOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6917CB(this);
}

_extern void _sub_6917D2(PauseQueueOrder *const);
_inline PauseQueueOrder::~PauseQueueOrder() // 0x6917D2
{
    mangled_assert("??1PauseQueueOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6917D2(this);
}

_extern void _sub_691806(PauseResearchOrder *const);
_inline PauseResearchOrder::~PauseResearchOrder() // 0x691806
{
    mangled_assert("??1PauseResearchOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_691806(this);
}

_extern void _sub_69180D(RepairOrder *const);
_inline RepairOrder::~RepairOrder() // 0x69180D
{
    mangled_assert("??1RepairOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_69180D(this);
}

_extern void _sub_691812(ResourceOrder *const);
_inline ResourceOrder::~ResourceOrder() // 0x691812
{
    mangled_assert("??1ResourceOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_691812(this);
}

_extern void _sub_691817(RetireOrder *const);
_inline RetireOrder::~RetireOrder() // 0x691817
{
    mangled_assert("??1RetireOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_691817(this);
}

_extern void _sub_691847(RetireSubSystemsOrder *const);
_inline RetireSubSystemsOrder::~RetireSubSystemsOrder() // 0x691847
{
    mangled_assert("??1RetireSubSystemsOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_691847(this);
}

_extern void _sub_691877(SalvageOrder *const);
_inline SalvageOrder::~SalvageOrder() // 0x691877
{
    mangled_assert("??1SalvageOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_691877(this);
}

_extern void _sub_69187C(ScuttleOrder *const);
_inline ScuttleOrder::~ScuttleOrder() // 0x69187C
{
    mangled_assert("??1ScuttleOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_69187C(this);
}

_extern void _sub_6918AC(Selection2SelectionBase *const);
_inline Selection2SelectionBase::~Selection2SelectionBase() // 0x6918AC
{
    mangled_assert("??1Selection2SelectionBase@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6918AC(this);
}

_extern void _sub_6918EB(Selection2SobBase *const);
_inline Selection2SobBase::~Selection2SobBase() // 0x6918EB
{
    mangled_assert("??1Selection2SobBase@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6918EB(this);
}

_extern void _sub_692542(AllianceOrder const *const);
void AllianceOrder::Execute() const // 0x692542
{
    mangled_assert("?Execute@AllianceOrder@@UBEXXZ");
    todo("implement");
    _sub_692542(this);
}

_extern void _sub_69192E(SelectionOrderBase *const);
_inline SelectionOrderBase::~SelectionOrderBase() // 0x69192E
{
    mangled_assert("??1SelectionOrderBase@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_69192E(this);
}

_extern void _sub_69195E(SensorPingOrder *const);
_inline SensorPingOrder::~SensorPingOrder() // 0x69195E
{
    mangled_assert("??1SensorPingOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_69195E(this);
}

_extern void _sub_69198E(SetRallyPointOrder *const);
_inline SetRallyPointOrder::~SetRallyPointOrder() // 0x69198E
{
    mangled_assert("??1SetRallyPointOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_69198E(this);
}

_extern void _sub_691993(SetTacticsOrder *const);
_inline SetTacticsOrder::~SetTacticsOrder() // 0x691993
{
    mangled_assert("??1SetTacticsOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_691993(this);
}

_extern void _sub_6919C3(SquadronList2SelectionBase *const);
_inline SquadronList2SelectionBase::~SquadronList2SelectionBase() // 0x6919C3
{
    mangled_assert("??1SquadronList2SelectionBase@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6919C3(this);
}

_extern void _sub_691A02(SquadronList2SobBase *const);
_inline SquadronList2SobBase::~SquadronList2SobBase() // 0x691A02
{
    mangled_assert("??1SquadronList2SobBase@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_691A02(this);
}

_extern void _sub_694FF1(AllianceOrder const *const, std::basic_ostream<char,std::char_traits<char> > &);
void AllianceOrder::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x694FF1
{
    mangled_assert("?Serialize@AllianceOrder@@UBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_694FF1(this, arg);
}

_extern void _sub_691A45(SquadronListOrderBase *const);
_inline SquadronListOrderBase::~SquadronListOrderBase() // 0x691A45
{
    mangled_assert("??1SquadronListOrderBase@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_691A45(this);
}

_extern void _sub_691A75(SurrenderOrder *const);
_inline SurrenderOrder::~SurrenderOrder() // 0x691A75
{
    mangled_assert("??1SurrenderOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_691A75(this);
}

_extern void _sub_691A7C(ToggleAutoLaunchOrder *const);
_inline ToggleAutoLaunchOrder::~ToggleAutoLaunchOrder() // 0x691A7C
{
    mangled_assert("??1ToggleAutoLaunchOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_691A7C(this);
}

_extern void _sub_691AB0(UnpauseOrder *const);
_inline UnpauseOrder::~UnpauseOrder() // 0x691AB0
{
    mangled_assert("??1UnpauseOrder@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_691AB0(this);
}

_extern _sub_68FE3B(AllianceTransferOrder *const, std::basic_istream<char,std::char_traits<char> > &);
AllianceTransferOrder::AllianceTransferOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x68FE3B
{
    mangled_assert("??0AllianceTransferOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_68FE3B(this, arg);
}

_extern void _sub_692562(AllianceTransferOrder const *const);
void AllianceTransferOrder::Execute() const // 0x692562
{
    mangled_assert("?Execute@AllianceTransferOrder@@UBEXXZ");
    todo("implement");
    _sub_692562(this);
}

_extern void _sub_695033(AllianceTransferOrder const *const, std::basic_ostream<char,std::char_traits<char> > &);
void AllianceTransferOrder::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x695033
{
    mangled_assert("?Serialize@AllianceTransferOrder@@UBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_695033(this, arg);
}

_extern _sub_69111B(SetTacticsOrder *const, std::basic_istream<char,std::char_traits<char> > &);
SetTacticsOrder::SetTacticsOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x69111B
{
    mangled_assert("??0SetTacticsOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_69111B(this, arg);
}

_extern void _sub_693E05(SetTacticsOrder const *const);
void SetTacticsOrder::Execute() const // 0x693E05
{
    mangled_assert("?Execute@SetTacticsOrder@@UBEXXZ");
    todo("implement");
    _sub_693E05(this);
}

_extern void _sub_6954FE(SetTacticsOrder const *const, std::basic_ostream<char,std::char_traits<char> > &);
void SetTacticsOrder::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x6954FE
{
    mangled_assert("?Serialize@SetTacticsOrder@@UBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_6954FE(this, arg);
}

_extern _sub_69045C(HyperspaceOrder *const, std::basic_istream<char,std::char_traits<char> > &);
HyperspaceOrder::HyperspaceOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x69045C
{
    mangled_assert("??0HyperspaceOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_69045C(this, arg);
}

_extern void _sub_692BDC(HyperspaceOrder const *const);
void HyperspaceOrder::Execute() const // 0x692BDC
{
    mangled_assert("?Execute@HyperspaceOrder@@UBEXXZ");
    todo("implement");
    _sub_692BDC(this);
}

_extern void _sub_6951B1(HyperspaceOrder const *const, std::basic_ostream<char,std::char_traits<char> > &);
void HyperspaceOrder::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x6951B1
{
    mangled_assert("?Serialize@HyperspaceOrder@@UBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_6951B1(this, arg);
}

_extern void _sub_69291F(FormHyperspaceGateOrder const *const);
void FormHyperspaceGateOrder::Execute() const // 0x69291F
{
    mangled_assert("?Execute@FormHyperspaceGateOrder@@UBEXXZ");
    todo("implement");
    _sub_69291F(this);
}

_extern _sub_690133(CloakOrder *const, std::basic_istream<char,std::char_traits<char> > &);
CloakOrder::CloakOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x690133
{
    mangled_assert("??0CloakOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_690133(this, arg);
}

_extern void _sub_6927BB(CloakOrder const *const);
void CloakOrder::Execute() const // 0x6927BB
{
    mangled_assert("?Execute@CloakOrder@@UBEXXZ");
    todo("implement");
    _sub_6927BB(this);
}

_extern void _sub_69512C(CloakOrder const *const, std::basic_ostream<char,std::char_traits<char> > &);
void CloakOrder::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x69512C
{
    mangled_assert("?Serialize@CloakOrder@@UBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_69512C(this, arg);
}

_extern _sub_690193(DefenseFieldOrder *const, std::basic_istream<char,std::char_traits<char> > &);
DefenseFieldOrder::DefenseFieldOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x690193
{
    mangled_assert("??0DefenseFieldOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_690193(this, arg);
}

_extern void _sub_69284F(DefenseFieldOrder const *const);
void DefenseFieldOrder::Execute() const // 0x69284F
{
    mangled_assert("?Execute@DefenseFieldOrder@@UBEXXZ");
    todo("implement");
    _sub_69284F(this);
}

_extern void _sub_695146(DefenseFieldOrder const *const, std::basic_ostream<char,std::char_traits<char> > &);
void DefenseFieldOrder::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x695146
{
    mangled_assert("?Serialize@DefenseFieldOrder@@UBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_695146(this, arg);
}

_extern _sub_690D96(RetireOrder *const, std::basic_istream<char,std::char_traits<char> > &);
RetireOrder::RetireOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x690D96
{
    mangled_assert("??0RetireOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_690D96(this, arg);
}

_extern void _sub_693AE9(RetireOrder const *const);
void RetireOrder::Execute() const // 0x693AE9
{
    mangled_assert("?Execute@RetireOrder@@UBEXXZ");
    todo("implement");
    _sub_693AE9(this);
}

_extern void _sub_69547B(RetireOrder const *const, std::basic_ostream<char,std::char_traits<char> > &);
void RetireOrder::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x69547B
{
    mangled_assert("?Serialize@RetireOrder@@UBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_69547B(this, arg);
}

_extern _sub_69055B(KamikazeOrder *const, std::basic_istream<char,std::char_traits<char> > &);
KamikazeOrder::KamikazeOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x69055B
{
    mangled_assert("??0KamikazeOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_69055B(this, arg);
}

_extern void _sub_692DAA(KamikazeOrder const *const);
void KamikazeOrder::Execute() const // 0x692DAA
{
    mangled_assert("?Execute@KamikazeOrder@@UBEXXZ");
    todo("implement");
    _sub_692DAA(this);
}

_extern void _sub_6951F5(KamikazeOrder const *const, std::basic_ostream<char,std::char_traits<char> > &);
void KamikazeOrder::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x6951F5
{
    mangled_assert("?Serialize@KamikazeOrder@@UBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_6951F5(this, arg);
}

_extern _sub_69017B(DeSpawnOrder *const, std::basic_istream<char,std::char_traits<char> > &);
DeSpawnOrder::DeSpawnOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x69017B
{
    mangled_assert("??0DeSpawnOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_69017B(this, arg);
}

_extern void _sub_692820(DeSpawnOrder const *const);
void DeSpawnOrder::Execute() const // 0x692820
{
    mangled_assert("?Execute@DeSpawnOrder@@UBEXXZ");
    todo("implement");
    _sub_692820(this);
}

_extern void _sub_695141(DeSpawnOrder const *const, std::basic_ostream<char,std::char_traits<char> > &);
void DeSpawnOrder::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x695141
{
    mangled_assert("?Serialize@DeSpawnOrder@@UBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_695141(this, arg);
}

_extern _sub_690604(LayMinesOrder *const, std::basic_istream<char,std::char_traits<char> > &);
LayMinesOrder::LayMinesOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x690604
{
    mangled_assert("??0LayMinesOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_690604(this, arg);
}

_extern void _sub_692E0F(LayMinesOrder const *const);
void LayMinesOrder::Execute() const // 0x692E0F
{
    mangled_assert("?Execute@LayMinesOrder@@UBEXXZ");
    todo("implement");
    _sub_692E0F(this);
}

_extern void _sub_69520F(LayMinesOrder const *const, std::basic_ostream<char,std::char_traits<char> > &);
void LayMinesOrder::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x69520F
{
    mangled_assert("?Serialize@LayMinesOrder@@UBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_69520F(this, arg);
}

_extern _sub_691004(SetRallyPointOrder *const, std::basic_istream<char,std::char_traits<char> > &);
SetRallyPointOrder::SetRallyPointOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x691004
{
    mangled_assert("??0SetRallyPointOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_691004(this, arg);
}

_extern void _sub_693D85(SetRallyPointOrder const *const);
void SetRallyPointOrder::Execute() const // 0x693D85
{
    mangled_assert("?Execute@SetRallyPointOrder@@UBEXXZ");
    todo("implement");
    _sub_693D85(this);
}

_extern void _sub_6954DC(SetRallyPointOrder const *const, std::basic_ostream<char,std::char_traits<char> > &);
void SetRallyPointOrder::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x6954DC
{
    mangled_assert("?Serialize@SetRallyPointOrder@@UBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_6954DC(this, arg);
}

_extern _sub_69007A(ChatOrder *const, std::basic_istream<char,std::char_traits<char> > &);
ChatOrder::ChatOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x69007A
{
    mangled_assert("??0ChatOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_69007A(this, arg);
}

_extern void _sub_6927AA(ChatOrder const *const);
void ChatOrder::Execute() const // 0x6927AA
{
    mangled_assert("?Execute@ChatOrder@@UBEXXZ");
    todo("implement");
    _sub_6927AA(this);
}

_extern void _sub_6950F1(ChatOrder const *const, std::basic_ostream<char,std::char_traits<char> > &);
void ChatOrder::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x6950F1
{
    mangled_assert("?Serialize@ChatOrder@@UBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_6950F1(this, arg);
}

_extern void _sub_694DE1(ChatOrder *const);
void ChatOrder::MakePrivateCopy() // 0x694DE1
{
    mangled_assert("?MakePrivateCopy@ChatOrder@@QAEXXZ");
    todo("implement");
    _sub_694DE1(this);
}

_extern _sub_6913B0(SurrenderOrder *const, std::basic_istream<char,std::char_traits<char> > &);
SurrenderOrder::SurrenderOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x6913B0
{
    mangled_assert("??0SurrenderOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_6913B0(this, arg);
}

_extern void _sub_693E27(SurrenderOrder const *const);
void SurrenderOrder::Execute() const // 0x693E27
{
    mangled_assert("?Execute@SurrenderOrder@@UBEXXZ");
    todo("implement");
    _sub_693E27(this);
}

_extern _sub_690282(DropPlayerOrder *const, unsigned __int32);
DropPlayerOrder::DropPlayerOrder(unsigned __int32) // 0x690282
{
    mangled_assert("??0DropPlayerOrder@@QAE@I@Z");
    todo("implement");
    _sub_690282(this, arg);
}

_extern _sub_69023D(DropPlayerOrder *const, std::basic_istream<char,std::char_traits<char> > &);
DropPlayerOrder::DropPlayerOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x69023D
{
    mangled_assert("??0DropPlayerOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_69023D(this, arg);
}

_extern void _sub_6928F3(DropPlayerOrder const *const);
void DropPlayerOrder::Execute() const // 0x6928F3
{
    mangled_assert("?Execute@DropPlayerOrder@@UBEXXZ");
    todo("implement");
    _sub_6928F3(this);
}

_extern void _sub_69515B(DropPlayerOrder const *const, std::basic_ostream<char,std::char_traits<char> > &);
void DropPlayerOrder::Serialize(std::basic_ostream<char,std::char_traits<char> > &) const // 0x69515B
{
    mangled_assert("?Serialize@DropPlayerOrder@@UBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_69515B(this, arg);
}

_extern void _sub_696B84(SquadronList const &, vector3 const &, vector3 const &, unsigned __int32, bool, bool);
void sendMoveOrder(SquadronList const &squadronList, vector3 const &destination, vector3 const &origin, unsigned __int32 playerIndex, bool moveAttack, bool splitStrikeGroups) // 0x696B84
{
    mangled_assert("?sendMoveOrder@@YGXABVSquadronList@@ABVvector3@@1I_N2@Z");
    todo("implement");
    _sub_696B84(squadronList, destination, origin, playerIndex, moveAttack, splitStrikeGroups);
}

_extern void _sub_696C06(SquadronList const &, SobID const &, vector3 const &, vector3 const &, unsigned __int32, bool);
void sendMoveToSobOrder(SquadronList const &squadronList, SobID const &shipID, vector3 const &offsetInWorldSpace, vector3 const &origin, unsigned __int32 playerIndex, bool splitStrikeGroups) // 0x696C06
{
    mangled_assert("?sendMoveToSobOrder@@YGXABVSquadronList@@ABVSobID@@ABVvector3@@2I_N@Z");
    todo("implement");
    _sub_696C06(squadronList, shipID, offsetInWorldSpace, origin, playerIndex, splitStrikeGroups);
}

_extern void _sub_6967A6(SquadronList const &, unsigned __int32, bool);
void sendHaltOrder(SquadronList const &squadronList, unsigned __int32 playerIndex, bool splitStrikeGroups) // 0x6967A6
{
    mangled_assert("?sendHaltOrder@@YGXABVSquadronList@@I_N@Z");
    todo("implement");
    _sub_6967A6(squadronList, playerIndex, splitStrikeGroups);
}

_extern void _sub_697298(unsigned __int32, unsigned __int32);
void sendResearchOrder(unsigned __int32 researchId, unsigned __int32 playerIndex) // 0x697298
{
    mangled_assert("?sendResearchOrder@@YGXII@Z");
    todo("implement");
    _sub_697298(researchId, playerIndex);
}

_extern void _sub_6962BC(unsigned __int32, unsigned __int32);
void sendCancelResearchOrder(unsigned __int32 researchId, unsigned __int32 playerIndex) // 0x6962BC
{
    mangled_assert("?sendCancelResearchOrder@@YGXII@Z");
    todo("implement");
    _sub_6962BC(researchId, playerIndex);
}

_extern void _sub_696D2A(unsigned __int32, unsigned __int32);
void sendMoveToTopOfResearchQueue(unsigned __int32 playerIndex, unsigned __int32 researchId) // 0x696D2A
{
    mangled_assert("?sendMoveToTopOfResearchQueue@@YGXII@Z");
    todo("implement");
    _sub_696D2A(playerIndex, researchId);
}

_extern void _sub_69708E(unsigned __int32);
void sendPauseResearchOrder(unsigned __int32 playerIndex) // 0x69708E
{
    mangled_assert("?sendPauseResearchOrder@@YGXI@Z");
    todo("implement");
    _sub_69708E(playerIndex);
}

_extern void _sub_6977FF(SobID const &, unsigned __int32);
void sendToggleAutoLaunchOrder(SobID const &shipID, unsigned __int32 playerIndex) // 0x6977FF
{
    mangled_assert("?sendToggleAutoLaunchOrder@@YGXABVSobID@@I@Z");
    todo("implement");
    _sub_6977FF(shipID, playerIndex);
}

_extern void _sub_696111(SobID const &, unsigned __int32, unsigned __int32, SobID const &);
void sendBuildOrder(SobID const &builder, unsigned __int32 playerIndex, unsigned __int32 unitIdToBuild, SobID const &subsystemToRetire) // 0x696111
{
    mangled_assert("?sendBuildOrder@@YGXABVSobID@@II0@Z");
    todo("implement");
    _sub_696111(builder, playerIndex, unitIdToBuild, subsystemToRetire);
}

_extern void _sub_6961D6(SobID const &, unsigned __int32, unsigned __int32);
void sendCancelBuildOrder(SobID const &builder, unsigned __int32 playerIndex, unsigned __int32 buildJobId) // 0x6961D6
{
    mangled_assert("?sendCancelBuildOrder@@YGXABVSobID@@II@Z");
    todo("implement");
    _sub_6961D6(builder, playerIndex, buildJobId);
}

_extern void _sub_696C88(SobID const &, unsigned __int32, unsigned __int32);
void sendMoveToTopOfBuildQueue(SobID const &builder, unsigned __int32 playerIndex, unsigned __int32 buildJobID) // 0x696C88
{
    mangled_assert("?sendMoveToTopOfBuildQueue@@YGXABVSobID@@II@Z");
    todo("implement");
    _sub_696C88(builder, playerIndex, buildJobID);
}

_extern void _sub_696FF3(SobID const &, unsigned __int32, BuildType);
void sendPauseQueueOrder(SobID const &builder, unsigned __int32 playerIndex, BuildType queueToPause) // 0x696FF3
{
    mangled_assert("?sendPauseQueueOrder@@YGXABVSobID@@IW4BuildType@@@Z");
    todo("implement");
    _sub_696FF3(builder, playerIndex, queueToPause);
}

_extern void _sub_696E4A(SquadronList const &, vector3 const &, std::vector<vector3,std::allocator<vector3> > &, __int32, bool, unsigned __int32, bool, bool);
void sendMoveWaypointOrder(SquadronList const &squadList, vector3 const &joinPosition, std::vector<vector3,std::allocator<vector3> > &path, __int32 firstPointIndex, bool forward, unsigned __int32 playerIndex, bool loop, bool splitStrikeGroups) // 0x696E4A
{
    mangled_assert("?sendMoveWaypointOrder@@YGXABVSquadronList@@ABVvector3@@AAV?$vector@Vvector3@@V?$allocator@Vvector3@@@std@@@std@@H_NI33@Z");
    todo("implement");
    _sub_696E4A(squadList, joinPosition, path, firstPointIndex, forward, playerIndex, loop, splitStrikeGroups);
}

_extern void _sub_696DCB(SquadronList const &, std::vector<vector3,std::allocator<vector3> > &, SobID const &, unsigned __int32, bool);
void sendMoveWaypointOrder(SquadronList const &squadList, std::vector<vector3,std::allocator<vector3> > &path, SobID const &finalTarget, unsigned __int32 playerIndex, bool splitStrikeGroups) // 0x696DCB
{
    mangled_assert("?sendMoveWaypointOrder@@YGXABVSquadronList@@AAV?$vector@Vvector3@@V?$allocator@Vvector3@@@std@@@std@@ABVSobID@@I_N@Z");
    todo("implement");
    _sub_696DCB(squadList, path, finalTarget, playerIndex, splitStrikeGroups);
}

_extern void _sub_696066(SquadronList const &, Selection const &, bool, unsigned __int32, bool);
void sendAttackOrder(SquadronList const &squadList, Selection const &targets_, bool specialWeaponsAttack, unsigned __int32 playerIndex, bool splitStrikeGroups) // 0x696066
{
    mangled_assert("?sendAttackOrder@@YGXABVSquadronList@@ABVSelection@@_NI2@Z");
    todo("implement");
    _sub_696066(squadList, targets_, specialWeaponsAttack, playerIndex, splitStrikeGroups);
}

_extern void _sub_69733E(SquadronList const &, Selection const &, unsigned __int32, bool);
void sendResourceOrder(SquadronList const &squadronList, Selection const &resources_, unsigned __int32 playerIndex, bool splitStrikeGroups) // 0x69733E
{
    mangled_assert("?sendResourceOrder@@YGXABVSquadronList@@ABVSelection@@I_N@Z");
    todo("implement");
    _sub_69733E(squadronList, resources_, playerIndex, splitStrikeGroups);
}

_extern void _sub_696535(SquadronList const &, SobID const &, unsigned __int32, bool);
void sendDockOrder(SquadronList const &squadronList, SobID const &shipdockWithID, unsigned __int32 playerIndex, bool splitStrikeGroups) // 0x696535
{
    mangled_assert("?sendDockOrder@@YGXABVSquadronList@@ABVSobID@@I_N@Z");
    todo("implement");
    _sub_696535(squadronList, shipdockWithID, playerIndex, splitStrikeGroups);
}

_extern void _sub_6973DC(SquadronList const &, unsigned __int32);
void sendRetireOrder(SquadronList const &squadronList, unsigned __int32 playerIndex) // 0x6973DC
{
    mangled_assert("?sendRetireOrder@@YGXABVSquadronList@@I@Z");
    todo("implement");
    _sub_6973DC(squadronList, playerIndex);
}

_extern void _sub_697459(Selection const &, unsigned __int32);
void sendRetireSubSystemsOrder(Selection const &subsystems_, unsigned __int32 playerIndex) // 0x697459
{
    mangled_assert("?sendRetireSubSystemsOrder@@YGXABVSelection@@I@Z");
    todo("implement");
    _sub_697459(subsystems_, playerIndex);
}

_extern void _sub_69699E(SquadronList const &, SobID const &, unsigned __int32, bool, bool);
void sendLaunchOrder(SquadronList const &squadronList, SobID const &shiplaunchFromID, unsigned __int32 playerIndex, bool bFromLauncherShipHold, bool splitStrikeGroups) // 0x69699E
{
    mangled_assert("?sendLaunchOrder@@YGXABVSquadronList@@ABVSobID@@I_N2@Z");
    todo("implement");
    _sub_69699E(squadronList, shiplaunchFromID, playerIndex, bFromLauncherShipHold, splitStrikeGroups);
}

_extern void _sub_696F77(SquadronList const &, SobID const &, unsigned __int32, bool);
void sendParadeOrder(SquadronList const &squadronList, SobID const &paradeWith, unsigned __int32 playerIndex, bool splitStrikeGroups) // 0x696F77
{
    mangled_assert("?sendParadeOrder@@YGXABVSquadronList@@ABVSobID@@I_N@Z");
    todo("implement");
    _sub_696F77(squadronList, paradeWith, playerIndex, splitStrikeGroups);
}

_extern void _sub_697120(bool, unsigned __int32);
void sendPauseUniverse(bool pause, unsigned __int32 playerIndex) // 0x697120
{
    mangled_assert("?sendPauseUniverse@@YGX_NI@Z");
    todo("implement");
    _sub_697120(pause, playerIndex);
}

_extern void _sub_69668C(SquadronList const &, unsigned __int32, unsigned __int32);
void sendFormStrikeGroup(SquadronList const &squadronList, unsigned __int32 strikeID, unsigned __int32 playerIndex) // 0x69668C
{
    mangled_assert("?sendFormStrikeGroup@@YGXABVSquadronList@@II@Z");
    todo("implement");
    _sub_69668C(squadronList, strikeID, playerIndex);
}

_extern void _sub_695EEE(SquadronList const &, unsigned __int32, unsigned __int32);
void sendAddToStrikeGroup(SquadronList const &squadronList, unsigned __int32 strikeGroupId, unsigned __int32 playerIndex) // 0x695EEE
{
    mangled_assert("?sendAddToStrikeGroup@@YGXABVSquadronList@@II@Z");
    todo("implement");
    _sub_695EEE(squadronList, strikeGroupId, playerIndex);
}

_extern void _sub_695F64(AllianceOrderAction, unsigned __int32, unsigned __int32);
void sendAlliance(AllianceOrderAction action, unsigned __int32 playerIndex, unsigned __int32 ally) // 0x695F64
{
    mangled_assert("?sendAlliance@@YGXW4AllianceOrderAction@@II@Z");
    todo("implement");
    _sub_695F64(action, playerIndex, ally);
}

_extern void _sub_695FCF(unsigned __int32, unsigned __int32, __int32, SquadronList const *);
void sendAllianceTransfer(unsigned __int32 playerIndex, unsigned __int32 ally, __int32 ru, SquadronList const *squadronList) // 0x695FCF
{
    mangled_assert("?sendAllianceTransfer@@YGXIIHPBVSquadronList@@@Z");
    todo("implement");
    _sub_695FCF(playerIndex, ally, ru, squadronList);
}

_extern void _sub_6976E3(SquadronList const &, SquadronTactics, unsigned __int32);
void sendSetTactics(SquadronList const &squadronList, SquadronTactics tactics, unsigned __int32 playerIndex) // 0x6976E3
{
    mangled_assert("?sendSetTactics@@YGXABVSquadronList@@W4SquadronTactics@@I@Z");
    todo("implement");
    _sub_6976E3(squadronList, tactics, playerIndex);
}

_extern void _sub_696702(SquadronList const &, Selection const &, unsigned __int32, bool);
void sendGuardOrder(SquadronList const &squadronList, Selection const &targets_, unsigned __int32 playerIndex, bool splitStrikeGroups) // 0x696702
{
    mangled_assert("?sendGuardOrder@@YGXABVSquadronList@@ABVSelection@@I_N@Z");
    todo("implement");
    _sub_696702(squadronList, targets_, playerIndex, splitStrikeGroups);
}

_extern void _sub_69635D(SquadronList const &, SobID const &, unsigned __int32, bool);
void sendCaptureOrder(SquadronList const &squadronList, SobID const &targetShipID, unsigned __int32 playerIndex, bool splitStrikeGroups) // 0x69635D
{
    mangled_assert("?sendCaptureOrder@@YGXABVSquadronList@@ABVSobID@@I_N@Z");
    todo("implement");
    _sub_69635D(squadronList, targetShipID, playerIndex, splitStrikeGroups);
}

_extern void _sub_696829(SquadronList const &, vector3 const &, vector3 const &, bool, unsigned __int32, bool);
void sendHyperspaceOrder(SquadronList const &squadronList, vector3 const &destination, vector3 const &origin, bool offMap, unsigned __int32 playerIndex, bool splitStrikeGroups) // 0x696829
{
    mangled_assert("?sendHyperspaceOrder@@YGXABVSquadronList@@ABVvector3@@1_NI2@Z");
    todo("implement");
    _sub_696829(squadronList, destination, origin, offMap, playerIndex, splitStrikeGroups);
}

_extern void _sub_696ED2(Selection const &, unsigned __int32);
void sendOrderScuttle(Selection const &targets_, unsigned __int32 playerIndex) // 0x696ED2
{
    mangled_assert("?sendOrderScuttle@@YGXABVSelection@@I@Z");
    todo("implement");
    _sub_696ED2(targets_, playerIndex);
}

_extern void _sub_696616(SquadronList const &, SobID const &, unsigned __int32);
void sendFormHyperspaceGateOrder(SquadronList const &squadronList, SobID const &targetGate, unsigned __int32 playerIndex) // 0x696616
{
    mangled_assert("?sendFormHyperspaceGateOrder@@YGXABVSquadronList@@ABVSobID@@I@Z");
    todo("implement");
    _sub_696616(squadronList, targetGate, playerIndex);
}

_extern void _sub_6968AB(SquadronList const &, SobID const &, unsigned __int32);
void sendHyperspaceViaGateOrder(SquadronList const &squadronList, SobID const &gate, unsigned __int32 playerIndex) // 0x6968AB
{
    mangled_assert("?sendHyperspaceViaGateOrder@@YGXABVSquadronList@@ABVSobID@@I@Z");
    todo("implement");
    _sub_6968AB(squadronList, gate, playerIndex);
}

_extern void _sub_69757A(SquadronList const &, unsigned __int32);
void sendSensorPingOrder(SquadronList const &squadronList, unsigned __int32 playerIndex) // 0x69757A
{
    mangled_assert("?sendSensorPingOrder@@YGXABVSquadronList@@I@Z");
    todo("implement");
    _sub_69757A(squadronList, playerIndex);
}

_extern void _sub_6971F4(SquadronList const &, Selection const &, unsigned __int32, bool);
void sendRepairOrder(SquadronList const &squadronList, Selection const &targets_, unsigned __int32 playerIndex, bool splitStrikeGroups) // 0x6971F4
{
    mangled_assert("?sendRepairOrder@@YGXABVSquadronList@@ABVSelection@@I_N@Z");
    todo("implement");
    _sub_6971F4(squadronList, targets_, playerIndex, splitStrikeGroups);
}

_extern void _sub_696449(SquadronList const &, bool, unsigned __int32);
void sendCloakOrder(SquadronList const &squadronList, bool enable, unsigned __int32 playerIndex) // 0x696449
{
    mangled_assert("?sendCloakOrder@@YGXABVSquadronList@@_NI@Z");
    todo("implement");
    _sub_696449(squadronList, enable, playerIndex);
}

_extern void _sub_6964BF(SquadronList const &, bool, unsigned __int32);
void sendDefenseFieldOrder(SquadronList const &squadronList, bool enable, unsigned __int32 playerIndex) // 0x6964BF
{
    mangled_assert("?sendDefenseFieldOrder@@YGXABVSquadronList@@_NI@Z");
    todo("implement");
    _sub_6964BF(squadronList, enable, playerIndex);
}

_extern void _sub_69766D(SquadronList const &, unsigned __int32, vector3 const &);
void sendSetRallyPointOrder(SquadronList const &squadronList, unsigned __int32 playerIndex, vector3 const &rallyPoint) // 0x69766D
{
    mangled_assert("?sendSetRallyPointOrder@@YGXABVSquadronList@@IABVvector3@@@Z");
    todo("implement");
    _sub_69766D(squadronList, playerIndex, rallyPoint);
}

_extern void _sub_6975F7(SquadronList const &, unsigned __int32, SobID const &);
void sendSetRallyPointOrder(SquadronList const &squadronList, unsigned __int32 playerIndex, SobID const &rallyObject) // 0x6975F7
{
    mangled_assert("?sendSetRallyPointOrder@@YGXABVSquadronList@@IABVSobID@@@Z");
    todo("implement");
    _sub_6975F7(squadronList, playerIndex, rallyObject);
}

_extern void _sub_696A8B(SquadronList const &, vector3 const &, vector3 const &, vector3 const &, unsigned __int32);
void sendLayMinesOrder(SquadronList const &squadronList, vector3 const &centre, vector3 const &front, vector3 const &corner, unsigned __int32 playerIndex) // 0x696A8B
{
    mangled_assert("?sendLayMinesOrder@@YGXABVSquadronList@@ABVvector3@@11I@Z");
    todo("implement");
    _sub_696A8B(squadronList, centre, front, corner, playerIndex);
}

_extern void _sub_696921(SquadronList const &, unsigned __int32);
void sendKamikazeOrder(SquadronList const &squadronList, unsigned __int32 playerIndex) // 0x696921
{
    mangled_assert("?sendKamikazeOrder@@YGXABVSquadronList@@I@Z");
    todo("implement");
    _sub_696921(squadronList, playerIndex);
}

_extern void _sub_6963D9(GameMsg_Chat const &);
void sendChatOrder(GameMsg_Chat const &message) // 0x6963D9
{
    mangled_assert("?sendChatOrder@@YGXABUGameMsg_Chat@@@Z");
    todo("implement");
    _sub_6963D9(message);
}

_extern void _sub_6974FE(SquadronList const &, SobID const &, unsigned __int32, bool);
void sendSalvageOrder(SquadronList const &squadronList, SobID const &target, unsigned __int32 playerIndex, bool splitStrikeGroups) // 0x6974FE
{
    mangled_assert("?sendSalvageOrder@@YGXABVSquadronList@@ABVSobID@@I_N@Z");
    todo("implement");
    _sub_6974FE(squadronList, target, playerIndex, splitStrikeGroups);
}

_extern void _sub_696B07(SquadronList const &, unsigned __int32);
void sendLeaveStrikeGroup(SquadronList const &squadronList, unsigned __int32 playerIndex) // 0x696B07
{
    mangled_assert("?sendLeaveStrikeGroup@@YGXABVSquadronList@@I@Z");
    todo("implement");
    _sub_696B07(squadronList, playerIndex);
}

_extern void _sub_697770();
void sendSurrenderOrder() // 0x697770
{
    mangled_assert("?sendSurrenderOrder@@YGXXZ");
    todo("implement");
    _sub_697770();
}

_extern bool _sub_6956B0(SquadronList const &, unsigned __int32);
bool ValidateSquadronList(SquadronList const &m_squadronList, unsigned __int32 player) // 0x6956B0
{
    mangled_assert("?ValidateSquadronList@@YG_NABVSquadronList@@I@Z");
    todo("implement");
    bool __result = _sub_6956B0(m_squadronList, player);
    return __result;
}

_extern bool _sub_695609(Selection const &, unsigned __int32);
bool ValidateSelection(Selection const &m_selection, unsigned __int32 player) // 0x695609
{
    mangled_assert("?ValidateSelection@@YG_NABVSelection@@I@Z");
    todo("implement");
    bool __result = _sub_695609(m_selection, player);
    return __result;
}

_extern void _sub_6965B1(unsigned __int32);
void sendDropPlayer(unsigned __int32 networkID) // 0x6965B1
{
    mangled_assert("?sendDropPlayer@@YGXI@Z");
    todo("implement");
    _sub_6965B1(networkID);
}

/* ---------- private code */

_extern void _sub_695CAA(vector3 const &, vector3 const &, matrix3 &);
_static void getCoordSys(vector3 const &point, vector3 const &previous, matrix3 &coordSysOut) // 0x695CAA
{
    mangled_assert("getCoordSys");
    todo("implement");
    _sub_695CAA(point, previous, coordSysOut);
}
#endif
