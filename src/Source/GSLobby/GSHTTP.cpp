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

_extern bool _sub_100015F2();
bool GSHTTP::Startup() // 0x100015F2
{
    mangled_assert("?Startup@GSHTTP@@SG_NXZ");
    todo("implement");
    bool __result = _sub_100015F2();
    return __result;
}

_extern bool _sub_100015EA();
bool GSHTTP::Shutdown() // 0x100015EA
{
    mangled_assert("?Shutdown@GSHTTP@@SG_NXZ");
    todo("implement");
    bool __result = _sub_100015EA();
    return __result;
}

_extern _sub_100013E3(GSHTTP *const, GSHTTP const &);
_inline GSHTTP::GSHTTP(GSHTTP const &) // 0x100013E3
{
    mangled_assert("??0GSHTTP@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_100013E3(this, arg);
}

_extern _sub_100013F8(GSHTTP *const);
GSHTTP::GSHTTP() // 0x100013F8
{
    mangled_assert("??0GSHTTP@@QAE@XZ");
    todo("implement");
    _sub_100013F8(this);
}

_extern void _sub_10001410(GSHTTP *const);
GSHTTP::~GSHTTP() // 0x10001410
{
    mangled_assert("??1GSHTTP@@QAE@XZ");
    todo("implement");
    _sub_10001410(this);
}

_extern GSHTTP &_sub_10001428(GSHTTP *const, GSHTTP const &);
_inline GSHTTP &GSHTTP::operator=(GSHTTP const &) // 0x10001428
{
    mangled_assert("??4GSHTTP@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    GSHTTP & __result = _sub_10001428(this, arg);
    return __result;
}

_extern bool _sub_100014DE(GSHTTP *const, char const *, char const *);
bool GSHTTP::DownloadFile(char const *, char const *) // 0x100014DE
{
    mangled_assert("?DownloadFile@GSHTTP@@QAE_NPBD0@Z");
    todo("implement");
    bool __result = _sub_100014DE(this, arg, arg);
    return __result;
}

_extern bool _sub_10001513(GSHTTP *const, char const *);
bool GSHTTP::GetFileSize(char const *) // 0x10001513
{
    mangled_assert("?GetFileSize@GSHTTP@@QAE_NPBD@Z");
    todo("implement");
    bool __result = _sub_10001513(this, arg);
    return __result;
}

_extern void _sub_10001437(GSHTTP *const);
void GSHTTP::CancelDownload() // 0x10001437
{
    mangled_assert("?CancelDownload@GSHTTP@@QAEXXZ");
    todo("implement");
    _sub_10001437(this);
}

_extern void _sub_100015FA(GSHTTP *const);
void GSHTTP::Think() // 0x100015FA
{
    mangled_assert("?Think@GSHTTP@@QAEXXZ");
    todo("implement");
    _sub_100015FA(this);
}

/* ---------- private code */

_extern void _sub_10001546(__int32, GHTTPState, char const *, __int32, __int32, __int32, void *);
_static void ProgressCallback(__int32 request, GHTTPState state, char const *buffer, __int32 bufferLen, __int32 bytesReceived, __int32 totalSize, void *param) // 0x10001546
{
    mangled_assert("ProgressCallback");
    todo("implement");
    _sub_10001546(request, state, buffer, bufferLen, bytesReceived, totalSize, param);
}

_extern GHTTPBool _sub_10001442(__int32, GHTTPResult, char *, __int32, void *);
_static GHTTPBool CompletedCallback(__int32 request, GHTTPResult result, char *buffer, __int32 bufferLen, void *param) // 0x10001442
{
    mangled_assert("CompletedCallback");
    todo("implement");
    GHTTPBool __result = _sub_10001442(request, result, buffer, bufferLen, param);
    return __result;
}
#endif
