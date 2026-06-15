#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <pch.h>
#include <Render\FxGL\FXManager.h>
#include <Render\FxGL\VarMulti.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <platform\osdef.h>
#include <debug\ctassert.h>
#include <NavLights.h>
#include <Render\objects\light.h>
#include <Render\objects\objects.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <util\statmonitor.h>
#include <Render\gl\lotypes.h>
#include <util\utilexports.h>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <Render\gl\r_types.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <Render\gl\r_defines.h>
#include <Mathlib\mathlibdll.h>
#include <Render\gl\glext.h>
#include <Mathlib\fastmath.h>
#include <util\colour.h>
#include <savegamedef.h>
#include <LightOption.h>
#include <GameObj.h>
#include <config.h>
#include <task.h>
#include <stack>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void LightOption::SetLOD(__int32 lod);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

void LightOption::SetLOD(__int32 lod) // 0x604531
{
    mangled_assert("?SetLOD@LightOption@@YGXH@Z");
    todo("implement");
}

/* ---------- private code */
#endif
