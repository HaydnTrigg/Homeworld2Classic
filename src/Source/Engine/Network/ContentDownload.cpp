#if 0
/* ---------- headers */

#include "decomp.h"
#include <boost\function\detail\maybe_include.hpp>
#include <boost\function\function_template.hpp>
#include <stdexcept>
#include <debugapi.h>
#include <xstring>
#include <boost\type_traits\is_class.hpp>
#include <fileapi.h>
#include <xmemory0>
#include <boost\type_traits\is_union.hpp>
#include <pch.h>
#include <boost\type_traits\remove_cv.hpp>
#include <memory\memorylib.h>
#include <boost\type_traits\broken_compiler_spec.hpp>
#include <crtdefs.h>
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
#include <gameSettings.h>
#include <config.h>
#include <poppack.h>
#include <syncChecking.h>
#include <boost\type_traits\detail\type_trait_def.hpp>
#include <boost\ref.hpp>
#include <new>
#include <mmiscapi2.h>
#include <ime_cmodes.h>
#include <profileapi.h>
#include <xstddef>
#include <boost\type_traits\is_pointer.hpp>
#include <type_traits>
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
#include <xutility>
#include <combaseapi.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <fileio\bytestream.h>
#include <pshpack8.h>
#include <winnetwk.h>
#include <qos.h>
#include <NetworkDP8\source\blowfish.h>
#include <xmemory>
#include <fileio\fileioexports.h>
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
#include <list>
#include <threadpoolapiset.h>
#include <unknwnbase.h>
#include <oaidl.h>
#include <commdlg.h>
#include <namespaceapi.h>
#include <ktmtypes.h>
#include <boost\pending\ct_if.hpp>
#include <dpapi.h>
#include <propidl.h>
#include <NetworkDP8\source\sessionenum.h>
#include <unknwn.h>
#include <NetworkDP8\source\sessioninfo.h>
#include <Network\FileTransfer.h>
#include <winbase.h>
#include <wincon.h>
#include <mmiscapi.h>
#include <map>
#include <apisetcconv.h>
#include <mmeapi.h>
#include <imm.h>
#include <boost\type_traits\is_stateless.hpp>
#include <xtree>
#include <minwinbase.h>
#include <boost\type_traits\has_trivial_constructor.hpp>
#include <atlcore.h>
#include <boost\type_traits\is_pod.hpp>
#include <winscard.h>
#include <tchar.h>
#include <boost\assert.hpp>
#include <boost\type_traits\is_scalar.hpp>
#include <wtypes.h>
#include <mbstring.h>
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
#include <NetworkDP8\source\sessiondesc.h>
#include <winsvc.h>
#include <boost\type_traits\detail\type_trait_undef.hpp>
#include <NetworkDP8\source\playerdesc.h>
#include <systemtopologyapi.h>
#include <pshpack1.h>
#include <atltransactionmanager.h>
#include <boost\type_traits\is_convertible.hpp>
#include <boost\cstdint.hpp>
#include <wow64apiset.h>
#include <ktmw32.h>
#include <boost\type_traits\detail\bool_trait_undef.hpp>
#include <boost\type_traits\detail\yes_no_type.hpp>
#include <boost\type_traits\is_empty.hpp>
#include <atliface.h>
#include <boost\config.hpp>
#include <boost\type_traits\is_float.hpp>
#include <cassert>
#include <boost\type_traits\is_member_pointer.hpp>
#include <NetworkDP8\source\criticalsection.h>
#include <winnls.h>
#include <shellapi.h>
#include <shlwapi.h>
#include <assert.h>
#include <boost\type_traits\is_member_function_pointer.hpp>
#include <datetimeapi.h>
#include <shtypes.h>
#include <boost\type_traits\detail\is_mem_fun_pointer_impl.hpp>
#include <fileio\filestream.h>
#include <winnt.h>
#include <processtopologyapi.h>
#include <gamestructimpl.h>
#include <kernelspecs.h>
#include <urlmon.h>
#include <Badge.h>
#include <basetsd.h>
#include <pshpack2.h>
#include <libloaderapi.h>
#include <sysinfoapi.h>
#include <boost\type_traits\is_fundamental.hpp>
#include <LevelManager.h>
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
#include <winsock.h>
#include <atlalloc.h>
#include <assist\typemagic.h>
#include <nb30.h>
#include <wincrypt.h>
#include <NetworkDP8\source\authentication.h>
#include <timeapi.h>
#include <NetworkDP8\source\session.h>
#include <NetworkDP8\source\directplay.h>
#include <securityappcontainer.h>
#include <rpcsal.h>
#include <boost\thread\thread.hpp>
#include <fibersapi.h>
#include <boost\function.hpp>
#include <boost\bind\mem_fn_cc.hpp>
#include <zlib\compression.h>
#include <boost\preprocessor\iterate.hpp>
#include <zlib\zlibexports.h>
#include <boost\preprocessor\iteration\iterate.hpp>
#include <winver.h>
#include <boost\preprocessor\arithmetic\dec.hpp>
#include <LevelDesc.h>
#include <verrsrc.h>
#include <oleauto.h>
#include <boost\preprocessor\config\config.hpp>
#include <Hash.h>
#include <boost\static_assert.hpp>
#include <winioctl.h>
#include <servprov.h>
#include <boost\preprocessor\arithmetic\inc.hpp>
#include <fileio\md5.h>
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
#include <atlsimpcoll.h>
#include <boost\preprocessor\cat.hpp>
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
#include <savegamedef.h>
#include <boost\type_traits\detail\bool_trait_def.hpp>
#include <boost\preprocessor\enum.hpp>
#include <NetworkDP8\source\message.h>
#include <fileio\filepath.h>
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
#include <Menus\LoadingScreenRenderer.h>
#include <rpcdce.h>
#include <boost\mpl\aux_\config\preprocessor.hpp>
#include <boost\preprocessor\punctuation\comma_if.hpp>
#include <winerror.h>
#include <boost\mpl\aux_\lambda_support.hpp>
#include <boost\preprocessor\control\if.hpp>
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
#include <Network\ContentDownload.h>
#include <new.h>
#include <interlockedapi.h>
#include <timezoneapi.h>
#include <stringapiset.h>
#include <reason.h>
#include <ocidl.h>
#include <boost\preprocessor\enum_params.hpp>
#include <wchar.h>
#include <boost\utility.hpp>
#include <boost\type_traits\composite_traits.hpp>
#include <boost\type_traits\detail\ice_eq.hpp>
#include <boost\preprocessor\repetition\enum_params.hpp>
#include <localizer\localizer.h>
#include <boost\type_traits\is_array.hpp>
#include <boost\utility\addressof.hpp>
#include <boost\preprocessor\repeat.hpp>
#include <iterator>
#include <boost\detail\workaround.hpp>
#include <boost\type_traits\config.hpp>
#include <boost\preprocessor\inc.hpp>
#include <securitybaseapi.h>
#include <boost\preprocessor\iteration\detail\iter\forward1.hpp>
#include <boost\mpl\aux_\config\static_constant.hpp>
#include <boost\preprocessor\iteration\detail\bounds\lower1.hpp>
#include <boost\thread\mutex.hpp>
#include <algorithm>
#include <boost\preprocessor\slot\detail\shared.hpp>
#include <boost\thread\detail\lock.hpp>
#include <oleidl.h>
#include <mcx.h>
#include <boost\preprocessor\iteration\detail\bounds\upper1.hpp>
#include <boost\thread\exceptions.hpp>
#include <boost\function\detail\function_iterate.hpp>
#include <boost\thread\detail\config.hpp>

