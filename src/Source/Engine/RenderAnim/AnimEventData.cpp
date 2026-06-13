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
#include <xtree>
#include <RenderAnim\AnimEventData.h>
#include <util\dictionary.h>
#include <util\utilexports.h>
#include <algorithm>

/* ---------- constants */

/* ---------- definitions */

struct `anonymous-namespace'::EqualParamName :
    public std::binary_function<AnimEventData::Param,unsigned long,bool>
{
    bool operator()(AnimEventData::Param const &, unsigned long) const;
};
static_assert(sizeof(`anonymous-namespace'::EqualParamName) == 1, "Invalid `anonymous-namespace'::EqualParamName size");

typedef `anonymous-namespace'::EqualParamName ?A0x3032e450::EqualParamName;

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern Dictionary g_nameDictionary; // 0x844730
    extern Dictionary g_valueDictionary; // 0x84473C
}

/* ---------- public code */

_extern _sub_513AA2(AnimEventData *const);
AnimEventData::AnimEventData() // 0x513AA2
{
    mangled_assert("??0AnimEventData@@QAE@XZ");
    todo("implement");
    _sub_513AA2(this);
}

_extern void _sub_513AE3(std::_Tree_buy<std::pair<unsigned long const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<unsigned long const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > *const);
_inline std::_Tree_buy<std::pair<unsigned long const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<unsigned long const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >::~_Tree_buy<std::pair<unsigned long const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<unsigned long const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >() // 0x513AE3
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBKV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@V?$allocator@U?$pair@$$CBKV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_513AE3(this);
}

_extern void _sub_513AEC(std::_Tree_comp<0,std::_Tmap_traits<unsigned long,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<unsigned long>,std::allocator<std::pair<unsigned long const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,0> > *const);
_inline std::_Tree_comp<0,std::_Tmap_traits<unsigned long,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<unsigned long>,std::allocator<std::pair<unsigned long const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,0> >::~_Tree_comp<0,std::_Tmap_traits<unsigned long,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<unsigned long>,std::allocator<std::pair<unsigned long const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,0> >() // 0x513AEC
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@KV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_513AEC(this);
}

_extern void _sub_513AF5(std::map<unsigned long,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<unsigned long>,std::allocator<std::pair<unsigned long const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > *const);
_inline std::map<unsigned long,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<unsigned long>,std::allocator<std::pair<unsigned long const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >::~map<unsigned long,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<unsigned long>,std::allocator<std::pair<unsigned long const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >() // 0x513AF5
{
    mangled_assert("??1?$map@KV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_513AF5(this);
}

_extern void _sub_513AFA(std::pair<unsigned long const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > *const);
_inline std::pair<unsigned long const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > >::~pair<unsigned long const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > >() // 0x513AFA
{
    mangled_assert("??1?$pair@$$CBKV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_513AFA(this);
}

_extern void _sub_513B02(AnimEventData *const);
AnimEventData::~AnimEventData() // 0x513B02
{
    mangled_assert("??1AnimEventData@@QAE@XZ");
    todo("implement");
    _sub_513B02(this);
}

_extern void _sub_513B15(Dictionary *const);
_inline Dictionary::~Dictionary() // 0x513B15
{
    mangled_assert("??1Dictionary@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_513B15(this);
}

_extern void _sub_514413(AnimEventData *const, char const *);
void AnimEventData::setName(char const *) // 0x514413
{
    mangled_assert("?setName@AnimEventData@@QAEXPBD@Z");
    todo("implement");
    _sub_514413(this, arg);
}

_extern void _sub_513EAE(AnimEventData *const, char const *, char const *);
void AnimEventData::addParam(char const *, char const *) // 0x513EAE
{
    mangled_assert("?addParam@AnimEventData@@QAEXPBD0@Z");
    todo("implement");
    _sub_513EAE(this, arg, arg);
}

_extern void _sub_5143A2(AnimEventData *const, char const *);
void AnimEventData::removeParam(char const *) // 0x5143A2
{
    mangled_assert("?removeParam@AnimEventData@@QAEXPBD@Z");
    todo("implement");
    _sub_5143A2(this, arg);
}

_extern void _sub_513F01(AnimEventData *const, char const *, char const *);
void AnimEventData::changeParam(char const *, char const *) // 0x513F01
{
    mangled_assert("?changeParam@AnimEventData@@QAEXPBD0@Z");
    todo("implement");
    _sub_513F01(this, arg, arg);
}

_extern char const *_sub_514284(AnimEventData const *const, char const *);
char const *AnimEventData::findParam(char const *) const // 0x514284
{
    mangled_assert("?findParam@AnimEventData@@QBEPBDPBD@Z");
    todo("implement");
    char const * __result = _sub_514284(this, arg);
    return __result;
}

_extern __int32 _sub_5142C5(AnimEventData const *const, char const *);
__int32 AnimEventData::findParamIndex(char const *) const // 0x5142C5
{
    mangled_assert("?findParamIndex@AnimEventData@@QBEHPBD@Z");
    todo("implement");
    __int32 __result = _sub_5142C5(this, arg);
    return __result;
}

_extern void _sub_513F84(AnimEventData *const);
void AnimEventData::clearParams() // 0x513F84
{
    mangled_assert("?clearParams@AnimEventData@@QAEXXZ");
    todo("implement");
    _sub_513F84(this);
}

_extern unsigned __int32 _sub_5142FF(AnimEventData const *const);
unsigned __int32 AnimEventData::getParamCount() const // 0x5142FF
{
    mangled_assert("?getParamCount@AnimEventData@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_5142FF(this);
    return __result;
}

_extern char const *_sub_514309(AnimEventData const *const, unsigned __int32);
char const *AnimEventData::getParamName(unsigned __int32) const // 0x514309
{
    mangled_assert("?getParamName@AnimEventData@@QBEPBDI@Z");
    todo("implement");
    char const * __result = _sub_514309(this, arg);
    return __result;
}

_extern char const *_sub_514321(AnimEventData const *const, unsigned __int32);
char const *AnimEventData::getParamValue(unsigned __int32) const // 0x514321
{
    mangled_assert("?getParamValue@AnimEventData@@QBEPBDI@Z");
    todo("implement");
    char const * __result = _sub_514321(this, arg);
    return __result;
}

_extern void _sub_51440B(AnimEventData *const, unsigned __int32);
void AnimEventData::reserveParams(unsigned __int32) // 0x51440B
{
    mangled_assert("?reserveParams@AnimEventData@@QAEXI@Z");
    todo("implement");
    _sub_51440B(this, arg);
}

/* ---------- private code */
#endif
