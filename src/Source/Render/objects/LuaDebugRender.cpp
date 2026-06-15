#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <Objects\pch.h>
#include <crtdefs.h>
#include <gl\r_defines.h>
#include <gl\glext.h>
#include <luaconfig\luaconfig.h>
#include <boost\scoped_ptr.hpp>
#include <boost\assert.hpp>
#include <new>
#include <boost\checked_delete.hpp>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <Mathlib\matrix4.h>
#include <xatomic0.h>
#include <iosfwd>
#include <vector>
#include <Mathlib\vector3.h>
#include <memory>
#include <stdint.h>
#include <math.h>
#include <Mathlib\matrix3.h>
#include <luaconfig\lualibman.h>
#include <luaconfig\luabinding.h>
#include <assert.h>
#include <util\types.h>
#include <lua\lua.h>
#include <platform\osdef.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector2.h>
#include <Objects\LuaDebugRender.h>
#include <Objects\Objects.h>
#include <Objects\DebugRender.h>
#include <Objects\Core.h>
#include <gl\lotypes.h>
#include <gl\types.h>
#include <util\colour.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <gl\r_types.h>

/* ---------- constants */

/* ---------- definitions */

class `anonymous-namespace'::LuaDebugRenderLib :
    public LuaLibrary
{
public:
    LuaDebugRenderLib(`anonymous-namespace'::LuaDebugRenderLib const &); /* compiler_generated() */
    LuaDebugRenderLib();
    virtual ~LuaDebugRenderLib() override;
    virtual bool Register(LuaConfig &) override;
    virtual bool DeRegister(LuaConfig &) override;
    `anonymous-namespace'::LuaDebugRenderLib &operator=(`anonymous-namespace'::LuaDebugRenderLib const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::LuaDebugRenderLib) == 16, "Invalid `anonymous-namespace'::LuaDebugRenderLib size");

typedef `anonymous-namespace'::LuaDebugRenderLib ?A0x3c7dc4d4::LuaDebugRenderLib;
typedef std::vector<LuaLibrary::BindInfo,std::allocator<LuaLibrary::BindInfo> > BindInfoList;
typedef std::vector<LuaBinding::Obj,std::allocator<LuaBinding::Obj> > BindObjList;
typedef void (*type_func)(char const *, float, float, char const *, __int32, __int32, __int32);

/* ---------- prototypes */


_static void dr_clear(char const *frame);
_static void dr_setautoclear(char const *frame, bool bEnable);
_static void dr_setdisplay(char const *frame, bool bEnable);
_static void dr_text2d(char const *frame, float x, float y, char const *cmd, __int32 r, __int32 g, __int32 b);

/* ---------- globals */

extern char const *LUALIB_DEBUGRENDER; // 0x1010D628

/* ---------- private variables */

/* ---------- public code */

_inline LuaLibrary::LuaLibrary() // 0x1006F410
{
    mangled_assert("??0LuaLibrary@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal1<char const *,void,LuaBinding::Functor1Free<char const *,void> >::~ObjInternal1<char const *,void,LuaBinding::Functor1Free<char const *,void> >() // 0x1006F4A0
{
    mangled_assert("??1?$ObjInternal1@PBDXV?$Functor1Free@PBDX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal2<char const *,bool,void,LuaBinding::Functor2Free<char const *,bool,void> >::~ObjInternal2<char const *,bool,void,LuaBinding::Functor2Free<char const *,bool,void> >() // 0x1006F4B0
{
    mangled_assert("??1?$ObjInternal2@PBD_NXV?$Functor2Free@PBD_NX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal7<char const *,float,float,char const *,int,int,int,void,LuaBinding::Functor7Free<char const *,float,float,char const *,int,int,int,void> >::~ObjInternal7<char const *,float,float,char const *,int,int,int,void,LuaBinding::Functor7Free<char const *,float,float,char const *,int,int,int,void> >() // 0x1006F4C0
{
    mangled_assert("??1?$ObjInternal7@PBDMMPBDHHHXV?$Functor7Free@PBDMMPBDHHHX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaLibrary::BindInfo::~BindInfo() // 0x1006F530
{
    mangled_assert("??1BindInfo@LuaLibrary@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

/* ---------- private code */

_static void dr_clear(char const *frame) // 0x1006FD00
{
    mangled_assert("dr_clear");
    todo("implement");
}

_static void dr_setautoclear(char const *frame, bool bEnable) // 0x1006FD10
{
    mangled_assert("dr_setautoclear");
    todo("implement");
}

_static void dr_setdisplay(char const *frame, bool bEnable) // 0x1006FD20
{
    mangled_assert("dr_setdisplay");
    todo("implement");
}

_static void dr_text2d(char const *frame, float x, float y, char const *cmd, __int32 r, __int32 g, __int32 b) // 0x1006FD30
{
    mangled_assert("dr_text2d");
    todo("implement");
}
#endif
