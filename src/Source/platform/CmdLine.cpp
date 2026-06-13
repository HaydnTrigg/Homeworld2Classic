#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <Platform\pch.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <iosfwd>
#include <Platform\CmdLine.h>
#include <Platform\platformexports.h>

/* ---------- constants */

enum
{
    CMD_NoFail = -2,
    CMD_ERROR = -1,
    CMD_Okay = 0,
};

/* ---------- definitions */

struct CmdArg
{
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > key; // 0x0
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > value; // 0x18
    unsigned __int32 crc; // 0x30
    CmdArg(CmdArg const &); /* compiler_generated() */
    _inline CmdArg();
    _inline ~CmdArg(); /* compiler_generated() */
    CmdArg &operator=(CmdArg const &); /* compiler_generated() */
};
static_assert(sizeof(CmdArg) == 52, "Invalid CmdArg size");

struct CmdWorkspace
{
    CmdArg **cmdData; // 0x0
    __int32 cmdCount; // 0x4
    _inline CmdWorkspace();
    _inline ~CmdWorkspace();
    _inline void ParseCmdFile(char const *);
    _inline __int32 AddCmd(CmdArg *);
};
static_assert(sizeof(CmdWorkspace) == 8, "Invalid CmdWorkspace size");

/* ---------- prototypes */

extern bool CmdLine::Setup(__int32 argc, char **argv);
extern bool CmdLine::Setup(char const *sCmdLine);
extern bool CmdLine::Shutdown();
extern bool CmdLine::Exist(char const *key);
extern bool CmdLine::Get(char const *key, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &buf);
extern bool CmdLine::Get(char const *key, char *out, unsigned __int32 len);
extern bool CmdLine::Get(char const *key, __int32 &val);
extern bool CmdLine::Get(char const *key, float &val);
extern bool CmdLine::Get(char const *key, bool &val);
extern void CmdLine::GetEntireString(char *out, unsigned __int32 outLen);

_static unsigned __int32 CRC_CalcLower(unsigned char const *data, __int32 dataLen);
_static CmdWorkspace *GetCmdWS();
_static CmdArg *LocateArg(char const *key);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern unsigned __int32 CRC_Bank[256]; // 0x10010000
    extern CmdWorkspace *g_CmdWS; // 0x10010760
}

/* ---------- public code */

_extern _sub_100010BA(CmdArg *const);
_inline CmdArg::CmdArg() // 0x100010BA
{
    mangled_assert("??0CmdArg@@QAE@XZ");
    todo("implement");
    _sub_100010BA(this);
}

_extern _sub_10001118(CmdWorkspace *const);
_inline CmdWorkspace::CmdWorkspace() // 0x10001118
{
    mangled_assert("??0CmdWorkspace@@QAE@XZ");
    todo("implement");
    _sub_10001118(this);
}

