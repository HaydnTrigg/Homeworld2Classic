#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <Universe.h>
#include <Waypoint.h>
#include <SobUnmoveable.h>
#include <sob.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <luaconfig\lualibman.h>
#include <Mathlib\matrix3.h>
#include <luaconfig\luabinding.h>
#include <HyperspaceManager.h>
#include <SquadronList.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <platform\timer.h>
#include <xutility>
#include <platform\platformexports.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\octree.h>
#include <list>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <Mathlib\vector3.h>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <luaconfig\luaconfig.h>
#include <Interpolation.h>
#include <lua.h>
#include <Mathlib\vector2.h>
#include <Collision\Primitives\aabb.h>
#include <util\types.h>
#include <sobid.h>
#include <boost\cstdint.hpp>
#include <SOBGroup.h>
#include <Mathlib\quat.h>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <seInterface2\SoundParams.h>
#include <pathpoints.h>
#include <debug\db.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <dbdefines.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <UnitCaps\UnitCaps.h>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <SOBGroupManager.h>
#include <boost\detail\lwm_win32.hpp>
#include <hash_map>
#include <xhash>
#include <NIS\LuaNIS.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <wchar.h>
#include <MultiplierTypes.h>
#include <NIS\NISManager.h>
#include <Collision\BVH\bvh.h>

/* ---------- constants */

enum `anonymous-namespace'::LuaNISLib::Register::__l2::<unnamed-tag>
{
    NISHandle_Invalid = 0,
};

/* ---------- definitions */

class `anonymous-namespace'::LuaNISLib :
    public LuaLibrary
{
public:
    LuaNISLib(`anonymous-namespace'::LuaNISLib const &); /* compiler_generated() */
    LuaNISLib();
    virtual ~LuaNISLib() override;
    virtual bool Register(LuaConfig &) override;
    virtual bool DeRegister(LuaConfig &) override;
    `anonymous-namespace'::LuaNISLib &operator=(`anonymous-namespace'::LuaNISLib const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::LuaNISLib) == 16, "Invalid `anonymous-namespace'::LuaNISLib size");