/* ---------- constants */

/* ---------- definitions */

typedef std::list<FileDownload *,std::allocator<FileDownload *> > DownloadList;
typedef std::list<FileUpload *,std::allocator<FileUpload *> > UploadList;

/* ---------- prototypes */

extern _inline void DBGLOG(...);

_static void Compress(std::vector<unsigned char,std::allocator<unsigned char> > const &input, std::vector<unsigned char,std::allocator<unsigned char> > &output);
_static void Decompress(std::vector<unsigned char,std::allocator<unsigned char> > const &input, std::vector<unsigned char,std::allocator<unsigned char> > &output);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_inline void DBGLOG(...) // 0x5BAD9D
{
    mangled_assert("?DBGLOG@@YAXZZ");
    todo("implement");
}

ContentDownloadFSM::ContentDownloadFSM(Net::Session *) // 0x5BA59A
{
    mangled_assert("??0ContentDownloadFSM@@QAE@PAVSession@Net@@@Z");
    todo("implement");
}

_inline std::_List_buy<FileDownload *,std::allocator<FileDownload *> >::~_List_buy<FileDownload *,std::allocator<FileDownload *> >() // 0x5BA737
{
    mangled_assert("??1?$_List_buy@PAVFileDownload@@V?$allocator@PAVFileDownload@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_List_buy<FileUpload *,std::allocator<FileUpload *> >::~_List_buy<FileUpload *,std::allocator<FileUpload *> >() // 0x5BA740
{
    mangled_assert("??1?$_List_buy@PAVFileUpload@@V?$allocator@PAVFileUpload@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_buy<std::pair<unsigned int const ,ContentDownloadFSM::PlayerInfo>,std::allocator<std::pair<unsigned int const ,ContentDownloadFSM::PlayerInfo> > >::~_Tree_buy<std::pair<unsigned int const ,ContentDownloadFSM::PlayerInfo>,std::allocator<std::pair<unsigned int const ,ContentDownloadFSM::PlayerInfo> > >() // 0x5BA770
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBIUPlayerInfo@ContentDownloadFSM@@@std@@V?$allocator@U?$pair@$$CBIUPlayerInfo@ContentDownloadFSM@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_comp<0,std::_Tmap_traits<unsigned int,ContentDownloadFSM::PlayerInfo,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,ContentDownloadFSM::PlayerInfo> >,0> >::~_Tree_comp<0,std::_Tmap_traits<unsigned int,ContentDownloadFSM::PlayerInfo,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,ContentDownloadFSM::PlayerInfo> >,0> >() // 0x5BA779
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@IUPlayerInfo@ContentDownloadFSM@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUPlayerInfo@ContentDownloadFSM@@@std@@@4@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::map<unsigned int,ContentDownloadFSM::PlayerInfo,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,ContentDownloadFSM::PlayerInfo> > >::~map<unsigned int,ContentDownloadFSM::PlayerInfo,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,ContentDownloadFSM::PlayerInfo> > >() // 0x5BA7CA
{
    mangled_assert("??1?$map@IUPlayerInfo@ContentDownloadFSM@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUPlayerInfo@ContentDownloadFSM@@@std@@@4@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

ContentDownloadFSM::~ContentDownloadFSM() // 0x5BA7CF
{
    mangled_assert("??1ContentDownloadFSM@@QAE@XZ");
    todo("implement");
}

_inline FileDownload::~FileDownload() // 0x5BA841
{
    mangled_assert("??1FileDownload@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline FileUpload::~FileUpload() // 0x5BA858
{
    mangled_assert("??1FileUpload@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline MessageFileHeader::~MessageFileHeader() // 0x5BA860
{
    mangled_assert("??1MessageFileHeader@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

bool ContentDownloadFSM::AreAllPlayersReady() const // 0x5BABAE
{
    mangled_assert("?AreAllPlayersReady@ContentDownloadFSM@@ABE_NXZ");
    todo("implement");
}

bool ContentDownloadFSM::AreWeReady() const // 0x5BABDB
{
    mangled_assert("?AreWeReady@ContentDownloadFSM@@ABE_NXZ");
    todo("implement");
}

void ContentDownloadFSM::CancelDownloads(unsigned __int32) // 0x5BAC08
{
    mangled_assert("?CancelDownloads@ContentDownloadFSM@@AAEXI@Z");
    todo("implement");
}

void ContentDownloadFSM::CancelUploads(unsigned __int32) // 0x5BACBD
{
    mangled_assert("?CancelUploads@ContentDownloadFSM@@AAEXI@Z");
    todo("implement");
}

void ContentDownloadFSM::IssueFileRequests() // 0x5BAF2B
{
    mangled_assert("?IssueFileRequests@ContentDownloadFSM@@AAEXXZ");
    todo("implement");
}

void ContentDownloadFSM::OnDestroyPlayer(unsigned __int32) // 0x5BAFD5
{
    mangled_assert("?OnDestroyPlayer@ContentDownloadFSM@@AAEXI@Z");
    todo("implement");
}

void ContentDownloadFSM::OnDownloadStatus(unsigned __int32, MessageDownloadStatus const *) // 0x5BB01C
{
    mangled_assert("?OnDownloadStatus@ContentDownloadFSM@@AAEXIPBUMessageDownloadStatus@@@Z");
    todo("implement");
}

void ContentDownloadFSM::OnFileRequest(unsigned __int32, MessageFileRequest const *) // 0x5BB1A0
{
    mangled_assert("?OnFileRequest@ContentDownloadFSM@@AAEXIPBUMessageFileRequest@@@Z");
    todo("implement");
}

void ContentDownloadFSM::OnFileHeader(unsigned __int32, MessageFileHeader const *) // 0x5BB10A
{
    mangled_assert("?OnFileHeader@ContentDownloadFSM@@AAEXIPBUMessageFileHeader@@@Z");
    todo("implement");
}

void ContentDownloadFSM::OnFileChunk(unsigned __int32, MessageFileChunk const *) // 0x5BB04E
{
    mangled_assert("?OnFileChunk@ContentDownloadFSM@@AAEXIPBUMessageFileChunk@@@Z");
    todo("implement");
}

void ContentDownloadFSM::OnMessage(Net::Message const &) // 0x5BB470
{
    mangled_assert("?OnMessage@ContentDownloadFSM@@AAEXABVMessage@Net@@@Z");
    todo("implement");
}

void ContentDownloadFSM::OnPlayerReady(unsigned __int32) // 0x5BB4D2
{
    mangled_assert("?OnPlayerReady@ContentDownloadFSM@@AAEXI@Z");
    todo("implement");
}

void ContentDownloadFSM::ReceiveMessages() // 0x5BB501
{
    mangled_assert("?ReceiveMessages@ContentDownloadFSM@@AAEXXZ");
    todo("implement");
}

void ContentDownloadFSM::RequestBadge(__int32) // 0x5BB56A
{
    mangled_assert("?RequestBadge@ContentDownloadFSM@@AAEXH@Z");
    todo("implement");
}

void ContentDownloadFSM::RequestLevel() // 0x5BB5D0
{
    mangled_assert("?RequestLevel@ContentDownloadFSM@@AAEXXZ");
    todo("implement");
}

void ContentDownloadFSM::SaveBadge(std::auto_ptr<FileDownload>) // 0x5BB635
{
    mangled_assert("?SaveBadge@ContentDownloadFSM@@AAEXV?$auto_ptr@VFileDownload@@@std@@@Z");
    todo("implement");
}

void ContentDownloadFSM::SaveLevel(std::auto_ptr<FileDownload>) // 0x5BB73D
{
    mangled_assert("?SaveLevel@ContentDownloadFSM@@AAEXV?$auto_ptr@VFileDownload@@@std@@@Z");
    todo("implement");
}

void ContentDownloadFSM::SendProgress() // 0x5BB7C9
{
    mangled_assert("?SendProgress@ContentDownloadFSM@@AAEXXZ");
    todo("implement");
}

void ContentDownloadFSM::UpdateUI() const // 0x5BB838
{
    mangled_assert("?UpdateUI@ContentDownloadFSM@@ABEXXZ");
    todo("implement");
}

bool ContentDownloadFSM::EnterLoop() // 0x5BAE38
{
    mangled_assert("?EnterLoop@ContentDownloadFSM@@AAE_NXZ");
    todo("implement");
}

bool ContentDownloadFSM::Run() // 0x5BB61C
{
    mangled_assert("?Run@ContentDownloadFSM@@QAE_NXZ");
    todo("implement");
}

/* ---------- private code */

_static void Compress(std::vector<unsigned char,std::allocator<unsigned char> > const &input, std::vector<unsigned char,std::allocator<unsigned char> > &output) // 0x5BAD04
{
    mangled_assert("Compress");
    todo("implement");
}

_static void Decompress(std::vector<unsigned char,std::allocator<unsigned char> > const &input, std::vector<unsigned char,std::allocator<unsigned char> > &output) // 0x5BAD9E
{
    mangled_assert("Decompress");
    todo("implement");
}
#endif
