#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <Mathlib\matrix3.h>
#include <sobstatic.h>
#include <new>
#include <Collision\Primitives\sphere.h>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <profile\profile.h>
#include <iostream>
#include <list>
#include <Collision\Primitives\obb.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <debug\db.h>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <boost\shared_ptr.hpp>
#include <App\Hw2Identify.h>
#include <wchar.h>
#include <algorithm>

/* ---------- constants */

/* ---------- definitions */

typedef std::vector<Family,std::allocator<Family> > FamilyList_;
typedef std::map<unsigned int,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SobStatic *>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SobStatic *> > > > SobMap;
typedef std::map<unsigned int,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > ResearchMap;
typedef std::vector<probabilityInfo,std::allocator<probabilityInfo> > probabilityList;
typedef std::vector<ChatterEvent *,std::allocator<ChatterEvent *> > ChatterEventList;
typedef std::vector<fstring<260>,std::allocator<fstring<260> > > FoundFiles;
typedef std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,int> > > indexMap;

/* ---------- prototypes */

/* ---------- globals */

extern Hw2Identify *Hw2Identify::s_instance; // 0x8443D4

/* ---------- private variables */

/* ---------- public code */

_extern _sub_4FE729(Hw2Identify *const);
_inline Hw2Identify::Hw2Identify() // 0x4FE729
{
    mangled_assert("??0Hw2Identify@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4FE729(this);
}

_extern void _sub_4FE7BD(std::_Tree_buy<std::pair<unsigned int const ,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SobStatic *> >,std::allocator<std::pair<unsigned int const ,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SobStatic *> > > > *const);
_inline std::_Tree_buy<std::pair<unsigned int const ,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SobStatic *> >,std::allocator<std::pair<unsigned int const ,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SobStatic *> > > >::~_Tree_buy<std::pair<unsigned int const ,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SobStatic *> >,std::allocator<std::pair<unsigned int const ,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SobStatic *> > > >() // 0x4FE7BD
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBIU?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVSobStatic@@@std@@@std@@V?$allocator@U?$pair@$$CBIU?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVSobStatic@@@std@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4FE7BD(this);
}

_extern void _sub_4FE7C6(std::_Tree_buy<std::pair<unsigned int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<unsigned int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > *const);
_inline std::_Tree_buy<std::pair<unsigned int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<unsigned int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >::~_Tree_buy<std::pair<unsigned int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<unsigned int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >() // 0x4FE7C6
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBIV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@V?$allocator@U?$pair@$$CBIV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4FE7C6(this);
}

_extern void _sub_4FE7CF(std::_Tree_comp<0,std::_Tmap_traits<unsigned int,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SobStatic *>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SobStatic *> > >,0> > *const);
_inline std::_Tree_comp<0,std::_Tmap_traits<unsigned int,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SobStatic *>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SobStatic *> > >,0> >::~_Tree_comp<0,std::_Tmap_traits<unsigned int,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SobStatic *>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SobStatic *> > >,0> >() // 0x4FE7CF
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@IU?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVSobStatic@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIU?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVSobStatic@@@std@@@std@@@2@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4FE7CF(this);
}

_extern void _sub_4FE7D8(std::_Tree_comp<0,std::_Tmap_traits<unsigned int,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,0> > *const);
_inline std::_Tree_comp<0,std::_Tmap_traits<unsigned int,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,0> >::~_Tree_comp<0,std::_Tmap_traits<unsigned int,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,0> >() // 0x4FE7D8
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@IV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4FE7D8(this);
}

