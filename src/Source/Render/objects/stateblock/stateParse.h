#if 0
#ifndef __STATEPARSE_H__
#define __STATEPARSE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct StateSymbol
{
    char *m_name; // 0x0
    unsigned long m_value; // 0x4
};
static_assert(sizeof(StateSymbol) == 8, "Invalid StateSymbol size");

struct StateParserVariable
{
    _inline StateParserVariable();
    char *m_name; // 0x0
    long m_iVal; // 0x4
    float m_fVal; // 0x8
    bool m_bVal; // 0xC
    char *m_sVal; // 0x10
    vector4 m_cVal; // 0x14
    vector4 m_vVal; // 0x24
    matrix4 m_mVal; // 0x34
    void *m_tVal; // 0x74
    void *m_dataPos; // 0x78
};
static_assert(sizeof(StateParserVariable) == 124, "Invalid StateParserVariable size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline StateParserVariable::StateParserVariable() // 0x100BFB70
{
    mangled_assert("??0StateParserVariable@@QAE@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __STATEPARSE_H__
#endif
