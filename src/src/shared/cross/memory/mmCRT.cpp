#if 0
/* ---------- headers */

#include "decomp.h"
#include <.h>
#include <Memory\mmCRT.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern long _mmstrncmp(char const *str1, char const *str2, unsigned long n);
extern char const *_mmstrchr(char const *s, __int32 c);

/* ---------- globals */

extern __int32 useless; // 0x1000B270

/* ---------- private variables */

/* ---------- public code */

_extern long _sub_10003160(char const *, char const *, unsigned long);
long _mmstrncmp(char const *str1, char const *str2, unsigned long n) // 0x10003160
{
    mangled_assert("?_mmstrncmp@@YGJPBD0K@Z");
    todo("implement");
    long __result = _sub_10003160(str1, str2, n);
    return __result;
}

_extern char const *_sub_10003130(char const *, __int32);
char const *_mmstrchr(char const *s, __int32 c) // 0x10003130
{
    mangled_assert("?_mmstrchr@@YGPBDPBDH@Z");
    todo("implement");
    char const * __result = _sub_10003130(s, c);
    return __result;
}

/* ---------- private code */
#endif
