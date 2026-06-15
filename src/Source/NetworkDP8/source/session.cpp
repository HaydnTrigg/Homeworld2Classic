#if 0
/* ---------- headers */

#include "decomp.h"
#include <winsvc.h>
#include <systemtopologyapi.h>
#include <pshpack1.h>
#include <atltransactionmanager.h>
#include <wow64apiset.h>
#include <ktmw32.h>
#include <atliface.h>
#include <boost\type_traits\is_fundamental.hpp>
#include <boost\type_traits\is_void.hpp>
#include <boost\type_traits\ice.hpp>
#include <winnls.h>
#include <shellapi.h>
#include <shlwapi.h>
#include <boost\type_traits\detail\ice_and.hpp>
#include <datetimeapi.h>
#include <shtypes.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\NetworkDP8\source\blowfish.h"
#include <winnt.h>
#include <processtopologyapi.h>
#include <kernelspecs.h>
#include <urlmon.h>
#include <basetsd.h>
#include <pshpack2.h>
#include <crtdefs.h>
#include <libloaderapi.h>
#include <sysinfoapi.h>
#include <boost\next_prior.hpp>
#include <atlchecked.h>
#include <boost\bind\mem_fn_cc.hpp>
#include <winreg.h>
#include <bcrypt.h>
#include <atlexcept.h>
#include <atltrace.h>
#include <oleacc.h>
#include <atlconv.h>
#include <winsock.h>
#include <atlalloc.h>
#include <map>
#include <boost\noncopyable.hpp>
#include <nb30.h>
#include <wincrypt.h>
#include <xtree>
#include <locale.h>
#include <timeapi.h>
#include <new>
#include <system_error>
#include <securityappcontainer.h>
#include <rpcsal.h>
#include <xstddef>
#include <cerrno>
#include <vector>
#include <fibersapi.h>
#include <errno.h>
#include <boost\type_traits\is_same.hpp>
#include <winver.h>
#include <verrsrc.h>
#include <oleauto.h>
#include <cwchar>
#include <intrin.h>
#include <winioctl.h>
#include <servprov.h>
#include <wchar.h>
#include <setjmp.h>
#include <boost\mem_fn.hpp>
#include <realtimeapiset.h>
#include <tvout.h>
#include <boost\assert.hpp>
#include <boost\get_pointer.hpp>
#include <boost\preprocessor\enum.hpp>
#include <mciapi.h>
#include <comcat.h>
#include <boost\function.hpp>
#include <boost\type_traits\arithmetic_traits.hpp>
#include <boost\preprocessor\repetition\enum.hpp>
#include <winuser.h>
#include <boost\preprocessor\iterate.hpp>
#include <boost\type_traits\is_arithmetic.hpp>
#include <boost\preprocessor\debug\error.hpp>
#include <cguid.h>
#include <boost\preprocessor\iteration\iterate.hpp>
#include <boost\type_traits\is_integral.hpp>
#include <boost\type_traits\detail\ice_not.hpp>
#include <boost\preprocessor\detail\auto_rec.hpp>
#include <atlsimpcoll.h>
#include <cstdlib>
#include <boost\preprocessor\arithmetic\dec.hpp>
#include <boost\type_traits\detail\bool_trait_def.hpp>
#include <boost\preprocessor\control\iif.hpp>
#include <consoleapi.h>
#include <streambuf>
#include <boost\preprocessor\config\config.hpp>
#include <boost\type_traits\detail\template_arity_spec.hpp>
#include <boost\preprocessor\punctuation\comma_if.hpp>
#include <namedpipeapi.h>
#include <ioapiset.h>
#include <xiosbase>
#include <boost\preprocessor\arithmetic\inc.hpp>
#include <boost\mpl\aux_\template_arity_fwd.hpp>
#include <boost\preprocessor\control\if.hpp>
#include <swprintf.inl>
#include <xlocale>
#include <boost\preprocessor\array\elem.hpp>
#include <boost\bind\mem_fn_template.hpp>
#include <boost\preprocessor\logical\bool.hpp>
#include <memoryapi.h>
#include <dlgs.h>
#include <winperf.h>
#include <statreg.h>
#include <cstring>
#include <boost\preprocessor\array\data.hpp>
#include <boost\mpl\aux_\preprocessor\params.hpp>
#include <boost\preprocessor\facilities\empty.hpp>
#include <stdexcept>
#include <boost\preprocessor\tuple\elem.hpp>
#include <boost\mpl\aux_\config\preprocessor.hpp>
#include <boost\preprocessor\punctuation\comma.hpp>
#include <wtypesbase.h>
#include <winspool.h>
#include <atlwinverapi.h>
#include <xstring>
#include <boost\preprocessor\array\size.hpp>
#include <boost\mpl\aux_\lambda_support.hpp>
#include <boost\preprocessor\repetition\repeat.hpp>
#include <prsht.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\NetworkDP8\source\criticalsection.h"
#include <xmemory0>
#include <boost\preprocessor\cat.hpp>
#include <boost\mpl\aux_\config\lambda.hpp>
#include <boost\preprocessor\tuple\eat.hpp>
#include <limits>
#include <boost\preprocessor\slot\slot.hpp>
#include <boost\mpl\aux_\config\ttp.hpp>
#include <boost\preprocessor\tuple\rem.hpp>
#include <pshpack4.h>
#include <wingdi.h>
#include <ymath.h>
#include <boost\preprocessor\slot\detail\def.hpp>
#include <boost\mpl\aux_\config\overload_resolution.hpp>
#include <boost\preprocessor\enum_params.hpp>
#include <rpc.h>
#include <xtgmath.h>
#include <boost\function\detail\prologue.hpp>
#include <boost\mpl\bool.hpp>
#include <boost\preprocessor\repetition\enum_params.hpp>
#include <boost\cstdint.hpp>
#include <boost\throw_exception.hpp>
#include <boost\mpl\bool_fwd.hpp>
#include <boost\preprocessor\repeat.hpp>
#include <joystickapi.h>
#include <boost\config.hpp>
#include <boost\preprocessor\inc.hpp>
#include <rpcdce.h>
#include <boost\config\user.hpp>
#include <boost\preprocessor\iteration\detail\iter\forward1.hpp>
#include <winerror.h>
#include <boost\config\select_compiler_config.hpp>
#include <boost\function\function_base.hpp>
#include <boost\type_traits\composite_traits.hpp>
#include <boost\type_traits\detail\ice_eq.hpp>
#include <boost\preprocessor\iteration\detail\bounds\lower1.hpp>
#include <boost\thread\mutex.hpp>
#include <winefs.h>
#include <boost\config\compiler\visualc.hpp>
#include <memory>
#include <boost\type_traits\is_array.hpp>
#include <boost\preprocessor\slot\detail\shared.hpp>
#include <boost\thread\detail\lock.hpp>
#include <boost\config\select_stdlib_config.hpp>
#include <stdint.h>
#include <boost\type_traits\config.hpp>
#include <boost\preprocessor\iteration\detail\bounds\upper1.hpp>
#include <boost\thread\exceptions.hpp>
#include <ddeml.h>
#include <lzexpand.h>
#include <boost\config\stdlib\dinkumware.hpp>
#include <boost\function\detail\function_iterate.hpp>
#include <boost\thread\detail\config.hpp>
#include <atlbase.h>
#include <boost\config\select_platform_config.hpp>
#include <boost\mpl\aux_\config\static_constant.hpp>
#include <boost\function\detail\maybe_include.hpp>
#include <atldef.h>
#include <atlcomcli.h>
#include <boost\config\platform\win32.hpp>
#include <boost\function\function_template.hpp>
#include <atlrc.h>
#include <olectl.h>
#include <new.h>
#include <interlockedapi.h>
#include <timezoneapi.h>
#include <stringapiset.h>
#include <reason.h>
#include <ocidl.h>
#include <immintrin.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\NetworkDP8\source\authentication.h"
#include <wmmintrin.h>
#include <nmmintrin.h>
#include <smmintrin.h>
#include <securitybaseapi.h>
#include <type_traits>
#include <tmmintrin.h>
#include <xlocinfo>
#include <boost\type_traits\is_class.hpp>
#include <pmmintrin.h>
#include <xlocinfo.h>
#include <boost\type_traits\is_union.hpp>
#include <emmintrin.h>
#include <ctype.h>
#include <boost\type_traits\remove_cv.hpp>
#include <oleidl.h>
#include <mcx.h>
#include <xmmintrin.h>
#include <boost\type_traits\broken_compiler_spec.hpp>
#include <mmintrin.h>
#include <boost\type_traits\detail\cv_traits_impl.hpp>
#include <xutility>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\NetworkDP8\source\session.h"
#include <boost\type_traits\is_enum.hpp>
#include <utility>
#include <xatomic0.h>
#include <list>
#include <boost\type_traits\add_reference.hpp>
#include <debugapi.h>
#include <iosfwd>
#include <xmemory>
#include <boost\type_traits\is_reference.hpp>
#include <fileapi.h>
#include <crtdbg.h>
#include <share.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\NetworkDP8\source\sessiondesc.h"
#include <cderr.h>
#include <dde.h>
#include <objidl.h>
#include <msxml.h>
#include <boost\type_traits\detail\type_trait_def.hpp>
#include <winsock2.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\NetworkDP8\source\playerdesc.h"
#include <winapifamily.h>
#include <boost\config\suffix.hpp>
#include <boost\ref.hpp>
#include <windows.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\NetworkDP8\pch.h"
#include <cassert>
#include <sdkddkver.h>
#include <threadpoollegacyapiset.h>
#include <rpcnterr.h>
#include <winsmcrd.h>
#include <dplay8.h>
#include <assert.h>
#include <excpt.h>
#include <poppack.h>
#include <rpcnsi.h>
#include <rpcasync.h>
#include <dpaddr.h>
#include <string>
#include <xrefwrap>
#include <iterator>
#include <boost\type_traits\is_pointer.hpp>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\NetworkDP8\source\message.h"
#include <istream>
#include <wtime.inl>
#include <ostream>
#include <ios>
#include <xlocnum>
#include <climits>
#include <mmiscapi2.h>
#include <ime_cmodes.h>
#include <cmath>
#include <profileapi.h>
#include <math.h>
#include <xdebug>
#include <synchapi.h>
#include <mmsystem.h>
#include <mmsyscom.h>
#include <process.h>
#include <utilapiset.h>
#include <heapapi.h>
#include <processthreadsapi.h>
#include <ws2def.h>
#include <ole2.h>
#include <inaddr.h>
#include <objbase.h>
#include <atlbase.inl>
#include <typeinfo>
#include <combaseapi.h>
#include <queue>
#include <algorithm>
#include <boost\type_traits\detail\ice_or.hpp>
#include <pshpack8.h>
#include <winnetwk.h>
#include <qos.h>
#include <xfacet>
#include <wnnc.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\NetworkDP8\source\directplay.h"
#include <boost\type_traits\has_trivial_copy.hpp>
#include <stdarg.h>
#include <boost\thread\thread.hpp>
#include <boost\type_traits\is_volatile.hpp>
#include <windef.h>
#include <boost\utility.hpp>
#include <minwindef.h>
#include <bemapiset.h>
#include <rpcdcep.h>
#include <boost\utility\addressof.hpp>
#include <specstrings.h>
#include <playsoundapi.h>
#include <boost\detail\workaround.hpp>
#include <specstrings_strict.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\NetworkDP8\source\exception.h"
#include <specstrings_undef.h>
#include <handleapi.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\NetworkDP8\source\address.h"
#include <driverspecs.h>
#include <objidlbase.h>
#include <boost\utility\base_from_member.hpp>
#include <boost\pending\ct_if.hpp>
#include <sdv_driverspecs.h>
#include <ncrypt.h>
#include <boost\utility_fwd.hpp>
#include <threadpoolapiset.h>
#include <unknwnbase.h>
#include <oaidl.h>
#include <cfloat>
#include <boost\type_traits\is_stateless.hpp>
#include <commdlg.h>
#include <float.h>
#include <boost\type_traits\has_trivial_constructor.hpp>
#include <namespaceapi.h>
#include <crtwrn.h>
#include <boost\type_traits\is_pod.hpp>
#include <ktmtypes.h>
#include <boost\type_traits\is_scalar.hpp>
#include <dpapi.h>
#include <propidl.h>
#include <boost\type_traits\has_trivial_destructor.hpp>
#include <unknwn.h>
#include <cstdio>
#include <boost\type_traits\intrinsics.hpp>
#include <winbase.h>
#include <wincon.h>
#include <mmiscapi.h>
#include <stdio.h>
#include <apisetcconv.h>
#include <mmeapi.h>
#include <imm.h>
#include <minwinbase.h>
#include <atlcore.h>
#include <winscard.h>
#include <tchar.h>
#include <wtypes.h>
#include <mbstring.h>
#include <boost\type_traits\detail\type_trait_undef.hpp>
#include <errhandlingapi.h>
#include <rpcndr.h>
#include <boost\type_traits\is_convertible.hpp>
#include <processenv.h>
#include <rpcnsip.h>
#include <boost\checked_delete.hpp>
#include <boost\type_traits\detail\bool_trait_undef.hpp>
#include <boost\type_traits\detail\yes_no_type.hpp>
#include <boost\type_traits\is_empty.hpp>
#include <guiddef.h>
#include <stralign.h>
#include <boost\type_traits\is_float.hpp>
#include <ammintrin.h>
#include <boost\type_traits\is_member_pointer.hpp>
#include <jobapi.h>
#include <mm3dnow.h>
#include <deque>
#include <boost\type_traits\is_member_function_pointer.hpp>
#include <boost\type_traits\detail\is_mem_fun_pointer_impl.hpp>
#include <apiset.h>

