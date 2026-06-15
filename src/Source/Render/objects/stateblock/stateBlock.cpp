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

StateVariable::StateVariable(char const *, StateVarType) // 0x100B2050
{
    mangled_assert("??0StateVariable@@QAE@PBDW4StateVarType@@@Z");
    todo("implement");
}

StateVariable::StateVariable(StateVariable const &) // 0x100B1FE0
{
    mangled_assert("??0StateVariable@@QAE@ABV0@@Z");
    todo("implement");
}

StateVariable::~StateVariable() // 0x100B2620
{
    mangled_assert("??1StateVariable@@QAE@XZ");
    todo("implement");
}

StateCommandBlock::StateCommandBlock() // 0x100B1F40
{
    mangled_assert("??0StateCommandBlock@@QAE@XZ");
    todo("implement");
}

StateCommandBlock::~StateCommandBlock() // 0x100B2520
{
    mangled_assert("??1StateCommandBlock@@QAE@XZ");
    todo("implement");
}

void StateCommandBlock::setName(char const *) // 0x100B4180
{
    mangled_assert("?setName@StateCommandBlock@@QAEXPBD@Z");
    todo("implement");
}

CompoundStateBlock::CompoundStateBlock() // 0x100B1840
{
    mangled_assert("??0CompoundStateBlock@@QAE@XZ");
    todo("implement");
}

CompoundStateBlock::~CompoundStateBlock() // 0x100B2130
{
    mangled_assert("??1CompoundStateBlock@@QAE@XZ");
    todo("implement");
}

void CompoundStateBlock::setName(char const *) // 0x100B4140
{
    mangled_assert("?setName@CompoundStateBlock@@QAEXPBD@Z");
    todo("implement");
}

void StateVariable::addInstance(StateCommand *, void *) // 0x100B3170
{
    mangled_assert("?addInstance@StateVariable@@QAEXPAUStateCommand@@PAX@Z");
    todo("implement");
}

StateCommand::StateCommand() // 0x100B1F30
{
    mangled_assert("??0StateCommand@@QAE@XZ");
    todo("implement");
}

StateCommand::StateCommand(StateCommandBlock *, StateFuncID, StateFunc, std::vector<StateParserVariable *,std::allocator<StateParserVariable *> > &) // 0x100B1920
{
    mangled_assert("??0StateCommand@@QAE@PAVStateCommandBlock@@W4StateFuncID@@TStateFunc@@AAV?$vector@PAUStateParserVariable@@V?$allocator@PAUStateParserVariable@@@std@@@std@@@Z");
    todo("implement");
}

void StateCommandBlock::addVariable(char *, StateVarType) // 0x100B31A0
{
    mangled_assert("?addVariable@StateCommandBlock@@QAEXPADW4StateVarType@@@Z");
    todo("implement");
}

void StateCommandBlock::addCommand(StateFuncID, StateFunc, std::vector<StateParserVariable *,std::allocator<StateParserVariable *> > &) // 0x100B2F40
{
    mangled_assert("?addCommand@StateCommandBlock@@QAEXW4StateFuncID@@TStateFunc@@AAV?$vector@PAUStateParserVariable@@V?$allocator@PAUStateParserVariable@@@std@@@std@@@Z");
    todo("implement");
}

void StateCommandBlock::execute(StateCommandBlock::ExecuteFilter *) // 0x100B3710
{
    mangled_assert("?execute@StateCommandBlock@@QAEXPAVExecuteFilter@1@@Z");
    todo("implement");
}

void StateCommandBlock::resetVariables() // 0x100B4010
{
    mangled_assert("?resetVariables@StateCommandBlock@@QAEXXZ");
    todo("implement");
}

StateVariable *StateCommandBlock::findVariable(char *) // 0x100B3B40
{
    mangled_assert("?findVariable@StateCommandBlock@@QAEPAVStateVariable@@PAD@Z");
    todo("implement");
}

bool StateCommandBlock::setVariable(__int32, void *) // 0x100B4220
{
    mangled_assert("?setVariable@StateCommandBlock@@QAE_NHPAX@Z");
    todo("implement");
}

bool CompoundStateBlock::setVariable(__int32, void *) // 0x100B41C0
{
    mangled_assert("?setVariable@CompoundStateBlock@@QAE_NHPAX@Z");
    todo("implement");
}

__int32 CompoundStateBlock::findVariableIndex(char const *) const // 0x100B3BC0
{
    mangled_assert("?findVariableIndex@CompoundStateBlock@@QBEHPBD@Z");
    todo("implement");
}

__int32 CompoundStateBlock::findVariableIndex(unsigned long) const // 0x100B3B90
{
    mangled_assert("?findVariableIndex@CompoundStateBlock@@QBEHK@Z");
    todo("implement");
}

StateVariable *CompoundStateBlock::findVariable(char const *) const // 0x100B3B10
{
    mangled_assert("?findVariable@CompoundStateBlock@@QBEPAVStateVariable@@PBD@Z");
    todo("implement");
}

StateVariable *CompoundStateBlock::findVariable(unsigned long) const // 0x100B3AC0
{
    mangled_assert("?findVariable@CompoundStateBlock@@QBEPAVStateVariable@@K@Z");
    todo("implement");
}

void CompoundStateBlock::appendStateBlock(boost::shared_ptr<StateCommandBlock>, bool) // 0x100B32D0
{
    mangled_assert("?appendStateBlock@CompoundStateBlock@@QAEXV?$shared_ptr@VStateCommandBlock@@@boost@@_N@Z");
    todo("implement");
}

__int32 CompoundStateBlock::getNumBlocks() const // 0x100B3D30
{
    mangled_assert("?getNumBlocks@CompoundStateBlock@@QBEHXZ");
    todo("implement");
}

boost::shared_ptr<StateCommandBlock> CompoundStateBlock::getBlock(__int32) const // 0x100B3C20
{
    mangled_assert("?getBlock@CompoundStateBlock@@QBE?AV?$shared_ptr@VStateCommandBlock@@@boost@@H@Z");
    todo("implement");
}

boost::shared_ptr<StateCommandBlock> CompoundStateBlock::getInvBlock(__int32) const // 0x100B3CA0
{
    mangled_assert("?getInvBlock@CompoundStateBlock@@QBE?AV?$shared_ptr@VStateCommandBlock@@@boost@@H@Z");
    todo("implement");
}

void CompoundStateBlock::setVariables(StateVariableInstance const &) // 0x100B4280
{
    mangled_assert("?setVariables@CompoundStateBlock@@QAEXABVStateVariableInstance@@@Z");
    todo("implement");
}

void CompoundStateBlock::executeVariables(StateVariableInstance const &, CompoundStateBlock::ExecuteVarFilter *) // 0x100B3970
{
    mangled_assert("?executeVariables@CompoundStateBlock@@QAEXABVStateVariableInstance@@PAVExecuteVarFilter@1@@Z");
    todo("implement");
}

bool CompoundStateBlock::findStaticVariable(char const *, unsigned __int32 &) const // 0x100B3A60
{
    mangled_assert("?findStaticVariable@CompoundStateBlock@@QBE_NPBDAAI@Z");
    todo("implement");
}

char const *CompoundStateBlock::getStaticVariable(unsigned __int32) const // 0x100B3D80
{
    mangled_assert("?getStaticVariable@CompoundStateBlock@@QBEPBDI@Z");
    todo("implement");
}

/* ---------- private code */

_static void executeCommand(rndTable *gl, StateCommand const *command) // 0x100B3770
{
    mangled_assert("executeCommand");
    todo("implement");
}
#endif
