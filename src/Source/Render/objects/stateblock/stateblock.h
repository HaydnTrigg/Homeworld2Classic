#if 0
#ifndef __STATEBLOCK_H__
#define __STATEBLOCK_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum StateFuncID
{
    stateFuncI = 0,
    stateFuncVp,
    stateFuncFp,
    stateFuncCf,
    stateFuncII,
    stateFuncITgm,
    stateFuncTfTf,
    stateFuncIII,
    stateFuncProgIV,
    stateFuncCfII,
    stateFuncSoSoSo,
    stateFuncTwTwTw,
    stateFuncIIII,
    stateFuncIIIIII,
    stateFuncIIIIIIIBBB,
    stateFuncIB,
    stateFuncIC,
    stateFuncIIF,
    stateFuncIFP,
    stateFuncIIFP,
    stateFuncC,
    stateFuncB,
    stateFuncBBBB,
    stateFuncF,
    stateFuncFF,
    stateFuncT,
    stateFuncIBV,
    stateFuncM,
    stateFuncIT,
};

/* ---------- definitions */

union StateFunc
{
    void (*funcI)(unsigned __int32); // 0x0
    void (*funcVp)(eVertexPrograms); // 0x0
    void (*funcFp)(eFragmentPrograms); // 0x0
    void (*funcCf)(ComparisonFunc); // 0x0
    void (*funcII)(unsigned __int32, unsigned __int32); // 0x0
    void (*funcITgm)(unsigned __int32, TexgenMode); // 0x0
    void (*funcTfTf)(TextureFilter, TextureFilter); // 0x0
    void (*funcIII)(unsigned __int32, unsigned __int32, unsigned __int32); // 0x0
    void (*funcProgIV)(eProgramType const, unsigned __int32 const, vector4 const &); // 0x0
    void (*funcCfII)(ComparisonFunc, unsigned __int32, unsigned __int32); // 0x0
    void (*funcSoSoSo)(StencilOp, StencilOp, StencilOp); // 0x0
    void (*funcTwTwTw)(TextureWrap, TextureWrap, TextureWrap); // 0x0
    void (*funcIIII)(unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32); // 0x0
    void (*funcIIIIII)(unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32); // 0x0
    void (*funcIIIIIIIBBB)(unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, bool, bool, bool); // 0x0
    bool (*funcIB)(unsigned __int32, bool); // 0x0
    void (*funcIC)(unsigned __int32, vector4 const &); // 0x0
    void (*funcIIF)(unsigned __int32, unsigned __int32, float); // 0x0
    void (*funcIFP)(unsigned __int32, float const *); // 0x0
    void (*funcIIFP)(unsigned __int32, unsigned __int32, float const *); // 0x0
    void (*funcIBV)(unsigned __int32, bool, vector4 const &); // 0x0
    void (*funcB)(bool); // 0x0
    void (*funcBBBB)(bool, bool, bool, bool); // 0x0
    void (*funcC)(vector4 const &); // 0x0
    void (*funcF)(float); // 0x0
    void (*funcFF)(float, float); // 0x0
    void (*funcT)(unsigned __int32); // 0x0
    void (*funcM)(matrix4 const &); // 0x0
    void (*funcIT)(__int32, unsigned __int32); // 0x0
};
static_assert(sizeof(StateFunc) == 4, "Invalid StateFunc size");

struct StateCommand
{
    StateCommandBlock *m_block; // 0x0
    StateFuncID m_id; // 0x4
    StateFunc m_func; // 0x8
    char m_data[64]; // 0xC
    StateCommand(StateCommandBlock *, StateFuncID, StateFunc, std::vector<StateParserVariable *,std::allocator<StateParserVariable *> > &);
    StateCommand();
};
static_assert(sizeof(StateCommand) == 76, "Invalid StateCommand size");

