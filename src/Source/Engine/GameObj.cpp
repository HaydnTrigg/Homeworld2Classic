#if 0
/* ---------- headers */

#include "decomp.h"
#include <Render\objects\textureregistry.h>
#include <boost\preprocessor\cat.hpp>
#include <UserInterface\pch.h>
#include <set>
#include <mmiscapi2.h>
#include <assist\stlexsmallvector.h>
#include <Ping.h>
#include <boost\preprocessor\slot\slot.hpp>
#include <UserInterface\UIDialog.h>
#include <profileapi.h>
#include <winefs.h>
#include <CameraCommand.h>
#include <SoundManager\SoundEntityHandle.h>
#include <OrderFeedback.h>
#include <boost\preprocessor\slot\detail\def.hpp>
#include <stdexcept>
#include <boost\type_traits\is_same.hpp>
#include <xstring>
#include <CameraHW.h>
#include <Player.h>
#include <boost\function\detail\prologue.hpp>
#include <synchapi.h>
#include <inaddr.h>
#include <xmemory0>
#include <Camera\CameraOrbitTarget.h>
#include <Mathlib\matrix4.h>
#include <ResearchManager.h>
#include <boost\shared_array.hpp>
#include <Cursor.h>
#include <boost\function\function_base.hpp>
#include <pch.h>
#include <mmsystem.h>
#include <Camera\Camera.h>
#include <Render\objects\texture.h>
#include <boost\type_traits\arithmetic_traits.hpp>
#include <memory\memorylib.h>
#include <mmsyscom.h>
#include <Camera\Frustum.h>
#include <Render\objects\objects.h>
#include <statreg.h>
#include <boost\type_traits\is_arithmetic.hpp>
#include <boost\mem_fn.hpp>
#include <crtdefs.h>
#include <utilapiset.h>
#include <heapapi.h>
#include <processthreadsapi.h>
#include <Camera\Plane3.h>
#include <Render\objects\core.h>
#include <boost\type_traits\is_integral.hpp>
#include <boost\type_traits\detail\ice_not.hpp>
#include <boost\get_pointer.hpp>
#include <UserInterface\SharedGraphicFactory.h>
#include <Render\gl\types.h>
#include <boost\type_traits\detail\bool_trait_def.hpp>
#include <boost\preprocessor\enum.hpp>
#include <NetworkDP8\source\message.h>
#include <UserInterface\Graphic.h>
#include <gameSettings.h>
#include <Render\gl\lotypes.h>
#include <boost\type_traits\detail\template_arity_spec.hpp>
#include <boost\preprocessor\repetition\enum.hpp>
#include <Menus\ErrorMessage.h>
#include <Render\objects\textureproxy.h>
#include <syncChecking.h>
#include <boost\mpl\aux_\template_arity_fwd.hpp>
#include <boost\preprocessor\debug\error.hpp>
#include <UserInterface\NewUIScreen.h>
#include <atlcore.h>
#include <boost\preprocessor\detail\auto_rec.hpp>
#include <UserInterface\NewFrame.h>
#include <pshpack8.h>
#include <winnetwk.h>
#include <tchar.h>
#include <boost\mpl\aux_\preprocessor\params.hpp>
#include <boost\preprocessor\control\iif.hpp>
#include <UserInterface\InterfaceElement.h>
#include <FrontEnd\ScriptedFE\ScriptedFE.h>
#include <wnnc.h>
#include <mbstring.h>
#include <boost\mpl\aux_\config\preprocessor.hpp>
#include <boost\preprocessor\punctuation\comma_if.hpp>
#include <UserInterface\signals.h>
#include <FrontEnd\frontend.h>
#include <stdarg.h>
#include <Mathlib\matrix3.h>
#include <boost\mpl\aux_\lambda_support.hpp>
#include <boost\preprocessor\control\if.hpp>
#include <windef.h>
#include <oleidl.h>
#include <mcx.h>
#include <boost\mpl\aux_\config\lambda.hpp>
#include <boost\bind\mem_fn_template.hpp>
#include <boost\preprocessor\logical\bool.hpp>
#include <boost\checked_delete.hpp>
#include <minwindef.h>
#include <bemapiset.h>
#include <rpcdcep.h>
#include <SoundManager\SoundManager.h>
#include <boost\mpl\aux_\config\ttp.hpp>
#include <boost\preprocessor\facilities\empty.hpp>
#include <ProfileSystem.h>
#include <specstrings.h>
#include <playsoundapi.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <boost\mpl\aux_\config\overload_resolution.hpp>
#include <boost\preprocessor\punctuation\comma.hpp>
#include <xfunctional>
#include <specstrings_strict.h>
#include <HyperspaceManager.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <boost\mpl\bool.hpp>
#include <boost\preprocessor\repetition\repeat.hpp>
#include <KeyBindings.h>
#include <specstrings_undef.h>
#include <handleapi.h>
#include <new>
#include <SquadronList.h>
#include <boost\mpl\bool_fwd.hpp>
#include <boost\preprocessor\tuple\eat.hpp>
#include <ProfilePerFrame.h>
#include <driverspecs.h>
#include <exception>
#include <boost\preprocessor\tuple\rem.hpp>
#include <sdv_driverspecs.h>
#include <xstddef>
#include <boost\preprocessor\enum_params.hpp>
#include <type_traits>
#include <recorder.h>
#include <atltransactionmanager.h>
#include <boost\type_traits\composite_traits.hpp>
#include <boost\type_traits\detail\ice_eq.hpp>
#include <boost\preprocessor\repetition\enum_params.hpp>
#include <threadpoolapiset.h>
#include <orders.h>
#include <ktmw32.h>
#include <boost\type_traits\is_array.hpp>
#include <boost\preprocessor\repeat.hpp>
#include <Network\PlaybackNetwork.h>
#include <orders_base.h>
#include <atliface.h>
#include <boost\type_traits\config.hpp>
#include <boost\preprocessor\inc.hpp>
#include <objidl.h>
#include <msxml.h>
#include <commandtype.h>
#include <boost\preprocessor\iteration\detail\iter\forward1.hpp>
#include <Menus\MenuSupport.h>
#include <namespaceapi.h>
#include <shlwapi.h>
#include <boost\mpl\aux_\config\static_constant.hpp>
#include <boost\preprocessor\iteration\detail\bounds\lower1.hpp>
#include <boost\thread\mutex.hpp>
#include <ktmtypes.h>
#include <GameObj.h>
#include <shtypes.h>
#include <boost\preprocessor\slot\detail\shared.hpp>
#include <boost\thread\detail\lock.hpp>
#include <task.h>
#include <cstdarg>
#include <boost\preprocessor\iteration\detail\bounds\upper1.hpp>
#include <boost\thread\exceptions.hpp>
#include <xutility>
#include <winsmcrd.h>
#include <stack>
#include <boost\function\detail\function_iterate.hpp>
#include <boost\thread\detail\config.hpp>
#include <utility>
#include <iosfwd>
#include <boost\function\detail\maybe_include.hpp>
#include <vector>
#include <winbase.h>
#include <wincon.h>
#include <mmiscapi.h>
#include <fixedpoint.h>
#include <fileio\bytestream.h>
#include <boost\function\function_template.hpp>
#include <Mathlib\mathutil.h>
#include <xmemory>
#include <apisetcconv.h>
#include <mmeapi.h>
#include <util\fixed.h>
#include <fileio\fileioexports.h>
#include <minwinbase.h>
#include <atlchecked.h>
#include <boost\type_traits\is_class.hpp>
#include <Network\DummyNetwork.h>
#include <LevelDesc.h>
#include <abilities.h>
#include <atlexcept.h>
#include <boost\type_traits\is_union.hpp>
#include <FrameOrders.h>
#include <Render\objects\compiledtext.h>
#include <fileio\filepath.h>
#include <Hash.h>
#include <atltrace.h>
#include <oleacc.h>
#include <boost\type_traits\remove_cv.hpp>
#include <fileio\md5.h>
#include <atlconv.h>
#include <boost\type_traits\broken_compiler_spec.hpp>
#include <errhandlingapi.h>
#include <ime_cmodes.h>
#include <atlalloc.h>
#include <boost\type_traits\detail\cv_traits_impl.hpp>
#include <compiler\compilerconfig.h>
#include <processenv.h>
#include <config.h>
#include <mainScreen.h>
#include <App\AppObj.h>
#include <localizer\localizer.h>
#include <guiddef.h>
#include <sstream>
#include <seInterface2\PatchID.h>
#include <platform\appinterface.h>
#include <boost\type_traits\is_enum.hpp>
#include <seInterface2\PatchBase.h>
#include <boost\type_traits\add_reference.hpp>
#include <jobapi.h>
#include <seInterface2\SoundParams.h>
#include <gamestructimpl.h>
#include <boost\type_traits\is_reference.hpp>
#include <region.h>
#include <string.h>
#include <list>
#include <Badge.h>
#include <Scar\Scar.h>
#include <apiset.h>
#include <luaconfig\luabinding.h>
#include <platform\osdef.h>
#include <Scar\ScarEventSys.h>
#include <ole2.h>
#include <luaconfig\luaconfig.h>
#include <dplay8.h>
#include <systemtopologyapi.h>
#include <pshpack1.h>
#include <objbase.h>
#include <Collision\BVH\octree.h>
#include <assist\fixedstring.h>
#include <dpaddr.h>
#include <wow64apiset.h>
#include <combaseapi.h>
#include <Collision\BVH\span.h>
#include <DynamicPoint.h>
#include <boost\type_traits\detail\type_trait_def.hpp>
#include <Network\UIProxy.h>
#include <Mathlib\vector3.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Mathlib\vector4.h>
#include <Collision\BVH\proxy.h>
#include <boost\ref.hpp>
#include <winnls.h>
#include <shellapi.h>
#include <Collision\intersect.h>
#include <seInterface2\SampleID.h>
#include <datetimeapi.h>
#include <Collision\primitivesfwd.h>
#include <seInterface2\SampleBase.h>
#include <UserInterface\NewTextLabel.h>
#include <map>
#include <winnt.h>
#include <processtopologyapi.h>
#include <ParadeCommand.h>
#include <GameEventSys.h>
#include <UserInterface\uiprimitives.h>
#include <xtree>
#include <kernelspecs.h>
#include <Parade.h>
#include <boost\smart_ptr.hpp>
#include <comcat.h>
#include <boost\type_traits\is_pointer.hpp>
#include <UserInterface\NewText.h>
#include <basetsd.h>
#include <pshpack2.h>
#include <boost\scoped_ptr.hpp>
#include <LuaSimProxy.h>
#include <Render\objects\fontsystem.h>
#include <libloaderapi.h>
#include <CPUPlayer\HW2CpuPlayer.h>
#include <boost\assert.hpp>
#include <Menus\PlayerLaggingScreen.h>
#include <Render\objects\bitmapfont.h>
#include <sysinfoapi.h>
#include <playerresourcetype.h>
#include <CPUPlayer\cpuplayer.h>
#include <atlsimpcoll.h>
#include <objidlbase.h>
#include <winreg.h>
#include <ncrypt.h>
#include <unknwnbase.h>
#include <Mathlib\vector2.h>
#include <Interpolation.h>
#include <winsock.h>
#include <oaidl.h>
#include <util\types.h>
#include <atlbase.inl>
#include <nb30.h>
#include <commdlg.h>
#include <Viewer.h>
#include <SensorsManager.h>
#include <atlwinverapi.h>
#include <boost\static_assert.hpp>
#include <Render\gl\r_types.h>
#include <NetworkDP8\source\blowfish.h>
#include <Collision\Primitives\aabb.h>
#include <Race.h>
#include <LevelManager.h>
#include <Mathlib\matvec.h>
#include <timeapi.h>
#include <weaponinfo.h>
#include <NetworkDP8\source\exception.h>
#include <dpapi.h>
#include <propidl.h>
#include <boost\cstdint.hpp>
#include <unknwn.h>
#include <boost\config.hpp>
#include <Scar\LuaRuleSystem.h>
#include <securityappcontainer.h>
#include <cassert>
#include <profile\profile.h>
#include <fibersapi.h>
#include <imm.h>
#include <sobid.h>
#include <Modifiers\ModifierTargetCache.h>
#include <MainUI.h>
#include <assert.h>
#include <boost\type_traits\detail\ice_or.hpp>
#include <iostream>
#include <Selector.h>
#include <Render\gl\r_defines.h>
#include <Network\Network.h>
#include <MetaSelTarg.h>
#include <Render\gl\glext.h>
#include <boost\type_traits\has_trivial_copy.hpp>
#include <Network\P2PNetwork.h>
#include <winver.h>
#include <winscard.h>
#include <fileio\logfile.h>
#include <boost\scoped_array.hpp>
#include <boost\type_traits\is_volatile.hpp>
#include <Network\inetwork.h>
#include <verrsrc.h>
#include <wtypes.h>
#include <GameObjInit.h>
#include <rpcndr.h>
#include <UserInterface\NewUIScreenManager.h>
#include <realtimeapiset.h>
#include <tvout.h>
#include <rpcnsip.h>
#include <Mathlib\quat.h>
#include <PersistantData.h>
#include <atlcomcli.h>
#include <UserInterface\uitypes.h>
#include <mciapi.h>
#include <stralign.h>
#include <SimProxy.h>
#include <olectl.h>
#include <platform\inputinterface.h>
#include <winuser.h>
#include <platform\os.h>
#include <ocidl.h>
#include <platform\keydefines.h>
#include <platform\exceptionhandler.h>
#include <boost\pending\ct_if.hpp>
#include <consoleapi.h>
#include <seInterface2\sedefinesshared.h>
#include <NetworkDP8\source\sessionenum.h>
#include <assist\typemagic.h>
#include <namedpipeapi.h>
#include <ioapiset.h>
#include <winsvc.h>
#include <NetworkDP8\source\sessioninfo.h>
#include <boost\type_traits\is_stateless.hpp>
#include <memoryapi.h>
#include <dlgs.h>
#include <winperf.h>
#include <util\statmonitor.h>
#include <platform\cmdline.h>
#include <boost\type_traits\has_trivial_constructor.hpp>
#include <util\utilexports.h>
#include <boost\type_traits\is_pod.hpp>
#include <platform\timer.h>
#include <boost\type_traits\is_scalar.hpp>
#include <feFlow.h>
#include <platform\platformexports.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <boost\type_traits\has_trivial_destructor.hpp>
#include <wingdi.h>
#include <Universe.h>
#include <ShipQuery.h>
#include <boost\type_traits\intrinsics.hpp>
#include <rpc.h>
#include <urlmon.h>
#include <Waypoint.h>
#include <SelTarg.h>
#include <MeshAnimation.h>
#include <pshpack4.h>
#include <SobUnmoveable.h>
#include <prim.h>
#include <ShieldTypes.h>
#include <savegameimpl.h>
#include <joystickapi.h>
#include <sob.h>
#include <Menus\GameOverScreen.h>
#include <rpcdce.h>
#include <sobstatic.h>
#include <pathpoints.h>
#include <winerror.h>
#include <Collision\Primitives\sphere.h>
#include <CPUPlayer\CpuCommon.h>
#include <bcrypt.h>
#include <debug\db.h>
#include <TeamColourRegistry.h>
#include <CPUPlayer\CpuTarget.h>
#include <SobWithMeshStatic.h>
#include <boost\type_traits\detail\type_trait_undef.hpp>
#include <NetworkDP8\source\sessiondesc.h>
#include <savegame.h>
#include <Squadron.h>
#include <boost\type_traits\is_convertible.hpp>
#include <NetworkDP8\source\playerdesc.h>
#include <ddeml.h>
#include <lzexpand.h>
#include <command.h>
#include <ship.h>
#include <boost\type_traits\detail\bool_trait_undef.hpp>
#include <boost\type_traits\detail\yes_no_type.hpp>
#include <boost\type_traits\is_empty.hpp>
#include <SobWithMesh.h>
#include <Subsystems\HardPointManager.h>
#include <boost\type_traits\is_float.hpp>
#include <deque>
#include <wincrypt.h>
#include <Collision\Primitives\capsule.h>
#include <SobRigidBody.h>
#include <Subsystems\HardPoint.h>
#include <boost\type_traits\is_member_pointer.hpp>
#include <NetworkDP8\source\criticalsection.h>
#include <Collision\Primitives\segment.h>
#include <Stats\StatLogging.h>
#include <Subsystems\HardPointStatic.h>
#include <boost\type_traits\is_member_function_pointer.hpp>
#include <interlockedapi.h>
#include <timezoneapi.h>
#include <stringapiset.h>
#include <reason.h>
#include <Collision\BVH\profiling.h>
#include <SobRigidBodyStatic.h>
#include <Subsystems\SubSystemType.h>
#include <boost\type_traits\detail\is_mem_fun_pointer_impl.hpp>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <Network\SimSpeedController.h>
#include <securitybaseapi.h>
#include <rpcsal.h>
#include <selection.h>
#include <BuildManager.h>
#include <savegamedef.h>
#include <dbdefines.h>
#include <boost\type_traits\is_fundamental.hpp>
#include <boost\detail\shared_count.hpp>
#include <UnitCaps\UnitCaps.h>
#include <boost\type_traits\is_void.hpp>
#include <boost\type_traits\ice.hpp>
#include <bitset>
#include <Camera\OrbitParameters.h>
#include <campaign.h>
#include <boost\type_traits\detail\ice_and.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <scripting.h>
#include <FrontEnd\Lobby.h>
#include <oleauto.h>
#include <SOBGroupManager.h>
#include <scriptaccess.h>
#include <FrontEnd\lobbydefines.h>
#include <winioctl.h>
#include <servprov.h>
#include <hash_map>
#include <scripttypedef.h>
#include <gamemsg.h>
#include <xhash>
#include <process.h>
#include <debugapi.h>
#include <Render\objects\cliprect.h>
#include <fileapi.h>
#include <NetworkDP8\source\authentication.h>
#include <Menus\LoadingScreenRenderer.h>
#include <Network\contentmessage.h>
#include <cguid.h>
#include <lua.h>
#include <NetworkDP8\source\session.h>
#include <cderr.h>
#include <GameOptions.h>
#include <NetworkDP8\networkdp8.h>
#include <NetworkDP8\source\directplay.h>
#include <dde.h>
#include <NetworkDP8\source\address.h>
#include <boost\thread\thread.hpp>
#include <atlbase.h>
#include <boost\function.hpp>
#include <boost\bind\mem_fn_cc.hpp>
#include <windows.h>
#include <atldef.h>
#include <boost\preprocessor\iterate.hpp>
#include <Network\ContentDownload.h>
#include <winapifamily.h>
#include <wchar.h>
#include <boost\utility.hpp>
#include <atlrc.h>
#include <boost\preprocessor\iteration\iterate.hpp>
#include <screenshot.h>
#include <sdkddkver.h>
#include <threadpoollegacyapiset.h>
#include <rpcnterr.h>
#include <wtypesbase.h>
#include <winspool.h>
#include <new.h>
#include <boost\preprocessor\arithmetic\dec.hpp>
#include <boost\utility\addressof.hpp>
#include <iterator>
#include <excpt.h>
#include <rpcnsi.h>
#include <rpcasync.h>
#include <prsht.h>
#include <boost\preprocessor\config\config.hpp>
#include <boost\detail\workaround.hpp>
#include <Collision\Primitives\obb.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <boost\preprocessor\arithmetic\inc.hpp>
#include <queue>
#include <poppack.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <boost\preprocessor\array\elem.hpp>
#include <algorithm>
#include <boost\preprocessor\array\data.hpp>
#include <boost\preprocessor\tuple\elem.hpp>
#include <fstream>
#include <boost\preprocessor\array\size.hpp>
#include <UserInterface\StyleSheet.h>

