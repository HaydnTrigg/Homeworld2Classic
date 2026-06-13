#if 0
/* ---------- headers */

#include "decomp.h"
#include <Render\gl\r_types.h>
#include <xstring>
#include <Mathlib\matvec.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <Mathlib\matrix3.h>
#include <Render\FxGL\FXManager.h>
#include <Render\FxGL\VarMulti.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <iosfwd>
#include <savegame.h>
#include <task.h>
#include <stack>
#include <debug\ctassert.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <Collision\primitivesfwd.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <Collision\Primitives\sphere.h>
#include <debug\db.h>
#include <util\colour.h>
#include <savegamedef.h>
#include <BattleScar\BattleScarInternal.h>
#include <BattleScar\BattleScarManager.h>
#include <Decal\DecalManager.h>
#include <Decal\VertexPool.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern BattleScarManager::Object *BattleScarInternal::handleToObjPtr(BattleScarManager::Handle const &handle, BattleScarInternal::ObjHeader *&pHeader);
extern BattleScarManager::Object *BattleScarInternal::handleToObjPtr(BattleScarManager::Handle const &handle);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern BattleScarManager::Object *_sub_558AF9(BattleScarManager::Handle const &, BattleScarInternal::ObjHeader *&);
BattleScarManager::Object *BattleScarInternal::handleToObjPtr(BattleScarManager::Handle const &handle, BattleScarInternal::ObjHeader *&pHeader) // 0x558AF9
{
    mangled_assert("?handleToObjPtr@BattleScarInternal@@YGPAVObject@BattleScarManager@@ABUHandle@3@AAPAUObjHeader@1@@Z");
    todo("implement");
    BattleScarManager::Object * __result = _sub_558AF9(handle, pHeader);
    return __result;
}

_extern BattleScarManager::Object *_sub_558AE5(BattleScarManager::Handle const &);
BattleScarManager::Object *BattleScarInternal::handleToObjPtr(BattleScarManager::Handle const &handle) // 0x558AE5
{
    mangled_assert("?handleToObjPtr@BattleScarInternal@@YGPAVObject@BattleScarManager@@ABUHandle@3@@Z");
    todo("implement");
    BattleScarManager::Object * __result = _sub_558AE5(handle);
    return __result;
}

/* ---------- private code */
#endif
