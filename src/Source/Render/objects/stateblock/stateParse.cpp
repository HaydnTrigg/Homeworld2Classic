#if 0
/* ---------- headers */

#include "decomp.h"
#include <hash_map>
#include <Objects\StateBlock\StateVariableInstance.h>
#include <xhash>
#include <util\dictionary.h>
#include <boost\config\suffix.hpp>
#include <xstring>
#include <util\utilexports.h>
#include <boost\assert.hpp>
#include <boost\checked_delete.hpp>
#include <xmemory0>
#include <Objects\pch.h>
#include <memory\memorylib.h>
#include <crtdefs.h>
#include <new>
#include <xstddef>
#include <boost\throw_exception.hpp>
#include <type_traits>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lightweight_mutex.hpp>
#include <platform\osdef.h>
#include <boost\detail\lwm_win32.hpp>
#include <xutility>
#include <profile\profile.h>
#include <xatomic0.h>
#include <utility>
#include <iostream>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <Mathlib\matvec.h>
#include <Mathlib\vector2.h>
#include <math.h>
#include <list>
#include <Objects\Texture.h>
#include <Objects\Objects.h>
#include <Objects\Core.h>
#include <gl\lotypes.h>
#include <util\stringutil.h>
#include <gl\types.h>
#include <util\colour.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <map>
#include <gl\r_types.h>
#include <xtree>
#include <Objects\StateBlock\stateParse.h>
#include <Objects\StateBlock\stateBlock.h>
#include <bitset>
#include <memory>
#include <stdint.h>
#include <functional>
#include <assert.h>
#include <xfunctional>
#include <fileio\filestream.h>
#include <fileio\fileioexports.h>
#include <fileio\bytestream.h>
#include <debug\ctassert.h>
#include <algorithm>
#include <util\types.h>
#include <gl\r_defines.h>
#include <gl\glext.h>
#include <assist\fixedstring.h>
#include <assist\stlexstring.h>
#include <Mathlib\matrix4.h>
#include <Mathlib\vector3.h>
#include <set>
#include <boost\shared_ptr.hpp>
#include <boost\config.hpp>
#include <debug\db.h>
#include <boost\config\user.hpp>
#include <boost\config\select_compiler_config.hpp>
#include <boost\config\compiler\visualc.hpp>
#include <boost\config\select_stdlib_config.hpp>
#include <Mathlib\matrix3.h>
#include <boost\config\stdlib\dinkumware.hpp>
#include <boost\config\select_platform_config.hpp>
#include <boost\config\platform\win32.hpp>
#include <boost\detail\workaround.hpp>
#include <Objects\StateBlock\stateblocktypes.h>
#include <wchar.h>
#include <string>
#include <assist\typemagic.h>
#include <tuple>
#include <Objects\TextureRegistry.h>

/* ---------- constants */

/* ---------- definitions */

