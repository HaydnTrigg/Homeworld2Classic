#if 0
/* ---------- headers */

#include "decomp.h"
#include <hash_map>
#include <xhash>
#include <xstring>
#include <xmemory0>
#include <Objects\pch.h>
#include <memory\memorylib.h>
#include <crtdefs.h>
#include <Mathlib\matrix4.h>
#include <Mathlib\vector3.h>
#include <debug\ctassert.h>
#include <new>
#include <assist\faststring.h>
#include <xstddef>
#include <type_traits>
#include <debug\ctmessage.h>
#include <Mathlib\matrix3.h>
#include <Objects\vertex_program.h>
#include <xutility>
#include <xatomic0.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <boost\shared_ptr.hpp>
#include <xmemory>
#include <boost\config.hpp>
#include <boost\config\user.hpp>
#include <boost\config\select_compiler_config.hpp>
#include <boost\config\compiler\visualc.hpp>
#include <boost\config\select_stdlib_config.hpp>
#include <boost\config\stdlib\dinkumware.hpp>
#include <Objects\StateBlock\stateblocktypes.h>
#include <boost\config\select_platform_config.hpp>
#include <math.h>
#include <boost\config\platform\win32.hpp>
#include <list>
#include <Objects\TextureRegistry.h>
#include <Objects\StateBlock\StateVariableInstance.h>
#include <util\dictionary.h>
#include <boost\detail\workaround.hpp>
#include <util\utilexports.h>
#include <map>
#include <xtree>
#include <tuple>
#include <boost\config\suffix.hpp>
#include <boost\assert.hpp>
#include <Objects\StateBlock\StateBlockMeasure.h>
#include <boost\checked_delete.hpp>
#include <stack>
#include <deque>
#include <assert.h>
#include <platform\osdef.h>
#include <algorithm>
#include <util\types.h>
#include <profile\profile.h>
#include <iostream>
#include <boost\throw_exception.hpp>
#include <Mathlib\matvec.h>
#include <boost\detail\shared_count.hpp>
#include <Objects\StateBlock\stateParse.h>
#include <Mathlib\vector2.h>
#include <boost\detail\lightweight_mutex.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <Objects\Texture.h>
#include <Objects\Objects.h>
#include <Objects\Core.h>
#include <gl\lotypes.h>
#include <gl\types.h>
#include <util\colour.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <gl\r_types.h>
#include <Objects\StateBlock\stateBlock.h>
#include <bitset>
#include <debug\db.h>
#include <Objects\miscTextures.h>
#include <string>
#include <memory>
#include <stdint.h>
#include <Objects\StateBlock\StateBlockManager.h>
#include <gl\r_defines.h>
#include <gl\glext.h>
#include <functional>
#include <xfunctional>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */


_static void executeCommand(rndTable *gl, StateCommand const *command);

/* ---------- globals */

extern CompoundStateBlock *g_testBlock; // 0x101A3568

/* ---------- private variables */

_static
{
    extern std::_Nil _Nil_obj; // 0x101A356E
    extern unsigned __int32 stateVarSize[7]; // 0x10111FD0
    extern std::_Ignore ignore; // 0x101A356C
    extern std::_Tuple_alloc_t _Tuple_alloc; // 0x101A356D
}

/* ---------- public code */

_extern _sub_100B2050(StateVariable *const, char const *, StateVarType);
StateVariable::StateVariable(char const *, StateVarType) // 0x100B2050
{
    mangled_assert("??0StateVariable@@QAE@PBDW4StateVarType@@@Z");
    todo("implement");
    _sub_100B2050(this, arg, arg);
}

_extern _sub_100B1FE0(StateVariable *const, StateVariable const &);
StateVariable::StateVariable(StateVariable const &) // 0x100B1FE0
{
    mangled_assert("??0StateVariable@@QAE@ABV0@@Z");
    todo("implement");
    _sub_100B1FE0(this, arg);
}

