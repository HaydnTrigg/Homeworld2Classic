#if 0
/* ---------- headers */

#include "decomp.h"
#include <xmemory0>
#include <pch.h>
#include <crtdefs.h>
#include <Interface.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <platform\namedinterface.h>
#include <platform\platformexports.h>
#include <xutility>
#include <utility>
#include <list>
#include <map>
#include <xtree>
#include <util\types.h>
#include <time.h>
#include <time.inl>
#include <savegameimpl.h>
#include <platform\cmdline.h>
#include <savegamedef.h>
#include <gameRandom.h>
#include <random.h>
#include <profile\profile.h>
#include <iostream>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern bool initAllRandomStreams();
extern bool shutdownAllRandomStreams();
extern bool saveAllRandomStreams(SaveGameData *saveGameData, SaveType saveType);
extern bool restoreAllRandomStreams(SaveGameData *saveGameData);
extern void allocateRandomStreams();
extern bool resetAllRandomStreamsSeeds();

/* ---------- globals */

extern GameRandomStreams *randomStreams; // 0x848774
extern char const GameRandomStreams::m_saveToken[18]; // 0x7A9508
extern SaveData const GameRandomStreams::m_saveData[19]; // 0x7A9520
extern char const *kUseRandomSeedOption; // 0x83C028

/* ---------- private variables */

/* ---------- public code */

_extern _sub_5EF932(GameRandomStreams *const);
GameRandomStreams::GameRandomStreams() // 0x5EF932
{
    mangled_assert("??0GameRandomStreams@@QAE@XZ");
    todo("implement");
    _sub_5EF932(this);
}

_extern void _sub_5EFA47(GameRandomStreams *const);
GameRandomStreams::~GameRandomStreams() // 0x5EFA47
{
    mangled_assert("??1GameRandomStreams@@UAE@XZ");
    todo("implement");
    _sub_5EFA47(this);
}

_extern bool _sub_5EFCEA(GameRandomStreams *const, SaveGameData *);
bool GameRandomStreams::restore(SaveGameData *) // 0x5EFCEA
{
    mangled_assert("?restore@GameRandomStreams@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_5EFCEA(this, arg);
    return __result;
}

_extern bool _sub_5EFD38(GameRandomStreams *const, SaveGameData *, SaveType);
bool GameRandomStreams::save(SaveGameData *, SaveType) // 0x5EFD38
{
    mangled_assert("?save@GameRandomStreams@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_5EFD38(this, arg, arg);
    return __result;
}

_extern void _sub_5EFBF3(GameRandomStreams *const);
void GameRandomStreams::postRestore() // 0x5EFBF3
{
    mangled_assert("?postRestore@GameRandomStreams@@UAEXXZ");
    todo("implement");
    _sub_5EFBF3(this);
}

_extern bool _sub_5EFBE8();
bool initAllRandomStreams() // 0x5EFBE8
{
    mangled_assert("?initAllRandomStreams@@YG_NXZ");
    todo("implement");
    bool __result = _sub_5EFBE8();
    return __result;
}

_extern bool _sub_5EFE5B();
bool shutdownAllRandomStreams() // 0x5EFE5B
{
    mangled_assert("?shutdownAllRandomStreams@@YG_NXZ");
    todo("implement");
    bool __result = _sub_5EFE5B();
    return __result;
}

_extern bool _sub_5EFD6D(SaveGameData *, SaveType);
bool saveAllRandomStreams(SaveGameData *saveGameData, SaveType saveType) // 0x5EFD6D
{
    mangled_assert("?saveAllRandomStreams@@YG_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_5EFD6D(saveGameData, saveType);
    return __result;
}

_extern bool _sub_5EFD28(SaveGameData *);
bool restoreAllRandomStreams(SaveGameData *saveGameData) // 0x5EFD28
{
    mangled_assert("?restoreAllRandomStreams@@YG_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_5EFD28(saveGameData);
    return __result;
}

_extern void _sub_5EFAA3();
void allocateRandomStreams() // 0x5EFAA3
{
    mangled_assert("?allocateRandomStreams@@YGXXZ");
    todo("implement");
    _sub_5EFAA3();
}

_extern unsigned __int32 _sub_5EFADD(GameRandomStreams *const);
unsigned __int32 GameRandomStreams::getChecksum() // 0x5EFADD
{
    mangled_assert("?getChecksum@GameRandomStreams@@QAEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_5EFADD(this);
    return __result;
}

_extern void _sub_5EFC27(GameRandomStreams *const);
void GameRandomStreams::resetAllSeeds() // 0x5EFC27
{
    mangled_assert("?resetAllSeeds@GameRandomStreams@@QAEXXZ");
    todo("implement");
    _sub_5EFC27(this);
}

_extern void _sub_5EFD7E(GameRandomStreams *const, unsigned __int32);
void GameRandomStreams::setAllSeeds(unsigned __int32) // 0x5EFD7E
{
    mangled_assert("?setAllSeeds@GameRandomStreams@@QAEXI@Z");
    todo("implement");
    _sub_5EFD7E(this, arg);
}

_extern bool _sub_5EFBF4();
bool resetAllRandomStreamsSeeds() // 0x5EFBF4
{
    mangled_assert("?resetAllRandomStreamsSeeds@@YG_NXZ");
    todo("implement");
    bool __result = _sub_5EFBF4();
    return __result;
}

/* ---------- private code */
#endif
