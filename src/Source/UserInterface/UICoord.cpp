#if 0
/* ---------- headers */

#include "decomp.h"
#include <UserInterface\UICoord.h>
#include <Mathlib\mathutil.h>
#include <UserInterface\pch.h>
#include <util\colour.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <math.h>
#include <UserInterface\uitypes.h>
#include <platform\inputinterface.h>
#include <platform\platformexports.h>
#include <platform\keydefines.h>
#include <util\types.h>
#include <boost\cstdint.hpp>
#include <debug\db.h>

/* ---------- constants */

/* ---------- definitions */

typedef _ULARGE_INTEGER *PULARGE_INTEGER;
typedef std::vector<Layer *,std::allocator<Layer *> > LayerList;
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
typedef __int32 HSteamUser;
typedef void (*SteamAPIWarningMessageHook_t)(__int32, char const *);
typedef unsigned long long UGCHandle_t;
typedef unsigned long long PublishedFileUpdateHandle_t;
typedef unsigned long long PublishedFileId_t;
typedef unsigned long long UGCFileWriteStreamHandle_t;
typedef unsigned long long SteamLeaderboard_t;
typedef unsigned long long SteamLeaderboardEntries_t;
typedef unsigned __int32 ScreenshotHandle;
typedef unsigned long long ClientUnifiedMessageHandle;
typedef unsigned long long UGCQueryHandle_t;
typedef unsigned long long UGCUpdateHandle_t;
typedef unsigned __int32 HHTMLBrowser;
typedef `anonymous-namespace'::ScreenEntry ?A0x1d1ff7dd::ScreenEntry;
typedef `anonymous-namespace'::TGAFileHeader TGAFileHeader;
typedef `anonymous-namespace'::TGAFileHeader ?A0x1d1ff7dd::TGAFileHeader;

/* ---------- prototypes */

extern UI::VAlign UI::GetVAlignFromString(char const *s);
extern UI::HAlign UI::GetHAlignFromString(char const *s);

/* ---------- globals */

extern float UICoord::s_xOffset; // 0x84B9DC
extern float UICoord::s_yOffset; // 0x84B9E0
extern float UICoord::s_textXOffset; // 0x83E400
extern float UICoord::s_textYOffset; // 0x83E404

/* ---------- private variables */

/* ---------- public code */

UI::VAlign UI::GetVAlignFromString(char const *s) // 0x68BA9A
{
    mangled_assert("?GetVAlignFromString@UI@@YG?AW4VAlign@1@PBD@Z");
    todo("implement");
}

UI::HAlign UI::GetHAlignFromString(char const *s) // 0x68BA3C
{
    mangled_assert("?GetHAlignFromString@UI@@YG?AW4HAlign@1@PBD@Z");
    todo("implement");
}

/* ---------- private code */
#endif
