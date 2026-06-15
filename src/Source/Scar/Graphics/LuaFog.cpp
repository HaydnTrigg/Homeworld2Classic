#if 0
/* ---------- headers */

#include "decomp.h"
#include <xmemory0>
#include <Scar\pch.h>
#include <luaconfig\luabinding.h>
#include <Mathlib\matrix4.h>
#include <Mathlib\matrix3.h>
#include <xutility>
#include <platform\osdef.h>
#include <Scar\Graphics\LuaFog.h>
#include <Engine\fog.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <Render\gl\lotypes.h>
#include <vector>
#include <Render\gl\r_types.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <util\colour.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>

/* ---------- constants */

/* ---------- definitions */

class `anonymous-namespace'::LuaFogLib :
    public LuaLibrary
{
public:
    LuaFogLib(`anonymous-namespace'::LuaFogLib const &); /* compiler_generated() */
    LuaFogLib();
    virtual ~LuaFogLib() override;
    virtual bool Register(LuaConfig &) override;
    virtual bool DeRegister(LuaConfig &) override;
    `anonymous-namespace'::LuaFogLib &operator=(`anonymous-namespace'::LuaFogLib const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::LuaFogLib) == 16, "Invalid `anonymous-namespace'::LuaFogLib size");

typedef `anonymous-namespace'::LuaFogLib ?A0xd8c259ec::LuaFogLib;

/* ---------- prototypes */

extern void fogSetActive(bool active);
extern void fogSetStart(float start);
extern void fogSetEnd(float end);
extern void fogSetDensity(float density);
extern void fogSetColour(float r, float g, float b, float a);
extern void fogSetType(char const *mode);
extern void fogAddInterpolator(char const *buf, float length, float target);

/* ---------- globals */

extern char const *LUALIB_FOG; // 0x84332C

/* ---------- private variables */

/* ---------- public code */

void fogSetActive(bool active) // 0x727D4B
{
    mangled_assert("?fogSetActive@@YGX_N@Z");
    todo("implement");
}

void fogSetStart(float start) // 0x727E0E
{
    mangled_assert("?fogSetStart@@YGXM@Z");
    todo("implement");
}

void fogSetEnd(float end) // 0x727DF3
{
    mangled_assert("?fogSetEnd@@YGXM@Z");
    todo("implement");
}

void fogSetDensity(float density) // 0x727DD8
{
    mangled_assert("?fogSetDensity@@YGXM@Z");
    todo("implement");
}

void fogSetColour(float r, float g, float b, float a) // 0x727D5E
{
    mangled_assert("?fogSetColour@@YGXMMMM@Z");
    todo("implement");
}

void fogSetType(char const *mode) // 0x727E29
{
    mangled_assert("?fogSetType@@YGXPBD@Z");
    todo("implement");
}

void fogAddInterpolator(char const *buf, float length, float target) // 0x727C94
{
    mangled_assert("?fogAddInterpolator@@YGXPBDMM@Z");
    todo("implement");
}

_inline LuaBinding::ObjInternal4<float,float,float,float,void,LuaBinding::Functor4Free<float,float,float,float,void> >::~ObjInternal4<float,float,float,float,void,LuaBinding::Functor4Free<float,float,float,float,void> >() // 0x727983
{
    mangled_assert("??1?$ObjInternal4@MMMMXV?$Functor4Free@MMMMX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

/* ---------- private code */
#endif
