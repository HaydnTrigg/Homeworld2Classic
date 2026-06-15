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

char const *dbstrrchr(char const *str, char t) // 0x10001BE3
{
    mangled_assert("?dbstrrchr@@YGPBDPBDD@Z");
    todo("implement");
}

void dbModuleName(char *module, char const *fullpath) // 0x10001B55
{
    mangled_assert("?dbModuleName@@YGXQADPBD@Z");
    todo("implement");
}

void dbTrimTrailing(char *str) // 0x10001BB2
{
    mangled_assert("?dbTrimTrailing@@YGXPAD@Z");
    todo("implement");
}

void *dbMalloc(unsigned __int32 s) // 0x10001B3C
{
    mangled_assert("?dbMalloc@@YGPAXI@Z");
    todo("implement");
}

void dbFree(void *p) // 0x10001B23
{
    mangled_assert("?dbFree@@YGXPAX@Z");
    todo("implement");
}

/* ---------- private code */
#endif
