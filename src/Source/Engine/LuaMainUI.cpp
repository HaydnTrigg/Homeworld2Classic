#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <seInterface2\PatchID.h>
#include <Interpolation.h>
#include <seInterface2\PatchBase.h>
#include <xstring>
#include <seInterface2\SoundParams.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <boost\shared_array.hpp>
#include <KeyBindings.h>
#include <pch.h>
#include <config.h>
#include <Collision\Primitives\aabb.h>
#include <platform\keydefines.h>
#include <luaconfig\lualibman.h>
#include <luaconfig\luabinding.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <Camera\OrbitParameters.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <MainUI.h>
#include <xmemory>
#include <Selector.h>
#include <prim.h>
#include <App\AppObj.h>
#include <platform\appinterface.h>
#include <SoundManager\SoundManager.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <list>
#include <Collision\BVH\profiling.h>
#include <SoundManager\SoundEntityHandle.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <boost\smart_ptr.hpp>
#include <luaconfig\luaconfig.h>
#include <sob.h>
#include <boost\scoped_ptr.hpp>
#include <lua.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <boost\cstdint.hpp>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <seInterface2\SampleID.h>
#include <seInterface2\SampleBase.h>
#include <boost\scoped_array.hpp>
#include <Mathlib\quat.h>
#include <MetaSelTarg.h>
#include <SelTarg.h>
#include <SensorsManager.h>
#include <Render\gl\r_types.h>
#include <Mathlib\matvec.h>
#include <Collision\Primitives\obb.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <debug\db.h>
#include <seInterface2\sedefinesshared.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <abilities.h>
#include <boost\detail\shared_count.hpp>
#include <bitset>
#include <boost\detail\lwm_win32.hpp>
#include <sobid.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <LuaMainUI.h>
#include <Collision\BVH\proxy.h>
#include <wchar.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <mainScreen.h>

/* ---------- constants */

/* ---------- definitions */

class `anonymous-namespace'::LuaGameMainUILib :
    public LuaLibrary
{
public:
    LuaGameMainUILib(`anonymous-namespace'::LuaGameMainUILib const &); /* compiler_generated() */
    LuaGameMainUILib();
    virtual ~LuaGameMainUILib() override;
    virtual bool Register(LuaConfig &) override;
    virtual bool DeRegister(LuaConfig &) override;
    `anonymous-namespace'::LuaGameMainUILib &operator=(`anonymous-namespace'::LuaGameMainUILib const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::LuaGameMainUILib) == 16, "Invalid `anonymous-namespace'::LuaGameMainUILib size");

class `anonymous-namespace'::LuaAppMainUILib :
    public LuaLibrary
{
public:
    LuaAppMainUILib(`anonymous-namespace'::LuaAppMainUILib const &); /* compiler_generated() */
    LuaAppMainUILib();
    virtual ~LuaAppMainUILib() override;
    virtual bool Register(LuaConfig &) override;
    virtual bool DeRegister(LuaConfig &) override;
    `anonymous-namespace'::LuaAppMainUILib &operator=(`anonymous-namespace'::LuaAppMainUILib const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::LuaAppMainUILib) == 16, "Invalid `anonymous-namespace'::LuaAppMainUILib size");

typedef `anonymous-namespace'::LuaGameMainUILib ?A0x35bd6a96::LuaGameMainUILib;
typedef `anonymous-namespace'::LuaAppMainUILib ?A0x35bd6a96::LuaAppMainUILib;

/* ---------- prototypes */


_static void MainUI_UserEvent(__int32 userEvent);
_static void MainUI_UserEventData(__int32 userEvent, __int32 data);
_static void MainUI_UserEventData2(__int32 userEvent, __int32 data, __int32 data2);
_static void MainUI_DisableAllCommands(bool b);
_static void MainUI_DisableCommand(__int32 userEvent, bool b);
_static void MainUI_PushEnabledCommandState();
_static void MainUI_PopEnabledCommandState();
_static void MainUI_PopAllEnabledCommandStates();
_static void bind1(char const *luaStr, __int32 key0);
_static void bind2(char const *luaStr, __int32 key0, __int32 key1);
_static void bind3(char const *luaStr, __int32 key0, __int32 key1, __int32 key2);
_static void bindup(char const *luaStr, __int32 key);

/* ---------- globals */

extern char const *LUALIB_GAME_MAINUI; // 0x8332A8
extern char const *LUALIB_APP_MAINUI; // 0x8332A4

/* ---------- private variables */

/* ---------- public code */

