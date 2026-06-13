#if 0
/* ---------- headers */

#include "decomp.h"
#include <Debug\dbExt.h>
#include <.h>
#include <Debug\db.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void dbSetWarningToTracefAux(bool state);
extern void dbSetWarningID();

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern char const artist[8][255]; // 0x10003148
    extern char const design[5][255]; // 0x10003940
}

/* ---------- public code */

_extern void _sub_10001081(bool);
void dbSetWarningToTracefAux(bool state) // 0x10001081
{
    mangled_assert("?dbSetWarningToTracefAux@@YGX_N@Z");
    todo("implement");
    _sub_10001081(state);
}

_extern void _sub_10001000();
void dbSetWarningID() // 0x10001000
{
    mangled_assert("?dbSetWarningID@@YGXXZ");
    todo("implement");
    _sub_10001000();
}

/* ---------- private code */
#endif