_extern void _sub_100B2620(StateVariable *const);
StateVariable::~StateVariable() // 0x100B2620
{
    mangled_assert("??1StateVariable@@QAE@XZ");
    todo("implement");
    _sub_100B2620(this);
}

_extern _sub_100B1F40(StateCommandBlock *const);
StateCommandBlock::StateCommandBlock() // 0x100B1F40
{
    mangled_assert("??0StateCommandBlock@@QAE@XZ");
    todo("implement");
    _sub_100B1F40(this);
}

_extern void _sub_100B2520(StateCommandBlock *const);
StateCommandBlock::~StateCommandBlock() // 0x100B2520
{
    mangled_assert("??1StateCommandBlock@@QAE@XZ");
    todo("implement");
    _sub_100B2520(this);
}

_extern void _sub_100B4180(StateCommandBlock *const, char const *);
void StateCommandBlock::setName(char const *) // 0x100B4180
{
    mangled_assert("?setName@StateCommandBlock@@QAEXPBD@Z");
    todo("implement");
    _sub_100B4180(this, arg);
}

_extern _sub_100B1840(CompoundStateBlock *const);
CompoundStateBlock::CompoundStateBlock() // 0x100B1840
{
    mangled_assert("??0CompoundStateBlock@@QAE@XZ");
    todo("implement");
    _sub_100B1840(this);
}

_extern void _sub_100B2130(CompoundStateBlock *const);
CompoundStateBlock::~CompoundStateBlock() // 0x100B2130
{
    mangled_assert("??1CompoundStateBlock@@QAE@XZ");
    todo("implement");
    _sub_100B2130(this);
}

_extern void _sub_100B4140(CompoundStateBlock *const, char const *);
void CompoundStateBlock::setName(char const *) // 0x100B4140
{
    mangled_assert("?setName@CompoundStateBlock@@QAEXPBD@Z");
    todo("implement");
    _sub_100B4140(this, arg);
}

_extern void _sub_100B3170(StateVariable *const, StateCommand *, void *);
void StateVariable::addInstance(StateCommand *, void *) // 0x100B3170
{
    mangled_assert("?addInstance@StateVariable@@QAEXPAUStateCommand@@PAX@Z");
    todo("implement");
    _sub_100B3170(this, arg, arg);
}

_extern _sub_100B1F30(StateCommand *const);
StateCommand::StateCommand() // 0x100B1F30
{
    mangled_assert("??0StateCommand@@QAE@XZ");
    todo("implement");
    _sub_100B1F30(this);
}

_extern _sub_100B1920(StateCommand *const, StateCommandBlock *, StateFuncID, StateFunc, std::vector<StateParserVariable *,std::allocator<StateParserVariable *> > &);
StateCommand::StateCommand(StateCommandBlock *, StateFuncID, StateFunc, std::vector<StateParserVariable *,std::allocator<StateParserVariable *> > &) // 0x100B1920
{
    mangled_assert("??0StateCommand@@QAE@PAVStateCommandBlock@@W4StateFuncID@@TStateFunc@@AAV?$vector@PAUStateParserVariable@@V?$allocator@PAUStateParserVariable@@@std@@@std@@@Z");
    todo("implement");
    _sub_100B1920(this, arg, arg, arg, arg);
}

_extern void _sub_100B31A0(StateCommandBlock *const, char *, StateVarType);
void StateCommandBlock::addVariable(char *, StateVarType) // 0x100B31A0
{
    mangled_assert("?addVariable@StateCommandBlock@@QAEXPADW4StateVarType@@@Z");
    todo("implement");
    _sub_100B31A0(this, arg, arg);
}