typedef char char_type;
typedef char *pointer;
typedef unsigned __int32 size_type;
typedef char const *const_pointer;
typedef std::_String_iterator<std::_String_val<std::_Simple_types<char> > > iterator;
typedef std::basic_string<char,std::char_traits<char>,std::allocator<char> > stl_string;
typedef char const *const_iterator;
typedef char value_type;
typedef std::basic_string<char,std::char_traits<char>,std::allocator<char> > _Myt;
typedef vector4 colour;
typedef unsigned __int32 colour32;
typedef unsigned __int32 TextureHandle;
typedef unsigned __int32 osWindowHandle;
typedef unsigned __int32 osInstanceHandle;
typedef unsigned __int32 VertexBufferHandle;
typedef void (*MipMapEditCB)(TextureFormat, __int32, __int32, __int32, void *);
typedef stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,TexregElement,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TexregElement> > > ElementMap;
typedef std::basic_string<char,std::char_traits<char>,std::allocator<char> > key_type;
typedef std::_Wrap_alloc<std::allocator<std::_List_node<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TexregElement>,void *> > > _Alty;
typedef std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TexregElement> > allocator_type;
typedef __int32 difference_type;
typedef std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TexregElement> &reference;
typedef std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TexregElement> const &const_reference;
typedef std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TexregElement> > > > type;
typedef std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TexregElement> > >,std::_Iterator_base0> _Unchecked_const_iterator;
typedef stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > key_compare;
typedef std::pair<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TexregElement> > > >,bool> _Pairib;
typedef std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TexregElement> > > > const_local_iterator;
typedef std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TexregElement> > > > local_iterator;
typedef std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TexregElement> > > > _Unchecked_iterator;
typedef std::list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TexregElement>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TexregElement> > > _Mylist;
typedef std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TexregElement> > > >,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TexregElement> > > > > > > _Myvec;
typedef TexregElement mapped_type;
typedef unsigned long long uint64_t;
typedef unsigned __int32 uint32_t;
typedef std::map<Profile::FunctionInfo const *,Profile::Stats,std::less<Profile::FunctionInfo const *>,std::allocator<std::pair<Profile::FunctionInfo const * const,Profile::Stats> > > ChildrenMap;
typedef std::list<Profile::FunctionInfo *,std::allocator<Profile::FunctionInfo *> > FunctionList;
typedef std::_Tree_node<std::pair<Profile::FunctionInfo const * const,Profile::Stats>,void *> *_Nodeptr;
typedef std::_Tree_node<std::pair<Profile::FunctionInfo const * const,Profile::Stats>,void *> _Node;
typedef std::_Tree_node<std::pair<Profile::FunctionInfo const * const,Profile::Stats>,void *> *&_Nodepref;
typedef std::allocator<std::pair<Profile::FunctionInfo const * const,Profile::Stats> > _Alloc;
typedef std::_Wrap_alloc<std::allocator<std::_Tree_node<std::pair<Profile::FunctionInfo const * const,Profile::Stats>,void *> > > other;
typedef std::_Wrap_alloc<std::allocator<std::_Tree_node<std::pair<Profile::FunctionInfo const * const,Profile::Stats>,void *> > > _Alnod_type;
typedef unsigned long Key;
typedef std::pointer_safety::pointer_safety _Pointer_safety;
typedef boost::detail::lightweight_mutex mutex_type;
typedef void (*StateFuncI)(unsigned __int32);
typedef void (*StateFuncVp)(eVertexPrograms);
typedef void (*StateFuncFp)(eFragmentPrograms);
typedef void (*StateFuncCf)(ComparisonFunc);
typedef void (*StateFuncII)(unsigned __int32, unsigned __int32);
typedef void (*StateFuncITgm)(unsigned __int32, TexgenMode);
typedef void (*StateFuncTfTf)(TextureFilter, TextureFilter);
typedef void (*StateFuncIII)(unsigned __int32, unsigned __int32, unsigned __int32);
typedef void (*StateFuncProgIV)(eProgramType const, unsigned __int32 const, vector4 const &);
typedef void (*StateFuncCfII)(ComparisonFunc, unsigned __int32, unsigned __int32);
typedef void (*StateFuncSoSoSo)(StencilOp, StencilOp, StencilOp);
typedef void (*StateFuncTwTwTw)(TextureWrap, TextureWrap, TextureWrap);
typedef void (*StateFuncIIII)(unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32);
typedef void (*StateFuncIIIIII)(unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32);
typedef void (*StateFuncIIIIIIIBBB)(unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, bool, bool, bool);
typedef bool (*StateFuncIB)(unsigned __int32, bool);
typedef void (*StateFuncIC)(unsigned __int32, vector4 const &);
typedef void (*StateFuncIIF)(unsigned __int32, unsigned __int32, float);
typedef void (*StateFuncIFP)(unsigned __int32, float const *);
typedef void (*StateFuncIIFP)(unsigned __int32, unsigned __int32, float const *);
typedef void (*StateFuncC)(vector4 const &);
typedef void (*StateFuncB)(bool);
typedef void (*StateFuncBBBB)(bool, bool, bool, bool);
typedef void (*StateFuncF)(float);
typedef void (*StateFuncFF)(float, float);
typedef void (*StateFuncT)(unsigned __int32);
typedef void (*StateFuncIBV)(unsigned __int32, bool, vector4 const &);
typedef void (*StateFuncM)(matrix4 const &);
typedef void (*StateFuncIT)(__int32, unsigned __int32);
typedef std::vector<StateVariable::CommandData,std::allocator<StateVariable::CommandData> > CommandDataCont;
typedef void *void_pointer;
typedef void const *const_void_pointer;
typedef std::integral_constant<bool,0> propagate_on_container_copy_assignment;
typedef std::integral_constant<bool,0> propagate_on_container_move_assignment;
typedef std::integral_constant<bool,0> propagate_on_container_swap;
typedef std::allocator<StateVariable::CommandData> _Mybase;
typedef std::vector<StateCommand *,std::allocator<StateCommand *> > StateCommandCont;
typedef std::vector<StateVariable *,std::allocator<StateVariable *> > StateVariableCont;
typedef char _Elem;
typedef std::vector<boost::shared_ptr<StateCommandBlock>,std::allocator<boost::shared_ptr<StateCommandBlock> > > BlockCont;
typedef std::bitset<32> BlockMask;
typedef unsigned long _Ty;
typedef unsigned char yytype_uint8;
typedef unsigned short yytype_uint16;
typedef short yytype_int16;
typedef StateCommandBlock **unspecified_bool_type() const;
typedef unsigned __int32 _Sizet;
typedef std::_Vb_reference<std::_Wrap_alloc<std::allocator<unsigned int> > > _Mytype;
typedef std::vector<unsigned int,std::allocator<bool> > _Vectype;
typedef __int32 _Dift;
typedef std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Profile::FunctionInfo const * const,Profile::Stats> > >,std::_Iterator_base0> _Myiter;
typedef std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Profile::FunctionInfo const * const,Profile::Stats> > >,std::_Iterator_base0> _Unchecked_type;
typedef StateCommand **_Tptr;
typedef std::_Vb_reference<std::_Wrap_alloc<std::allocator<unsigned int> > > _Reft;
typedef std::pair<Profile::FunctionInfo const * const,Profile::Stats> &_Reftype;
typedef boost::shared_ptr<StateCommandBlock> this_type;
typedef std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > value_compare;

