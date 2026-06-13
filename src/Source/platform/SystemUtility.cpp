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

_extern _sub_100086D1(SysUtilImpl *const);
_inline SysUtilImpl::SysUtilImpl() // 0x100086D1
{
    mangled_assert("??0SysUtilImpl@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_100086D1(this);
}

_extern void _sub_100086DA(SysUtilImpl *const);
_inline SysUtilImpl::~SysUtilImpl() // 0x100086DA
{
    mangled_assert("??1SysUtilImpl@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_100086DA(this);
}

_extern SysUtilInterface *_sub_10008743();
SysUtilInterface *SysUtilInterface::i() // 0x10008743
{
    mangled_assert("?i@SysUtilInterface@@SGPAV1@XZ");
    todo("implement");
    SysUtilInterface * __result = _sub_10008743();
    return __result;
}

_extern bool _sub_100087E7();
bool SysUtilImpl::startup() // 0x100087E7
{
    mangled_assert("?startup@SysUtilImpl@@SG_NXZ");
    todo("implement");
    bool __result = _sub_100087E7();
    return __result;
}

_extern bool _sub_100087B4();
bool SysUtilImpl::shutdown() // 0x100087B4
{
    mangled_assert("?shutdown@SysUtilImpl@@SG_NXZ");
    todo("implement");
    bool __result = _sub_100087B4();
    return __result;
}

_extern SysUtilImpl *_sub_1000873D();
SysUtilImpl *SysUtilImpl::i() // 0x1000873D
{
    mangled_assert("?i@SysUtilImpl@@SGPAV1@XZ");
    todo("implement");
    SysUtilImpl * __result = _sub_1000873D();
    return __result;
}

_extern void _sub_100087E1(SysUtilImpl *const, __int32);
void SysUtilImpl::shutdownMessagePost(__int32) // 0x100087E1
{
    mangled_assert("?shutdownMessagePost@SysUtilImpl@@UAEXH@Z");
    todo("implement");
    _sub_100087E1(this, arg);
}

_extern unsigned __int32 _sub_10008717(SysUtilImpl const *const, char const *);
unsigned __int32 SysUtilImpl::getFileTimeStamp(char const *) const // 0x10008717
{
    mangled_assert("?getFileTimeStamp@SysUtilImpl@@UBEIPBD@Z");
    todo("implement");
    unsigned __int32 __result = _sub_10008717(this, arg);
    return __result;
}

_extern bool _sub_10008749(SysUtilImpl const *const, char const *, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &);
bool SysUtilImpl::internetCrackURL(char const *, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &) const // 0x10008749
{
    mangled_assert("?internetCrackURL@SysUtilImpl@@UBE_NPBDAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z");
    todo("implement");
    bool __result = _sub_10008749(this, arg, arg, arg);
    return __result;
}

_extern bool _sub_100086FE(SysUtilImpl const *const, char *, unsigned __int32);
bool SysUtilImpl::getExeFilename(char *, unsigned __int32) const // 0x100086FE
{
    mangled_assert("?getExeFilename@SysUtilImpl@@UBE_NPADI@Z");
    todo("implement");
    bool __result = _sub_100086FE(this, arg, arg);
    return __result;
}

/* ---------- private code */
#endif
