#if 0
/* ---------- headers */

#include "decomp.h"
#include <stdio.h>
#include <stdarg.h>
#include <windef.h>
#include <minwindef.h>
#include <specstrings.h>
#include <specstrings_strict.h>
#include <GSLobby\GamespySDK\ghttp\ghttpCommon.h>
#include <specstrings_undef.h>
#include <driverspecs.h>
#include <sdv_driverspecs.h>
#include <inaddr.h>
#include <stralign.h>
#include <GSLobby\GamespySDK\ghttp\ghttpPost.h>
#include <namespaceapi.h>
#include <GSLobby\GamespySDK\ghttp\ghttp.h>
#include <winsvc.h>
#include <stdlib.h>
#include <errhandlingapi.h>
#include <crtdefs.h>
#include <winerror.h>
#include <sal.h>
#include <securitybaseapi.h>
#include <concurrencysal.h>
#include <winreg.h>
#include <vadefs.h>
#include <reason.h>
#include <consoleapi.h>
#include <wingdi.h>
#include <pshpack8.h>
#include <timezoneapi.h>
#include <ioapiset.h>
#include <memoryapi.h>
#include <winnt.h>
#include <ctype.h>
#include <apiset.h>
#include <processthreadsapi.h>
#include <profileapi.h>
#include <GSLobby\GamespySDK\nonport.h>
#include <string.h>
#include <systemtopologyapi.h>
#include <heapapi.h>
#include <bemapiset.h>
#include <threadpoollegacyapiset.h>
#include <GSLobby\GamespySDK\ghttp\ghttpConnection.h>
#include <processtopologyapi.h>
#include <assert.h>
#include <debugapi.h>
#include <fibersapi.h>
#include <kernelspecs.h>
#include <basetsd.h>
#include <mcx.h>
#include <pshpack1.h>
#include <winnls.h>
#include <datetimeapi.h>
#include <namedpipeapi.h>
#include <limits.h>
#include <securityappcontainer.h>
#include <wincon.h>
#include <fileapi.h>
#include <jobapi.h>
#include <pshpack2.h>
#include <wtime.inl>
#include <ktmtypes.h>
#include <pshpack4.h>
#include <winver.h>
#include <winnetwk.h>
#include <verrsrc.h>
#include <realtimeapiset.h>
#include <processenv.h>
#include <wnnc.h>
#include <wow64apiset.h>
#include <utilapiset.h>
#include <winuser.h>
#include <swprintf.inl>
#include <GSLobby\GamespySDK\darray.h>
#include <ime_cmodes.h>
#include <winsock.h>
#include <sysinfoapi.h>
#include <windows.h>
#include <winapifamily.h>
#include <time.h>
#include <threadpoolapiset.h>
#include <sdkddkver.h>
#include <time.inl>
#include <excpt.h>
#include <stringapiset.h>
#include <libloaderapi.h>
#include <tvout.h>
#include <interlockedapi.h>
#include <winbase.h>
#include <handleapi.h>
#include <apisetcconv.h>
#include <imm.h>
#include <minwinbase.h>
#include <synchapi.h>
#include <poppack.h>
#include <GSLobby\GamespySDK\ghttp\ghttpBuffer.h>
#include <guiddef.h>
#include <GSLobby\GamespySDK\ghttp\ghttpMain.h>

/* ---------- constants */

enum GHIPostDataType
{
    GHIString = 0,
    GHIFileDisk,
    GHIFileMemory,
};

/* ---------- definitions */

struct GHIPost
{
    DArrayImplementation *data; // 0x0
    void (*callback)(__int32, __int32, __int32, __int32, __int32, void *); // 0x4
    void *param; // 0x8
    GHTTPBool hasFiles; // 0xC
    GHTTPBool autoFree; // 0x10
};
static_assert(sizeof(GHIPost) == 20, "Invalid GHIPost size");

struct GHIPostStringData
{
    char *string; // 0x0
    __int32 len; // 0x4
    GHTTPBool invalidChars; // 0x8
    __int32 extendedChars; // 0xC
};
static_assert(sizeof(GHIPostStringData) == 16, "Invalid GHIPostStringData size");

typedef void (*ArrayElementFreeFn)(void *);

struct GHIPostFileDiskData
{
    char *filename; // 0x0
    char *reportFilename; // 0x4
    char *contentType; // 0x8
};
static_assert(sizeof(GHIPostFileDiskData) == 12, "Invalid GHIPostFileDiskData size");

struct GHIPostFileMemoryData
{
    char const *buffer; // 0x0
    __int32 len; // 0x4
    char *reportFilename; // 0x8
    char *contentType; // 0xC
};
static_assert(sizeof(GHIPostFileMemoryData) == 16, "Invalid GHIPostFileMemoryData size");

