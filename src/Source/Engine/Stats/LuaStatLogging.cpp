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
#include <luaconfig\lualibman.h>
#include <luaconfig\luabinding.h>
#include <boost\scoped_ptr.hpp>
#include <luaconfig\luaconfig.h>
#include <lua.h>
#include <savegamedef.h>
#include <Stats\StatLogging.h>

/* ---------- constants */

/* ---------- definitions */

class `anonymous-namespace'::LuaStatLoggingLib :
    public LuaLibrary
{
public:
    LuaStatLoggingLib(`anonymous-namespace'::LuaStatLoggingLib const &); /* compiler_generated() */
    LuaStatLoggingLib();
    virtual ~LuaStatLoggingLib() override;
    virtual bool Register(LuaConfig &) override;
    virtual bool DeRegister(LuaConfig &) override;
    `anonymous-namespace'::LuaStatLoggingLib &operator=(`anonymous-namespace'::LuaStatLoggingLib const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::LuaStatLoggingLib) == 16, "Invalid `anonymous-namespace'::LuaStatLoggingLib size");

typedef `anonymous-namespace'::LuaStatLoggingLib ?A0x524b8b8f::LuaStatLoggingLib;

/* ---------- prototypes */

/* ---------- globals */

extern char const *LUALIB_STATLOGGING; // 0x837108

/* ---------- private variables */

/* ---------- public code */

_inline LuaBinding::ObjInternal0<int,LuaBinding::Functor0MemberConst<int,StatLogging> >::~ObjInternal0<int,LuaBinding::Functor0MemberConst<int,StatLogging> >() // 0x50BA14
{
    mangled_assert("??1?$ObjInternal0@HV?$Functor0MemberConst@HVStatLogging@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal0<unsigned int,LuaBinding::Functor0MemberConst<unsigned int,StatLogging> >::~ObjInternal0<unsigned int,LuaBinding::Functor0MemberConst<unsigned int,StatLogging> >() // 0x50BA1A
{
    mangled_assert("??1?$ObjInternal0@IV?$Functor0MemberConst@IVStatLogging@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal1<unsigned int,int,LuaBinding::Functor1MemberConst<unsigned int,int,StatLogging> >::~ObjInternal1<unsigned int,int,LuaBinding::Functor1MemberConst<unsigned int,int,StatLogging> >() // 0x50BA20
{
    mangled_assert("??1?$ObjInternal1@IHV?$Functor1MemberConst@IHVStatLogging@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal1<unsigned int,unsigned int,LuaBinding::Functor1MemberConst<unsigned int,unsigned int,StatLogging> >::~ObjInternal1<unsigned int,unsigned int,LuaBinding::Functor1MemberConst<unsigned int,unsigned int,StatLogging> >() // 0x50BA26
{
    mangled_assert("??1?$ObjInternal1@IIV?$Functor1MemberConst@IIVStatLogging@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal1<char const *,void,LuaBinding::Functor1MemberNonConst<char const *,void,StatLogging> >::~ObjInternal1<char const *,void,LuaBinding::Functor1MemberNonConst<char const *,void,StatLogging> >() // 0x50BA2C
{
    mangled_assert("??1?$ObjInternal1@PBDXV?$Functor1MemberNonConst@PBDXVStatLogging@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal2<unsigned int,unsigned int,int,LuaBinding::Functor2MemberConst<unsigned int,unsigned int,int,StatLogging> >::~ObjInternal2<unsigned int,unsigned int,int,LuaBinding::Functor2MemberConst<unsigned int,unsigned int,int,StatLogging> >() // 0x50BA32
{
    mangled_assert("??1?$ObjInternal2@IIHV?$Functor2MemberConst@IIHVStatLogging@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

/* ---------- private code */
#endif