/* ---------- constants */

/* ---------- definitions */

typedef _DPN_CAPS_EX DPN_CAPS_EX;

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern std::piecewise_construct_t piecewise_construct; // 0x84CB60
    extern std::allocator_arg_t allocator_arg; // 0x84CB61
}

/* ---------- public code */

_inline Net::Authentication::Authentication(Net::Authentication const &) // 0x6D1CC1
{
    mangled_assert("??0Authentication@Net@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

_inline Net::EInvalidAddress::EInvalidAddress(Net::EInvalidAddress const &) // 0x6D1D1C
{
    mangled_assert("??0EInvalidAddress@Net@@QAE@ABU01@@Z");
    compiler_generated();
    todo("implement");
}

_inline Net::ENoNetwork::ENoNetwork(Net::ENoNetwork const &) // 0x6D1D31
{
    mangled_assert("??0ENoNetwork@Net@@QAE@ABU01@@Z");
    compiler_generated();
    todo("implement");
}

_inline Net::Exception::Exception(Net::Exception const &) // 0x6D1D46
{
    mangled_assert("??0Exception@Net@@QAE@ABU01@@Z");
    compiler_generated();
    todo("implement");
}

_inline Net::Message::Message(Net::Message const &) // 0x6D1D5B
{
    mangled_assert("??0Message@Net@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

Net::Session::Session(_GUID const &, Net::Authentication const &, Net::Address const *, wchar_t const *, Net::PlayerDescription const &) // 0x6D1E01
{
    mangled_assert("??0Session@Net@@QAE@ABU_GUID@@ABVAuthentication@1@PBVAddress@1@PB_WABUPlayerDescription@1@@Z");
    todo("implement");
}

Net::Session::Session(Net::Authentication const &, Net::SessionDescription const &, Net::PlayerDescription const &, unsigned short) // 0x6D203D
{
    mangled_assert("??0Session@Net@@QAE@ABVAuthentication@1@ABUSessionDescription@1@ABUPlayerDescription@1@G@Z");
    todo("implement");
}

_inline std::invalid_argument::invalid_argument(std::invalid_argument const &) // 0x6D2278
{
    mangled_assert("??0invalid_argument@std@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

_inline std::logic_error::logic_error(std::logic_error const &) // 0x6D22B7
{
    mangled_assert("??0logic_error@std@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

_inline std::_List_buy<Net::Message,std::allocator<Net::Message> >::~_List_buy<Net::Message,std::allocator<Net::Message> >() // 0x6D22F9
{
    mangled_assert("??1?$_List_buy@VMessage@Net@@V?$allocator@VMessage@Net@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_buy<std::pair<unsigned long const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > >,std::allocator<std::pair<unsigned long const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > >::~_Tree_buy<std::pair<unsigned long const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > >,std::allocator<std::pair<unsigned long const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > >() // 0x6D2354
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@V?$allocator@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_buy<std::pair<unsigned long const ,CBlowFish>,std::allocator<std::pair<unsigned long const ,CBlowFish> > >::~_Tree_buy<std::pair<unsigned long const ,CBlowFish>,std::allocator<std::pair<unsigned long const ,CBlowFish> > >() // 0x6D235D
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBKVCBlowFish@@@std@@V?$allocator@U?$pair@$$CBKVCBlowFish@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_comp<0,std::_Tmap_traits<unsigned long,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::less<unsigned long>,std::allocator<std::pair<unsigned long const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > >,0> >::~_Tree_comp<0,std::_Tmap_traits<unsigned long,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::less<unsigned long>,std::allocator<std::pair<unsigned long const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > >,0> >() // 0x6D2366
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@KV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@2@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_comp<0,std::_Tmap_traits<unsigned long,CBlowFish,std::less<unsigned long>,std::allocator<std::pair<unsigned long const ,CBlowFish> >,0> >::~_Tree_comp<0,std::_Tmap_traits<unsigned long,CBlowFish,std::less<unsigned long>,std::allocator<std::pair<unsigned long const ,CBlowFish> >,0> >() // 0x6D236F
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@KVCBlowFish@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKVCBlowFish@@@std@@@3@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::map<unsigned long,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::less<unsigned long>,std::allocator<std::pair<unsigned long const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > >::~map<unsigned long,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::less<unsigned long>,std::allocator<std::pair<unsigned long const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > >() // 0x6D238A
{
    mangled_assert("??1?$map@KV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::map<unsigned long,CBlowFish,std::less<unsigned long>,std::allocator<std::pair<unsigned long const ,CBlowFish> > >::~map<unsigned long,CBlowFish,std::less<unsigned long>,std::allocator<std::pair<unsigned long const ,CBlowFish> > >() // 0x6D238F
{
    mangled_assert("??1?$map@KVCBlowFish@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKVCBlowFish@@@std@@@3@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<unsigned long const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > >::~pair<unsigned long const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > >() // 0x6D2394
{
    mangled_assert("??1?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<unsigned long,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > >::~pair<unsigned long,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > >() // 0x6D23A1
{
    mangled_assert("??1?$pair@KV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::queue<Net::Message,std::list<Net::Message,std::allocator<Net::Message> > >::~queue<Net::Message,std::list<Net::Message,std::allocator<Net::Message> > >() // 0x6D23AE
{
    mangled_assert("??1?$queue@VMessage@Net@@V?$list@VMessage@Net@@V?$allocator@VMessage@Net@@@std@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline Net::ENoNetwork::~ENoNetwork() // 0x6D23D2
{
    mangled_assert("??1ENoNetwork@Net@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

Net::Session::~Session() // 0x6D23DC
{
    mangled_assert("??1Session@Net@@UAE@XZ");
    todo("implement");
}

_inline std::invalid_argument::~invalid_argument() // 0x6D24D9
{
    mangled_assert("??1invalid_argument@std@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::logic_error::~logic_error() // 0x6D24DF
{
    mangled_assert("??1logic_error@std@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline Net::Message &Net::Message::operator=(Net::Message const &) // 0x6D2583
{
    mangled_assert("??4Message@Net@@QAEAAV01@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

_inline Net::PlayerDescription &Net::PlayerDescription::operator=(Net::PlayerDescription const &) // 0x6D25AF
{
    mangled_assert("??4PlayerDescription@Net@@QAEAAU01@ABU01@@Z");
    compiler_generated();
    todo("implement");
}

_inline Net::SessionDescription &Net::SessionDescription::operator=(Net::SessionDescription const &) // 0x6D25DB
{
    mangled_assert("??4SessionDescription@Net@@QAEAAU01@ABU01@@Z");
    compiler_generated();
    todo("implement");
}

void Net::Session::TweakTimeoutParams() // 0x6D3848
{
    mangled_assert("?TweakTimeoutParams@Session@Net@@AAEXXZ");
    todo("implement");
}

HRESULT Net::Session::Callback(unsigned long, void *) // 0x6D30C7
{
    mangled_assert("?Callback@Session@Net@@EAEJKPAX@Z");
    todo("implement");
}

HRESULT Net::Session::CB_ApplicationDesc() // 0x6D2AF0
{
    mangled_assert("?CB_ApplicationDesc@Session@Net@@AAEJXZ");
    todo("implement");
}

HRESULT Net::Session::CB_ConnectComplete(_DPNMSG_CONNECT_COMPLETE const &) // 0x6D2B4A
{
    mangled_assert("?CB_ConnectComplete@Session@Net@@AAEJABU_DPNMSG_CONNECT_COMPLETE@@@Z");
    todo("implement");
}

HRESULT Net::Session::CB_EnumHostQuery(_DPNMSG_ENUM_HOSTS_QUERY &) // 0x6D2B9A
{
    mangled_assert("?CB_EnumHostQuery@Session@Net@@AAEJAAU_DPNMSG_ENUM_HOSTS_QUERY@@@Z");
    todo("implement");
}

HRESULT Net::Session::CB_HostMigrate(_DPNMSG_HOST_MIGRATE const &) // 0x6D2C1F
{
    mangled_assert("?CB_HostMigrate@Session@Net@@AAEJABU_DPNMSG_HOST_MIGRATE@@@Z");
    todo("implement");
}

HRESULT Net::Session::CB_PeerInfo(_DPNMSG_PEER_INFO const &) // 0x6D2C92
{
    mangled_assert("?CB_PeerInfo@Session@Net@@AAEJABU_DPNMSG_PEER_INFO@@@Z");
    todo("implement");
}

HRESULT Net::Session::CB_PlayerConnect(_DPNMSG_INDICATE_CONNECT &) // 0x6D2CF4
{
    mangled_assert("?CB_PlayerConnect@Session@Net@@AAEJAAU_DPNMSG_INDICATE_CONNECT@@@Z");
    todo("implement");
}

HRESULT Net::Session::CB_PlayerCreate(_DPNMSG_CREATE_PLAYER const &) // 0x6D2D78
{
    mangled_assert("?CB_PlayerCreate@Session@Net@@AAEJABU_DPNMSG_CREATE_PLAYER@@@Z");
    todo("implement");
}

HRESULT Net::Session::CB_PlayerDestroy(_DPNMSG_DESTROY_PLAYER const &) // 0x6D2F1B
{
    mangled_assert("?CB_PlayerDestroy@Session@Net@@AAEJABU_DPNMSG_DESTROY_PLAYER@@@Z");
    todo("implement");
}

HRESULT Net::Session::CB_ReceiveMessage(_DPNMSG_RECEIVE const &) // 0x6D2FBD
{
    mangled_assert("?CB_ReceiveMessage@Session@Net@@AAEJABU_DPNMSG_RECEIVE@@@Z");
    todo("implement");
}

HRESULT Net::Session::CB_ReturnBuffer(_DPNMSG_RETURN_BUFFER const &) // 0x6D30B2
{
    mangled_assert("?CB_ReturnBuffer@Session@Net@@AAEJABU_DPNMSG_RETURN_BUFFER@@@Z");
    todo("implement");
}

void Net::Session::SetJoinable(bool) // 0x6D37BE
{
    mangled_assert("?SetJoinable@Session@Net@@QAEX_N@Z");
    todo("implement");
}

void Net::Session::SetVisible(bool) // 0x6D383B
{
    mangled_assert("?SetVisible@Session@Net@@QAEX_N@Z");
    todo("implement");
}

__int32 Net::Session::GetNumberPlayer() const // 0x6D3427
{
    mangled_assert("?GetNumberPlayer@Session@Net@@QBEHXZ");
    todo("implement");
}

unsigned long Net::Session::GetLocalPlayerID() const // 0x6D339C
{
    mangled_assert("?GetLocalPlayerID@Session@Net@@QBEKXZ");
    todo("implement");
}

unsigned long Net::Session::GetHostID() const // 0x6D3398
{
    mangled_assert("?GetHostID@Session@Net@@QBEKXZ");
    todo("implement");
}

Net::Address Net::Session::GetHostAddress() const // 0x6D3274
{
    mangled_assert("?GetHostAddress@Session@Net@@QBE?AVAddress@2@XZ");
    todo("implement");
}

bool Net::Session::DropPlayer(unsigned long) // 0x6D318D
{
    mangled_assert("?DropPlayer@Session@Net@@QAE_NK@Z");
    todo("implement");
}

bool Net::Session::GetPlayerInfo(unsigned long, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &, bool &, bool &) const // 0x6D352B
{
    mangled_assert("?GetPlayerInfo@Session@Net@@ABE_NKAAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AA_N1@Z");
    todo("implement");
}

std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > Net::Session::GetPlayerName(unsigned long) const // 0x6D35F3
{
    mangled_assert("?GetPlayerName@Session@Net@@QBE?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@K@Z");
    todo("implement");
}

bool Net::Session::GetDescription(Net::SessionDescription &) const // 0x6D31D1
{
    mangled_assert("?GetDescription@Session@Net@@QBE_NAAUSessionDescription@2@@Z");
    todo("implement");
}

bool Net::Session::SetDescription(Net::SessionDescription const &) // 0x6D3790
{
    mangled_assert("?SetDescription@Session@Net@@QAE_NABUSessionDescription@2@@Z");
    todo("implement");
}

bool Net::Session::GetPlayerDescription(unsigned long, Net::PlayerDescription &) const // 0x6D3444
{
    mangled_assert("?GetPlayerDescription@Session@Net@@QBE_NKAAUPlayerDescription@2@@Z");
    todo("implement");
}

bool Net::Session::SetLocalPlayerDescription(Net::PlayerDescription const &) // 0x6D37CB
{
    mangled_assert("?SetLocalPlayerDescription@Session@Net@@QAE_NABUPlayerDescription@2@@Z");
    todo("implement");
}

bool Net::Session::SetName(unsigned long, wchar_t const *) // 0x6D3807
{
    mangled_assert("?SetName@Session@Net@@QAE_NKPB_W@Z");
    todo("implement");
}

bool Net::Session::IsHost() const // 0x6D366F
{
    mangled_assert("?IsHost@Session@Net@@QBE_NXZ");
    todo("implement");
}

bool Net::Session::Broadcast(void const *, unsigned __int32, Net::SendMode, Net::SendPriority) const // 0x6D2AC2
{
    mangled_assert("?Broadcast@Session@Net@@QBE_NPBXIW4SendMode@2@W4SendPriority@2@@Z");
    todo("implement");
}

bool Net::Session::SendTo(unsigned long, void const *, unsigned __int32, Net::SendMode, Net::SendPriority) const // 0x6D3673
{
    mangled_assert("?SendTo@Session@Net@@QBE_NKPBXIW4SendMode@2@W4SendPriority@2@@Z");
    todo("implement");
}

bool Net::Session::GetMessageA(Net::Message &) // 0x6D33A0
{
    mangled_assert("?GetMessageA@Session@Net@@QAE_NAAVMessage@2@@Z");
    todo("implement");
}

bool Net::Session::GetConnectionInfo(unsigned long, _DPN_CONNECTION_INFO &) const // 0x6D31AA
{
    mangled_assert("?GetConnectionInfo@Session@Net@@QBE_NKAAU_DPN_CONNECTION_INFO@@@Z");
    todo("implement");
}

bool Net::Session::GetSendQueueInfo(unsigned long, unsigned long &, unsigned long &) const // 0x6D364F
{
    mangled_assert("?GetSendQueueInfo@Session@Net@@QBE_NKAAK0@Z");
    todo("implement");
}

/* ---------- private code */
#endif
