#ifndef __LEX_H__
#define __LEX_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct MyVal
{
    union
    {
        unsigned long m_iVal; // 0x0
        float m_fVal; // 0x0
        bool m_bVal; // 0x0
        char *m_string; // 0x0
        StateSymbol *m_sym; // 0x0
    };
    MyVal();
};
static_assert(sizeof(MyVal) == 4, "Invalid MyVal size");

/* ---------- prototypes */

extern __int32 yywrap();

/* ---------- globals */

/* ---------- public code */

_extern __int32 _sub_100BF950();
__int32 yywrap() // 0x100BF950
{
    mangled_assert("_yywrap@0");
    todo("implement");
    __int32 __result = _sub_100BF950();
    return __result;
}

/* ---------- private code */

#endif // __LEX_H__
