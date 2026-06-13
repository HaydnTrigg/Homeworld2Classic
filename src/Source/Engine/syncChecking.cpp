#if 0
/* ---------- headers */

#include "decomp.h"
#include <sobid.h>
#include <mmsyscom.h>
#include <process.h>
#include <assist\stlexsmallvector.h>
#include <utilapiset.h>
#include <heapapi.h>
#include <processthreadsapi.h>
#include <ws2def.h>
#include <ole2.h>
#include <inaddr.h>
#include <stdexcept>
#include <xstring>
#include <objbase.h>
#include <atlbase.inl>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <boost\shared_array.hpp>
#include <Modifiers\ModifierTargetCache.h>
#include <combaseapi.h>
#include <pch.h>
#include <cstdarg>
#include <MultiplierTypes.h>
#include <MultiplierContainer.h>
#include <pshpack8.h>
#include <winnetwk.h>
#include <qos.h>
#include <fileio\filepath.h>
#include <crtdefs.h>
#include <wnnc.h>
#include <NetworkDP8\source\exception.h>
#include <NetworkDP8\source\blowfish.h>
#include <TeamColourRegistry.h>
#include <stdarg.h>
#include <windef.h>
#include <minwindef.h>
#include <bemapiset.h>
#include <rpcdcep.h>
#include <specstrings.h>
#include <playsoundapi.h>
#include <specstrings_strict.h>
#include <BuildQueue.h>
#include <platform\cmdline.h>
#include <specstrings_undef.h>
#include <handleapi.h>
#include <boost\type_traits\detail\ice_or.hpp>
#include <BuildData.h>
#include <Mathlib\matrix3.h>
#include <driverspecs.h>
#include <objidlbase.h>
#include <DependencyData.h>
#include <sdv_driverspecs.h>
#include <ncrypt.h>
#include <boost\type_traits\has_trivial_copy.hpp>
#include <boost\type_traits\is_volatile.hpp>
#include <threadpoolapiset.h>
#include <unknwnbase.h>
#include <BuildManager.h>
#include <oaidl.h>
#include <new>
#include <commdlg.h>
#include <Race.h>
#include <exception>
#include <namespaceapi.h>
#include <xstddef>
#include <ktmtypes.h>
#include <type_traits>
#include <Collision\BVH\octree.h>
#include <boost\pending\ct_if.hpp>
#include <Collision\BVH\span.h>
#include <dpapi.h>
#include <propidl.h>
#include <Collision\BVH\Internal\span_i.h>
#include <unknwn.h>
#include <NetworkDP8\source\sessionenum.h>
#include <Collision\BVH\proxy.h>
#include <winbase.h>
#include <wincon.h>
#include <mmiscapi.h>
#include <NetworkDP8\source\sessioninfo.h>
#include <Collision\intersect.h>
#include <apisetcconv.h>
#include <mmeapi.h>
#include <imm.h>
#include <boost\type_traits\is_stateless.hpp>
#include <Collision\primitivesfwd.h>
#include <minwinbase.h>
#include <boost\type_traits\has_trivial_constructor.hpp>
#include <atlcore.h>
#include <boost\type_traits\is_pod.hpp>
#include <xutility>
#include <winscard.h>
#include <tchar.h>
#include <boost\type_traits\is_scalar.hpp>
#include <utility>
#include <iosfwd>
#include <wtypes.h>
#include <mbstring.h>
#include <vector>
#include <fileio\bytestream.h>
#include <errhandlingapi.h>
#include <rpcndr.h>
#include <boost\type_traits\has_trivial_destructor.hpp>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <processenv.h>
#include <rpcnsip.h>
#include <boost\type_traits\intrinsics.hpp>
#include <guiddef.h>
#include <stralign.h>
#include <weaponinfo.h>
#include <jobapi.h>
#include <playerresourcetype.h>
#include <apiset.h>
#include <winsvc.h>
#include <boost\type_traits\detail\type_trait_undef.hpp>
#include <NetworkDP8\source\sessiondesc.h>
#include <gamemsg.h>
#include <systemtopologyapi.h>
#include <pshpack1.h>
#include <atltransactionmanager.h>
#include <boost\type_traits\is_convertible.hpp>
#include <NetworkDP8\source\playerdesc.h>
#include <Universe.h>
#include <Collision\Primitives\aabb.h>
#include <wow64apiset.h>
#include <ktmw32.h>
#include <boost\type_traits\detail\bool_trait_undef.hpp>
#include <boost\type_traits\detail\yes_no_type.hpp>
#include <boost\type_traits\is_empty.hpp>
#include <Waypoint.h>
#include <atliface.h>
#include <boost\type_traits\is_float.hpp>
#include <list>
#include <SobUnmoveable.h>
#include <boost\type_traits\is_member_pointer.hpp>
#include <NetworkDP8\source\criticalsection.h>
#include <BuildJobType.h>
#include <sob.h>
#include <winnls.h>
#include <shellapi.h>
#include <shlwapi.h>
#include <boost\type_traits\is_member_function_pointer.hpp>
#include <fixedpoint.h>
#include <sobstatic.h>
#include <datetimeapi.h>
#include <shtypes.h>
#include <boost\type_traits\detail\is_mem_fun_pointer_impl.hpp>
#include <ResearchManager.h>
#include <util\fixed.h>
#include <Collision\Primitives\sphere.h>
#include <platform\timer.h>
#include <winnt.h>
#include <processtopologyapi.h>
#include <platform\platformexports.h>
#include <kernelspecs.h>
#include <urlmon.h>
#include <random.h>
#include <Mathlib\vector3.h>
#include <Interface.h>
#include <basetsd.h>
#include <pshpack2.h>
#include <Mathlib\vector4.h>
#include <libloaderapi.h>
#include <sysinfoapi.h>
#include <boost\type_traits\is_fundamental.hpp>
#include <atlchecked.h>
#include <boost\type_traits\is_void.hpp>
#include <boost\type_traits\ice.hpp>
#include <map>
#include <SoundManager\SoundManager.h>
#include <winreg.h>
#include <bcrypt.h>
#include <atlexcept.h>
#include <boost\type_traits\detail\ice_and.hpp>
#include <xtree>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <boost\smart_ptr.hpp>
#include <atltrace.h>
#include <oleacc.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <boost\scoped_ptr.hpp>
#include <atlconv.h>
#include <winsock.h>
#include <atlalloc.h>
#include <boost\assert.hpp>
#include <nb30.h>
#include <wincrypt.h>
#include <gameSettings.h>
#include <GameObj.h>
#include <LevelDesc.h>
#include <NetworkDP8\source\authentication.h>
#include <Hash.h>
#include <MeshAnimation.h>
#include <timeapi.h>
#include <Mathlib\vector2.h>
#include <fileio\md5.h>
#include <SoundManager\SoundEntityHandle.h>
#include <ShieldTypes.h>
#include <NetworkDP8\source\session.h>
#include <util\statmonitor.h>
#include <util\types.h>
#include <NetworkDP8\source\directplay.h>
#include <util\utilexports.h>
#include <securityappcontainer.h>
#include <rpcsal.h>
#include <boost\thread\thread.hpp>
#include <luaconfig\luabinding.h>
#include <fibersapi.h>
#include <boost\function.hpp>
#include <boost\bind\mem_fn_cc.hpp>
#include <luaconfig\luaconfig.h>
#include <SobWithMeshStatic.h>
#include <boost\preprocessor\iterate.hpp>
#include <profile\profile.h>
#include <lua.h>
#include <gamestructimpl.h>
#include <boost\preprocessor\iteration\iterate.hpp>
#include <iostream>
#include <boost\cstdint.hpp>
#include <Badge.h>
#include <ship.h>
#include <winver.h>
#include <boost\preprocessor\arithmetic\dec.hpp>
#include <boost\config.hpp>
#include <SobWithMesh.h>
#include <Subsystems\HardPointManager.h>
#include <verrsrc.h>
#include <oleauto.h>
#include <boost\preprocessor\config\config.hpp>
#include <SobRigidBody.h>
#include <Subsystems\HardPoint.h>
#include <winioctl.h>
#include <servprov.h>
#include <boost\preprocessor\arithmetic\inc.hpp>
#include <cassert>
#include <Subsystems\HardPointStatic.h>
#include <realtimeapiset.h>
#include <tvout.h>
#include <boost\preprocessor\array\elem.hpp>
#include <assert.h>
#include <MainUI.h>
#include <SobRigidBodyStatic.h>
#include <Subsystems\SubSystemType.h>
#include <mciapi.h>
#include <comcat.h>
#include <boost\preprocessor\array\data.hpp>
#include <Interpolation.h>
#include <Selector.h>
#include <winuser.h>
#include <boost\preprocessor\tuple\elem.hpp>
#include <MetaSelTarg.h>
#include <boost\scoped_array.hpp>
#include <cguid.h>
#include <boost\preprocessor\array\size.hpp>
#include <atlsimpcoll.h>
#include <boost\preprocessor\cat.hpp>
#include <consoleapi.h>
#include <boost\preprocessor\slot\slot.hpp>
#include <Mathlib\quat.h>
#include <Collision\Primitives\capsule.h>
#include <recorder.h>
#include <namedpipeapi.h>
#include <ioapiset.h>
#include <boost\preprocessor\slot\detail\def.hpp>
#include <boost\type_traits\is_same.hpp>
#include <Collision\Primitives\obb.h>
#include <Collision\Primitives\segment.h>
#include <orders.h>
#include <boost\function\detail\prologue.hpp>
#include <Collision\BVH\profiling.h>
#include <orders_base.h>
#include <memoryapi.h>
#include <dlgs.h>
#include <winperf.h>
#include <statreg.h>
#include <boost\function\function_base.hpp>
#include <commandtype.h>
#include <boost\type_traits\arithmetic_traits.hpp>
#include <mainuidefines.h>
#include <wtypesbase.h>
#include <winspool.h>
#include <atlwinverapi.h>
#include <boost\type_traits\is_arithmetic.hpp>
#include <boost\mem_fn.hpp>
#include <prsht.h>
#include <boost\type_traits\is_integral.hpp>
#include <boost\type_traits\detail\ice_not.hpp>
#include <boost\get_pointer.hpp>
#include <boost\type_traits\detail\bool_trait_def.hpp>
#include <boost\preprocessor\enum.hpp>
#include <NetworkDP8\source\message.h>
#include <wingdi.h>
#include <boost\type_traits\detail\template_arity_spec.hpp>
#include <boost\preprocessor\repetition\enum.hpp>
#include <rpc.h>
#include <boost\mpl\aux_\template_arity_fwd.hpp>
#include <boost\preprocessor\debug\error.hpp>
#include <pshpack4.h>
#include <boost\preprocessor\detail\auto_rec.hpp>
#include <seInterface2\SampleID.h>
#include <joystickapi.h>
#include <boost\mpl\aux_\preprocessor\params.hpp>
#include <boost\preprocessor\control\iif.hpp>
#include <SOBGroupManager.h>
#include <boost\static_assert.hpp>
#include <Mathlib\mathlibdll.h>
#include <seInterface2\SampleBase.h>
#include <rpcdce.h>
#include <boost\mpl\aux_\config\preprocessor.hpp>
#include <boost\preprocessor\punctuation\comma_if.hpp>
#include <hash_map>
#include <Mathlib\fastmath.h>
#include <winerror.h>
#include <boost\mpl\aux_\lambda_support.hpp>
#include <boost\preprocessor\control\if.hpp>
#include <xhash>
#include <winefs.h>
#include <boost\mpl\aux_\config\lambda.hpp>
#include <boost\bind\mem_fn_template.hpp>
#include <boost\preprocessor\logical\bool.hpp>
#include <NetworkDP8\networkdp8.h>
#include <boost\mpl\aux_\config\ttp.hpp>
#include <boost\preprocessor\facilities\empty.hpp>
#include <savegameimpl.h>
#include <NetworkDP8\source\address.h>
#include <ddeml.h>
#include <lzexpand.h>
#include <boost\mpl\aux_\config\overload_resolution.hpp>
#include <boost\preprocessor\punctuation\comma.hpp>
#include <atlbase.h>
#include <boost\mpl\bool.hpp>
#include <boost\preprocessor\repetition\repeat.hpp>
#include <savegamedatainfo.h>
#include <pathpoints.h>
#include <atldef.h>
#include <atlcomcli.h>
#include <boost\mpl\bool_fwd.hpp>
#include <boost\preprocessor\tuple\eat.hpp>
#include <HyperspaceManager.h>
#include <atlrc.h>
#include <olectl.h>
#include <boost\preprocessor\tuple\rem.hpp>
#include <debug\db.h>
#include <new.h>
#include <interlockedapi.h>
#include <timezoneapi.h>
#include <stringapiset.h>
#include <reason.h>
#include <ocidl.h>
#include <boost\preprocessor\enum_params.hpp>
#include <boost\type_traits\composite_traits.hpp>
#include <boost\type_traits\detail\ice_eq.hpp>
#include <boost\preprocessor\repetition\enum_params.hpp>
#include <boost\type_traits\is_array.hpp>
#include <boost\preprocessor\repeat.hpp>
#include <SensorsManager.h>
#include <boost\type_traits\config.hpp>
#include <boost\preprocessor\inc.hpp>
#include <deque>
#include <Render\gl\r_types.h>
#include <securitybaseapi.h>
#include <boost\preprocessor\iteration\detail\iter\forward1.hpp>
#include <fileio\filestream.h>
#include <Mathlib\matvec.h>
#include <boost\mpl\aux_\config\static_constant.hpp>
#include <boost\preprocessor\iteration\detail\bounds\lower1.hpp>
#include <boost\thread\mutex.hpp>
#include <SelTarg.h>
#include <visibility.h>
#include <boost\preprocessor\slot\detail\shared.hpp>
#include <boost\thread\detail\lock.hpp>
#include <prim.h>
#include <oleidl.h>
#include <mcx.h>
#include <boost\preprocessor\iteration\detail\bounds\upper1.hpp>
#include <boost\thread\exceptions.hpp>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <Collision\BVH\bvh.h>
#include <boost\function\detail\function_iterate.hpp>
#include <boost\thread\detail\config.hpp>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <boost\function\detail\maybe_include.hpp>
#include <selection.h>
#include <Camera\OrbitParameters.h>
#include <boost\function\function_template.hpp>
#include <savegamedef.h>
#include <Render\gl\r_defines.h>
#include <boost\detail\shared_count.hpp>
#include <Render\gl\glext.h>
#include <debugapi.h>
#include <boost\type_traits\is_class.hpp>
#include <bitset>
#include <fileapi.h>
#include <boost\type_traits\is_union.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <boost\type_traits\remove_cv.hpp>
#include <BuildJob.h>
#include <ITweak.h>
#include <boost\type_traits\broken_compiler_spec.hpp>
#include <Tactics.h>
#include <cderr.h>
#include <boost\type_traits\detail\cv_traits_impl.hpp>
#include <Player.h>
#include <dde.h>
#include <objidl.h>
#include <msxml.h>
#include <SquadronList.h>
#include <winsock2.h>
#include <boost\type_traits\is_enum.hpp>
#include <winapifamily.h>
#include <boost\type_traits\add_reference.hpp>
#include <windows.h>
#include <boost\type_traits\is_reference.hpp>
#include <seInterface2\sedefinesshared.h>
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
#include <syncChecking.h>
#include <dbdefines.h>
#include <savestream.h>
#include <boost\type_traits\detail\type_trait_def.hpp>
#include <config.h>
#include <seInterface2\PatchID.h>
#include <wchar.h>
#include <UnitCaps\UnitCaps.h>
#include <abilities.h>
#include <boost\utility.hpp>
#include <string>
#include <seInterface2\PatchBase.h>
#include <boost\ref.hpp>
#include <boost\utility\addressof.hpp>
#include <seInterface2\SoundParams.h>
#include <boost\detail\workaround.hpp>
#include <mmiscapi2.h>
#include <ime_cmodes.h>
#include <savegame.h>
#include <profileapi.h>
#include <task.h>
#include <boost\type_traits\is_pointer.hpp>
#include <stack>
#include <synchapi.h>
#include <gameRandom.h>
#include <mmsystem.h>

