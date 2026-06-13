#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <Platform\pch.h>
#include <new>
#include <xstddef>
#include <util\types.h>
#include <type_traits>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <Platform\PathString.h>

/* ---------- constants */

/* ---------- definitions */

typedef std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > PathVectorCI;
typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > PathVectorI;
typedef std::random_access_iterator_tag iterator_category;
typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > iterator_type;

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern char const possibleSeparators[3]; // 0x1000BC94
    extern char const pathSeparator[2]; // 0x1000BC98
    extern char const pathCurrent[2]; // 0x1000BC9C
    extern char const pathPrevious[3]; // 0x1000BCA0
}

/* ---------- public code */

_extern _sub_1000589D(PathString *const);
PathString::PathString() // 0x1000589D
{
    mangled_assert("??0PathString@@QAE@XZ");
    todo("implement");
    _sub_1000589D(this);
}

_extern _sub_100057BA(PathString *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
PathString::PathString(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x100057BA
{
    mangled_assert("??0PathString@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    _sub_100057BA(this, arg);
}

_extern _sub_10005820(PathString *const, char const *);
PathString::PathString(char const *) // 0x10005820
{
    mangled_assert("??0PathString@@QAE@PBD@Z");
    todo("implement");
    _sub_10005820(this, arg);
}

_extern void _sub_10005F12(PathString *const, PathString &, PathString const &);
void PathString::assign(PathString &, PathString const &) // 0x10005F12
{
    mangled_assert("?assign@PathString@@AAEXAAV1@ABV1@@Z");
    todo("implement");
    _sub_10005F12(this, arg, arg);
}

_extern _sub_10005771(PathString *const, PathString const &);
PathString::PathString(PathString const &) // 0x10005771
{
    mangled_assert("??0PathString@@QAE@ABV0@@Z");
    todo("implement");
    _sub_10005771(this, arg);
}

_extern PathString &_sub_10005911(PathString *const, PathString const &);
PathString &PathString::operator=(PathString const &) // 0x10005911
{
    mangled_assert("??4PathString@@QAEAAV0@ABV0@@Z");
    todo("implement");
    PathString & __result = _sub_10005911(this, arg);
    return __result;
}

_extern std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > _sub_10006964(PathString *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > PathString::split(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x10006964
{
    mangled_assert("?split@PathString@@AAE?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z");
    todo("implement");
    std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > __result = _sub_10006964(this, arg);
    return __result;
}

_extern void _sub_1000691A(PathString *const, char const *);
void PathString::setFile(char const *) // 0x1000691A
{
    mangled_assert("?setFile@PathString@@QAEXPBD@Z");
    todo("implement");
    _sub_1000691A(this, arg);
}

_extern void _sub_100068C7(PathString *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
void PathString::setFile(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x100068C7
{
    mangled_assert("?setFile@PathString@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    _sub_100068C7(this, arg);
}

_extern std::basic_string<char,std::char_traits<char>,std::allocator<char> > _sub_1000626D(PathString const *const);
std::basic_string<char,std::char_traits<char>,std::allocator<char> > PathString::getFile() const // 0x1000626D
{
    mangled_assert("?getFile@PathString@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
    todo("implement");
    std::string __result = _sub_1000626D(this);
    return __result;
}

_extern void _sub_10005D42(PathString *const, char const *);
void PathString::addDir(char const *) // 0x10005D42
{
    mangled_assert("?addDir@PathString@@QAEXPBD@Z");
    todo("implement");
    _sub_10005D42(this, arg);
}

_extern void _sub_10005CF0(PathString *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
void PathString::addDir(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x10005CF0
{
    mangled_assert("?addDir@PathString@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    _sub_10005CF0(this, arg);
}

_extern void _sub_10005CE5(PathString *const);
void PathString::addCurrentDir() // 0x10005CE5
{
    mangled_assert("?addCurrentDir@PathString@@QAEXXZ");
    todo("implement");
    _sub_10005CE5(this);
}

_extern void _sub_10005D80(PathString *const);
void PathString::addPreviousDir() // 0x10005D80
{
    mangled_assert("?addPreviousDir@PathString@@QAEXXZ");
    todo("implement");
    _sub_10005D80(this);
}

_extern std::basic_string<char,std::char_traits<char>,std::allocator<char> > _sub_100062B8(PathString *const);
std::basic_string<char,std::char_traits<char>,std::allocator<char> > PathString::popDir() // 0x100062B8
{
    mangled_assert("?popDir@PathString@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
    todo("implement");
    std::string __result = _sub_100062B8(this);
    return __result;
}

_extern __int32 _sub_10006288(PathString const *const);
__int32 PathString::getNumDir() const // 0x10006288
{
    mangled_assert("?getNumDir@PathString@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_10006288(this);
    return __result;
}

_extern void _sub_1000600E(PathString *const);
void PathString::clear() // 0x1000600E
{
    mangled_assert("?clear@PathString@@QAEXXZ");
    todo("implement");
    _sub_1000600E(this);
}

_extern void _sub_1000601E(PathString *const);
void PathString::clearDir() // 0x1000601E
{
    mangled_assert("?clearDir@PathString@@QAEXXZ");
    todo("implement");
    _sub_1000601E(this);
}

_extern void _sub_10006023(PathString *const);
void PathString::clearFile() // 0x10006023
{
    mangled_assert("?clearFile@PathString@@QAEXXZ");
    todo("implement");
    _sub_10006023(this);
}

_extern std::basic_string<char,std::char_traits<char>,std::allocator<char> > _sub_10006AAF(PathString const *const);
std::basic_string<char,std::char_traits<char>,std::allocator<char> > PathString::str() const // 0x10006AAF
{
    mangled_assert("?str@PathString@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
    todo("implement");
    std::string __result = _sub_10006AAF(this);
    return __result;
}

_extern char const *_sub_10005FA2(PathString const *const);
char const *PathString::c_str() const // 0x10005FA2
{
    mangled_assert("?c_str@PathString@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_10005FA2(this);
    return __result;
}

_extern std::basic_string<char,std::char_traits<char>,std::allocator<char> > _sub_1000607C(PathString const *const);
std::basic_string<char,std::char_traits<char>,std::allocator<char> > PathString::dir_str() const // 0x1000607C
{
    mangled_assert("?dir_str@PathString@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
    todo("implement");
    std::string __result = _sub_1000607C(this);
    return __result;
}

/* ---------- private code */
#endif
