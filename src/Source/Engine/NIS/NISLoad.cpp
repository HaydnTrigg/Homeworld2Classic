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

_inline std::_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NISDataMap<AnimCurve>::DataRef>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NISDataMap<AnimCurve>::DataRef> > >::~_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NISDataMap<AnimCurve>::DataRef>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NISDataMap<AnimCurve>::DataRef> > >() // 0x54EAA5
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UDataRef@?$NISDataMap@VAnimCurve@@@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UDataRef@?$NISDataMap@VAnimCurve@@@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,NISDataMap<AnimCurve>::DataRef,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NISDataMap<AnimCurve>::DataRef> >,0> >::~_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,NISDataMap<AnimCurve>::DataRef,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NISDataMap<AnimCurve>::DataRef> >,0> >() // 0x54EAAE
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UDataRef@?$NISDataMap@VAnimCurve@@@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UDataRef@?$NISDataMap@VAnimCurve@@@@@std@@@2@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,NISDataMap<AnimCurve>::DataRef,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NISDataMap<AnimCurve>::DataRef> > >::~map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,NISDataMap<AnimCurve>::DataRef,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NISDataMap<AnimCurve>::DataRef> > >() // 0x54EAB7
{
    mangled_assert("??1?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UDataRef@?$NISDataMap@VAnimCurve@@@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UDataRef@?$NISDataMap@VAnimCurve@@@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NISDataMap<AnimCurve>::DataRef>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NISDataMap<AnimCurve>::DataRef>() // 0x54EABC
{
    mangled_assert("??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UDataRef@?$NISDataMap@VAnimCurve@@@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,NISDataMap<AnimCurve>::DataRef>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,NISDataMap<AnimCurve>::DataRef>() // 0x54EAC1
{
    mangled_assert("??1?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UDataRef@?$NISDataMap@VAnimCurve@@@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

__int32 NISLoad::handle_CMRA_Chunk(IFF *iff, IFFChunk *chunk, void *nisVoid, void *dataVoid) // 0x54F5D5
{
    mangled_assert("?handle_CMRA_Chunk@NISLoad@@SGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
}

__int32 NISLoad::handle_ANIM_Chunk(IFF *iff, IFFChunk *chunk, void *nisVoid, void *dataVoid) // 0x54F40B
{
    mangled_assert("?handle_ANIM_Chunk@NISLoad@@SGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
}

__int32 NISLoad::handle_NURB_Chunk(IFF *iff, IFFChunk *chunk, void *nisVoid, void *dataVoid) // 0x5503CC
{
    mangled_assert("?handle_NURB_Chunk@NISLoad@@SGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
}

__int32 NISLoad::handle_PATH_Chunk(IFF *iff, IFFChunk *chunk, void *nisVoid, void *dataVoid) // 0x550624
{
    mangled_assert("?handle_PATH_Chunk@NISLoad@@SGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
}

__int32 NISLoad::handle_LEAD_Chunk(IFF *iff, IFFChunk *chunk, void *nisVoid, void *dataVoid) // 0x54FEFE
{
    mangled_assert("?handle_LEAD_Chunk@NISLoad@@SGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
}

__int32 NISLoad::handle_FOLW_Chunk(IFF *iff, IFFChunk *chunk, void *nisVoid, void *dataVoid) // 0x54F8A8
{
    mangled_assert("?handle_FOLW_Chunk@NISLoad@@SGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
}

__int32 NISLoad::handle_VERS_Chunk(IFF *iff, IFFChunk *chunk, void *nisVoid, void *dataVoid) // 0x5509F0
{
    mangled_assert("?handle_VERS_Chunk@NISLoad@@SGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
}

__int32 NISLoad::handle_INFO_Chunk(IFF *iff, IFFChunk *chunk, void *nisVoid, void *dataVoid) // 0x54FE9F
{
    mangled_assert("?handle_INFO_Chunk@NISLoad@@SGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
}

__int32 NISLoad::handle_nis(IFF *iff, IFFChunk *chunk, void *pNIS, void *pData) // 0x550A0B
{
    mangled_assert("?handle_nis@NISLoad@@SGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
}

bool NISLoad::loadMotion(NIS *pNIS, char const *filename) // 0x550AC0
{
    mangled_assert("?loadMotion@NISLoad@@SG_NPAVNIS@@PBD@Z");
    todo("implement");
}

bool NISLoad::loadScript(NIS *pNIS, char const *filename) // 0x550BBA
{
    mangled_assert("?loadScript@NISLoad@@SG_NPAVNIS@@PBD@Z");
    todo("implement");
}

bool NISLoad::parseAt(NIS *pNIS, char const *filename, Parser &parser) // 0x550CF6
{
    mangled_assert("?parseAt@NISLoad@@CG_NPAVNIS@@PBDAAVParser@@@Z");
    todo("implement");
}

bool NISLoad::parseWith(NIS *pNIS, char const *filename, Parser &parser) // 0x550E16
{
    mangled_assert("?parseWith@NISLoad@@CG_NPAVNIS@@PBDAAVParser@@@Z");
    todo("implement");
}

bool NISLoad::parseEvent(NIS *pNIS, char const *filename, Parser &parser) // 0x550D6E
{
    mangled_assert("?parseEvent@NISLoad@@CG_NPAVNIS@@PBDAAVParser@@@Z");
    todo("implement");
}

/* ---------- private code */

_static MotionNode::RotateOrder MapRotateOrder(unsigned __int32 input) // 0x54ED25
{
    mangled_assert("MapRotateOrder");
    todo("implement");
}

_static SobType MapSobType(char const *str) // 0x54ED76
{
    mangled_assert("MapSobType");
    todo("implement");
}
#endif
