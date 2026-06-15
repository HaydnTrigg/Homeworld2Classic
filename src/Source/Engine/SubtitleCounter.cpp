#if 0
/* ---------- headers */

#include "decomp.h"
#include <Collision\Primitives\segment.h>
#include <assist\stlexsmallvector.h>
#include <Collision\BVH\profiling.h>
#include <xstring>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <pch.h>
#include <Render\objects\textureregistry.h>
#include <memory\memorylib.h>
#include <hash_map>
#include <xhash>
#include <crtdefs.h>
#include <SOBGroupManager.h>
#include <sobid.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <Scar\LuaRuleSystem.h>
#include <xstddef>
#include <type_traits>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <fixedpoint.h>
#include <xmemory>
#include <util\fixed.h>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <Menus\SubtitleScreen.h>
#include <UserInterface\NewUIScreen.h>
#include <compiler\compilerconfig.h>
#include <task.h>
#include <stack>
#include <dbdefines.h>
#include <UnitCaps\UnitCaps.h>
#include <Scar\Scar.h>
#include <list>
#include <Scar\ScarEventSys.h>
#include <Mathlib\vector3.h>
#include <Render\objects\textureproxy.h>
#include <Mathlib\vector4.h>
#include <platform\osdef.h>
#include <Mathlib\mathutil.h>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <UserInterface\SharedGraphicFactory.h>
#include <UserInterface\Graphic.h>
#include <Render\objects\texture.h>
#include <Render\objects\objects.h>
#include <Render\objects\core.h>
#include <Mathlib\vector2.h>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <util\types.h>
#include <Mathlib\matvec.h>
#include <boost\cstdint.hpp>
#include <Render\gl\lotypes.h>
#include <localizer\localizer.h>
#include <cassert>
#include <assert.h>
#include <Render\gl\r_types.h>
#include <Mathlib\quat.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <KeyBindings.h>
#include <Collision\intersect.h>
#include <config.h>
#include <assist\typemagic.h>
#include <Collision\primitivesfwd.h>
#include <HyperspaceManager.h>
#include <Universe.h>
#include <SquadronList.h>
#include <Waypoint.h>
#include <SobUnmoveable.h>
#include <sob.h>
#include <Mathlib\mathlibdll.h>
#include <luaconfig\luabinding.h>
#include <sobstatic.h>
#include <Mathlib\fastmath.h>
#include <Collision\Primitives\sphere.h>
#include <Interpolation.h>
#include <region.h>
#include <platform\keydefines.h>
#include <pathpoints.h>
#include <Collision\Primitives\aabb.h>
#include <platform\timer.h>
#include <debug\db.h>
#include <luaconfig\luaconfig.h>
#include <lua.h>
#include <UserInterface\NewFrame.h>
#include <Render\gl\r_defines.h>
#include <util\colour.h>
#include <UserInterface\InterfaceElement.h>
#include <Render\gl\glext.h>
#include <boost\shared_ptr.hpp>
#include <UserInterface\uitypes.h>
#include <boost\throw_exception.hpp>
#include <sobtypes.h>
#include <platform\inputinterface.h>
#include <selection.h>
#include <platform\platformexports.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <cstdarg>
#include <stdarg.h>
#include <Collision\Primitives\obb.h>
#include <SubtitleCounter.h>
#include <subtitle.h>
#include <boost\utility.hpp>
#include <wchar.h>
#include <prim.h>
#include <swprintf.inl>
#include <UserInterface\StyleSheet.h>
#include <UserInterface\pch.h>
#include <Collision\Primitives\capsule.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */


_static void GetMinutesSeconds(float time, __int32 &min, __int32 &sec);

/* ---------- globals */

extern char const SubtitleCounter::m_saveToken[16]; // 0x7B08D0
extern SaveData const SubtitleCounter::m_saveData[3]; // 0x7B08E0

/* ---------- private variables */

_static
{
    extern float subtitleTwkScrollDwellStart; // 0x83D5FC
    extern float subtitleTwkScrollDwellEnd; // 0x83D600
    extern float subtitleTwkScrollShortest; // 0x83D604
    extern float subtitleTwkTitleShortest; // 0x83D608
}

/* ---------- public code */

SubtitleCounter::SubtitleCounter(__int32, __int32) // 0x641942
{
    mangled_assert("??0SubtitleCounter@@QAE@HH@Z");
    todo("implement");
}

SubtitleCounter::SubtitleCounter(SaveGameData *) // 0x641985
{
    mangled_assert("??0SubtitleCounter@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

_inline Subtitle_Region::Updater::Updater() // 0x6419C4
{
    mangled_assert("??0Updater@Subtitle_Region@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline SubtitleCounter::~SubtitleCounter() // 0x6419CE
{
    mangled_assert("??1SubtitleCounter@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

void SubtitleCounter::update(Subtitle_Region *) // 0x641ACC
{
    mangled_assert("?update@SubtitleCounter@@UAEXPAVSubtitle_Region@@@Z");
    // __shifted(SubtitleCounter, 12);
    todo("implement");
}

void SubtitleCounter::postRestore() // 0x641A3A
{
    mangled_assert("?postRestore@SubtitleCounter@@UAEXXZ");
    todo("implement");
}

bool SubtitleCounter::restore(SaveGameData *) // 0x641A53
{
    mangled_assert("?restore@SubtitleCounter@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool SubtitleCounter::save(SaveGameData *, SaveType) // 0x641A91
{
    mangled_assert("?save@SubtitleCounter@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

/* ---------- private code */

_static void GetMinutesSeconds(float time, __int32 &min, __int32 &sec) // 0x641A01
{
    mangled_assert("GetMinutesSeconds");
    todo("implement");
}
#endif
