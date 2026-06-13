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

_extern void _sub_1000170D(void (*)(char const **, unsigned __int32, unsigned long));
void dbOutputHandlerAdd(void (*outputCB)(char const **, unsigned __int32, unsigned long)) // 0x1000170D
{
    mangled_assert("?dbOutputHandlerAdd@@YGXP6GXQAPBDIK@Z@Z");
    todo("implement");
    _sub_1000170D(outputCB);
}

_extern void _sub_1000174E(void (*)(char const **, unsigned __int32, unsigned long));
void dbOutputHandlerRmv(void (*outputCB)(char const **, unsigned __int32, unsigned long)) // 0x1000174E
{
    mangled_assert("?dbOutputHandlerRmv@@YGXP6GXQAPBDIK@Z@Z");
    todo("implement");
    _sub_1000174E(outputCB);
}

_extern void _sub_1000186B(void (*)(char const **, unsigned __int32, unsigned long));
void dbTraceHandlerAdd(void (*outputCB)(char const **, unsigned __int32, unsigned long)) // 0x1000186B
{
    mangled_assert("?dbTraceHandlerAdd@@YGXP6GXQAPBDIK@Z@Z");
    todo("implement");
    _sub_1000186B(outputCB);
}

_extern void _sub_100018AC(void (*)(char const **, unsigned __int32, unsigned long));
void dbTraceHandlerRmv(void (*outputCB)(char const **, unsigned __int32, unsigned long)) // 0x100018AC
{
    mangled_assert("?dbTraceHandlerRmv@@YGXP6GXQAPBDIK@Z@Z");
    todo("implement");
    _sub_100018AC(outputCB);
}

_extern void _sub_100019A0(unsigned long, void (*)(char const **, unsigned __int32, unsigned long));
void dbWarningHandlerAdd(unsigned long id, void (*outputCB)(char const **, unsigned __int32, unsigned long)) // 0x100019A0
{
    mangled_assert("?dbWarningHandlerAdd@@YGXKP6GXQAPBDIK@Z@Z");
    todo("implement");
    _sub_100019A0(id, outputCB);
}

_extern void _sub_100019F3(unsigned long, void (*)(char const **, unsigned __int32, unsigned long));
void dbWarningHandlerRmv(unsigned long id, void (*outputCB)(char const **, unsigned __int32, unsigned long)) // 0x100019F3
{
    mangled_assert("?dbWarningHandlerRmv@@YGXKP6GXQAPBDIK@Z@Z");
    todo("implement");
    _sub_100019F3(id, outputCB);
}

_extern void _sub_1000185C(bool);
void dbSilentErrors(bool bSilent) // 0x1000185C
{
    mangled_assert("?dbSilentErrors@@YGX_N@Z");
    todo("implement");
    _sub_1000185C(bSilent);
}

_extern void _sub_10001903(char const *, ...);
void dbTracefAux(char const *format, ...) // 0x10001903
{
    mangled_assert("?dbTracefAux@@YAXPBDZZ");
    todo("implement");
    _sub_10001903(format, strbuf);
}

_extern void _sub_10001970(char const *, ...);
void dbTracefAuxNS(char const *format, ...) // 0x10001970
{
    mangled_assert("?dbTracefAuxNS@@YAXPBDZZ");
    todo("implement");
    _sub_10001970(format, strbuf);
}

_extern void _sub_1000193A(bool, char const *, ...);
void dbTracefAuxExpr(bool expr, char const *format, ...) // 0x1000193A
{
    mangled_assert("?dbTracefAuxExpr@@YAX_NPBDZZ");
    todo("implement");
    _sub_1000193A(expr, format, strbuf);
}

_extern void _sub_10001A35(unsigned long, char const *, ...);
void dbWarningfAux(unsigned long id, char const *format, ...) // 0x10001A35
{
    mangled_assert("?dbWarningfAux@@YAXKPBDZZ");
    todo("implement");
    _sub_10001A35(id, format, strbuf);
}

