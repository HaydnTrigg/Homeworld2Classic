#if 0
/* ---------- headers */

#include "decomp.h"
#include <Platform\pch.h>
#include <steam_api.h>
#include <isteamclient.h>
#include <steamtypes.h>
#include <isteamuser.h>
#include <isteamhtmlsurface.h>
#include <isteammusic.h>
#include <isteamuserstats.h>
#include <isteamugc.h>
#include <isteamremotestorage.h>
#include <isteamapplist.h>
#include <isteamhttp.h>
#include <steamhttpenums.h>
#include <steamclientpublic.h>
#include <steamuniverse.h>
#include <isteamnetworking.h>
#include <isteamutils.h>
#include <isteammatchmaking.h>
#include <matchmakingtypes.h>
#include <isteamunifiedmessages.h>
#include <isteamapps.h>
#include <engine\version.h>
#include <isteamscreenshots.h>
#include <isteamfriends.h>
#include <Platform\platformexports.h>
#include <Platform\exceptionhandler.h>
#include <Platform\CmdLine.h>
#include <assist\typemagic.h>
#include <isteamcontroller.h>
#include <steamcontrollerpublic.h>
#include <isteammusicremote.h>

/* ---------- constants */

/* ---------- definitions */

struct `anonymous-namespace'::ExceptionLocals
{
    _EXCEPTION_RECORD const *x_exception; // 0x0
    _CONTEXT const *x_context; // 0x4
    void *x_handle; // 0x8
    char x_moduleName[260]; // 0xC
    char x_module[260]; // 0x110
    char x_timestamp[260]; // 0x214
    char x_stackline[4096]; // 0x318
    char x_printf[2048]; // 0x1318
    char x_stack[32768]; // 0x1B18
};
static_assert(sizeof(`anonymous-namespace'::ExceptionLocals) == 39704, "Invalid `anonymous-namespace'::ExceptionLocals size");

typedef unsigned long long GID_t;
typedef unsigned __int32 PackageId_t;
typedef unsigned __int32 AppId_t;
typedef unsigned long long AssetClassId_t;
typedef unsigned __int32 PhysicalItemId_t;
typedef unsigned __int32 DepotId_t;
typedef unsigned __int32 RTime32;
typedef unsigned __int32 CellID_t;
typedef unsigned long long SteamAPICall_t;
typedef unsigned __int32 AccountID_t;
typedef unsigned __int32 PartnerId_t;
typedef unsigned long long ManifestId_t;
typedef unsigned __int32 HAuthTicket;
typedef unsigned long long UGCHandle_t;
typedef unsigned long long PublishedFileUpdateHandle_t;
typedef unsigned long long PublishedFileId_t;
typedef unsigned long long UGCFileWriteStreamHandle_t;
typedef unsigned long long ClientUnifiedMessageHandle;
typedef unsigned long long UGCQueryHandle_t;
typedef unsigned long long UGCUpdateHandle_t;
typedef unsigned __int32 HHTMLBrowser;
typedef `anonymous-namespace'::ExceptionLocals ?A0x1de8f43a::ExceptionLocals;

struct GetExceptionDescription::__l2::ExceptionNames
{
    unsigned long code; // 0x0
    char const *name; // 0x4
};
static_assert(sizeof(GetExceptionDescription::__l2::ExceptionNames) == 8, "Invalid GetExceptionDescription::__l2::ExceptionNames size");

/* ---------- prototypes */

extern long internalRecordExceptionInfo(_EXCEPTION_POINTERS *data);
extern void SetLevelNameForSteamError(char const *LevelName);

_static char const *LocalStrRChr(char const *str, char chr);
_static void LocalSplitPath(char const *path, char *drive, char *dir, char *fname, char *ext);
_static char const *GetExceptionDescription(unsigned long exceptionCode);
_static void FormatTime(char *output, _FILETIME ftime);
_static void CrashExe(char *module, char const *moduleFile);
_static void CrashModule(char *crashModule, void const *eip);
_static void CreateTimeStamp(char const *module, char *outtimestamp);
_static void *LogOpen(char const *timestamp);

/* ---------- globals */

extern char gLevelName[260]; // 0x10010768

/* ---------- private variables */

/* ---------- public code */

long internalRecordExceptionInfo(_EXCEPTION_POINTERS *data) // 0x10002E7B
{
    mangled_assert("?internalRecordExceptionInfo@@YGJPAU_EXCEPTION_POINTERS@@@Z");
    todo("implement");
}

void SetLevelNameForSteamError(char const *LevelName) // 0x10002E69
{
    mangled_assert("?SetLevelNameForSteamError@@YGXPBD@Z");
    todo("implement");
}

/* ---------- private code */

_static char const *LocalStrRChr(char const *str, char chr) // 0x1000247A
{
    mangled_assert("LocalStrRChr");
    todo("implement");
}

_static void LocalSplitPath(char const *path, char *drive, char *dir, char *fname, char *ext) // 0x1000238F
{
    mangled_assert("LocalSplitPath");
    todo("implement");
}

_static char const *GetExceptionDescription(unsigned long exceptionCode) // 0x1000220C
{
    mangled_assert("GetExceptionDescription");
    todo("implement");
}

_static void FormatTime(char *output, _FILETIME ftime) // 0x1000218C
{
    mangled_assert("FormatTime");
    todo("implement");
}

_static void CrashExe(char *module, char const *moduleFile) // 0x10001FF8
{
    mangled_assert("CrashExe");
    todo("implement");
}

_static void CrashModule(char *crashModule, void const *eip) // 0x1000203F
{
    mangled_assert("CrashModule");
    todo("implement");
}

_static void CreateTimeStamp(char const *module, char *outtimestamp) // 0x100020C4
{
    mangled_assert("CreateTimeStamp");
    todo("implement");
}

_static void *LogOpen(char const *timestamp) // 0x10002788
{
    mangled_assert("LogOpen");
    todo("implement");
}
#endif
