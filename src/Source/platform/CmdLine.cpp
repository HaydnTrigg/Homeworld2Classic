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

_inline CmdArg::CmdArg() // 0x100010BA
{
    mangled_assert("??0CmdArg@@QAE@XZ");
    todo("implement");
}

_inline CmdWorkspace::CmdWorkspace() // 0x10001118
{
    mangled_assert("??0CmdWorkspace@@QAE@XZ");
    todo("implement");
}

_inline CmdArg::~CmdArg() // 0x10001143
{
    mangled_assert("??1CmdArg@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline CmdWorkspace::~CmdWorkspace() // 0x10001156
{
    mangled_assert("??1CmdWorkspace@@QAE@XZ");
    todo("implement");
}

_inline void CmdWorkspace::ParseCmdFile(char const *) // 0x10001726
{
    mangled_assert("?ParseCmdFile@CmdWorkspace@@QAEXPBD@Z");
    todo("implement");
}

_inline __int32 CmdWorkspace::AddCmd(CmdArg *) // 0x10001215
{
    mangled_assert("?AddCmd@CmdWorkspace@@QAEHPAUCmdArg@@@Z");
    todo("implement");
}

bool CmdLine::Setup(__int32 argc, char **argv) // 0x10001A08
{
    mangled_assert("?Setup@CmdLine@@YG_NHQAPAD@Z");
    todo("implement");
}

bool CmdLine::Setup(char const *sCmdLine) // 0x10001B0C
{
    mangled_assert("?Setup@CmdLine@@YG_NPBD@Z");
    todo("implement");
}

bool CmdLine::Shutdown() // 0x10001B11
{
    mangled_assert("?Shutdown@CmdLine@@YG_NXZ");
    todo("implement");
}

bool CmdLine::Exist(char const *key) // 0x10001383
{
    mangled_assert("?Exist@CmdLine@@YG_NPBD@Z");
    todo("implement");
}

bool CmdLine::Get(char const *key, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &buf) // 0x10001472
{
    mangled_assert("?Get@CmdLine@@YG_NPBDAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

bool CmdLine::Get(char const *key, char *out, unsigned __int32 len) // 0x1000159F
{
    mangled_assert("?Get@CmdLine@@YG_NPBDPADI@Z");
    todo("implement");
}

bool CmdLine::Get(char const *key, __int32 &val) // 0x10001394
{
    mangled_assert("?Get@CmdLine@@YG_NPBDAAH@Z");
    todo("implement");
}

bool CmdLine::Get(char const *key, float &val) // 0x10001403
{
    mangled_assert("?Get@CmdLine@@YG_NPBDAAM@Z");
    todo("implement");
}

bool CmdLine::Get(char const *key, bool &val) // 0x100014B6
{
    mangled_assert("?Get@CmdLine@@YG_NPBDAA_N@Z");
    todo("implement");
}

void CmdLine::GetEntireString(char *out, unsigned __int32 outLen) // 0x10001617
{
    mangled_assert("?GetEntireString@CmdLine@@YGXPADI@Z");
    todo("implement");
}

/* ---------- private code */

_static unsigned __int32 CRC_CalcLower(unsigned char const *data, __int32 dataLen) // 0x10001349
{
    mangled_assert("CRC_CalcLower");
    todo("implement");
}

_static CmdWorkspace *GetCmdWS() // 0x100015F1
{
    mangled_assert("GetCmdWS");
    todo("implement");
}

_static CmdArg *LocateArg(char const *key) // 0x100016AA
{
    mangled_assert("LocateArg");
    todo("implement");
}
#endif
