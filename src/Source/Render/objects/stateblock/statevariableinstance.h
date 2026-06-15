#if 0
#ifndef __STATEVARIABLEINSTANCE_H__
#define __STATEVARIABLEINSTANCE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class StateVariableInstance
{
public:
    enum
    {
        k_BufferSize = 64, // 0x0040 '@'
    };
    struct Var
    {
        unsigned long m_nameKey; // 0x0
        StateVarType m_type; // 0x4
        unsigned __int32 m_index; // 0x8
        unsigned char m_buf[64]; // 0xC
    };
    static_assert(sizeof(Var) == 76, "Invalid Var size");
    StateVariableInstance(StateVariableInstance const &);
    StateVariableInstance();
    __int32 addVariable(char const *, StateVarType);
    __int32 findVariable(unsigned long);
    __int32 findVariable(char const *);
    bool setVariableData(unsigned __int32, void *);
    bool setVariable(unsigned long, matrix4 const &);
    bool setVariable(unsigned long, vector4 const &);
    bool setVariable(unsigned long, Texture const *);
    bool setVariable(unsigned long, unsigned __int32);
    bool setVariable(unsigned long, float);
    bool setVariable(unsigned long, bool);
    bool setVariable(unsigned long, void *);
    bool setVariable(char const *, matrix4 const &);
    bool setVariable(char const *, vector4 const &);
    bool setVariable(char const *, Texture const *);
    bool setVariable(char const *, unsigned __int32);
    bool setVariable(char const *, float);
    bool setVariable(char const *, bool);
    bool setVariable(char const *, void *);
    bool getVariable(unsigned long, matrix4 &);
    bool getVariable(unsigned long, vector4 &);
    bool getVariable(unsigned long, Texture const *&);
    bool getVariable(unsigned long, unsigned __int32 &);
    bool getVariable(unsigned long, float &);
    bool getVariable(unsigned long, bool &);
    unsigned __int32 getNumVariables() const;
    StateVariableInstance::Var const &getVariables(unsigned __int32) const;
    StateVariableInstance::Var &getVariablesWriteable(unsigned __int32);
    unsigned long getTextureCRC() const;
    void clear();
private:
    void updateTextureCRC();
    StateVariableInstance::Var m_vars[24]; // 0x0
    unsigned __int32 m_numVars; // 0x720
    unsigned long m_textureCRC; // 0x724
public:
    static void *operator new(unsigned __int32);
    static void operator delete(void *, unsigned __int32);
};
static_assert(sizeof(StateVariableInstance) == 1832, "Invalid StateVariableInstance size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __STATEVARIABLEINSTANCE_H__
/* combined */
#ifndef __STATEVARIABLEINSTANCE_H__
#define __STATEVARIABLEINSTANCE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class StateVariableInstance
{
public:
    enum
    {
        k_BufferSize = 64, // 0x0040 '@'
    };
    struct Var
    {
        unsigned long m_nameKey; // 0x0
        StateVarType m_type; // 0x4
        unsigned __int32 m_index; // 0x8
        unsigned char m_buf[64]; // 0xC
    };
    static_assert(sizeof(Var) == 76, "Invalid Var size");
    StateVariableInstance(StateVariableInstance const &);
    StateVariableInstance();
    __int32 addVariable(char const *, StateVarType);
    __int32 findVariable(unsigned long);
    __int32 findVariable(char const *);
    bool setVariableData(unsigned __int32, void *);
    bool setVariable(unsigned long, matrix4 const &);
    bool setVariable(unsigned long, vector4 const &);
    bool setVariable(unsigned long, Texture const *);
    bool setVariable(unsigned long, unsigned __int32);
    bool setVariable(unsigned long, float);
    bool setVariable(unsigned long, bool);
    bool setVariable(unsigned long, void *);
    bool setVariable(char const *, matrix4 const &);
    bool setVariable(char const *, vector4 const &);
    bool setVariable(char const *, Texture const *);
    bool setVariable(char const *, unsigned __int32);
    bool setVariable(char const *, float);
    bool setVariable(char const *, bool);
    bool setVariable(char const *, void *);
    bool getVariable(unsigned long, matrix4 &);
    bool getVariable(unsigned long, vector4 &);
    bool getVariable(unsigned long, Texture const *&);
    bool getVariable(unsigned long, unsigned __int32 &);
    bool getVariable(unsigned long, float &);
    bool getVariable(unsigned long, bool &);
    _inline unsigned __int32 getNumVariables() const;
    _inline StateVariableInstance::Var const &getVariables(unsigned __int32) const;
    _inline StateVariableInstance::Var &getVariablesWriteable(unsigned __int32);
    _inline unsigned long getTextureCRC() const;
    void clear();
private:
    void updateTextureCRC();
    StateVariableInstance::Var m_vars[24]; // 0x0
    unsigned __int32 m_numVars; // 0x720
    unsigned long m_textureCRC; // 0x724
public:
    static void *operator new(unsigned __int32 size);
    static void operator delete(void *p, unsigned __int32 size);
};
static_assert(sizeof(StateVariableInstance) == 1832, "Invalid StateVariableInstance size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline unsigned __int32 StateVariableInstance::getNumVariables() const // 0x10019420
{
    mangled_assert("?getNumVariables@StateVariableInstance@@QBEIXZ");
    todo("implement");
}

_inline StateVariableInstance::Var const &StateVariableInstance::getVariables(unsigned __int32) const // 0x10019510
{
    mangled_assert("?getVariables@StateVariableInstance@@QBEABUVar@1@I@Z");
    todo("implement");
}

_inline StateVariableInstance::Var &StateVariableInstance::getVariablesWriteable(unsigned __int32) // 0x10019520
{
    mangled_assert("?getVariablesWriteable@StateVariableInstance@@QAEAAUVar@1@I@Z");
    todo("implement");
}

_inline unsigned long StateVariableInstance::getTextureCRC() const // 0x10019490
{
    mangled_assert("?getTextureCRC@StateVariableInstance@@QBEKXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __STATEVARIABLEINSTANCE_H__
#endif
