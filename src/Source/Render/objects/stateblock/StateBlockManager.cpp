#if 0
/* ---------- headers */

#include "decomp.h"
#include <hash_map>
#include <xhash>
#include <boost\shared_ptr.hpp>
#include <boost\config.hpp>
#include <xstring>
#include <boost\config\user.hpp>
#include <xmemory0>
#include <Objects\pch.h>
#include <boost\config\select_compiler_config.hpp>
#include <memory\memorylib.h>
#include <boost\config\compiler\visualc.hpp>
#include <boost\config\select_stdlib_config.hpp>
#include <crtdefs.h>
#include <boost\config\stdlib\dinkumware.hpp>
#include <Mathlib\matvec.h>
#include <boost\config\select_platform_config.hpp>
#include <Mathlib\vector2.h>
#include <boost\config\platform\win32.hpp>
#include <Objects\Texture.h>
#include <Objects\Core.h>
#include <gl\lotypes.h>
#include <gl\types.h>
#include <util\colour.h>
#include <boost\detail\workaround.hpp>
#include <Mathlib\vector4.h>
#include <new>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <xstddef>
#include <type_traits>
#include <tuple>
#include <gl\r_types.h>
#include <assist\typemagic.h>
#include <Objects\fragment_program.h>
#include <Objects\StateBlock\stateParse.h>
#include <Objects\StateBlock\stateBlock.h>
#include <bitset>
#include <xutility>
#include <xatomic0.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <boost\config\suffix.hpp>
#include <xmemory>
#include <boost\assert.hpp>
#include <boost\checked_delete.hpp>
#include <math.h>
#include <Objects\options.h>
#include <list>
#include <debug\ctassert.h>
#include <boost\throw_exception.hpp>
#include <gl\r_defines.h>
#include <map>
#include <gl\glext.h>
#include <xtree>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lightweight_mutex.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <Objects\vertex_program.h>
#include <assert.h>
#include <Mathlib\matrix4.h>
#include <Mathlib\vector3.h>
#include <algorithm>
#include <util\types.h>
#include <Mathlib\matrix3.h>
#include <Objects\StateBlock\stateblocktypes.h>
#include <memory>
#include <stdint.h>
#include <functional>
#include <Objects\TextureRegistry.h>
#include <xfunctional>
#include <Objects\StateBlock\StateVariableInstance.h>
#include <Objects\StateBlock\StateBlockManager.h>
#include <profile\profile.h>
#include <Objects\Objects.h>
#include <iostream>
#include <util\dictionary.h>
#include <debug\db.h>
#include <util\utilexports.h>
#include <fileio\filepath.h>
#include <fileio\fileioexports.h>
#include <fileio\bytestream.h>
#include <platform\cmdline.h>
#include <assist\fixedstring.h>
#include <platform\platformexports.h>
#include <assist\stlexstring.h>
#include <wchar.h>
#include <string>
#include <fileio\filestream.h>
#include <platform\osdef.h>

/* ---------- constants */

/* ---------- definitions */

struct shaderPath
{
    char const *directory; // 0x0
    unsigned __int32 miniumTextureUnits; // 0x4
    BooleanCap requiredCaps[5]; // 0x8
};
static_assert(sizeof(shaderPath) == 28, "Invalid shaderPath size");

typedef stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CompoundStateBlock *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CompoundStateBlock *> > > CompoundStateMap;
typedef std::map<unsigned long,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<unsigned long>,std::allocator<std::pair<unsigned long const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > DataCont;
typedef std::vector<fstring<260>,std::allocator<fstring<260> > > FoundFiles;

/* ---------- prototypes */


_static void buildFilename(char const *name, std::vector<char const *,std::allocator<char const *> > directory, char const *loc, char *output, unsigned __int32 len);
_static __int32 getFuncId(StateCommand *com, rndTable *gl);

/* ---------- globals */

extern StateBlockManager *StateBlockManager::s_instance; // 0x101A3570

/* ---------- private variables */

_static
{
    extern std::_Nil _Nil_obj; // 0x101A3576
    extern shaderPath const shaderDirectory[10]; // 0x100E5C08
    extern std::_Ignore ignore; // 0x101A3574
    extern std::_Tuple_alloc_t _Tuple_alloc; // 0x101A3575
}

/* ---------- public code */

bool StateBlockManager::startup() // 0x100B8E80
{
    mangled_assert("?startup@StateBlockManager@@SG_NXZ");
    todo("implement");
}

