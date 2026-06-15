#if 0
#ifndef __COMPOUNDSTATEBLOCKINSTANCE_H__
#define __COMPOUNDSTATEBLOCKINSTANCE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class CompoundStateBlockInstance
{
public:
    CompoundStateBlockInstance(CompoundStateBlockInstance const &);
    CompoundStateBlockInstance(CompoundStateBlock *);
    ~CompoundStateBlockInstance();
    CompoundStateBlock *m_block; // 0x0
private:
    StateVariableInstance *m_variables; // 0x4
    std::bitset<32> m_blockMask; // 0x8
public:
    StateVariableInstance &getVariables() const;
    void setBlockActive(unsigned __int32, bool);
    bool isBlockActive(unsigned __int32) const;
    std::bitset<32> const &getBlockMask() const;
};
static_assert(sizeof(CompoundStateBlockInstance) == 12, "Invalid CompoundStateBlockInstance size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __COMPOUNDSTATEBLOCKINSTANCE_H__
/* combined */
#ifndef __COMPOUNDSTATEBLOCKINSTANCE_H__
#define __COMPOUNDSTATEBLOCKINSTANCE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class CompoundStateBlockInstance
{
public:
    CompoundStateBlockInstance(CompoundStateBlockInstance const &);
    CompoundStateBlockInstance(CompoundStateBlock *);
    ~CompoundStateBlockInstance();
    CompoundStateBlock *m_block; // 0x0
private:
    StateVariableInstance *m_variables; // 0x4
    std::bitset<32> m_blockMask; // 0x8
public:
    _inline StateVariableInstance &getVariables() const;
    _inline void setBlockActive(unsigned __int32, bool);
    _inline bool isBlockActive(unsigned __int32) const;
    _inline std::bitset<32> const &getBlockMask() const;
};
static_assert(sizeof(CompoundStateBlockInstance) == 12, "Invalid CompoundStateBlockInstance size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline StateVariableInstance &CompoundStateBlockInstance::getVariables() const // 0x10019500
{
    mangled_assert("?getVariables@CompoundStateBlockInstance@@QBEAAVStateVariableInstance@@XZ");
    todo("implement");
}

_inline bool CompoundStateBlockInstance::isBlockActive(unsigned __int32) const // 0x100196F0
{
    mangled_assert("?isBlockActive@CompoundStateBlockInstance@@QBE_NI@Z");
    todo("implement");
}

_inline void CompoundStateBlockInstance::setBlockActive(unsigned __int32, bool) // 0x1001B9B0
{
    mangled_assert("?setBlockActive@CompoundStateBlockInstance@@QAEXI_N@Z");
    todo("implement");
}

_inline std::bitset<32> const &CompoundStateBlockInstance::getBlockMask() const // 0x10019130
{
    mangled_assert("?getBlockMask@CompoundStateBlockInstance@@QBEABV?$bitset@$0CA@@std@@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __COMPOUNDSTATEBLOCKINSTANCE_H__
#endif