_extern void _sub_10001AE0(bool, unsigned long, char const *, ...);
void dbWarningfAuxExpr(bool expr, unsigned long id, char const *format, ...) // 0x10001AE0
{
    mangled_assert("?dbWarningfAuxExpr@@YAX_NKPBDZZ");
    todo("implement");
    _sub_10001AE0(expr, id, format, strbuf);
}

_extern void _sub_100014CE(char const *, ...);
void dbFatalfAux(char const *format, ...) // 0x100014CE
{
    mangled_assert("?dbFatalfAux@@YAXPBDZZ");
    todo("implement");
    _sub_100014CE(format, message);
}

_extern void _sub_10001651(bool, char const *, ...);
void dbFatalfAuxExpr(bool expr, char const *format, ...) // 0x10001651
{
    mangled_assert("?dbFatalfAuxExpr@@YAX_NPBDZZ");
    todo("implement");
    _sub_10001651(expr, format, message);
}

_extern bool _sub_10001391(long const, char *, char *, char *, unsigned long &);
bool dbConvertAddress(long const codeAddress, char *codeModl, char *codeFunc, char *codeFile, unsigned long &codeLine) // 0x10001391
{
    mangled_assert("?dbConvertAddress@@YG_NJQAD00AAK@Z");
    todo("implement");
    bool __result = _sub_10001391(codeAddress, codeModl, codeFunc, codeFile, codeLine);
    return __result;
}

_extern bool _sub_100012F7(long const, char *, unsigned __int32);
bool dbConvertAddress(long const codeAddress, char *buf, unsigned __int32 buflen) // 0x100012F7
{
    mangled_assert("?dbConvertAddress@@YG_NJPADI@Z");
    todo("implement");
    bool __result = _sub_100012F7(codeAddress, buf, buflen);
    return __result;
}

_extern bool _sub_10001417(long *, long, long);
bool dbDoStackTrace(long *FuncAddrArray, long maxDepth, long numSkip) // 0x10001417
{
    mangled_assert("?dbDoStackTrace@@YG_NPAJJJ@Z");
    todo("implement");
    bool __result = _sub_10001417(FuncAddrArray, maxDepth, numSkip);
    return __result;
}

_extern bool _sub_10001471(long *, long, long, _EXCEPTION_POINTERS const *);
bool dbDoStackTrace(long *FuncAddrArray, long maxDepth, long numSkip, _EXCEPTION_POINTERS const *data) // 0x10001471
{
    mangled_assert("?dbDoStackTrace@@YG_NPAJJJPBU_EXCEPTION_POINTERS@@@Z");
    todo("implement");
    bool __result = _sub_10001471(FuncAddrArray, maxDepth, numSkip, data);
    return __result;
}

_extern bool _sub_1000184E(char const *, _EXCEPTION_POINTERS const *);
bool dbSaveMiniDump(char const *filename, _EXCEPTION_POINTERS const *data) // 0x1000184E
{
    mangled_assert("?dbSaveMiniDump@@YG_NPBDPBU_EXCEPTION_POINTERS@@@Z");
    todo("implement");
    bool __result = _sub_1000184E(filename, data);
    return __result;
}

_extern bool _sub_100016AF();
bool dbIsDebuggerPresent() // 0x100016AF
{
    mangled_assert("?dbIsDebuggerPresent@@YG_NXZ");
    todo("implement");
    bool __result = _sub_100016AF();
    return __result;
}

_extern _sub_10001109(dbTraceObj *const);
dbTraceObj::dbTraceObj() // 0x10001109
{
    mangled_assert("??0dbTraceObj@@QAE@XZ");
    todo("implement");
    _sub_10001109(this);
}

_extern _sub_100010C9(dbTraceObj *const, dbTraceObj const &);
dbTraceObj::dbTraceObj(dbTraceObj const &) // 0x100010C9
{
    mangled_assert("??0dbTraceObj@@QAE@ABV0@@Z");
    todo("implement");
    _sub_100010C9(this, arg);
}