/* ---------- constants */

/* ---------- definitions */

struct SyncCheckingLevelDescription
{
    char *m_levelName; // 0x0
    SyncCheckingLevel m_level; // 0x4
};
static_assert(sizeof(SyncCheckingLevelDescription) == 8, "Invalid SyncCheckingLevelDescription size");

typedef unsigned short *PUSHORT;
typedef __int32 *LPBOOL;
typedef unsigned char *PBYTE;
typedef unsigned char *LPBYTE;
typedef long *LPLONG;
typedef unsigned long *PDWORD;
typedef unsigned long *LPDWORD;
typedef void *LPVOID;
typedef __int32 INT_PTR;
typedef unsigned __int32 UINT_PTR;
typedef unsigned long DWORD_PTR;
typedef wchar_t const *LPCWCH;
typedef wchar_t *PWSTR;
typedef wchar_t const *LPCWSTR;
typedef wchar_t const *PCWSTR;
typedef char const *LPCCH;
typedef char *PSTR;
typedef char const *PCSTR;
typedef char *LPTSTR;
typedef char const *LPCTSTR;
typedef void *HANDLE;
typedef _LIST_ENTRY LIST_ENTRY;
typedef _GUID *LPGUID;
typedef _GUID *LPCLSID;
typedef void *PSECURITY_DESCRIPTOR;
typedef unsigned long ACCESS_MASK;
typedef unsigned long SECURITY_INFORMATION;
typedef _IMAGE_DOS_HEADER IMAGE_DOS_HEADER;
typedef _RTL_CRITICAL_SECTION_DEBUG *PRTL_CRITICAL_SECTION_DEBUG;
typedef _RTL_CRITICAL_SECTION RTL_CRITICAL_SECTION;
typedef _RTL_CRITICAL_SECTION *PRTL_CRITICAL_SECTION;
typedef unsigned __int32 WPARAM;
typedef long LPARAM;
typedef long LRESULT;
typedef void *HGLOBAL;
typedef void *HLOCAL;
typedef __int32 (*FARPROC)();
typedef HKEY__ *HKEY;
typedef HKEY__ **PHKEY;
typedef HINSTANCE__ *HMODULE;
typedef HRSRC__ *HRSRC;
typedef _FILETIME *PFILETIME;
typedef tagPOINT POINT;
typedef _POINTL POINTL;
typedef _SECURITY_ATTRIBUTES SECURITY_ATTRIBUTES;
typedef _SECURITY_ATTRIBUTES *LPSECURITY_ATTRIBUTES;
typedef _OVERLAPPED *LPOVERLAPPED;
typedef _SYSTEMTIME SYSTEMTIME;
typedef _SYSTEMTIME *LPSYSTEMTIME;
typedef _WIN32_FIND_DATAA WIN32_FIND_DATAA;
typedef _WIN32_FIND_DATAA *LPWIN32_FIND_DATAA;
typedef _WIN32_FIND_DATAA WIN32_FIND_DATA;
typedef _FINDEX_INFO_LEVELS FINDEX_INFO_LEVELS;
typedef _FINDEX_SEARCH_OPS FINDEX_SEARCH_OPS;
typedef _GET_FILEEX_INFO_LEVELS GET_FILEEX_INFO_LEVELS;
typedef _RTL_CRITICAL_SECTION CRITICAL_SECTION;
typedef _RTL_CRITICAL_SECTION *LPCRITICAL_SECTION;
typedef unsigned long (*PTHREAD_START_ROUTINE)(void *);
typedef unsigned long (*LPTHREAD_START_ROUTINE)(void *);
typedef _WIN32_FILE_ATTRIBUTE_DATA WIN32_FILE_ATTRIBUTE_DATA;
typedef unsigned long (*LPPROGRESS_ROUTINE)(_LARGE_INTEGER, _LARGE_INTEGER, _LARGE_INTEGER, _LARGE_INTEGER, unsigned long, unsigned long, void *, void *, void *);
typedef tagTEXTMETRICA *LPTEXTMETRICA;
typedef tagTEXTMETRICW *LPTEXTMETRICW;
typedef _devicemodeA DEVMODEA;
typedef _devicemodeA *LPDEVMODEA;
typedef _devicemodeW DEVMODEW;
typedef _devicemodeW *LPDEVMODEW;
typedef tagMSG MSG;
typedef tagMSG *LPMSG;
typedef unsigned long REGSAM;
typedef long LSTATUS;
typedef wchar_t **LPBSTR;
typedef IUnknown *LPUNKNOWN;
typedef IStream *LPSTREAM;
typedef IPersistStream *LPPERSISTSTREAM;
typedef tagCONNECTDATA *LPCONNECTDATA;
typedef IConnectionPoint *LPCONNECTIONPOINT;
typedef _GUID CATID;
typedef tagCATEGORYINFO CATEGORYINFO;
typedef HRESULT _ATL_CREATORFUNC(void *, _GUID const &, void **);
typedef HRESULT _ATL_CREATORARGFUNC(void *, _GUID const &, void **, unsigned long);
typedef char const *_ATL_DESCRIPTIONFUNC();
typedef ATL::_ATL_CATMAP_ENTRY const *_ATL_CATMAPFUNC();
typedef void _ATL_TERMFUNC(unsigned long);
typedef ATL::_ATL_OBJMAP_ENTRY30 _ATL_OBJMAP_ENTRY;
typedef ATL::_ATL_OBJMAP_ENTRY110 _ATL_OBJMAP_ENTRY_EX;
typedef HRESULT (*_ATL_PERFREGFUNC)(HINSTANCE__ *);
typedef HRESULT (*_ATL_PERFUNREGFUNC)();
typedef ATL::_ATL_COM_MODULE70 _ATL_COM_MODULE;
typedef ATL::_ATL_WIN_MODULE70 _ATL_WIN_MODULE;
typedef ATL::_ATL_MODULE70 _ATL_MODULE;
typedef ATL::CComAutoDeleteCriticalSection AutoDeleteCriticalSection;
typedef _GUID const &DPNAREFIID;
typedef IDirectPlay8Address *PDIRECTPLAY8ADDRESS;
typedef _GUID const &DP8REFIID;
typedef HRESULT (*PFNDPNMESSAGEHANDLER)(void *, unsigned long, void *);
typedef unsigned long DPNID;
typedef unsigned long DPNHANDLE;
typedef _DPN_APPLICATION_DESC DPN_APPLICATION_DESC;
typedef _DPN_APPLICATION_DESC *PDPN_APPLICATION_DESC;
typedef _BUFFERDESC DPN_BUFFER_DESC;
typedef _DPN_CAPS DPN_CAPS;
typedef _DPN_CONNECTION_INFO DPN_CONNECTION_INFO;
typedef _DPN_GROUP_INFO DPN_GROUP_INFO;
typedef _DPN_PLAYER_INFO DPN_PLAYER_INFO;
typedef _DPN_SERVICE_PROVIDER_INFO DPN_SERVICE_PROVIDER_INFO;
typedef _DPN_SP_CAPS DPN_SP_CAPS;
typedef _DPNMSG_CONNECT_COMPLETE DPNMSG_CONNECT_COMPLETE;
typedef _DPNMSG_CREATE_PLAYER DPNMSG_CREATE_PLAYER;
typedef _DPNMSG_DESTROY_PLAYER DPNMSG_DESTROY_PLAYER;
typedef _DPNMSG_ENUM_HOSTS_QUERY DPNMSG_ENUM_HOSTS_QUERY;
typedef _DPNMSG_ENUM_HOSTS_RESPONSE DPNMSG_ENUM_HOSTS_RESPONSE;
typedef _DPNMSG_HOST_MIGRATE DPNMSG_HOST_MIGRATE;
typedef _DPNMSG_INDICATE_CONNECT DPNMSG_INDICATE_CONNECT;
typedef _DPNMSG_PEER_INFO DPNMSG_PEER_INFO;
typedef _DPNMSG_RECEIVE DPNMSG_RECEIVE;
typedef _DPNMSG_RETURN_BUFFER DPNMSG_RETURN_BUFFER;
typedef unsigned long PlayerID;
typedef std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Net::Authentication::Hash> > > hashiterator;
typedef std::map<unsigned long,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::less<unsigned long>,std::allocator<std::pair<unsigned long const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > > PlayerList;
typedef std::queue<Net::Message,std::list<Net::Message,std::allocator<Net::Message> > > MessageQueue;
typedef std::map<unsigned long,CBlowFish,std::less<unsigned long>,std::allocator<std::pair<unsigned long const ,CBlowFish> > > CryptoMap;
typedef std::vector<Net::SessionInfo,std::allocator<Net::SessionInfo> > SessionList;
typedef std::list<BuildJob *,std::allocator<BuildJob *> > BuildJobList;
typedef std::list<UIBuildJob *,std::allocator<UIBuildJob *> > UIBuildJobList;
typedef std::list<unsigned int,std::allocator<unsigned int> > RestrictedContainer;
typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > iterator_type;