/* ---------- prototypes */

extern StateSymbol *stateSymbolLookup(char *name);
extern StateSymbol *stateSymbolLookupCreate(char *name);
extern void parseStateFile(char const *filename);
extern __int32 readParseBuffer(char *buf, __int32 maxSize);
extern void stateParserShutdown();
extern void staticVariableClear();
extern void staticVariableCreate(char *name);
extern std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &staticVariableGet();

/* ---------- globals */

extern bool g_loadCompound; // 0x101A358C
extern std::vector<StateParserVariable *,std::allocator<StateParserVariable *> > g_commandVarStack; // 0x101A359C
extern std::vector<StateParserVariable *,std::allocator<StateParserVariable *> > g_varStack; // 0x101A35A8
extern std::vector<boost::shared_ptr<StateCommandBlock>,std::allocator<boost::shared_ptr<StateCommandBlock> > > g_commandBlockStack; // 0x101A35D0
extern std::vector<bool,std::allocator<bool> > g_compoundBlockActiveStack; // 0x101A35C0
extern std::vector<boost::shared_ptr<StateCommandBlock>,std::allocator<boost::shared_ptr<StateCommandBlock> > > g_compoundBlockStack; // 0x101A35B4
extern StateFunc g_stateFunc; // 0x101A3580
extern boost::shared_ptr<StateCommandBlock> g_loadBlock; // 0x101A35F0
extern boost::shared_ptr<StateCommandBlock> g_curBlock; // 0x101A35E8
extern CompoundStateBlock *g_loadCompBlock; // 0x101A3584
extern char const *g_searchBlockName; // 0x101A3588
extern std::vector<StateCommand *,std::allocator<StateCommand *> > g_commandList; // 0x101A35DC
extern std::set<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > s_staticVariables; // 0x101A35F8