_extern void _sub_100B2F40(StateCommandBlock *const, StateFuncID, StateFunc, std::vector<StateParserVariable *,std::allocator<StateParserVariable *> > &);
void StateCommandBlock::addCommand(StateFuncID, StateFunc, std::vector<StateParserVariable *,std::allocator<StateParserVariable *> > &) // 0x100B2F40
{
    mangled_assert("?addCommand@StateCommandBlock@@QAEXW4StateFuncID@@TStateFunc@@AAV?$vector@PAUStateParserVariable@@V?$allocator@PAUStateParserVariable@@@std@@@std@@@Z");
    todo("implement");
    _sub_100B2F40(this, arg, arg, arg);
}

_extern void _sub_100B3710(StateCommandBlock *const, StateCommandBlock::ExecuteFilter *);
void StateCommandBlock::execute(StateCommandBlock::ExecuteFilter *) // 0x100B3710
{
    mangled_assert("?execute@StateCommandBlock@@QAEXPAVExecuteFilter@1@@Z");
    todo("implement");
    _sub_100B3710(this, arg);
}

_extern void _sub_100B4010(StateCommandBlock *const);
void StateCommandBlock::resetVariables() // 0x100B4010
{
    mangled_assert("?resetVariables@StateCommandBlock@@QAEXXZ");
    todo("implement");
    _sub_100B4010(this);
}

_extern StateVariable *_sub_100B3B40(StateCommandBlock *const, char *);
StateVariable *StateCommandBlock::findVariable(char *) // 0x100B3B40
{
    mangled_assert("?findVariable@StateCommandBlock@@QAEPAVStateVariable@@PAD@Z");
    todo("implement");
    StateVariable * __result = _sub_100B3B40(this, arg);
    return __result;
}

_extern bool _sub_100B4220(StateCommandBlock *const, __int32, void *);
bool StateCommandBlock::setVariable(__int32, void *) // 0x100B4220
{
    mangled_assert("?setVariable@StateCommandBlock@@QAE_NHPAX@Z");
    todo("implement");
    bool __result = _sub_100B4220(this, arg, arg);
    return __result;
}

_extern bool _sub_100B41C0(CompoundStateBlock *const, __int32, void *);
bool CompoundStateBlock::setVariable(__int32, void *) // 0x100B41C0
{
    mangled_assert("?setVariable@CompoundStateBlock@@QAE_NHPAX@Z");
    todo("implement");
    bool __result = _sub_100B41C0(this, arg, arg);
    return __result;
}

_extern __int32 _sub_100B3BC0(CompoundStateBlock const *const, char const *);
__int32 CompoundStateBlock::findVariableIndex(char const *) const // 0x100B3BC0
{
    mangled_assert("?findVariableIndex@CompoundStateBlock@@QBEHPBD@Z");
    todo("implement");
    __int32 __result = _sub_100B3BC0(this, arg);
    return __result;
}

_extern __int32 _sub_100B3B90(CompoundStateBlock const *const, unsigned long);
__int32 CompoundStateBlock::findVariableIndex(unsigned long) const // 0x100B3B90
{
    mangled_assert("?findVariableIndex@CompoundStateBlock@@QBEHK@Z");
    todo("implement");
    __int32 __result = _sub_100B3B90(this, arg);
    return __result;
}

_extern StateVariable *_sub_100B3B10(CompoundStateBlock const *const, char const *);
StateVariable *CompoundStateBlock::findVariable(char const *) const // 0x100B3B10
{
    mangled_assert("?findVariable@CompoundStateBlock@@QBEPAVStateVariable@@PBD@Z");
    todo("implement");
    StateVariable * __result = _sub_100B3B10(this, arg);
    return __result;
}

_extern StateVariable *_sub_100B3AC0(CompoundStateBlock const *const, unsigned long);
StateVariable *CompoundStateBlock::findVariable(unsigned long) const // 0x100B3AC0
{
    mangled_assert("?findVariable@CompoundStateBlock@@QBEPAVStateVariable@@K@Z");
    todo("implement");
    StateVariable * __result = _sub_100B3AC0(this, arg);
    return __result;
}