class StateVariable
{
public:
    struct CommandData
    {
        StateCommand *m_command; // 0x0
        void *m_data; // 0x4
    };
    static_assert(sizeof(CommandData) == 8, "Invalid CommandData size");
    typedef std::vector<StateVariable::CommandData,std::allocator<StateVariable::CommandData> > CommandDataCont;
    StateVariable(StateVariable const &);
    StateVariable(char const *, StateVarType);
    ~StateVariable();
    void addInstance(StateCommand *, void *);
    char const *getName() const;
    unsigned long getNameKey() const;
    StateVarType const getType() const;
    std::vector<StateVariable::CommandData,std::allocator<StateVariable::CommandData> > const &getInstances() const;
private:
    StateVarType m_type; // 0x0
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x4
    unsigned long m_nameKey; // 0x1C
public:
    std::vector<StateVariable::CommandData,std::allocator<StateVariable::CommandData> > m_instances; // 0x20
    StateVariable &operator=(StateVariable const &); /* compiler_generated() */
};
static_assert(sizeof(StateVariable) == 44, "Invalid StateVariable size");

class StateCommandBlock
{
public:
    typedef std::vector<StateCommand *,std::allocator<StateCommand *> > StateCommandCont;
    typedef std::vector<StateVariable *,std::allocator<StateVariable *> > StateVariableCont;
    class ExecuteFilter
    {
    public:
        virtual bool TestCommand(StateCommand const &) const = 0;
        ExecuteFilter(StateCommandBlock::ExecuteFilter const &); /* compiler_generated() */
        ExecuteFilter(); /* compiler_generated() */
        StateCommandBlock::ExecuteFilter &operator=(StateCommandBlock::ExecuteFilter const &); /* compiler_generated() */
    };
    static_assert(sizeof(ExecuteFilter) == 4, "Invalid ExecuteFilter size");
    rndTable *m_gl; // 0x0
    std::vector<StateCommand *,std::allocator<StateCommand *> > m_commands; // 0x4
    std::vector<StateVariable *,std::allocator<StateVariable *> > m_variables; // 0x10
private:
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x1C
    unsigned long m_nameKey; // 0x34
public:
    StateCommandBlock(StateCommandBlock const &); /* compiler_generated() */
    StateCommandBlock();
    ~StateCommandBlock();
    void setName(char const *);
    char const *getName() const;
    unsigned long getNameKey() const;
    void addVariable(char *, StateVarType);
    void addCommand(StateFuncID, StateFunc, std::vector<StateParserVariable *,std::allocator<StateParserVariable *> > &);
    StateVariable *findVariable(char *);
    bool setVariable(__int32, void *);
    void execute(StateCommandBlock::ExecuteFilter *);
    void resetVariables();
    StateCommandBlock &operator=(StateCommandBlock const &); /* compiler_generated() */
};
static_assert(sizeof(StateCommandBlock) == 56, "Invalid StateCommandBlock size");

