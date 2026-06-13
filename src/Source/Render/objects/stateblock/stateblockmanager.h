#if 0
#ifndef __STATEBLOCKMANAGER_H__
#define __STATEBLOCKMANAGER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class StateBlockManager
{
public:
    static bool startup();
    static bool shutdown();
    static StateBlockManager *i();
    static StateBlockManager *instance();
    void attachGL(rndTable *);
    rndTable *getGL() const;
    CompoundStateBlock *findCompoundStateBlock(char const *, char const *);
    boost::shared_ptr<StateCommandBlock> loadStateBlock(char const *, char const *);
    unsigned long getVariableKey(char const *);
    CompoundStateBlock *getOverrideBlock() const;
    void setOverrideBlock(CompoundStateBlock *);
    void clearOverrideBlock();
    void resetVariables();
    bool singlePassShadows() const;
protected:
    StateBlockManager();
    ~StateBlockManager();
private:
    boost::shared_ptr<StateCommandBlock> createStateBlock();
    CompoundStateBlock *loadCompoundStateBlock(char const *, char const *);
    boost::shared_ptr<StateCommandBlock> createInverseBlock(StateCommandBlock const *) const;
    typedef std::vector<StateCommandBlock *,std::allocator<StateCommandBlock *> > BlockCont;
    class Data;
    StateBlockManager::Data *m_pimpl; // 0x0
    static StateBlockManager *s_instance;
};
static_assert(sizeof(StateBlockManager) == 4, "Invalid StateBlockManager size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __STATEBLOCKMANAGER_H__
/* combined */
#ifndef __STATEBLOCKMANAGER_H__
#define __STATEBLOCKMANAGER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class StateBlockManager
{
public:
    static bool startup();
    static bool shutdown();
    static StateBlockManager *i();
    static _inline StateBlockManager *instance();
    void attachGL(rndTable *);
    rndTable *getGL() const;
    CompoundStateBlock *findCompoundStateBlock(char const *, char const *);
    boost::shared_ptr<StateCommandBlock> loadStateBlock(char const *, char const *);
    unsigned long getVariableKey(char const *);
    CompoundStateBlock *getOverrideBlock() const;
    void setOverrideBlock(CompoundStateBlock *);
    void clearOverrideBlock();
    void resetVariables();
    bool singlePassShadows() const;
protected:
    StateBlockManager();
    ~StateBlockManager();
private:
    boost::shared_ptr<StateCommandBlock> createStateBlock();
    CompoundStateBlock *loadCompoundStateBlock(char const *, char const *);
    boost::shared_ptr<StateCommandBlock> createInverseBlock(StateCommandBlock const *) const;
    typedef std::vector<StateCommandBlock *,std::allocator<StateCommandBlock *> > BlockCont;
    class Data;
    StateBlockManager::Data *m_pimpl; // 0x0
    static StateBlockManager *s_instance;
};
static_assert(sizeof(StateBlockManager) == 4, "Invalid StateBlockManager size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern StateBlockManager *_sub_10019690();
_inline StateBlockManager *StateBlockManager::instance() // 0x10019690
{
    mangled_assert("?instance@StateBlockManager@@SGPAV1@XZ");
    todo("implement");
    StateBlockManager * __result = _sub_10019690();
    return __result;
}

/* ---------- private code */

#endif // __STATEBLOCKMANAGER_H__
#endif