struct GHIPostData
{
    GHIPostDataType type; // 0x0
    char *name; // 0x4
    <unnamed-tag> data; // 0x8
};
static_assert(sizeof(GHIPostData) == 24, "Invalid GHIPostData size");

union <unnamed-tag>
{
    GHIPostStringData string; // 0x0
    GHIPostFileDiskData fileDisk; // 0x0
    GHIPostFileMemoryData fileMemory; // 0x0
};
static_assert(sizeof(<unnamed-tag>) == 16, "Invalid <unnamed-tag> size");

struct GHIPostFileDiskState
{
    _iobuf *file; // 0x0
    long len; // 0x4
};
static_assert(sizeof(GHIPostFileDiskState) == 8, "Invalid GHIPostFileDiskState size");

struct GHIPostState
{
    GHIPostData *data; // 0x0
    __int32 pos; // 0x4
    <unnamed-tag> state; // 0x8
};
static_assert(sizeof(GHIPostState) == 16, "Invalid GHIPostState size");

union <unnamed-tag>
{
    GHIPostFileDiskState fileDisk; // 0x0
};
static_assert(sizeof(<unnamed-tag>) == 8, "Invalid <unnamed-tag> size");

/* ---------- prototypes */

extern GHTTPBool ghiIsPostAutoFree(GHIPost *_post);
extern void ghiFreePost(GHIPost *_post);
extern char const *ghiPostGetContentType(GHIConnection *connection);
extern GHTTPBool ghiPostInitState(GHIConnection *connection);
extern void ghiPostCleanupState(GHIConnection *connection);
extern GHIPostingResult ghiPostDoPosting(GHIConnection *connection);

_static __int32 ghiPostGetNoFilesContentLength(GHIConnection *connection);
_static __int32 ghiPostGetHasFilesContentLength(GHIConnection *connection);
_static GHTTPBool ghiPostStateInit(GHIPostState *state);
_static void ghiPostStateCleanup(GHIPostState *state);
_static GHIPostingResult ghiPostStringStateDoPosting(GHIPostState *state, GHIConnection *connection);
_static GHIPostingResult ghiPostFileDiskStateDoPosting(GHIPostState *state, GHIConnection *connection);
_static GHIPostingResult ghiPostStateDoPosting(GHIPostState *state, GHIConnection *connection, GHTTPBool first);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

GHTTPBool ghiIsPostAutoFree(GHIPost *_post) // 0x1001774F
{
    mangled_assert("_ghiIsPostAutoFree@4");
    todo("implement");
}

void ghiFreePost(GHIPost *_post) // 0x10017737
{
    mangled_assert("_ghiFreePost@4");
    todo("implement");
}

char const *ghiPostGetContentType(GHIConnection *connection) // 0x10017909
{
    mangled_assert("_ghiPostGetContentType@4");
    todo("implement");
}

GHTTPBool ghiPostInitState(GHIConnection *connection) // 0x10017A99
{
    mangled_assert("_ghiPostInitState@4");
    todo("implement");
}

void ghiPostCleanupState(GHIConnection *connection) // 0x10017759
{
    mangled_assert("_ghiPostCleanupState@4");
    todo("implement");
}

GHIPostingResult ghiPostDoPosting(GHIConnection *connection) // 0x100177C4
{
    mangled_assert("_ghiPostDoPosting@4");
    todo("implement");
}

/* ---------- private code */

_static __int32 ghiPostGetNoFilesContentLength(GHIConnection *connection) // 0x10017A3C
{
    mangled_assert("ghiPostGetNoFilesContentLength");
    todo("implement");
}

_static __int32 ghiPostGetHasFilesContentLength(GHIConnection *connection) // 0x10017932
{
    mangled_assert("ghiPostGetHasFilesContentLength");
    todo("implement");
}

_static GHTTPBool ghiPostStateInit(GHIPostState *state) // 0x10017D22
{
    mangled_assert("ghiPostStateInit");
    todo("implement");
}

_static void ghiPostStateCleanup(GHIPostState *state) // 0x10017BA9
{
    mangled_assert("ghiPostStateCleanup");
    todo("implement");
}

_static GHIPostingResult ghiPostStringStateDoPosting(GHIPostState *state, GHIConnection *connection) // 0x10017D8F
{
    mangled_assert("ghiPostStringStateDoPosting");
    todo("implement");
}

_static GHIPostingResult ghiPostFileDiskStateDoPosting(GHIPostState *state, GHIConnection *connection) // 0x10017887
{
    mangled_assert("ghiPostFileDiskStateDoPosting");
    todo("implement");
}

_static GHIPostingResult ghiPostStateDoPosting(GHIPostState *state, GHIConnection *connection, GHTTPBool first) // 0x10017BD2
{
    mangled_assert("ghiPostStateDoPosting");
    todo("implement");
}
#endif
