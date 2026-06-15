#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <Platform\pch.h>
#include <Platform\PathString.h>
#include <new>
#include <xstddef>
#include <util\types.h>
#include <type_traits>
#include <xutility>
#include <iosfwd>
#include <vector>
#include <list>
#include <debug\debug.h>
#include <debug\filter.h>
#include <Platform\NamedInterface.h>
#include <Platform\SharedLibrary.h>
#include <Platform\sharedlibraryinterface.h>
#include <Platform\osdef.h>
#include <Platform\platformexports.h>

/* ---------- constants */

/* ---------- definitions */

typedef unsigned __int32 osLibraryTypeID;
typedef void *osLibraryHandle;
typedef __int32 (*osLibraryProc)();
typedef std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > PathVector;
typedef bool (*SetupFunctionTable)(void *);
typedef unsigned __int32 (*GetLibraryID_p)();
typedef std::list<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > searchPathList;
typedef std::_List_node<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,void *> *_Nodeptr;
typedef std::_List_node<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,void *> _Node;
typedef std::_List_node<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,void *> *&_Nodepref;
typedef std::_Wrap_alloc<std::allocator<std::_List_node<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,void *> > > _Alnod_type;
typedef std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::_Iterator_base0> _Unchecked_const_iterator;
typedef std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > _Unchecked_iterator;
typedef std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > allocator_type;

/* ---------- prototypes */

extern _inline void loadSharedLibrarySearchPath();
extern void eraseSharedLibrarySearchPath();
extern void addtoSharedLibrarySearchPath(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &path);
extern std::list<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > const &getSharedLibrarySearchPath();
extern void *loadSharedLibraryHelper(char const *libraryName);

_static char const *dbgWindowsErrorString();
_static bool libExists(char const *fileName);

/* ---------- globals */

extern SharedLibraryImpl *SharedLibraryImpl::s_instance; // 0x10010DB8

/* ---------- private variables */

_static
{
    extern std::list<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > searchPath; // 0x10010DBC
    extern char const *k_InterfaceName; // 0x10010580
    extern char const *SETUPFUNCTIONTABLE_NAME; // 0x10010584
    extern char const *GETLIBRARYID_NAME; // 0x10010588
}

/* ---------- public code */

SharedLibraryInterface *SharedLibraryInterface::i() // 0x100075C1
{
    mangled_assert("?i@SharedLibraryInterface@@SGPAV1@XZ");
    todo("implement");
}

bool SharedLibraryImpl::startup() // 0x10007800
{
    mangled_assert("?startup@SharedLibraryImpl@@SG_NXZ");
    todo("implement");
}

bool SharedLibraryImpl::shutdown() // 0x100077D3
{
    mangled_assert("?shutdown@SharedLibraryImpl@@SG_NXZ");
    todo("implement");
}

SharedLibraryImpl *SharedLibraryImpl::i() // 0x100075BB
{
    mangled_assert("?i@SharedLibraryImpl@@SGPAV1@XZ");
    todo("implement");
}

SharedLibraryImpl::SharedLibraryImpl() // 0x10007188
{
    mangled_assert("??0SharedLibraryImpl@@IAE@XZ");
    todo("implement");
}

_inline std::_List_buy<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >::~_List_buy<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >() // 0x1000719A
{
    mangled_assert("??1?$_List_buy@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline PathString::~PathString() // 0x100071B5
{
    mangled_assert("??1PathString@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

SharedLibraryImpl::~SharedLibraryImpl() // 0x100071C8
{
    mangled_assert("??1SharedLibraryImpl@@MAE@XZ");
    todo("implement");
}

_inline void loadSharedLibrarySearchPath() // 0x100077AA
{
    mangled_assert("?loadSharedLibrarySearchPath@@YGXXZ");
    todo("implement");
}

void eraseSharedLibrarySearchPath() // 0x100074DE
{
    mangled_assert("?eraseSharedLibrarySearchPath@@YGXXZ");
    todo("implement");
}

void addtoSharedLibrarySearchPath(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &path) // 0x10007347
{
    mangled_assert("?addtoSharedLibrarySearchPath@@YGXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

std::list<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > const &getSharedLibrarySearchPath() // 0x100075B5
{
    mangled_assert("?getSharedLibrarySearchPath@@YGABV?$list@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ");
    todo("implement");
}

void *loadSharedLibraryHelper(char const *libraryName) // 0x100076B5
{
    mangled_assert("?loadSharedLibraryHelper@@YGPAXPBD@Z");
    todo("implement");
}

void *SharedLibraryImpl::loadSharedLibrary(char const *) // 0x100076B0
{
    mangled_assert("?loadSharedLibrary@SharedLibraryImpl@@UAEPAXPBD@Z");
    todo("implement");
}

bool SharedLibraryImpl::freeSharedLibrary(void *) // 0x10007562
{
    mangled_assert("?freeSharedLibrary@SharedLibraryImpl@@UAE_NPAX@Z");
    todo("implement");
}

void *SharedLibraryImpl::loadAndSetupSharedLibrary(char const *, void *, unsigned __int32) // 0x10007637
{
    mangled_assert("?loadAndSetupSharedLibrary@SharedLibraryImpl@@UAEPAXPBDPAXI@Z");
    todo("implement");
}

unsigned __int32 SharedLibraryImpl::getSharedLibraryID(void *) // 0x10007590
{
    mangled_assert("?getSharedLibraryID@SharedLibraryImpl@@AAEIPAX@Z");
    todo("implement");
}

__int32 (*SharedLibraryImpl::getSharedLibraryFunctionAddress(void *, char const *, bool))() // 0x1000757F
{
    mangled_assert("?getSharedLibraryFunctionAddress@SharedLibraryImpl@@UAEP6GHXZPAXPBD_N@Z");
    todo("implement");
}

bool SharedLibraryImpl::findSharedLibrary(char const *) // 0x100074E8
{
    mangled_assert("?findSharedLibrary@SharedLibraryImpl@@UAE_NPBD@Z");
    todo("implement");
}

/* ---------- private code */

_static char const *dbgWindowsErrorString() // 0x10007480
{
    mangled_assert("dbgWindowsErrorString");
    todo("implement");
}

_static bool libExists(char const *fileName) // 0x100075CB
{
    mangled_assert("libExists");
    todo("implement");
}
#endif
