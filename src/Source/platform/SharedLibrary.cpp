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

_extern SharedLibraryInterface *_sub_100075C1();
SharedLibraryInterface *SharedLibraryInterface::i() // 0x100075C1
{
    mangled_assert("?i@SharedLibraryInterface@@SGPAV1@XZ");
    todo("implement");
    SharedLibraryInterface * __result = _sub_100075C1();
    return __result;
}

_extern bool _sub_10007800();
bool SharedLibraryImpl::startup() // 0x10007800
{
    mangled_assert("?startup@SharedLibraryImpl@@SG_NXZ");
    todo("implement");
    bool __result = _sub_10007800();
    return __result;
}

_extern bool _sub_100077D3();
bool SharedLibraryImpl::shutdown() // 0x100077D3
{
    mangled_assert("?shutdown@SharedLibraryImpl@@SG_NXZ");
    todo("implement");
    bool __result = _sub_100077D3();
    return __result;
}

_extern SharedLibraryImpl *_sub_100075BB();
SharedLibraryImpl *SharedLibraryImpl::i() // 0x100075BB
{
    mangled_assert("?i@SharedLibraryImpl@@SGPAV1@XZ");
    todo("implement");
    SharedLibraryImpl * __result = _sub_100075BB();
    return __result;
}

_extern _sub_10007188(SharedLibraryImpl *const);
SharedLibraryImpl::SharedLibraryImpl() // 0x10007188
{
    mangled_assert("??0SharedLibraryImpl@@IAE@XZ");
    todo("implement");
    _sub_10007188(this);
}

_extern void _sub_1000719A(std::_List_buy<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > *const);
_inline std::_List_buy<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >::~_List_buy<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >() // 0x1000719A
{
    mangled_assert("??1?$_List_buy@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1000719A(this);
}

_extern void _sub_100071B5(PathString *const);
_inline PathString::~PathString() // 0x100071B5
{
    mangled_assert("??1PathString@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_100071B5(this);
}

_extern void _sub_100071C8(SharedLibraryImpl *const);
SharedLibraryImpl::~SharedLibraryImpl() // 0x100071C8
{
    mangled_assert("??1SharedLibraryImpl@@MAE@XZ");
    todo("implement");
    _sub_100071C8(this);
}

_extern void _sub_100077AA();
_inline void loadSharedLibrarySearchPath() // 0x100077AA
{
    mangled_assert("?loadSharedLibrarySearchPath@@YGXXZ");
    todo("implement");
    _sub_100077AA();
}

_extern void _sub_100074DE();
void eraseSharedLibrarySearchPath() // 0x100074DE
{
    mangled_assert("?eraseSharedLibrarySearchPath@@YGXXZ");
    todo("implement");
    _sub_100074DE();
}

_extern void _sub_10007347(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
void addtoSharedLibrarySearchPath(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &path) // 0x10007347
{
    mangled_assert("?addtoSharedLibrarySearchPath@@YGXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    _sub_10007347(path);
}

_extern std::list<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > const &_sub_100075B5();
std::list<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > const &getSharedLibrarySearchPath() // 0x100075B5
{
    mangled_assert("?getSharedLibrarySearchPath@@YGABV?$list@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ");
    todo("implement");
    std::list<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > const & __result = _sub_100075B5();
    return __result;
}

_extern void *_sub_100076B5(char const *);
void *loadSharedLibraryHelper(char const *libraryName) // 0x100076B5
{
    mangled_assert("?loadSharedLibraryHelper@@YGPAXPBD@Z");
    todo("implement");
    void * __result = _sub_100076B5(libraryName);
    return __result;
}

_extern void *_sub_100076B0(SharedLibraryImpl *const, char const *);
void *SharedLibraryImpl::loadSharedLibrary(char const *) // 0x100076B0
{
    mangled_assert("?loadSharedLibrary@SharedLibraryImpl@@UAEPAXPBD@Z");
    todo("implement");
    void * __result = _sub_100076B0(this, arg);
    return __result;
}

_extern bool _sub_10007562(SharedLibraryImpl *const, void *);
bool SharedLibraryImpl::freeSharedLibrary(void *) // 0x10007562
{
    mangled_assert("?freeSharedLibrary@SharedLibraryImpl@@UAE_NPAX@Z");
    todo("implement");
    bool __result = _sub_10007562(this, arg);
    return __result;
}

_extern void *_sub_10007637(SharedLibraryImpl *const, char const *, void *, unsigned __int32);
void *SharedLibraryImpl::loadAndSetupSharedLibrary(char const *, void *, unsigned __int32) // 0x10007637
{
    mangled_assert("?loadAndSetupSharedLibrary@SharedLibraryImpl@@UAEPAXPBDPAXI@Z");
    todo("implement");
    void * __result = _sub_10007637(this, arg, arg, arg);
    return __result;
}

_extern unsigned __int32 _sub_10007590(SharedLibraryImpl *const, void *);
unsigned __int32 SharedLibraryImpl::getSharedLibraryID(void *) // 0x10007590
{
    mangled_assert("?getSharedLibraryID@SharedLibraryImpl@@AAEIPAX@Z");
    todo("implement");
    unsigned __int32 __result = _sub_10007590(this, arg);
    return __result;
}

_extern __int32 (*_sub_1000757F(SharedLibraryImpl *const, void *, char const *, bool))();
__int32 (*SharedLibraryImpl::getSharedLibraryFunctionAddress(void *, char const *, bool))() // 0x1000757F
{
    mangled_assert("?getSharedLibraryFunctionAddress@SharedLibraryImpl@@UAEP6GHXZPAXPBD_N@Z");
    todo("implement");
    __int32 (*)() __result = _sub_1000757F(this, arg, arg, arg);
    return __result;
}

_extern bool _sub_100074E8(SharedLibraryImpl *const, char const *);
bool SharedLibraryImpl::findSharedLibrary(char const *) // 0x100074E8
{
    mangled_assert("?findSharedLibrary@SharedLibraryImpl@@UAE_NPBD@Z");
    todo("implement");
    bool __result = _sub_100074E8(this, arg);
    return __result;
}

/* ---------- private code */

_extern char const *_sub_10007480();
_static char const *dbgWindowsErrorString() // 0x10007480
{
    mangled_assert("dbgWindowsErrorString");
    todo("implement");
    char const * __result = _sub_10007480();
    return __result;
}

_extern bool _sub_100075CB(char const *);
_static bool libExists(char const *fileName) // 0x100075CB
{
    mangled_assert("libExists");
    todo("implement");
    bool __result = _sub_100075CB(fileName);
    return __result;
}
#endif
