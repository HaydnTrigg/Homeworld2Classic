#if 0
/* ---------- headers */

#include "decomp.h"
#include <isteamuserstats.h>
#include <isteamugc.h>
#include <atlconv.h>
#include <SOBGroupManager.h>
#include <xiosbase>
#include <isteamremotestorage.h>
#include <winsock.h>
#include <atlalloc.h>
#include <assist\stlexsmallvector.h>
#include <hash_map>
#include <xlocale>
#include <nb30.h>
#include <wincrypt.h>
#include <stdexcept>
#include <xhash>
#include <xstring>
#include <NetworkDP8\source\authentication.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <timeapi.h>
#include <memory\memorylib.h>
#include <NetworkDP8\source\session.h>
#include <isteamapplist.h>
#include <crtdefs.h>
#include <NetworkDP8\source\directplay.h>
#include <HyperspaceManager.h>
#include <securityappcontainer.h>
#include <rpcsal.h>
#include <boost\thread\thread.hpp>
#include <isteamhttp.h>
#include <fibersapi.h>
#include <boost\function.hpp>
#include <boost\bind\mem_fn_cc.hpp>
#include <localizer\localizer.h>
#include <steamhttpenums.h>
#include <boost\preprocessor\iterate.hpp>
#include <boost\preprocessor\iteration\iterate.hpp>
#include <UserInterface\StyleSheet.h>
#include <winver.h>
#include <boost\preprocessor\arithmetic\dec.hpp>
#include <UserInterface\pch.h>
#include <verrsrc.h>
#include <oleauto.h>
#include <boost\preprocessor\config\config.hpp>
#include <winioctl.h>
#include <servprov.h>
#include <boost\preprocessor\arithmetic\inc.hpp>
#include <Mathlib\matrix3.h>
#include <realtimeapiset.h>
#include <tvout.h>
#include <boost\preprocessor\array\elem.hpp>
#include <gameSettings.h>
#include <boost\checked_delete.hpp>
#include <mciapi.h>
#include <comcat.h>
#include <boost\preprocessor\array\data.hpp>
#include <syncChecking.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <winuser.h>
#include <boost\preprocessor\tuple\elem.hpp>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <steamclientpublic.h>
#include <cguid.h>
#include <boost\preprocessor\array\size.hpp>
#include <steamuniverse.h>
#include <isteamnetworking.h>
#include <atlsimpcoll.h>
#include <boost\preprocessor\cat.hpp>
#include <new>
#include <consoleapi.h>
#include <boost\preprocessor\slot\slot.hpp>
#include <xstddef>
#include <namedpipeapi.h>
#include <ioapiset.h>
#include <boost\preprocessor\slot\detail\def.hpp>
#include <boost\type_traits\is_same.hpp>
#include <boost\function\detail\prologue.hpp>
#include <gamemsg.h>
#include <type_traits>
#include <memoryapi.h>
#include <dlgs.h>
#include <winperf.h>
#include <statreg.h>
#include <boost\function\function_base.hpp>
#include <xlocinfo>
#include <boost\type_traits\arithmetic_traits.hpp>
#include <wtypesbase.h>
#include <winspool.h>
#include <atlwinverapi.h>
#include <boost\type_traits\is_arithmetic.hpp>
#include <boost\mem_fn.hpp>
#include <profile\profile.h>
#include <isteamutils.h>
#include <prsht.h>
#include <boost\type_traits\is_integral.hpp>
#include <boost\type_traits\detail\ice_not.hpp>
#include <boost\get_pointer.hpp>
#include <iostream>
#include <Player.h>
#include <Network\SimSpeedController.h>
#include <boost\type_traits\detail\bool_trait_def.hpp>
#include <boost\preprocessor\enum.hpp>
#include <NetworkDP8\source\message.h>
#include <GameObj.h>
#include <ResearchManager.h>
#include <wingdi.h>
#include <boost\type_traits\detail\template_arity_spec.hpp>
#include <boost\preprocessor\repetition\enum.hpp>
#include <config.h>
#include <xutility>
#include <rpc.h>
#include <boost\mpl\aux_\template_arity_fwd.hpp>
#include <boost\preprocessor\debug\error.hpp>
#include <xatomic0.h>
#include <utility>
#include <iosfwd>
#include <pshpack4.h>
#include <boost\preprocessor\detail\auto_rec.hpp>
#include <vector>
#include <joystickapi.h>
#include <boost\mpl\aux_\preprocessor\params.hpp>
#include <boost\preprocessor\control\iif.hpp>
#include <util\statmonitor.h>
#include <xmemory>
#include <rpcdce.h>
#include <boost\mpl\aux_\config\preprocessor.hpp>
#include <boost\preprocessor\punctuation\comma_if.hpp>
#include <util\utilexports.h>
#include <fileio\fileioexports.h>
#include <winerror.h>
#include <boost\mpl\aux_\lambda_support.hpp>
#include <boost\preprocessor\control\if.hpp>
#include <platform\timer.h>
#include <dbdefines.h>
#include <winefs.h>
#include <boost\mpl\aux_\config\lambda.hpp>
#include <boost\bind\mem_fn_template.hpp>
#include <boost\preprocessor\logical\bool.hpp>
#include <platform\platformexports.h>
#include <UnitCaps\UnitCaps.h>
#include <NetworkDP8\networkdp8.h>
#include <boost\mpl\aux_\config\ttp.hpp>
#include <boost\preprocessor\facilities\empty.hpp>
#include <platform\osdef.h>
#include <NetworkDP8\source\address.h>
#include <ddeml.h>
#include <lzexpand.h>
#include <boost\mpl\aux_\config\overload_resolution.hpp>
#include <boost\preprocessor\punctuation\comma.hpp>
#include <Universe.h>
#include <KeyBindings.h>
#include <atlbase.h>
#include <boost\mpl\bool.hpp>
#include <boost\preprocessor\repetition\repeat.hpp>
#include <Waypoint.h>
#include <Mathlib\mathutil.h>
#include <compiler\compilerconfig.h>
#include <atldef.h>
#include <atlcomcli.h>
#include <boost\mpl\bool_fwd.hpp>
#include <boost\preprocessor\tuple\eat.hpp>
#include <SobUnmoveable.h>
#include <isteammatchmaking.h>
#include <atlrc.h>
#include <olectl.h>
#include <boost\preprocessor\tuple\rem.hpp>
#include <sob.h>
#include <matchmakingtypes.h>
#include <isteamunifiedmessages.h>
#include <new.h>
#include <interlockedapi.h>
#include <timezoneapi.h>
#include <stringapiset.h>
#include <reason.h>
#include <ocidl.h>
#include <boost\preprocessor\enum_params.hpp>
#include <sobstatic.h>
#include <boost\type_traits\composite_traits.hpp>
#include <boost\type_traits\detail\ice_eq.hpp>
#include <boost\preprocessor\repetition\enum_params.hpp>
#include <Collision\Primitives\sphere.h>
#include <UserInterface\SharedGraphicFactory.h>
#include <list>
#include <boost\type_traits\is_array.hpp>
#include <boost\preprocessor\repeat.hpp>
#include <UserInterface\Graphic.h>
#include <isteamapps.h>
#include <boost\type_traits\config.hpp>
#include <boost\preprocessor\inc.hpp>
#include <Render\objects\texture.h>
#include <securitybaseapi.h>
#include <boost\preprocessor\iteration\detail\iter\forward1.hpp>
#include <Render\objects\objects.h>
#include <boost\mpl\aux_\config\static_constant.hpp>
#include <boost\preprocessor\iteration\detail\bounds\lower1.hpp>
#include <boost\thread\mutex.hpp>
#include <Render\objects\core.h>
#include <boost\preprocessor\slot\detail\shared.hpp>
#include <boost\thread\detail\lock.hpp>
#include <Menus\ErrorMessage.h>
#include <Render\gl\types.h>
#include <sstream>
#include <oleidl.h>
#include <mcx.h>
#include <boost\preprocessor\iteration\detail\bounds\upper1.hpp>
#include <boost\thread\exceptions.hpp>
#include <Mathlib\vector3.h>
#include <UserInterface\NewUIScreen.h>
#include <UserInterface\signals.h>
#include <Mathlib\matvec.h>
#include <Menus\MenuSupport.h>
#include <boost\function\detail\function_iterate.hpp>
#include <boost\thread\detail\config.hpp>
#include <Mathlib\vector4.h>
#include <region.h>
#include <boost\function\detail\maybe_include.hpp>
#include <platform\keydefines.h>
#include <boost\function\function_template.hpp>
#include <map>
#include <xtree>
#include <debugapi.h>
#include <boost\type_traits\is_class.hpp>
#include <fileapi.h>
#include <boost\type_traits\is_union.hpp>
#include <Render\gl\lotypes.h>
#include <boost\scoped_ptr.hpp>
#include <boost\assert.hpp>
#include <boost\type_traits\remove_cv.hpp>
#include <boost\type_traits\broken_compiler_spec.hpp>
#include <task.h>
#include <cderr.h>
#include <boost\type_traits\detail\cv_traits_impl.hpp>
#include <stack>
#include <dde.h>
#include <objidl.h>
#include <msxml.h>
#include <winsock2.h>
#include <boost\type_traits\is_enum.hpp>
#include <winapifamily.h>
#include <boost\type_traits\add_reference.hpp>
#include <Mathlib\vector2.h>
#include <recorder.h>
#include <windows.h>
#include <boost\type_traits\is_reference.hpp>
#include <FrameOrders.h>
#include <util\types.h>
#include <Render\gl\r_types.h>
#include <xfacet>
#include <sdkddkver.h>
#include <threadpoollegacyapiset.h>
#include <rpcnterr.h>
#include <winsmcrd.h>
#include <dplay8.h>
#include <excpt.h>
#include <rpcnsi.h>
#include <rpcasync.h>
#include <dpaddr.h>
#include <poppack.h>
#include <isteamscreenshots.h>
#include <boost\cstdint.hpp>
#include <boost\type_traits\detail\type_trait_def.hpp>
#include <Render\objects\textureproxy.h>
#include <boost\config.hpp>
#include <Collision\BVH\octree.h>
#include <cassert>
#include <boost\ref.hpp>
#include <Collision\BVH\span.h>
#include <assert.h>
#include <Collision\BVH\Internal\span_i.h>
#include <isteamfriends.h>
#include <mmiscapi2.h>
#include <ime_cmodes.h>
#include <Collision\BVH\proxy.h>
#include <profileapi.h>
#include <LevelDesc.h>
#include <Collision\intersect.h>
#include <boost\type_traits\is_pointer.hpp>
#include <Hash.h>
#include <Collision\Primitives\obb.h>
#include <Collision\primitivesfwd.h>
#include <synchapi.h>
#include <fileio\md5.h>
#include <mmsystem.h>
#include <mmsyscom.h>
#include <process.h>
#include <Mathlib\quat.h>
#include <utilapiset.h>
#include <heapapi.h>
#include <processthreadsapi.h>
#include <ws2def.h>
#include <ole2.h>
#include <inaddr.h>
#include <gamestructimpl.h>
#include <objbase.h>
#include <atlbase.inl>
#include <Badge.h>
#include <combaseapi.h>
#include <assist\typemagic.h>
#include <SquadronList.h>
#include <playerresourcetype.h>
#include <pshpack8.h>
#include <winnetwk.h>
#include <qos.h>
#include <NetworkDP8\source\blowfish.h>
#include <Interpolation.h>
#include <wnnc.h>
#include <NetworkDP8\source\exception.h>
#include <stdarg.h>
#include <windef.h>
#include <minwindef.h>
#include <bemapiset.h>
#include <rpcdcep.h>
#include <Collision\Primitives\aabb.h>
#include <specstrings.h>
#include <playsoundapi.h>
#include <Mathlib\mathlibdll.h>
#include <isteamcontroller.h>
#include <specstrings_strict.h>
#include <Mathlib\fastmath.h>
#include <steamcontrollerpublic.h>
#include <specstrings_undef.h>
#include <handleapi.h>
#include <boost\type_traits\detail\ice_or.hpp>
#include <fixedpoint.h>
#include <Race.h>
#include <Render\gl\r_defines.h>
#include <driverspecs.h>
#include <objidlbase.h>
#include <util\fixed.h>
#include <UserInterface\NewFrame.h>
#include <Render\gl\glext.h>
#include <sdv_driverspecs.h>
#include <ncrypt.h>
#include <boost\type_traits\has_trivial_copy.hpp>
#include <UserInterface\InterfaceElement.h>
#include <boost\type_traits\is_volatile.hpp>
#include <UserInterface\uitypes.h>
#include <threadpoolapiset.h>
#include <unknwnbase.h>
#include <pathpoints.h>
#include <platform\inputinterface.h>
#include <oaidl.h>
#include <commdlg.h>
#include <debug\db.h>
#include <namespaceapi.h>
#include <ktmtypes.h>
#include <boost\pending\ct_if.hpp>
#include <deque>
#include <dpapi.h>
#include <propidl.h>
#include <NetworkDP8\source\sessionenum.h>
#include <boost\static_assert.hpp>
#include <isteammusicremote.h>
#include <unknwn.h>
#include <NetworkDP8\source\sessioninfo.h>
#include <winbase.h>
#include <wincon.h>
#include <mmiscapi.h>
#include <apisetcconv.h>
#include <mmeapi.h>
#include <imm.h>
#include <boost\type_traits\is_stateless.hpp>
#include <minwinbase.h>
#include <boost\type_traits\has_trivial_constructor.hpp>
#include <Network\LagLogic.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <atlcore.h>
#include <boost\type_traits\is_pod.hpp>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <winscard.h>
#include <tchar.h>
#include <boost\type_traits\is_scalar.hpp>
#include <orders.h>
#include <selection.h>
#include <wtypes.h>
#include <mbstring.h>
#include <orders_base.h>
#include <savegamedef.h>
#include <errhandlingapi.h>
#include <rpcndr.h>
#include <boost\type_traits\has_trivial_destructor.hpp>
#include <sobid.h>
#include <boost\detail\shared_count.hpp>
#include <processenv.h>
#include <rpcnsip.h>
#include <boost\type_traits\intrinsics.hpp>
#include <guiddef.h>
#include <stralign.h>
#include <boost\detail\lwm_win32.hpp>
#include <SteamFuncs.h>
#include <steam_api.h>
#include <jobapi.h>
#include <SelTarg.h>
#include <isteamclient.h>
#include <prim.h>
#include <steamtypes.h>
#include <apiset.h>
#include <NetworkDP8\source\sessiondesc.h>
#include <winsvc.h>
#include <boost\type_traits\detail\type_trait_undef.hpp>
#include <NetworkDP8\source\playerdesc.h>
#include <systemtopologyapi.h>
#include <pshpack1.h>
#include <atltransactionmanager.h>
#include <boost\type_traits\is_convertible.hpp>
#include <wow64apiset.h>
#include <ktmw32.h>
#include <boost\type_traits\detail\bool_trait_undef.hpp>
#include <boost\type_traits\detail\yes_no_type.hpp>
#include <boost\type_traits\is_empty.hpp>
#include <system_error>
#include <isteamuser.h>
#include <atliface.h>
#include <boost\type_traits\is_float.hpp>
#include <seInterface2\PatchID.h>
#include <boost\type_traits\is_member_pointer.hpp>
#include <NetworkDP8\source\criticalsection.h>
#include <seInterface2\PatchBase.h>
#include <TeamColourRegistry.h>
#include <luaconfig\luaconfig.h>
#include <winnls.h>
#include <shellapi.h>
#include <shlwapi.h>
#include <boost\type_traits\is_member_function_pointer.hpp>
#include <seInterface2\SoundParams.h>
#include <savegame.h>
#include <lua.h>
#include <Network\SteamP2PNetwork.h>
#include <datetimeapi.h>
#include <shtypes.h>
#include <boost\type_traits\detail\is_mem_fun_pointer_impl.hpp>
#include <Collision\Primitives\capsule.h>
#include <Network\inetwork.h>
#include <isteamhtmlsurface.h>
#include <winnt.h>
#include <processtopologyapi.h>
#include <wchar.h>
#include <boost\utility.hpp>
#include <Collision\Primitives\segment.h>
#include <Render\objects\textureregistry.h>
#include <kernelspecs.h>
#include <urlmon.h>
#include <boost\utility\addressof.hpp>
#include <Collision\BVH\profiling.h>
#include <iterator>
#include <basetsd.h>
#include <pshpack2.h>
#include <boost\detail\workaround.hpp>
#include <istream>
#include <libloaderapi.h>
#include <queue>
#include <ostream>
#include <isteammusic.h>
#include <sysinfoapi.h>
#include <boost\type_traits\is_fundamental.hpp>
#include <ios>
#include <atlchecked.h>
#include <boost\type_traits\is_void.hpp>
#include <boost\type_traits\ice.hpp>
#include <winreg.h>
#include <bcrypt.h>
#include <atlexcept.h>
#include <boost\type_traits\detail\ice_and.hpp>
#include <commandtype.h>
#include <atltrace.h>
#include <oleacc.h>
#include <BuildManager.h>
#include <streambuf>

