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

_extern _sub_5CC77F(BuildJob *const, BuildJobType *, unsigned __int32);
BuildJob::BuildJob(BuildJobType *, unsigned __int32) // 0x5CC77F
{
    mangled_assert("??0BuildJob@@QAE@PAVBuildJobType@@I@Z");
    todo("implement");
    _sub_5CC77F(this, arg, arg);
}

_extern void _sub_5CC7D8(BuildJob *const);
BuildJob::~BuildJob() // 0x5CC7D8
{
    mangled_assert("??1BuildJob@@UAE@XZ");
    todo("implement");
    _sub_5CC7D8(this);
}

_extern _sub_5CC7B4(BuildJob *const, SaveGameData *);
BuildJob::BuildJob(SaveGameData *) // 0x5CC7B4
{
    mangled_assert("??0BuildJob@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_5CC7B4(this, arg);
}

_extern void _sub_5CC805(BuildJob *const);
void BuildJob::defaultSettings() // 0x5CC805
{
    mangled_assert("?defaultSettings@BuildJob@@QAEXXZ");
    todo("implement");
    _sub_5CC805(this);
}

_extern void _sub_5CC817(BuildJob *const);
void BuildJob::postRestore() // 0x5CC817
{
    mangled_assert("?postRestore@BuildJob@@UAEXXZ");
    todo("implement");
    _sub_5CC817(this);
}

_extern bool _sub_5CC818(BuildJob *const, SaveGameData *);
bool BuildJob::restore(SaveGameData *) // 0x5CC818
{
    mangled_assert("?restore@BuildJob@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_5CC818(this, arg);
    return __result;
}

_extern bool _sub_5CC856(BuildJob *const, SaveGameData *, SaveType);
bool BuildJob::save(SaveGameData *, SaveType) // 0x5CC856
{
    mangled_assert("?save@BuildJob@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_5CC856(this, arg, arg);
    return __result;
}

/* ---------- private code */
#endif
