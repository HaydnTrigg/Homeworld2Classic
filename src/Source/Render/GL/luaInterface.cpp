#if 0
/* ---------- headers */

#include "decomp.h"
#include <Render\GL\pch.h>
#include <xmemory0>
#include <crtdefs.h>
#include <new>
#include <xstddef>
#include <vector>
#include <luaconfig\lualibman.h>
#include <luaconfig\luaconfig.h>
#include <boost\scoped_ptr.hpp>
#include <boost\assert.hpp>
#include <debug\db.h>
#include <assert.h>
#include <boost\checked_delete.hpp>
#include <type_traits>
#include <xstring>
#include <xatomic0.h>
#include <memory>
#include <stdint.h>
#include <luaconfig\luabinding.h>
#include <lua\lua.h>
#include <assist\stlexstring.h>
#include <xutility>
#include <algorithm>
#include <iosfwd>

/* ---------- constants */

/* ---------- definitions */

class `anonymous-namespace'::LuaGlInterfaceLib :
    public LuaLibrary
{
public:
    LuaGlInterfaceLib(`anonymous-namespace'::LuaGlInterfaceLib const &); /* compiler_generated() */
    LuaGlInterfaceLib();
    virtual ~LuaGlInterfaceLib() override;
    virtual bool Register(LuaConfig &) override;
    virtual bool DeRegister(LuaConfig &) override;
    `anonymous-namespace'::LuaGlInterfaceLib &operator=(`anonymous-namespace'::LuaGlInterfaceLib const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::LuaGlInterfaceLib) == 16, "Invalid `anonymous-namespace'::LuaGlInterfaceLib size");

