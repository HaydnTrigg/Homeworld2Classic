#if 0
/* ---------- headers */

#include "decomp.h"
#include <Util\pch.h>
#include <new>
#include <xstddef>
#include <assist\hashstring.h>
#include <algorithm>
#include <xmemory0>
#include <type_traits>
#include <debug\db.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <Util\Dictionary.h>
#include <Util\utilexports.h>
#include <xstring>
#include <assist\stlexstring.h>
#include <assist\typemagic.h>
#include <map>
#include <xtree>

/* ---------- constants */

/* ---------- definitions */

typedef unsigned long Key;
typedef std::map<unsigned long,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<unsigned long>,std::allocator<std::pair<unsigned long const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > DataCont;
typedef std::_Tree_node<std::pair<unsigned long const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,void *> *_Nodeptr;
typedef std::_Tree_node<std::pair<unsigned long const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,void *> _Node;
typedef std::_Tree_node<std::pair<unsigned long const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,void *> *&_Nodepref;
typedef std::_Wrap_alloc<std::allocator<std::_Tree_node<std::pair<unsigned long const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,void *> > > _Alnod_type;
typedef std::allocator<std::pair<unsigned long const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > allocator_type;
typedef std::less<unsigned long> key_compare;
typedef unsigned long key_type;
typedef std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > >,bool> _Pairib;
typedef std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > >,std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > > _Pairii;
typedef std::basic_string<char,std::char_traits<char>,std::allocator<char> > mapped_type;
typedef std::pair<unsigned long const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > const &_Reftype;

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern std::_Nil _Nil_obj; // 0x10007230
}

/* ---------- public code */

_extern _sub_10002642(Dictionary *const, bool);
Dictionary::Dictionary(bool) // 0x10002642
{
    mangled_assert("??0Dictionary@@QAE@_N@Z");
    todo("implement");
    _sub_10002642(this, arg);
}

_extern void _sub_10002664(std::pair<unsigned long const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > *const);
_inline std::pair<unsigned long const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > >::~pair<unsigned long const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > >() // 0x10002664
{
    mangled_assert("??1?$pair@$$CBKV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10002664(this);
}

_extern bool _sub_100026F2(Dictionary const *const, char const *, unsigned long &);
bool Dictionary::FindKey(char const *, unsigned long &) const // 0x100026F2
{
    mangled_assert("?FindKey@Dictionary@@QBE_NPBDAAK@Z");
    todo("implement");
    bool __result = _sub_100026F2(this, arg, arg);
    return __result;
}

_extern unsigned long _sub_1000277A(Dictionary *const, char const *);
unsigned long Dictionary::GetKey(char const *) // 0x1000277A
{
    mangled_assert("?GetKey@Dictionary@@QAEKPBD@Z");
    todo("implement");
    unsigned long __result = _sub_1000277A(this, arg);
    return __result;
}

_extern char const *_sub_1000284D(Dictionary const *const, unsigned long);
char const *Dictionary::GetString(unsigned long) const // 0x1000284D
{
    mangled_assert("?GetString@Dictionary@@QBEPBDK@Z");
    todo("implement");
    char const * __result = _sub_1000284D(this, arg);
    return __result;
}

/* ---------- private code */
#endif
