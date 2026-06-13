#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <iosfwd>
#include <vector>
#include <boost\scoped_ptr.hpp>
#include <luaconfig\lualibman.h>
#include <luaconfig\luabinding.h>
#include <luaconfig\luaconfig.h>
#include <lua.h>
#include <NIS\LuaNISDebug.h>
#include <NIS\NISDebug.h>

/* ---------- constants */

/* ---------- definitions */

class `anonymous-namespace'::LuaNISDebugLib :
    public LuaLibrary
{
public:
    LuaNISDebugLib(`anonymous-namespace'::LuaNISDebugLib const &); /* compiler_generated() */
    LuaNISDebugLib();
    virtual ~LuaNISDebugLib() override;
    virtual bool Register(LuaConfig &) override;
    virtual bool DeRegister(LuaConfig &) override;
    `anonymous-namespace'::LuaNISDebugLib &operator=(`anonymous-namespace'::LuaNISDebugLib const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::LuaNISDebugLib) == 16, "Invalid `anonymous-namespace'::LuaNISDebugLib size");

typedef `anonymous-namespace'::LuaNISDebugLib ?A0xaba6611d::LuaNISDebugLib;

/* ---------- prototypes */

extern void NISDebug_Play();
extern void NISDebug_PlayRelative();
extern void NISDebug_Rewind();
extern void NISDebug_RewindLots();
extern void NISDebug_CameraRelease();
extern void NISDebug_PauseToggle();
extern void NISDebug_ShowInfo();

/* ---------- globals */

extern char const *LUALIB_NISDEBUG; // 0x83944C

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_5452B6();
void NISDebug_Play() // 0x5452B6
{
    mangled_assert("?NISDebug_Play@@YGXXZ");
    todo("implement");
    _sub_5452B6();
}

_extern void _sub_5452BB();
void NISDebug_PlayRelative() // 0x5452BB
{
    mangled_assert("?NISDebug_PlayRelative@@YGXXZ");
    todo("implement");
    _sub_5452BB();
}

_extern void _sub_5452C0();
void NISDebug_Rewind() // 0x5452C0
{
    mangled_assert("?NISDebug_Rewind@@YGXXZ");
    todo("implement");
    _sub_5452C0();
}

_extern void _sub_5452C5();
void NISDebug_RewindLots() // 0x5452C5
{
    mangled_assert("?NISDebug_RewindLots@@YGXXZ");
    todo("implement");
    _sub_5452C5();
}

_extern void _sub_5452AC();
void NISDebug_CameraRelease() // 0x5452AC
{
    mangled_assert("?NISDebug_CameraRelease@@YGXXZ");
    todo("implement");
    _sub_5452AC();
}

_extern void _sub_5452B1();
void NISDebug_PauseToggle() // 0x5452B1
{
    mangled_assert("?NISDebug_PauseToggle@@YGXXZ");
    todo("implement");
    _sub_5452B1();
}

_extern void _sub_5452CA();
void NISDebug_ShowInfo() // 0x5452CA
{
    mangled_assert("?NISDebug_ShowInfo@@YGXXZ");
    todo("implement");
    _sub_5452CA();
}

_extern void _sub_5451AB(LuaBinding::ObjInternal2<unsigned int,bool,void,LuaBinding::Functor2Free<unsigned int,bool,void> > *const);
_inline LuaBinding::ObjInternal2<unsigned int,bool,void,LuaBinding::Functor2Free<unsigned int,bool,void> >::~ObjInternal2<unsigned int,bool,void,LuaBinding::Functor2Free<unsigned int,bool,void> >() // 0x5451AB
{
    mangled_assert("??1?$ObjInternal2@I_NXV?$Functor2Free@I_NX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5451AB(this);
}

/* ---------- private code */
#endif
