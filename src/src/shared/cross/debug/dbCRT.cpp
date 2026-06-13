#if 0
/* ---------- headers */

#include "decomp.h"
#include <.h>
#include <Debug\dbCRT.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern char const *dbstrrchr(char const *str, char t);
extern void dbModuleName(char *module, char const *fullpath);
extern void dbTrimTrailing(char *str);
extern void *dbMalloc(unsigned __int32 s);
extern void dbFree(void *p);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern char const *_sub_10001BE3(char const *, char);
char const *dbstrrchr(char const *str, char t) // 0x10001BE3
{
    mangled_assert("?dbstrrchr@@YGPBDPBDD@Z");
    todo("implement");
    char const * __result = _sub_10001BE3(str, t);
    return __result;
}

_extern void _sub_10001B55(char *, char const *);
void dbModuleName(char *module, char const *fullpath) // 0x10001B55
{
    mangled_assert("?dbModuleName@@YGXQADPBD@Z");
    todo("implement");
    _sub_10001B55(module, fullpath);
}

_extern void _sub_10001BB2(char *);
void dbTrimTrailing(char *str) // 0x10001BB2
{
    mangled_assert("?dbTrimTrailing@@YGXPAD@Z");
    todo("implement");
    _sub_10001BB2(str);
}

_extern void *_sub_10001B3C(unsigned __int32);
void *dbMalloc(unsigned __int32 s) // 0x10001B3C
{
    mangled_assert("?dbMalloc@@YGPAXI@Z");
    todo("implement");
    void * __result = _sub_10001B3C(s);
    return __result;
}

_extern void _sub_10001B23(void *);
void dbFree(void *p) // 0x10001B23
{
    mangled_assert("?dbFree@@YGXPAX@Z");
    todo("implement");
    _sub_10001B23(p);
}

/* ---------- private code */
#endif
