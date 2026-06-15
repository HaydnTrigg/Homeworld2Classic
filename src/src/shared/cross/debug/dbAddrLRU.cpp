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

void dbAddrLRUSetup() // 0x10001B22
{
    mangled_assert("?dbAddrLRUSetup@@YGXXZ");
    todo("implement");
}

bool dbAddrLRUConvertAddress(long const codeAddress, char *codeModl, char *codeFunc, char *codeFile, unsigned long &codeLine) // 0x10001B1D
{
    mangled_assert("?dbAddrLRUConvertAddress@@YG_NJQAD00AAK@Z");
    todo("implement");
}

void dbAddrLRUAddAddress(long const codeAddress, char const *codeModl, char const *codeFunc, char const *codeFile, unsigned long codeLine) // 0x10001B1A
{
    mangled_assert("?dbAddrLRUAddAddress@@YGXJPBD00K@Z");
    todo("implement");
}

/* ---------- private code */
#endif
