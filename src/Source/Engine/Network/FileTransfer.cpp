#if 0
/* ---------- headers */

#include "decomp.h"
#include <mmsystem.h>
#include <mmsyscom.h>
#include <process.h>
#include <utilapiset.h>
#include <heapapi.h>
#include <processthreadsapi.h>
#include <ws2def.h>
#include <stdexcept>
#include <xstring>
#include <ole2.h>
#include <inaddr.h>
#include <objbase.h>
#include <atlbase.inl>
#include <xmemory0>
#include <pch.h>
#include <combaseapi.h>
#include <crtdefs.h>
#include <pshpack8.h>
#include <winnetwk.h>
#include <qos.h>
#include <wnnc.h>
#include <NetworkDP8\source\exception.h>
#include <stdarg.h>
#include <windef.h>
#include <minwindef.h>
#include <bemapiset.h>
#include <rpcdcep.h>
#include <specstrings.h>
#include <playsoundapi.h>
#include <specstrings_strict.h>
#include <specstrings_undef.h>
#include <handleapi.h>
#include <boost\type_traits\detail\ice_or.hpp>
#include <driverspecs.h>
#include <objidlbase.h>
#include <sdv_driverspecs.h>
#include <ncrypt.h>
#include <boost\type_traits\has_trivial_copy.hpp>
#include <boost\type_traits\is_volatile.hpp>
#include <threadpoolapiset.h>
#include <unknwnbase.h>
#include <oaidl.h>
#include <new>
#include <commdlg.h>
#include <xstddef>
#include <namespaceapi.h>
#include <ktmtypes.h>
#include <type_traits>
#include <boost\pending\ct_if.hpp>
#include <dpapi.h>
#include <propidl.h>
#include <unknwn.h>
#include <winbase.h>
#include <wincon.h>
#include <mmiscapi.h>
#include <apisetcconv.h>
#include <mmeapi.h>
#include <imm.h>
#include <boost\type_traits\is_stateless.hpp>
#include <minwinbase.h>
#include <boost\type_traits\has_trivial_constructor.hpp>
#include <xutility>
#include <atlcore.h>
#include <boost\type_traits\is_pod.hpp>
#include <utility>
#include <winscard.h>
#include <tchar.h>
#include <iosfwd>
#include <boost\type_traits\is_scalar.hpp>
#include <vector>
#include <fileio\bytestream.h>
#include <wtypes.h>
#include <mbstring.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <errhandlingapi.h>
#include <rpcndr.h>
#include <boost\type_traits\has_trivial_destructor.hpp>
#include <processenv.h>
#include <rpcnsip.h>
#include <boost\type_traits\intrinsics.hpp>
#include <guiddef.h>
#include <stralign.h>
#include <jobapi.h>
#include <apiset.h>
#include <winsvc.h>
#include <boost\type_traits\detail\type_trait_undef.hpp>
#include <systemtopologyapi.h>
#include <pshpack1.h>
#include <atltransactionmanager.h>
#include <boost\type_traits\is_convertible.hpp>
#include <wow64apiset.h>
#include <ktmw32.h>
#include <boost\type_traits\detail\bool_trait_undef.hpp>
#include <boost\type_traits\detail\yes_no_type.hpp>
#include <boost\type_traits\is_empty.hpp>
#include <atliface.h>
#include <boost\type_traits\is_float.hpp>
#include <boost\type_traits\is_member_pointer.hpp>
#include <NetworkDP8\source\criticalsection.h>
#include <winnls.h>
#include <shellapi.h>
#include <shlwapi.h>
#include <boost\type_traits\is_member_function_pointer.hpp>
#include <datetimeapi.h>
#include <shtypes.h>
#include <boost\type_traits\detail\is_mem_fun_pointer_impl.hpp>
#include <winnt.h>
#include <processtopologyapi.h>
#include <fileio\filestream.h>
#include <kernelspecs.h>
#include <urlmon.h>
#include <basetsd.h>
#include <pshpack2.h>
#include <libloaderapi.h>
#include <sysinfoapi.h>
#include <boost\type_traits\is_fundamental.hpp>
#include <atlchecked.h>
#include <boost\type_traits\is_void.hpp>
#include <boost\type_traits\ice.hpp>
#include <winreg.h>
#include <bcrypt.h>
#include <atlexcept.h>
#include <boost\type_traits\detail\ice_and.hpp>
#include <atltrace.h>
#include <oleacc.h>
#include <atlconv.h>
#include <boost\assert.hpp>
#include <winsock.h>
#include <atlalloc.h>
#include <NetworkDP8\source\blowfish.h>
#include <nb30.h>
#include <wincrypt.h>
#include <timeapi.h>
#include <NetworkDP8\source\session.h>
#include <NetworkDP8\source\directplay.h>
#include <securityappcontainer.h>
#include <rpcsal.h>
#include <boost\thread\thread.hpp>
#include <fibersapi.h>
#include <boost\function.hpp>
#include <boost\bind\mem_fn_cc.hpp>
#include <boost\preprocessor\iterate.hpp>
#include <boost\cstdint.hpp>
#include <boost\preprocessor\iteration\iterate.hpp>
#include <winver.h>
#include <boost\config.hpp>
#include <boost\preprocessor\arithmetic\dec.hpp>
#include <verrsrc.h>
#include <oleauto.h>
#include <boost\preprocessor\config\config.hpp>
#include <cassert>
#include <winioctl.h>
#include <servprov.h>
#include <boost\preprocessor\arithmetic\inc.hpp>
#include <assert.h>
#include <realtimeapiset.h>
#include <tvout.h>
#include <boost\preprocessor\array\elem.hpp>
#include <mciapi.h>
#include <comcat.h>
#include <boost\preprocessor\array\data.hpp>
#include <winuser.h>
#include <boost\preprocessor\tuple\elem.hpp>
#include <cguid.h>
#include <boost\preprocessor\array\size.hpp>
#include <NetworkDP8\source\sessionenum.h>
#include <atlsimpcoll.h>
#include <boost\preprocessor\cat.hpp>
#include <NetworkDP8\source\sessioninfo.h>
#include <consoleapi.h>
#include <boost\preprocessor\slot\slot.hpp>
#include <namedpipeapi.h>
#include <ioapiset.h>
#include <boost\preprocessor\slot\detail\def.hpp>
#include <boost\type_traits\is_same.hpp>
#include <boost\function\detail\prologue.hpp>
#include <memoryapi.h>
#include <dlgs.h>
#include <winperf.h>
#include <statreg.h>
#include <boost\function\function_base.hpp>
#include <boost\type_traits\arithmetic_traits.hpp>
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
#include <joystickapi.h>
#include <boost\mpl\aux_\preprocessor\params.hpp>
#include <boost\preprocessor\control\iif.hpp>
#include <rpcdce.h>
#include <boost\mpl\aux_\config\preprocessor.hpp>
#include <boost\preprocessor\punctuation\comma_if.hpp>
#include <NetworkDP8\source\sessiondesc.h>
#include <winerror.h>
#include <boost\mpl\aux_\lambda_support.hpp>
#include <boost\preprocessor\control\if.hpp>
#include <NetworkDP8\source\playerdesc.h>
#include <winefs.h>
#include <boost\mpl\aux_\config\lambda.hpp>
#include <boost\bind\mem_fn_template.hpp>
#include <boost\preprocessor\logical\bool.hpp>
#include <NetworkDP8\networkdp8.h>
#include <boost\mpl\aux_\config\ttp.hpp>
#include <boost\preprocessor\facilities\empty.hpp>
#include <NetworkDP8\source\address.h>
#include <ddeml.h>
#include <lzexpand.h>
#include <boost\mpl\aux_\config\overload_resolution.hpp>
#include <boost\preprocessor\punctuation\comma.hpp>
#include <atlbase.h>
#include <boost\mpl\bool.hpp>
#include <boost\preprocessor\repetition\repeat.hpp>
#include <atldef.h>
#include <atlcomcli.h>
#include <boost\mpl\bool_fwd.hpp>
#include <boost\preprocessor\tuple\eat.hpp>
#include <atlrc.h>
#include <olectl.h>
#include <boost\preprocessor\tuple\rem.hpp>
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
#include <boost\type_traits\config.hpp>
#include <boost\preprocessor\inc.hpp>
#include <securitybaseapi.h>
#include <boost\preprocessor\iteration\detail\iter\forward1.hpp>
#include <boost\mpl\aux_\config\static_constant.hpp>
#include <boost\preprocessor\iteration\detail\bounds\lower1.hpp>
#include <boost\thread\mutex.hpp>
#include <boost\preprocessor\slot\detail\shared.hpp>
#include <boost\thread\detail\lock.hpp>
#include <oleidl.h>
#include <mcx.h>
#include <boost\preprocessor\iteration\detail\bounds\upper1.hpp>
#include <boost\thread\exceptions.hpp>
#include <boost\function\detail\function_iterate.hpp>
#include <boost\thread\detail\config.hpp>
#include <boost\function\detail\maybe_include.hpp>
#include <boost\function\function_template.hpp>
#include <NetworkDP8\source\authentication.h>
#include <debugapi.h>
#include <boost\type_traits\is_class.hpp>
#include <fileapi.h>
#include <boost\type_traits\is_union.hpp>
#include <boost\type_traits\remove_cv.hpp>
#include <boost\type_traits\broken_compiler_spec.hpp>
#include <cderr.h>
#include <boost\type_traits\detail\cv_traits_impl.hpp>
#include <dde.h>
#include <objidl.h>
#include <msxml.h>
#include <Network\contentmessage.h>
#include <winsock2.h>
#include <boost\type_traits\is_enum.hpp>
#include <commandtype.h>
#include <winapifamily.h>
#include <boost\type_traits\add_reference.hpp>
#include <windows.h>
#include <boost\type_traits\is_reference.hpp>
#include <sdkddkver.h>
#include <threadpoollegacyapiset.h>
#include <rpcnterr.h>
#include <winsmcrd.h>
#include <dplay8.h>
#include <excpt.h>
#include <rpcnsi.h>
#include <rpcasync.h>
#include <dpaddr.h>
#include <Network\FileTransfer.h>
#include <poppack.h>
#include <LevelDesc.h>
#include <wchar.h>
#include <boost\utility.hpp>
#include <boost\type_traits\detail\type_trait_def.hpp>
#include <Hash.h>
#include <boost\utility\addressof.hpp>
#include <fileio\md5.h>
#include <boost\detail\workaround.hpp>
#include <boost\ref.hpp>
#include <mmiscapi2.h>
#include <ime_cmodes.h>
#include <profileapi.h>
#include <boost\type_traits\is_pointer.hpp>
#include <synchapi.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_5BC880(FileDownload *const, unsigned __int32, MessageFileHeader const *);
FileDownload::FileDownload(unsigned __int32, MessageFileHeader const *) // 0x5BC880
{
    mangled_assert("??0FileDownload@@QAE@IPBUMessageFileHeader@@@Z");
    todo("implement");
    _sub_5BC880(this, arg, arg);
}

