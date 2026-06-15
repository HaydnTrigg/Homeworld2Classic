#if 0
/* ---------- headers */

#include "decomp.h"
#include <memory\memorylib.h>
#include <algorithm>
#include <xmemory>
#include <xmemory0>
#include <new>
#include <xstddef>
#include <type_traits>
#include <fileio\ramstream.h>
#include <assist\asciictype.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <string.h>
#include <debug\db.h>
#include <vector>
#include "src\src\Shared\PC\LuaConfig\pch.h"
#include <LuaConfig\LuaConfigSave.h>
#include <boost\scoped_ptr.hpp>
#include <fileio\filestream.h>
#include <fileio\fileioexports.h>
#include <fileio\bytestream.h>
#include <debug\ctassert.h>
#include <xstring>
#include <LuaConfig\LuaConfig.h>
#include <lua\lua.h>
#include <assist\fixedstring.h>
#include <assist\stlexstring.h>
#include <wchar.h>
#include <assist\typemagic.h>

/* ---------- constants */

/* ---------- definitions */

struct IsSaveSkip::__l2::LuaReserved
{
    char const *name; // 0x0
    LuaConfig::LuaType type; // 0x4
};
static_assert(sizeof(IsSaveSkip::__l2::LuaReserved) == 8, "Invalid IsSaveSkip::__l2::LuaReserved size");

/* ---------- prototypes */


_static bool IsSaveSkip(char const *name, LuaConfig &lc);
_static bool SaveLuaVarNumber(ByteStream &bs, LuaConfig const &constLc, char const *name);
_static bool SaveLuaVarString(ByteStream &bs, LuaConfig const &constLc, char const *name);
_static bool SaveLuaVarTable(ByteStream &bs, LuaConfig const &constLc, char const *name, unsigned __int32 const level, bool const indent, bool const sorted);
_static bool SaveLuaVar(LuaConfig &lc, char const *name, unsigned __int32 const level, bool const indent, bool const sorted, bool const forcename, ByteStream &bs);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

bool LuaConfigSave::SaveLua(LuaConfig &lc, bool const indent, bool const sorted, ByteStream &bs) // 0x1000529F
{
    mangled_assert("?SaveLua@LuaConfigSave@@SG_NAAVLuaConfig@@_N1AAVByteStream@@@Z");
    todo("implement");
}

bool LuaConfigSave::SaveLuaVar(LuaConfig &lc, char const *name, bool const indent, bool const sorted, ByteStream &bs) // 0x10005481
{
    mangled_assert("?SaveLuaVar@LuaConfigSave@@SG_NAAVLuaConfig@@PBD_N2AAVByteStream@@@Z");
    todo("implement");
}

bool LuaConfigSave::LoadLua(LuaConfig &lc, ByteStream &bs) // 0x100051D1
{
    mangled_assert("?LoadLua@LuaConfigSave@@SG_NAAVLuaConfig@@AAVByteStream@@@Z");
    todo("implement");
}

/* ---------- private code */

_static bool IsSaveSkip(char const *name, LuaConfig &lc) // 0x10005113
{
    mangled_assert("IsSaveSkip");
    todo("implement");
}

_static bool SaveLuaVarNumber(ByteStream &bs, LuaConfig const &constLc, char const *name) // 0x100054A0
{
    mangled_assert("SaveLuaVarNumber");
    todo("implement");
}

_static bool SaveLuaVarString(ByteStream &bs, LuaConfig const &constLc, char const *name) // 0x1000550D
{
    mangled_assert("SaveLuaVarString");
    todo("implement");
}

_static bool SaveLuaVarTable(ByteStream &bs, LuaConfig const &constLc, char const *name, unsigned __int32 const level, bool const indent, bool const sorted) // 0x1000559B
{
    mangled_assert("SaveLuaVarTable");
    todo("implement");
}

_static bool SaveLuaVar(LuaConfig &lc, char const *name, unsigned __int32 const level, bool const indent, bool const sorted, bool const forcename, ByteStream &bs) // 0x100052C0
{
    mangled_assert("SaveLuaVar");
    todo("implement");
}
#endif
