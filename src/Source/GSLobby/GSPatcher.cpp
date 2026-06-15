#if 0
/* ---------- headers */

#include "decomp.h"
#include <winver.h>
#include <verrsrc.h>
#include <realtimeapiset.h>
#include <tvout.h>
#include <winuser.h>
#include <crtdefs.h>
#include <ime_cmodes.h>
#include <consoleapi.h>
#include <winsock.h>
#include <namedpipeapi.h>
#include <ioapiset.h>
#include <memoryapi.h>
#include <wingdi.h>
#include <pshpack4.h>
#include <winerror.h>
#include <interlockedapi.h>
#include <timezoneapi.h>
#include <stringapiset.h>
#include <reason.h>
#include <securitybaseapi.h>
#include <imm.h>
#include <debugapi.h>
#include <fileapi.h>
#include <stralign.h>
#include <GSLobby\GamespySDK\pt\pt.h>
#include <GSLobby\GamespySDK\nonport.h>
#include <windows.h>
#include <threadpoollegacyapiset.h>
#include <winsvc.h>
#include <winapifamily.h>
#include <sdkddkver.h>
#include <excpt.h>
#include <poppack.h>
#include <assert.h>
#include <profileapi.h>
#include <synchapi.h>
#include <utilapiset.h>
#include <heapapi.h>
#include <processthreadsapi.h>
#include <pch.h>
#include <GSLobby\GSPatcher.h>
#include <pshpack8.h>
#include <winnetwk.h>
#include <GSLobby\gslobbyexport.h>
#include <wnnc.h>
#include <stdarg.h>
#include <bemapiset.h>
#include <windef.h>
#include <minwindef.h>
#include <specstrings.h>
#include <handleapi.h>
#include <specstrings_strict.h>
#include <specstrings_undef.h>
#include <driverspecs.h>
#include <sdv_driverspecs.h>
#include <threadpoolapiset.h>
#include <inaddr.h>
#include <namespaceapi.h>
#include <ktmtypes.h>
#include <winbase.h>
#include <wincon.h>
#include <apisetcconv.h>
#include <minwinbase.h>
#include <errhandlingapi.h>
#include <processenv.h>
#include <guiddef.h>
#include <jobapi.h>
#include <apiset.h>
#include <systemtopologyapi.h>
#include <pshpack1.h>
#include <wow64apiset.h>
#include <winnls.h>
#include <datetimeapi.h>
#include <processtopologyapi.h>
#include <winnt.h>
#include <pshpack2.h>
#include <kernelspecs.h>
#include <libloaderapi.h>
#include <basetsd.h>
#include <sysinfoapi.h>
#include <mcx.h>
#include <winreg.h>
#include <GSLobby\GamespySDK\ghttp\ghttp.h>
#include <securityappcontainer.h>
#include <fibersapi.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void ProgressCallback(__int32 request, GHTTPState state, char const *buffer, __int32 bufferLen, __int32 bytesReceived, __int32 totalSize, void *param);
extern GHTTPBool CompletedCallback(__int32 request, GHTTPResult result, char *buffer, __int32 bufferLen, void *param);

_static void PatchCallback(__int32 available, __int32 mandatory, char const *versionName, __int32 fileID, char const *downloadURL, void *param);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

void GSPatcher::StartupHTTP() // 0x10002485
{
    mangled_assert("?StartupHTTP@GSPatcher@@SGXXZ");
    todo("implement");
}

void GSPatcher::ShutdownHTTP() // 0x10002480
{
    mangled_assert("?ShutdownHTTP@GSPatcher@@SGXXZ");
    todo("implement");
}

char const *GSPatcher::GetDownloadStatusString(GSPatcher::DownloadStatus ds) // 0x100023A6
{
    mangled_assert("?GetDownloadStatusString@GSPatcher@@SGPBDW4DownloadStatus@1@@Z");
    todo("implement");
}

char const *GSPatcher::GetCompletionResultString(GSPatcher::CompletionResult cr) // 0x100022DE
{
    mangled_assert("?GetCompletionResultString@GSPatcher@@SGPBDW4CompletionResult@1@@Z");
    todo("implement");
}

bool GSPatcher::CheckForPatch(__int32 productID, char const *versionUniqueID, __int32 distributionID, bool bBlocking, GSPatcher::CheckCallback &callback) // 0x10002280
{
    mangled_assert("?CheckForPatch@GSPatcher@@SG_NHPBDH_NAAVCheckCallback@1@@Z");
    todo("implement");
}

void ProgressCallback(__int32 request, GHTTPState state, char const *buffer, __int32 bufferLen, __int32 bytesReceived, __int32 totalSize, void *param) // 0x10001546
{
}

GHTTPBool CompletedCallback(__int32 request, GHTTPResult result, char *buffer, __int32 bufferLen, void *param) // 0x10001442
{
}

GSPatcher::GSPatcher() // 0x10002245
{
    mangled_assert("??0GSPatcher@@QAE@XZ");
    todo("implement");
}

GSPatcher::~GSPatcher() // 0x10002259
{
    mangled_assert("??1GSPatcher@@QAE@XZ");
    todo("implement");
}

_inline GSPatcher &GSPatcher::operator=(GSPatcher const &) // 0x10002269
{
    mangled_assert("??4GSPatcher@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

void GSPatcher::ThinkHTTP() // 0x1000248A
{
    mangled_assert("?ThinkHTTP@GSPatcher@@QAEXXZ");
    todo("implement");
}

bool GSPatcher::DownloadPatch(char const *, char const *, GSPatcher::DownloadCallback &) // 0x100022A8
{
    mangled_assert("?DownloadPatch@GSPatcher@@QAE_NPBD0AAVDownloadCallback@1@@Z");
    todo("implement");
}

bool GSPatcher::GetPatchSize(char const *, GSPatcher::DownloadCallback &) // 0x10002422
{
    mangled_assert("?GetPatchSize@GSPatcher@@QAE_NPBDAAVDownloadCallback@1@@Z");
    todo("implement");
}

void GSPatcher::CancelDownload() // 0x10002276
{
    mangled_assert("?CancelDownload@GSPatcher@@QAEXXZ");
    todo("implement");
}

/* ---------- private code */

_static void PatchCallback(__int32 available, __int32 mandatory, char const *versionName, __int32 fileID, char const *downloadURL, void *param) // 0x10002453
{
    mangled_assert("PatchCallback");
    todo("implement");
}
#endif