_inline LuaLibrary::LuaLibrary() // 0x44DCCB
{
    mangled_assert("??0LuaLibrary@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal0<void,LuaBinding::Functor0Free<void> >::~ObjInternal0<void,LuaBinding::Functor0Free<void> >() // 0x44DCDF
{
    mangled_assert("??1?$ObjInternal0@XV?$Functor0Free@X@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal1<int,void,LuaBinding::Functor1Free<int,void> >::~ObjInternal1<int,void,LuaBinding::Functor1Free<int,void> >() // 0x44DCE5
{
    mangled_assert("??1?$ObjInternal1@HXV?$Functor1Free@HX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal1<bool,void,LuaBinding::Functor1Free<bool,void> >::~ObjInternal1<bool,void,LuaBinding::Functor1Free<bool,void> >() // 0x44DCEB
{
    mangled_assert("??1?$ObjInternal1@_NXV?$Functor1Free@_NX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal2<int,int,void,LuaBinding::Functor2Free<int,int,void> >::~ObjInternal2<int,int,void,LuaBinding::Functor2Free<int,int,void> >() // 0x44DCF1
{
    mangled_assert("??1?$ObjInternal2@HHXV?$Functor2Free@HHX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal2<int,bool,void,LuaBinding::Functor2Free<int,bool,void> >::~ObjInternal2<int,bool,void,LuaBinding::Functor2Free<int,bool,void> >() // 0x44DCF7
{
    mangled_assert("??1?$ObjInternal2@H_NXV?$Functor2Free@H_NX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal2<char const *,int,void,LuaBinding::Functor2Free<char const *,int,void> >::~ObjInternal2<char const *,int,void,LuaBinding::Functor2Free<char const *,int,void> >() // 0x44DCFD
{
    mangled_assert("??1?$ObjInternal2@PBDHXV?$Functor2Free@PBDHX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal3<int,int,int,void,LuaBinding::Functor3Free<int,int,int,void> >::~ObjInternal3<int,int,int,void,LuaBinding::Functor3Free<int,int,int,void> >() // 0x44DD03
{
    mangled_assert("??1?$ObjInternal3@HHHXV?$Functor3Free@HHHX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal3<char const *,int,int,void,LuaBinding::Functor3Free<char const *,int,int,void> >::~ObjInternal3<char const *,int,int,void,LuaBinding::Functor3Free<char const *,int,int,void> >() // 0x44DD09
{
    mangled_assert("??1?$ObjInternal3@PBDHHXV?$Functor3Free@PBDHHX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal4<char const *,int,int,int,void,LuaBinding::Functor4Free<char const *,int,int,int,void> >::~ObjInternal4<char const *,int,int,int,void,LuaBinding::Functor4Free<char const *,int,int,int,void> >() // 0x44DD0F
{
    mangled_assert("??1?$ObjInternal4@PBDHHHXV?$Functor4Free@PBDHHHX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaLibrary::BindInfo::~BindInfo() // 0x44DD1F
{
    mangled_assert("??1BindInfo@LuaLibrary@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

/* ---------- private code */

_static void MainUI_UserEvent(__int32 userEvent) // 0x44E39E
{
    mangled_assert("MainUI_UserEvent");
    todo("implement");
}

_static void MainUI_UserEventData(__int32 userEvent, __int32 data) // 0x44E3B3
{
    mangled_assert("MainUI_UserEventData");
    todo("implement");
}

_static void MainUI_UserEventData2(__int32 userEvent, __int32 data, __int32 data2) // 0x44E3AE
{
    mangled_assert("MainUI_UserEventData2");
    todo("implement");
}

_static void MainUI_DisableAllCommands(bool b) // 0x44E336
{
    mangled_assert("MainUI_DisableAllCommands");
    todo("implement");
}

_static void MainUI_DisableCommand(__int32 userEvent, bool b) // 0x44E353
{
    mangled_assert("MainUI_DisableCommand");
    todo("implement");
}

_static void MainUI_PushEnabledCommandState() // 0x44E390
{
    mangled_assert("MainUI_PushEnabledCommandState");
    todo("implement");
}

_static void MainUI_PopEnabledCommandState() // 0x44E382
{
    mangled_assert("MainUI_PopEnabledCommandState");
    todo("implement");
}

_static void MainUI_PopAllEnabledCommandStates() // 0x44E374
{
    mangled_assert("MainUI_PopAllEnabledCommandStates");
    todo("implement");
}

_static void bind1(char const *luaStr, __int32 key0) // 0x44E7F9
{
    mangled_assert("bind1");
    todo("implement");
}

_static void bind2(char const *luaStr, __int32 key0, __int32 key1) // 0x44E844
{
    mangled_assert("bind2");
    todo("implement");
}

_static void bind3(char const *luaStr, __int32 key0, __int32 key1, __int32 key2) // 0x44E897
{
    mangled_assert("bind3");
    todo("implement");
}

_static void bindup(char const *luaStr, __int32 key) // 0x44E8F1
{
    mangled_assert("bindup");
    todo("implement");
}
#endif