_extern void _sub_4FE7E1(std::map<unsigned int,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SobStatic *>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SobStatic *> > > > *const);
_inline std::map<unsigned int,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SobStatic *>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SobStatic *> > > >::~map<unsigned int,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SobStatic *>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SobStatic *> > > >() // 0x4FE7E1
{
    mangled_assert("??1?$map@IU?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVSobStatic@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIU?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVSobStatic@@@std@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4FE7E1(this);
}

_extern void _sub_4FE7E6(std::map<unsigned int,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > *const);
_inline std::map<unsigned int,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >::~map<unsigned int,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >() // 0x4FE7E6
{
    mangled_assert("??1?$map@IV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4FE7E6(this);
}

_extern void _sub_4FE7EB(std::pair<unsigned int const ,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SobStatic *> > *const);
_inline std::pair<unsigned int const ,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SobStatic *> >::~pair<unsigned int const ,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SobStatic *> >() // 0x4FE7EB
{
    mangled_assert("??1?$pair@$$CBIU?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVSobStatic@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4FE7EB(this);
}

_extern void _sub_4FE7F3(std::pair<unsigned int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > *const);
_inline std::pair<unsigned int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > >::~pair<unsigned int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > >() // 0x4FE7F3
{
    mangled_assert("??1?$pair@$$CBIV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4FE7F3(this);
}

_extern void _sub_4FE7FB(std::pair<unsigned int,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SobStatic *> > *const);
_inline std::pair<unsigned int,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SobStatic *> >::~pair<unsigned int,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SobStatic *> >() // 0x4FE7FB
{
    mangled_assert("??1?$pair@IU?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVSobStatic@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4FE7FB(this);
}

_extern void _sub_4FE803(std::pair<unsigned int,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > *const);
_inline std::pair<unsigned int,std::basic_string<char,std::char_traits<char>,std::allocator<char> > >::~pair<unsigned int,std::basic_string<char,std::char_traits<char>,std::allocator<char> > >() // 0x4FE803
{
    mangled_assert("??1?$pair@IV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4FE803(this);
}

_extern void _sub_4FE80B(Hw2Identify *const);
_inline Hw2Identify::~Hw2Identify() // 0x4FE80B
{
    mangled_assert("??1Hw2Identify@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4FE80B(this);
}

_extern bool _sub_4FF1AE();
bool Hw2Identify::Initialize() // 0x4FF1AE
{
    mangled_assert("?Initialize@Hw2Identify@@SG_NXZ");
    todo("implement");
    bool __result = _sub_4FF1AE();
    return __result;
}

_extern bool _sub_4FF219();
bool Hw2Identify::Shutdown() // 0x4FF219
{
    mangled_assert("?Shutdown@Hw2Identify@@SG_NXZ");
    todo("implement");
    bool __result = _sub_4FF219();
    return __result;
}

_extern unsigned __int32 _sub_4FECBD(Hw2Identify *const, char const *, SobStatic *);
unsigned __int32 Hw2Identify::CreateSobEntry(char const *, SobStatic *) // 0x4FECBD
{
    mangled_assert("?CreateSobEntry@Hw2Identify@@QAEIPBDPAVSobStatic@@@Z");
    todo("implement");
    unsigned __int32 __result = _sub_4FECBD(this, arg, arg);
    return __result;
}

_extern void _sub_4FEBA6(Hw2Identify *const, char const *);
void Hw2Identify::CreateResearchEntry(char const *) // 0x4FEBA6
{
    mangled_assert("?CreateResearchEntry@Hw2Identify@@QAEXPBD@Z");
    todo("implement");
    _sub_4FEBA6(this, arg);
}

_extern unsigned __int32 _sub_4FEDF3(char const *);
unsigned __int32 Hw2Identify::GetHash(char const *string) // 0x4FEDF3
{
    mangled_assert("?GetHash@Hw2Identify@@CGIPBD@Z");
    todo("implement");
    unsigned __int32 __result = _sub_4FEDF3(string);
    return __result;
}

_extern unsigned __int32 _sub_4FEE78(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
unsigned __int32 Hw2Identify::GetResearchId(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name) // 0x4FEE78
{
    mangled_assert("?GetResearchId@Hw2Identify@@SGIABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    unsigned __int32 __result = _sub_4FEE78(name);
    return __result;
}

_extern unsigned __int32 _sub_4FEFDD(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
unsigned __int32 Hw2Identify::GetSobStaticId(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name) // 0x4FEFDD
{
    mangled_assert("?GetSobStaticId@Hw2Identify@@SGIABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    unsigned __int32 __result = _sub_4FEFDD(name);
    return __result;
}

_extern std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &_sub_4FEF8B(unsigned __int32);
std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &Hw2Identify::GetResearchName(unsigned __int32 id) // 0x4FEF8B
{
    mangled_assert("?GetResearchName@Hw2Identify@@SGABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@I@Z");
    todo("implement");
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > const & __result = _sub_4FEF8B(id);
    return __result;
}

_extern std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &_sub_4FF10C(unsigned __int32);
std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &Hw2Identify::GetSobStaticName(unsigned __int32 id) // 0x4FF10C
{
    mangled_assert("?GetSobStaticName@Hw2Identify@@SGABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@I@Z");
    todo("implement");
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > const & __result = _sub_4FF10C(id);
    return __result;
}

_extern bool _sub_4FF1EF(unsigned __int32);
bool Hw2Identify::ResearchIdExists(unsigned __int32 id) // 0x4FF1EF
{
    mangled_assert("?ResearchIdExists@Hw2Identify@@SG_NI@Z");
    todo("implement");
    bool __result = _sub_4FF1EF(id);
    return __result;
}

_extern bool _sub_4FF234(unsigned __int32);
bool Hw2Identify::SobStaticIdExists(unsigned __int32 id) // 0x4FF234
{
    mangled_assert("?SobStaticIdExists@Hw2Identify@@SG_NI@Z");
    todo("implement");
    bool __result = _sub_4FF234(id);
    return __result;
}

_extern SobStatic *_sub_4FF15C(unsigned __int32);
SobStatic *Hw2Identify::GetStatic(unsigned __int32 id) // 0x4FF15C
{
    mangled_assert("?GetStatic@Hw2Identify@@SGPAVSobStatic@@I@Z");
    todo("implement");
    SobStatic * __result = _sub_4FF15C(id);
    return __result;
}

_extern void _sub_4FF0CF(Hw2Identify const *const, std::vector<unsigned int,std::allocator<unsigned int> > &);
void Hw2Identify::GetSobStaticIds(std::vector<unsigned int,std::allocator<unsigned int> > &) const // 0x4FF0CF
{
    mangled_assert("?GetSobStaticIds@Hw2Identify@@QBEXAAV?$vector@IV?$allocator@I@std@@@std@@@Z");
    todo("implement");
    _sub_4FF0CF(this, arg);
}

_extern void _sub_4FEF4C(Hw2Identify const *const, std::vector<unsigned int,std::allocator<unsigned int> > &);
void Hw2Identify::GetResearchIds(std::vector<unsigned int,std::allocator<unsigned int> > &) const // 0x4FEF4C
{
    mangled_assert("?GetResearchIds@Hw2Identify@@QBEXAAV?$vector@IV?$allocator@I@std@@@std@@@Z");
    todo("implement");
    _sub_4FEF4C(this, arg);
}

/* ---------- private code */
#endif
