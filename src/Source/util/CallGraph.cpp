#if 0
/* ---------- headers */

#include "decomp.h"
#include <Util\pch.h>
#include <memory\memorylib.h>
#include <debug\ctassert.h>
#include <new>
#include <xstddef>
#include <algorithm>
#include <xmemory>
#include <xmemory0>
#include <type_traits>
#include <debug\db.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <Util\CallGraph.h>
#include <vector>
#include <Util\utilexports.h>
#include <xstring>
#include <fileio\logfile.h>
#include <fileio\fileioexports.h>
#include <fileio\bytestream.h>
#include <assist\fixedstring.h>
#include <assist\stlexstring.h>
#include <wchar.h>
#include <assist\typemagic.h>
#include <map>
#include <xtree>

/* ---------- constants */

/* ---------- definitions */

class `anonymous-namespace'::SiteInstance
{
public:
    SiteInstance(`anonymous-namespace'::SiteInstance const &); /* compiler_generated() */
private:
    SiteInstance();
public:
    SiteInstance(dbTraceObj const &);
    ~SiteInstance();
    unsigned __int32 GetCount() const;
    dbTraceObj const &GetTrace() const;
    void Increment();
private:
    dbTraceObj m_trace; // 0x0
    unsigned __int32 m_count; // 0x108
public:
    `anonymous-namespace'::SiteInstance &operator=(`anonymous-namespace'::SiteInstance const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::SiteInstance) == 268, "Invalid `anonymous-namespace'::SiteInstance size");

class `anonymous-namespace'::Site
{
public:
    typedef std::vector<`anonymous namespace'::SiteInstance *,std::allocator<`anonymous namespace'::SiteInstance *> > SiteInstances;
    typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<`anonymous namespace'::SiteInstance *> > > SiteInstancesI;
    typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<`anonymous namespace'::SiteInstance *> > > iterator;
    Site(`anonymous-namespace'::Site const &); /* compiler_generated() */
    Site(long);
    ~Site();
    std::_Vector_iterator<std::_Vector_val<std::_Simple_types<`anonymous namespace'::SiteInstance *> > > begin();
    std::_Vector_iterator<std::_Vector_val<std::_Simple_types<`anonymous namespace'::SiteInstance *> > > end();
    long GetAddress() const;
    unsigned __int32 IncInstance(dbTraceObj const &);
private:
    long m_address; // 0x0
    std::vector<`anonymous namespace'::SiteInstance *,std::allocator<`anonymous namespace'::SiteInstance *> > m_instances; // 0x4
public:
    `anonymous-namespace'::Site &operator=(`anonymous-namespace'::Site const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::Site) == 16, "Invalid `anonymous-namespace'::Site size");

class `anonymous-namespace'::SiteMatchPred
{
public:
    SiteMatchPred(dbTraceObj const &);
    bool operator()(`anonymous-namespace'::SiteInstance *);
private:
    dbTraceObj const &m_matcher; // 0x0
};
static_assert(sizeof(`anonymous-namespace'::SiteMatchPred) == 4, "Invalid `anonymous-namespace'::SiteMatchPred size");

typedef `anonymous-namespace'::SiteInstance ?A0xe88c7512::SiteInstance;
typedef `anonymous-namespace'::Site ?A0xe88c7512::Site;
typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<`anonymous namespace'::SiteInstance *> > > SiteInstancesI;
typedef std::vector<`anonymous namespace'::SiteInstance *,std::allocator<`anonymous namespace'::SiteInstance *> > SiteInstances;
typedef `anonymous-namespace'::SiteMatchPred ?A0xe88c7512::SiteMatchPred;
typedef std::map<long,`anonymous namespace'::Site *,std::less<long>,std::allocator<std::pair<long const ,`anonymous namespace'::Site *> > > SiteMap;
typedef std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<long const ,`anonymous namespace'::Site *> > > > SiteMapI;

/* ---------- prototypes */


_static void DumpLogHeader(LogFile &logFile);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_10001412(CallGraph *const, char const *);
CallGraph::CallGraph(char const *) // 0x10001412
{
    mangled_assert("??0CallGraph@@QAE@PBD@Z");
    todo("implement");
    _sub_10001412(this, arg);
}

_extern _sub_10001479(CallGraph::Data *const);
_inline CallGraph::Data::Data() // 0x10001479
{
    mangled_assert("??0Data@CallGraph@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10001479(this);
}

_extern void _sub_1000152D(CallGraph *const);
CallGraph::~CallGraph() // 0x1000152D
{
    mangled_assert("??1CallGraph@@QAE@XZ");
    todo("implement");
    _sub_1000152D(this);
}

_extern void _sub_100015A1(CallGraph::Data *const);
_inline CallGraph::Data::~Data() // 0x100015A1
{
    mangled_assert("??1Data@CallGraph@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_100015A1(this);
}

_extern CallGraph &_sub_1000161B(CallGraph *const, CallGraph const &);
_inline CallGraph &CallGraph::operator=(CallGraph const &) // 0x1000161B
{
    mangled_assert("??4CallGraph@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    CallGraph & __result = _sub_1000161B(this, arg);
    return __result;
}

_extern void _sub_100019B7(CallGraph *const);
void CallGraph::Visit() // 0x100019B7
{
    mangled_assert("?Visit@CallGraph@@QAEXXZ");
    todo("implement");
    _sub_100019B7(this);
}

_extern void _sub_10001685(CallGraph *const);
void CallGraph::DumpLog() // 0x10001685
{
    mangled_assert("?DumpLog@CallGraph@@QAEXXZ");
    todo("implement");
    _sub_10001685(this);
}

/* ---------- private code */

_extern void _sub_1000189C(LogFile &);
_static void DumpLogHeader(LogFile &logFile) // 0x1000189C
{
    mangled_assert("DumpLogHeader");
    todo("implement");
    _sub_1000189C(logFile);
}
#endif
