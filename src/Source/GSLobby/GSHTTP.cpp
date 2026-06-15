#if 0
/* ---------- headers */

#include "decomp.h"
#include <GSLobby\GamespySDK\ghttp\ghttp.h>
#include <pch.h>
#include <GSLobby\GSHTTP.h>
#include <GSLobby\gslobbyexport.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */


_static void ProgressCallback(__int32 request, GHTTPState state, char const *buffer, __int32 bufferLen, __int32 bytesReceived, __int32 totalSize, void *param);
_static GHTTPBool CompletedCallback(__int32 request, GHTTPResult result, char *buffer, __int32 bufferLen, void *param);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

bool GSHTTP::Startup() // 0x100015F2
{
    mangled_assert("?Startup@GSHTTP@@SG_NXZ");
    todo("implement");
}

bool GSHTTP::Shutdown() // 0x100015EA
{
    mangled_assert("?Shutdown@GSHTTP@@SG_NXZ");
    todo("implement");
}

_inline GSHTTP::GSHTTP(GSHTTP const &) // 0x100013E3
{
    mangled_assert("??0GSHTTP@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

GSHTTP::GSHTTP() // 0x100013F8
{
    mangled_assert("??0GSHTTP@@QAE@XZ");
    todo("implement");
}

GSHTTP::~GSHTTP() // 0x10001410
{
    mangled_assert("??1GSHTTP@@QAE@XZ");
    todo("implement");
}

_inline GSHTTP &GSHTTP::operator=(GSHTTP const &) // 0x10001428
{
    mangled_assert("??4GSHTTP@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

bool GSHTTP::DownloadFile(char const *, char const *) // 0x100014DE
{
    mangled_assert("?DownloadFile@GSHTTP@@QAE_NPBD0@Z");
    todo("implement");
}

bool GSHTTP::GetFileSize(char const *) // 0x10001513
{
    mangled_assert("?GetFileSize@GSHTTP@@QAE_NPBD@Z");
    todo("implement");
}

void GSHTTP::CancelDownload() // 0x10001437
{
    mangled_assert("?CancelDownload@GSHTTP@@QAEXXZ");
    todo("implement");
}

void GSHTTP::Think() // 0x100015FA
{
    mangled_assert("?Think@GSHTTP@@QAEXXZ");
    todo("implement");
}

/* ---------- private code */

_static void ProgressCallback(__int32 request, GHTTPState state, char const *buffer, __int32 bufferLen, __int32 bytesReceived, __int32 totalSize, void *param) // 0x10001546
{
    mangled_assert("ProgressCallback");
    todo("implement");
}

_static GHTTPBool CompletedCallback(__int32 request, GHTTPResult result, char *buffer, __int32 bufferLen, void *param) // 0x10001442
{
    mangled_assert("CompletedCallback");
    todo("implement");
}
#endif