typedef `anonymous-namespace'::LuaGlInterfaceLib ?A0x1bc3a5c8::LuaGlInterfaceLib;
typedef std::vector<LuaLibrary::BindInfo,std::allocator<LuaLibrary::BindInfo> > BindInfoList;
typedef std::vector<LuaBinding::Obj,std::allocator<LuaBinding::Obj> > BindObjList;
typedef bool (*type_func)(char const *);

/* ---------- prototypes */

extern bool GL_haveExtension(char const *extension);
extern float GL_getOpenGLVersion();
extern bool GL_isVendor(char const *_vendor);
extern bool GL_isRenderer(char const *_renderer);
extern bool GL_setCan(unsigned __int32 _ability, bool _can);
extern bool GL_setEmulated(unsigned __int32 _ability, bool _emulated);

/* ---------- globals */

extern char const *LUAGLINTERFACE_LIB; // 0x1001F000

/* ---------- private variables */

/* ---------- public code */

_extern bool _sub_10001E61(char const *);
bool GL_haveExtension(char const *extension) // 0x10001E61
{
    mangled_assert("?GL_haveExtension@@YG_NPBD@Z");
    todo("implement");
    bool __result = _sub_10001E61(extension);
    return __result;
}

_extern float _sub_10001E48();
float GL_getOpenGLVersion() // 0x10001E48
{
    mangled_assert("?GL_getOpenGLVersion@@YGMXZ");
    todo("implement");
    float __result = _sub_10001E48();
    return __result;
}

_extern bool _sub_10001EC8(char const *);
bool GL_isVendor(char const *_vendor) // 0x10001EC8
{
    mangled_assert("?GL_isVendor@@YG_NPBD@Z");
    todo("implement");
    bool __result = _sub_10001EC8(_vendor);
    return __result;
}

_extern bool _sub_10001E6A(char const *);
bool GL_isRenderer(char const *_renderer) // 0x10001E6A
{
    mangled_assert("?GL_isRenderer@@YG_NPBD@Z");
    todo("implement");
    bool __result = _sub_10001E6A(_renderer);
    return __result;
}

_extern bool _sub_10001F26(unsigned __int32, bool);
bool GL_setCan(unsigned __int32 _ability, bool _can) // 0x10001F26
{
    mangled_assert("?GL_setCan@@YG_NI_N@Z");
    todo("implement");
    bool __result = _sub_10001F26(_ability, _can);
    return __result;
}

_extern bool _sub_10001F3F(unsigned __int32, bool);
bool GL_setEmulated(unsigned __int32 _ability, bool _emulated) // 0x10001F3F
{
    mangled_assert("?GL_setEmulated@@YG_NI_N@Z");
    todo("implement");
    bool __result = _sub_10001F3F(_ability, _emulated);
    return __result;
}

_extern _sub_10001857(LuaLibrary *const);
_inline LuaLibrary::LuaLibrary() // 0x10001857
{
    mangled_assert("??0LuaLibrary@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10001857(this);
}

_extern void _sub_1000186B(LuaBinding::ObjInternal0<float,LuaBinding::Functor0Free<float> > *const);
_inline LuaBinding::ObjInternal0<float,LuaBinding::Functor0Free<float> >::~ObjInternal0<float,LuaBinding::Functor0Free<float> >() // 0x1000186B
{
    mangled_assert("??1?$ObjInternal0@MV?$Functor0Free@M@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1000186B(this);
}

_extern void _sub_10001871(LuaBinding::ObjInternal0<char const *,LuaBinding::Functor0Free<char const *> > *const);
_inline LuaBinding::ObjInternal0<char const *,LuaBinding::Functor0Free<char const *> >::~ObjInternal0<char const *,LuaBinding::Functor0Free<char const *> >() // 0x10001871
{
    mangled_assert("??1?$ObjInternal0@PBDV?$Functor0Free@PBD@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10001871(this);
}

_extern void _sub_10001877(LuaBinding::ObjInternal0<void,LuaBinding::Functor0Free<void> > *const);
_inline LuaBinding::ObjInternal0<void,LuaBinding::Functor0Free<void> >::~ObjInternal0<void,LuaBinding::Functor0Free<void> >() // 0x10001877
{
    mangled_assert("??1?$ObjInternal0@XV?$Functor0Free@X@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10001877(this);
}

_extern void _sub_1000187D(LuaBinding::ObjInternal0<bool,LuaBinding::Functor0Free<bool> > *const);
_inline LuaBinding::ObjInternal0<bool,LuaBinding::Functor0Free<bool> >::~ObjInternal0<bool,LuaBinding::Functor0Free<bool> >() // 0x1000187D
{
    mangled_assert("??1?$ObjInternal0@_NV?$Functor0Free@_N@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1000187D(this);
}

_extern void _sub_10001883(LuaBinding::ObjInternal1<unsigned int,void,LuaBinding::Functor1Free<unsigned int,void> > *const);
_inline LuaBinding::ObjInternal1<unsigned int,void,LuaBinding::Functor1Free<unsigned int,void> >::~ObjInternal1<unsigned int,void,LuaBinding::Functor1Free<unsigned int,void> >() // 0x10001883
{
    mangled_assert("??1?$ObjInternal1@IXV?$Functor1Free@IX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10001883(this);
}

_extern void _sub_10001889(LuaBinding::ObjInternal1<char const *,void,LuaBinding::Functor1Free<char const *,void> > *const);
_inline LuaBinding::ObjInternal1<char const *,void,LuaBinding::Functor1Free<char const *,void> >::~ObjInternal1<char const *,void,LuaBinding::Functor1Free<char const *,void> >() // 0x10001889
{
    mangled_assert("??1?$ObjInternal1@PBDXV?$Functor1Free@PBDX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10001889(this);
}

_extern void _sub_1000188F(LuaBinding::ObjInternal1<char const *,bool,LuaBinding::Functor1Free<char const *,bool> > *const);
_inline LuaBinding::ObjInternal1<char const *,bool,LuaBinding::Functor1Free<char const *,bool> >::~ObjInternal1<char const *,bool,LuaBinding::Functor1Free<char const *,bool> >() // 0x1000188F
{
    mangled_assert("??1?$ObjInternal1@PBD_NV?$Functor1Free@PBD_N@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1000188F(this);
}

_extern void _sub_10001895(LuaBinding::ObjInternal2<unsigned int,bool,bool,LuaBinding::Functor2Free<unsigned int,bool,bool> > *const);
_inline LuaBinding::ObjInternal2<unsigned int,bool,bool,LuaBinding::Functor2Free<unsigned int,bool,bool> >::~ObjInternal2<unsigned int,bool,bool,LuaBinding::Functor2Free<unsigned int,bool,bool> >() // 0x10001895
{
    mangled_assert("??1?$ObjInternal2@I_N_NV?$Functor2Free@I_N_N@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10001895(this);
}

_extern void _sub_1000189B(LuaBinding::ObjInternal2<char const *,unsigned int,bool,LuaBinding::Functor2Free<char const *,unsigned int,bool> > *const);
_inline LuaBinding::ObjInternal2<char const *,unsigned int,bool,LuaBinding::Functor2Free<char const *,unsigned int,bool> >::~ObjInternal2<char const *,unsigned int,bool,LuaBinding::Functor2Free<char const *,unsigned int,bool> >() // 0x1000189B
{
    mangled_assert("??1?$ObjInternal2@PBDI_NV?$Functor2Free@PBDI_N@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1000189B(this);
}

_extern void _sub_100018CC(LuaLibrary::BindInfo *const);
_inline LuaLibrary::BindInfo::~BindInfo() // 0x100018CC
{
    mangled_assert("??1BindInfo@LuaLibrary@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_100018CC(this);
}

/* ---------- private code */
#endif