_inline StateBlockManager::Data::Data() // 0x100B57D0
{
    mangled_assert("??0Data@StateBlockManager@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

bool StateBlockManager::shutdown() // 0x100B8E00
{
    mangled_assert("?shutdown@StateBlockManager@@SG_NXZ");
    todo("implement");
}

StateBlockManager *StateBlockManager::i() // 0x100B86C0
{
    mangled_assert("?i@StateBlockManager@@SGPAV1@XZ");
    todo("implement");
}

StateBlockManager::StateBlockManager() // 0x100B5830
{
    mangled_assert("??0StateBlockManager@@IAE@XZ");
    todo("implement");
}

_inline std::_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CompoundStateBlock *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CompoundStateBlock *> > >::~_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CompoundStateBlock *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CompoundStateBlock *> > >() // 0x100B5980
{
    mangled_assert("??1?$_List_buy@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVCompoundStateBlock@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVCompoundStateBlock@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_buy<std::pair<unsigned long const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<unsigned long const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >::~_Tree_buy<std::pair<unsigned long const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<unsigned long const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >() // 0x100B59C0
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBKV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@V?$allocator@U?$pair@$$CBKV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_comp<0,std::_Tmap_traits<unsigned long,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<unsigned long>,std::allocator<std::pair<unsigned long const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,0> >::~_Tree_comp<0,std::_Tmap_traits<unsigned long,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<unsigned long>,std::allocator<std::pair<unsigned long const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,0> >() // 0x100B59D0
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@KV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CompoundStateBlock *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CompoundStateBlock *> > >::~hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CompoundStateBlock *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CompoundStateBlock *> > >() // 0x100B59E0
{
    mangled_assert("??1?$hash_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVCompoundStateBlock@@V?$hash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@stdext@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVCompoundStateBlock@@@std@@@2@@stdext@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::map<unsigned long,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<unsigned long>,std::allocator<std::pair<unsigned long const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >::~map<unsigned long,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<unsigned long>,std::allocator<std::pair<unsigned long const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >() // 0x100B5A50
{
    mangled_assert("??1?$map@KV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<unsigned long const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > >::~pair<unsigned long const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > >() // 0x100B5A70
{
    mangled_assert("??1?$pair@$$CBKV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CompoundStateBlock *>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CompoundStateBlock *>() // 0x100B5AA0
{
    mangled_assert("??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVCompoundStateBlock@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CompoundStateBlock *>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CompoundStateBlock *>() // 0x100B5AD0
{
    mangled_assert("??1?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVCompoundStateBlock@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline boost::detail::sp_counted_base_impl<StateCommandBlock *,boost::checked_deleter<StateCommandBlock> >::~sp_counted_base_impl<StateCommandBlock *,boost::checked_deleter<StateCommandBlock> >() // 0x100B5B00
{
    mangled_assert("??1?$sp_counted_base_impl@PAVStateCommandBlock@@U?$checked_deleter@VStateCommandBlock@@@boost@@@detail@boost@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline StateBlockManager::Data::~Data() // 0x100B5B70
{
    mangled_assert("??1Data@StateBlockManager@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

StateBlockManager::~StateBlockManager() // 0x100B5C10
{
    mangled_assert("??1StateBlockManager@@IAE@XZ");
    todo("implement");
}

_inline Dictionary::~Dictionary() // 0x100B5BF0
{
    mangled_assert("??1Dictionary@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

bool StateBlockManager::singlePassShadows() const // 0x100B8E30
{
    mangled_assert("?singlePassShadows@StateBlockManager@@QBE_NXZ");
    todo("implement");
}

void StateBlockManager::attachGL(rndTable *) // 0x100B7110
{
    mangled_assert("?attachGL@StateBlockManager@@QAEXPAUrndTable@@@Z");
    todo("implement");
}

unsigned long StateBlockManager::getVariableKey(char const *) // 0x100B8680
{
    mangled_assert("?getVariableKey@StateBlockManager@@QAEKPBD@Z");
    todo("implement");
}

rndTable *StateBlockManager::getGL() const // 0x100B8660
{
    mangled_assert("?getGL@StateBlockManager@@QBEPAUrndTable@@XZ");
    todo("implement");
}

CompoundStateBlock *StateBlockManager::getOverrideBlock() const // 0x100B8670
{
    mangled_assert("?getOverrideBlock@StateBlockManager@@QBEPAVCompoundStateBlock@@XZ");
    todo("implement");
}

boost::shared_ptr<StateCommandBlock> StateBlockManager::createStateBlock() // 0x100B7E60
{
    mangled_assert("?createStateBlock@StateBlockManager@@AAE?AV?$shared_ptr@VStateCommandBlock@@@boost@@XZ");
    todo("implement");
}

boost::shared_ptr<StateCommandBlock> StateBlockManager::loadStateBlock(char const *, char const *) // 0x100B8840
{
    mangled_assert("?loadStateBlock@StateBlockManager@@QAE?AV?$shared_ptr@VStateCommandBlock@@@boost@@PBD0@Z");
    todo("implement");
}

CompoundStateBlock *StateBlockManager::findCompoundStateBlock(char const *, char const *) // 0x100B8480
{
    mangled_assert("?findCompoundStateBlock@StateBlockManager@@QAEPAVCompoundStateBlock@@PBD0@Z");
    todo("implement");
}

CompoundStateBlock *StateBlockManager::loadCompoundStateBlock(char const *, char const *) // 0x100B8710
{
    mangled_assert("?loadCompoundStateBlock@StateBlockManager@@AAEPAVCompoundStateBlock@@PBD0@Z");
    todo("implement");
}

void StateBlockManager::setOverrideBlock(CompoundStateBlock *) // 0x100B8DF0
{
    mangled_assert("?setOverrideBlock@StateBlockManager@@QAEXPAVCompoundStateBlock@@@Z");
    todo("implement");
}

void StateBlockManager::clearOverrideBlock() // 0x100B7580
{
    mangled_assert("?clearOverrideBlock@StateBlockManager@@QAEXXZ");
    todo("implement");
}

void StateBlockManager::resetVariables() // 0x100B8C70
{
    mangled_assert("?resetVariables@StateBlockManager@@QAEXXZ");
    todo("implement");
}

boost::shared_ptr<StateCommandBlock> StateBlockManager::createInverseBlock(StateCommandBlock const *) const // 0x100B75D0
{
    mangled_assert("?createInverseBlock@StateBlockManager@@ABE?AV?$shared_ptr@VStateCommandBlock@@@boost@@PBVStateCommandBlock@@@Z");
    todo("implement");
}

/* ---------- private code */

_static void buildFilename(char const *name, std::vector<char const *,std::allocator<char const *> > directory, char const *loc, char *output, unsigned __int32 len) // 0x100B7390
{
    mangled_assert("buildFilename");
    todo("implement");
}

_static __int32 getFuncId(StateCommand *com, rndTable *gl) // 0x100B8610
{
    mangled_assert("getFuncId");
    todo("implement");
}
#endif
