#if 0
/* ---------- headers */

#include "decomp.h"
#include <xmemory0>
#include <Scar\pch.h>
#include <luaconfig\luabinding.h>
#include <xutility>
#include <Scar\Graphics\LuaShadow.h>
#include <Render\objects\shadowsettings.h>
#include <Render\objects\objects.h>
#include <vector>
#include <Mathlib\vector4.h>
#include <util\colour.h>

/* ---------- constants */

/* ---------- definitions */

class `anonymous-namespace'::LuaShadowLib :
    public LuaLibrary
{
public:
    LuaShadowLib(`anonymous-namespace'::LuaShadowLib const &); /* compiler_generated() */
    LuaShadowLib();
    virtual ~LuaShadowLib() override;
    virtual bool Register(LuaConfig &) override;
    virtual bool DeRegister(LuaConfig &) override;
    `anonymous-namespace'::LuaShadowLib &operator=(`anonymous-namespace'::LuaShadowLib const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::LuaShadowLib) == 16, "Invalid `anonymous-namespace'::LuaShadowLib size");

typedef `anonymous-namespace'::LuaShadowLib ?A0x88b18d1c::LuaShadowLib;

/* ---------- prototypes */

extern void setLevelShadowColour(float r, float g, float b, float a);

/* ---------- globals */

extern char const *LUALIB_SHADOW; // 0x8433A8

/* ---------- private variables */

/* ---------- public code */

void setLevelShadowColour(float r, float g, float b, float a) // 0x727F92
{
    mangled_assert("?setLevelShadowColour@@YGXMMMM@Z");
    todo("implement");
}

/* ---------- private code */
#endif
