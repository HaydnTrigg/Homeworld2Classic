#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <iosfwd>
#include <BuildData.h>
#include <DependencyData.h>
#include <boost\scoped_ptr.hpp>
#include <savegameimpl.h>
#include <luaconfig\luabinding.h>
#include <luaconfig\luaconfig.h>
#include <lua.h>
#include <sobtypes.h>
#include <savegamedef.h>
#include <BuildJob.h>
#include <BuildJobType.h>
#include <fixedpoint.h>
#include <string>
#include <util\fixed.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const BuildJobType::m_saveToken[0]; // 0x7A75E8
extern SaveData const BuildJobType::m_saveData[10]; // 0x7A75F8

/* ---------- private variables */

/* ---------- public code */

BuildJobType::BuildJobType(BuildData *, __int32, Fixed<10> const &, bool, __int32, __int32) // 0x5CC891
{
    mangled_assert("??0BuildJobType@@QAE@PAVBuildData@@HABV?$Fixed@$09@@_NHH@Z");
    todo("implement");
}

BuildJobType::~BuildJobType() // 0x5CC94C
{
    mangled_assert("??1BuildJobType@@UAE@XZ");
    todo("implement");
}

BuildJobType::BuildJobType(SaveGameData *) // 0x5CC91D
{
    mangled_assert("??0BuildJobType@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

void BuildJobType::defaultSettings() // 0x5CC981
{
    mangled_assert("?defaultSettings@BuildJobType@@QAEXXZ");
    todo("implement");
}

void BuildJobType::postRestore() // 0x5CC99F
{
    mangled_assert("?postRestore@BuildJobType@@UAEXXZ");
    todo("implement");
}

bool BuildJobType::restore(SaveGameData *) // 0x5CC9A0
{
    mangled_assert("?restore@BuildJobType@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool BuildJobType::save(SaveGameData *, SaveType) // 0x5CC9DE
{
    mangled_assert("?save@BuildJobType@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