/* ---------- prototypes */

extern bool IsCaptain();

/* ---------- globals */

extern std::basic_string<char,std::char_traits<char>,std::allocator<char> > kSyncLogFileName; // 0x83D684
extern __int32 nrsyncobjs; // 0x84AF88
extern SyncChecking *g_syncChecking; // 0x84AF8C

/* ---------- private variables */

_static
{
    extern char const kSyncCaptainFilename[23]; // 0x7B099C
    extern char const kSyncObjectFilename[34]; // 0x7B09B4
    extern char const kSaveDetGameOutOfSyncFilename[44]; // 0x7B09D8
    extern char const kNoSyncCheckMsg[25]; // 0x7B0A04
    extern char const kDefaultSyncLogFileName[5]; // 0x7B0A20
    extern SyncCheckingLevelDescription g_syncCheckingLevelDescription[6]; // 0x83D654
}

/* ---------- public code */

_extern bool _sub_642547();
bool IsCaptain() // 0x642547
{
    mangled_assert("?IsCaptain@@YG_NXZ");
    todo("implement");
    bool __result = _sub_642547();
    return __result;
}

_extern _sub_6421FA(SyncCheckObj *const);
SyncCheckObj::SyncCheckObj() // 0x6421FA
{
    mangled_assert("??0SyncCheckObj@@QAE@XZ");
    todo("implement");
    _sub_6421FA(this);
}