_extern bool _sub_5BC992(FileDownload *const, MessageFileChunk const *);
bool FileDownload::Update(MessageFileChunk const *) // 0x5BC992
{
    mangled_assert("?Update@FileDownload@@QAE_NPBUMessageFileChunk@@@Z");
    todo("implement");
    bool __result = _sub_5BC992(this, arg);
    return __result;
}

_extern _sub_5BC8F0(FileUpload *const, unsigned __int32, unsigned __int32, std::vector<unsigned char,std::allocator<unsigned char> > &);
FileUpload::FileUpload(unsigned __int32, unsigned __int32, std::vector<unsigned char,std::allocator<unsigned char> > &) // 0x5BC8F0
{
    mangled_assert("??0FileUpload@@QAE@IIAAV?$vector@EV?$allocator@E@std@@@std@@@Z");
    todo("implement");
    _sub_5BC8F0(this, arg, arg, arg);
}

_extern bool _sub_5BC9F3(FileUpload *const, Net::Session *);
bool FileUpload::Update(Net::Session *) // 0x5BC9F3
{
    mangled_assert("?Update@FileUpload@@QAE_NPAVSession@Net@@@Z");
    todo("implement");
    bool __result = _sub_5BC9F3(this, arg);
    return __result;
}

/* ---------- private code */
#endif
