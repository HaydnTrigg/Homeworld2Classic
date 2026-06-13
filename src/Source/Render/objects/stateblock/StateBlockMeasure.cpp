#if 0
/* ---------- headers */

#include "decomp.h"
#include <hash_map>
#include <xhash>
#include <xstring>
#include <xmemory0>
#include <Objects\pch.h>
#include <memory\memorylib.h>
#include <Objects\StateBlock\StateVariableInstance.h>
#include <crtdefs.h>
#include <util\dictionary.h>
#include <boost\detail\workaround.hpp>
#include <util\utilexports.h>
#include <Objects\TextureRegistry.h>
#include <tuple>
#include <new>
#include <boost\config\suffix.hpp>
#include <xstddef>
#include <boost\assert.hpp>
#include <type_traits>
#include <boost\checked_delete.hpp>
#include <xutility>
#include <xatomic0.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <profile\profile.h>
#include <iostream>
#include <math.h>
#include <boost\throw_exception.hpp>
#include <platform\osdef.h>
#include <fileio\filestream.h>
#include <list>
#include <boost\detail\shared_count.hpp>
#include <fileio\fileioexports.h>
#include <boost\detail\lightweight_mutex.hpp>
#include <fileio\bytestream.h>
#include <boost\detail\lwm_win32.hpp>
#include <assist\fixedstring.h>
#include <assist\stlexstring.h>
#include <Mathlib\matvec.h>
#include <map>
#include <Mathlib\vector2.h>
#include <xtree>
#include <Objects\Texture.h>
#include <Objects\Core.h>
#include <gl\lotypes.h>
#include <gl\types.h>
#include <util\colour.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <gl\r_types.h>
#include <assert.h>
#include <Objects\StateBlock\stateBlock.h>
#include <bitset>
#include <algorithm>
#include <util\types.h>
#include <memory>
#include <assist\typemagic.h>
#include <stdint.h>
#include <functional>
#include <xfunctional>
#include <gl\r_defines.h>
#include <gl\glext.h>
#include <Objects\StateBlock\StateBlockMeasure.h>
#include <Objects\Objects.h>
#include <stack>
#include <debug\db.h>
#include <deque>
#include <debug\ctassert.h>
#include <Mathlib\matrix4.h>
#include <Mathlib\vector3.h>
#include <boost\shared_ptr.hpp>
#include <boost\config.hpp>
#include <wchar.h>
#include <string>
#include <Mathlib\matrix3.h>
#include <boost\config\user.hpp>
#include <boost\config\select_compiler_config.hpp>
#include <boost\config\compiler\visualc.hpp>
#include <boost\config\select_stdlib_config.hpp>
#include <boost\config\stdlib\dinkumware.hpp>
#include <Objects\StateBlock\stateblocktypes.h>
#include <boost\config\select_platform_config.hpp>
#include <boost\config\platform\win32.hpp>

/* ---------- constants */

/* ---------- definitions */

typedef std::map<long,unsigned int,std::less<long>,std::allocator<std::pair<long const ,unsigned int> > > CommandMap;
typedef std::vector<StateBlockMeasure::RenderFrame,std::allocator<StateBlockMeasure::RenderFrame> > RenderFrameCont;
typedef std::stack<StateBlockMeasure::Frame,std::deque<StateBlockMeasure::Frame,std::allocator<StateBlockMeasure::Frame> > > FrameStack;
typedef StateBlockMeasure::Frame **_Mapptr;
typedef std::_Wrap_alloc<std::allocator<StateBlockMeasure::Frame *> > _Alpty;
typedef std::random_access_iterator_tag iterator_category;
typedef std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<StateBlockMeasure::Frame> > > iterator_type;

/* ---------- prototypes */

/* ---------- globals */

extern StateBlockMeasure *StateBlockMeasure::s_instance; // 0x101A3578

/* ---------- private variables */

_static
{
    extern std::_Nil _Nil_obj; // 0x101A357E
    extern std::_Ignore ignore; // 0x101A357C
    extern std::_Tuple_alloc_t _Tuple_alloc; // 0x101A357D
}

/* ---------- public code */

_extern StateBlockMeasure *_sub_100BA8C0();
StateBlockMeasure *StateBlockMeasure::Instance() // 0x100BA8C0
{
    mangled_assert("?Instance@StateBlockMeasure@@SGPAV1@XZ");
    todo("implement");
    StateBlockMeasure * __result = _sub_100BA8C0();
    return __result;
}

_extern _sub_100BA180(StateBlockMeasure *const);
StateBlockMeasure::StateBlockMeasure() // 0x100BA180
{
    mangled_assert("??0StateBlockMeasure@@QAE@XZ");
    todo("implement");
    _sub_100BA180(this);
}

