#if 0
/* ---------- headers */

#include "decomp.h"
#include <luaconfig\lualibman.h>
#include <xstring>
#include <luaconfig\luaconfig.h>
#include <xmemory0>
#include <pch.h>
#include <lua.h>
#include <App\AppMem.h>
#include <new>
#include <App\TestMem.h>
#include <xstddef>
#include <profile\profile.h>
#include <type_traits>
#include <iostream>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <memory\mmctswitches.h>
#include <list>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <luaconfig\luabinding.h>
#include <App\LuaAppMisc.h>
#include <screenshot.h>
#include <version.h>

/* ---------- constants */

/* ---------- definitions */

class `anonymous-namespace'::LuaAppMiscLib :
    public LuaLibrary
{
public:
    LuaAppMiscLib(`anonymous-namespace'::LuaAppMiscLib const &); /* compiler_generated() */
    LuaAppMiscLib();
    virtual ~LuaAppMiscLib() override;
    virtual bool Register(LuaConfig &) override;
    virtual bool DeRegister(LuaConfig &) override;
    `anonymous-namespace'::LuaAppMiscLib &operator=(`anonymous-namespace'::LuaAppMiscLib const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::LuaAppMiscLib) == 16, "Invalid `anonymous-namespace'::LuaAppMiscLib size");

typedef `anonymous-namespace'::LuaAppMiscLib ?A0x1734201e::LuaAppMiscLib;

/* ---------- prototypes */


_static char const *GetVersionInfo();

/* ---------- globals */

extern char const *LUALIB_APPMISC; // 0x836DB4

/* ---------- private variables */

_static
{
    extern char const HW2_VERSION_NAME[14]; // 0x79B42C
    extern char const HW2_VERSION_DATE[11]; // 0x79B43C
}

/* ---------- public code */

_inline LuaBinding::ObjInternal0<char const *,LuaBinding::Functor0Free<char const *> >::~ObjInternal0<char const *,LuaBinding::Functor0Free<char const *> >() // 0x500072
{
    mangled_assert("??1?$ObjInternal0@PBDV?$Functor0Free@PBD@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal1<unsigned int,void,LuaBinding::Functor1Free<unsigned int,void> >::~ObjInternal1<unsigned int,void,LuaBinding::Functor1Free<unsigned int,void> >() // 0x500078
{
    mangled_assert("??1?$ObjInternal1@IXV?$Functor1Free@IX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal1<char const *,void,LuaBinding::Functor1Free<char const *,void> >::~ObjInternal1<char const *,void,LuaBinding::Functor1Free<char const *,void> >() // 0x50007E
{
    mangled_assert("??1?$ObjInternal1@PBDXV?$Functor1Free@PBDX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal2<char const *,float,void,LuaBinding::Functor2Free<char const *,float,void> >::~ObjInternal2<char const *,float,void,LuaBinding::Functor2Free<char const *,float,void> >() // 0x500084
{
    mangled_assert("??1?$ObjInternal2@PBDMXV?$Functor2Free@PBDMX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

/* ---------- private code */

_static char const *GetVersionInfo() // 0x5002CB
{
    mangled_assert("GetVersionInfo");
    todo("implement");
}
#endif
