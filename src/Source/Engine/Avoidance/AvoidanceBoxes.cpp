#if 0
/* ---------- headers */

#include "decomp.h"
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <pch.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <platform\osdef.h>
#include <xutility>
#include <Avoidance\asteroidavoidancegenerator.h>
#include <vector>
#include <xmemory>
#include <Render\objects\debugrender.h>
#include <Render\objects\core.h>
#include <Render\objects\objects.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <Render\gl\lotypes.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <Render\gl\r_types.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <debug\db.h>
#include <util\colour.h>
#include <Avoidance\AvoidanceBoxes.h>
#include <Collision\Primitives\obb.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void DrawOBB(Collision::OBB const &obb, vector4 const &col, vector4 const &linecol);

/* ---------- globals */

extern bool AvoidanceBoxes::m_drawdebug; // 0x8440E8
extern AvoidanceBoxes *AvoidanceBoxes::s_instance; // 0x8440E4

/* ---------- private variables */

_static
{
    extern unsigned __int32 const indices[36]; // 0x798388
}

/* ---------- public code */

_extern void _sub_4EBE70(AvoidanceBoxes *const, Collision::OBB const &);
void AvoidanceBoxes::AddAvoidanceBox(Collision::OBB const &) // 0x4EBE70
{
    mangled_assert("?AddAvoidanceBox@AvoidanceBoxes@@QAEXABVOBB@Collision@@@Z");
    todo("implement");
    _sub_4EBE70(this, arg);
}

_extern AvoidanceBoxes *_sub_4EC11E();
AvoidanceBoxes *AvoidanceBoxes::create() // 0x4EC11E
{
    mangled_assert("?create@AvoidanceBoxes@@CGPAV1@XZ");
    todo("implement");
    AvoidanceBoxes * __result = _sub_4EC11E();
    return __result;
}

_extern bool _sub_4EC1EA();
bool AvoidanceBoxes::release() // 0x4EC1EA
{
    mangled_assert("?release@AvoidanceBoxes@@SG_NXZ");
    todo("implement");
    bool __result = _sub_4EC1EA();
    return __result;
}

_extern AvoidanceBoxes *_sub_4EC152();
AvoidanceBoxes *AvoidanceBoxes::instance() // 0x4EC152
{
    mangled_assert("?instance@AvoidanceBoxes@@SGPAV1@XZ");
    todo("implement");
    AvoidanceBoxes * __result = _sub_4EC152();
    return __result;
}

_extern bool _sub_4EC21F();
bool AvoidanceBoxes::startup() // 0x4EC21F
{
    mangled_assert("?startup@AvoidanceBoxes@@SG_NXZ");
    todo("implement");
    bool __result = _sub_4EC21F();
    return __result;
}

_extern bool _sub_4EC20E();
bool AvoidanceBoxes::shutdown() // 0x4EC20E
{
    mangled_assert("?shutdown@AvoidanceBoxes@@SG_NXZ");
    todo("implement");
    bool __result = _sub_4EC20E();
    return __result;
}

_extern void _sub_4EBED4(Collision::OBB const &, vector4 const &, vector4 const &);
void DrawOBB(Collision::OBB const &obb, vector4 const &col, vector4 const &linecol) // 0x4EBED4
{
    mangled_assert("?DrawOBB@@YGXABVOBB@Collision@@ABVvector4@@1@Z");
    todo("implement");
    _sub_4EBED4(obb, col, linecol);
}

_extern void _sub_4EBE75(AvoidanceBoxes const *const);
void AvoidanceBoxes::DebugRender() const // 0x4EBE75
{
    mangled_assert("?DebugRender@AvoidanceBoxes@@QBEXXZ");
    todo("implement");
    _sub_4EBE75(this);
}

/* ---------- private code */
#endif
