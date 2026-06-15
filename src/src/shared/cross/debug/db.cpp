#if 0
/* ---------- headers */

#include "decomp.h"
#include <Debug\dbAddrLRU.h>
#include <crtdefs.h>
#include <string.h>
#include <float.h>
#include <crtwrn.h>
#include <Debug\dbExt.h>
#include <Debug\dbCRT.h>
#include <Debug\dbSymbols.h>
#include <.h>
#include <Debug\db.h>

/* ---------- constants */

/* ---------- definitions */

struct `anonymous-namespace'::dbWarnCB
{
    unsigned long id; // 0x0
    void (*cb)(char const **, unsigned __int32, unsigned long); // 0x4
};
static_assert(sizeof(`anonymous-namespace'::dbWarnCB) == 8, "Invalid `anonymous-namespace'::dbWarnCB size");

typedef void (*dbStringOutputCB)(char const **, unsigned __int32, unsigned long);
typedef __int32 (*PFNISDEBUGGERPRESENT)();
typedef `anonymous-namespace'::dbWarnCB ?A0x64e34612::dbWarnCB;

/* ---------- prototypes */

extern void dbOutputHandlerAdd(void (*outputCB)(char const **, unsigned __int32, unsigned long));
extern void dbOutputHandlerRmv(void (*outputCB)(char const **, unsigned __int32, unsigned long));
extern void dbTraceHandlerAdd(void (*outputCB)(char const **, unsigned __int32, unsigned long));
extern void dbTraceHandlerRmv(void (*outputCB)(char const **, unsigned __int32, unsigned long));
extern void dbWarningHandlerAdd(unsigned long id, void (*outputCB)(char const **, unsigned __int32, unsigned long));
extern void dbWarningHandlerRmv(unsigned long id, void (*outputCB)(char const **, unsigned __int32, unsigned long));
extern void dbSilentErrors(bool bSilent);
extern void dbTracefAux(char const *format, ...);
extern void dbTracefAuxNS(char const *format, ...);
extern void dbTracefAuxExpr(bool expr, char const *format, ...);
extern void dbWarningfAux(unsigned long id, char const *format, ...);
extern void dbWarningfAuxExpr(bool expr, unsigned long id, char const *format, ...);
extern void dbFatalfAux(char const *format, ...);
extern void dbFatalfAuxExpr(bool expr, char const *format, ...);
extern bool dbConvertAddress(long const codeAddress, char *codeModl, char *codeFunc, char *codeFile, unsigned long &codeLine);
extern bool dbConvertAddress(long const codeAddress, char *buf, unsigned __int32 buflen);
extern bool dbDoStackTrace(long *FuncAddrArray, long maxDepth, long numSkip);
extern bool dbDoStackTrace(long *FuncAddrArray, long maxDepth, long numSkip, _EXCEPTION_POINTERS const *data);
extern bool dbSaveMiniDump(char const *filename, _EXCEPTION_POINTERS const *data);
extern bool dbIsDebuggerPresent();
extern void dbPrintStackTrace(dbTraceObj const &traceObj, char const *header);

_static void dbPrintInternal(char const **strArray, unsigned __int32 strCount);
_static void dbTraceInternal(char const **strArray, unsigned __int32 strCount);
_static void dbFormatf(char *dst, unsigned __int32 dstlen, char const *format, char *vl);

/* ---------- globals */

extern bool g_silentErrors; // 0x10005020
extern bool g_useTracef; // 0x10005021
extern unsigned long g_warningID; // 0x10005024
extern char const *g_dbFilename; // 0x100050C8
extern unsigned long g_dbLineNum; // 0x100050CC

/* ---------- private variables */

_static
{
    extern void (*s_dbStringOutputCB[10])(char const **, unsigned __int32, unsigned long); // 0x10005028
    extern void (*s_dbTraceStringOutputCB[10])(char const **, unsigned __int32, unsigned long); // 0x10005050
}

/* ---------- public code */

void dbOutputHandlerAdd(void (*outputCB)(char const **, unsigned __int32, unsigned long)) // 0x1000170D
{
    mangled_assert("?dbOutputHandlerAdd@@YGXP6GXQAPBDIK@Z@Z");
    todo("implement");
}

void dbOutputHandlerRmv(void (*outputCB)(char const **, unsigned __int32, unsigned long)) // 0x1000174E
{
    mangled_assert("?dbOutputHandlerRmv@@YGXP6GXQAPBDIK@Z@Z");
    todo("implement");
}

void dbTraceHandlerAdd(void (*outputCB)(char const **, unsigned __int32, unsigned long)) // 0x1000186B
{
    mangled_assert("?dbTraceHandlerAdd@@YGXP6GXQAPBDIK@Z@Z");
    todo("implement");
}

void dbTraceHandlerRmv(void (*outputCB)(char const **, unsigned __int32, unsigned long)) // 0x100018AC
{
    mangled_assert("?dbTraceHandlerRmv@@YGXP6GXQAPBDIK@Z@Z");
    todo("implement");
}

void dbWarningHandlerAdd(unsigned long id, void (*outputCB)(char const **, unsigned __int32, unsigned long)) // 0x100019A0
{
    mangled_assert("?dbWarningHandlerAdd@@YGXKP6GXQAPBDIK@Z@Z");
    todo("implement");
}

void dbWarningHandlerRmv(unsigned long id, void (*outputCB)(char const **, unsigned __int32, unsigned long)) // 0x100019F3
{
    mangled_assert("?dbWarningHandlerRmv@@YGXKP6GXQAPBDIK@Z@Z");
    todo("implement");
}

void dbSilentErrors(bool bSilent) // 0x1000185C
{
    mangled_assert("?dbSilentErrors@@YGX_N@Z");
    todo("implement");
}

void dbTracefAux(char const *format, ...) // 0x10001903
{
    mangled_assert("?dbTracefAux@@YAXPBDZZ");
    todo("implement");
}

void dbTracefAuxNS(char const *format, ...) // 0x10001970
{
    mangled_assert("?dbTracefAuxNS@@YAXPBDZZ");
    todo("implement");
}

void dbTracefAuxExpr(bool expr, char const *format, ...) // 0x1000193A
{
    mangled_assert("?dbTracefAuxExpr@@YAX_NPBDZZ");
    todo("implement");
}

void dbWarningfAux(unsigned long id, char const *format, ...) // 0x10001A35
{
    mangled_assert("?dbWarningfAux@@YAXKPBDZZ");
    todo("implement");
}

void dbWarningfAuxExpr(bool expr, unsigned long id, char const *format, ...) // 0x10001AE0
{
    mangled_assert("?dbWarningfAuxExpr@@YAX_NKPBDZZ");
    todo("implement");
}

void dbFatalfAux(char const *format, ...) // 0x100014CE
{
    mangled_assert("?dbFatalfAux@@YAXPBDZZ");
    todo("implement");
}

void dbFatalfAuxExpr(bool expr, char const *format, ...) // 0x10001651
{
    mangled_assert("?dbFatalfAuxExpr@@YAX_NPBDZZ");
    todo("implement");
}

bool dbConvertAddress(long const codeAddress, char *codeModl, char *codeFunc, char *codeFile, unsigned long &codeLine) // 0x10001391
{
    mangled_assert("?dbConvertAddress@@YG_NJQAD00AAK@Z");
    todo("implement");
}

bool dbConvertAddress(long const codeAddress, char *buf, unsigned __int32 buflen) // 0x100012F7
{
    mangled_assert("?dbConvertAddress@@YG_NJPADI@Z");
    todo("implement");
}

bool dbDoStackTrace(long *FuncAddrArray, long maxDepth, long numSkip) // 0x10001417
{
    mangled_assert("?dbDoStackTrace@@YG_NPAJJJ@Z");
    todo("implement");
}

bool dbDoStackTrace(long *FuncAddrArray, long maxDepth, long numSkip, _EXCEPTION_POINTERS const *data) // 0x10001471
{
    mangled_assert("?dbDoStackTrace@@YG_NPAJJJPBU_EXCEPTION_POINTERS@@@Z");
    todo("implement");
}

bool dbSaveMiniDump(char const *filename, _EXCEPTION_POINTERS const *data) // 0x1000184E
{
    mangled_assert("?dbSaveMiniDump@@YG_NPBDPBU_EXCEPTION_POINTERS@@@Z");
    todo("implement");
}

bool dbIsDebuggerPresent() // 0x100016AF
{
    mangled_assert("?dbIsDebuggerPresent@@YG_NXZ");
    todo("implement");
}

dbTraceObj::dbTraceObj() // 0x10001109
{
    mangled_assert("??0dbTraceObj@@QAE@XZ");
    todo("implement");
}

dbTraceObj::dbTraceObj(dbTraceObj const &) // 0x100010C9
{
    mangled_assert("??0dbTraceObj@@QAE@ABV0@@Z");
    todo("implement");
}

dbTraceObj::~dbTraceObj() // 0x1000113F
{
    mangled_assert("??1dbTraceObj@@QAE@XZ");
    todo("implement");
}

dbTraceObj &dbTraceObj::operator=(dbTraceObj const &) // 0x10001144
{
    mangled_assert("??4dbTraceObj@@QAEAAV0@ABV0@@Z");
    todo("implement");
}

bool dbTraceObj::operator==(dbTraceObj const &) const // 0x10001171
{
    mangled_assert("??8dbTraceObj@@QBE_NABV0@@Z");
    todo("implement");
}

void dbTraceObj::Release() // 0x100012A1
{
    mangled_assert("?Release@dbTraceObj@@AAEXXZ");
    todo("implement");
}

char const *dbTraceObj::FunctionAt(unsigned __int32) const // 0x100011A1
{
    mangled_assert("?FunctionAt@dbTraceObj@@QBEPBDI@Z");
    todo("implement");
}

unsigned __int32 dbTraceObj::Depth() const // 0x1000119E
{
    mangled_assert("?Depth@dbTraceObj@@QBEIXZ");
    todo("implement");
}

dbTraceObj dbTraceObj::GenerateTrace(unsigned __int32 numSkip) // 0x1000122B
{
    mangled_assert("?GenerateTrace@dbTraceObj@@SG?AV1@I@Z");
    todo("implement");
}

long const dbTraceObj::GetTraceAddress(unsigned __int32) const // 0x1000128B
{
    mangled_assert("?GetTraceAddress@dbTraceObj@@QBE?BJI@Z");
    todo("implement");
}

void dbPrintStackTrace(dbTraceObj const &traceObj, char const *header) // 0x100017F2
{
    mangled_assert("?dbPrintStackTrace@@YGXABVdbTraceObj@@PBD@Z");
    todo("implement");
}

/* ---------- private code */

_static void dbPrintInternal(char const **strArray, unsigned __int32 strCount) // 0x1000177C
{
    mangled_assert("dbPrintInternal");
    todo("implement");
}

_static void dbTraceInternal(char const **strArray, unsigned __int32 strCount) // 0x100018DA
{
    mangled_assert("dbTraceInternal");
    todo("implement");
}

_static void dbFormatf(char *dst, unsigned __int32 dstlen, char const *format, char *vl) // 0x10001687
{
    mangled_assert("dbFormatf");
    todo("implement");
}
#endif
