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

_extern _sub_1006F410(LuaLibrary *const);
_inline LuaLibrary::LuaLibrary() // 0x1006F410
{
    mangled_assert("??0LuaLibrary@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1006F410(this);
}

_extern void _sub_1006F4A0(LuaBinding::ObjInternal1<char const *,void,LuaBinding::Functor1Free<char const *,void> > *const);
_inline LuaBinding::ObjInternal1<char const *,void,LuaBinding::Functor1Free<char const *,void> >::~ObjInternal1<char const *,void,LuaBinding::Functor1Free<char const *,void> >() // 0x1006F4A0
{
    mangled_assert("??1?$ObjInternal1@PBDXV?$Functor1Free@PBDX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1006F4A0(this);
}

_extern void _sub_1006F4B0(LuaBinding::ObjInternal2<char const *,bool,void,LuaBinding::Functor2Free<char const *,bool,void> > *const);
_inline LuaBinding::ObjInternal2<char const *,bool,void,LuaBinding::Functor2Free<char const *,bool,void> >::~ObjInternal2<char const *,bool,void,LuaBinding::Functor2Free<char const *,bool,void> >() // 0x1006F4B0
{
    mangled_assert("??1?$ObjInternal2@PBD_NXV?$Functor2Free@PBD_NX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1006F4B0(this);
}

_extern void _sub_1006F4C0(LuaBinding::ObjInternal7<char const *,float,float,char const *,int,int,int,void,LuaBinding::Functor7Free<char const *,float,float,char const *,int,int,int,void> > *const);
_inline LuaBinding::ObjInternal7<char const *,float,float,char const *,int,int,int,void,LuaBinding::Functor7Free<char const *,float,float,char const *,int,int,int,void> >::~ObjInternal7<char const *,float,float,char const *,int,int,int,void,LuaBinding::Functor7Free<char const *,float,float,char const *,int,int,int,void> >() // 0x1006F4C0
{
    mangled_assert("??1?$ObjInternal7@PBDMMPBDHHHXV?$Functor7Free@PBDMMPBDHHHX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1006F4C0(this);
}

_extern void _sub_1006F530(LuaLibrary::BindInfo *const);
_inline LuaLibrary::BindInfo::~BindInfo() // 0x1006F530
{
    mangled_assert("??1BindInfo@LuaLibrary@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1006F530(this);
}

/* ---------- private code */

_extern void _sub_1006FD00(char const *);
_static void dr_clear(char const *frame) // 0x1006FD00
{
    mangled_assert("dr_clear");
    todo("implement");
    _sub_1006FD00(frame);
}

_extern void _sub_1006FD10(char const *, bool);
_static void dr_setautoclear(char const *frame, bool bEnable) // 0x1006FD10
{
    mangled_assert("dr_setautoclear");
    todo("implement");
    _sub_1006FD10(frame, bEnable);
}

_extern void _sub_1006FD20(char const *, bool);
_static void dr_setdisplay(char const *frame, bool bEnable) // 0x1006FD20
{
    mangled_assert("dr_setdisplay");
    todo("implement");
    _sub_1006FD20(frame, bEnable);
}

_extern void _sub_1006FD30(char const *, float, float, char const *, __int32, __int32, __int32);
_static void dr_text2d(char const *frame, float x, float y, char const *cmd, __int32 r, __int32 g, __int32 b) // 0x1006FD30
{
    mangled_assert("dr_text2d");
    todo("implement");
    _sub_1006FD30(frame, x, y, cmd, r, g, b);
}
#endif