_extern void _sub_64231B(SyncCheckObj *const);
SyncCheckObj::~SyncCheckObj() // 0x64231B
{
    mangled_assert("??1SyncCheckObj@@QAE@XZ");
    todo("implement");
    _sub_64231B(this);
}

_extern _sub_642206(SyncCheckUser *const);
SyncCheckUser::SyncCheckUser() // 0x642206
{
    mangled_assert("??0SyncCheckUser@@QAE@XZ");
    todo("implement");
    _sub_642206(this);
}

_extern void _sub_642338(SyncCheckUser *const);
SyncCheckUser::~SyncCheckUser() // 0x642338
{
    mangled_assert("??1SyncCheckUser@@QAE@XZ");
    todo("implement");
    _sub_642338(this);
}

_extern void _sub_64324B(SyncCheckUser *const);
void SyncCheckUser::setDefaultValue() // 0x64324B
{
    mangled_assert("?setDefaultValue@SyncCheckUser@@QAEXXZ");
    todo("implement");
    _sub_64324B(this);
}

_extern void _sub_64342D(SyncCheckUser *const, long);
void SyncCheckUser::subscribe(long) // 0x64342D
{
    mangled_assert("?subscribe@SyncCheckUser@@IAEXJ@Z");
    todo("implement");
    _sub_64342D(this, arg);
}

