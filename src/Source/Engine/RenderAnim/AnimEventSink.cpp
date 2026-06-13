#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <xfunctional>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <RenderAnim\AnimEventSink.h>
#include <string>
#include <algorithm>

/* ---------- constants */

/* ---------- definitions */

struct `anonymous-namespace'::EqualVariableName :
    public std::binary_function<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,char const *,bool>
{
    bool operator()(std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > const &, char const *) const;
};
static_assert(sizeof(`anonymous-namespace'::EqualVariableName) == 1, "Invalid `anonymous-namespace'::EqualVariableName size");

typedef `anonymous-namespace'::EqualVariableName ?A0x494330bb::EqualVariableName;
typedef std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > VarPair;

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_514E51(AnimEventSink *const);
AnimEventSink::~AnimEventSink() // 0x514E51
{
    mangled_assert("??1AnimEventSink@@UAE@XZ");
    todo("implement");
    _sub_514E51(this);
}

_extern void _sub_515290(AnimEventSink *const, char const *, char const *);
void AnimEventSink::setVariable(char const *, char const *) // 0x515290
{
    mangled_assert("?setVariable@AnimEventSink@@QAEXPBD0@Z");
    todo("implement");
    _sub_515290(this, arg, arg);
}

_extern char const *_sub_5151C9(AnimEventSink const *const, char const *);
char const *AnimEventSink::getVariable(char const *) const // 0x5151C9
{
    mangled_assert("?getVariable@AnimEventSink@@QBEPBDPBD@Z");
    todo("implement");
    char const * __result = _sub_5151C9(this, arg);
    return __result;
}

_extern std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > _sub_515187(AnimEventSink *const, char const *);
std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > AnimEventSink::findVariable(char const *) // 0x515187
{
    mangled_assert("?findVariable@AnimEventSink@@AAE?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@std@@@std@@@std@@PBD@Z");
    todo("implement");
    std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > __result = _sub_515187(this, arg);
    return __result;
}

_extern std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > _sub_5151A8(AnimEventSink const *const, char const *);
std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > AnimEventSink::findVariable(char const *) const // 0x5151A8
{
    mangled_assert("?findVariable@AnimEventSink@@ABE?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@std@@@std@@@std@@PBD@Z");
    todo("implement");
    std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > __result = _sub_5151A8(this, arg);
    return __result;
}

/* ---------- private code */
#endif