/* ---------- constants */

/* ---------- definitions */

typedef std::pair<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned long> > >,std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned long> > > > _Paircc;

/* ---------- prototypes */

extern void setStatMonProfiling(bool enable);

_static void LobbyExitGame();

/* ---------- globals */

extern bool g_bProfile; // 0x8443BC
extern GameObj *GameObj::s_instance; // 0x8443C0
extern char const GameObj::m_saveToken[8]; // 0x79AAF0
extern SaveData const GameObj::m_saveData[1]; // 0x79AAF8

/* ---------- private variables */

_static
{
    extern float const ViewerUpdateRate; // 0x79AAE8
    extern float const ViewerUpdatePeriod; // 0x8367E4
    extern float const CameraDistanceUpdateRate; // 0x79AAEC
    extern float const CameraDistanceUpdatePeriod; // 0x8367E8
    extern std::_Nil _Nil_obj; // 0x8443C4
}

/* ---------- public code */

_extern void _sub_4FB3CE(bool);
void setStatMonProfiling(bool enable) // 0x4FB3CE
{
    mangled_assert("?setStatMonProfiling@@YGX_N@Z");
    todo("implement");
    _sub_4FB3CE(enable);
}

_extern void _sub_4F8C48(UI::InterfaceElement *);
void GameObj::CB_ContinueWatching_Yes(UI::InterfaceElement *yes) // 0x4F8C48
{
    mangled_assert("?CB_ContinueWatching_Yes@GameObj@@CGXPAVInterfaceElement@UI@@@Z");
    todo("implement");
    _sub_4F8C48(yes);
}