_extern void _sub_100B32D0(CompoundStateBlock *const, boost::shared_ptr<StateCommandBlock>, bool);
void CompoundStateBlock::appendStateBlock(boost::shared_ptr<StateCommandBlock>, bool) // 0x100B32D0
{
    mangled_assert("?appendStateBlock@CompoundStateBlock@@QAEXV?$shared_ptr@VStateCommandBlock@@@boost@@_N@Z");
    todo("implement");
    _sub_100B32D0(this, arg, arg);
}

_extern __int32 _sub_100B3D30(CompoundStateBlock const *const);
__int32 CompoundStateBlock::getNumBlocks() const // 0x100B3D30
{
    mangled_assert("?getNumBlocks@CompoundStateBlock@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_100B3D30(this);
    return __result;
}

_extern boost::shared_ptr<StateCommandBlock> _sub_100B3C20(CompoundStateBlock const *const, __int32);
boost::shared_ptr<StateCommandBlock> CompoundStateBlock::getBlock(__int32) const // 0x100B3C20
{
    mangled_assert("?getBlock@CompoundStateBlock@@QBE?AV?$shared_ptr@VStateCommandBlock@@@boost@@H@Z");
    todo("implement");
    boost::shared_ptr<StateCommandBlock> __result = _sub_100B3C20(this, arg);
    return __result;
}

_extern boost::shared_ptr<StateCommandBlock> _sub_100B3CA0(CompoundStateBlock const *const, __int32);
boost::shared_ptr<StateCommandBlock> CompoundStateBlock::getInvBlock(__int32) const // 0x100B3CA0
{
    mangled_assert("?getInvBlock@CompoundStateBlock@@QBE?AV?$shared_ptr@VStateCommandBlock@@@boost@@H@Z");
    todo("implement");
    boost::shared_ptr<StateCommandBlock> __result = _sub_100B3CA0(this, arg);
    return __result;
}

_extern void _sub_100B4280(CompoundStateBlock *const, StateVariableInstance const &);
void CompoundStateBlock::setVariables(StateVariableInstance const &) // 0x100B4280
{
    mangled_assert("?setVariables@CompoundStateBlock@@QAEXABVStateVariableInstance@@@Z");
    todo("implement");
    _sub_100B4280(this, arg);
}

_extern void _sub_100B3970(CompoundStateBlock *const, StateVariableInstance const &, CompoundStateBlock::ExecuteVarFilter *);
void CompoundStateBlock::executeVariables(StateVariableInstance const &, CompoundStateBlock::ExecuteVarFilter *) // 0x100B3970
{
    mangled_assert("?executeVariables@CompoundStateBlock@@QAEXABVStateVariableInstance@@PAVExecuteVarFilter@1@@Z");
    todo("implement");
    _sub_100B3970(this, arg, arg);
}

_extern bool _sub_100B3A60(CompoundStateBlock const *const, char const *, unsigned __int32 &);
bool CompoundStateBlock::findStaticVariable(char const *, unsigned __int32 &) const // 0x100B3A60
{
    mangled_assert("?findStaticVariable@CompoundStateBlock@@QBE_NPBDAAI@Z");
    todo("implement");
    bool __result = _sub_100B3A60(this, arg, arg);
    return __result;
}

_extern char const *_sub_100B3D80(CompoundStateBlock const *const, unsigned __int32);
char const *CompoundStateBlock::getStaticVariable(unsigned __int32) const // 0x100B3D80
{
    mangled_assert("?getStaticVariable@CompoundStateBlock@@QBEPBDI@Z");
    todo("implement");
    char const * __result = _sub_100B3D80(this, arg);
    return __result;
}

/* ---------- private code */

_extern void _sub_100B3770(rndTable *, StateCommand const *);
_static void executeCommand(rndTable *gl, StateCommand const *command) // 0x100B3770
{
    mangled_assert("executeCommand");
    todo("implement");
    _sub_100B3770(gl, command);
}
#endif