/* ---------- constants */

/* ---------- definitions */

typedef __int32 color;
typedef boost::shared_ptr<FrameOrders> FrameOrdersPtr;
typedef std::map<unsigned int,P2PNetwork::ReceiveQueue,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,P2PNetwork::ReceiveQueue> > > PlayerMap;
typedef std::list<P2PNetwork::Packet,std::allocator<P2PNetwork::Packet> > PacketList;
typedef unsigned long _Valty;

/* ---------- prototypes */

/* ---------- globals */

extern float *const ATL::CVarTypeInfo<float>::pmField; // 0x761C7C
extern float **const ATL::CVarTypeInfo<float *>::pmField; // 0x761C94
extern double *const ATL::CVarTypeInfo<double>::pmField; // 0x761C9C
extern double **const ATL::CVarTypeInfo<double *>::pmField; // 0x761CA4
extern wchar_t **const ATL::CVarTypeInfo<wchar_t *>::pmField; // 0x761CB0
extern ATL::CAtlModule *ATL::_pAtlModule; // 0x8439CC
extern wchar_t ***const ATL::CVarTypeInfo<wchar_t * *>::pmField; // 0x761CB8
extern _GUID ATL::CAtlModule::m_libid; // 0x8439D0
extern IUnknown **const ATL::CVarTypeInfo<IUnknown *>::pmField; // 0x761CC0
extern IUnknown ***const ATL::CVarTypeInfo<IUnknown * *>::pmField; // 0x761CC8
extern IDispatch **const ATL::CVarTypeInfo<IDispatch *>::pmField; // 0x761CD0
extern _GUID IID_IAxWinHostWindow; // 0x761CD4
extern IDispatch ***const ATL::CVarTypeInfo<IDispatch * *>::pmField; // 0x761CE8
extern tagCY *const ATL::CVarTypeInfo<tagCY>::pmField; // 0x761CF0
extern tagCY **const ATL::CVarTypeInfo<tagCY *>::pmField; // 0x761CF8
extern _GUID IID_IAxWinHostWindowLic; // 0x761D0C
extern _GUID IID_IAxWinAmbientDispatch; // 0x761D2C
extern _GUID LIBID_ATLLib; // 0x761D3C
extern ATL::CComModule *ATL::_pModule; // 0x8439E0
extern bool ATL::CAtlBaseModule::m_bInitFailed; // 0x8439E4
extern ATL::_ATL_OBJMAP_ENTRY110 *__pobjMapEntryFirst; // 0x8277B4
extern ATL::_ATL_OBJMAP_ENTRY110 *__pobjMapEntryLast; // 0x8277B8
extern HRESULT (*ATL::_pPerfRegFunc)(HINSTANCE__ *); // 0x8439E8
extern HRESULT (*ATL::_pPerfUnRegFunc)(); // 0x8439EC
extern bool ATL::_AtlRegisterPerUser; // 0x8439F0
extern std::_Iostream_error_category std::_Error_objects<int>::_Iostream_object; // 0x833F70
extern _GUID IID_IAxWinAmbientDispatchEx; // 0x761DE4
extern _GUID IID_IInternalConnection; // 0x761DF8
extern char const ATL::chDirSep; // 0x761E1F
extern char const ATL::chRightBracket; // 0x761E21
extern char const ATL::chLeftBracket; // 0x761E22
extern char const ATL::chQuote; // 0x761E23
extern char const ATL::chEquals; // 0x761E24
extern char const *const ATL::szStringVal; // 0x761E28
extern char const *const ATL::multiszStringVal; // 0x761E30
extern char const *const ATL::szDwordVal; // 0x761E38
extern char const *const ATL::szBinaryVal; // 0x761E40
extern char const *const ATL::szValToken; // 0x761E4C
extern char const *const ATL::szForceRemove; // 0x761E54
extern char const *const ATL::szNoRemove; // 0x761E64
extern char const *const ATL::szDelete; // 0x761E74
extern unsigned __int32 ATL::CComApartment::ATL_CREATE_OBJECT; // 0x8439F4
extern char *const ATL::CVarTypeInfo<char>::pmField; // 0x761E94
extern ATL::IAtlAutoThreadModule *ATL::_pAtlAutoThreadModule; // 0x8439F8
extern unsigned char *const ATL::CVarTypeInfo<unsigned char>::pmField; // 0x761E9C
extern _GUID CLSID_Registrar; // 0x761EA4
extern char **const ATL::CVarTypeInfo<char *>::pmField; // 0x761EB8
extern unsigned char **const ATL::CVarTypeInfo<unsigned char *>::pmField; // 0x761ED4
extern _GUID IID_IRegistrar; // 0x761EEC
extern short *const ATL::CVarTypeInfo<short>::pmField; // 0x761EFC
extern short **const ATL::CVarTypeInfo<short *>::pmField; // 0x761F04
extern unsigned short *const ATL::CVarTypeInfo<unsigned short>::pmField; // 0x761F0C
extern unsigned short **const ATL::CVarTypeInfo<unsigned short *>::pmField; // 0x761F18
extern __int32 *const ATL::CVarTypeInfo<int>::pmField; // 0x761F24
extern __int32 **const ATL::CVarTypeInfo<int *>::pmField; // 0x761F38
extern unsigned __int32 *const ATL::CVarTypeInfo<unsigned int>::pmField; // 0x761F54
extern unsigned __int32 **const ATL::CVarTypeInfo<unsigned int *>::pmField; // 0x761F6C
extern long *const ATL::CVarTypeInfo<long>::pmField; // 0x761F90
extern char const *const ATL::CRegParser::rgszNeverDelete[12]; // 0x761FB0
extern long **const ATL::CVarTypeInfo<long *>::pmField; // 0x761FE0
extern __int32 const ATL::CRegParser::cbNeverDelete; // 0x761FE4
extern _GUID IID_IDocHostUIHandlerDispatch; // 0x761FEC
extern unsigned long *const ATL::CVarTypeInfo<unsigned long>::pmField; // 0x762004
extern unsigned long **const ATL::CVarTypeInfo<unsigned long *>::pmField; // 0x76200C
extern long long *const ATL::CVarTypeInfo<__int64>::pmField; // 0x762014
extern long long **const ATL::CVarTypeInfo<__int64 *>::pmField; // 0x76201C
extern unsigned long long *const ATL::CVarTypeInfo<unsigned __int64>::pmField; // 0x762024
extern unsigned long long **const ATL::CVarTypeInfo<unsigned __int64 *>::pmField; // 0x76202C

