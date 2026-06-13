#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <malloc.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <assist\array2d.h>
#include <xutility>
#include <fileio\filepath.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <debug\ctassert.h>
#include <fileio\iff.h>
#include <list>
#include <Mathlib\vector3.h>
#include <map>
#include <xtree>
#include <NIS\nisdatamap.h>
#include <NIS\NISMotion.h>
#include <assist\faststring.h>
#include <sobid.h>
#include <Render\objects\parser.h>
#include <Render\objects\shaderparam.h>
#include <Render\objects\objects.h>
#include <NURBSCurve.h>
#include <curve.h>
#include <NIS\NIS.h>
#include <hash_map>
#include <xhash>
#include <Render\FxGL\FXManager.h>
#include <Render\FxGL\VarMulti.h>
#include <AnimCurve.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <NIS\NISLoad.h>
#include <string>
#include <fileio\filestream.h>

/* ---------- constants */

/* ---------- definitions */

class `anonymous-namespace'::NISLoadData
{
public:
    NISDataMap<AnimCurve> m_animCurve; // 0x0
    NISLoadData(`anonymous-namespace'::NISLoadData const &); /* compiler_generated() */
    NISLoadData(); /* compiler_generated() */
    ~NISLoadData(); /* compiler_generated() */
    `anonymous-namespace'::NISLoadData &operator=(`anonymous-namespace'::NISLoadData const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::NISLoadData) == 8, "Invalid `anonymous-namespace'::NISLoadData size");

