#if 0
/* ---------- headers */

#include "decomp.h"
#include <cguid.h>
#include <boost\preprocessor\array\size.hpp>
#include <xiosbase>
#include <atlsimpcoll.h>
#include <boost\preprocessor\cat.hpp>
#include <assist\stlexsmallvector.h>
#include <xlocale>
#include <consoleapi.h>
#include <boost\preprocessor\slot\slot.hpp>
#include <stdexcept>
#include <xstring>
#include <namedpipeapi.h>
#include <ioapiset.h>
#include <boost\preprocessor\slot\detail\def.hpp>
#include <boost\type_traits\is_same.hpp>
#include <xmemory0>
#include <boost\function\detail\prologue.hpp>
#include <gamemsg.h>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <memoryapi.h>
#include <dlgs.h>
#include <winperf.h>
#include <statreg.h>
#include <boost\function\function_base.hpp>
#include <memory\memorylib.h>
#include <boost\type_traits\arithmetic_traits.hpp>
#include <crtdefs.h>
#include <wtypesbase.h>
#include <winspool.h>
#include <atlwinverapi.h>
#include <boost\type_traits\is_arithmetic.hpp>
#include <boost\mem_fn.hpp>
#include <profile\profile.h>
#include <prsht.h>
#include <boost\type_traits\is_integral.hpp>
#include <boost\type_traits\detail\ice_not.hpp>
#include <boost\get_pointer.hpp>
#include <iostream>
#include <Player.h>
#include <boost\type_traits\detail\bool_trait_def.hpp>
#include <boost\preprocessor\enum.hpp>
#include <NetworkDP8\source\message.h>
#include <GameObj.h>
#include <ResearchManager.h>
#include <wingdi.h>
#include <boost\type_traits\detail\template_arity_spec.hpp>
#include <boost\preprocessor\repetition\enum.hpp>
#include <config.h>
#include <rpc.h>
#include <boost\mpl\aux_\template_arity_fwd.hpp>
#include <boost\preprocessor\debug\error.hpp>
#include <pshpack4.h>
#include <boost\preprocessor\detail\auto_rec.hpp>
#include <joystickapi.h>
#include <boost\mpl\aux_\preprocessor\params.hpp>
#include <boost\preprocessor\control\iif.hpp>
#include <util\statmonitor.h>
#include <rpcdce.h>
#include <boost\mpl\aux_\config\preprocessor.hpp>
#include <boost\preprocessor\punctuation\comma_if.hpp>
#include <util\utilexports.h>
#include <Mathlib\matrix3.h>
#include <winerror.h>
#include <boost\mpl\aux_\lambda_support.hpp>
#include <boost\preprocessor\control\if.hpp>
#include <platform\timer.h>
#include <dbdefines.h>
#include <boost\checked_delete.hpp>
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
#include <new>
#include <Waypoint.h>
#include <Mathlib\mathutil.h>
#include <atldef.h>
#include <atlcomcli.h>
#include <boost\mpl\bool_fwd.hpp>
#include <boost\preprocessor\tuple\eat.hpp>
#include <SobUnmoveable.h>
#include <xstddef>
#include <atlrc.h>
#include <olectl.h>
#include <boost\preprocessor\tuple\rem.hpp>
#include <sob.h>
#include <new.h>
#include <interlockedapi.h>
#include <timezoneapi.h>
#include <stringapiset.h>
#include <reason.h>
#include <ocidl.h>
#include <boost\preprocessor\enum_params.hpp>
#include <type_traits>
#include <sobstatic.h>
#include <boost\type_traits\composite_traits.hpp>
#include <boost\type_traits\detail\ice_eq.hpp>
#include <boost\preprocessor\repetition\enum_params.hpp>
#include <Collision\Primitives\sphere.h>
#include <UserInterface\SharedGraphicFactory.h>
#include <xlocinfo>
#include <boost\type_traits\is_array.hpp>
#include <boost\preprocessor\repeat.hpp>
#include <UserInterface\Graphic.h>
#include <boost\type_traits\config.hpp>
#include <boost\preprocessor\inc.hpp>
#include <Render\objects\texture.h>
#include <securitybaseapi.h>
#include <boost\preprocessor\iteration\detail\iter\forward1.hpp>
#include <Render\objects\objects.h>
#include <Network\SimSpeedController.h>
#include <boost\mpl\aux_\config\static_constant.hpp>
#include <boost\preprocessor\iteration\detail\bounds\lower1.hpp>
#include <boost\thread\mutex.hpp>
#include <Render\objects\core.h>
#include <boost\preprocessor\slot\detail\shared.hpp>
#include <boost\thread\detail\lock.hpp>
#include <Menus\ErrorMessage.h>
#include <Render\gl\types.h>
#include <xutility>
#include <sstream>
#include <oleidl.h>
#include <mcx.h>
#include <boost\preprocessor\iteration\detail\bounds\upper1.hpp>
#include <boost\thread\exceptions.hpp>
#include <UserInterface\NewUIScreen.h>
#include <UserInterface\signals.h>
#include <Mathlib\matvec.h>
#include <Menus\MenuSupport.h>
#include <xatomic0.h>
#include <utility>
#include <iosfwd>
#include <boost\function\detail\function_iterate.hpp>
#include <boost\thread\detail\config.hpp>
#include <region.h>
#include <vector>
#include <boost\function\detail\maybe_include.hpp>
#include <platform\keydefines.h>
#include <xmemory>
#include <boost\function\function_template.hpp>
#include <fileio\fileioexports.h>
#include <debugapi.h>
#include <boost\type_traits\is_class.hpp>
#include <fileapi.h>
#include <boost\type_traits\is_union.hpp>
#include <Render\gl\lotypes.h>
#include <boost\type_traits\remove_cv.hpp>
#include <boost\type_traits\broken_compiler_spec.hpp>
#include <compiler\compilerconfig.h>
#include <cderr.h>
#include <boost\type_traits\detail\cv_traits_impl.hpp>
#include <dde.h>
#include <objidl.h>
#include <msxml.h>
#include <winsock2.h>
#include <boost\type_traits\is_enum.hpp>
#include <winapifamily.h>
#include <boost\type_traits\add_reference.hpp>
#include <recorder.h>
#include <list>
#include <windows.h>
#include <boost\type_traits\is_reference.hpp>
#include <FrameOrders.h>
#include <Render\gl\r_types.h>
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
#include <boost\type_traits\detail\type_trait_def.hpp>
#include <Mathlib\vector3.h>
#include <Render\objects\textureproxy.h>
#include <Mathlib\vector4.h>
#include <Collision\BVH\octree.h>
#include <boost\ref.hpp>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <map>
#include <mmiscapi2.h>
#include <ime_cmodes.h>
#include <Collision\BVH\proxy.h>
#include <xtree>
#include <profileapi.h>
#include <LevelDesc.h>
#include <Collision\intersect.h>
#include <boost\type_traits\is_pointer.hpp>
#include <Hash.h>
#include <Collision\Primitives\obb.h>
#include <Collision\primitivesfwd.h>
#include <boost\scoped_ptr.hpp>
#include <synchapi.h>
#include <boost\assert.hpp>
#include <fileio\md5.h>
#include <mmsystem.h>
#include <task.h>
#include <mmsyscom.h>
#include <process.h>
#include <stack>
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
#include <Mathlib\vector2.h>
#include <combaseapi.h>
#include <util\types.h>
#include <xfacet>
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
#include <boost\cstdint.hpp>
#include <windef.h>
#include <minwindef.h>
#include <bemapiset.h>
#include <rpcdcep.h>
#include <boost\config.hpp>
#include <Collision\Primitives\aabb.h>
#include <specstrings.h>
#include <playsoundapi.h>
#include <cassert>
#include <specstrings_strict.h>
#include <assert.h>
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
#include <platform\inputinterface.h>
#include <oaidl.h>
#include <Mathlib\quat.h>
#include <commdlg.h>
#include <namespaceapi.h>
#include <ktmtypes.h>
#include <boost\pending\ct_if.hpp>
#include <dpapi.h>
#include <propidl.h>
#include <NetworkDP8\source\sessionenum.h>
#include <assist\typemagic.h>
#include <boost\static_assert.hpp>
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
#include <atlcore.h>
#include <boost\type_traits\is_pod.hpp>
#include <winscard.h>
#include <tchar.h>
#include <boost\type_traits\is_scalar.hpp>
#include <orders.h>
#include <Mathlib\mathlibdll.h>
#include <wtypes.h>
#include <mbstring.h>
#include <orders_base.h>
#include <Mathlib\fastmath.h>
#include <errhandlingapi.h>
#include <rpcndr.h>
#include <boost\type_traits\has_trivial_destructor.hpp>
#include <sobid.h>
#include <processenv.h>
#include <rpcnsip.h>
#include <boost\type_traits\intrinsics.hpp>
#include <guiddef.h>
#include <stralign.h>
#include <jobapi.h>
#include <SelTarg.h>
#include <pathpoints.h>
#include <prim.h>
#include <apiset.h>
#include <NetworkDP8\source\sessiondesc.h>
#include <debug\db.h>
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
#include <deque>
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
#include <datetimeapi.h>
#include <shtypes.h>
#include <boost\type_traits\detail\is_mem_fun_pointer_impl.hpp>
#include <Collision\Primitives\capsule.h>
#include <winnt.h>
#include <processtopologyapi.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <Collision\Primitives\segment.h>
#include <Render\objects\textureregistry.h>
#include <kernelspecs.h>
#include <urlmon.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <Collision\BVH\profiling.h>
#include <basetsd.h>
#include <pshpack2.h>
#include <selection.h>
#include <libloaderapi.h>
#include <savegamedef.h>
#include <sysinfoapi.h>
#include <boost\type_traits\is_fundamental.hpp>
#include <boost\detail\shared_count.hpp>
#include <atlchecked.h>
#include <boost\type_traits\is_void.hpp>
#include <boost\type_traits\ice.hpp>
#include <winreg.h>
#include <bcrypt.h>
#include <atlexcept.h>
#include <boost\type_traits\detail\ice_and.hpp>
#include <commandtype.h>
#include <boost\detail\lwm_win32.hpp>
#include <atltrace.h>
#include <oleacc.h>
#include <BuildManager.h>
#include <atlconv.h>
#include <SOBGroupManager.h>
#include <winsock.h>
#include <atlalloc.h>
#include <hash_map>
#include <nb30.h>
#include <wincrypt.h>
#include <xhash>
#include <NetworkDP8\source\authentication.h>
#include <timeapi.h>
#include <system_error>
#include <NetworkDP8\source\session.h>
#include <NetworkDP8\source\directplay.h>
#include <HyperspaceManager.h>
#include <securityappcontainer.h>
#include <rpcsal.h>
#include <boost\thread\thread.hpp>
#include <Network\P2PNetwork.h>
#include <fibersapi.h>
#include <boost\function.hpp>
#include <boost\bind\mem_fn_cc.hpp>
#include <localizer\localizer.h>
#include <Network\inetwork.h>
#include <wchar.h>
#include <boost\utility.hpp>
#include <boost\preprocessor\iterate.hpp>
#include <boost\preprocessor\iteration\iterate.hpp>
#include <boost\utility\addressof.hpp>
#include <UserInterface\StyleSheet.h>
#include <iterator>
#include <winver.h>
#include <boost\preprocessor\arithmetic\dec.hpp>
#include <boost\detail\workaround.hpp>
#include <UserInterface\pch.h>
#include <istream>
#include <verrsrc.h>
#include <oleauto.h>
#include <boost\preprocessor\config\config.hpp>
#include <queue>
#include <ostream>
#include <winioctl.h>
#include <servprov.h>
#include <boost\preprocessor\arithmetic\inc.hpp>
#include <ios>
#include <realtimeapiset.h>
#include <tvout.h>
#include <boost\preprocessor\array\elem.hpp>
#include <gameSettings.h>
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
#include <streambuf>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_5BDAB4(P2PNetwork *const, Net::Session *);
P2PNetwork::P2PNetwork(Net::Session *) // 0x5BDAB4
{
    mangled_assert("??0P2PNetwork@@QAE@PAVSession@Net@@@Z");
    todo("implement");
    _sub_5BDAB4(this, arg);
}

