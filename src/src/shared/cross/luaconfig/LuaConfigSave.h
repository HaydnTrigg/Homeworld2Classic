#if 0
#ifndef __LUACONFIGSAVE_H__
#define __LUACONFIGSAVE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class LuaConfigSave
{
public:
    static bool LoadLua(LuaConfig &lc, ByteStream &bs);
    static bool SaveLua(LuaConfig &lc, bool const indent, bool const sorted, ByteStream &bs);
    static bool SaveLuaVar(LuaConfig &lc, char const *name, bool const indent, bool const sorted, ByteStream &bs);
};
static_assert(sizeof(LuaConfigSave) == 1, "Invalid LuaConfigSave size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LUACONFIGSAVE_H__
#endif
