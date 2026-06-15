#if 0
/* ---------- headers */

#include "decomp.h"
#include <task.h>
#include <stack>
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <iosfwd>
#include <vector>
#include <fileio\fileioexports.h>
#include <LevelDesc.h>
#include <Hash.h>
#include <fileio\md5.h>
#include <gamestructimpl.h>
#include <Interface.h>
#include <Badge.h>
#include <localizer\localizer.h>
#include <platform\namedinterface.h>
#include <util\types.h>
#include <platform\platformexports.h>
#include <boost\config.hpp>
#include <boost\static_assert.hpp>
#include <assist\typemagic.h>
#include <savegamedata.h>
#include <savegamedef.h>
#include <gameSettings.h>
#include <config.h>
#include <syncChecking.h>
#include <init.h>
#include <platform\osdef.h>
#include <wchar.h>
#include <savegame.h>

/* ---------- constants */

/* ---------- definitions */

typedef bool (*InitFunction)();
typedef bool (*SaveGameFunction)(SaveGameData *, SaveType);
typedef bool (*RestoreGameFunction)(SaveGameData *);
typedef void (*LoadingCallbackFunc)(__int32, __int32, wchar_t const *);

/* ---------- prototypes */

extern char const *initStartupSystems(InitList *ilist, void (*loadFunc)(__int32, __int32, wchar_t const *));
extern char const *initShutdownSystems(InitList *ilist);
extern char const *initSaveSystems(InitList *ilist, SaveGameData *saveGameData, SaveType saveType);
extern char const *initRestoreSystems(InitList *ilist, SaveGameData *saveGameData, void (*loadFunc)(__int32, __int32, wchar_t const *));

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern char initErrorString[512]; // 0x848880
    extern char const initStartupErrorFormat[23]; // 0x7AABD4
    extern char const initShutdownErrorFormat[23]; // 0x7AABEC
    extern char const initShutdownErrorFormatAppend[5]; // 0x7AAC04
}

/* ---------- public code */

char const *initStartupSystems(InitList *ilist, void (*loadFunc)(__int32, __int32, wchar_t const *)) // 0x5FB0BE
{
    mangled_assert("?initStartupSystems@@YGPBDPAUInitList@@P6GXHHPB_W@Z@Z");
    todo("implement");
}

char const *initShutdownSystems(InitList *ilist) // 0x5FB042
{
    mangled_assert("?initShutdownSystems@@YGPBDPAUInitList@@@Z");
    todo("implement");
}

char const *initSaveSystems(InitList *ilist, SaveGameData *saveGameData, SaveType saveType) // 0x5FAFE4
{
    mangled_assert("?initSaveSystems@@YGPBDPAUInitList@@PAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

char const *initRestoreSystems(InitList *ilist, SaveGameData *saveGameData, void (*loadFunc)(__int32, __int32, wchar_t const *)) // 0x5FAEE6
{
    mangled_assert("?initRestoreSystems@@YGPBDPAUInitList@@PAVSaveGameData@@P6GXHHPB_W@Z@Z");
    todo("implement");
}

/* ---------- private code */
#endif
