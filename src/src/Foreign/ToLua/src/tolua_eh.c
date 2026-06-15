#if 0
/* ---------- headers */

#include "decomp.h"
#include "src\Src\Foreign\ToLua\src\tolua.h"
#include <memory\memorylib.h>
#include <malloc.h>
#include <crtdefs.h>
#include <sal.h>
#include <concurrencysal.h>
#include <vadefs.h>
#include <swprintf.inl>
#include "src\Src\Foreign\ToLua\src\tolua_eh.h"
#include <stdlib.h>
#include <limits.h>
#include "src\Src\Foreign\ToLua\src\tolua_rg.h"
#include <stdio.h>
#include <string.h>
#include <memory.h>
#include <lua.h>
#include <stddef.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void toluaI_eh_set(lua_State *L, __int32 narg, char const *provided, char const *expected);
extern void tolua_error(lua_State *L, char *msg);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

void toluaI_eh_set(lua_State *L, __int32 narg, char const *provided, char const *expected) // 0x6FAFEF
{
    mangled_assert("_toluaI_eh_set@16");
    todo("implement");
}

void tolua_error(lua_State *L, char *msg) // 0x6FB047
{
    mangled_assert("_tolua_error@8");
    todo("implement");
}

/* ---------- private code */
#endif