/* ---------- private variables */

_static
{
    extern std::_Ignore ignore; // 0x101A358D
    extern std::_Tuple_alloc_t _Tuple_alloc; // 0x101A358E
    extern std::vector<StateSymbol *,std::allocator<StateSymbol *> > g_symbolTable; // 0x101A3590
    extern char *g_fileBuffer; // 0x101A3600
    extern char *g_curPos; // 0x101A3604
    extern __int32 g_fileLength; // 0x101A3608
    extern std::_Nil _Nil_obj; // 0x101A358F
}

/* ---------- public code */

_extern StateSymbol *_sub_100BD2A0(char *);
StateSymbol *stateSymbolLookup(char *name) // 0x100BD2A0
{
    mangled_assert("?stateSymbolLookup@@YGPAUStateSymbol@@PAD@Z");
    todo("implement");
    StateSymbol * __result = _sub_100BD2A0(name);
    return __result;
}

_extern StateSymbol *_sub_100BD2F0(char *);
StateSymbol *stateSymbolLookupCreate(char *name) // 0x100BD2F0
{
    mangled_assert("?stateSymbolLookupCreate@@YGPAUStateSymbol@@PAD@Z");
    todo("implement");
    StateSymbol * __result = _sub_100BD2F0(name);
    return __result;
}

_extern void _sub_100BCE80(char const *);
void parseStateFile(char const *filename) // 0x100BCE80
{
    mangled_assert("?parseStateFile@@YGXPBD@Z");
    todo("implement");
    _sub_100BCE80(filename);
}

_extern __int32 _sub_100BD0E0(char *, __int32);
__int32 readParseBuffer(char *buf, __int32 maxSize) // 0x100BD0E0
{
    mangled_assert("?readParseBuffer@@YGHPADH@Z");
    todo("implement");
    __int32 __result = _sub_100BD0E0(buf, maxSize);
    return __result;
}

_extern void _sub_100BD240();
void stateParserShutdown() // 0x100BD240
{
    mangled_assert("?stateParserShutdown@@YGXXZ");
    todo("implement");
    _sub_100BD240();
}

_extern void _sub_100BD400();
void staticVariableClear() // 0x100BD400
{
    mangled_assert("?staticVariableClear@@YGXXZ");
    todo("implement");
    _sub_100BD400();
}

_extern void _sub_100BD440(char *);
void staticVariableCreate(char *name) // 0x100BD440
{
    mangled_assert("?staticVariableCreate@@YGXPAD@Z");
    todo("implement");
    _sub_100BD440(name);
}

_extern std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &_sub_100BD4E0();
std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &staticVariableGet() // 0x100BD4E0
{
    mangled_assert("?staticVariableGet@@YGAAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ");
    todo("implement");
    std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > & __result = _sub_100BD4E0();
    return __result;
}

_extern void _sub_100BBEF0(std::_Tree_buy<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > *const);
_inline std::_Tree_buy<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >::~_Tree_buy<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >() // 0x100BBEF0
{
    mangled_assert("??1?$_Tree_buy@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_100BBEF0(this);
}

_extern void _sub_100BBF00(std::_Tree_comp<0,std::_Tset_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,0> > *const);
_inline std::_Tree_comp<0,std::_Tset_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,0> >::~_Tree_comp<0,std::_Tset_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,0> >() // 0x100BBF00
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tset_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_100BBF00(this);
}

_extern void _sub_100BBF10(std::set<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > *const);
_inline std::set<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >::~set<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >() // 0x100BBF10
{
    mangled_assert("??1?$set@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_100BBF10(this);
}

/* ---------- private code */
#endif
