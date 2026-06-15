#if 0
/* ---------- headers */

#include "decomp.h"
#include <sys\types.h>
#include <sys\stat.h>
#include <xstring>
#include <xmemory0>
#include <Platform\pch.h>
#include <crtdefs.h>
#include <pshpack4.h>
#include <new>
#include <xstddef>
#include <util\types.h>
#include <type_traits>
#include <sys\stat.inl>
#include <iosfwd>
#include <direct.h>
#include <Platform\NamedInterface.h>
#include <poppack.h>
#include <wininet.h>
#include <Platform\SystemUtility.h>
#include <Platform\sysutilinterface.h>
#include <Platform\platformexports.h>

/* ---------- constants */

/* ---------- definitions */

typedef unsigned short INTERNET_PORT;
typedef URL_COMPONENTSA *LPURL_COMPONENTSA;
typedef URL_COMPONENTSA URL_COMPONENTS;
typedef char _Elem;
typedef char value_type;

/* ---------- prototypes */

/* ---------- globals */

extern SysUtilImpl *SysUtilImpl::s_instance; // 0x10010ED4

/* ---------- private variables */

_static
{
    extern char const *k_InterfaceName; // 0x10010630
}

/* ---------- public code */

_inline SysUtilImpl::SysUtilImpl() // 0x100086D1
{
    mangled_assert("??0SysUtilImpl@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline SysUtilImpl::~SysUtilImpl() // 0x100086DA
{
    mangled_assert("??1SysUtilImpl@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

SysUtilInterface *SysUtilInterface::i() // 0x10008743
{
    mangled_assert("?i@SysUtilInterface@@SGPAV1@XZ");
    todo("implement");
}

bool SysUtilImpl::startup() // 0x100087E7
{
    mangled_assert("?startup@SysUtilImpl@@SG_NXZ");
    todo("implement");
}

bool SysUtilImpl::shutdown() // 0x100087B4
{
    mangled_assert("?shutdown@SysUtilImpl@@SG_NXZ");
    todo("implement");
}

SysUtilImpl *SysUtilImpl::i() // 0x1000873D
{
    mangled_assert("?i@SysUtilImpl@@SGPAV1@XZ");
    todo("implement");
}

void SysUtilImpl::shutdownMessagePost(__int32) // 0x100087E1
{
    mangled_assert("?shutdownMessagePost@SysUtilImpl@@UAEXH@Z");
    todo("implement");
}

unsigned __int32 SysUtilImpl::getFileTimeStamp(char const *) const // 0x10008717
{
    mangled_assert("?getFileTimeStamp@SysUtilImpl@@UBEIPBD@Z");
    todo("implement");
}

bool SysUtilImpl::internetCrackURL(char const *, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &) const // 0x10008749
{
    mangled_assert("?internetCrackURL@SysUtilImpl@@UBE_NPBDAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z");
    todo("implement");
}

bool SysUtilImpl::getExeFilename(char *, unsigned __int32) const // 0x100086FE
{
    mangled_assert("?getExeFilename@SysUtilImpl@@UBE_NPADI@Z");
    todo("implement");
}

/* ---------- private code */
#endif
