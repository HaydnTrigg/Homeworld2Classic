#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <luaconfig\luaconfig.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <platform\namedinterface.h>
#include <platform\platformexports.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <Mathlib\vector3.h>
#include <stack>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <debug\debug.h>
#include <debug\filter.h>
#include <util\colour.h>
#include <Interface.h>
#include <consoleInput.h>
#include <scripting.h>
#include <App\AppObj.h>
#include <scriptaccess.h>
#include <platform\appinterface.h>
#include <scripttypedef.h>
#include <lua.h>

/* ---------- constants */

/* ---------- definitions */

typedef bool (*DebugConsoleCB)(char *);

/* ---------- prototypes */

extern char *coninPreprocess(char *string);
extern bool coninInputCB(char *string);
extern bool coninStartup();
extern bool coninShutdown();

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

char *coninPreprocess(char *string) // 0x5E9E4A
{
    mangled_assert("?coninPreprocess@@YGPADPAD@Z");
    todo("implement");
}

bool coninInputCB(char *string) // 0x5E9E1A
{
    mangled_assert("?coninInputCB@@YG_NPAD@Z");
    todo("implement");
}

bool coninStartup() // 0x5E9F5A
{
    mangled_assert("?coninStartup@@YG_NXZ");
    todo("implement");
}

bool coninShutdown() // 0x5E9F3E
{
    mangled_assert("?coninShutdown@@YG_NXZ");
    todo("implement");
}

/* ---------- private code */
#endif
