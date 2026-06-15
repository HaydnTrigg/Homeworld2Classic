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

GameRandomStreams::GameRandomStreams() // 0x5EF932
{
    mangled_assert("??0GameRandomStreams@@QAE@XZ");
    todo("implement");
}

GameRandomStreams::~GameRandomStreams() // 0x5EFA47
{
    mangled_assert("??1GameRandomStreams@@UAE@XZ");
    todo("implement");
}

bool GameRandomStreams::restore(SaveGameData *) // 0x5EFCEA
{
    mangled_assert("?restore@GameRandomStreams@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool GameRandomStreams::save(SaveGameData *, SaveType) // 0x5EFD38
{
    mangled_assert("?save@GameRandomStreams@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

void GameRandomStreams::postRestore() // 0x5EFBF3
{
    mangled_assert("?postRestore@GameRandomStreams@@UAEXXZ");
    todo("implement");
}

bool initAllRandomStreams() // 0x5EFBE8
{
    mangled_assert("?initAllRandomStreams@@YG_NXZ");
    todo("implement");
}

bool shutdownAllRandomStreams() // 0x5EFE5B
{
    mangled_assert("?shutdownAllRandomStreams@@YG_NXZ");
    todo("implement");
}

bool saveAllRandomStreams(SaveGameData *saveGameData, SaveType saveType) // 0x5EFD6D
{
    mangled_assert("?saveAllRandomStreams@@YG_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

bool restoreAllRandomStreams(SaveGameData *saveGameData) // 0x5EFD28
{
    mangled_assert("?restoreAllRandomStreams@@YG_NPAVSaveGameData@@@Z");
    todo("implement");
}

void allocateRandomStreams() // 0x5EFAA3
{
    mangled_assert("?allocateRandomStreams@@YGXXZ");
    todo("implement");
}

unsigned __int32 GameRandomStreams::getChecksum() // 0x5EFADD
{
    mangled_assert("?getChecksum@GameRandomStreams@@QAEIXZ");
    todo("implement");
}

void GameRandomStreams::resetAllSeeds() // 0x5EFC27
{
    mangled_assert("?resetAllSeeds@GameRandomStreams@@QAEXXZ");
    todo("implement");
}

void GameRandomStreams::setAllSeeds(unsigned __int32) // 0x5EFD7E
{
    mangled_assert("?setAllSeeds@GameRandomStreams@@QAEXI@Z");
    todo("implement");
}

bool resetAllRandomStreamsSeeds() // 0x5EFBF4
{
    mangled_assert("?resetAllRandomStreamsSeeds@@YG_NXZ");
    todo("implement");
}

/* ---------- private code */
#endif
