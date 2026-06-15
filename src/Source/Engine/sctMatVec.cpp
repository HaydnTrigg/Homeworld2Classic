#if 0
/* ---------- headers */

#include "decomp.h"
#include <xmemory0>
#include <pch.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <stack>
#include <map>
#include <xtree>
#include <Mathlib\vector2.h>
#include <util\colour.h>
#include <scripting.h>
#include <scriptaccess.h>
#include <scripttypedef.h>
#include <lua.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern bool sctIsVector2(unsigned __int32 paramnum);
extern bool sctIsVector3(unsigned __int32 paramnum);
extern bool sctIsVector4(unsigned __int32 paramnum);
extern bool sctIsColour(unsigned __int32 paramnum);
extern vector2 sctGetVector2(unsigned __int32 paramnum);
extern vector3 sctGetVector3(unsigned __int32 paramnum);
extern vector4 sctGetVector4(unsigned __int32 paramnum);
extern vector4 sctGetColour(unsigned __int32 paramnum);
extern void sctPutVector2(vector2 var);
extern void sctPutVector3(vector3 var);
extern void sctPutColour(vector4 var);
extern __int32 newVector2(lua_State *lstate);
extern __int32 getVector2Table(lua_State *lstate);
extern __int32 setVector2Table(lua_State *lstate);
extern __int32 addVector2(lua_State *lstate);
extern __int32 subVector2(lua_State *lstate);
extern __int32 mulVector2(lua_State *lstate);
extern __int32 collectGarbageVector2(lua_State *lstate);
extern __int32 newVector3(lua_State *lstate);
extern __int32 getVector3Table(lua_State *lstate);
extern __int32 setVector3Table(lua_State *lstate);
extern __int32 addVector3(lua_State *lstate);
extern __int32 subVector3(lua_State *lstate);
extern __int32 mulVector3(lua_State *lstate);
extern __int32 collectGarbageVector3(lua_State *lstate);
extern __int32 newColour(lua_State *lstate);
extern __int32 getColourTable(lua_State *lstate);
extern __int32 setColourTable(lua_State *lstate);
extern __int32 addColour(lua_State *lstate);
extern __int32 subColour(lua_State *lstate);
extern __int32 mulColour(lua_State *lstate);
extern __int32 collectGarbageColour(lua_State *lstate);
extern void smvInitialize();
extern void smvDenitialize();

_static __int32 setVector2(lua_State *lstate);
_static __int32 setVector3(lua_State *lstate);
_static __int32 setColour(lua_State *lstate);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

bool sctIsVector2(unsigned __int32 paramnum) // 0x4CB7AF
{
    mangled_assert("?sctIsVector2@@YG_NI@Z");
    todo("implement");
}

bool sctIsVector3(unsigned __int32 paramnum) // 0x4CB7E1
{
    mangled_assert("?sctIsVector3@@YG_NI@Z");
    todo("implement");
}

bool sctIsVector4(unsigned __int32 paramnum) // 0x4CB813
{
    mangled_assert("?sctIsVector4@@YG_NI@Z");
    todo("implement");
}

bool sctIsColour(unsigned __int32 paramnum) // 0x4CB77D
{
    mangled_assert("?sctIsColour@@YG_NI@Z");
    todo("implement");
}

vector2 sctGetVector2(unsigned __int32 paramnum) // 0x4CB3E0
{
    mangled_assert("?sctGetVector2@@YG?AVvector2@@I@Z");
    todo("implement");
}

vector3 sctGetVector3(unsigned __int32 paramnum) // 0x4CB4E9
{
    mangled_assert("?sctGetVector3@@YG?AVvector3@@I@Z");
    todo("implement");
}

vector4 sctGetVector4(unsigned __int32 paramnum) // 0x4CB618
{
    mangled_assert("?sctGetVector4@@YG?AVvector4@@I@Z");
    todo("implement");
}

vector4 sctGetColour(unsigned __int32 paramnum) // 0x4CB211
{
    mangled_assert("?sctGetColour@@YG?AVvector4@@I@Z");
    todo("implement");
}

void sctPutVector2(vector2 var) // 0x4CB948
{
    mangled_assert("?sctPutVector2@@YGXVvector2@@@Z");
    todo("implement");
}

void sctPutVector3(vector3 var) // 0x4CB9D9
{
    mangled_assert("?sctPutVector3@@YGXVvector3@@@Z");
    todo("implement");
}

void sctPutColour(vector4 var) // 0x4CB845
{
    mangled_assert("?sctPutColour@@YGXVvector4@@@Z");
    todo("implement");
}

__int32 newVector2(lua_State *lstate) // 0x4CB06D
{
    mangled_assert("?newVector2@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 getVector2Table(lua_State *lstate) // 0x4CAA06
{
    mangled_assert("?getVector2Table@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 setVector2Table(lua_State *lstate) // 0x4CBF4F
{
    mangled_assert("?setVector2Table@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 addVector2(lua_State *lstate) // 0x4CA668
{
    mangled_assert("?addVector2@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 subVector2(lua_State *lstate) // 0x4CCCED
{
    mangled_assert("?subVector2@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 mulVector2(lua_State *lstate) // 0x4CAD14
{
    mangled_assert("?mulVector2@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 collectGarbageVector2(lua_State *lstate) // 0x4CA815
{
    mangled_assert("?collectGarbageVector2@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 newVector3(lua_State *lstate) // 0x4CB12F
{
    mangled_assert("?newVector3@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 getVector3Table(lua_State *lstate) // 0x4CAACC
{
    mangled_assert("?getVector3Table@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 setVector3Table(lua_State *lstate) // 0x4CC1ED
{
    mangled_assert("?setVector3Table@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 addVector3(lua_State *lstate) // 0x4CA6EC
{
    mangled_assert("?addVector3@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 subVector3(lua_State *lstate) // 0x4CCD71
{
    mangled_assert("?subVector3@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 mulVector3(lua_State *lstate) // 0x4CAE18
{
    mangled_assert("?mulVector3@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 collectGarbageVector3(lua_State *lstate) // 0x4CA8A2
{
    mangled_assert("?collectGarbageVector3@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 newColour(lua_State *lstate) // 0x4CAF6B
{
    mangled_assert("?newColour@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 getColourTable(lua_State *lstate) // 0x4CA92F
{
    mangled_assert("?getColourTable@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 setColourTable(lua_State *lstate) // 0x4CBCC1
{
    mangled_assert("?setColourTable@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 addColour(lua_State *lstate) // 0x4CA5BC
{
    mangled_assert("?addColour@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 subColour(lua_State *lstate) // 0x4CCC41
{
    mangled_assert("?subColour@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 mulColour(lua_State *lstate) // 0x4CAB9C
{
    mangled_assert("?mulColour@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 collectGarbageColour(lua_State *lstate) // 0x4CA788
{
    mangled_assert("?collectGarbageColour@@YGHPAUlua_State@@@Z");
    todo("implement");
}

void smvInitialize() // 0x4CC334
{
    mangled_assert("?smvInitialize@@YGXXZ");
    todo("implement");
}

void smvDenitialize() // 0x4CC315
{
    mangled_assert("?smvDenitialize@@YGXXZ");
    todo("implement");
}

/* ---------- private code */

_static __int32 setVector2(lua_State *lstate) // 0x4CBDFD
{
    mangled_assert("setVector2");
    todo("implement");
}

_static __int32 setVector3(lua_State *lstate) // 0x4CC068
{
    mangled_assert("setVector3");
    todo("implement");
}

_static __int32 setColour(lua_State *lstate) // 0x4CBAA3
{
    mangled_assert("setColour");
    todo("implement");
}
#endif