/* ---------- private variables */

/* ---------- public code */

_extern _sub_460779(SteamP2PNetwork *const, Net::Session *);
SteamP2PNetwork::SteamP2PNetwork(Net::Session *) // 0x460779
{
    mangled_assert("??0SteamP2PNetwork@@QAE@PAVSession@Net@@@Z");
    todo("implement");
    _sub_460779(this, arg);
}

_extern _sub_460986(boost::bad_weak_ptr *const, boost::bad_weak_ptr const &);
_inline boost::bad_weak_ptr::bad_weak_ptr(boost::bad_weak_ptr const &) // 0x460986
{
    mangled_assert("??0bad_weak_ptr@boost@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
    _sub_460986(this, arg);
}

_extern _sub_46099F(boost::bad_weak_ptr *const);
_inline boost::bad_weak_ptr::bad_weak_ptr() // 0x46099F
{
    mangled_assert("??0bad_weak_ptr@boost@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_46099F(this);
}

_extern void _sub_460A26(std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned int> > > *const);
_inline std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned int> > >::~_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned int> > >() // 0x460A26
{
    mangled_assert("??1?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@I@std@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_460A26(this);
}

_extern void _sub_460A27(std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned int> > > *const);
_inline std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned int> > >::~_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned int> > >() // 0x460A27
{
    mangled_assert("??1?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@I@std@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_460A27(this);
}

_extern void _sub_460A28(std::_Deque_val<std::_Deque_simple_types<unsigned int> > *const);
_inline std::_Deque_val<std::_Deque_simple_types<unsigned int> >::~_Deque_val<std::_Deque_simple_types<unsigned int> >() // 0x460A28
{
    mangled_assert("??1?$_Deque_val@U?$_Deque_simple_types@I@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_460A28(this);
}

_extern void _sub_460A37(std::_List_buy<SteamP2PNetwork::Packet,std::allocator<SteamP2PNetwork::Packet> > *const);
_inline std::_List_buy<SteamP2PNetwork::Packet,std::allocator<SteamP2PNetwork::Packet> >::~_List_buy<SteamP2PNetwork::Packet,std::allocator<SteamP2PNetwork::Packet> >() // 0x460A37
{
    mangled_assert("??1?$_List_buy@UPacket@SteamP2PNetwork@@V?$allocator@UPacket@SteamP2PNetwork@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_460A37(this);
}

_extern void _sub_460A8E(std::_Tree_buy<std::pair<unsigned int const ,unsigned int>,std::allocator<std::pair<unsigned int const ,unsigned int> > > *const);
_inline std::_Tree_buy<std::pair<unsigned int const ,unsigned int>,std::allocator<std::pair<unsigned int const ,unsigned int> > >::~_Tree_buy<std::pair<unsigned int const ,unsigned int>,std::allocator<std::pair<unsigned int const ,unsigned int> > >() // 0x460A8E
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBII@std@@V?$allocator@U?$pair@$$CBII@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_460A8E(this);
}

_extern void _sub_460A97(std::_Tree_buy<std::pair<unsigned int const ,SteamP2PNetwork::ReceiveQueue>,std::allocator<std::pair<unsigned int const ,SteamP2PNetwork::ReceiveQueue> > > *const);
_inline std::_Tree_buy<std::pair<unsigned int const ,SteamP2PNetwork::ReceiveQueue>,std::allocator<std::pair<unsigned int const ,SteamP2PNetwork::ReceiveQueue> > >::~_Tree_buy<std::pair<unsigned int const ,SteamP2PNetwork::ReceiveQueue>,std::allocator<std::pair<unsigned int const ,SteamP2PNetwork::ReceiveQueue> > >() // 0x460A97
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBIUReceiveQueue@SteamP2PNetwork@@@std@@V?$allocator@U?$pair@$$CBIUReceiveQueue@SteamP2PNetwork@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_460A97(this);
}

_extern void _sub_460AA0(std::_Tree_comp<0,std::_Tmap_traits<unsigned int,unsigned int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,unsigned int> >,0> > *const);
_inline std::_Tree_comp<0,std::_Tmap_traits<unsigned int,unsigned int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,unsigned int> >,0> >::~_Tree_comp<0,std::_Tmap_traits<unsigned int,unsigned int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,unsigned int> >,0> >() // 0x460AA0
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@IIU?$less@I@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_460AA0(this);
}

_extern void _sub_460AA9(std::_Tree_comp<0,std::_Tmap_traits<unsigned int,SteamP2PNetwork::ReceiveQueue,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,SteamP2PNetwork::ReceiveQueue> >,0> > *const);
_inline std::_Tree_comp<0,std::_Tmap_traits<unsigned int,SteamP2PNetwork::ReceiveQueue,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,SteamP2PNetwork::ReceiveQueue> >,0> >::~_Tree_comp<0,std::_Tmap_traits<unsigned int,SteamP2PNetwork::ReceiveQueue,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,SteamP2PNetwork::ReceiveQueue> >,0> >() // 0x460AA9
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@IUReceiveQueue@SteamP2PNetwork@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUReceiveQueue@SteamP2PNetwork@@@std@@@4@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_460AA9(this);
}

_extern void _sub_460B89(std::map<unsigned int,unsigned int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,unsigned int> > > *const);
_inline std::map<unsigned int,unsigned int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,unsigned int> > >::~map<unsigned int,unsigned int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,unsigned int> > >() // 0x460B89
{
    mangled_assert("??1?$map@IIU?$less@I@std@@V?$allocator@U?$pair@$$CBII@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_460B89(this);
}

_extern void _sub_460B8E(std::map<unsigned int,SteamP2PNetwork::ReceiveQueue,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,SteamP2PNetwork::ReceiveQueue> > > *const);
_inline std::map<unsigned int,SteamP2PNetwork::ReceiveQueue,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,SteamP2PNetwork::ReceiveQueue> > >::~map<unsigned int,SteamP2PNetwork::ReceiveQueue,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,SteamP2PNetwork::ReceiveQueue> > >() // 0x460B8E
{
    mangled_assert("??1?$map@IUReceiveQueue@SteamP2PNetwork@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUReceiveQueue@SteamP2PNetwork@@@std@@@4@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_460B8E(this);
}

_extern void _sub_460B93(std::pair<unsigned int const ,SteamP2PNetwork::ReceiveQueue> *const);
_inline std::pair<unsigned int const ,SteamP2PNetwork::ReceiveQueue>::~pair<unsigned int const ,SteamP2PNetwork::ReceiveQueue>() // 0x460B93
{
    mangled_assert("??1?$pair@$$CBIUReceiveQueue@SteamP2PNetwork@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_460B93(this);
}

_extern void _sub_460B9B(std::pair<unsigned int,SteamP2PNetwork::ReceiveQueue> *const);
_inline std::pair<unsigned int,SteamP2PNetwork::ReceiveQueue>::~pair<unsigned int,SteamP2PNetwork::ReceiveQueue>() // 0x460B9B
{
    mangled_assert("??1?$pair@IUReceiveQueue@SteamP2PNetwork@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_460B9B(this);
}

_extern void _sub_460BA3(std::pair<unsigned long,SteamP2PNetwork::ReceiveQueue> *const);
_inline std::pair<unsigned long,SteamP2PNetwork::ReceiveQueue>::~pair<unsigned long,SteamP2PNetwork::ReceiveQueue>() // 0x460BA3
{
    mangled_assert("??1?$pair@KUReceiveQueue@SteamP2PNetwork@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_460BA3(this);
}

_extern void _sub_460BAB(std::queue<unsigned int,std::deque<unsigned int,std::allocator<unsigned int> > > *const);
_inline std::queue<unsigned int,std::deque<unsigned int,std::allocator<unsigned int> > >::~queue<unsigned int,std::deque<unsigned int,std::allocator<unsigned int> > >() // 0x460BAB
{
    mangled_assert("??1?$queue@IV?$deque@IV?$allocator@I@std@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_460BAB(this);
}

_extern void _sub_460BBB(boost::shared_ptr<FrameOrders> *const);
_inline boost::shared_ptr<FrameOrders>::~shared_ptr<FrameOrders>() // 0x460BBB
{
    mangled_assert("??1?$shared_ptr@VFrameOrders@@@boost@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_460BBB(this);
}

_extern void _sub_460BC7(boost::detail::sp_counted_base_impl<FrameOrders *,boost::checked_deleter<FrameOrders> > *const);
_inline boost::detail::sp_counted_base_impl<FrameOrders *,boost::checked_deleter<FrameOrders> >::~sp_counted_base_impl<FrameOrders *,boost::checked_deleter<FrameOrders> >() // 0x460BC7
{
    mangled_assert("??1?$sp_counted_base_impl@PAVFrameOrders@@U?$checked_deleter@VFrameOrders@@@boost@@@detail@boost@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_460BC7(this);
}

_extern void _sub_460BED(Net::Message *const);
_inline Net::Message::~Message() // 0x460BED
{
    mangled_assert("??1Message@Net@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_460BED(this);
}

_extern void _sub_460BF5(SteamP2PNetwork::Packet *const);
_inline SteamP2PNetwork::Packet::~Packet() // 0x460BF5
{
    mangled_assert("??1Packet@SteamP2PNetwork@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_460BF5(this);
}

_extern void _sub_460BFD(SteamP2PNetwork::ReceiveQueue *const);
_inline SteamP2PNetwork::ReceiveQueue::~ReceiveQueue() // 0x460BFD
{
    mangled_assert("??1ReceiveQueue@SteamP2PNetwork@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_460BFD(this);
}

_extern void _sub_460C3C(SteamP2PNetwork *const);
SteamP2PNetwork::~SteamP2PNetwork() // 0x460C3C
{
    mangled_assert("??1SteamP2PNetwork@@UAE@XZ");
    todo("implement");
    _sub_460C3C(this);
}

_extern void _sub_460CB4(std::_Generic_error_category *const);
_inline std::_Generic_error_category::~_Generic_error_category() // 0x460CB4
{
    mangled_assert("??1_Generic_error_category@std@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_460CB4(this);
}

_extern void _sub_460CBB(std::_Iostream_error_category *const);
_inline std::_Iostream_error_category::~_Iostream_error_category() // 0x460CBB
{
    mangled_assert("??1_Iostream_error_category@std@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_460CBB(this);
}

_extern void _sub_460CC3(boost::bad_weak_ptr *const);
_inline boost::bad_weak_ptr::~bad_weak_ptr() // 0x460CC3
{
    mangled_assert("??1bad_weak_ptr@boost@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_460CC3(this);
}

_extern boost::shared_ptr<FrameOrders> &_sub_460CEB(boost::shared_ptr<FrameOrders> *const, boost::shared_ptr<FrameOrders> const &);
_inline boost::shared_ptr<FrameOrders> &boost::shared_ptr<FrameOrders>::operator=(boost::shared_ptr<FrameOrders> const &) // 0x460CEB
{
    mangled_assert("??4?$shared_ptr@VFrameOrders@@@boost@@QAEAAV01@ABV01@@Z");
    compiler_generated();
    todo("implement");
    boost::shared_ptr<FrameOrders> & __result = _sub_460CEB(this, arg);
    return __result;
}

_extern SteamP2PNetwork::Packet &_sub_460D08(SteamP2PNetwork::Packet *const, SteamP2PNetwork::Packet const &);
_inline SteamP2PNetwork::Packet &SteamP2PNetwork::Packet::operator=(SteamP2PNetwork::Packet const &) // 0x460D08
{
    mangled_assert("??4Packet@SteamP2PNetwork@@QAEAAU01@ABU01@@Z");
    compiler_generated();
    todo("implement");
    SteamP2PNetwork::Packet & __result = _sub_460D08(this, arg);
    return __result;
}

_extern void _sub_461597(SteamP2PNetwork *const, unsigned __int32);
void SteamP2PNetwork::DropPlayer(unsigned __int32) // 0x461597
{
    mangled_assert("?DropPlayer@SteamP2PNetwork@@AAEXI@Z");
    todo("implement");
    _sub_461597(this, arg);
}

_extern bool _sub_46163C(SteamP2PNetwork *const);
bool SteamP2PNetwork::Execute() // 0x46163C
{
    mangled_assert("?Execute@SteamP2PNetwork@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_46163C(this);
    return __result;
}

_extern __int32 _sub_4617E6(SteamP2PNetwork *const);
__int32 SteamP2PNetwork::GetSimLoopCount() // 0x4617E6
{
    mangled_assert("?GetSimLoopCount@SteamP2PNetwork@@UAEHXZ");
    todo("implement");
    __int32 __result = _sub_4617E6(this);
    return __result;
}

_extern bool _sub_4618E5(SteamP2PNetwork *const, unsigned __int32);
bool SteamP2PNetwork::IsPlayerLagging(unsigned __int32) // 0x4618E5
{
    mangled_assert("?IsPlayerLagging@SteamP2PNetwork@@UAE_NI@Z");
    todo("implement");
    bool __result = _sub_4618E5(this, arg);
    return __result;
}

_extern FrameOrders const *_sub_461C10(SteamP2PNetwork const *const);
FrameOrders const *SteamP2PNetwork::PeekNextFrameOrders() const // 0x461C10
{
    mangled_assert("?PeekNextFrameOrders@SteamP2PNetwork@@UBEPBVFrameOrders@@XZ");
    todo("implement");
    FrameOrders const * __result = _sub_461C10(this);
    return __result;
}

_extern bool _sub_461C4B(SteamP2PNetwork *const);
bool SteamP2PNetwork::PerformSyncChecking() // 0x461C4B
{
    mangled_assert("?PerformSyncChecking@SteamP2PNetwork@@AAE_NXZ");
    todo("implement");
    bool __result = _sub_461C4B(this);
    return __result;
}

_extern void _sub_461E9E(SteamP2PNetwork *const, std::auto_ptr<ChatOrder>);
void SteamP2PNetwork::SendChatOrder(std::auto_ptr<ChatOrder>) // 0x461E9E
{
    mangled_assert("?SendChatOrder@SteamP2PNetwork@@AAEXV?$auto_ptr@VChatOrder@@@std@@@Z");
    todo("implement");
    _sub_461E9E(this, arg);
}

_extern void _sub_462072(SteamP2PNetwork *const, std::auto_ptr<Order>);
void SteamP2PNetwork::SendOrder(std::auto_ptr<Order>) // 0x462072
{
    mangled_assert("?SendOrder@SteamP2PNetwork@@UAEXV?$auto_ptr@VOrder@@@std@@@Z");
    todo("implement");
    _sub_462072(this, arg);
}

_extern __int32 _sub_461779(SteamP2PNetwork const *const);
__int32 SteamP2PNetwork::GetHighestPing() const // 0x461779
{
    mangled_assert("?GetHighestPing@SteamP2PNetwork@@ABEHXZ");
    todo("implement");
    __int32 __result = _sub_461779(this);
    return __result;
}

_extern void _sub_46199B(SteamP2PNetwork *const, Net::Message const &);
void SteamP2PNetwork::OnGameMessage(Net::Message const &) // 0x46199B
{
    mangled_assert("?OnGameMessage@SteamP2PNetwork@@AAEXABVMessage@Net@@@Z");
    todo("implement");
    _sub_46199B(this, arg);
}

_extern void _sub_461B39(SteamP2PNetwork *const, Net::Message const &);
void SteamP2PNetwork::OnPlayerDestroyed(Net::Message const &) // 0x461B39
{
    mangled_assert("?OnPlayerDestroyed@SteamP2PNetwork@@AAEXABVMessage@Net@@@Z");
    todo("implement");
    _sub_461B39(this, arg);
}

_extern void _sub_461B1E(SteamP2PNetwork *const, Net::Message const &);
void SteamP2PNetwork::OnHostMigration(Net::Message const &) // 0x461B1E
{
    mangled_assert("?OnHostMigration@SteamP2PNetwork@@AAEXABVMessage@Net@@@Z");
    todo("implement");
    _sub_461B1E(this, arg);
}

_extern void _sub_461E23(SteamP2PNetwork *const);
void SteamP2PNetwork::ProcessNetworkMessages() // 0x461E23
{
    mangled_assert("?ProcessNetworkMessages@SteamP2PNetwork@@AAEXXZ");
    todo("implement");
    _sub_461E23(this);
}

_extern __int32 _sub_464616(Task * const, float);
__int32 SteamP2PNetwork::taskFunction(float) // 0x464616
{
    mangled_assert("?taskFunction@SteamP2PNetwork@@UAEHM@Z");
    // __shifted(SteamP2PNetwork, 4);
    todo("implement");
    __int32 __result = _sub_464616(this, arg);
    return __result;
}

_extern _sub_460672(SteamP2PNetwork::Packet *const, unsigned __int32, unsigned __int32, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
SteamP2PNetwork::Packet::Packet(unsigned __int32, unsigned __int32, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x460672
{
    mangled_assert("??0Packet@SteamP2PNetwork@@QAE@IIABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    _sub_460672(this, arg, arg, arg);
}

_extern _sub_4606EF(SteamP2PNetwork::ReceiveQueue *const, SteamP2PNetwork::ReceiveQueue const &);
_inline SteamP2PNetwork::ReceiveQueue::ReceiveQueue(SteamP2PNetwork::ReceiveQueue const &) // 0x4606EF
{
    mangled_assert("??0ReceiveQueue@SteamP2PNetwork@@QAE@ABU01@@Z");
    compiler_generated();
    todo("implement");
    _sub_4606EF(this, arg);
}

_extern _sub_46074B(SteamP2PNetwork::ReceiveQueue *const);
SteamP2PNetwork::ReceiveQueue::ReceiveQueue() // 0x46074B
{
    mangled_assert("??0ReceiveQueue@SteamP2PNetwork@@QAE@XZ");
    todo("implement");
    _sub_46074B(this);
}

_extern void _sub_461431(SteamP2PNetwork::ReceiveQueue *const);
void SteamP2PNetwork::ReceiveQueue::ConvertPacket() // 0x461431
{
    mangled_assert("?ConvertPacket@ReceiveQueue@SteamP2PNetwork@@AAEXXZ");
    todo("implement");
    _sub_461431(this);
}

_extern void _sub_461573(SteamP2PNetwork::ReceiveQueue *const);
void SteamP2PNetwork::ReceiveQueue::ConvertPackets() // 0x461573
{
    mangled_assert("?ConvertPackets@ReceiveQueue@SteamP2PNetwork@@QAEXXZ");
    todo("implement");
    _sub_461573(this);
}

_extern void _sub_461B86(SteamP2PNetwork::ReceiveQueue *const, std::string);
void SteamP2PNetwork::ReceiveQueue::OnReceive(std::string) // 0x461B86
{
    mangled_assert("?OnReceive@ReceiveQueue@SteamP2PNetwork@@QAEXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    _sub_461B86(this, arg);
}

_extern bool _sub_46124A(SteamP2PNetwork::PacketSortPredicate *const, SteamP2PNetwork::Packet const &, SteamP2PNetwork::Packet const &);
_inline bool SteamP2PNetwork::PacketSortPredicate::operator()(SteamP2PNetwork::Packet const &, SteamP2PNetwork::Packet const &) // 0x46124A
{
    mangled_assert("??RPacketSortPredicate@SteamP2PNetwork@@QAE_NABUPacket@1@0@Z");
    todo("implement");
    bool __result = _sub_46124A(this, arg, arg);
    return __result;
}

_extern void _sub_46182D(SteamP2PNetwork::ReceiveQueue *const, SteamP2PNetwork::Packet const &);
void SteamP2PNetwork::ReceiveQueue::InsertPacket(SteamP2PNetwork::Packet const &) // 0x46182D
{
    mangled_assert("?InsertPacket@ReceiveQueue@SteamP2PNetwork@@AAEXABUPacket@2@@Z");
    todo("implement");
    _sub_46182D(this, arg);
}

_extern _sub_460598(boost::shared_ptr<FrameOrders> *const, boost::shared_ptr<FrameOrders> const &);
_inline boost::shared_ptr<FrameOrders>::shared_ptr<FrameOrders>(boost::shared_ptr<FrameOrders> const &) // 0x460598
{
    mangled_assert("??0?$shared_ptr@VFrameOrders@@@boost@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
    _sub_460598(this, arg);
}

_extern _sub_46061E(INetwork *const);
_inline INetwork::INetwork() // 0x46061E
{
    mangled_assert("??0INetwork@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_46061E(this);
}

_extern _sub_46064F(SteamP2PNetwork::Packet *const, SteamP2PNetwork::Packet const &);
_inline SteamP2PNetwork::Packet::Packet(SteamP2PNetwork::Packet const &) // 0x46064F
{
    mangled_assert("??0Packet@SteamP2PNetwork@@QAE@ABU01@@Z");
    compiler_generated();
    todo("implement");
    _sub_46064F(this, arg);
}

/* ---------- private code */
#endif