_extern _sub_5BDC9B(P2PNetwork::Packet *const, P2PNetwork::Packet const &);
_inline P2PNetwork::Packet::Packet(P2PNetwork::Packet const &) // 0x5BDC9B
{
    mangled_assert("??0Packet@P2PNetwork@@QAE@ABU01@@Z");
    compiler_generated();
    todo("implement");
    _sub_5BDC9B(this, arg);
}

_extern void _sub_5BDE3F(P2PNetwork *const);
P2PNetwork::~P2PNetwork() // 0x5BDE3F
{
    mangled_assert("??1P2PNetwork@@UAE@XZ");
    todo("implement");
    _sub_5BDE3F(this);
}

_extern void _sub_5BDEB7(P2PNetwork::Packet *const);
_inline P2PNetwork::Packet::~Packet() // 0x5BDEB7
{
    mangled_assert("??1Packet@P2PNetwork@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5BDEB7(this);
}

_extern void _sub_5BDEBF(P2PNetwork::ReceiveQueue *const);
_inline P2PNetwork::ReceiveQueue::~ReceiveQueue() // 0x5BDEBF
{
    mangled_assert("??1ReceiveQueue@P2PNetwork@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5BDEBF(this);
}

_extern P2PNetwork::Packet &_sub_5BDEFE(P2PNetwork::Packet *const, P2PNetwork::Packet const &);
_inline P2PNetwork::Packet &P2PNetwork::Packet::operator=(P2PNetwork::Packet const &) // 0x5BDEFE
{
    mangled_assert("??4Packet@P2PNetwork@@QAEAAU01@ABU01@@Z");
    compiler_generated();
    todo("implement");
    P2PNetwork::Packet & __result = _sub_5BDEFE(this, arg);
    return __result;
}

_extern void _sub_5BE2F7(P2PNetwork *const, unsigned __int32);
void P2PNetwork::DropPlayer(unsigned __int32) // 0x5BE2F7
{
    mangled_assert("?DropPlayer@P2PNetwork@@AAEXI@Z");
    todo("implement");
    _sub_5BE2F7(this, arg);
}

_extern bool _sub_5BE394(P2PNetwork *const);
bool P2PNetwork::Execute() // 0x5BE394
{
    mangled_assert("?Execute@P2PNetwork@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_5BE394(this);
    return __result;
}

_extern __int32 _sub_5BE52D(P2PNetwork *const);
__int32 P2PNetwork::GetSimLoopCount() // 0x5BE52D
{
    mangled_assert("?GetSimLoopCount@P2PNetwork@@UAEHXZ");
    todo("implement");
    __int32 __result = _sub_5BE52D(this);
    return __result;
}

_extern bool _sub_5BE61B(P2PNetwork *const, unsigned __int32);
bool P2PNetwork::IsPlayerLagging(unsigned __int32) // 0x5BE61B
{
    mangled_assert("?IsPlayerLagging@P2PNetwork@@UAE_NI@Z");
    todo("implement");
    bool __result = _sub_5BE61B(this, arg);
    return __result;
}

_extern FrameOrders const *_sub_5BE93E(P2PNetwork const *const);
FrameOrders const *P2PNetwork::PeekNextFrameOrders() const // 0x5BE93E
{
    mangled_assert("?PeekNextFrameOrders@P2PNetwork@@UBEPBVFrameOrders@@XZ");
    todo("implement");
    FrameOrders const * __result = _sub_5BE93E(this);
    return __result;
}

_extern bool _sub_5BE979(P2PNetwork *const);
bool P2PNetwork::PerformSyncChecking() // 0x5BE979
{
    mangled_assert("?PerformSyncChecking@P2PNetwork@@AAE_NXZ");
    todo("implement");
    bool __result = _sub_5BE979(this);
    return __result;
}

_extern void _sub_5BEBCC(P2PNetwork *const, std::auto_ptr<ChatOrder>);
void P2PNetwork::SendChatOrder(std::auto_ptr<ChatOrder>) // 0x5BEBCC
{
    mangled_assert("?SendChatOrder@P2PNetwork@@AAEXV?$auto_ptr@VChatOrder@@@std@@@Z");
    todo("implement");
    _sub_5BEBCC(this, arg);
}

_extern void _sub_5BEDA0(P2PNetwork *const, std::auto_ptr<Order>);
void P2PNetwork::SendOrder(std::auto_ptr<Order>) // 0x5BEDA0
{
    mangled_assert("?SendOrder@P2PNetwork@@UAEXV?$auto_ptr@VOrder@@@std@@@Z");
    todo("implement");
    _sub_5BEDA0(this, arg);
}

_extern __int32 _sub_5BE4C4(P2PNetwork const *const);
__int32 P2PNetwork::GetHighestPing() const // 0x5BE4C4
{
    mangled_assert("?GetHighestPing@P2PNetwork@@ABEHXZ");
    todo("implement");
    __int32 __result = _sub_5BE4C4(this);
    return __result;
}

_extern void _sub_5BE6C9(P2PNetwork *const, Net::Message const &);
void P2PNetwork::OnGameMessage(Net::Message const &) // 0x5BE6C9
{
    mangled_assert("?OnGameMessage@P2PNetwork@@AAEXABVMessage@Net@@@Z");
    todo("implement");
    _sub_5BE6C9(this, arg);
}

_extern void _sub_5BE867(P2PNetwork *const, Net::Message const &);
void P2PNetwork::OnPlayerDestroyed(Net::Message const &) // 0x5BE867
{
    mangled_assert("?OnPlayerDestroyed@P2PNetwork@@AAEXABVMessage@Net@@@Z");
    todo("implement");
    _sub_5BE867(this, arg);
}

_extern void _sub_5BE84C(P2PNetwork *const, Net::Message const &);
void P2PNetwork::OnHostMigration(Net::Message const &) // 0x5BE84C
{
    mangled_assert("?OnHostMigration@P2PNetwork@@AAEXABVMessage@Net@@@Z");
    todo("implement");
    _sub_5BE84C(this, arg);
}

_extern void _sub_5BEB51(P2PNetwork *const);
void P2PNetwork::ProcessNetworkMessages() // 0x5BEB51
{
    mangled_assert("?ProcessNetworkMessages@P2PNetwork@@AAEXXZ");
    todo("implement");
    _sub_5BEB51(this);
}

_extern __int32 _sub_5BF982(Task * const, float);
__int32 P2PNetwork::taskFunction(float) // 0x5BF982
{
    mangled_assert("?taskFunction@P2PNetwork@@UAEHM@Z");
    // __shifted(P2PNetwork, 4);
    todo("implement");
    __int32 __result = _sub_5BF982(this, arg);
    return __result;
}

_extern _sub_5BDCBE(P2PNetwork::Packet *const, unsigned __int32, unsigned __int32, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
P2PNetwork::Packet::Packet(unsigned __int32, unsigned __int32, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x5BDCBE
{
    mangled_assert("??0Packet@P2PNetwork@@QAE@IIABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    _sub_5BDCBE(this, arg, arg, arg);
}

_extern _sub_5BDD3B(P2PNetwork::ReceiveQueue *const, P2PNetwork::ReceiveQueue const &);
_inline P2PNetwork::ReceiveQueue::ReceiveQueue(P2PNetwork::ReceiveQueue const &) // 0x5BDD3B
{
    mangled_assert("??0ReceiveQueue@P2PNetwork@@QAE@ABU01@@Z");
    compiler_generated();
    todo("implement");
    _sub_5BDD3B(this, arg);
}

_extern _sub_5BDD97(P2PNetwork::ReceiveQueue *const);
P2PNetwork::ReceiveQueue::ReceiveQueue() // 0x5BDD97
{
    mangled_assert("??0ReceiveQueue@P2PNetwork@@QAE@XZ");
    todo("implement");
    _sub_5BDD97(this);
}

_extern void _sub_5BDDCE(std::_List_buy<P2PNetwork::Packet,std::allocator<P2PNetwork::Packet> > *const);
_inline std::_List_buy<P2PNetwork::Packet,std::allocator<P2PNetwork::Packet> >::~_List_buy<P2PNetwork::Packet,std::allocator<P2PNetwork::Packet> >() // 0x5BDDCE
{
    mangled_assert("??1?$_List_buy@UPacket@P2PNetwork@@V?$allocator@UPacket@P2PNetwork@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5BDDCE(this);
}

_extern void _sub_5BDDFE(std::_Tree_buy<std::pair<unsigned int const ,P2PNetwork::ReceiveQueue>,std::allocator<std::pair<unsigned int const ,P2PNetwork::ReceiveQueue> > > *const);
_inline std::_Tree_buy<std::pair<unsigned int const ,P2PNetwork::ReceiveQueue>,std::allocator<std::pair<unsigned int const ,P2PNetwork::ReceiveQueue> > >::~_Tree_buy<std::pair<unsigned int const ,P2PNetwork::ReceiveQueue>,std::allocator<std::pair<unsigned int const ,P2PNetwork::ReceiveQueue> > >() // 0x5BDDFE
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBIUReceiveQueue@P2PNetwork@@@std@@V?$allocator@U?$pair@$$CBIUReceiveQueue@P2PNetwork@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5BDDFE(this);
}

_extern void _sub_5BDE07(std::_Tree_comp<0,std::_Tmap_traits<unsigned int,P2PNetwork::ReceiveQueue,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,P2PNetwork::ReceiveQueue> >,0> > *const);
_inline std::_Tree_comp<0,std::_Tmap_traits<unsigned int,P2PNetwork::ReceiveQueue,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,P2PNetwork::ReceiveQueue> >,0> >::~_Tree_comp<0,std::_Tmap_traits<unsigned int,P2PNetwork::ReceiveQueue,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,P2PNetwork::ReceiveQueue> >,0> >() // 0x5BDE07
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@IUReceiveQueue@P2PNetwork@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUReceiveQueue@P2PNetwork@@@std@@@4@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5BDE07(this);
}

_extern void _sub_5BDE22(std::map<unsigned int,P2PNetwork::ReceiveQueue,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,P2PNetwork::ReceiveQueue> > > *const);
_inline std::map<unsigned int,P2PNetwork::ReceiveQueue,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,P2PNetwork::ReceiveQueue> > >::~map<unsigned int,P2PNetwork::ReceiveQueue,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,P2PNetwork::ReceiveQueue> > >() // 0x5BDE22
{
    mangled_assert("??1?$map@IUReceiveQueue@P2PNetwork@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUReceiveQueue@P2PNetwork@@@std@@@4@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5BDE22(this);
}

_extern void _sub_5BDE27(std::pair<unsigned int const ,P2PNetwork::ReceiveQueue> *const);
_inline std::pair<unsigned int const ,P2PNetwork::ReceiveQueue>::~pair<unsigned int const ,P2PNetwork::ReceiveQueue>() // 0x5BDE27
{
    mangled_assert("??1?$pair@$$CBIUReceiveQueue@P2PNetwork@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5BDE27(this);
}

_extern void _sub_5BDE2F(std::pair<unsigned int,P2PNetwork::ReceiveQueue> *const);
_inline std::pair<unsigned int,P2PNetwork::ReceiveQueue>::~pair<unsigned int,P2PNetwork::ReceiveQueue>() // 0x5BDE2F
{
    mangled_assert("??1?$pair@IUReceiveQueue@P2PNetwork@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5BDE2F(this);
}

_extern void _sub_5BE191(P2PNetwork::ReceiveQueue *const);
void P2PNetwork::ReceiveQueue::ConvertPacket() // 0x5BE191
{
    mangled_assert("?ConvertPacket@ReceiveQueue@P2PNetwork@@AAEXXZ");
    todo("implement");
    _sub_5BE191(this);
}

_extern void _sub_5BDE37(std::pair<unsigned long,P2PNetwork::ReceiveQueue> *const);
_inline std::pair<unsigned long,P2PNetwork::ReceiveQueue>::~pair<unsigned long,P2PNetwork::ReceiveQueue>() // 0x5BDE37
{
    mangled_assert("??1?$pair@KUReceiveQueue@P2PNetwork@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5BDE37(this);
}

_extern void _sub_5BE2D3(P2PNetwork::ReceiveQueue *const);
void P2PNetwork::ReceiveQueue::ConvertPackets() // 0x5BE2D3
{
    mangled_assert("?ConvertPackets@ReceiveQueue@P2PNetwork@@QAEXXZ");
    todo("implement");
    _sub_5BE2D3(this);
}

_extern void _sub_5BE8B4(P2PNetwork::ReceiveQueue *const, std::string);
void P2PNetwork::ReceiveQueue::OnReceive(std::string) // 0x5BE8B4
{
    mangled_assert("?OnReceive@ReceiveQueue@P2PNetwork@@QAEXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    _sub_5BE8B4(this, arg);
}

_extern bool _sub_5BE11C(P2PNetwork::PacketSortPredicate *const, P2PNetwork::Packet const &, P2PNetwork::Packet const &);
_inline bool P2PNetwork::PacketSortPredicate::operator()(P2PNetwork::Packet const &, P2PNetwork::Packet const &) // 0x5BE11C
{
    mangled_assert("??RPacketSortPredicate@P2PNetwork@@QAE_NABUPacket@1@0@Z");
    todo("implement");
    bool __result = _sub_5BE11C(this, arg, arg);
    return __result;
}

_extern void _sub_5BE568(P2PNetwork::ReceiveQueue *const, P2PNetwork::Packet const &);
void P2PNetwork::ReceiveQueue::InsertPacket(P2PNetwork::Packet const &) // 0x5BE568
{
    mangled_assert("?InsertPacket@ReceiveQueue@P2PNetwork@@AAEXABUPacket@2@@Z");
    todo("implement");
    _sub_5BE568(this, arg);
}

/* ---------- private code */
#endif