class CompoundStateBlock
{
public:
    typedef std::vector<boost::shared_ptr<StateCommandBlock>,std::allocator<boost::shared_ptr<StateCommandBlock> > > BlockCont;
    class ExecuteVarFilter
    {
    public:
        virtual bool TestVariable(StateVariableInstance::Var const &) const = 0;
        virtual bool TestCommand(StateCommand const &) const = 0;
        ExecuteVarFilter(CompoundStateBlock::ExecuteVarFilter const &); /* compiler_generated() */
        ExecuteVarFilter(); /* compiler_generated() */
        CompoundStateBlock::ExecuteVarFilter &operator=(CompoundStateBlock::ExecuteVarFilter const &); /* compiler_generated() */
    };
    static_assert(sizeof(ExecuteVarFilter) == 4, "Invalid ExecuteVarFilter size");
    enum
    {
        MaxNumPasses = 32, // 0x0020 ' '
    };
    typedef std::bitset<32> BlockMask;
    CompoundStateBlock(CompoundStateBlock const &); /* compiler_generated() */
    CompoundStateBlock();
    ~CompoundStateBlock();
    void setName(char const *);
    char const *getName() const;
    unsigned long getNameKey() const;
    __int32 getNumBlocks() const;
    boost::shared_ptr<StateCommandBlock> getBlock(__int32) const;
    boost::shared_ptr<StateCommandBlock> getInvBlock(__int32) const;
    void appendStateBlock(boost::shared_ptr<StateCommandBlock>, bool);
    StateVariable *findVariable(unsigned long) const;
    StateVariable *findVariable(char const *) const;
    __int32 findVariableIndex(unsigned long) const;
    __int32 findVariableIndex(char const *) const;
    bool hasVariables() const;
    bool setVariable(__int32, void *);
    void setVariables(StateVariableInstance const &);
    void executeVariables(StateVariableInstance const &, CompoundStateBlock::ExecuteVarFilter *);
    unsigned __int32 getNumVariables() const;
    StateVariable const *getVariable(unsigned __int32) const;
    StateVariable *getVariable(unsigned __int32);
    std::vector<boost::shared_ptr<StateCommandBlock>,std::allocator<boost::shared_ptr<StateCommandBlock> > > const &getBlocks() const;
    std::vector<boost::shared_ptr<StateCommandBlock>,std::allocator<boost::shared_ptr<StateCommandBlock> > > &getBlocks();
    std::vector<boost::shared_ptr<StateCommandBlock>,std::allocator<boost::shared_ptr<StateCommandBlock> > > const &getInvBlocks() const;
    std::vector<boost::shared_ptr<StateCommandBlock>,std::allocator<boost::shared_ptr<StateCommandBlock> > > &getInvBlocks();
    void setStaticVariables(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > const &);
    bool findStaticVariable(char const *, unsigned __int32 &) const;
    unsigned __int32 getNumStaticVariables() const;
    char const *getStaticVariable(unsigned __int32) const;
    bool isBlockActive(unsigned __int32) const;
    std::bitset<32> const &getBlockMask() const;
    rndTable *m_gl; // 0x0
private:
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x4
    unsigned long m_nameKey; // 0x1C
    std::vector<boost::shared_ptr<StateCommandBlock>,std::allocator<boost::shared_ptr<StateCommandBlock> > > m_blocks; // 0x20
    std::vector<boost::shared_ptr<StateCommandBlock>,std::allocator<boost::shared_ptr<StateCommandBlock> > > m_invBlocks; // 0x2C
    std::bitset<32> m_blockMask; // 0x38
    std::vector<StateVariable *,std::allocator<StateVariable *> > m_variables; // 0x3C
    std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > m_staticVariables; // 0x48
    typedef std::vector<StateVariable *,std::allocator<StateVariable *> > StateVariableCont;
public:
    CompoundStateBlock &operator=(CompoundStateBlock const &); /* compiler_generated() */
};
static_assert(sizeof(CompoundStateBlock) == 84, "Invalid CompoundStateBlock size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __STATEBLOCK_H__
/* combined */
#ifndef __STATEBLOCK_H__
#define __STATEBLOCK_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum StateFuncID
{
    stateFuncI = 0,
    stateFuncVp,
    stateFuncFp,
    stateFuncCf,
    stateFuncII,
    stateFuncITgm,
    stateFuncTfTf,
    stateFuncIII,
    stateFuncProgIV,
    stateFuncCfII,
    stateFuncSoSoSo,
    stateFuncTwTwTw,
    stateFuncIIII,
    stateFuncIIIIII,
    stateFuncIIIIIIIBBB,
    stateFuncIB,
    stateFuncIC,
    stateFuncIIF,
    stateFuncIFP,
    stateFuncIIFP,
    stateFuncC,
    stateFuncB,
    stateFuncBBBB,
    stateFuncF,
    stateFuncFF,
    stateFuncT,
    stateFuncIBV,
    stateFuncM,
    stateFuncIT,
};

/* ---------- definitions */

union StateFunc
{
    void (*funcI)(unsigned __int32); // 0x0
    void (*funcVp)(eVertexPrograms); // 0x0
    void (*funcFp)(eFragmentPrograms); // 0x0
    void (*funcCf)(ComparisonFunc); // 0x0
    void (*funcII)(unsigned __int32, unsigned __int32); // 0x0
    void (*funcITgm)(unsigned __int32, TexgenMode); // 0x0
    void (*funcTfTf)(TextureFilter, TextureFilter); // 0x0
    void (*funcIII)(unsigned __int32, unsigned __int32, unsigned __int32); // 0x0
    void (*funcProgIV)(eProgramType const, unsigned __int32 const, vector4 const &); // 0x0
    void (*funcCfII)(ComparisonFunc, unsigned __int32, unsigned __int32); // 0x0
    void (*funcSoSoSo)(StencilOp, StencilOp, StencilOp); // 0x0
    void (*funcTwTwTw)(TextureWrap, TextureWrap, TextureWrap); // 0x0
    void (*funcIIII)(unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32); // 0x0
    void (*funcIIIIII)(unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32); // 0x0
    void (*funcIIIIIIIBBB)(unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, bool, bool, bool); // 0x0
    bool (*funcIB)(unsigned __int32, bool); // 0x0
    void (*funcIC)(unsigned __int32, vector4 const &); // 0x0
    void (*funcIIF)(unsigned __int32, unsigned __int32, float); // 0x0
    void (*funcIFP)(unsigned __int32, float const *); // 0x0
    void (*funcIIFP)(unsigned __int32, unsigned __int32, float const *); // 0x0
    void (*funcIBV)(unsigned __int32, bool, vector4 const &); // 0x0
    void (*funcB)(bool); // 0x0
    void (*funcBBBB)(bool, bool, bool, bool); // 0x0
    void (*funcC)(vector4 const &); // 0x0
    void (*funcF)(float); // 0x0
    void (*funcFF)(float, float); // 0x0
    void (*funcT)(unsigned __int32); // 0x0
    void (*funcM)(matrix4 const &); // 0x0
    void (*funcIT)(__int32, unsigned __int32); // 0x0
};
static_assert(sizeof(StateFunc) == 4, "Invalid StateFunc size");

struct StateCommand
{
    StateCommandBlock *m_block; // 0x0
    StateFuncID m_id; // 0x4
    StateFunc m_func; // 0x8
    char m_data[64]; // 0xC
    StateCommand(StateCommandBlock *, StateFuncID, StateFunc, std::vector<StateParserVariable *,std::allocator<StateParserVariable *> > &);
    StateCommand();
};
static_assert(sizeof(StateCommand) == 76, "Invalid StateCommand size");

class StateVariable
{
public:
    struct CommandData
    {
        StateCommand *m_command; // 0x0
        void *m_data; // 0x4
    };
    static_assert(sizeof(CommandData) == 8, "Invalid CommandData size");
    typedef std::vector<StateVariable::CommandData,std::allocator<StateVariable::CommandData> > CommandDataCont;
    StateVariable(StateVariable const &);
    StateVariable(char const *, StateVarType);
    ~StateVariable();
    void addInstance(StateCommand *, void *);
    _inline char const *getName() const;
    _inline unsigned long getNameKey() const;
    _inline StateVarType const getType() const;
    std::vector<StateVariable::CommandData,std::allocator<StateVariable::CommandData> > const &getInstances() const;
private:
    StateVarType m_type; // 0x0
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x4
    unsigned long m_nameKey; // 0x1C
public:
    std::vector<StateVariable::CommandData,std::allocator<StateVariable::CommandData> > m_instances; // 0x20
    StateVariable &operator=(StateVariable const &); /* compiler_generated() */
};
static_assert(sizeof(StateVariable) == 44, "Invalid StateVariable size");

class StateCommandBlock
{
public:
    typedef std::vector<StateCommand *,std::allocator<StateCommand *> > StateCommandCont;
    typedef std::vector<StateVariable *,std::allocator<StateVariable *> > StateVariableCont;
    class ExecuteFilter
    {
    public:
        virtual bool TestCommand(StateCommand const &) const = 0;
        ExecuteFilter(StateCommandBlock::ExecuteFilter const &); /* compiler_generated() */
        _inline ExecuteFilter(); /* compiler_generated() */
        StateCommandBlock::ExecuteFilter &operator=(StateCommandBlock::ExecuteFilter const &); /* compiler_generated() */
    };
    static_assert(sizeof(ExecuteFilter) == 4, "Invalid ExecuteFilter size");
    rndTable *m_gl; // 0x0
    std::vector<StateCommand *,std::allocator<StateCommand *> > m_commands; // 0x4
    std::vector<StateVariable *,std::allocator<StateVariable *> > m_variables; // 0x10
private:
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x1C
    unsigned long m_nameKey; // 0x34
public:
    _inline StateCommandBlock(StateCommandBlock const &); /* compiler_generated() */
    StateCommandBlock();
    ~StateCommandBlock();
    void setName(char const *);
    _inline char const *getName() const;
    _inline unsigned long getNameKey() const;
    void addVariable(char *, StateVarType);
    void addCommand(StateFuncID, StateFunc, std::vector<StateParserVariable *,std::allocator<StateParserVariable *> > &);
    StateVariable *findVariable(char *);
    bool setVariable(__int32, void *);
    void execute(StateCommandBlock::ExecuteFilter *);
    void resetVariables();
    _inline StateCommandBlock &operator=(StateCommandBlock const &); /* compiler_generated() */
};
static_assert(sizeof(StateCommandBlock) == 56, "Invalid StateCommandBlock size");

class CompoundStateBlock
{
public:
    typedef std::vector<boost::shared_ptr<StateCommandBlock>,std::allocator<boost::shared_ptr<StateCommandBlock> > > BlockCont;
    class ExecuteVarFilter
    {
    public:
        virtual bool TestVariable(StateVariableInstance::Var const &) const = 0;
        virtual bool TestCommand(StateCommand const &) const = 0;
        ExecuteVarFilter(CompoundStateBlock::ExecuteVarFilter const &); /* compiler_generated() */
        _inline ExecuteVarFilter(); /* compiler_generated() */
        CompoundStateBlock::ExecuteVarFilter &operator=(CompoundStateBlock::ExecuteVarFilter const &); /* compiler_generated() */
    };
    static_assert(sizeof(ExecuteVarFilter) == 4, "Invalid ExecuteVarFilter size");
    enum
    {
        MaxNumPasses = 32, // 0x0020 ' '
    };
    typedef std::bitset<32> BlockMask;
    _inline CompoundStateBlock(CompoundStateBlock const &); /* compiler_generated() */
    CompoundStateBlock();
    ~CompoundStateBlock();
    void setName(char const *);
    _inline char const *getName() const;
    _inline unsigned long getNameKey() const;
    __int32 getNumBlocks() const;
    boost::shared_ptr<StateCommandBlock> getBlock(__int32) const;
    boost::shared_ptr<StateCommandBlock> getInvBlock(__int32) const;
    void appendStateBlock(boost::shared_ptr<StateCommandBlock>, bool);
    StateVariable *findVariable(unsigned long) const;
    StateVariable *findVariable(char const *) const;
    __int32 findVariableIndex(unsigned long) const;
    __int32 findVariableIndex(char const *) const;
    _inline bool hasVariables() const;
    bool setVariable(__int32, void *);
    void setVariables(StateVariableInstance const &);
    void executeVariables(StateVariableInstance const &, CompoundStateBlock::ExecuteVarFilter *);
    _inline unsigned __int32 getNumVariables() const;
    _inline StateVariable const *getVariable(unsigned __int32) const;
    _inline StateVariable *getVariable(unsigned __int32);
    _inline std::vector<boost::shared_ptr<StateCommandBlock>,std::allocator<boost::shared_ptr<StateCommandBlock> > > const &getBlocks() const;
    _inline std::vector<boost::shared_ptr<StateCommandBlock>,std::allocator<boost::shared_ptr<StateCommandBlock> > > &getBlocks();
    _inline std::vector<boost::shared_ptr<StateCommandBlock>,std::allocator<boost::shared_ptr<StateCommandBlock> > > const &getInvBlocks() const;
    _inline std::vector<boost::shared_ptr<StateCommandBlock>,std::allocator<boost::shared_ptr<StateCommandBlock> > > &getInvBlocks();
    _inline void setStaticVariables(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > const &);
    bool findStaticVariable(char const *, unsigned __int32 &) const;
    _inline unsigned __int32 getNumStaticVariables() const;
    char const *getStaticVariable(unsigned __int32) const;
    _inline bool isBlockActive(unsigned __int32) const;
    _inline std::bitset<32> const &getBlockMask() const;
    rndTable *m_gl; // 0x0
private:
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x4
    unsigned long m_nameKey; // 0x1C
    std::vector<boost::shared_ptr<StateCommandBlock>,std::allocator<boost::shared_ptr<StateCommandBlock> > > m_blocks; // 0x20
    std::vector<boost::shared_ptr<StateCommandBlock>,std::allocator<boost::shared_ptr<StateCommandBlock> > > m_invBlocks; // 0x2C
    std::bitset<32> m_blockMask; // 0x38
    std::vector<StateVariable *,std::allocator<StateVariable *> > m_variables; // 0x3C
    std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > m_staticVariables; // 0x48
    typedef std::vector<StateVariable *,std::allocator<StateVariable *> > StateVariableCont;
public:
    _inline CompoundStateBlock &operator=(CompoundStateBlock const &); /* compiler_generated() */
};
static_assert(sizeof(CompoundStateBlock) == 84, "Invalid CompoundStateBlock size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern char const *_sub_100B0D10(StateVariable const *const);
_inline char const *StateVariable::getName() const // 0x100B0D10
{
    mangled_assert("?getName@StateVariable@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_100B0D10(this);
    return __result;
}

_extern unsigned long _sub_100B3D20(StateVariable const *const);
_inline unsigned long StateVariable::getNameKey() const // 0x100B3D20
{
    mangled_assert("?getNameKey@StateVariable@@QBEKXZ");
    todo("implement");
    unsigned long __result = _sub_100B3D20(this);
    return __result;
}

_extern StateVarType const _sub_100B0D20(StateVariable const *const);
_inline StateVarType const StateVariable::getType() const // 0x100B0D20
{
    mangled_assert("?getType@StateVariable@@QBE?BW4StateVarType@@XZ");
    todo("implement");
    StateVarType const __result = _sub_100B0D20(this);
    return __result;
}

_extern char const *_sub_10019300(StateCommandBlock const *const);
_inline char const *StateCommandBlock::getName() const // 0x10019300
{
    mangled_assert("?getName@StateCommandBlock@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_10019300(this);
    return __result;
}

_extern unsigned long _sub_10019330(StateCommandBlock const *const);
_inline unsigned long StateCommandBlock::getNameKey() const // 0x10019330
{
    mangled_assert("?getNameKey@StateCommandBlock@@QBEKXZ");
    todo("implement");
    unsigned long __result = _sub_10019330(this);
    return __result;
}

_extern char const *_sub_100192F0(CompoundStateBlock const *const);
_inline char const *CompoundStateBlock::getName() const // 0x100192F0
{
    mangled_assert("?getName@CompoundStateBlock@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_100192F0(this);
    return __result;
}

_extern unsigned long _sub_10019320(CompoundStateBlock const *const);
_inline unsigned long CompoundStateBlock::getNameKey() const // 0x10019320
{
    mangled_assert("?getNameKey@CompoundStateBlock@@QBEKXZ");
    todo("implement");
    unsigned long __result = _sub_10019320(this);
    return __result;
}

_extern unsigned __int32 _sub_10019410(CompoundStateBlock const *const);
_inline unsigned __int32 CompoundStateBlock::getNumVariables() const // 0x10019410
{
    mangled_assert("?getNumVariables@CompoundStateBlock@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_10019410(this);
    return __result;
}

_extern StateVariable *_sub_100194E0(CompoundStateBlock *const, unsigned __int32);
_inline StateVariable *CompoundStateBlock::getVariable(unsigned __int32) // 0x100194E0
{
    mangled_assert("?getVariable@CompoundStateBlock@@QAEPAVStateVariable@@I@Z");
    todo("implement");
    StateVariable * __result = _sub_100194E0(this, arg);
    return __result;
}

_extern StateVariable const *_sub_100194F0(CompoundStateBlock const *const, unsigned __int32);
_inline StateVariable const *CompoundStateBlock::getVariable(unsigned __int32) const // 0x100194F0
{
    mangled_assert("?getVariable@CompoundStateBlock@@QBEPBVStateVariable@@I@Z");
    todo("implement");
    StateVariable const * __result = _sub_100194F0(this, arg);
    return __result;
}

_extern std::vector<boost::shared_ptr<StateCommandBlock>,std::allocator<boost::shared_ptr<StateCommandBlock> > > &_sub_10019140(CompoundStateBlock *const);
_inline std::vector<boost::shared_ptr<StateCommandBlock>,std::allocator<boost::shared_ptr<StateCommandBlock> > > &CompoundStateBlock::getBlocks() // 0x10019140
{
    mangled_assert("?getBlocks@CompoundStateBlock@@QAEAAV?$vector@V?$shared_ptr@VStateCommandBlock@@@boost@@V?$allocator@V?$shared_ptr@VStateCommandBlock@@@boost@@@std@@@std@@XZ");
    todo("implement");
    std::vector<boost::shared_ptr<StateCommandBlock>,std::allocator<boost::shared_ptr<StateCommandBlock> > > & __result = _sub_10019140(this);
    return __result;
}

_extern std::vector<boost::shared_ptr<StateCommandBlock>,std::allocator<boost::shared_ptr<StateCommandBlock> > > const &_sub_10019150(CompoundStateBlock const *const);
_inline std::vector<boost::shared_ptr<StateCommandBlock>,std::allocator<boost::shared_ptr<StateCommandBlock> > > const &CompoundStateBlock::getBlocks() const // 0x10019150
{
    mangled_assert("?getBlocks@CompoundStateBlock@@QBEABV?$vector@V?$shared_ptr@VStateCommandBlock@@@boost@@V?$allocator@V?$shared_ptr@VStateCommandBlock@@@boost@@@std@@@std@@XZ");
    todo("implement");
    std::vector<boost::shared_ptr<StateCommandBlock>,std::allocator<boost::shared_ptr<StateCommandBlock> > > const & __result = _sub_10019150(this);
    return __result;
}

_extern std::vector<boost::shared_ptr<StateCommandBlock>,std::allocator<boost::shared_ptr<StateCommandBlock> > > &_sub_100192A0(CompoundStateBlock *const);
_inline std::vector<boost::shared_ptr<StateCommandBlock>,std::allocator<boost::shared_ptr<StateCommandBlock> > > &CompoundStateBlock::getInvBlocks() // 0x100192A0
{
    mangled_assert("?getInvBlocks@CompoundStateBlock@@QAEAAV?$vector@V?$shared_ptr@VStateCommandBlock@@@boost@@V?$allocator@V?$shared_ptr@VStateCommandBlock@@@boost@@@std@@@std@@XZ");
    todo("implement");
    std::vector<boost::shared_ptr<StateCommandBlock>,std::allocator<boost::shared_ptr<StateCommandBlock> > > & __result = _sub_100192A0(this);
    return __result;
}

_extern std::vector<boost::shared_ptr<StateCommandBlock>,std::allocator<boost::shared_ptr<StateCommandBlock> > > const &_sub_100192B0(CompoundStateBlock const *const);
_inline std::vector<boost::shared_ptr<StateCommandBlock>,std::allocator<boost::shared_ptr<StateCommandBlock> > > const &CompoundStateBlock::getInvBlocks() const // 0x100192B0
{
    mangled_assert("?getInvBlocks@CompoundStateBlock@@QBEABV?$vector@V?$shared_ptr@VStateCommandBlock@@@boost@@V?$allocator@V?$shared_ptr@VStateCommandBlock@@@boost@@@std@@@std@@XZ");
    todo("implement");
    std::vector<boost::shared_ptr<StateCommandBlock>,std::allocator<boost::shared_ptr<StateCommandBlock> > > const & __result = _sub_100192B0(this);
    return __result;
}

_extern bool _sub_10019560(CompoundStateBlock const *const);
_inline bool CompoundStateBlock::hasVariables() const // 0x10019560
{
    mangled_assert("?hasVariables@CompoundStateBlock@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_10019560(this);
    return __result;
}

_extern void _sub_1001BB00(CompoundStateBlock *const, std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > const &);
_inline void CompoundStateBlock::setStaticVariables(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > const &) // 0x1001BB00
{
    mangled_assert("?setStaticVariables@CompoundStateBlock@@QAEXABV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z");
    todo("implement");
    _sub_1001BB00(this, arg);
}

_extern unsigned __int32 _sub_100193B0(CompoundStateBlock const *const);
_inline unsigned __int32 CompoundStateBlock::getNumStaticVariables() const // 0x100193B0
{
    mangled_assert("?getNumStaticVariables@CompoundStateBlock@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_100193B0(this);
    return __result;
}

_extern bool _sub_100196B0(CompoundStateBlock const *const, unsigned __int32);
_inline bool CompoundStateBlock::isBlockActive(unsigned __int32) const // 0x100196B0
{
    mangled_assert("?isBlockActive@CompoundStateBlock@@QBE_NI@Z");
    todo("implement");
    bool __result = _sub_100196B0(this, arg);
    return __result;
}

_extern std::bitset<32> const &_sub_10019120(CompoundStateBlock const *const);
_inline std::bitset<32> const &CompoundStateBlock::getBlockMask() const // 0x10019120
{
    mangled_assert("?getBlockMask@CompoundStateBlock@@QBEABV?$bitset@$0CA@@std@@XZ");
    todo("implement");
    std::bitset<32> const & __result = _sub_10019120(this);
    return __result;
}

/* ---------- private code */

#endif // __STATEBLOCK_H__
#endif
