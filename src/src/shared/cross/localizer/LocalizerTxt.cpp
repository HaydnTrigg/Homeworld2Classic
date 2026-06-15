#if 0
/* ---------- headers */

#include "decomp.h"
#include <memory\memorylib.h>
#include <memory\memoryalloc.h>
#include <fileio\filestream.h>
#include <new>
#include <fileio\fileioexports.h>
#include <debug\ctassert.h>
#include <fileio\bytestream.h>
#include <xstddef>
#include <assist\fixedstring.h>
#include <assist\stlexstring.h>
#include <vector>
#include <algorithm>
#include <xmemory>
#include <xmemory0>
#include <limits>
#include "src\src\Shared\PC\Localizer\pch.h"
#include <Localizer\LocalizerTxt.h>
#include <type_traits>
#include <Localizer\LocalizerImp.h>
#include <debug\db.h>
#include <Localizer\Localizer.h>
#include <assist\typemagic.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <string>
#include <xtr1common>
#include <xstring>
#include <wchar.h>
#include <memory\memorypool.h>

/* ---------- constants */

enum `anonymous-namespace'::ParseType
{
    PR_COMMENT = 0,
    PR_LINE,
    PR_RANGEBEGIN,
    PR_RANGEEND,
    PR_FILERANGE,
    PR_ERROR,
};

/* ---------- definitions */

struct `anonymous-namespace'::ParseOut
{
    `anonymous-namespace'::ParseType type; // 0x0
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > comment; // 0x4
    __int32 lineNb; // 0x1C
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > lineText; // 0x20
    __int32 rangeBegin; // 0x38
    __int32 rangeEnd; // 0x3C
    ParseOut(`anonymous-namespace'::ParseOut const &); /* compiler_generated() */
    ParseOut(); /* compiler_generated() */
    ~ParseOut(); /* compiler_generated() */
    `anonymous-namespace'::ParseOut &operator=(`anonymous-namespace'::ParseOut const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::ParseOut) == 64, "Invalid `anonymous-namespace'::ParseOut size");

class `anonymous-namespace'::LineArrayLess
{
public:
    bool operator()(std::pair<int,LocalizerResourceTxt::Line> const &, std::pair<int,LocalizerResourceTxt::Line> const &) const;
    bool operator()(std::pair<int,LocalizerResourceTxt::Line> const &, __int32) const;
    bool operator()(__int32, std::pair<int,LocalizerResourceTxt::Line> const &) const;
};
static_assert(sizeof(`anonymous-namespace'::LineArrayLess) == 1, "Invalid `anonymous-namespace'::LineArrayLess size");

class `anonymous-namespace'::RangeArrayLess
{
public:
    bool operator()(LocalizerResourceTxt::Range const &, LocalizerResourceTxt::Range const &) const;
};
static_assert(sizeof(`anonymous-namespace'::RangeArrayLess) == 1, "Invalid `anonymous-namespace'::RangeArrayLess size");

struct LocalizerResourceTxt::{dtor}::__l2::clearall
{
    static void destroy(std::pair<int,LocalizerResourceTxt::Line> &);
};
static_assert(sizeof(LocalizerResourceTxt::{dtor}::__l2::clearall) == 1, "Invalid LocalizerResourceTxt::{dtor}::__l2::clearall size");

typedef `anonymous-namespace'::LineArrayLess ?A0x10e53216::LineArrayLess;
typedef `anonymous-namespace'::RangeArrayLess ?A0x10e53216::RangeArrayLess;
typedef std::vector<std::pair<int,LocalizerResourceTxt::Line>,mempool_alloc<std::pair<int,LocalizerResourceTxt::Line> > > LineArray;
typedef std::pair<int,LocalizerResourceTxt::Line> *_Tptr;
typedef std::vector<LocalizerResourceTxt::Range,mempool_alloc<LocalizerResourceTxt::Range> > RangeArray;
typedef `anonymous-namespace'::ParseType ?A0x10e53216::ParseType;
typedef `anonymous-namespace'::ParseOut ?A0x10e53216::ParseOut;
typedef mempool_alloc<LocalizerResourceTxt::Range> allocator_type;
typedef std::pair<int,LocalizerResourceTxt::Line> &_Reftype;
typedef unsigned __int32 _Ty;

/* ---------- prototypes */

extern __int32 RangeGetNextId(LocalizerResourceTxt::Range const &range, std::vector<std::pair<int,LocalizerResourceTxt::Line>,mempool_alloc<std::pair<int,LocalizerResourceTxt::Line> > > const &lines);

_static void TxtLineReset(LocalizerResourceTxt::Line &line);
_static void TxtLineSetup(LocalizerResourceTxt::Line &line, char const *strAnsi, wchar_t const *strUnicode, char const *comment);
_static void TxtLineSetup(LocalizerResourceTxt::Line &line, char const *strAnsi, char const *comment);
_static void TxtLineUpdate(LocalizerResourceTxt::Line &line, char const *strAnsi, wchar_t const *strUnicode);
_static void TxtLineUpdate(LocalizerResourceTxt::Line &line, wchar_t const *strUnicode);
_static std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::pair<int,LocalizerResourceTxt::Line> > > > TxtLineFind(std::vector<std::pair<int,LocalizerResourceTxt::Line>,mempool_alloc<std::pair<int,LocalizerResourceTxt::Line> > > &lines, __int32 lineNb);
_static std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::pair<int,LocalizerResourceTxt::Line> > > > TxtLineFind(std::vector<std::pair<int,LocalizerResourceTxt::Line>,mempool_alloc<std::pair<int,LocalizerResourceTxt::Line> > > const &lines, __int32 lineNb);
_static bool TxtLineDuplicate(std::vector<std::pair<int,LocalizerResourceTxt::Line>,mempool_alloc<std::pair<int,LocalizerResourceTxt::Line> > > const &lines, __int32 lineNb);
_static std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::pair<int,LocalizerResourceTxt::Line> > > > TxtLineInsert(std::vector<std::pair<int,LocalizerResourceTxt::Line>,mempool_alloc<std::pair<int,LocalizerResourceTxt::Line> > > &lines, __int32 lineNb, LocalizerResourceTxt::Line line);
_static bool RangeDuplicate(std::vector<LocalizerResourceTxt::Range,mempool_alloc<LocalizerResourceTxt::Range> > const &ranges, __int32 min, __int32 max);
_static void RangeReset(LocalizerResourceTxt::Range &range);
_static void RangeSetup(LocalizerResourceTxt::Range &range, char const *comment, __int32 min, __int32 max);
_static _inline bool LineIsWSChar(char c);
_static void LinePrep(char *chbuf);

/* ---------- globals */

extern char const *LocalizerResourceTxt::FileExtension; // 0x1000D198

/* ---------- private variables */

_static
{
    extern char const TOKEN_FILERANGE[10]; // 0x1000A3A0
    extern char const TOKEN_RANGE_START[11]; // 0x1000A3AC
    extern char const TOKEN_RANGE_END[9]; // 0x1000A3B8
    extern char const TOKEN_COMMENT[3]; // 0x1000A3C4
}

/* ---------- public code */

__int32 RangeGetNextId(LocalizerResourceTxt::Range const &range, std::vector<std::pair<int,LocalizerResourceTxt::Line>,mempool_alloc<std::pair<int,LocalizerResourceTxt::Line> > > const &lines) // 0x10006B40
{
    mangled_assert("?RangeGetNextId@@YGHABURange@LocalizerResourceTxt@@ABV?$vector@U?$pair@HULine@LocalizerResourceTxt@@@std@@V?$mempool_alloc@U?$pair@HULine@LocalizerResourceTxt@@@std@@@@@std@@@Z");
    todo("implement");
}

LocalizerResourceTxt::LocalizerResourceTxt(char const *) // 0x10005DA3
{
    mangled_assert("??0LocalizerResourceTxt@@AAE@PBD@Z");
    todo("implement");
}

_inline std::_Vector_alloc<1,std::_Vec_base_types<std::pair<int,LocalizerResourceTxt::Line>,mempool_alloc<std::pair<int,LocalizerResourceTxt::Line> > > >::~_Vector_alloc<1,std::_Vec_base_types<std::pair<int,LocalizerResourceTxt::Line>,mempool_alloc<std::pair<int,LocalizerResourceTxt::Line> > > >() // 0x10005E2F
{
    mangled_assert("??1?$_Vector_alloc@$00U?$_Vec_base_types@U?$pair@HULine@LocalizerResourceTxt@@@std@@V?$mempool_alloc@U?$pair@HULine@LocalizerResourceTxt@@@std@@@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Vector_alloc<1,std::_Vec_base_types<LocalizerResourceTxt::Range,mempool_alloc<LocalizerResourceTxt::Range> > >::~_Vector_alloc<1,std::_Vec_base_types<LocalizerResourceTxt::Range,mempool_alloc<LocalizerResourceTxt::Range> > >() // 0x10005E30
{
    mangled_assert("??1?$_Vector_alloc@$00U?$_Vec_base_types@URange@LocalizerResourceTxt@@V?$mempool_alloc@URange@LocalizerResourceTxt@@@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Wrap_alloc<mempool_alloc<std::pair<int,LocalizerResourceTxt::Line> > >::~_Wrap_alloc<mempool_alloc<std::pair<int,LocalizerResourceTxt::Line> > >() // 0x10005E31
{
    mangled_assert("??1?$_Wrap_alloc@V?$mempool_alloc@U?$pair@HULine@LocalizerResourceTxt@@@std@@@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Wrap_alloc<mempool_alloc<LocalizerResourceTxt::Range> >::~_Wrap_alloc<mempool_alloc<LocalizerResourceTxt::Range> >() // 0x10005E32
{
    mangled_assert("??1?$_Wrap_alloc@V?$mempool_alloc@URange@LocalizerResourceTxt@@@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

LocalizerResourceTxt::~LocalizerResourceTxt() // 0x10005E4C
{
    mangled_assert("??1LocalizerResourceTxt@@UAE@XZ");
    todo("implement");
}

LocalizerImp::Resource *LocalizerResourceTxt::Load(char const *filename) // 0x100065E5
{
    mangled_assert("?Load@LocalizerResourceTxt@@SGPAVResource@LocalizerImp@@PBD@Z");
    todo("implement");
}

bool LocalizerResourceTxt::GetString(wchar_t *, unsigned __int32, __int32) const // 0x100062F5
{
    mangled_assert("?GetString@LocalizerResourceTxt@@UBE_NPA_WIH@Z");
    todo("implement");
}

bool LocalizerResourceTxt::ResetRange(__int32, __int32) // 0x10006BDD
{
    mangled_assert("?ResetRange@LocalizerResourceTxt@@QAE_NHH@Z");
    todo("implement");
}

__int32 LocalizerResourceTxt::AddText(wchar_t const *, __int32 const, __int32 const, __int32 const) // 0x100061AA
{
    mangled_assert("?AddText@LocalizerResourceTxt@@QAEHPB_WHHH@Z");
    todo("implement");
}

bool LocalizerResourceTxt::Save(char const *) // 0x10006C53
{
    mangled_assert("?Save@LocalizerResourceTxt@@QAE_NPBD@Z");
    todo("implement");
}

bool LocalizerResourceTxt::AddRange(__int32 &, __int32 &, unsigned __int32 const, char const *) // 0x100060DB
{
    mangled_assert("?AddRange@LocalizerResourceTxt@@QAE_NAAH0IPBD@Z");
    todo("implement");
}

char const *LocalizerResourceTxt::GetName() const // 0x100062E9
{
    mangled_assert("?GetName@LocalizerResourceTxt@@UBEPBDXZ");
    todo("implement");
}

__int32 LocalizerResourceTxt::RangeMin() const // 0x10006B75
{
    mangled_assert("?RangeMin@LocalizerResourceTxt@@UBEHXZ");
    todo("implement");
}

__int32 LocalizerResourceTxt::RangeMax() const // 0x10006B71
{
    mangled_assert("?RangeMax@LocalizerResourceTxt@@UBEHXZ");
    todo("implement");
}

std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::pair<int,LocalizerResourceTxt::Line> > > > LocalizerResourceTxt::Begin() const // 0x100062D1
{
    mangled_assert("?Begin@LocalizerResourceTxt@@QBE?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@U?$pair@HULine@LocalizerResourceTxt@@@std@@@std@@@std@@@std@@XZ");
    todo("implement");
}

std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::pair<int,LocalizerResourceTxt::Line> > > > LocalizerResourceTxt::End() const // 0x100062DD
{
    mangled_assert("?End@LocalizerResourceTxt@@QBE?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@U?$pair@HULine@LocalizerResourceTxt@@@std@@@std@@@std@@@std@@XZ");
    todo("implement");
}

/* ---------- private code */

_static void TxtLineReset(LocalizerResourceTxt::Line &line) // 0x10006EDA
{
    mangled_assert("TxtLineReset");
    todo("implement");
}

_static void TxtLineSetup(LocalizerResourceTxt::Line &line, char const *strAnsi, wchar_t const *strUnicode, char const *comment) // 0x10006F68
{
    mangled_assert("TxtLineSetup");
    todo("implement");
}

_static void TxtLineSetup(LocalizerResourceTxt::Line &line, char const *strAnsi, char const *comment) // 0x10006F27
{
    mangled_assert("TxtLineSetup");
    todo("implement");
}

_static void TxtLineUpdate(LocalizerResourceTxt::Line &line, char const *strAnsi, wchar_t const *strUnicode) // 0x10006FEC
{
    mangled_assert("TxtLineUpdate");
    todo("implement");
}

_static void TxtLineUpdate(LocalizerResourceTxt::Line &line, wchar_t const *strUnicode) // 0x10007009
{
    mangled_assert("TxtLineUpdate");
    todo("implement");
}

_static std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::pair<int,LocalizerResourceTxt::Line> > > > TxtLineFind(std::vector<std::pair<int,LocalizerResourceTxt::Line>,mempool_alloc<std::pair<int,LocalizerResourceTxt::Line> > > &lines, __int32 lineNb) // 0x10006E54
{
    mangled_assert("TxtLineFind");
    todo("implement");
}

_static std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::pair<int,LocalizerResourceTxt::Line> > > > TxtLineFind(std::vector<std::pair<int,LocalizerResourceTxt::Line>,mempool_alloc<std::pair<int,LocalizerResourceTxt::Line> > > const &lines, __int32 lineNb) // 0x10006E1C
{
    mangled_assert("TxtLineFind");
    todo("implement");
}

_static bool TxtLineDuplicate(std::vector<std::pair<int,LocalizerResourceTxt::Line>,mempool_alloc<std::pair<int,LocalizerResourceTxt::Line> > > const &lines, __int32 lineNb) // 0x10006DF9
{
    mangled_assert("TxtLineDuplicate");
    todo("implement");
}

_static std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::pair<int,LocalizerResourceTxt::Line> > > > TxtLineInsert(std::vector<std::pair<int,LocalizerResourceTxt::Line>,mempool_alloc<std::pair<int,LocalizerResourceTxt::Line> > > &lines, __int32 lineNb, LocalizerResourceTxt::Line line) // 0x10006E8C
{
    mangled_assert("TxtLineInsert");
    todo("implement");
}

_static bool RangeDuplicate(std::vector<LocalizerResourceTxt::Range,mempool_alloc<LocalizerResourceTxt::Range> > const &ranges, __int32 min, __int32 max) // 0x10006B06
{
    mangled_assert("RangeDuplicate");
    todo("implement");
}

_static void RangeReset(LocalizerResourceTxt::Range &range) // 0x10006B79
{
    mangled_assert("RangeReset");
    todo("implement");
}

_static void RangeSetup(LocalizerResourceTxt::Range &range, char const *comment, __int32 min, __int32 max) // 0x10006B9B
{
    mangled_assert("RangeSetup");
    todo("implement");
}

_static _inline bool LineIsWSChar(char c) // 0x1000633B
{
    mangled_assert("LineIsWSChar");
    todo("implement");
}

_static void LinePrep(char *chbuf) // 0x100065B9
{
    mangled_assert("LinePrep");
    todo("implement");
}
#endif
