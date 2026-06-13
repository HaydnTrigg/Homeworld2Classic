#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <pch.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <Collision\Primitives\obb.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <boost\noncopyable.hpp>
#include <Mathlib\vector3.h>
#include <boost\scoped_ptr.hpp>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <Mathlib\vector2.h>
#include <Collision\primitivesfwd.h>
#include <boost\cstdint.hpp>
#include <Interpolation.h>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <Collision\Primitives\aabb.h>
#include <Mathlib\quat.h>
#include <SobUnmoveable.h>
#include <sob.h>
#include <sobid.h>
#include <savegameimpl.h>
#include <debug\db.h>
#include <SelTarg.h>
#include <prim.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <Collision\Primitives\capsule.h>
#include <boost\detail\lwm_win32.hpp>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <AxisAlignBox.h>
#include <Volume.h>
#include <wchar.h>
#include <VolumeStatic.h>
#include <SobUnmoveableStatic.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const AxisAlignBox::m_saveToken[0]; // 0x790348
extern SaveData const AxisAlignBox::m_saveData[6]; // 0x790358

/* ---------- private variables */

/* ---------- public code */

_extern _sub_4B1CB6(AxisAlignBox *const, char const *, float, float, float, float, float, float, bool);
AxisAlignBox::AxisAlignBox(char const *, float, float, float, float, float, float, bool) // 0x4B1CB6
{
    mangled_assert("??0AxisAlignBox@@QAE@PBDMMMMMM_N@Z");
    todo("implement");
    _sub_4B1CB6(this, arg, arg, arg, arg, arg, arg, arg, arg);
}

_extern void _sub_4B1D3A(AxisAlignBox *const);
_inline AxisAlignBox::~AxisAlignBox() // 0x4B1D3A
{
    mangled_assert("??1AxisAlignBox@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4B1D3A(this);
}

_extern void _sub_4B1D3F(Volume *const);
_inline Volume::~Volume() // 0x4B1D3F
{
    mangled_assert("??1Volume@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4B1D3F(this);
}

_extern void _sub_4B1D72(AxisAlignBox *const);
void AxisAlignBox::defaultSettings() // 0x4B1D72
{
    mangled_assert("?defaultSettings@AxisAlignBox@@QAEXXZ");
    todo("implement");
    _sub_4B1D72(this);
}

_extern _sub_4B1C9E(AxisAlignBox *const, SaveGameData *);
AxisAlignBox::AxisAlignBox(SaveGameData *) // 0x4B1C9E
{
    mangled_assert("??0AxisAlignBox@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_4B1C9E(this, arg);
}

_extern void _sub_4B1D76(AxisAlignBox *const);
void AxisAlignBox::postRestore() // 0x4B1D76
{
    mangled_assert("?postRestore@AxisAlignBox@@UAEXXZ");
    todo("implement");
    _sub_4B1D76(this);
}

_extern void _sub_4B1ED0(AxisAlignBox *const);
void AxisAlignBox::staticInit() // 0x4B1ED0
{
    mangled_assert("?staticInit@AxisAlignBox@@QAEXXZ");
    todo("implement");
    _sub_4B1ED0(this);
}

_extern bool _sub_4B1D7B(AxisAlignBox *const, SaveGameData *);
bool AxisAlignBox::restore(SaveGameData *) // 0x4B1D7B
{
    mangled_assert("?restore@AxisAlignBox@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_4B1D7B(this, arg);
    return __result;
}

_extern bool _sub_4B1DC8(AxisAlignBox *const, SaveGameData *, SaveType);
bool AxisAlignBox::save(SaveGameData *, SaveType) // 0x4B1DC8
{
    mangled_assert("?save@AxisAlignBox@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_4B1DC8(this, arg, arg);
    return __result;
}

_extern void _sub_4B1E15(AxisAlignBox *const, float, float, float, float, float, float);
void AxisAlignBox::setExtents(float, float, float, float, float, float) // 0x4B1E15
{
    mangled_assert("?setExtents@AxisAlignBox@@QAEXMMMMMM@Z");
    todo("implement");
    _sub_4B1E15(this, arg, arg, arg, arg, arg, arg);
}

/* ---------- private code */
#endif