typedef `anonymous-namespace'::NISLoadData ?A0x5072d0b4::NISLoadData;
typedef std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,NISDataMap<AnimCurve>::DataRef,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NISDataMap<AnimCurve>::DataRef> > > DataRefMap;

/* ---------- prototypes */


_static MotionNode::RotateOrder MapRotateOrder(unsigned __int32 input);
_static SobType MapSobType(char const *str);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern float const NISUpdateRate; // 0x79F15C
    extern float const NISUpdatePeriod; // 0x839594
    extern float g_nisParseTime; // 0x844984
    extern std::basic_string<char,std::char_traits<char>,std::allocator<char> > g_nisParseName; // 0x839598
    extern __int32 g_nisParseInstance; // 0x844988
    extern __int32 g_nisParseSobId; // 0x839590
    extern std::basic_string<char,std::char_traits<char>,std::allocator<char> > g_nisParseEvent; // 0x8395B0
}

/* ---------- public code */

_extern void _sub_54EAA5(std::_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NISDataMap<AnimCurve>::DataRef>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NISDataMap<AnimCurve>::DataRef> > > *const);
_inline std::_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NISDataMap<AnimCurve>::DataRef>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NISDataMap<AnimCurve>::DataRef> > >::~_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NISDataMap<AnimCurve>::DataRef>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NISDataMap<AnimCurve>::DataRef> > >() // 0x54EAA5
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UDataRef@?$NISDataMap@VAnimCurve@@@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UDataRef@?$NISDataMap@VAnimCurve@@@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_54EAA5(this);
}

_extern void _sub_54EAAE(std::_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,NISDataMap<AnimCurve>::DataRef,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NISDataMap<AnimCurve>::DataRef> >,0> > *const);
_inline std::_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,NISDataMap<AnimCurve>::DataRef,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NISDataMap<AnimCurve>::DataRef> >,0> >::~_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,NISDataMap<AnimCurve>::DataRef,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NISDataMap<AnimCurve>::DataRef> >,0> >() // 0x54EAAE
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UDataRef@?$NISDataMap@VAnimCurve@@@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UDataRef@?$NISDataMap@VAnimCurve@@@@@std@@@2@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_54EAAE(this);
}

_extern void _sub_54EAB7(std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,NISDataMap<AnimCurve>::DataRef,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NISDataMap<AnimCurve>::DataRef> > > *const);
_inline std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,NISDataMap<AnimCurve>::DataRef,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NISDataMap<AnimCurve>::DataRef> > >::~map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,NISDataMap<AnimCurve>::DataRef,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NISDataMap<AnimCurve>::DataRef> > >() // 0x54EAB7
{
    mangled_assert("??1?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UDataRef@?$NISDataMap@VAnimCurve@@@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UDataRef@?$NISDataMap@VAnimCurve@@@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_54EAB7(this);
}

_extern void _sub_54EABC(std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NISDataMap<AnimCurve>::DataRef> *const);
_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NISDataMap<AnimCurve>::DataRef>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NISDataMap<AnimCurve>::DataRef>() // 0x54EABC
{
    mangled_assert("??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UDataRef@?$NISDataMap@VAnimCurve@@@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_54EABC(this);
}

_extern void _sub_54EAC1(std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,NISDataMap<AnimCurve>::DataRef> *const);
_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,NISDataMap<AnimCurve>::DataRef>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,NISDataMap<AnimCurve>::DataRef>() // 0x54EAC1
{
    mangled_assert("??1?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UDataRef@?$NISDataMap@VAnimCurve@@@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_54EAC1(this);
}

_extern __int32 _sub_54F5D5(IFF *, IFFChunk *, void *, void *);
__int32 NISLoad::handle_CMRA_Chunk(IFF *iff, IFFChunk *chunk, void *nisVoid, void *dataVoid) // 0x54F5D5
{
    mangled_assert("?handle_CMRA_Chunk@NISLoad@@SGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
    __int32 __result = _sub_54F5D5(iff, chunk, nisVoid, dataVoid);
    return __result;
}

_extern __int32 _sub_54F40B(IFF *, IFFChunk *, void *, void *);
__int32 NISLoad::handle_ANIM_Chunk(IFF *iff, IFFChunk *chunk, void *nisVoid, void *dataVoid) // 0x54F40B
{
    mangled_assert("?handle_ANIM_Chunk@NISLoad@@SGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
    __int32 __result = _sub_54F40B(iff, chunk, nisVoid, dataVoid);
    return __result;
}

_extern __int32 _sub_5503CC(IFF *, IFFChunk *, void *, void *);
__int32 NISLoad::handle_NURB_Chunk(IFF *iff, IFFChunk *chunk, void *nisVoid, void *dataVoid) // 0x5503CC
{
    mangled_assert("?handle_NURB_Chunk@NISLoad@@SGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
    __int32 __result = _sub_5503CC(iff, chunk, nisVoid, dataVoid);
    return __result;
}

_extern __int32 _sub_550624(IFF *, IFFChunk *, void *, void *);
__int32 NISLoad::handle_PATH_Chunk(IFF *iff, IFFChunk *chunk, void *nisVoid, void *dataVoid) // 0x550624
{
    mangled_assert("?handle_PATH_Chunk@NISLoad@@SGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
    __int32 __result = _sub_550624(iff, chunk, nisVoid, dataVoid);
    return __result;
}

_extern __int32 _sub_54FEFE(IFF *, IFFChunk *, void *, void *);
__int32 NISLoad::handle_LEAD_Chunk(IFF *iff, IFFChunk *chunk, void *nisVoid, void *dataVoid) // 0x54FEFE
{
    mangled_assert("?handle_LEAD_Chunk@NISLoad@@SGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
    __int32 __result = _sub_54FEFE(iff, chunk, nisVoid, dataVoid);
    return __result;
}

_extern __int32 _sub_54F8A8(IFF *, IFFChunk *, void *, void *);
__int32 NISLoad::handle_FOLW_Chunk(IFF *iff, IFFChunk *chunk, void *nisVoid, void *dataVoid) // 0x54F8A8
{
    mangled_assert("?handle_FOLW_Chunk@NISLoad@@SGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
    __int32 __result = _sub_54F8A8(iff, chunk, nisVoid, dataVoid);
    return __result;
}

_extern __int32 _sub_5509F0(IFF *, IFFChunk *, void *, void *);
__int32 NISLoad::handle_VERS_Chunk(IFF *iff, IFFChunk *chunk, void *nisVoid, void *dataVoid) // 0x5509F0
{
    mangled_assert("?handle_VERS_Chunk@NISLoad@@SGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
    __int32 __result = _sub_5509F0(iff, chunk, nisVoid, dataVoid);
    return __result;
}

_extern __int32 _sub_54FE9F(IFF *, IFFChunk *, void *, void *);
__int32 NISLoad::handle_INFO_Chunk(IFF *iff, IFFChunk *chunk, void *nisVoid, void *dataVoid) // 0x54FE9F
{
    mangled_assert("?handle_INFO_Chunk@NISLoad@@SGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
    __int32 __result = _sub_54FE9F(iff, chunk, nisVoid, dataVoid);
    return __result;
}

_extern __int32 _sub_550A0B(IFF *, IFFChunk *, void *, void *);
__int32 NISLoad::handle_nis(IFF *iff, IFFChunk *chunk, void *pNIS, void *pData) // 0x550A0B
{
    mangled_assert("?handle_nis@NISLoad@@SGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
    __int32 __result = _sub_550A0B(iff, chunk, pNIS, pData);
    return __result;
}

_extern bool _sub_550AC0(NIS *, char const *);
bool NISLoad::loadMotion(NIS *pNIS, char const *filename) // 0x550AC0
{
    mangled_assert("?loadMotion@NISLoad@@SG_NPAVNIS@@PBD@Z");
    todo("implement");
    bool __result = _sub_550AC0(pNIS, filename);
    return __result;
}

_extern bool _sub_550BBA(NIS *, char const *);
bool NISLoad::loadScript(NIS *pNIS, char const *filename) // 0x550BBA
{
    mangled_assert("?loadScript@NISLoad@@SG_NPAVNIS@@PBD@Z");
    todo("implement");
    bool __result = _sub_550BBA(pNIS, filename);
    return __result;
}

_extern bool _sub_550CF6(NIS *, char const *, Parser &);
bool NISLoad::parseAt(NIS *pNIS, char const *filename, Parser &parser) // 0x550CF6
{
    mangled_assert("?parseAt@NISLoad@@CG_NPAVNIS@@PBDAAVParser@@@Z");
    todo("implement");
    bool __result = _sub_550CF6(pNIS, filename, parser);
    return __result;
}

_extern bool _sub_550E16(NIS *, char const *, Parser &);
bool NISLoad::parseWith(NIS *pNIS, char const *filename, Parser &parser) // 0x550E16
{
    mangled_assert("?parseWith@NISLoad@@CG_NPAVNIS@@PBDAAVParser@@@Z");
    todo("implement");
    bool __result = _sub_550E16(pNIS, filename, parser);
    return __result;
}

_extern bool _sub_550D6E(NIS *, char const *, Parser &);
bool NISLoad::parseEvent(NIS *pNIS, char const *filename, Parser &parser) // 0x550D6E
{
    mangled_assert("?parseEvent@NISLoad@@CG_NPAVNIS@@PBDAAVParser@@@Z");
    todo("implement");
    bool __result = _sub_550D6E(pNIS, filename, parser);
    return __result;
}

/* ---------- private code */

_extern MotionNode::RotateOrder _sub_54ED25(unsigned __int32);
_static MotionNode::RotateOrder MapRotateOrder(unsigned __int32 input) // 0x54ED25
{
    mangled_assert("MapRotateOrder");
    todo("implement");
    MotionNode::RotateOrder __result = _sub_54ED25(input);
    return __result;
}

_extern SobType _sub_54ED76(char const *);
_static SobType MapSobType(char const *str) // 0x54ED76
{
    mangled_assert("MapSobType");
    todo("implement");
    SobType __result = _sub_54ED76(str);
    return __result;
}
#endif