_extern void _sub_4F8C2D(UI::InterfaceElement *);
void GameObj::CB_ContinueWatching_No(UI::InterfaceElement *no) // 0x4F8C2D
{
    mangled_assert("?CB_ContinueWatching_No@GameObj@@CGXPAVInterfaceElement@UI@@@Z");
    todo("implement");
    _sub_4F8C2D(no);
}

_extern _sub_4F853B(GameObj *const);
GameObj::GameObj() // 0x4F853B
{
    mangled_assert("??0GameObj@@AAE@XZ");
    todo("implement");
    _sub_4F853B(this);
}

_extern _sub_4F859F(LuaSimProxyLib *const);
_inline LuaSimProxyLib::LuaSimProxyLib() // 0x4F859F
{
    mangled_assert("??0LuaSimProxyLib@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4F859F(this);
}

_extern void _sub_4F85C4(std::_List_buy<unsigned long,std::allocator<unsigned long> > *const);
_inline std::_List_buy<unsigned long,std::allocator<unsigned long> >::~_List_buy<unsigned long,std::allocator<unsigned long> >() // 0x4F85C4
{
    mangled_assert("??1?$_List_buy@KV?$allocator@K@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4F85C4(this);
}

_extern void _sub_4F85F4(std::_Tree_buy<unsigned long,std::allocator<unsigned long> > *const);
_inline std::_Tree_buy<unsigned long,std::allocator<unsigned long> >::~_Tree_buy<unsigned long,std::allocator<unsigned long> >() // 0x4F85F4
{
    mangled_assert("??1?$_Tree_buy@KV?$allocator@K@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4F85F4(this);
}

_extern void _sub_4F85FD(std::_Tree_comp<0,std::_Tset_traits<unsigned long,std::less<unsigned long>,std::allocator<unsigned long>,0> > *const);
_inline std::_Tree_comp<0,std::_Tset_traits<unsigned long,std::less<unsigned long>,std::allocator<unsigned long>,0> >::~_Tree_comp<0,std::_Tset_traits<unsigned long,std::less<unsigned long>,std::allocator<unsigned long>,0> >() // 0x4F85FD
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tset_traits@KU?$less@K@std@@V?$allocator@K@2@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4F85FD(this);
}

_extern void _sub_4F8659(std::set<unsigned long,std::less<unsigned long>,std::allocator<unsigned long> > *const);
_inline std::set<unsigned long,std::less<unsigned long>,std::allocator<unsigned long> >::~set<unsigned long,std::less<unsigned long>,std::allocator<unsigned long> >() // 0x4F8659
{
    mangled_assert("??1?$set@KU?$less@K@std@@V?$allocator@K@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4F8659(this);
}

_extern void _sub_4F8663(GameObj *const);
GameObj::~GameObj() // 0x4F8663
{
    mangled_assert("??1GameObj@@EAE@XZ");
    todo("implement");
    _sub_4F8663(this);
}

_extern void _sub_4F86F5(LuaSimProxyLib *const);
_inline LuaSimProxyLib::~LuaSimProxyLib() // 0x4F86F5
{
    mangled_assert("??1LuaSimProxyLib@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4F86F5(this);
}

_extern bool _sub_4F95E9();
bool GameObj::IsRunning() // 0x4F95E9
{
    mangled_assert("?IsRunning@GameObj@@SG_NXZ");
    todo("implement");
    bool __result = _sub_4F95E9();
    return __result;
}

_extern GameObj *_sub_4F95BF();
GameObj *GameObj::Instance() // 0x4F95BF
{
    mangled_assert("?Instance@GameObj@@SGPAV1@XZ");
    todo("implement");
    GameObj * __result = _sub_4F95BF();
    return __result;
}

_extern void _sub_4F9F07();
void GameObj::Shutdown() // 0x4F9F07
{
    mangled_assert("?Shutdown@GameObj@@SGXXZ");
    todo("implement");
    _sub_4F9F07();
}

_extern void _sub_4FAAF1(GameObj *const);
void GameObj::defaultSettings() // 0x4FAAF1
{
    mangled_assert("?defaultSettings@GameObj@@AAEXXZ");
    todo("implement");
    _sub_4FAAF1(this);
}

_extern void _sub_4FB3B5(GameObj *const, bool);
void GameObj::setMissionComplete(bool) // 0x4FB3B5
{
    mangled_assert("?setMissionComplete@GameObj@@QAEX_N@Z");
    todo("implement");
    _sub_4FB3B5(this, arg);
}

_extern void _sub_4FB388(GameObj *const);
void GameObj::setGameOver() // 0x4FB388
{
    mangled_assert("?setGameOver@GameObj@@QAEXXZ");
    todo("implement");
    _sub_4FB388(this);
}

_extern void _sub_4FB3C6(GameObj *const);
void GameObj::setPostLevelComplete() // 0x4FB3C6
{
    mangled_assert("?setPostLevelComplete@GameObj@@QAEXXZ");
    todo("implement");
    _sub_4FB3C6(this);
}

_extern bool _sub_4F9D3C(GameObj *const);
bool GameObj::RestoreLevel() // 0x4F9D3C
{
    mangled_assert("?RestoreLevel@GameObj@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_4F9D3C(this);
    return __result;
}

_extern bool _sub_4F971D(GameObj *const);
bool GameObj::LoadLevel() // 0x4F971D
{
    mangled_assert("?LoadLevel@GameObj@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_4F971D(this);
    return __result;
}

_extern char const *_sub_4F8FF2(GameObj *const);
char const *GameObj::GameStartup() // 0x4F8FF2
{
    mangled_assert("?GameStartup@GameObj@@AAEPBDXZ");
    todo("implement");
    char const * __result = _sub_4F8FF2(this);
    return __result;
}

_extern char const *_sub_4F8FED(GameObj *const);
char const *GameObj::GameShutdown() // 0x4F8FED
{
    mangled_assert("?GameShutdown@GameObj@@QAEPBDXZ");
    todo("implement");
    char const * __result = _sub_4F8FED(this);
    return __result;
}

_extern char const *_sub_4F9D8F(GameObj *const, SaveGameData *, SaveType);
char const *GameObj::Save(SaveGameData *, SaveType) // 0x4F9D8F
{
    mangled_assert("?Save@GameObj@@QAEPBDPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    char const * __result = _sub_4F9D8F(this, arg, arg);
    return __result;
}

_extern char const *_sub_4F9D2B(GameObj *const, SaveGameData *);
char const *GameObj::Restore(SaveGameData *) // 0x4F9D2B
{
    mangled_assert("?Restore@GameObj@@QAEPBDPAVSaveGameData@@@Z");
    todo("implement");
    char const * __result = _sub_4F9D2B(this, arg);
    return __result;
}

_extern void _sub_4F9A37(GameObj *const);
void GameObj::OnPostLevel() // 0x4F9A37
{
    mangled_assert("?OnPostLevel@GameObj@@QAEXXZ");
    todo("implement");
    _sub_4F9A37(this);
}

_extern void _sub_4F9BF9();
void GameObj::OnPreLoad() // 0x4F9BF9
{
    mangled_assert("?OnPreLoad@GameObj@@SGXXZ");
    todo("implement");
    _sub_4F9BF9();
}

_extern void _sub_4F9A6E(GameObj *const);
void GameObj::OnPostLoad() // 0x4F9A6E
{
    mangled_assert("?OnPostLoad@GameObj@@QAEXXZ");
    todo("implement");
    _sub_4F9A6E(this);
}

_extern void _sub_4FB279(GameObj *const);
void GameObj::requestExit() // 0x4FB279
{
    mangled_assert("?requestExit@GameObj@@QAEXXZ");
    todo("implement");
    _sub_4FB279(this);
}

_extern bool _sub_4FAFF4(GameObj const *const);
bool GameObj::isGameOver() const // 0x4FAFF4
{
    mangled_assert("?isGameOver@GameObj@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_4FAFF4(this);
    return __result;
}

_extern bool _sub_4FAFFE(GameObj const *const);
bool GameObj::isGameOverMenu() const // 0x4FAFFE
{
    mangled_assert("?isGameOverMenu@GameObj@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_4FAFFE(this);
    return __result;
}

_extern void _sub_4F9C17(GameObj *const);
void GameObj::PreFirstSimulate() // 0x4F9C17
{
    mangled_assert("?PreFirstSimulate@GameObj@@QAEXXZ");
    todo("implement");
    _sub_4F9C17(this);
}

_extern void _sub_4FA13B(GameObj *const);
void GameObj::StartTasks() // 0x4FA13B
{
    mangled_assert("?StartTasks@GameObj@@QAEXXZ");
    todo("implement");
    _sub_4FA13B(this);
}

_extern bool _sub_4F9F86();
bool GameObj::StartGame() // 0x4F9F86
{
    mangled_assert("?StartGame@GameObj@@SG_NXZ");
    todo("implement");
    bool __result = _sub_4F9F86();
    return __result;
}

_extern bool _sub_4F95F5(SaveGameData *);
bool GameObj::LoadGame(SaveGameData *savegamedata) // 0x4F95F5
{
    mangled_assert("?LoadGame@GameObj@@SG_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_4F95F5(savegamedata);
    return __result;
}

_extern void _sub_4F949E(GameObj *const);
void GameObj::InitializeNetwork() // 0x4F949E
{
    mangled_assert("?InitializeNetwork@GameObj@@QAEXXZ");
    todo("implement");
    _sub_4F949E(this);
}

_extern void _sub_4F993F(GameObj *const);
void GameObj::NotifyHostReady() // 0x4F993F
{
    mangled_assert("?NotifyHostReady@GameObj@@QAEXXZ");
    todo("implement");
    _sub_4F993F(this);
}

_extern void _sub_4FA255(GameObj *const);
void GameObj::WaitStartGame() // 0x4FA255
{
    mangled_assert("?WaitStartGame@GameObj@@QAEXXZ");
    todo("implement");
    _sub_4FA255(this);
}

_extern void _sub_4F8F8C(GameObj *const);
void GameObj::ExitGame() // 0x4F8F8C
{
    mangled_assert("?ExitGame@GameObj@@QAEXXZ");
    todo("implement");
    _sub_4F8F8C(this);
}

_extern __int32 _sub_4FB612(GameObj *const, float);
__int32 GameObj::taskFunction(float) // 0x4FB612
{
    mangled_assert("?taskFunction@GameObj@@UAEHM@Z");
    todo("implement");
    __int32 __result = _sub_4FB612(this, arg);
    return __result;
}

_extern void _sub_4F89A0(GameObj *const);
void GameObj::AIInit() // 0x4F89A0
{
    mangled_assert("?AIInit@GameObj@@QAEXXZ");
    todo("implement");
    _sub_4F89A0(this);
}

_extern void _sub_4F8BA7(GameObj *const);
void GameObj::AIShutdown() // 0x4F8BA7
{
    mangled_assert("?AIShutdown@GameObj@@QAEXXZ");
    todo("implement");
    _sub_4F8BA7(this);
}

_extern void _sub_4F8B33(GameObj *const, SaveGameData *);
void GameObj::AIRestore(SaveGameData *) // 0x4F8B33
{
    mangled_assert("?AIRestore@GameObj@@QAEXPAVSaveGameData@@@Z");
    todo("implement");
    _sub_4F8B33(this, arg);
}

_extern void _sub_4F8B6E(GameObj *const, SaveGameData *, SaveType);
void GameObj::AISave(SaveGameData *, SaveType) // 0x4F8B6E
{
    mangled_assert("?AISave@GameObj@@QAEXPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    _sub_4F8B6E(this, arg, arg);
}

_extern void _sub_4F8AF5(GameObj *const, float);
void GameObj::AIProcess(float) // 0x4F8AF5
{
    mangled_assert("?AIProcess@GameObj@@QAEXM@Z");
    todo("implement");
    _sub_4F8AF5(this, arg);
}

_extern HW2CpuPlayer *_sub_4F8FF7(GameObj *const, unsigned __int32);
HW2CpuPlayer *GameObj::GetCPUPlayer(unsigned __int32) // 0x4F8FF7
{
    mangled_assert("?GetCPUPlayer@GameObj@@QAEPAVHW2CpuPlayer@@I@Z");
    todo("implement");
    HW2CpuPlayer * __result = _sub_4F8FF7(this, arg);
    return __result;
}

_extern HW2CpuPlayer const *_sub_4F9038(GameObj const *const, unsigned __int32);
HW2CpuPlayer const *GameObj::GetCPUPlayer(unsigned __int32) const // 0x4F9038
{
    mangled_assert("?GetCPUPlayer@GameObj@@QBEPBVHW2CpuPlayer@@I@Z");
    todo("implement");
    HW2CpuPlayer const * __result = _sub_4F9038(this, arg);
    return __result;
}

_extern void _sub_4F9F30(GameObj *const, Order const *);
void GameObj::SimProxyAcknowledgeOrder(Order const *) // 0x4F9F30
{
    mangled_assert("?SimProxyAcknowledgeOrder@GameObj@@AAEXPBVOrder@@@Z");
    todo("implement");
    _sub_4F9F30(this, arg);
}

_extern bool _sub_4FB0D1(GameObj *const);
bool GameObj::processCommands() // 0x4FB0D1
{
    mangled_assert("?processCommands@GameObj@@AAE_NXZ");
    todo("implement");
    bool __result = _sub_4FB0D1(this);
    return __result;
}

_extern void _sub_4FA19A(GameObj *const);
void GameObj::WaitSendQueuesEmpty() // 0x4FA19A
{
    mangled_assert("?WaitSendQueuesEmpty@GameObj@@AAEXXZ");
    todo("implement");
    _sub_4FA19A(this);
}

_extern void _sub_4F8C58(GameObj *const, unsigned __int32);
void GameObj::ChangeLocalPlayer(unsigned __int32) // 0x4F8C58
{
    mangled_assert("?ChangeLocalPlayer@GameObj@@QAEXI@Z");
    todo("implement");
    _sub_4F8C58(this, arg);
}

_extern void _sub_4F9E71(GameObj *const);
void GameObj::SetLocalPlayerToCpuPlayer() // 0x4F9E71
{
    mangled_assert("?SetLocalPlayerToCpuPlayer@GameObj@@QAEXXZ");
    todo("implement");
    _sub_4F9E71(this);
}

_extern StatMonitor *_sub_4F949A(GameObj *const);
StatMonitor *GameObj::GetStatMonGame() // 0x4F949A
{
    mangled_assert("?GetStatMonGame@GameObj@@QAEPAVStatMonitor@@XZ");
    todo("implement");
    StatMonitor * __result = _sub_4F949A(this);
    return __result;
}

_extern SimProxy *_sub_4F9496(GameObj *const);
SimProxy *GameObj::GetSimProxy() // 0x4F9496
{
    mangled_assert("?GetSimProxy@GameObj@@QAEPAVSimProxy@@XZ");
    todo("implement");
    SimProxy * __result = _sub_4F9496(this);
    return __result;
}

_extern void _sub_4F908B(GameObj const *const, std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &);
void GameObj::GetNetworkStats(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &) const // 0x4F908B
{
    mangled_assert("?GetNetworkStats@GameObj@@QBEXAAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z");
    todo("implement");
    _sub_4F908B(this, arg);
}

_extern void _sub_4FA923(GameObj *const);
void GameObj::consoleAutoexec() // 0x4FA923
{
    mangled_assert("?consoleAutoexec@GameObj@@AAEXXZ");
    todo("implement");
    _sub_4FA923(this);
}

_extern void _sub_4FA9E3(GameObj *const);
void GameObj::consoleGameEndExec() // 0x4FA9E3
{
    mangled_assert("?consoleGameEndExec@GameObj@@AAEXXZ");
    todo("implement");
    _sub_4FA9E3(this);
}

_extern bool _sub_4F9752();
bool GameObj::LoadLocalizer() // 0x4F9752
{
    mangled_assert("?LoadLocalizer@GameObj@@SG_NXZ");
    todo("implement");
    bool __result = _sub_4F9752();
    return __result;
}

_extern bool _sub_4FA165();
bool GameObj::UnloadLocalizer() // 0x4FA165
{
    mangled_assert("?UnloadLocalizer@GameObj@@CG_NXZ");
    todo("implement");
    bool __result = _sub_4FA165();
    return __result;
}

_extern void _sub_4FB0D0(Saveable * const);
void GameObj::postRestore() // 0x4FB0D0
{
    mangled_assert("?postRestore@GameObj@@UAEXXZ");
    // __shifted(GameObj, 48);
    todo("implement");
    _sub_4FB0D0(this);
}

_extern void _sub_4F9DA4(GameObj *const, std::auto_ptr<Order>, bool);
void GameObj::SendOrder(std::auto_ptr<Order>, bool) // 0x4F9DA4
{
    mangled_assert("?SendOrder@GameObj@@QAEXV?$auto_ptr@VOrder@@@std@@_N@Z");
    todo("implement");
    _sub_4F9DA4(this, arg, arg);
}

_extern void _sub_4F8E81(GameObj *const);
void GameObj::CheckForLaggingPlayers() // 0x4F8E81
{
    mangled_assert("?CheckForLaggingPlayers@GameObj@@AAEXXZ");
    todo("implement");
    _sub_4F8E81(this);
}

_extern void _sub_4F99FF(GameObj *const, Player *, unsigned __int32);
void GameObj::OnPlayerLagging(Player *, unsigned __int32) // 0x4F99FF
{
    mangled_assert("?OnPlayerLagging@GameObj@@AAEXPAVPlayer@@I@Z");
    todo("implement");
    _sub_4F99FF(this, arg, arg);
}

_extern void _sub_4F8F87(GameObj *const, unsigned __int32);
void GameObj::DropPlayer(unsigned __int32) // 0x4F8F87
{
    mangled_assert("?DropPlayer@GameObj@@QAEXI@Z");
    todo("implement");
    _sub_4F8F87(this, arg);
}

_extern bool _sub_4F95E1(GameObj const *const, unsigned __int32);
bool GameObj::IsPlayerLagging(unsigned __int32) const // 0x4F95E1
{
    mangled_assert("?IsPlayerLagging@GameObj@@QBE_NI@Z");
    todo("implement");
    bool __result = _sub_4F95E1(this, arg);
    return __result;
}

_extern void _sub_4F9968(GameObj *const);
void GameObj::OnHostMigration() // 0x4F9968
{
    mangled_assert("?OnHostMigration@GameObj@@QAEXXZ");
    todo("implement");
    _sub_4F9968(this);
}

_extern void _sub_4F99A8(GameObj *const);
void GameObj::OnKickedOut() // 0x4F99A8
{
    mangled_assert("?OnKickedOut@GameObj@@QAEXXZ");
    todo("implement");
    _sub_4F99A8(this);
}

_extern bool _sub_4F8F40();
bool GameObj::DoContentDownload() // 0x4F8F40
{
    mangled_assert("?DoContentDownload@GameObj@@SG_NXZ");
    todo("implement");
    bool __result = _sub_4F8F40();
    return __result;
}

_extern bool _sub_4FB309(Saveable * const, SaveGameData *);
bool GameObj::restore(SaveGameData *) // 0x4FB309
{
    mangled_assert("?restore@GameObj@@UAE_NPAVSaveGameData@@@Z");
    // __shifted(GameObj, 48);
    todo("implement");
    bool __result = _sub_4FB309(this, arg);
    return __result;
}

_extern bool _sub_4FB34A(Saveable * const, SaveGameData *, SaveType);
bool GameObj::save(SaveGameData *, SaveType) // 0x4FB34A
{
    mangled_assert("?save@GameObj@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    // __shifted(GameObj, 48);
    todo("implement");
    bool __result = _sub_4FB34A(this, arg, arg);
    return __result;
}

/* ---------- private code */

_extern void _sub_4F9913();
_static void LobbyExitGame() // 0x4F9913
{
    mangled_assert("LobbyExitGame");
    todo("implement");
    _sub_4F9913();
}
#endif
