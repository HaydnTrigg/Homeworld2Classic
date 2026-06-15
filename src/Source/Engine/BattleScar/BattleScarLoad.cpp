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
#include <fileio\filepath.h>
#include <type_traits>
#include <iosfwd>
#include <savegame.h>
#include <fileio\bytestream.h>
#include <task.h>
#include <fileio\fileioexports.h>
#include <stack>
#include <debug\ctassert.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <BattleScar\BattleScarPoint.h>
#include <Collision\primitivesfwd.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <Collision\Primitives\sphere.h>
#include <debug\db.h>
#include <util\colour.h>
#include <savegamedef.h>
#include <luaconfig\luaconfig.h>
#include <lua.h>
#include <BattleScar\BattleScarLoad.h>
#include <BattleScar\BattleScarManager.h>
#include <string>
#include <Decal\DecalManager.h>
#include <Decal\VertexPool.h>
#include <BattleScar\BattleScarTrail.h>

/* ---------- constants */

/* ---------- definitions */

struct `anonymous-namespace'::TypeInfo
{
    char const *name; // 0x0
    BattleScarManager::Type *(*creatorFunc)(char const *); // 0x4
};
static_assert(sizeof(`anonymous-namespace'::TypeInfo) == 8, "Invalid `anonymous-namespace'::TypeInfo size");

typedef `anonymous-namespace'::TypeInfo ?A0x59483ea9::TypeInfo;

/* ---------- prototypes */

extern BattleScarManager::Type *BattleScarLoad::load(char const *folderName, char const *fname);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

BattleScarManager::Type *BattleScarLoad::load(char const *folderName, char const *fname) // 0x558B19
{
    mangled_assert("?load@BattleScarLoad@@YGPAVType@BattleScarManager@@PBD0@Z");
    todo("implement");
}

/* ---------- private code */
#endif
