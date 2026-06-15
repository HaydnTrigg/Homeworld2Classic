#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <Render\objects\textureregistry.h>
#include <Mathlib\matrix4.h>
#include <hash_map>
#include <xmemory0>
#include <pch.h>
#include <xhash>
#include <memory\memorylib.h>
#include <crtdefs.h>
#include <Collision\Primitives\obb.h>
#include <weaponinfo.h>
#include <Menus\MenuSupport.h>
#include <Mathlib\matrix3.h>
#include <playerresourcetype.h>
#include <Collision\Primitives\capsule.h>
#include <boost\checked_delete.hpp>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <SoundManager\SoundEntityHandle.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <sobid.h>
#include <MeshAnimation.h>
#include <xmemory>
#include <ShieldTypes.h>
#include <compiler\compilerconfig.h>
#include <Subsystems\HardPointManager.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <Subsystems\HardPoint.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <Subsystems\HardPointStatic.h>
#include <list>
#include <Subsystems\SubSystemType.h>
#include <region.h>
#include <Render\objects\textureproxy.h>
#include <prim.h>
#include <platform\osdef.h>
#include <Mathlib\vector3.h>
#include <Mathlib\mathutil.h>
#include <Mathlib\vector4.h>
#include <SelTarg.h>
#include <seInterface2\PatchID.h>
#include <UserInterface\SharedGraphicFactory.h>
#include <seInterface2\PatchBase.h>
#include <UserInterface\Graphic.h>
#include <boost\scoped_ptr.hpp>
#include <seInterface2\SoundParams.h>
#include <Render\objects\texture.h>
#include <Render\objects\objects.h>
#include <Render\objects\core.h>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <Selector.h>
#include <Mathlib\matvec.h>
#include <MetaSelTarg.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <abilities.h>
#include <Render\gl\lotypes.h>
#include <boost\cstdint.hpp>
#include <cassert>
#include <assert.h>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <Render\gl\r_types.h>
#include <Mathlib\quat.h>
#include <SobWithMeshStatic.h>
#include <KeyBindings.h>
#include <config.h>
#include <assist\typemagic.h>
#include <SobRigidBodyStatic.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <platform\keydefines.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <debug\db.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <Modifiers\ModifierTargetCache.h>
#include <luaconfig\luaconfig.h>
#include <lua.h>
#include <UserInterface\NewFrame.h>
#include <Render\gl\r_defines.h>
#include <UserInterface\InterfaceElement.h>
#include <Render\gl\glext.h>
#include <ship.h>
#include <UserInterface\uitypes.h>
#include <SobWithMesh.h>
#include <platform\inputinterface.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <SobRigidBody.h>
#include <platform\platformexports.h>
#include <boost\throw_exception.hpp>
#include <sob.h>
#include <sobtypes.h>
#include <sobstatic.h>
#include <selection.h>
#include <Collision\Primitives\sphere.h>
#include <Interpolation.h>
#include <savegamedef.h>
#include <fixedpoint.h>
#include <boost\detail\shared_count.hpp>
#include <util\fixed.h>
#include <boost\detail\lwm_win32.hpp>
#include <Collision\Primitives\aabb.h>
#include <Menus\Pointer.h>
#include <UserInterface\NewUIScreen.h>
#include <wchar.h>
#include <task.h>
#include <UserInterface\StyleSheet.h>
#include <stack>
#include <UserInterface\pch.h>

/* ---------- constants */

/* ---------- definitions */

class UI::PointerData
{
public:
    unsigned __int32 m_width; // 0x0
    vector4 m_color; // 0x4
    unsigned __int32 m_stubLength; // 0x14
    Vector_2i m_pos; // 0x18
    SobID m_sobId; // 0x20
    bool m_visible; // 0x2C
    PointerData(UI::PointerData const &); /* compiler_generated() */
    _inline PointerData(); /* compiler_generated() */
    _inline ~PointerData(); /* compiler_generated() */
    UI::PointerData &operator=(UI::PointerData const &); /* compiler_generated() */
};
static_assert(sizeof(UI::PointerData) == 48, "Invalid UI::PointerData size");

/* ---------- prototypes */

/* ---------- globals */

extern UI::Pointer *UI::Pointer::ms_screen; // 0x846D1C

/* ---------- private variables */

/* ---------- public code */

UI::Pointer::Pointer(char const *) // 0x5A429B
{
    mangled_assert("??0Pointer@UI@@QAE@PBD@Z");
    todo("implement");
}

_inline UI::PointerData::PointerData() // 0x5A42FD
{
    mangled_assert("??0PointerData@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

UI::Pointer::~Pointer() // 0x5A4323
{
    mangled_assert("??1Pointer@UI@@UAE@XZ");
    todo("implement");
}

_inline UI::PointerData::~PointerData() // 0x5A436E
{
    mangled_assert("??1PointerData@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

void UI::Pointer::SetPointerVisible(bool) // 0x5A4466
{
    mangled_assert("?SetPointerVisible@Pointer@UI@@QAEX_N@Z");
    todo("implement");
}

void UI::Pointer::SetPointerInfo(Vector_2i const &, unsigned __int32, vector4 const &, unsigned __int32, SobID const &) // 0x5A440B
{
    mangled_assert("?SetPointerInfo@Pointer@UI@@QAEXABUVector_2i@@IABVvector4@@IABVSobID@@@Z");
    todo("implement");
}

void UI::Pointer::Draw() // 0x5A43BC
{
    mangled_assert("?Draw@Pointer@UI@@UAEXXZ");
    todo("implement");
}

/* ---------- private code */
#endif