_extern void _sub_6428B5(SyncCheckUser *const, __int32);
void SyncCheckUser::ackFrame(__int32) // 0x6428B5
{
    mangled_assert("?ackFrame@SyncCheckUser@@IAEXH@Z");
    todo("implement");
    _sub_6428B5(this, arg);
}

_extern void _sub_6432CA(SyncCheckUser *const, bool, __int32);
void SyncCheckUser::setOutOfSync(bool, __int32) // 0x6432CA
{
    mangled_assert("?setOutOfSync@SyncCheckUser@@IAEX_NH@Z");
    todo("implement");
    _sub_6432CA(this, arg, arg);
}

_extern _sub_642239(SyncChecking *const);
SyncChecking::SyncChecking() // 0x642239
{
    mangled_assert("??0SyncChecking@@QAE@XZ");
    todo("implement");
    _sub_642239(this);
}

_extern void _sub_6422FE(std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<SyncCheckObj *> > > *const);
_inline std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<SyncCheckObj *> > >::~_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<SyncCheckObj *> > >() // 0x6422FE
{
    mangled_assert("??1?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@PAVSyncCheckObj@@@std@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6422FE(this);
}

_extern void _sub_6422FF(std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<SyncCheckObj *> > > *const);
_inline std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<SyncCheckObj *> > >::~_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<SyncCheckObj *> > >() // 0x6422FF
{
    mangled_assert("??1?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PAVSyncCheckObj@@@std@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6422FF(this);
}

_extern void _sub_642300(std::_Deque_val<std::_Deque_simple_types<SyncCheckObj *> > *const);
_inline std::_Deque_val<std::_Deque_simple_types<SyncCheckObj *> >::~_Deque_val<std::_Deque_simple_types<SyncCheckObj *> >() // 0x642300
{
    mangled_assert("??1?$_Deque_val@U?$_Deque_simple_types@PAVSyncCheckObj@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_642300(this);
}

_extern void _sub_642340(SyncChecking *const);
SyncChecking::~SyncChecking() // 0x642340
{
    mangled_assert("??1SyncChecking@@QAE@XZ");
    todo("implement");
    _sub_642340(this);
}

_extern std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<SyncCheckObj *> > > &_sub_642392(std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<SyncCheckObj *> > > *const, std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<SyncCheckObj *> > > const &);
_inline std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<SyncCheckObj *> > > &std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<SyncCheckObj *> > >::operator=(std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<SyncCheckObj *> > > const &) // 0x642392
{
    mangled_assert("??4?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@PAVSyncCheckObj@@@std@@@std@@@std@@QAEAAV01@ABV01@@Z");
    compiler_generated();
    todo("implement");
    std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<SyncCheckObj *> > > & __result = _sub_642392(this, arg);
    return __result;
}

_extern std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<SyncCheckObj *> > > &_sub_6423AD(std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<SyncCheckObj *> > > *const, std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<SyncCheckObj *> > > const &);
_inline std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<SyncCheckObj *> > > &std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<SyncCheckObj *> > >::operator=(std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<SyncCheckObj *> > > const &) // 0x6423AD
{
    mangled_assert("??4?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PAVSyncCheckObj@@@std@@@std@@@std@@QAEAAV01@ABV01@@Z");
    compiler_generated();
    todo("implement");
    std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<SyncCheckObj *> > > & __result = _sub_6423AD(this, arg);
    return __result;
}

_extern _sub_6420E5(std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<SyncCheckObj *> > > *const, std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<SyncCheckObj *> > > const &);
_inline std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<SyncCheckObj *> > >::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<SyncCheckObj *> > >(std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<SyncCheckObj *> > > const &) // 0x6420E5
{
    mangled_assert("??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@PAVSyncCheckObj@@@std@@@std@@@std@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
    _sub_6420E5(this, arg);
}

_extern _sub_642127(std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<SyncCheckObj *> > > *const, std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<SyncCheckObj *> > > const &);
_inline std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<SyncCheckObj *> > >::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<SyncCheckObj *> > >(std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<SyncCheckObj *> > > const &) // 0x642127
{
    mangled_assert("??0?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PAVSyncCheckObj@@@std@@@std@@@std@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
    _sub_642127(this, arg);
}

_extern void _sub_643170(SyncChecking *const);
void SyncChecking::reset() // 0x643170
{
    mangled_assert("?reset@SyncChecking@@QAEXXZ");
    todo("implement");
    _sub_643170(this);
}

_extern void _sub_642A82(SyncChecking *const, bool);
void SyncChecking::enableSaveSyncCheckObj(bool) // 0x642A82
{
    mangled_assert("?enableSaveSyncCheckObj@SyncChecking@@QAEX_N@Z");
    todo("implement");
    _sub_642A82(this, arg);
}

_extern bool _sub_642ECD(SyncChecking *const);
bool SyncChecking::isSavingSyncCheckObj() // 0x642ECD
{
    mangled_assert("?isSavingSyncCheckObj@SyncChecking@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_642ECD(this);
    return __result;
}

_extern bool _sub_643307();
bool SyncChecking::startupInGame() // 0x643307
{
    mangled_assert("?startupInGame@SyncChecking@@SG_NXZ");
    todo("implement");
    bool __result = _sub_643307();
    return __result;
}

_extern bool _sub_6432F0();
bool SyncChecking::shutdownInGame() // 0x6432F0
{
    mangled_assert("?shutdownInGame@SyncChecking@@SG_NXZ");
    todo("implement");
    bool __result = _sub_6432F0();
    return __result;
}

_extern void _sub_642F0B(SyncChecking *const);
void SyncChecking::manageSyncCheckObjList() // 0x642F0B
{
    mangled_assert("?manageSyncCheckObjList@SyncChecking@@IAEXXZ");
    todo("implement");
    _sub_642F0B(this);
}

_extern void _sub_642D94();
void SyncChecking::generateSaveGameOutOfSyncFile() // 0x642D94
{
    mangled_assert("?generateSaveGameOutOfSyncFile@SyncChecking@@SGXXZ");
    todo("implement");
    _sub_642D94();
}

_extern void _sub_6429FF(SyncChecking *const);
void SyncChecking::dumpOutOfSync() // 0x6429FF
{
    mangled_assert("?dumpOutOfSync@SyncChecking@@QAEXXZ");
    todo("implement");
    _sub_6429FF(this);
}

_extern void _sub_643900(SyncChecking *const);
void SyncChecking::writeToDiskSyncObject() // 0x643900
{
    mangled_assert("?writeToDiskSyncObject@SyncChecking@@QAEXXZ");
    todo("implement");
    _sub_643900(this);
}

_extern SyncCheckObj *_sub_642E5B(SyncChecking *const, long);
SyncCheckObj *SyncChecking::getSyncCheckObj(long) // 0x642E5B
{
    mangled_assert("?getSyncCheckObj@SyncChecking@@IAEPAVSyncCheckObj@@J@Z");
    todo("implement");
    SyncCheckObj * __result = _sub_642E5B(this, arg);
    return __result;
}

_extern bool _sub_642ED1(SyncChecking *const, SyncCheckUser *);
bool SyncChecking::isSubscribed(SyncCheckUser *) // 0x642ED1
{
    mangled_assert("?isSubscribed@SyncChecking@@QAE_NPAVSyncCheckUser@@@Z");
    todo("implement");
    bool __result = _sub_642ED1(this, arg);
    return __result;
}

_extern void _sub_64343A(SyncChecking *const, SyncCheckUser *, long);
void SyncChecking::subscribeUser(SyncCheckUser *, long) // 0x64343A
{
    mangled_assert("?subscribeUser@SyncChecking@@QAEXPAVSyncCheckUser@@J@Z");
    todo("implement");
    _sub_64343A(this, arg, arg);
}

_extern std::_Vector_iterator<std::_Vector_val<std::_Simple_types<SyncCheckUser *> > > _sub_6438B8(SyncChecking *const, SyncCheckUser *);
std::_Vector_iterator<std::_Vector_val<std::_Simple_types<SyncCheckUser *> > > SyncChecking::unsubscribeUser(SyncCheckUser *) // 0x6438B8
{
    mangled_assert("?unsubscribeUser@SyncChecking@@QAE?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PAVSyncCheckUser@@@std@@@std@@@std@@PAVSyncCheckUser@@@Z");
    todo("implement");
    std::_Vector_iterator<std::_Vector_val<std::_Simple_types<SyncCheckUser *> > > __result = _sub_6438B8(this, arg);
    return __result;
}

_extern void _sub_6428BF(SyncChecking *const, SyncCheckUser *, unsigned __int32);
void SyncChecking::ackFrame(SyncCheckUser *, unsigned __int32) // 0x6428BF
{
    mangled_assert("?ackFrame@SyncChecking@@QAEXPAVSyncCheckUser@@I@Z");
    todo("implement");
    _sub_6428BF(this, arg, arg);
}

_extern unsigned __int32 _sub_6435C6(bool);
unsigned __int32 SyncChecking::syncCheckingMinimal(bool bException) // 0x6435C6
{
    mangled_assert("?syncCheckingMinimal@SyncChecking@@SGI_N@Z");
    todo("implement");
    unsigned __int32 __result = _sub_6435C6(bException);
    return __result;
}

_extern unsigned __int32 _sub_6438B3(bool);
unsigned __int32 SyncChecking::syncCheckingNone(bool bDummy) // 0x6438B3
{
    mangled_assert("?syncCheckingNone@SyncChecking@@SGI_N@Z");
    todo("implement");
    unsigned __int32 __result = _sub_6438B3(bDummy);
    return __result;
}

_extern unsigned __int32 _sub_643468(SyncChecking::SyncCheckType);
unsigned __int32 SyncChecking::syncCheckingExtreme(SyncChecking::SyncCheckType type) // 0x643468
{
    mangled_assert("?syncCheckingExtreme@SyncChecking@@KGIW4SyncCheckType@1@@Z");
    todo("implement");
    unsigned __int32 __result = _sub_643468(type);
    return __result;
}

_extern unsigned __int32 _sub_6435A8(bool);
unsigned __int32 SyncChecking::syncCheckingExtremeBinary(bool bDummy) // 0x6435A8
{
    mangled_assert("?syncCheckingExtremeBinary@SyncChecking@@SGI_N@Z");
    todo("implement");
    unsigned __int32 __result = _sub_6435A8(bDummy);
    return __result;
}

_extern unsigned __int32 _sub_6435BC(bool);
unsigned __int32 SyncChecking::syncCheckingExtremeText(bool bDummy) // 0x6435BC
{
    mangled_assert("?syncCheckingExtremeText@SyncChecking@@SGI_N@Z");
    todo("implement");
    unsigned __int32 __result = _sub_6435BC(bDummy);
    return __result;
}

_extern unsigned __int32 _sub_6435B2(bool);
unsigned __int32 SyncChecking::syncCheckingExtremeCRC(bool bDummy) // 0x6435B2
{
    mangled_assert("?syncCheckingExtremeCRC@SyncChecking@@SGI_N@Z");
    todo("implement");
    unsigned __int32 __result = _sub_6435B2(bDummy);
    return __result;
}

_extern char const *_sub_642DEB(SyncCheckingLevel);
char const *SyncChecking::getLevelDescription(SyncCheckingLevel level) // 0x642DEB
{
    mangled_assert("?getLevelDescription@SyncChecking@@SGPBDW4SyncCheckingLevel@@@Z");
    todo("implement");
    char const * __result = _sub_642DEB(level);
    return __result;
}

_extern bool _sub_642EBF(SyncCheckingLevel);
bool SyncChecking::isLevelValid(SyncCheckingLevel level) // 0x642EBF
{
    mangled_assert("?isLevelValid@SyncChecking@@SG_NW4SyncCheckingLevel@@@Z");
    todo("implement");
    bool __result = _sub_642EBF(level);
    return __result;
}

_extern SyncCheckingLevel _sub_642DE7(SyncChecking *const);
SyncCheckingLevel SyncChecking::getLevel() // 0x642DE7
{
    mangled_assert("?getLevel@SyncChecking@@QAE?AW4SyncCheckingLevel@@XZ");
    todo("implement");
    SyncCheckingLevel __result = _sub_642DE7(this);
    return __result;
}

_extern bool _sub_643274(SyncChecking *const, SyncCheckingLevel);
bool SyncChecking::setLevel(SyncCheckingLevel) // 0x643274
{
    mangled_assert("?setLevel@SyncChecking@@QAE_NW4SyncCheckingLevel@@@Z");
    todo("implement");
    bool __result = _sub_643274(this, arg);
    return __result;
}

_extern unsigned __int32 _sub_64305E(SyncChecking *const);
unsigned __int32 SyncChecking::process() // 0x64305E
{
    mangled_assert("?process@SyncChecking@@QAEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_64305E(this);
    return __result;
}

_extern bool _sub_642EEE(SyncChecking *const);
bool SyncChecking::isSyncErrorRecoveryEnable() // 0x642EEE
{
    mangled_assert("?isSyncErrorRecoveryEnable@SyncChecking@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_642EEE(this);
    return __result;
}

_extern bool _sub_642A8C(SyncChecking *const, SyncCheckUser *, bool);
bool SyncChecking::enableSyncErrorRecovery(SyncCheckUser *, bool) // 0x642A8C
{
    mangled_assert("?enableSyncErrorRecovery@SyncChecking@@QAE_NPAVSyncCheckUser@@_N@Z");
    todo("implement");
    bool __result = _sub_642A8C(this, arg, arg);
    return __result;
}

_extern unsigned __int32 _sub_642E25(SyncChecking *const, SyncCheckUser *, unsigned __int32, unsigned __int32);
unsigned __int32 SyncChecking::getNbOutOfSyncForAPeriod(SyncCheckUser *, unsigned __int32, unsigned __int32) // 0x642E25
{
    mangled_assert("?getNbOutOfSyncForAPeriod@SyncChecking@@QAEIPAVSyncCheckUser@@II@Z");
    todo("implement");
    unsigned __int32 __result = _sub_642E25(this, arg, arg, arg);
    return __result;
}

/* ---------- private code */
#endif