_extern void _sub_1000113F(dbTraceObj *const);
dbTraceObj::~dbTraceObj() // 0x1000113F
{
    mangled_assert("??1dbTraceObj@@QAE@XZ");
    todo("implement");
    _sub_1000113F(this);
}

_extern dbTraceObj &_sub_10001144(dbTraceObj *const, dbTraceObj const &);
dbTraceObj &dbTraceObj::operator=(dbTraceObj const &) // 0x10001144
{
    mangled_assert("??4dbTraceObj@@QAEAAV0@ABV0@@Z");
    todo("implement");
    dbTraceObj & __result = _sub_10001144(this, arg);
    return __result;
}

_extern bool _sub_10001171(dbTraceObj const *const, dbTraceObj const &);
bool dbTraceObj::operator==(dbTraceObj const &) const // 0x10001171
{
    mangled_assert("??8dbTraceObj@@QBE_NABV0@@Z");
    todo("implement");
    bool __result = _sub_10001171(this, arg);
    return __result;
}

_extern void _sub_100012A1(dbTraceObj *const);
void dbTraceObj::Release() // 0x100012A1
{
    mangled_assert("?Release@dbTraceObj@@AAEXXZ");
    todo("implement");
    _sub_100012A1(this);
}

_extern char const *_sub_100011A1(dbTraceObj const *const, unsigned __int32);
char const *dbTraceObj::FunctionAt(unsigned __int32) const // 0x100011A1
{
    mangled_assert("?FunctionAt@dbTraceObj@@QBEPBDI@Z");
    todo("implement");
    char const * __result = _sub_100011A1(this, arg);
    return __result;
}

_extern unsigned __int32 _sub_1000119E(dbTraceObj const *const);
unsigned __int32 dbTraceObj::Depth() const // 0x1000119E
{
    mangled_assert("?Depth@dbTraceObj@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_1000119E(this);
    return __result;
}

_extern dbTraceObj _sub_1000122B(unsigned __int32);
dbTraceObj dbTraceObj::GenerateTrace(unsigned __int32 numSkip) // 0x1000122B
{
    mangled_assert("?GenerateTrace@dbTraceObj@@SG?AV1@I@Z");
    todo("implement");
    dbTraceObj __result = _sub_1000122B(numSkip);
    return __result;
}

_extern long const _sub_1000128B(dbTraceObj const *const, unsigned __int32);
long const dbTraceObj::GetTraceAddress(unsigned __int32) const // 0x1000128B
{
    mangled_assert("?GetTraceAddress@dbTraceObj@@QBE?BJI@Z");
    todo("implement");
    long const __result = _sub_1000128B(this, arg);
    return __result;
}

_extern void _sub_100017F2(dbTraceObj const &, char const *);
void dbPrintStackTrace(dbTraceObj const &traceObj, char const *header) // 0x100017F2
{
    mangled_assert("?dbPrintStackTrace@@YGXABVdbTraceObj@@PBD@Z");
    todo("implement");
    _sub_100017F2(traceObj, header);
}

/* ---------- private code */

_extern void _sub_1000177C(char const **, unsigned __int32);
_static void dbPrintInternal(char const **strArray, unsigned __int32 strCount) // 0x1000177C
{
    mangled_assert("dbPrintInternal");
    todo("implement");
    _sub_1000177C(strArray, strCount);
}

_extern void _sub_100018DA(char const **, unsigned __int32);
_static void dbTraceInternal(char const **strArray, unsigned __int32 strCount) // 0x100018DA
{
    mangled_assert("dbTraceInternal");
    todo("implement");
    _sub_100018DA(strArray, strCount);
}

_extern void _sub_10001687(char *, unsigned __int32, char const *, char *);
_static void dbFormatf(char *dst, unsigned __int32 dstlen, char const *format, char *vl) // 0x10001687
{
    mangled_assert("dbFormatf");
    todo("implement");
    _sub_10001687(dst, dstlen, format, vl);
}
#endif