_extern void _sub_10001143(CmdArg *const);
_inline CmdArg::~CmdArg() // 0x10001143
{
    mangled_assert("??1CmdArg@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10001143(this);
}

_extern void _sub_10001156(CmdWorkspace *const);
_inline CmdWorkspace::~CmdWorkspace() // 0x10001156
{
    mangled_assert("??1CmdWorkspace@@QAE@XZ");
    todo("implement");
    _sub_10001156(this);
}

_extern void _sub_10001726(CmdWorkspace *const, char const *);
_inline void CmdWorkspace::ParseCmdFile(char const *) // 0x10001726
{
    mangled_assert("?ParseCmdFile@CmdWorkspace@@QAEXPBD@Z");
    todo("implement");
    _sub_10001726(this, arg);
}

_extern __int32 _sub_10001215(CmdWorkspace *const, CmdArg *);
_inline __int32 CmdWorkspace::AddCmd(CmdArg *) // 0x10001215
{
    mangled_assert("?AddCmd@CmdWorkspace@@QAEHPAUCmdArg@@@Z");
    todo("implement");
    __int32 __result = _sub_10001215(this, arg);
    return __result;
}

_extern bool _sub_10001A08(__int32, char **);
bool CmdLine::Setup(__int32 argc, char **argv) // 0x10001A08
{
    mangled_assert("?Setup@CmdLine@@YG_NHQAPAD@Z");
    todo("implement");
    bool __result = _sub_10001A08(argc, argv);
    return __result;
}

_extern bool _sub_10001B0C(char const *);
bool CmdLine::Setup(char const *sCmdLine) // 0x10001B0C
{
    mangled_assert("?Setup@CmdLine@@YG_NPBD@Z");
    todo("implement");
    bool __result = _sub_10001B0C(sCmdLine);
    return __result;
}

_extern bool _sub_10001B11();
bool CmdLine::Shutdown() // 0x10001B11
{
    mangled_assert("?Shutdown@CmdLine@@YG_NXZ");
    todo("implement");
    bool __result = _sub_10001B11();
    return __result;
}

_extern bool _sub_10001383(char const *);
bool CmdLine::Exist(char const *key) // 0x10001383
{
    mangled_assert("?Exist@CmdLine@@YG_NPBD@Z");
    todo("implement");
    bool __result = _sub_10001383(key);
    return __result;
}

_extern bool _sub_10001472(char const *, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &);
bool CmdLine::Get(char const *key, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &buf) // 0x10001472
{
    mangled_assert("?Get@CmdLine@@YG_NPBDAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    bool __result = _sub_10001472(key, buf);
    return __result;
}

_extern bool _sub_1000159F(char const *, char *, unsigned __int32);
bool CmdLine::Get(char const *key, char *out, unsigned __int32 len) // 0x1000159F
{
    mangled_assert("?Get@CmdLine@@YG_NPBDPADI@Z");
    todo("implement");
    bool __result = _sub_1000159F(key, out, len);
    return __result;
}

_extern bool _sub_10001394(char const *, __int32 &);
bool CmdLine::Get(char const *key, __int32 &val) // 0x10001394
{
    mangled_assert("?Get@CmdLine@@YG_NPBDAAH@Z");
    todo("implement");
    bool __result = _sub_10001394(key, val);
    return __result;
}

_extern bool _sub_10001403(char const *, float &);
bool CmdLine::Get(char const *key, float &val) // 0x10001403
{
    mangled_assert("?Get@CmdLine@@YG_NPBDAAM@Z");
    todo("implement");
    bool __result = _sub_10001403(key, val);
    return __result;
}

_extern bool _sub_100014B6(char const *, bool &);
bool CmdLine::Get(char const *key, bool &val) // 0x100014B6
{
    mangled_assert("?Get@CmdLine@@YG_NPBDAA_N@Z");
    todo("implement");
    bool __result = _sub_100014B6(key, val);
    return __result;
}

_extern void _sub_10001617(char *, unsigned __int32);
void CmdLine::GetEntireString(char *out, unsigned __int32 outLen) // 0x10001617
{
    mangled_assert("?GetEntireString@CmdLine@@YGXPADI@Z");
    todo("implement");
    _sub_10001617(out, outLen);
}

/* ---------- private code */

_extern unsigned __int32 _sub_10001349(unsigned char const *, __int32);
_static unsigned __int32 CRC_CalcLower(unsigned char const *data, __int32 dataLen) // 0x10001349
{
    mangled_assert("CRC_CalcLower");
    todo("implement");
    unsigned __int32 __result = _sub_10001349(data, dataLen);
    return __result;
}

_extern CmdWorkspace *_sub_100015F1();
_static CmdWorkspace *GetCmdWS() // 0x100015F1
{
    mangled_assert("GetCmdWS");
    todo("implement");
    CmdWorkspace * __result = _sub_100015F1();
    return __result;
}

_extern CmdArg *_sub_100016AA(char const *);
_static CmdArg *LocateArg(char const *key) // 0x100016AA
{
    mangled_assert("LocateArg");
    todo("implement");
    CmdArg * __result = _sub_100016AA(key);
    return __result;
}
#endif