_extern void _sub_100BA1D0(std::move_iterator<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<StateBlockMeasure::Frame> > > > *const);
_inline std::move_iterator<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<StateBlockMeasure::Frame> > > >::~move_iterator<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<StateBlockMeasure::Frame> > > >() // 0x100BA1D0
{
    mangled_assert("??1?$move_iterator@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@VFrame@StateBlockMeasure@@@std@@@std@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_100BA1D0(this);
}

_extern _sub_100B9F90(std::move_iterator<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<StateBlockMeasure::Frame> > > > *const, std::move_iterator<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<StateBlockMeasure::Frame> > > > const &);
_inline std::move_iterator<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<StateBlockMeasure::Frame> > > >::move_iterator<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<StateBlockMeasure::Frame> > > >(std::move_iterator<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<StateBlockMeasure::Frame> > > > const &) // 0x100B9F90
{
    mangled_assert("??0?$move_iterator@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@VFrame@StateBlockMeasure@@@std@@@std@@@std@@@std@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
    _sub_100B9F90(this, arg);
}

_extern void _sub_100BA970(StateBlockMeasure *const, char const *);
void StateBlockMeasure::PushFrame(char const *) // 0x100BA970
{
    mangled_assert("?PushFrame@StateBlockMeasure@@QAEXPBD@Z");
    todo("implement");
    _sub_100BA970(this, arg);
}

_extern void _sub_100BA940(StateBlockMeasure *const);
void StateBlockMeasure::PopFrame() // 0x100BA940
{
    mangled_assert("?PopFrame@StateBlockMeasure@@QAEXXZ");
    todo("implement");
    _sub_100BA940(this);
}

_extern void _sub_100BA510(StateBlockMeasure *const);
void StateBlockMeasure::Clear() // 0x100BA510
{
    mangled_assert("?Clear@StateBlockMeasure@@QAEXXZ");
    todo("implement");
    _sub_100BA510(this);
}

_extern void _sub_100BA860(StateBlockMeasure *const, std::map<long,unsigned int,std::less<long>,std::allocator<std::pair<long const ,unsigned int> > > &, long);
void StateBlockMeasure::IncrementCommandMap(std::map<long,unsigned int,std::less<long>,std::allocator<std::pair<long const ,unsigned int> > > &, long) // 0x100BA860
{
    mangled_assert("?IncrementCommandMap@StateBlockMeasure@@AAEXAAV?$map@JIU?$less@J@std@@V?$allocator@U?$pair@$$CBJI@std@@@2@@std@@J@Z");
    todo("implement");
    _sub_100BA860(this, arg, arg);
}

_extern void _sub_100BA7A0(StateBlockMeasure *const, StateCommand const *);
void StateBlockMeasure::Increment(StateCommand const *) // 0x100BA7A0
{
    mangled_assert("?Increment@StateBlockMeasure@@QAEXPBUStateCommand@@@Z");
    todo("implement");
    _sub_100BA7A0(this, arg);
}

_extern void _sub_100BA6E0(StateBlockMeasure const *const, rndTable &, FileStream &, std::map<long,unsigned int,std::less<long>,std::allocator<std::pair<long const ,unsigned int> > > const &);
void StateBlockMeasure::DumpCommandMap(rndTable &, FileStream &, std::map<long,unsigned int,std::less<long>,std::allocator<std::pair<long const ,unsigned int> > > const &) const // 0x100BA6E0
{
    mangled_assert("?DumpCommandMap@StateBlockMeasure@@ABEXAAUrndTable@@AAVFileStream@@ABV?$map@JIU?$less@J@std@@V?$allocator@U?$pair@$$CBJI@std@@@2@@std@@@Z");
    todo("implement");
    _sub_100BA6E0(this, arg, arg, arg);
}

_extern void _sub_100BA5B0(StateBlockMeasure *const, rndTable &, char const *);
void StateBlockMeasure::Dump(rndTable &, char const *) // 0x100BA5B0
{
    mangled_assert("?Dump@StateBlockMeasure@@QAEXAAUrndTable@@PBD@Z");
    todo("implement");
    _sub_100BA5B0(this, arg, arg);
}

_extern void _sub_100BA9D0(StateBlockMeasure *const, unsigned __int32);
void StateBlockMeasure::RenderCall(unsigned __int32) // 0x100BA9D0
{
    mangled_assert("?RenderCall@StateBlockMeasure@@QAEXI@Z");
    todo("implement");
    _sub_100BA9D0(this, arg);
}

/* ---------- private code */
#endif
