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

_extern _sub_5CC891(BuildJobType *const, BuildData *, __int32, Fixed<10> const &, bool, __int32, __int32);
BuildJobType::BuildJobType(BuildData *, __int32, Fixed<10> const &, bool, __int32, __int32) // 0x5CC891
{
    mangled_assert("??0BuildJobType@@QAE@PAVBuildData@@HABV?$Fixed@$09@@_NHH@Z");
    todo("implement");
    _sub_5CC891(this, arg, arg, arg, arg, arg, arg);
}

_extern void _sub_5CC94C(BuildJobType *const);
BuildJobType::~BuildJobType() // 0x5CC94C
{
    mangled_assert("??1BuildJobType@@UAE@XZ");
    todo("implement");
    _sub_5CC94C(this);
}

_extern _sub_5CC91D(BuildJobType *const, SaveGameData *);
BuildJobType::BuildJobType(SaveGameData *) // 0x5CC91D
{
    mangled_assert("??0BuildJobType@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_5CC91D(this, arg);
}

_extern void _sub_5CC981(BuildJobType *const);
void BuildJobType::defaultSettings() // 0x5CC981
{
    mangled_assert("?defaultSettings@BuildJobType@@QAEXXZ");
    todo("implement");
    _sub_5CC981(this);
}

_extern void _sub_5CC99F(BuildJobType *const);
void BuildJobType::postRestore() // 0x5CC99F
{
    mangled_assert("?postRestore@BuildJobType@@UAEXXZ");
    todo("implement");
    _sub_5CC99F(this);
}

_extern bool _sub_5CC9A0(BuildJobType *const, SaveGameData *);
bool BuildJobType::restore(SaveGameData *) // 0x5CC9A0
{
    mangled_assert("?restore@BuildJobType@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_5CC9A0(this, arg);
    return __result;
}

_extern bool _sub_5CC9DE(BuildJobType *const, SaveGameData *, SaveType);
bool BuildJobType::save(SaveGameData *, SaveType) // 0x5CC9DE
{
    mangled_assert("?save@BuildJobType@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_5CC9DE(this, arg, arg);
    return __result;
}

/* ---------- private code */
#endif
