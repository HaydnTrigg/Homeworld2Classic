#if 0
/* ---------- headers */

#include "decomp.h"
#include <Debug\dbCRT.h>
#include <Debug\dbdefines.h>
#include <.h>
#include <Debug\dbAddrLRU.h>
#include <Debug\db.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void dbAddrLRUSetup();
extern bool dbAddrLRUConvertAddress(long const codeAddress, char *codeModl, char *codeFunc, char *codeFile, unsigned long &codeLine);
extern void dbAddrLRUAddAddress(long const codeAddress, char const *codeModl, char const *codeFunc, char const *codeFile, unsigned long codeLine);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_10001B22();
void dbAddrLRUSetup() // 0x10001B22
{
    mangled_assert("?dbAddrLRUSetup@@YGXXZ");
    todo("implement");
    _sub_10001B22();
}

_extern bool _sub_10001B1D(long const, char *, char *, char *, unsigned long &);
bool dbAddrLRUConvertAddress(long const codeAddress, char *codeModl, char *codeFunc, char *codeFile, unsigned long &codeLine) // 0x10001B1D
{
    mangled_assert("?dbAddrLRUConvertAddress@@YG_NJQAD00AAK@Z");
    todo("implement");
    bool __result = _sub_10001B1D(codeAddress, codeModl, codeFunc, codeFile, codeLine);
    return __result;
}

_extern void _sub_10001B1A(long const, char const *, char const *, char const *, unsigned long);
void dbAddrLRUAddAddress(long const codeAddress, char const *codeModl, char const *codeFunc, char const *codeFile, unsigned long codeLine) // 0x10001B1A
{
    mangled_assert("?dbAddrLRUAddAddress@@YGXJPBD00K@Z");
    todo("implement");
    _sub_10001B1A(codeAddress, codeModl, codeFunc, codeFile, codeLine);
}

/* ---------- private code */
#endif
