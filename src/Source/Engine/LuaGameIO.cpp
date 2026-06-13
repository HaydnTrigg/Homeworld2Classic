#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <Collision\Primitives\capsule.h>
#include <xmemory0>
#include <Collision\Primitives\segment.h>
#include <pch.h>
#include <Collision\BVH\profiling.h>
#include <dbdefines.h>
#include <UnitCaps\UnitCaps.h>
#include <GameObj.h>
#include <config.h>
#include <Mathlib\matrix3.h>
#include <SOBGroupManager.h>
#include <task.h>
#include <hash_map>
#include <stack>
#include <xhash>
#include <new>
#include <xstddef>
#include <type_traits>
#include <gamemsg.h>
#include <Collision\Primitives\obb.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <xutility>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <luaconfig\luaconfig.h>
#include <xmemory>
#include <lua.h>
#include <recorder.h>
#include <syncChecking.h>
#include <list>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <HyperspaceManager.h>
#include <xtree>
#include <SquadronList.h>
#include <boost\scoped_ptr.hpp>
#include <savegame.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <orders.h>
#include <orders_base.h>
#include <fixedpoint.h>
#include <commandtype.h>
#include <boost\cstdint.hpp>
#include <util\fixed.h>
#include <util\statmonitor.h>
#include <util\utilexports.h>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <Mathlib\quat.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <pathpoints.h>
#include <Interpolation.h>
#include <debug\db.h>
#include <Collision\Primitives\aabb.h>
#include <util\colour.h>
#include <sobid.h>
#include <boost\shared_ptr.hpp>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <luaconfig\lualibman.h>
#include <luaconfig\luabinding.h>
#include <LuaGameIO.h>
#include <wchar.h>
#include <App\AppObj.h>
#include <Universe.h>
#include <platform\appinterface.h>
#include <Waypoint.h>
#include <SelTarg.h>
#include <SobUnmoveable.h>
#include <prim.h>
#include <sob.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>

/* ---------- constants */

/* ---------- definitions */

struct LuaScopedGuard
{
    _inline LuaScopedGuard();
    _inline ~LuaScopedGuard();
};
static_assert(sizeof(LuaScopedGuard) == 1, "Invalid LuaScopedGuard size");

class `anonymous-namespace'::LuaGameIOLib :
    public LuaLibrary
{
public:
    LuaGameIOLib(`anonymous-namespace'::LuaGameIOLib const &); /* compiler_generated() */
    LuaGameIOLib();
    virtual ~LuaGameIOLib() override;
    virtual bool Register(LuaConfig &) override;
    virtual bool DeRegister(LuaConfig &) override;
    `anonymous-namespace'::LuaGameIOLib &operator=(`anonymous-namespace'::LuaGameIOLib const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::LuaGameIOLib) == 16, "Invalid `anonymous-namespace'::LuaGameIOLib size");

typedef `anonymous-namespace'::LuaGameIOLib ?A0xa1b36aef::LuaGameIOLib;

/* ---------- prototypes */


_static void SaveDetGame(char const *filename);
_static void SaveGame(char const *filename);
_static void LoadGame(char const *filename);
_static void RecordGame(bool on);
_static void SaveRecordedGame();
_static void LoadRecordedGame(char const *type, bool isDebugging);

/* ---------- globals */

extern char const *LUALIB_GAMEIO; // 0x83AB58

/* ---------- private variables */

/* ---------- public code */

_extern _sub_5C4B17(LuaScopedGuard *const);
_inline LuaScopedGuard::LuaScopedGuard() // 0x5C4B17
{
    mangled_assert("??0LuaScopedGuard@@QAE@XZ");
    todo("implement");
    _sub_5C4B17(this);
}

_extern void _sub_5C4B39(LuaBinding::ObjInternal2<char const *,bool,void,LuaBinding::Functor2Free<char const *,bool,void> > *const);
_inline LuaBinding::ObjInternal2<char const *,bool,void,LuaBinding::Functor2Free<char const *,bool,void> >::~ObjInternal2<char const *,bool,void,LuaBinding::Functor2Free<char const *,bool,void> >() // 0x5C4B39
{
    mangled_assert("??1?$ObjInternal2@PBD_NXV?$Functor2Free@PBD_NX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5C4B39(this);
}

_extern void _sub_5C4B80(LuaScopedGuard *const);
_inline LuaScopedGuard::~LuaScopedGuard() // 0x5C4B80
{
    mangled_assert("??1LuaScopedGuard@@QAE@XZ");
    todo("implement");
    _sub_5C4B80(this);
}

/* ---------- private code */

_extern void _sub_5C4E89(char const *);
_static void SaveDetGame(char const *filename) // 0x5C4E89
{
    mangled_assert("SaveDetGame");
    todo("implement");
    _sub_5C4E89(filename);
}

_extern void _sub_5C4EA7(char const *);
_static void SaveGame(char const *filename) // 0x5C4EA7
{
    mangled_assert("SaveGame");
    todo("implement");
    _sub_5C4EA7(filename);
}

_extern void _sub_5C4C58(char const *);
_static void LoadGame(char const *filename) // 0x5C4C58
{
    mangled_assert("LoadGame");
    todo("implement");
    _sub_5C4C58(filename);
}

_extern void _sub_5C4D0C(bool);
_static void RecordGame(bool on) // 0x5C4D0C
{
    mangled_assert("RecordGame");
    todo("implement");
    _sub_5C4D0C(on);
}

_extern void _sub_5C4EC5();
_static void SaveRecordedGame() // 0x5C4EC5
{
    mangled_assert("SaveRecordedGame");
    todo("implement");
    _sub_5C4EC5();
}

_extern void _sub_5C4CB4(char const *, bool);
_static void LoadRecordedGame(char const *type, bool isDebugging) // 0x5C4CB4
{
    mangled_assert("LoadRecordedGame");
    todo("implement");
    _sub_5C4CB4(type, isDebugging);
}
#endif