typedef `anonymous-namespace'::LuaNISLib ?A0xbddd377d::LuaNISLib;

/* ---------- prototypes */

extern void NISSeek(float time);
extern void NISSeekForward(float timeOffset);
extern void NISLoad(char const *filename);
extern unsigned __int32 NISDebug(char const *name);
extern unsigned __int32 NISPlay(char const *name);
extern unsigned __int32 NISGetPlayingHandle(char const *name);
extern unsigned __int32 NISPlayFromGroup(char const *name, char const *groupName);
extern bool NISComplete(unsigned __int32 handle);
extern void NISDisableInterface(bool state);
extern void NISSetSkippable(bool bSkippable);

/* ---------- globals */

extern char const *LUALIB_NIS; // 0x8392D8

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_544E44(float);
void NISSeek(float time) // 0x544E44
{
    mangled_assert("?NISSeek@@YGXM@Z");
    todo("implement");
    _sub_544E44(time);
}

_extern void _sub_544E5F(float);
void NISSeekForward(float timeOffset) // 0x544E5F
{
    mangled_assert("?NISSeekForward@@YGXM@Z");
    todo("implement");
    _sub_544E5F(timeOffset);
}

_extern void _sub_544D94(char const *);
void NISLoad(char const *filename) // 0x544D94
{
    mangled_assert("?NISLoad@@YGXPBD@Z");
    todo("implement");
    _sub_544D94(filename);
}

_extern unsigned __int32 _sub_544D4B(char const *);
unsigned __int32 NISDebug(char const *name) // 0x544D4B
{
    mangled_assert("?NISDebug@@YGIPBD@Z");
    todo("implement");
    unsigned __int32 __result = _sub_544D4B(name);
    return __result;
}

_extern unsigned __int32 _sub_544DA7(char const *);
unsigned __int32 NISPlay(char const *name) // 0x544DA7
{
    mangled_assert("?NISPlay@@YGIPBD@Z");
    todo("implement");
    unsigned __int32 __result = _sub_544DA7(name);
    return __result;
}

_extern unsigned __int32 _sub_544D81(char const *);
unsigned __int32 NISGetPlayingHandle(char const *name) // 0x544D81
{
    mangled_assert("?NISGetPlayingHandle@@YGIPBD@Z");
    todo("implement");
    unsigned __int32 __result = _sub_544D81(name);
    return __result;
}

_extern unsigned __int32 _sub_544DDC(char const *, char const *);
unsigned __int32 NISPlayFromGroup(char const *name, char const *groupName) // 0x544DDC
{
    mangled_assert("?NISPlayFromGroup@@YGIPBD0@Z");
    todo("implement");
    unsigned __int32 __result = _sub_544DDC(name, groupName);
    return __result;
}

_extern bool _sub_544D2F(unsigned __int32);
bool NISComplete(unsigned __int32 handle) // 0x544D2F
{
    mangled_assert("?NISComplete@@YG_NI@Z");
    todo("implement");
    bool __result = _sub_544D2F(handle);
    return __result;
}

_extern void _sub_544D6E(bool);
void NISDisableInterface(bool state) // 0x544D6E
{
    mangled_assert("?NISDisableInterface@@YGX_N@Z");
    todo("implement");
    _sub_544D6E(state);
}

_extern void _sub_544E7A(bool);
void NISSetSkippable(bool bSkippable) // 0x544E7A
{
    mangled_assert("?NISSetSkippable@@YGX_N@Z");
    todo("implement");
    _sub_544E7A(bSkippable);
}

_extern void _sub_544A6E(LuaBinding::ObjInternal1<unsigned int,bool,LuaBinding::Functor1Free<unsigned int,bool> > *const);
_inline LuaBinding::ObjInternal1<unsigned int,bool,LuaBinding::Functor1Free<unsigned int,bool> >::~ObjInternal1<unsigned int,bool,LuaBinding::Functor1Free<unsigned int,bool> >() // 0x544A6E
{
    mangled_assert("??1?$ObjInternal1@I_NV?$Functor1Free@I_N@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_544A6E(this);
}

_extern void _sub_544A74(LuaBinding::ObjInternal1<float,void,LuaBinding::Functor1Free<float,void> > *const);
_inline LuaBinding::ObjInternal1<float,void,LuaBinding::Functor1Free<float,void> >::~ObjInternal1<float,void,LuaBinding::Functor1Free<float,void> >() // 0x544A74
{
    mangled_assert("??1?$ObjInternal1@MXV?$Functor1Free@MX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_544A74(this);
}

_extern void _sub_544A7A(LuaBinding::ObjInternal1<char const *,unsigned int,LuaBinding::Functor1Free<char const *,unsigned int> > *const);
_inline LuaBinding::ObjInternal1<char const *,unsigned int,LuaBinding::Functor1Free<char const *,unsigned int> >::~ObjInternal1<char const *,unsigned int,LuaBinding::Functor1Free<char const *,unsigned int> >() // 0x544A7A
{
    mangled_assert("??1?$ObjInternal1@PBDIV?$Functor1Free@PBDI@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_544A7A(this);
}

_extern void _sub_544A80(LuaBinding::ObjInternal2<char const *,char const *,unsigned int,LuaBinding::Functor2Free<char const *,char const *,unsigned int> > *const);
_inline LuaBinding::ObjInternal2<char const *,char const *,unsigned int,LuaBinding::Functor2Free<char const *,char const *,unsigned int> >::~ObjInternal2<char const *,char const *,unsigned int,LuaBinding::Functor2Free<char const *,char const *,unsigned int> >() // 0x544A80
{
    mangled_assert("??1?$ObjInternal2@PBDPBDIV?$Functor2Free@PBDPBDI@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_544A80(this);
}

/* ---------- private code */
#endif
