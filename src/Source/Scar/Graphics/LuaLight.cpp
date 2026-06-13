#if 0
/* ---------- headers */

#include "decomp.h"
#include <platform\osdef.h>
#include <xstring>
#include <xmemory0>
#include <Scar\pch.h>
#include <Render\objects\light.h>
#include <Render\objects\objects.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <luaconfig\luabinding.h>
#include <Mathlib\matrix4.h>
#include <Mathlib\luamathbinding.h>
#include <Render\gl\lotypes.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <Render\gl\r_types.h>
#include <Mathlib\matrix3.h>
#include <xutility>
#include <iosfwd>
#include <Scar\Graphics\LuaLight.h>
#include <Engine\BgLightAnim.h>
#include <Engine\GameEventSys.h>
#include <vector>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <util\colour.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>

/* ---------- constants */

/* ---------- definitions */

class `anonymous-namespace'::LuaLightLib :
    public LuaLibrary
{
public:
    LuaLightLib(`anonymous-namespace'::LuaLightLib const &); /* compiler_generated() */
    LuaLightLib();
    virtual ~LuaLightLib() override;
    virtual bool Register(LuaConfig &) override;
    virtual bool DeRegister(LuaConfig &) override;
    `anonymous-namespace'::LuaLightLib &operator=(`anonymous-namespace'::LuaLightLib const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::LuaLightLib) == 16, "Invalid `anonymous-namespace'::LuaLightLib size");

typedef `anonymous-namespace'::LuaLightLib ?A0x75c8d48d::LuaLightLib;

/* ---------- prototypes */

extern void createDirLight(char const *name, vector3 pos, vector3 colour);
extern void createAmbientLight(char const *name, vector3 diffuse);
extern void setLightColour(char const *name, vector3 diffuse);
extern void setLightSpecular(char const *name, vector3 specular);
extern void setGlareIntensity(float intensity);
extern void setUseLighting(__int32 lighting);
extern void playBgLightAnim(char const *refFxName);

/* ---------- globals */

extern char const *LUALIB_LIGHT; // 0x842760

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_717674(char const *, vector3, vector3);
void createDirLight(char const *name, vector3 pos, vector3 colour) // 0x717674
{
    mangled_assert("?createDirLight@@YGXPBDVvector3@@1@Z");
    todo("implement");
    _sub_717674(name, pos, colour);
}

_extern void _sub_71758D(char const *, vector3);
void createAmbientLight(char const *name, vector3 diffuse) // 0x71758D
{
    mangled_assert("?createAmbientLight@@YGXPBDVvector3@@@Z");
    todo("implement");
    _sub_71758D(name, diffuse);
}

_extern void _sub_7177BB(char const *, vector3);
void setLightColour(char const *name, vector3 diffuse) // 0x7177BB
{
    mangled_assert("?setLightColour@@YGXPBDVvector3@@@Z");
    todo("implement");
    _sub_7177BB(name, diffuse);
}

_extern void _sub_717872(char const *, vector3);
void setLightSpecular(char const *name, vector3 specular) // 0x717872
{
    mangled_assert("?setLightSpecular@@YGXPBDVvector3@@@Z");
    todo("implement");
    _sub_717872(name, specular);
}

_extern void _sub_71778F(float);
void setGlareIntensity(float intensity) // 0x71778F
{
    mangled_assert("?setGlareIntensity@@YGXM@Z");
    todo("implement");
    _sub_71778F(intensity);
}

_extern void _sub_71792E(__int32);
void setUseLighting(__int32 lighting) // 0x71792E
{
    mangled_assert("?setUseLighting@@YGXH@Z");
    todo("implement");
    _sub_71792E(lighting);
}

_extern void _sub_71777C(char const *);
void playBgLightAnim(char const *refFxName) // 0x71777C
{
    mangled_assert("?playBgLightAnim@@YGXPBD@Z");
    todo("implement");
    _sub_71777C(refFxName);
}

/* ---------- private code */
#endif
