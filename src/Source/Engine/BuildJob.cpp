#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <pch.h>
#include <xstddef>
#include <BuildJobType.h>
#include <savegameimpl.h>
#include <sobtypes.h>
#include <savegamedef.h>
#include <BuildJob.h>
#include <fixedpoint.h>
#include <util\fixed.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const BuildJob::m_saveToken[0]; // 0x7A7500
extern SaveData const BuildJob::m_saveData[4]; // 0x7A7510

/* ---------- private variables */

/* ---------- public code */

BuildJob::BuildJob(BuildJobType *, unsigned __int32) // 0x5CC77F
{
    mangled_assert("??0BuildJob@@QAE@PAVBuildJobType@@I@Z");
    todo("implement");
}

BuildJob::~BuildJob() // 0x5CC7D8
{
    mangled_assert("??1BuildJob@@UAE@XZ");
    todo("implement");
}

BuildJob::BuildJob(SaveGameData *) // 0x5CC7B4
{
    mangled_assert("??0BuildJob@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

void BuildJob::defaultSettings() // 0x5CC805
{
    mangled_assert("?defaultSettings@BuildJob@@QAEXXZ");
    todo("implement");
}

void BuildJob::postRestore() // 0x5CC817
{
    mangled_assert("?postRestore@BuildJob@@UAEXXZ");
    todo("implement");
}

bool BuildJob::restore(SaveGameData *) // 0x5CC818
{
    mangled_assert("?restore@BuildJob@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool BuildJob::save(SaveGameData *, SaveType) // 0x5CC856
{
    mangled_assert("?save@BuildJob@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
